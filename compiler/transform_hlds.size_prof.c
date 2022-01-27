/*
** Automatically generated from `size_prof.m'
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


/* :- module transform_hlds.size_prof. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__size_prof__init
ENDINIT
*/

#include "transform_hlds.size_prof.mih"


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
#include "check_hlds.inst_test.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 155 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 158 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 164 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 170 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0;

#line 179 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1;

#line 182 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2];

#line 185 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2];

#line 188 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2];

#line 191 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 194 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 197 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 200 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 203 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 206 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 209 "transform_hlds.size_prof.c"
static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_info_0_0[11];

#line 212 "transform_hlds.size_prof.c"
static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_info_0_0[11];

#line 215 "transform_hlds.size_prof.c"
static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0;

#line 218 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0[1];

#line 221 "transform_hlds.size_prof.c"
static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_info_0[1];

#line 224 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_info_0[1];

#line 227 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_info_0[1];

#line 230 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
#line 233 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 235 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 238 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
#line 241 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 243 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 245 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 248 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0_10001(
#line 251 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 253 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 256 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0_10001(
#line 259 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 261 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 263 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 266 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
#line 269 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 271 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 274 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
#line 277 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 279 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 281 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 284 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
#line 287 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 289 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 292 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
#line 295 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 297 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 299 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 302 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
#line 305 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 307 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 310 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
#line 313 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 315 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 317 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 320 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
#line 323 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 325 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 328 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
#line 331 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 333 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 335 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 338 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
#line 341 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 343 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 346 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
#line 349 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 351 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 353 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 601 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_49_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 601 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 601 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140);

#line 560 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_48_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 560 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 560 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136);

#line 444 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 444 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 444 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039);

#line 1316 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 1316 "size_prof.m"
  MR_Box transform_hlds__size_prof__X_4,
#line 1316 "size_prof.m"
  MR_Box * transform_hlds__size_prof__X_3);

#line 1201 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
#line 1201 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1201 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2,
#line 1201 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3);

#line 728 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
#line 728 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg);

#line 713 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_16,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_17,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_18,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_19,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_20,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_22,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_23,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_24,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_25,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_26,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo0_27,
#line 713 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_28,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_49,
#line 713 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_50);

#line 1105 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1105__1_3_p_0(
#line 1105 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12,
#line 1105 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_45,
#line 1105 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_46);

#line 771 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__771__1_2_p_0(
#line 771 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_21,
#line 771 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_56);

#line 728 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__728__1_2_p_0(
#line 728 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_36,
#line 728 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_69);

#line 601 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__601__1_3_p_0(
#line 601 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 601 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_139,
#line 601 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140);

#line 560 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__560__1_3_p_0(
#line 560 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 560 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_135,
#line 560 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136);

#line 444 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(
#line 444 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 444 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_1038,
#line 444 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039);

#line 202 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
#line 202 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 202 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 202 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 202 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
#line 202 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 202 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 203 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
#line 203 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 203 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 203 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 203 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
#line 203 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 203 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 204 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
#line 204 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 204 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 204 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 204 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
#line 204 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 204 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 205 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
#line 205 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 205 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 205 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 205 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
#line 205 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 205 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 206 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
#line 206 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 206 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 206 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 206 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
#line 206 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 206 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 208 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0(
#line 208 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 208 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 208 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 208 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0(
#line 208 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 208 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 1305 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
#line 1305 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_3,
#line 1305 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_4);

#line 1274 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
#line 1274 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_6,
#line 1274 "size_prof.m"
  MR_Word transform_hlds__size_prof__Modes_7,
#line 1274 "size_prof.m"
  MR_Word * transform_hlds__size_prof__DefinedArgs_8,
#line 1274 "size_prof.m"
  MR_Word * transform_hlds__size_prof__NonDefinedArgs_9,
#line 1274 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_10);

#line 1250 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
#line 1250 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap_5,
#line 1250 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 1250 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9,
#line 1250 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10);

#line 1246 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
#line 1246 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1246 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1246 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1246 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 1240 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
#line 1240 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 1240 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9);

#line 1213 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
#line 1213 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfo_for_T_20,
#line 1213 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1213 "size_prof.m"
  MR_Word transform_hlds__size_prof__VarCounts_2,
#line 1213 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3,
#line 1213 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_RevMap_4);

#line 1188 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
#line 1188 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_11,
#line 1188 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_12);

#line 1151 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
#line 1151 "size_prof.m"
  MR_Word transform_hlds__size_prof__RttiVarMaps_5,
#line 1151 "size_prof.m"
  MR_Word transform_hlds__size_prof__TVar_6,
#line 1151 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1151 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14);

#line 1144 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
#line 1144 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_5,
#line 1144 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_6,
#line 1144 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_10,
#line 1144 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_11);

#line 1126 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
#line 1126 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_5,
#line 1126 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1126 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1126 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14);

#line 1105 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
#line 1105 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1105 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1105 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2);

#line 1097 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
#line 1097 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1097 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorInfoVar_7,
#line 1097 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypeInfoVars_8,
#line 1097 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_19,
#line 1097 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_20);

#line 1083 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_7,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorModule_8,
#line 1083 "size_prof.m"
  MR_String transform_hlds__size_prof__TypeCtorName_9,
#line 1083 "size_prof.m"
  MR_Integer transform_hlds__size_prof__TypeCtorArity_10,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_17,
#line 1083 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_18);

#line 1048 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
#line 1048 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_6,
#line 1048 "size_prof.m"
  MR_String transform_hlds__size_prof__Prefix_7,
#line 1048 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Var_8,
#line 1048 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_18,
#line 1048 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_19);

#line 1020 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoVar_9,
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__Arg_10,
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_11,
#line 1020 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeGoal_12,
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__MaybeSizeVar0_13,
#line 1020 "size_prof.m"
  MR_Word * transform_hlds__size_prof__MaybeSizeVar_14,
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_21,
#line 1020 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_22);

#line 979 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
#line 979 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_7,
#line 979 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeArgs_8,
#line 979 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorVar_9,
#line 979 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorGoals_10,
#line 979 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_25,
#line 979 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_26);

#line 937 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
#line 937 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 937 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 937 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2,
#line 937 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3,
#line 937 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_4,
#line 937 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_5);

#line 931 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_11,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_12,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypes_13,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__CtorIsVarArity_14,
#line 931 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_15,
#line 931 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_16,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_42,
#line 931 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_43);

#line 862 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
#line 862 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_7,
#line 862 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_8,
#line 862 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_9,
#line 862 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_10,
#line 862 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_38,
#line 862 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_39);

#line 830 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
#line 830 "size_prof.m"
  MR_Word transform_hlds__size_prof__SizeVar0_8,
#line 830 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_9,
#line 830 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 830 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeVar_11,
#line 830 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goals_12,
#line 830 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_22,
#line 830 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_23);

#line 800 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
#line 800 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 800 "size_prof.m"
  MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2,
#line 800 "size_prof.m"
  MR_Integer * transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3,
#line 800 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4,
#line 800 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5,
#line 800 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_6,
#line 800 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__7_7,
#line 800 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 800 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9);

#line 771 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
#line 771 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg);

#line 758 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_8,
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_9,
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_10,
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyGoal_11,
#line 758 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_12,
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 758 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29);

#line 682 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_9,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_10,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_11,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_12,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_13,
#line 682 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_14,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 682 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29);

#line 620 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_15,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_16,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_17,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_18,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_19,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_20,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_21,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_22,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_23,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_24,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo_25,
#line 620 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_26,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_45,
#line 620 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_46);

#line 601 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
#line 601 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 601 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 601 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 601 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 579 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_41,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_42,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27);

#line 560 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
#line 560 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 560 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 560 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 560 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 541 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_37,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_38,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27);

#line 524 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 524 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 524 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_5,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_6,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_7,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_8);

#line 505 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
#line 505 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 505 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 505 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 505 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4);

#line 300 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
#line 300 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 300 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1);

#line 444 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
#line 444 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 444 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 444 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 444 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 280 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
#line 280 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_5,
#line 280 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goal_6,
#line 280 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_95,
#line 280 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_96);

#line 261 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
#line 261 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 261 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 261 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 261 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 234 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
#line 234 "size_prof.m"
  MR_Word transform_hlds__size_prof__Transform_7,
#line 234 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 234 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37,
#line 234 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38,
#line 234 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39,
#line 234 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40);


static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[2][7];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[2][6];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[2][5];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_7[4][1];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_8[1][9];


#line 1327 "size_prof.m"
/* sealed */ struct transform_hlds__size_prof__vector_common_type_6_0_s {
#line 1327 "size_prof.m"
  const MR_String transform_hlds__size_prof__vector_common_type_6_0__vct_6_f_0;
#line 1327 "size_prof.m"
};

static /* final */ const struct transform_hlds__size_prof__vector_common_type_6_0_s transform_hlds__size_prof_vector_common_6[8];



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
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_disj_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0])),
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

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[2][6] = {
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

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[2][5] = {
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

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_7[4][1] = {
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

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_8[1][9] = {
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


static /* final */ const struct transform_hlds__size_prof__vector_common_type_6_0_s transform_hlds__size_prof_vector_common_6[8] = {
  /* row 0 */   {     (MR_String) "base_typeclass_info" },
  /* row 1 */   {     (MR_String) "type_ctor_info" },
  /* row 2 */   {     (MR_String) "type_info" },
  /* row 3 */   {     (MR_String) "typeclass_info" },
  /* row 4 */   {     (MR_String) "base_typeclass_info" },
  /* row 5 */   {     (MR_String) "type_ctor_info" },
  /* row 6 */   {     (MR_String) "type_info" },
  /* row 7 */   {     (MR_String) "typeclass_info" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1376 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1384 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1392 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1400 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1408 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1417 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1426 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1435 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0 = {
  (MR_String) "term_words",
  (MR_Integer) 0
};

#line 1441 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1 = {
  (MR_String) "term_cells",
  (MR_Integer) 1
};

#line 1447 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1
};

#line 1453 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0
};

#line 1459 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1465 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__size_prof____Unify____construct_transform_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____construct_transform_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "construct_transform",
  {     transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0 },
  {     transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0
};

#line 1482 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1491 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1500 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 1509 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1518 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1527 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1535 "transform_hlds.size_prof.c"
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

#line 1550 "transform_hlds.size_prof.c"
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

#line 1565 "transform_hlds.size_prof.c"
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

#line 1580 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0
};

#line 1585 "transform_hlds.size_prof.c"
static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0
  }
};

#line 1594 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_info_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0
};

#line 1599 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_info_0[1] = {
  (MR_Integer) 0
};

#line 1604 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__size_prof____Unify____info_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____info_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "info",
  {     transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_info_0 },
  {     transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_info_0
};

#line 1621 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_known_size_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____known_size_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____known_size_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "known_size_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1638 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_ctor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1655 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1672 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_ctor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_ctor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1689 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1706 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
#line 1709 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1711 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1713 "transform_hlds.size_prof.c"
{
#line 1715 "transform_hlds.size_prof.c"
  {
#line 1717 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1720 "transform_hlds.size_prof.c"
    {
#line 1722 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____construct_transform_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1725 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1727 "transform_hlds.size_prof.c"
  }
#line 1729 "transform_hlds.size_prof.c"
}

#line 1732 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
#line 1735 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1737 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1739 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1741 "transform_hlds.size_prof.c"
{
#line 1743 "transform_hlds.size_prof.c"
  {
#line 1745 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1748 "transform_hlds.size_prof.c"
    {
#line 1750 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____construct_transform_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1753 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1755 "transform_hlds.size_prof.c"
  }
#line 1757 "transform_hlds.size_prof.c"
}

#line 1760 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0_10001(
#line 1763 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1765 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1767 "transform_hlds.size_prof.c"
{
#line 1769 "transform_hlds.size_prof.c"
  {
#line 1771 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1774 "transform_hlds.size_prof.c"
    {
#line 1776 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____info_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1779 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1781 "transform_hlds.size_prof.c"
  }
#line 1783 "transform_hlds.size_prof.c"
}

#line 1786 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0_10001(
#line 1789 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1791 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1793 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1795 "transform_hlds.size_prof.c"
{
#line 1797 "transform_hlds.size_prof.c"
  {
#line 1799 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1802 "transform_hlds.size_prof.c"
    {
#line 1804 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____info_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1807 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1809 "transform_hlds.size_prof.c"
  }
#line 1811 "transform_hlds.size_prof.c"
}

#line 1814 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
#line 1817 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1819 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1821 "transform_hlds.size_prof.c"
{
#line 1823 "transform_hlds.size_prof.c"
  {
#line 1825 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1828 "transform_hlds.size_prof.c"
    {
#line 1830 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____known_size_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1833 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1835 "transform_hlds.size_prof.c"
  }
#line 1837 "transform_hlds.size_prof.c"
}

#line 1840 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
#line 1843 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1845 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1847 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1849 "transform_hlds.size_prof.c"
{
#line 1851 "transform_hlds.size_prof.c"
  {
#line 1853 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1856 "transform_hlds.size_prof.c"
    {
#line 1858 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____known_size_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1861 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1863 "transform_hlds.size_prof.c"
  }
#line 1865 "transform_hlds.size_prof.c"
}

#line 1868 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
#line 1871 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1873 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1875 "transform_hlds.size_prof.c"
{
#line 1877 "transform_hlds.size_prof.c"
  {
#line 1879 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1882 "transform_hlds.size_prof.c"
    {
#line 1884 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1887 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1889 "transform_hlds.size_prof.c"
  }
#line 1891 "transform_hlds.size_prof.c"
}

#line 1894 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
#line 1897 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1899 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1901 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1903 "transform_hlds.size_prof.c"
{
#line 1905 "transform_hlds.size_prof.c"
  {
#line 1907 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1910 "transform_hlds.size_prof.c"
    {
#line 1912 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1915 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1917 "transform_hlds.size_prof.c"
  }
#line 1919 "transform_hlds.size_prof.c"
}

#line 1922 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
#line 1925 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1927 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1929 "transform_hlds.size_prof.c"
{
#line 1931 "transform_hlds.size_prof.c"
  {
#line 1933 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1936 "transform_hlds.size_prof.c"
    {
#line 1938 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____rev_type_info_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1941 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1943 "transform_hlds.size_prof.c"
  }
#line 1945 "transform_hlds.size_prof.c"
}

#line 1948 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
#line 1951 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1953 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1955 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1957 "transform_hlds.size_prof.c"
{
#line 1959 "transform_hlds.size_prof.c"
  {
#line 1961 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1964 "transform_hlds.size_prof.c"
    {
#line 1966 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____rev_type_info_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1969 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1971 "transform_hlds.size_prof.c"
  }
#line 1973 "transform_hlds.size_prof.c"
}

#line 1976 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
#line 1979 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1981 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1983 "transform_hlds.size_prof.c"
{
#line 1985 "transform_hlds.size_prof.c"
  {
#line 1987 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1990 "transform_hlds.size_prof.c"
    {
#line 1992 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____type_ctor_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1995 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1997 "transform_hlds.size_prof.c"
  }
#line 1999 "transform_hlds.size_prof.c"
}

#line 2002 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
#line 2005 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 2007 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 2009 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 2011 "transform_hlds.size_prof.c"
{
#line 2013 "transform_hlds.size_prof.c"
  {
#line 2015 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 2018 "transform_hlds.size_prof.c"
    {
#line 2020 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____type_ctor_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 2023 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 2025 "transform_hlds.size_prof.c"
  }
#line 2027 "transform_hlds.size_prof.c"
}

#line 2030 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
#line 2033 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 2035 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 2037 "transform_hlds.size_prof.c"
{
#line 2039 "transform_hlds.size_prof.c"
  {
#line 2041 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 2044 "transform_hlds.size_prof.c"
    {
#line 2046 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____type_info_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 2049 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 2051 "transform_hlds.size_prof.c"
  }
#line 2053 "transform_hlds.size_prof.c"
}

#line 2056 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
#line 2059 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 2061 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 2063 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 2065 "transform_hlds.size_prof.c"
{
#line 2067 "transform_hlds.size_prof.c"
  {
#line 2069 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 2072 "transform_hlds.size_prof.c"
    {
#line 2074 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____type_info_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 2077 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 2079 "transform_hlds.size_prof.c"
  }
#line 2081 "transform_hlds.size_prof.c"
}

#line 601 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_49_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 601 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 601 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140)
#line 601 "size_prof.m"
{
#line 601 "size_prof.m"
  {
#line 601 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 601 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_140;

#line 601 "size_prof.m"
    {
#line 601 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_138)), &transform_hlds__size_prof__conv0_HeadVar__3_140);
    }
#line 601 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_140 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_140);
#line 601 "size_prof.m"
  }
#line 601 "size_prof.m"
}

#line 560 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_48_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 560 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 560 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136)
#line 560 "size_prof.m"
{
#line 560 "size_prof.m"
  {
#line 560 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 560 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_136;

#line 560 "size_prof.m"
    {
#line 560 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_134)), &transform_hlds__size_prof__conv0_HeadVar__3_136);
    }
#line 560 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_136 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_136);
#line 560 "size_prof.m"
  }
#line 560 "size_prof.m"
}

#line 444 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 444 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 444 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039)
#line 444 "size_prof.m"
{
#line 444 "size_prof.m"
  {
#line 444 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 444 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_1039;

#line 444 "size_prof.m"
    {
#line 444 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_1037)), &transform_hlds__size_prof__conv0_HeadVar__3_1039);
    }
#line 444 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_1039 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_1039);
#line 444 "size_prof.m"
  }
#line 444 "size_prof.m"
}

#line 1316 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 1316 "size_prof.m"
  MR_Box transform_hlds__size_prof__X_4,
#line 1316 "size_prof.m"
  MR_Box * transform_hlds__size_prof__X_3)
#line 1316 "size_prof.m"
{
#line 1318 "size_prof.m"
  {
#line 1318 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1318 "size_prof.m"
    *transform_hlds__size_prof__X_3 = transform_hlds__size_prof__X_4;
#line 1318 "size_prof.m"
  }
#line 1316 "size_prof.m"
}

#line 1201 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
#line 1201 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1201 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2,
#line 1201 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3)
#line 1201 "size_prof.m"
{
#line 1204 "size_prof.m"
  while (MR_TRUE)
#line 1204 "size_prof.m"
    {
#line 1204 "size_prof.m"
      /* tailcall optimized into a loop */
#line 1204 "size_prof.m"
      {
#line 1204 "size_prof.m"
        MR_bool transform_hlds__size_prof__succeeded;

#line 1204 "size_prof.m"
        if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2;
#line 1204 "size_prof.m"
        else
#line 1205 "size_prof.m"
          {
#line 1205 "size_prof.m"
            MR_Word transform_hlds__size_prof__Var_8;
#line 1205 "size_prof.m"
            MR_Word transform_hlds__size_prof__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 1205 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 1205 "size_prof.m"
            MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16;
#line 1205 "size_prof.m"
            MR_Box transform_hlds__size_prof__V_7_7 = (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_14_14, (MR_Integer) 0));
#line 1206 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Count_11;
#line 1206 "size_prof.m"
            MR_Box transform_hlds__size_prof__conv0_Count_11;

#line 1205 "size_prof.m"
            transform_hlds__size_prof__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_14_14, (MR_Integer) 1)));
#line 1206 "size_prof.m"
            {
#line 1206 "size_prof.m"
              transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, ((MR_Box) (transform_hlds__size_prof__Var_8)), &transform_hlds__size_prof__conv0_Count_11);
            }
#line 1206 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1206 "size_prof.m"
              {
#line 1206 "size_prof.m"
                transform_hlds__size_prof__Count_11 = ((MR_Integer) transform_hlds__size_prof__conv0_Count_11);
#line 1206 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1206 "size_prof.m"
              }
#line 1206 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1207 "size_prof.m"
              {
#line 1207 "size_prof.m"
                MR_Integer transform_hlds__size_prof__V_15_15 = (transform_hlds__size_prof__Count_11 + (MR_Integer) 1);

#line 1207 "size_prof.m"
                {
#line 1207 "size_prof.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) (transform_hlds__size_prof__V_15_15)), transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, &transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16);
                }
#line 1207 "size_prof.m"
              }
#line 1206 "size_prof.m"
            else
#line 1209 "size_prof.m"
              {
#line 1209 "size_prof.m"
                {
#line 1209 "size_prof.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) ((MR_Integer) 1)), transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, &transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16);
                }
#line 1209 "size_prof.m"
              }
#line 1211 "size_prof.m"
            /* direct tailcall eliminated */
#line 1211 "size_prof.m"
            {
#line 1211 "size_prof.m"
              MR_Word transform_hlds__size_prof__HeadVar__1__tmp_copy_1 = transform_hlds__size_prof__AssocList_9;
#line 1211 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0__tmp_copy_2 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16;

#line 1211 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0__tmp_copy_2;
#line 1211 "size_prof.m"
              transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__HeadVar__1__tmp_copy_1;
#line 1211 "size_prof.m"
            }
#line 1211 "size_prof.m"
            continue;
#line 1205 "size_prof.m"
          }
#line 1204 "size_prof.m"
      }
#line 1204 "size_prof.m"
      break;
#line 1204 "size_prof.m"
    }
#line 1201 "size_prof.m"
}

#line 728 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
#line 728 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg)
#line 728 "size_prof.m"
{
#line 728 "size_prof.m"
  {
#line 728 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 728 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 728 "size_prof.m"
    {
#line 728 "size_prof.m"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__728__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 4))));
    }
#line 728 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 728 "size_prof.m"
  }
#line 728 "size_prof.m"
}

#line 713 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_16,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_17,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_18,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_19,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_20,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_22,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_23,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_24,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_25,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_26,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo0_27,
#line 713 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_28,
#line 713 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_49,
#line 713 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_50)
#line 713 "size_prof.m"
{
#line 720 "size_prof.m"
  {
#line 720 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 720 "size_prof.m"
    MR_Integer transform_hlds__size_prof__FunctorSize_30;
#line 720 "size_prof.m"
    MR_Word transform_hlds__size_prof__DefinedArgs_31;
#line 720 "size_prof.m"
    MR_Word transform_hlds__size_prof__NonDefinedArgs_32;
#line 720 "size_prof.m"
    MR_Word transform_hlds__size_prof__Context_33;
#line 720 "size_prof.m"
    MR_Integer transform_hlds__size_prof__KnownSize_34;
#line 720 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybeDynamicSizeVar_35;
#line 720 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgGoals_36;
#line 720 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_52_52;
#line 720 "size_prof.m"
    MR_Word transform_hlds__size_prof__TransformOp_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 8)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 0)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 1)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 2)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 3)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 4)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 5)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 6)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 7)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 9)));
#line 1265 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 10)));

#line 1269 "size_prof.m"
#line 1269 "size_prof.m"
    switch (transform_hlds__size_prof__TransformOp_82) {
#line 1269 "size_prof.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1269 "size_prof.m"
      case (MR_Integer) 1:
#line 1268 "size_prof.m"
        transform_hlds__size_prof__FunctorSize_30 = (MR_Integer) 1;
#line 1269 "size_prof.m"
        break;
#line 1269 "size_prof.m"
      case (MR_Integer) 0:
#line 1270 "size_prof.m"
        {
#line 1271 "size_prof.m"
          {
#line 1271 "size_prof.m"
            transform_hlds__size_prof__FunctorSize_30 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__Args_23);
          }
#line 1270 "size_prof.m"
        }
#line 1269 "size_prof.m"
        break;
#line 1269 "size_prof.m"
    }
#line 722 "size_prof.m"
    {
#line 722 "size_prof.m"
      transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Args_23, transform_hlds__size_prof__ArgModes_24, &transform_hlds__size_prof__DefinedArgs_31, &transform_hlds__size_prof__NonDefinedArgs_32, transform_hlds__size_prof__STATE_VARIABLE_Info_0_49);
    }
#line 723 "size_prof.m"
    {
#line 723 "size_prof.m"
      transform_hlds__size_prof__Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__size_prof__GoalInfo0_27);
    }
#line 724 "size_prof.m"
    {
#line 724 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__DefinedArgs_31, transform_hlds__size_prof__FunctorSize_30, &transform_hlds__size_prof__KnownSize_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__MaybeDynamicSizeVar_35, transform_hlds__size_prof__Context_33, &transform_hlds__size_prof__ArgGoals_36, transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, &transform_hlds__size_prof__STATE_VARIABLE_Info_52_52);
    }
#line 741 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeDynamicSizeVar_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "size_prof.m"
      {
#line 727 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_39;
#line 727 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 727 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 727 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 727 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;

#line 728 "size_prof.m"
        {
#line 728 "size_prof.m"
          transform_hlds__size_prof__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[1]));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 1) = ((MR_Box) (transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 3) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_36));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "size_prof.m"
        }
#line 728 "size_prof.m"
        {
#line 728 "size_prof.m"
          mercury__require__expect_4_p_0(transform_hlds__size_prof__V_65_65, (MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_construct\'/15", (MR_String) "nonempty ArgGoals");
        }
#line 732 "size_prof.m"
        if ((transform_hlds__size_prof__NonDefinedArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "size_prof.m"
          {
#line 731 "size_prof.m"
            transform_hlds__size_prof__record_known_size_4_p_0(transform_hlds__size_prof__Var_20, transform_hlds__size_prof__KnownSize_34, transform_hlds__size_prof__STATE_VARIABLE_Info_52_52, transform_hlds__size_prof__STATE_VARIABLE_Info_50);
          }
#line 732 "size_prof.m"
        else
#line 733 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_50 = transform_hlds__size_prof__STATE_VARIABLE_Info_52_52;
#line 739 "size_prof.m"
        {
#line 739 "size_prof.m"
          transform_hlds__size_prof__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 739 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_74_74, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSize_34));
#line 739 "size_prof.m"
        }
#line 739 "size_prof.m"
        {
#line 739 "size_prof.m"
          transform_hlds__size_prof__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_73_73, 0) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 739 "size_prof.m"
        }
#line 739 "size_prof.m"
        {
#line 739 "size_prof.m"
          transform_hlds__size_prof__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_71_71, 1) = ((MR_Box) (transform_hlds__size_prof__V_73_73));
#line 739 "size_prof.m"
        }
#line 738 "size_prof.m"
        {
#line 738 "size_prof.m"
          transform_hlds__size_prof__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 738 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_20));
#line 738 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_22));
#line 738 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 2) = ((MR_Box) (transform_hlds__size_prof__Args_23));
#line 738 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_24));
#line 738 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 4) = ((MR_Box) (transform_hlds__size_prof__How_25));
#line 738 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_26));
#line 738 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 6) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 738 "size_prof.m"
        }
#line 740 "size_prof.m"
        {
#line 740 "size_prof.m"
          MR_Word base;
#line 740 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 740 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_28 = base;
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_16));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_17));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_18));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_39));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_19));
#line 740 "size_prof.m"
        }
#line 727 "size_prof.m"
      }
#line 741 "size_prof.m"
    else
#line 742 "size_prof.m"
      {
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeDynamicSizeVar_35, (MR_Integer) 0)));
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar_41;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeGoals_42;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__UnifyExpr_43;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__NonLocals0_44;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__NonLocals_45;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__GoalInfo_46;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__UnifyGoal_47;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_48;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61;
#line 742 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_75;

#line 743 "size_prof.m"
        {
#line 743 "size_prof.m"
          transform_hlds__size_prof__generate_size_var_7_p_0(transform_hlds__size_prof__SizeVar0_40, transform_hlds__size_prof__KnownSize_34, transform_hlds__size_prof__Context_33, &transform_hlds__size_prof__SizeVar_41, &transform_hlds__size_prof__SizeGoals_42, transform_hlds__size_prof__STATE_VARIABLE_Info_52_52, transform_hlds__size_prof__STATE_VARIABLE_Info_50);
        }
#line 746 "size_prof.m"
        {
#line 746 "size_prof.m"
          transform_hlds__size_prof__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 746 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_57_57, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_41));
#line 746 "size_prof.m"
        }
#line 746 "size_prof.m"
        {
#line 746 "size_prof.m"
          transform_hlds__size_prof__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 746 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_56_56, 0) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 746 "size_prof.m"
        }
#line 746 "size_prof.m"
        {
#line 746 "size_prof.m"
          transform_hlds__size_prof__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_54_54, 1) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 746 "size_prof.m"
        }
#line 745 "size_prof.m"
        {
#line 745 "size_prof.m"
          transform_hlds__size_prof__Unification_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 745 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 0) = ((MR_Box) (transform_hlds__size_prof__Var_20));
#line 745 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_22));
#line 745 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 2) = ((MR_Box) (transform_hlds__size_prof__Args_23));
#line 745 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_24));
#line 745 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 4) = ((MR_Box) (transform_hlds__size_prof__How_25));
#line 745 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_26));
#line 745 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 6) = ((MR_Box) (transform_hlds__size_prof__V_54_54));
#line 745 "size_prof.m"
        }
#line 747 "size_prof.m"
        {
#line 747 "size_prof.m"
          transform_hlds__size_prof__UnifyExpr_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 747 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_16));
#line 747 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_17));
#line 747 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_18));
#line 747 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_75));
#line 747 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_19));
#line 747 "size_prof.m"
        }
#line 748 "size_prof.m"
        {
#line 748 "size_prof.m"
          transform_hlds__size_prof__NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__size_prof__GoalInfo0_27);
        }
#line 749 "size_prof.m"
        {
#line 749 "size_prof.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__size_prof__SizeVar_41, transform_hlds__size_prof__NonLocals0_44, &transform_hlds__size_prof__NonLocals_45);
        }
#line 750 "size_prof.m"
        {
#line 750 "size_prof.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__size_prof__NonLocals_45, transform_hlds__size_prof__GoalInfo0_27, &transform_hlds__size_prof__GoalInfo_46);
        }
#line 751 "size_prof.m"
        {
#line 751 "size_prof.m"
          transform_hlds__size_prof__UnifyGoal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 751 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_47, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyExpr_43));
#line 751 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_47, 1) = ((MR_Box) (transform_hlds__size_prof__GoalInfo_46));
#line 751 "size_prof.m"
        }
#line 752 "size_prof.m"
        {
#line 752 "size_prof.m"
          transform_hlds__size_prof__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_61_61, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyGoal_47));
#line 752 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "size_prof.m"
        }
#line 752 "size_prof.m"
        {
#line 752 "size_prof.m"
          transform_hlds__size_prof__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_60_60, 0) = ((MR_Box) (transform_hlds__size_prof__V_61_61));
#line 752 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "size_prof.m"
        }
#line 752 "size_prof.m"
        {
#line 752 "size_prof.m"
          transform_hlds__size_prof__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 0) = ((MR_Box) (transform_hlds__size_prof__SizeGoals_42));
#line 752 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 1) = ((MR_Box) (transform_hlds__size_prof__V_60_60));
#line 752 "size_prof.m"
        }
#line 752 "size_prof.m"
        {
#line 752 "size_prof.m"
          transform_hlds__size_prof__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 0) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_36));
#line 752 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 1) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 752 "size_prof.m"
        }
#line 752 "size_prof.m"
        {
#line 752 "size_prof.m"
          transform_hlds__size_prof__Goals_48 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__V_58_58);
        }
#line 753 "size_prof.m"
        {
#line 753 "size_prof.m"
          MR_Word base;
#line 753 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 753 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_28 = base;
#line 753 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 753 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 753 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_48));
#line 753 "size_prof.m"
        }
#line 742 "size_prof.m"
      }
#line 720 "size_prof.m"
  }
#line 713 "size_prof.m"
}

#line 1105 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1105__1_3_p_0(
#line 1105 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12,
#line 1105 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_45,
#line 1105 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_46)
#line 1105 "size_prof.m"
{
#line 1105 "size_prof.m"
  {
#line 1105 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1105 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_46;

#line 1105 "size_prof.m"
    {
#line 1105 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__RevTypeInfoMap0_12, ((MR_Box) (transform_hlds__size_prof__HeadVar__2_45)), &transform_hlds__size_prof__conv0_HeadVar__3_46);
    }
#line 1105 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1105 "size_prof.m"
      {
#line 1105 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__3_46 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_46);
#line 1105 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1105 "size_prof.m"
      }
#line 1105 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1105 "size_prof.m"
  }
#line 1105 "size_prof.m"
}

#line 771 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__771__1_2_p_0(
#line 771 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_21,
#line 771 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_56)
#line 771 "size_prof.m"
{
#line 771 "size_prof.m"
  {
#line 771 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 771 "size_prof.m"
    {
#line 771 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[2], ((MR_Box) (transform_hlds__size_prof__ArgGoals_21)), ((MR_Box) (transform_hlds__size_prof__HeadVar__2_56)));
    }
#line 771 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 771 "size_prof.m"
  }
#line 771 "size_prof.m"
}

#line 728 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__728__1_2_p_0(
#line 728 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_36,
#line 728 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_69)
#line 728 "size_prof.m"
{
#line 728 "size_prof.m"
  {
#line 728 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 728 "size_prof.m"
    {
#line 728 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[2], ((MR_Box) (transform_hlds__size_prof__ArgGoals_36)), ((MR_Box) (transform_hlds__size_prof__HeadVar__2_69)));
    }
#line 728 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 728 "size_prof.m"
  }
#line 728 "size_prof.m"
}

#line 601 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__601__1_3_p_0(
#line 601 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 601 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_139,
#line 601 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140)
#line 601 "size_prof.m"
{
#line 601 "size_prof.m"
  {
#line 601 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 601 "size_prof.m"
    {
#line 601 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_49_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_138, transform_hlds__size_prof__HeadVar__3_140);
    }
#line 601 "size_prof.m"
  }
#line 601 "size_prof.m"
}

#line 560 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__560__1_3_p_0(
#line 560 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 560 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_135,
#line 560 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136)
#line 560 "size_prof.m"
{
#line 560 "size_prof.m"
  {
#line 560 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 560 "size_prof.m"
    {
#line 560 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_48_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_134, transform_hlds__size_prof__HeadVar__3_136);
    }
#line 560 "size_prof.m"
  }
#line 560 "size_prof.m"
}

#line 444 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(
#line 444 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 444 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_1038,
#line 444 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039)
#line 444 "size_prof.m"
{
#line 444 "size_prof.m"
  {
#line 444 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 444 "size_prof.m"
    {
#line 444 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_1037, transform_hlds__size_prof__HeadVar__3_1039);
    }
#line 444 "size_prof.m"
  }
#line 444 "size_prof.m"
}

#line 202 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
#line 202 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 202 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 202 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 202 "size_prof.m"
{
#line 202 "size_prof.m"
  {
#line 202 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 202 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 202 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 202 "size_prof.m"
    {
#line 202 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
#line 202 "size_prof.m"
  }
#line 202 "size_prof.m"
}

#line 202 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
#line 202 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 202 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 202 "size_prof.m"
{
#line 202 "size_prof.m"
  {
#line 202 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 202 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 202 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 202 "size_prof.m"
    {
#line 202 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 202 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 202 "size_prof.m"
  }
#line 202 "size_prof.m"
}

#line 203 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
#line 203 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 203 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 203 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 203 "size_prof.m"
{
#line 203 "size_prof.m"
  {
#line 203 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 203 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 203 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 203 "size_prof.m"
    {
#line 203 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
#line 203 "size_prof.m"
  }
#line 203 "size_prof.m"
}

#line 203 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
#line 203 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 203 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 203 "size_prof.m"
{
#line 203 "size_prof.m"
  {
#line 203 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 203 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 203 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 203 "size_prof.m"
    {
#line 203 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 203 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 203 "size_prof.m"
  }
#line 203 "size_prof.m"
}

#line 204 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
#line 204 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 204 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 204 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 204 "size_prof.m"
{
#line 204 "size_prof.m"
  {
#line 204 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 204 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 204 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 204 "size_prof.m"
    {
#line 204 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
#line 204 "size_prof.m"
  }
#line 204 "size_prof.m"
}

#line 204 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
#line 204 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 204 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 204 "size_prof.m"
{
#line 204 "size_prof.m"
  {
#line 204 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 204 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 204 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 204 "size_prof.m"
    {
#line 204 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 204 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 204 "size_prof.m"
  }
#line 204 "size_prof.m"
}

#line 205 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
#line 205 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 205 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 205 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 205 "size_prof.m"
{
#line 205 "size_prof.m"
  {
#line 205 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 205 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 205 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 205 "size_prof.m"
    {
#line 205 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
#line 205 "size_prof.m"
  }
#line 205 "size_prof.m"
}

#line 205 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
#line 205 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 205 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 205 "size_prof.m"
{
#line 205 "size_prof.m"
  {
#line 205 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 205 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 205 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 205 "size_prof.m"
    {
#line 205 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 205 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 205 "size_prof.m"
  }
#line 205 "size_prof.m"
}

#line 206 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
#line 206 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 206 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 206 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 206 "size_prof.m"
{
#line 206 "size_prof.m"
  {
#line 206 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 206 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 206 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 206 "size_prof.m"
    {
#line 206 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
#line 206 "size_prof.m"
  }
#line 206 "size_prof.m"
}

#line 206 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
#line 206 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 206 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 206 "size_prof.m"
{
#line 206 "size_prof.m"
  {
#line 206 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 206 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 206 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 206 "size_prof.m"
    {
#line 206 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 206 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 206 "size_prof.m"
  }
#line 206 "size_prof.m"
}

#line 208 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0(
#line 208 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 208 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 208 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 208 "size_prof.m"
{
#line 208 "size_prof.m"
  {
#line 208 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 208 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastX_36 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;
#line 208 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastY_37 = (MR_Integer) transform_hlds__size_prof__HeadVar__3_3;

#line 208 "size_prof.m"
    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__CastX_36 == transform_hlds__size_prof__CastY_37);
#line 208 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 3255 "transform_hlds.size_prof.c"
      *transform_hlds__size_prof__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "size_prof.m"
    else
#line 208 "size_prof.m"
      {
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 2)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 3)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 4)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 5)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 6)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 7)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 8)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 9)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 10)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 0)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 1)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 2)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 3)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 4)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 5)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 6)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 7)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 8)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 9)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 10)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;

#line 208 "size_prof.m"
        {
#line 208 "size_prof.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], &transform_hlds__size_prof__V_26_26, ((MR_Box) (transform_hlds__size_prof__V_4_4)), ((MR_Box) (transform_hlds__size_prof__V_15_15)));
        }
#line 3313 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_26_26 == (MR_Integer) 0);
#line 208 "size_prof.m"
        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_26_26;
#line 208 "size_prof.m"
        else
#line 208 "size_prof.m"
          {
#line 208 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_27_27;

#line 208 "size_prof.m"
            {
#line 208 "size_prof.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], &transform_hlds__size_prof__V_27_27, ((MR_Box) (transform_hlds__size_prof__V_5_5)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
            }
#line 3333 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_27_27 == (MR_Integer) 0);
#line 208 "size_prof.m"
            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_27_27;
#line 208 "size_prof.m"
            else
#line 208 "size_prof.m"
              {
#line 208 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_28_28;

#line 208 "size_prof.m"
                {
#line 208 "size_prof.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], &transform_hlds__size_prof__V_28_28, ((MR_Box) (transform_hlds__size_prof__V_6_6)), ((MR_Box) (transform_hlds__size_prof__V_17_17)));
                }
#line 3353 "transform_hlds.size_prof.c"
                transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_28_28 == (MR_Integer) 0);
#line 208 "size_prof.m"
                transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                  *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_28_28;
#line 208 "size_prof.m"
                else
#line 208 "size_prof.m"
                  {
#line 208 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_29_29;

#line 208 "size_prof.m"
                    {
#line 208 "size_prof.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], &transform_hlds__size_prof__V_29_29, ((MR_Box) (transform_hlds__size_prof__V_7_7)), ((MR_Box) (transform_hlds__size_prof__V_18_18)));
                    }
#line 3373 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_29_29 == (MR_Integer) 0);
#line 208 "size_prof.m"
                    transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
                    if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                      *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_29_29;
#line 208 "size_prof.m"
                    else
#line 208 "size_prof.m"
                      {
#line 208 "size_prof.m"
                        MR_Word transform_hlds__size_prof__V_30_30;

#line 208 "size_prof.m"
                        {
#line 208 "size_prof.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], &transform_hlds__size_prof__V_30_30, ((MR_Box) (transform_hlds__size_prof__V_8_8)), ((MR_Box) (transform_hlds__size_prof__V_19_19)));
                        }
#line 3393 "transform_hlds.size_prof.c"
                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_30_30 == (MR_Integer) 0);
#line 208 "size_prof.m"
                        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_30_30;
#line 208 "size_prof.m"
                        else
#line 208 "size_prof.m"
                          {
#line 208 "size_prof.m"
                            MR_Word transform_hlds__size_prof__V_31_31;

#line 208 "size_prof.m"
                            {
#line 208 "size_prof.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], &transform_hlds__size_prof__V_31_31, ((MR_Box) (transform_hlds__size_prof__V_9_9)), ((MR_Box) (transform_hlds__size_prof__V_20_20)));
                            }
#line 3413 "transform_hlds.size_prof.c"
                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_31_31 == (MR_Integer) 0);
#line 208 "size_prof.m"
                            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
                            if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_31_31;
#line 208 "size_prof.m"
                            else
#line 208 "size_prof.m"
                              {
#line 208 "size_prof.m"
                                MR_Word transform_hlds__size_prof__V_32_32;

#line 208 "size_prof.m"
                                {
#line 208 "size_prof.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[3], &transform_hlds__size_prof__V_32_32, ((MR_Box) (transform_hlds__size_prof__V_10_10)), ((MR_Box) (transform_hlds__size_prof__V_21_21)));
                                }
#line 3433 "transform_hlds.size_prof.c"
                                transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_32_32 == (MR_Integer) 0);
#line 208 "size_prof.m"
                                transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
                                if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                                  *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_32_32;
#line 208 "size_prof.m"
                                else
#line 208 "size_prof.m"
                                  {
#line 208 "size_prof.m"
                                    MR_Word transform_hlds__size_prof__V_33_33;

#line 208 "size_prof.m"
                                    {
#line 208 "size_prof.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], &transform_hlds__size_prof__V_33_33, ((MR_Box) (transform_hlds__size_prof__V_11_11)), ((MR_Box) (transform_hlds__size_prof__V_22_22)));
                                    }
#line 3453 "transform_hlds.size_prof.c"
                                    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_33_33 == (MR_Integer) 0);
#line 208 "size_prof.m"
                                    transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
                                    if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                                      *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_33_33;
#line 208 "size_prof.m"
                                    else
#line 208 "size_prof.m"
                                      {
#line 208 "size_prof.m"
                                        MR_Word transform_hlds__size_prof__V_34_34;
#line 208 "size_prof.m"
                                        MR_Integer transform_hlds__size_prof__V_49_49 = (MR_Integer) transform_hlds__size_prof__V_12_12;
#line 208 "size_prof.m"
                                        MR_Integer transform_hlds__size_prof__V_50_50 = (MR_Integer) transform_hlds__size_prof__V_23_23;

#line 208 "size_prof.m"
                                        {
#line 208 "size_prof.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__size_prof__V_34_34, transform_hlds__size_prof__V_49_49, transform_hlds__size_prof__V_50_50);
                                        }
#line 3477 "transform_hlds.size_prof.c"
                                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_34_34 == (MR_Integer) 0);
#line 208 "size_prof.m"
                                        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
                                        if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                                          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_34_34;
#line 208 "size_prof.m"
                                        else
#line 208 "size_prof.m"
                                          {
#line 208 "size_prof.m"
                                            MR_Word transform_hlds__size_prof__V_35_35;

#line 208 "size_prof.m"
                                            {
#line 208 "size_prof.m"
                                              hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__size_prof__V_35_35, transform_hlds__size_prof__V_13_13, transform_hlds__size_prof__V_24_24);
                                            }
#line 3497 "transform_hlds.size_prof.c"
                                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_35_35 == (MR_Integer) 0);
#line 208 "size_prof.m"
                                            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 208 "size_prof.m"
                                            if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                                              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_35_35;
#line 208 "size_prof.m"
                                            else
#line 208 "size_prof.m"
                                              {
#line 208 "size_prof.m"
                                                hlds__hlds_module____Compare____module_info_0_0(transform_hlds__size_prof__HeadVar__1_1, transform_hlds__size_prof__V_14_14, transform_hlds__size_prof__V_25_25);
                                              }
#line 208 "size_prof.m"
                                          }
#line 208 "size_prof.m"
                                      }
#line 208 "size_prof.m"
                                  }
#line 208 "size_prof.m"
                              }
#line 208 "size_prof.m"
                          }
#line 208 "size_prof.m"
                      }
#line 208 "size_prof.m"
                  }
#line 208 "size_prof.m"
              }
#line 208 "size_prof.m"
          }
#line 208 "size_prof.m"
      }
#line 208 "size_prof.m"
  }
#line 208 "size_prof.m"
}

#line 208 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0(
#line 208 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 208 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 208 "size_prof.m"
{
#line 208 "size_prof.m"
  {
#line 208 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 208 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastX_25 = (MR_Integer) transform_hlds__size_prof__HeadVar__1_1;
#line 208 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastY_26 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;

#line 208 "size_prof.m"
    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__CastX_25 == transform_hlds__size_prof__CastY_26);
#line 208 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
      transform_hlds__size_prof__succeeded = MR_TRUE;
#line 208 "size_prof.m"
    else
#line 208 "size_prof.m"
      {
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_28_28;
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_29_29;
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_30_30;
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_31_31;
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_32_32;
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_33_33;
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_34_34;
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 2)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 3)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 4)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 5)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 6)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 7)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 8)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 9)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 10)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 2)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 3)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 4)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 5)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 6)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 7)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 8)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 9)));
#line 208 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 10)));

#line 3624 "transform_hlds.size_prof.c"
        {
#line 3626 "transform_hlds.size_prof.c"
          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], ((MR_Box) (transform_hlds__size_prof__V_3_3)), ((MR_Box) (transform_hlds__size_prof__V_14_14)));
        }
#line 208 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
          {
#line 3633 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__TypeInfo_28_28 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[1];
#line 3635 "transform_hlds.size_prof.c"
            {
#line 3637 "transform_hlds.size_prof.c"
              transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_28_28, ((MR_Box) (transform_hlds__size_prof__V_4_4)), ((MR_Box) (transform_hlds__size_prof__V_15_15)));
            }
#line 208 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
              {
#line 3644 "transform_hlds.size_prof.c"
                transform_hlds__size_prof__TypeInfo_29_29 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[3];
#line 3646 "transform_hlds.size_prof.c"
                {
#line 3648 "transform_hlds.size_prof.c"
                  transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_29_29, ((MR_Box) (transform_hlds__size_prof__V_5_5)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
                }
#line 208 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                  {
#line 3655 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeInfo_30_30 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[4];
#line 3657 "transform_hlds.size_prof.c"
                    {
#line 3659 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_30_30, ((MR_Box) (transform_hlds__size_prof__V_6_6)), ((MR_Box) (transform_hlds__size_prof__V_17_17)));
                    }
#line 208 "size_prof.m"
                    if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                      {
#line 3666 "transform_hlds.size_prof.c"
                        transform_hlds__size_prof__TypeInfo_31_31 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[1];
#line 3668 "transform_hlds.size_prof.c"
                        {
#line 3670 "transform_hlds.size_prof.c"
                          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_31_31, ((MR_Box) (transform_hlds__size_prof__V_7_7)), ((MR_Box) (transform_hlds__size_prof__V_18_18)));
                        }
#line 208 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                          {
#line 3677 "transform_hlds.size_prof.c"
                            transform_hlds__size_prof__TypeInfo_32_32 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[5];
#line 3679 "transform_hlds.size_prof.c"
                            {
#line 3681 "transform_hlds.size_prof.c"
                              transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_32_32, ((MR_Box) (transform_hlds__size_prof__V_8_8)), ((MR_Box) (transform_hlds__size_prof__V_19_19)));
                            }
#line 208 "size_prof.m"
                            if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                              {
#line 3688 "transform_hlds.size_prof.c"
                                transform_hlds__size_prof__TypeInfo_33_33 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[3];
#line 3690 "transform_hlds.size_prof.c"
                                {
#line 3692 "transform_hlds.size_prof.c"
                                  transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_33_33, ((MR_Box) (transform_hlds__size_prof__V_9_9)), ((MR_Box) (transform_hlds__size_prof__V_20_20)));
                                }
#line 208 "size_prof.m"
                                if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                                  {
#line 3699 "transform_hlds.size_prof.c"
                                    transform_hlds__size_prof__TypeInfo_34_34 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[4];
#line 3701 "transform_hlds.size_prof.c"
                                    {
#line 3703 "transform_hlds.size_prof.c"
                                      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_34_34, ((MR_Box) (transform_hlds__size_prof__V_10_10)), ((MR_Box) (transform_hlds__size_prof__V_21_21)));
                                    }
#line 208 "size_prof.m"
                                    if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                                      {
#line 3710 "transform_hlds.size_prof.c"
                                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_11_11 == transform_hlds__size_prof__V_22_22);
#line 208 "size_prof.m"
                                        if (transform_hlds__size_prof__succeeded)
#line 208 "size_prof.m"
                                          {
#line 3716 "transform_hlds.size_prof.c"
                                            {
#line 3718 "transform_hlds.size_prof.c"
                                              transform_hlds__size_prof__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__size_prof__V_12_12, transform_hlds__size_prof__V_23_23);
                                            }
#line 208 "size_prof.m"
                                            if (transform_hlds__size_prof__succeeded)
#line 3723 "transform_hlds.size_prof.c"
                                              {
#line 3725 "transform_hlds.size_prof.c"
                                                transform_hlds__size_prof__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__size_prof__V_13_13, transform_hlds__size_prof__V_24_24);
                                              }
#line 208 "size_prof.m"
                                          }
#line 208 "size_prof.m"
                                      }
#line 208 "size_prof.m"
                                  }
#line 208 "size_prof.m"
                              }
#line 208 "size_prof.m"
                          }
#line 208 "size_prof.m"
                      }
#line 208 "size_prof.m"
                  }
#line 208 "size_prof.m"
              }
#line 208 "size_prof.m"
          }
#line 208 "size_prof.m"
      }
#line 208 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 208 "size_prof.m"
  }
#line 208 "size_prof.m"
}

#line 95 "size_prof.m"
void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0(
#line 95 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 95 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 95 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 95 "size_prof.m"
{
#line 95 "size_prof.m"
  {
#line 95 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 95 "size_prof.m"
    MR_Integer transform_hlds__size_prof__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;
#line 95 "size_prof.m"
    MR_Integer transform_hlds__size_prof__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__size_prof__HeadVar__3_3;

#line 95 "size_prof.m"
    {
#line 95 "size_prof.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__size_prof__HeadVar__1_1, transform_hlds__size_prof__Cast_HeadVar1_4, transform_hlds__size_prof__Cast_HeadVar2_5);
    }
#line 95 "size_prof.m"
  }
#line 95 "size_prof.m"
}

#line 95 "size_prof.m"
MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0(
#line 95 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_1,
#line 95 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 95 "size_prof.m"
{
#line 3794 "transform_hlds.size_prof.c"
  {
#line 3796 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__HeadVar__2_1 == transform_hlds__size_prof__HeadVar__2_2);

#line 3799 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 3801 "transform_hlds.size_prof.c"
  }
#line 95 "size_prof.m"
}

#line 1305 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
#line 1305 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_3,
#line 1305 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_4)
#line 1305 "size_prof.m"
{
#line 1307 "size_prof.m"
  {
#line 1307 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1307 "size_prof.m"
    MR_Word transform_hlds__size_prof__CellInitInst_5;
#line 1307 "size_prof.m"
    MR_Word transform_hlds__size_prof__CellFinalInst_7;
#line 1307 "size_prof.m"
    MR_Word transform_hlds__size_prof__ModuleInfo_9;
#line 1307 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UniMode_4, (MR_Integer) 0)));
#line 1307 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UniMode_4, (MR_Integer) 1)));
#line 1309 "size_prof.m"
    MR_Word transform_hlds__size_prof___ArgInitInst_6;
#line 1309 "size_prof.m"
    MR_Word transform_hlds__size_prof___ArgFinalInst_8;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_12_12;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20;
#line 1310 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21;

#line 1309 "size_prof.m"
    transform_hlds__size_prof__CellInitInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, (MR_Integer) 0)));
#line 1309 "size_prof.m"
    transform_hlds__size_prof___ArgInitInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, (MR_Integer) 1)));
#line 1309 "size_prof.m"
    transform_hlds__size_prof__CellFinalInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_11_11, (MR_Integer) 0)));
#line 1309 "size_prof.m"
    transform_hlds__size_prof___ArgFinalInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_11_11, (MR_Integer) 1)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 0)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 1)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 2)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 3)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 4)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 5)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 6)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 7)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 8)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 9)));
#line 1310 "size_prof.m"
    transform_hlds__size_prof__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 10)));
#line 1311 "size_prof.m"
    {
#line 1311 "size_prof.m"
      transform_hlds__size_prof__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__size_prof__ModuleInfo_9, transform_hlds__size_prof__CellInitInst_5);
    }
#line 1307 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1312 "size_prof.m"
      {
#line 1312 "size_prof.m"
        transform_hlds__size_prof__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__size_prof__ModuleInfo_9, transform_hlds__size_prof__CellFinalInst_7);
      }
#line 1307 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1307 "size_prof.m"
  }
#line 1305 "size_prof.m"
}

#line 1274 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
#line 1274 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_6,
#line 1274 "size_prof.m"
  MR_Word transform_hlds__size_prof__Modes_7,
#line 1274 "size_prof.m"
  MR_Word * transform_hlds__size_prof__DefinedArgs_8,
#line 1274 "size_prof.m"
  MR_Word * transform_hlds__size_prof__NonDefinedArgs_9,
#line 1274 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_10)
#line 1274 "size_prof.m"
{
#line 1279 "size_prof.m"
  {
#line 1279 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1279 "size_prof.m"
    if ((transform_hlds__size_prof__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "size_prof.m"
      if ((transform_hlds__size_prof__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "size_prof.m"
        {
#line 1281 "size_prof.m"
          *transform_hlds__size_prof__DefinedArgs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1282 "size_prof.m"
          *transform_hlds__size_prof__NonDefinedArgs_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1279 "size_prof.m"
        }
#line 1279 "size_prof.m"
      else
#line 1284 "size_prof.m"
        {
#line 1286 "size_prof.m"
          {
#line 1286 "size_prof.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
#line 1286 "size_prof.m"
            return;
          }
#line 1284 "size_prof.m"
        }
#line 1279 "size_prof.m"
    else
#line 1279 "size_prof.m"
      {
#line 1279 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_6, (MR_Integer) 1)));
#line 1279 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_6, (MR_Integer) 0)));

#line 1279 "size_prof.m"
        if ((transform_hlds__size_prof__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1288 "size_prof.m"
          {
#line 1290 "size_prof.m"
            {
#line 1290 "size_prof.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
#line 1290 "size_prof.m"
              return;
            }
#line 1288 "size_prof.m"
          }
#line 1279 "size_prof.m"
        else
#line 1292 "size_prof.m"
          {
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__FirstMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Modes_7, (MR_Integer) 0)));
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Modes_7, (MR_Integer) 1)));
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterDefinedArgs_19;
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterNonDefinedArgs_20;
#line 1307 "size_prof.m"
            MR_Word transform_hlds__size_prof__CellInitInst_31;
#line 1307 "size_prof.m"
            MR_Word transform_hlds__size_prof__CellFinalInst_33;
#line 1307 "size_prof.m"
            MR_Word transform_hlds__size_prof__ModuleInfo_35;
#line 1307 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_36_36;
#line 1307 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_37_37;
#line 1309 "size_prof.m"
            MR_Word transform_hlds__size_prof___ArgInitInst_32;
#line 1309 "size_prof.m"
            MR_Word transform_hlds__size_prof___ArgFinalInst_34;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_38_38;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_39_39;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_40_40;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_41_41;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_42_42;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_43_43;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_44_44;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_45_45;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_46_46;
#line 1310 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_47_47;

#line 1294 "size_prof.m"
            {
#line 1294 "size_prof.m"
              transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__V_27_27, transform_hlds__size_prof__LaterModes_18, &transform_hlds__size_prof__LaterDefinedArgs_19, &transform_hlds__size_prof__LaterNonDefinedArgs_20, transform_hlds__size_prof__Info_10);
            }
#line 1309 "size_prof.m"
            transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__FirstMode_17, (MR_Integer) 0)));
#line 1309 "size_prof.m"
            transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__FirstMode_17, (MR_Integer) 1)));
#line 1309 "size_prof.m"
            transform_hlds__size_prof__CellInitInst_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_36_36, (MR_Integer) 0)));
#line 1309 "size_prof.m"
            transform_hlds__size_prof___ArgInitInst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_36_36, (MR_Integer) 1)));
#line 1309 "size_prof.m"
            transform_hlds__size_prof__CellFinalInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_37_37, (MR_Integer) 0)));
#line 1309 "size_prof.m"
            transform_hlds__size_prof___ArgFinalInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_37_37, (MR_Integer) 1)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 0)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 1)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 2)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 3)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 4)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 5)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 6)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 7)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 8)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 9)));
#line 1310 "size_prof.m"
            transform_hlds__size_prof__ModuleInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 10)));
#line 1311 "size_prof.m"
            {
#line 1311 "size_prof.m"
              transform_hlds__size_prof__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__size_prof__ModuleInfo_35, transform_hlds__size_prof__CellInitInst_31);
            }
#line 1307 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1312 "size_prof.m"
              {
#line 1312 "size_prof.m"
                transform_hlds__size_prof__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__size_prof__ModuleInfo_35, transform_hlds__size_prof__CellFinalInst_33);
              }
#line 1296 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1297 "size_prof.m"
              {
#line 1297 "size_prof.m"
                {
#line 1297 "size_prof.m"
                  MR_Word base;
#line 1297 "size_prof.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1297 "size_prof.m"
                  *transform_hlds__size_prof__DefinedArgs_8 = base;
#line 1297 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_28_28));
#line 1297 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__LaterDefinedArgs_19));
#line 1297 "size_prof.m"
                }
#line 1298 "size_prof.m"
                *transform_hlds__size_prof__NonDefinedArgs_9 = transform_hlds__size_prof__LaterNonDefinedArgs_20;
#line 1297 "size_prof.m"
              }
#line 1296 "size_prof.m"
            else
#line 1300 "size_prof.m"
              {
#line 1300 "size_prof.m"
                *transform_hlds__size_prof__DefinedArgs_8 = transform_hlds__size_prof__LaterDefinedArgs_19;
#line 1301 "size_prof.m"
                {
#line 1301 "size_prof.m"
                  MR_Word base;
#line 1301 "size_prof.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "size_prof.m"
                  *transform_hlds__size_prof__NonDefinedArgs_9 = base;
#line 1301 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_28_28));
#line 1301 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__LaterNonDefinedArgs_20));
#line 1301 "size_prof.m"
                }
#line 1300 "size_prof.m"
              }
#line 1292 "size_prof.m"
          }
#line 1279 "size_prof.m"
      }
#line 1279 "size_prof.m"
  }
#line 1274 "size_prof.m"
}

#line 1250 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
#line 1250 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap_5,
#line 1250 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 1250 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9,
#line 1250 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10)
#line 1250 "size_prof.m"
{
#line 1253 "size_prof.m"
  {
#line 1253 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1253 "size_prof.m"
    MR_Word transform_hlds__size_prof__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 1253 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 1254 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_17_17;
#line 1254 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1254 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_V_16_16;

#line 1254 "size_prof.m"
    {
#line 1254 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__TypeInfoMap_5, ((MR_Box) (transform_hlds__size_prof__Type_6)), &transform_hlds__size_prof__conv0_V_16_16);
    }
#line 1254 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1254 "size_prof.m"
      {
#line 1254 "size_prof.m"
        transform_hlds__size_prof__V_16_16 = ((MR_Word) transform_hlds__size_prof__conv0_V_16_16);
#line 1254 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1254 "size_prof.m"
      }
#line 1254 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1254 "size_prof.m"
      {
#line 4168 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__TypeInfo_17_17 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1254 "size_prof.m"
        {
#line 1254 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_17_17, ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_7)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
        }
#line 1254 "size_prof.m"
      }
#line 1254 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1255 "size_prof.m"
      {
#line 1255 "size_prof.m"
        {
#line 1255 "size_prof.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], ((MR_Box) (transform_hlds__size_prof__Type_6)), ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_7)), transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9, transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10);
        }
#line 1255 "size_prof.m"
      }
#line 1254 "size_prof.m"
    else
#line 1254 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10 = transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9;
#line 1253 "size_prof.m"
  }
#line 1250 "size_prof.m"
}

#line 1246 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
#line 1246 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1246 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1246 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1246 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 1246 "size_prof.m"
{
#line 1246 "size_prof.m"
  {
#line 1246 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 1246 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10;

#line 1246 "size_prof.m"
    {
#line 1246 "size_prof.m"
      transform_hlds__size_prof__include_in_target_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10);
    }
#line 1246 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10));
#line 1246 "size_prof.m"
  }
#line 1246 "size_prof.m"
}

#line 1240 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
#line 1240 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 1240 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9)
#line 1240 "size_prof.m"
{
#line 1242 "size_prof.m"
  {
#line 1242 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1242 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1242 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_45_45 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1242 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1242 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1242 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoList_6;
#line 1242 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap_7;
#line 1242 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_10_10;
#line 1242 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_11_11;
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 1243 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 1246 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv1_TargetTypeInfoMap_7;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1248 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;

#line 1245 "size_prof.m"
    {
#line 1245 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_44_44, transform_hlds__size_prof__TypeInfo_45_45, transform_hlds__size_prof__TargetTypeInfoMap0_4, &transform_hlds__size_prof__TargetTypeInfoList_6);
    }
#line 1246 "size_prof.m"
    {
#line 1246 "size_prof.m"
      transform_hlds__size_prof__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[1]));
#line 1246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 1) = ((MR_Box) (transform_hlds__size_prof__update_target_map_2_p_0_1));
#line 1246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 3) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_5));
#line 1246 "size_prof.m"
    }
#line 1247 "size_prof.m"
    {
#line 1247 "size_prof.m"
      transform_hlds__size_prof__V_11_11 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_44_44, transform_hlds__size_prof__TypeInfo_45_45);
    }
#line 1246 "size_prof.m"
    {
#line 1246 "size_prof.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[0], (MR_Word) &transform_hlds__size_prof_scalar_common_2[1], transform_hlds__size_prof__V_10_10, transform_hlds__size_prof__TargetTypeInfoList_6, ((MR_Box) (transform_hlds__size_prof__V_11_11)), &transform_hlds__size_prof__conv1_TargetTypeInfoMap_7);
    }
#line 1246 "size_prof.m"
    transform_hlds__size_prof__TargetTypeInfoMap_7 = ((MR_Word) transform_hlds__size_prof__conv1_TargetTypeInfoMap_7);
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 1248 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 1248 "size_prof.m"
    {
#line 1248 "size_prof.m"
      MR_Word base;
#line 1248 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_9 = base;
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_33_33));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_34_34));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_35_35));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_36_36));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap_7));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_38_38));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_40_40));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1248 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1248 "size_prof.m"
    }
#line 1242 "size_prof.m"
  }
#line 1240 "size_prof.m"
}

#line 1213 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
#line 1213 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfo_for_T_20,
#line 1213 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1213 "size_prof.m"
  MR_Word transform_hlds__size_prof__VarCounts_2,
#line 1213 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3,
#line 1213 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_RevMap_4)
#line 1213 "size_prof.m"
{
#line 1217 "size_prof.m"
  while (MR_TRUE)
#line 1217 "size_prof.m"
    {
#line 1217 "size_prof.m"
      /* tailcall optimized into a loop */
#line 1217 "size_prof.m"
      {
#line 1217 "size_prof.m"
        MR_bool transform_hlds__size_prof__succeeded;

#line 1217 "size_prof.m"
        if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_RevMap_4 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3;
#line 1217 "size_prof.m"
        else
#line 1218 "size_prof.m"
          {
#line 1218 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeInfo_21_21;
#line 1218 "size_prof.m"
            MR_Box transform_hlds__size_prof__T_9;
#line 1218 "size_prof.m"
            MR_Word transform_hlds__size_prof__Var_10;
#line 1218 "size_prof.m"
            MR_Word transform_hlds__size_prof__AssocList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 1218 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Count_14;
#line 1218 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 1218 "size_prof.m"
            MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18;
#line 1219 "size_prof.m"
            MR_Box transform_hlds__size_prof__conv0_Count_14;

#line 1218 "size_prof.m"
            transform_hlds__size_prof__T_9 = (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_17_17, (MR_Integer) 0));
#line 1218 "size_prof.m"
            transform_hlds__size_prof__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_17_17, (MR_Integer) 1)));
#line 4446 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__TypeInfo_21_21 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1219 "size_prof.m"
            {
#line 1219 "size_prof.m"
              mercury__map__lookup_3_p_0(transform_hlds__size_prof__TypeInfo_21_21, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__VarCounts_2, ((MR_Box) (transform_hlds__size_prof__Var_10)), &transform_hlds__size_prof__conv0_Count_14);
            }
#line 1219 "size_prof.m"
            transform_hlds__size_prof__Count_14 = ((MR_Integer) transform_hlds__size_prof__conv0_Count_14);
#line 1220 "size_prof.m"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Count_14 == (MR_Integer) 1);
#line 1220 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1221 "size_prof.m"
              {
#line 1221 "size_prof.m"
                mercury__map__det_insert_4_p_0(transform_hlds__size_prof__TypeInfo_21_21, transform_hlds__size_prof__TypeInfo_for_T_20, ((MR_Box) (transform_hlds__size_prof__Var_10)), transform_hlds__size_prof__T_9, transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3, &transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18);
              }
#line 1220 "size_prof.m"
            else
#line 1220 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3;
#line 1225 "size_prof.m"
            /* direct tailcall eliminated */
#line 1225 "size_prof.m"
            {
#line 1225 "size_prof.m"
              MR_Word transform_hlds__size_prof__HeadVar__1__tmp_copy_1 = transform_hlds__size_prof__AssocList_11;
#line 1225 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0__tmp_copy_3 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18;

#line 1225 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0__tmp_copy_3;
#line 1225 "size_prof.m"
              transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__HeadVar__1__tmp_copy_1;
#line 1225 "size_prof.m"
            }
#line 1225 "size_prof.m"
            continue;
#line 1218 "size_prof.m"
          }
#line 1217 "size_prof.m"
      }
#line 1217 "size_prof.m"
      break;
#line 1217 "size_prof.m"
    }
#line 1213 "size_prof.m"
}

#line 1188 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
#line 1188 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_11,
#line 1188 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_12)
#line 1188 "size_prof.m"
{
#line 1190 "size_prof.m"
  {
#line 1190 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_62_62 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_63_63;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoList_4;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorList_5;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts0_6;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts1_7;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts_8;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap_9;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap_10;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1190 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1191 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;
#line 1192 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1198 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1198 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;

#line 1191 "size_prof.m"
    {
#line 1191 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_61_61, transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__V_13_13, &transform_hlds__size_prof__TypeInfoList_4);
    }
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1192 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 4627 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1192 "size_prof.m"
    {
#line 1192 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_63_63, transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__V_14_14, &transform_hlds__size_prof__TypeCtorList_5);
    }
#line 1193 "size_prof.m"
    {
#line 1193 "size_prof.m"
      mercury__map__init_1_p_0(transform_hlds__size_prof__TypeInfo_62_62, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &transform_hlds__size_prof__VarCounts0_6);
    }
#line 1194 "size_prof.m"
    {
#line 1194 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__size_prof__TypeInfoList_4, transform_hlds__size_prof__VarCounts0_6, &transform_hlds__size_prof__VarCounts1_7);
    }
#line 1195 "size_prof.m"
    {
#line 1195 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__size_prof__TypeCtorList_5, transform_hlds__size_prof__VarCounts1_7, &transform_hlds__size_prof__VarCounts_8);
    }
#line 1196 "size_prof.m"
    {
#line 1196 "size_prof.m"
      transform_hlds__size_prof__V_15_15 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__TypeCtorInfo_61_61);
    }
#line 1196 "size_prof.m"
    {
#line 1196 "size_prof.m"
      transform_hlds__size_prof__construct_rev_map_4_p_0(transform_hlds__size_prof__TypeCtorInfo_61_61, transform_hlds__size_prof__TypeInfoList_4, transform_hlds__size_prof__VarCounts_8, transform_hlds__size_prof__V_15_15, &transform_hlds__size_prof__RevTypeInfoMap_9);
    }
#line 1197 "size_prof.m"
    {
#line 1197 "size_prof.m"
      transform_hlds__size_prof__V_16_16 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__TypeCtorInfo_63_63);
    }
#line 1197 "size_prof.m"
    {
#line 1197 "size_prof.m"
      transform_hlds__size_prof__construct_rev_map_4_p_0(transform_hlds__size_prof__TypeCtorInfo_63_63, transform_hlds__size_prof__TypeCtorList_5, transform_hlds__size_prof__VarCounts_8, transform_hlds__size_prof__V_16_16, &transform_hlds__size_prof__RevTypeCtorMap_10);
    }
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1198 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 1199 "size_prof.m"
    {
#line 1199 "size_prof.m"
      MR_Word base;
#line 1199 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_12 = base;
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_40_40));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap_10));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_9));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_48_48));
#line 1199 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1199 "size_prof.m"
    }
#line 1190 "size_prof.m"
  }
#line 1188 "size_prof.m"
}

#line 1151 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
#line 1151 "size_prof.m"
  MR_Word transform_hlds__size_prof__RttiVarMaps_5,
#line 1151 "size_prof.m"
  MR_Word transform_hlds__size_prof__TVar_6,
#line 1151 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1151 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14)
#line 1151 "size_prof.m"
{
#line 1154 "size_prof.m"
  {
#line 1154 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1154 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoLocn_8;
#line 1154 "size_prof.m"
    MR_Word transform_hlds__size_prof__Type_9;

#line 1155 "size_prof.m"
    {
#line 1155 "size_prof.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__size_prof__RttiVarMaps_5, transform_hlds__size_prof__TVar_6, &transform_hlds__size_prof__TypeInfoLocn_8);
    }
#line 1158 "size_prof.m"
    {
#line 1158 "size_prof.m"
      transform_hlds__size_prof__Type_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_9, 0) = ((MR_Box) (transform_hlds__size_prof__TVar_6));
#line 1158 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "size_prof.m"
    }
#line 1162 "size_prof.m"
    if (((MR_tag((MR_Word) transform_hlds__size_prof__TypeInfoLocn_8)) == (MR_mktag((MR_Integer) 0))))
#line 1160 "size_prof.m"
      {
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_59_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_60_72 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeInfoLocn_8, (MR_Integer) 0)));
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMap_24;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap_26;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 1160 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1130 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1133 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap1_25;
#line 1141 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50;
#line 1141 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;

#line 1132 "size_prof.m"
        {
#line 1132 "size_prof.m"
          mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_59_71, transform_hlds__size_prof__TypeInfo_60_72, ((MR_Box) (transform_hlds__size_prof__Type_9)), ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_10)), transform_hlds__size_prof__TypeInfoMap0_23, &transform_hlds__size_prof__TypeInfoMap_24);
        }
#line 1133 "size_prof.m"
        {
#line 1133 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__map__insert_4_p_0(transform_hlds__size_prof__TypeInfo_60_72, transform_hlds__size_prof__TypeCtorInfo_59_71, ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_10)), ((MR_Box) (transform_hlds__size_prof__Type_9)), transform_hlds__size_prof__RevTypeInfoMap0_22, &transform_hlds__size_prof__RevTypeInfoMap1_25);
        }
#line 1133 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 1134 "size_prof.m"
          transform_hlds__size_prof__RevTypeInfoMap_26 = transform_hlds__size_prof__RevTypeInfoMap1_25;
#line 1133 "size_prof.m"
        else
#line 1139 "size_prof.m"
          transform_hlds__size_prof__RevTypeInfoMap_26 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1141 "size_prof.m"
        transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1142 "size_prof.m"
        {
#line 1142 "size_prof.m"
          MR_Word base;
#line 1142 "size_prof.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = base;
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_24));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_26));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_53_53));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_54_54));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_55_55));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_58_58));
#line 1142 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 1142 "size_prof.m"
        }
#line 1160 "size_prof.m"
      }
#line 1162 "size_prof.m"
    else
#line 1163 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_13;
#line 1154 "size_prof.m"
  }
#line 1151 "size_prof.m"
}

#line 1144 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
#line 1144 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_5,
#line 1144 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_6,
#line 1144 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_10,
#line 1144 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_11)
#line 1144 "size_prof.m"
{
#line 1146 "size_prof.m"
  {
#line 1146 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1146 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1146 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap_9;
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 1147 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1149 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28;

#line 1148 "size_prof.m"
    {
#line 1148 "size_prof.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_5)), ((MR_Box) (transform_hlds__size_prof__KnownSize_6)), transform_hlds__size_prof__KnownSizeMap0_8, &transform_hlds__size_prof__KnownSizeMap_9);
    }
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 1149 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 1149 "size_prof.m"
    {
#line 1149 "size_prof.m"
      MR_Word base;
#line 1149 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_11 = base;
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_23_23));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_24_24));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_25_25));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_26_26));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_27_27));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_9));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_29_29));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_30_30));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_31_31));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_32_32));
#line 1149 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_33_33));
#line 1149 "size_prof.m"
    }
#line 1146 "size_prof.m"
  }
#line 1144 "size_prof.m"
}

#line 1126 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
#line 1126 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_5,
#line 1126 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1126 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1126 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14)
#line 1126 "size_prof.m"
{
#line 1129 "size_prof.m"
  {
#line 1129 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_60_60 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap_10;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap_12;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1129 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap1_11;
#line 1141 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1141 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;

#line 1132 "size_prof.m"
    {
#line 1132 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_59_59, transform_hlds__size_prof__TypeInfo_60_60, ((MR_Box) (transform_hlds__size_prof__Type_5)), ((MR_Box) (transform_hlds__size_prof__Var_6)), transform_hlds__size_prof__TypeInfoMap0_9, &transform_hlds__size_prof__TypeInfoMap_10);
    }
#line 1133 "size_prof.m"
    {
#line 1133 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__insert_4_p_0(transform_hlds__size_prof__TypeInfo_60_60, transform_hlds__size_prof__TypeCtorInfo_59_59, ((MR_Box) (transform_hlds__size_prof__Var_6)), ((MR_Box) (transform_hlds__size_prof__Type_5)), transform_hlds__size_prof__RevTypeInfoMap0_8, &transform_hlds__size_prof__RevTypeInfoMap1_11);
    }
#line 1133 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1134 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap_12 = transform_hlds__size_prof__RevTypeInfoMap1_11;
#line 1133 "size_prof.m"
    else
#line 1139 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap_12 = transform_hlds__size_prof__RevTypeInfoMap0_8;
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1141 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1142 "size_prof.m"
    {
#line 1142 "size_prof.m"
      MR_Word base;
#line 1142 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = base;
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_37_37));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_10));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_12));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1142 "size_prof.m"
    }
#line 1129 "size_prof.m"
  }
#line 1126 "size_prof.m"
}

#line 1105 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
#line 1105 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1105 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1105 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2)
#line 1105 "size_prof.m"
{
#line 1105 "size_prof.m"
  {
#line 1105 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1105 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 1105 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv1_HeadVar__3_46;

#line 1105 "size_prof.m"
    {
#line 1105 "size_prof.m"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1105__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), &transform_hlds__size_prof__conv1_HeadVar__3_46);
    }
#line 1105 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1105 "size_prof.m"
      {
#line 1105 "size_prof.m"
        *transform_hlds__size_prof__wrapper_arg_2 = ((MR_Box) (transform_hlds__size_prof__conv1_HeadVar__3_46));
#line 1105 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1105 "size_prof.m"
      }
#line 1105 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1105 "size_prof.m"
  }
#line 1105 "size_prof.m"
}

#line 1097 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
#line 1097 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1097 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorInfoVar_7,
#line 1097 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypeInfoVars_8,
#line 1097 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_19,
#line 1097 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_20)
#line 1097 "size_prof.m"
{
#line 1100 "size_prof.m"
  {
#line 1100 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1100 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
#line 1101 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
#line 1102 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtor0_11;
#line 1102 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeCtor0_11;

#line 1102 "size_prof.m"
    {
#line 1102 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__size_prof__RevTypeCtorMap0_10, ((MR_Box) (transform_hlds__size_prof__TypeCtorInfoVar_7)), &transform_hlds__size_prof__conv0_TypeCtor0_11);
    }
#line 1102 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1102 "size_prof.m"
      {
#line 1102 "size_prof.m"
        transform_hlds__size_prof__TypeCtor0_11 = ((MR_Word) transform_hlds__size_prof__conv0_TypeCtor0_11);
#line 1102 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1102 "size_prof.m"
      }
#line 1102 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1103 "size_prof.m"
      {
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
#line 1103 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
#line 1104 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgTypes_13;
#line 1105 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;

#line 1105 "size_prof.m"
        {
#line 1105 "size_prof.m"
          transform_hlds__size_prof__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1]));
#line 1105 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 1) = ((MR_Box) (transform_hlds__size_prof__record_known_type_info_5_p_0_1));
#line 1105 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1105 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_12));
#line 1105 "size_prof.m"
        }
#line 1105 "size_prof.m"
        {
#line 1105 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__list__map_3_p_2((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__V_21_21, transform_hlds__size_prof__ArgTypeInfoVars_8, &transform_hlds__size_prof__ArgTypes_13);
        }
#line 1104 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 1107 "size_prof.m"
          {
#line 1107 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Arity_14;
#line 1107 "size_prof.m"
            MR_Word transform_hlds__size_prof__SymName_15;
#line 1107 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtor1_17;
#line 1107 "size_prof.m"
            MR_Word transform_hlds__size_prof__Type_18;
#line 1109 "size_prof.m"
            MR_Integer transform_hlds__size_prof___DeclArity_16;

#line 1107 "size_prof.m"
            {
#line 1107 "size_prof.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Arity_14);
            }
#line 1109 "size_prof.m"
            transform_hlds__size_prof__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor0_11, (MR_Integer) 0)));
#line 1109 "size_prof.m"
            transform_hlds__size_prof___DeclArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor0_11, (MR_Integer) 1)));
#line 1110 "size_prof.m"
            {
#line 1110 "size_prof.m"
              transform_hlds__size_prof__TypeCtor1_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor1_17, 0) = ((MR_Box) (transform_hlds__size_prof__SymName_15));
#line 1110 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor1_17, 1) = ((MR_Box) (transform_hlds__size_prof__Arity_14));
#line 1110 "size_prof.m"
            }
#line 1111 "size_prof.m"
            {
#line 1111 "size_prof.m"
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__size_prof__TypeCtor1_17, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Type_18);
            }
#line 1112 "size_prof.m"
            {
#line 1112 "size_prof.m"
              transform_hlds__size_prof__record_type_info_var_4_p_0(transform_hlds__size_prof__Type_18, transform_hlds__size_prof__Var_6, transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, transform_hlds__size_prof__STATE_VARIABLE_Info_20);
            }
#line 1107 "size_prof.m"
          }
#line 1104 "size_prof.m"
        else
#line 1104 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_20 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_19;
#line 1103 "size_prof.m"
      }
#line 1102 "size_prof.m"
    else
#line 1102 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_20 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_19;
#line 1100 "size_prof.m"
  }
#line 1097 "size_prof.m"
}

#line 1083 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_7,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorModule_8,
#line 1083 "size_prof.m"
  MR_String transform_hlds__size_prof__TypeCtorName_9,
#line 1083 "size_prof.m"
  MR_Integer transform_hlds__size_prof__TypeCtorArity_10,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_17,
#line 1083 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_18)
#line 1083 "size_prof.m"
{
#line 1087 "size_prof.m"
  {
#line 1087 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_64_64;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_65_65;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtor_12;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap0_13;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_14;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap_15;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap_16;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51;
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1094 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1094 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;

#line 1088 "size_prof.m"
    {
#line 1088 "size_prof.m"
      transform_hlds__size_prof__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_19_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorModule_8));
#line 1088 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_19_19, 1) = ((MR_Box) (transform_hlds__size_prof__TypeCtorName_9));
#line 1088 "size_prof.m"
    }
#line 1088 "size_prof.m"
    {
#line 1088 "size_prof.m"
      transform_hlds__size_prof__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor_12, 0) = ((MR_Box) (transform_hlds__size_prof__V_19_19));
#line 1088 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor_12, 1) = ((MR_Box) (transform_hlds__size_prof__TypeCtorArity_10));
#line 1088 "size_prof.m"
    }
#line 1090 "size_prof.m"
    transform_hlds__size_prof__TypeCtorMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__RevTypeCtorMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1090 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 5520 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5522 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_65_65 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1092 "size_prof.m"
    {
#line 1092 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, transform_hlds__size_prof__TypeInfo_65_65, ((MR_Box) (transform_hlds__size_prof__TypeCtor_12)), ((MR_Box) (transform_hlds__size_prof__Var_7)), transform_hlds__size_prof__TypeCtorMap0_13, &transform_hlds__size_prof__TypeCtorMap_15);
    }
#line 1093 "size_prof.m"
    {
#line 1093 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeInfo_65_65, transform_hlds__size_prof__TypeCtorInfo_64_64, ((MR_Box) (transform_hlds__size_prof__Var_7)), ((MR_Box) (transform_hlds__size_prof__TypeCtor_12)), transform_hlds__size_prof__RevTypeCtorMap0_14, &transform_hlds__size_prof__RevTypeCtorMap_16);
    }
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1094 "size_prof.m"
    transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 1095 "size_prof.m"
    {
#line 1095 "size_prof.m"
      MR_Word base;
#line 1095 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_18 = base;
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap_15));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap_16));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_48_48));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_50_50));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1095 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_52_52));
#line 1095 "size_prof.m"
    }
#line 1087 "size_prof.m"
  }
#line 1083 "size_prof.m"
}

#line 1048 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
#line 1048 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_6,
#line 1048 "size_prof.m"
  MR_String transform_hlds__size_prof__Prefix_7,
#line 1048 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Var_8,
#line 1048 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_18,
#line 1048 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_19)
#line 1048 "size_prof.m"
{
#line 1051 "size_prof.m"
  {
#line 1051 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet1_12;
#line 1051 "size_prof.m"
    MR_Integer transform_hlds__size_prof__VarNum_13;
#line 1051 "size_prof.m"
    MR_String transform_hlds__size_prof__VarNumStr_14;
#line 1051 "size_prof.m"
    MR_String transform_hlds__size_prof__Name_15;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_16;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_17;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51;
#line 1051 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52;
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1052 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1060 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1060 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;

#line 1054 "size_prof.m"
    {
#line 1054 "size_prof.m"
      mercury__varset__new_var_3_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, transform_hlds__size_prof__Var_8, transform_hlds__size_prof__VarSet0_10, &transform_hlds__size_prof__VarSet1_12);
    }
#line 1055 "size_prof.m"
    {
#line 1055 "size_prof.m"
      mercury__term__var_to_int_2_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, *transform_hlds__size_prof__Var_8, &transform_hlds__size_prof__VarNum_13);
    }
#line 1056 "size_prof.m"
    {
#line 1056 "size_prof.m"
      mercury__string__int_to_string_2_p_0(transform_hlds__size_prof__VarNum_13, &transform_hlds__size_prof__VarNumStr_14);
    }
#line 1057 "size_prof.m"
    {
#line 1057 "size_prof.m"
      mercury__string__append_3_p_2(transform_hlds__size_prof__Prefix_7, transform_hlds__size_prof__VarNumStr_14, &transform_hlds__size_prof__Name_15);
    }
#line 1058 "size_prof.m"
    {
#line 1058 "size_prof.m"
      mercury__varset__name_var_4_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, *transform_hlds__size_prof__Var_8, transform_hlds__size_prof__Name_15, transform_hlds__size_prof__VarSet1_12, &transform_hlds__size_prof__VarSet_16);
    }
#line 1059 "size_prof.m"
    {
#line 1059 "size_prof.m"
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__size_prof__Var_8, transform_hlds__size_prof__Type_6, transform_hlds__size_prof__VarTypes0_11, &transform_hlds__size_prof__VarTypes_17);
    }
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1060 "size_prof.m"
    transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1061 "size_prof.m"
    {
#line 1061 "size_prof.m"
      MR_Word base;
#line 1061 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_19 = base;
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet_16));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_17));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_50_50));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1061 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_52_52));
#line 1061 "size_prof.m"
    }
#line 1051 "size_prof.m"
  }
#line 1048 "size_prof.m"
}

#line 1020 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoVar_9,
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__Arg_10,
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_11,
#line 1020 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeGoal_12,
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__MaybeSizeVar0_13,
#line 1020 "size_prof.m"
  MR_Word * transform_hlds__size_prof__MaybeSizeVar_14,
#line 1020 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_21,
#line 1020 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_22)
#line 1020 "size_prof.m"
{
#line 1025 "size_prof.m"
  {
#line 1025 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__SizeVar_16;
#line 1025 "size_prof.m"
    MR_String transform_hlds__size_prof__Pred_18;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__Args_19;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__TermSizeProfBuiltin_20;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
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
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;

#line 1026 "size_prof.m"
    {
#line 1026 "size_prof.m"
      transform_hlds__size_prof__V_23_23 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1026 "size_prof.m"
    {
#line 1026 "size_prof.m"
      transform_hlds__size_prof__get_new_var_5_p_0(transform_hlds__size_prof__V_23_23, (MR_String) "SizeVar", &transform_hlds__size_prof__SizeVar_16, transform_hlds__size_prof__STATE_VARIABLE_Info_0_21, transform_hlds__size_prof__STATE_VARIABLE_Info_22);
    }
#line 1031 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeSizeVar0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "size_prof.m"
      {
#line 1032 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;
#line 1032 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_27_27;

#line 1033 "size_prof.m"
        transform_hlds__size_prof__Pred_18 = (MR_String) "measure_size";
#line 1034 "size_prof.m"
        {
#line 1034 "size_prof.m"
          transform_hlds__size_prof__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_27_27, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1034 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1034 "size_prof.m"
        }
#line 1034 "size_prof.m"
        {
#line 1034 "size_prof.m"
          transform_hlds__size_prof__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_26_26, 0) = ((MR_Box) (transform_hlds__size_prof__Arg_10));
#line 1034 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_26_26, 1) = ((MR_Box) (transform_hlds__size_prof__V_27_27));
#line 1034 "size_prof.m"
        }
#line 1034 "size_prof.m"
        {
#line 1034 "size_prof.m"
          transform_hlds__size_prof__Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_9));
#line 1034 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 1) = ((MR_Box) (transform_hlds__size_prof__V_26_26));
#line 1034 "size_prof.m"
        }
#line 1032 "size_prof.m"
      }
#line 1031 "size_prof.m"
    else
#line 1028 "size_prof.m"
      {
#line 1028 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeSizeVar0_13, (MR_Integer) 0)));
#line 1028 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_29_29;
#line 1028 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_30_30;
#line 1028 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_31_31;

#line 1029 "size_prof.m"
        transform_hlds__size_prof__Pred_18 = (MR_String) "measure_size_acc";
#line 1030 "size_prof.m"
        {
#line 1030 "size_prof.m"
          transform_hlds__size_prof__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_31_31, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1030 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "size_prof.m"
        }
#line 1030 "size_prof.m"
        {
#line 1030 "size_prof.m"
          transform_hlds__size_prof__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_30_30, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar0_17));
#line 1030 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_30_30, 1) = ((MR_Box) (transform_hlds__size_prof__V_31_31));
#line 1030 "size_prof.m"
        }
#line 1030 "size_prof.m"
        {
#line 1030 "size_prof.m"
          transform_hlds__size_prof__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_29_29, 0) = ((MR_Box) (transform_hlds__size_prof__Arg_10));
#line 1030 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_29_29, 1) = ((MR_Box) (transform_hlds__size_prof__V_30_30));
#line 1030 "size_prof.m"
        }
#line 1030 "size_prof.m"
        {
#line 1030 "size_prof.m"
          transform_hlds__size_prof__Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_9));
#line 1030 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 1) = ((MR_Box) (transform_hlds__size_prof__V_29_29));
#line 1030 "size_prof.m"
        }
#line 1028 "size_prof.m"
      }
#line 1036 "size_prof.m"
    {
#line 1036 "size_prof.m"
      transform_hlds__size_prof__TermSizeProfBuiltin_20 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 1039 "size_prof.m"
    {
#line 1039 "size_prof.m"
      transform_hlds__size_prof__V_38_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__size_prof__SizeVar_16);
    }
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 1)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1037 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1037 "size_prof.m"
    {
#line 1037 "size_prof.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfBuiltin_20, transform_hlds__size_prof__Pred_18, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__Args_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_38_38, transform_hlds__size_prof__V_39_39, transform_hlds__size_prof__Context_11, transform_hlds__size_prof__SizeGoal_12);
    }
#line 1041 "size_prof.m"
    {
#line 1041 "size_prof.m"
      MR_Word base;
#line 1041 "size_prof.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "size_prof.m"
      *transform_hlds__size_prof__MaybeSizeVar_14 = base;
#line 1041 "size_prof.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1041 "size_prof.m"
    }
#line 1025 "size_prof.m"
  }
#line 1020 "size_prof.m"
}

#line 979 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
#line 979 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_7,
#line 979 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeArgs_8,
#line 979 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorVar_9,
#line 979 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorGoals_10,
#line 979 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_25,
#line 979 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_26)
#line 979 "size_prof.m"
{
#line 983 "size_prof.m"
  {
#line 983 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 983 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorVarPrime_12;
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 984 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 984 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeCtorVarPrime_12;

#line 984 "size_prof.m"
    {
#line 984 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__V_27_27, ((MR_Box) (transform_hlds__size_prof__TypeCtor_7)), &transform_hlds__size_prof__conv0_TypeCtorVarPrime_12);
    }
#line 984 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 984 "size_prof.m"
      {
#line 984 "size_prof.m"
        transform_hlds__size_prof__TypeCtorVarPrime_12 = ((MR_Word) transform_hlds__size_prof__conv0_TypeCtorVarPrime_12);
#line 984 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 984 "size_prof.m"
      }
#line 983 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 986 "size_prof.m"
      {
#line 986 "size_prof.m"
        *transform_hlds__size_prof__TypeCtorVar_9 = transform_hlds__size_prof__TypeCtorVarPrime_12;
#line 987 "size_prof.m"
        *transform_hlds__size_prof__TypeCtorGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_26 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_25;
#line 986 "size_prof.m"
      }
#line 983 "size_prof.m"
    else
#line 996 "size_prof.m"
      {
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__Type_16;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet0_17;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes0_18;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__RttiVarMaps0_19;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorGoal_21;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet_22;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes_23;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__RttiVarMaps_24;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_75_75;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_76_76;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_77_77;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_78_78;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_81_81;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_83_83;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_84_84;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_85_85;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_86_86;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_87_87;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_88_88;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_89_89;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_90_90;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_92_92;
#line 996 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_94_94;
#line 989 "size_prof.m"
        MR_Word transform_hlds__size_prof__Purity_13;
#line 989 "size_prof.m"
        MR_Word transform_hlds__size_prof__PredOrFunc_14;
#line 997 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 997 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;
#line 997 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_45_45;
#line 997 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46;
#line 997 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47;
#line 997 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48;
#line 997 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50;
#line 997 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;
#line 1000 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20;
#line 1004 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_79_79;
#line 1004 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_80_80;
#line 1004 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_82_82;

#line 990 "size_prof.m"
        {
#line 990 "size_prof.m"
          transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(transform_hlds__size_prof__TypeCtor_7, &transform_hlds__size_prof__Purity_13, &transform_hlds__size_prof__PredOrFunc_14);
        }
#line 989 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 992 "size_prof.m"
          {
#line 992 "size_prof.m"
            parse_tree__prog_type__construct_higher_order_type_5_p_0(transform_hlds__size_prof__Purity_13, transform_hlds__size_prof__PredOrFunc_14, transform_hlds__size_prof__TypeArgs_8, &transform_hlds__size_prof__Type_16);
          }
#line 989 "size_prof.m"
        else
#line 995 "size_prof.m"
          {
#line 995 "size_prof.m"
            {
#line 995 "size_prof.m"
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__size_prof__TypeCtor_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__Type_16);
            }
#line 995 "size_prof.m"
          }
#line 997 "size_prof.m"
        transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__RttiVarMaps0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 997 "size_prof.m"
        transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 1000 "size_prof.m"
        {
#line 1000 "size_prof.m"
          check_hlds__polymorphism__init_const_type_ctor_info_var_11_p_0(transform_hlds__size_prof__Type_16, transform_hlds__size_prof__TypeCtor_7, transform_hlds__size_prof__TypeCtorVar_9, &transform_hlds__size_prof__V_20_20, &transform_hlds__size_prof__TypeCtorGoal_21, transform_hlds__size_prof__VarSet0_17, &transform_hlds__size_prof__VarSet_22, transform_hlds__size_prof__VarTypes0_18, &transform_hlds__size_prof__VarTypes_23, transform_hlds__size_prof__RttiVarMaps0_19, &transform_hlds__size_prof__RttiVarMaps_24);
        }
#line 1003 "size_prof.m"
        {
#line 1003 "size_prof.m"
          MR_Word base;
#line 1003 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "size_prof.m"
          *transform_hlds__size_prof__TypeCtorGoals_10 = base;
#line 1003 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorGoal_21));
#line 1003 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1003 "size_prof.m"
        }
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 1004 "size_prof.m"
        transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__V_74_74;
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_86_86 = transform_hlds__size_prof__V_75_75;
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_87_87 = transform_hlds__size_prof__V_76_76;
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_90_90 = transform_hlds__size_prof__VarSet_22;
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_92_92 = transform_hlds__size_prof__V_81_81;
#line 1005 "size_prof.m"
        transform_hlds__size_prof__V_94_94 = transform_hlds__size_prof__V_83_83;
#line 1006 "size_prof.m"
        {
#line 1006 "size_prof.m"
          MR_Word base;
#line 1006 "size_prof.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_26 = base;
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_86_86));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_87_87));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_23));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_92_92));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_24));
#line 1006 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_94_94));
#line 1006 "size_prof.m"
        }
#line 996 "size_prof.m"
      }
#line 983 "size_prof.m"
  }
#line 979 "size_prof.m"
}

#line 937 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
#line 937 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 937 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 937 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2,
#line 937 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3,
#line 937 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_4,
#line 937 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_5)
#line 937 "size_prof.m"
{
#line 937 "size_prof.m"
  {
#line 937 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 937 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv2_TypeInfoVar_9;
#line 937 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv1_TypeInfoGoals_10;
#line 937 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39;

#line 937 "size_prof.m"
    {
#line 937 "size_prof.m"
      transform_hlds__size_prof__make_type_info_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), &transform_hlds__size_prof__conv2_TypeInfoVar_9, &transform_hlds__size_prof__conv1_TypeInfoGoals_10, ((MR_Word) transform_hlds__size_prof__wrapper_arg_4), &transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39);
    }
#line 937 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_2 = ((MR_Box) (transform_hlds__size_prof__conv2_TypeInfoVar_9));
#line 937 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv1_TypeInfoGoals_10));
#line 937 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_5 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39));
#line 937 "size_prof.m"
  }
#line 937 "size_prof.m"
}

#line 931 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_11,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_12,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypes_13,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__CtorIsVarArity_14,
#line 931 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_15,
#line 931 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_16,
#line 931 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_42,
#line 931 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_43)
#line 931 "size_prof.m"
{
#line 936 "size_prof.m"
  {
#line 936 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_180_180;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_181_181;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_184_184;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoVars_18;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoGoalLists_19;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoGoals_20;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorVar_21;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorGoals_22;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__FrontGoals_30;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgVars_31;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet2_32;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes2_33;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps0_34;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap_35;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybePreferredVar_37;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoGoal_38;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_39;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_40;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps_41;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_45_45;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_50_50;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_142_142;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_143_143;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_144_144;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_145_145;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_146_146;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_147_147;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_150_150;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_152_152;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_153_153;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_154_154;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_155_155;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_156_156;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_157_157;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_158_158;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_159_159;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_161_161;
#line 936 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_163_163;
#line 937 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_102_102;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_103_103;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_104_104;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_105_105;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_107_107;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_111_111;
#line 961 "size_prof.m"
    MR_Word transform_hlds__size_prof__PrefTIVar_36;
#line 961 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv4_PrefTIVar_36;
#line 969 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_148_148;
#line 969 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_149_149;
#line 969 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_151_151;

#line 937 "size_prof.m"
    {
#line 937 "size_prof.m"
      transform_hlds__size_prof__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 937 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_8[0]));
#line 937 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 1) = ((MR_Box) (transform_hlds__size_prof__construct_type_info_9_p_0_1));
#line 937 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 937 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 3) = ((MR_Box) (transform_hlds__size_prof__Context_10));
#line 937 "size_prof.m"
    }
#line 6481 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_180_180 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 6483 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_181_181 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 937 "size_prof.m"
    {
#line 937 "size_prof.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__TypeInfo_181_181, (MR_Word) &transform_hlds__size_prof_scalar_common_1[2], (MR_Word) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0, transform_hlds__size_prof__V_44_44, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__ArgTypeInfoVars_18, &transform_hlds__size_prof__ArgTypeInfoGoalLists_19, ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_Info_0_42)), &transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45);
    }
#line 937 "size_prof.m"
    transform_hlds__size_prof__STATE_VARIABLE_Info_45_45 = ((MR_Word) transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45);
#line 6492 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 939 "size_prof.m"
    {
#line 939 "size_prof.m"
      transform_hlds__size_prof__ArgTypeInfoGoals_20 = mercury__list__condense_1_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__ArgTypeInfoGoalLists_19);
    }
#line 940 "size_prof.m"
    {
#line 940 "size_prof.m"
      transform_hlds__size_prof__make_type_ctor_info_6_p_0(transform_hlds__size_prof__TypeCtor_12, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__TypeCtorVar_21, &transform_hlds__size_prof__TypeCtorGoals_22, transform_hlds__size_prof__STATE_VARIABLE_Info_45_45, &transform_hlds__size_prof__STATE_VARIABLE_Info_46_46);
    }
#line 952 "size_prof.m"
#line 952 "size_prof.m"
    switch (transform_hlds__size_prof__CtorIsVarArity_14) {
#line 952 "size_prof.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 952 "size_prof.m"
      case (MR_Integer) 0:
#line 953 "size_prof.m"
        {
#line 954 "size_prof.m"
          transform_hlds__size_prof__FrontGoals_30 = transform_hlds__size_prof__TypeCtorGoals_22;
#line 955 "size_prof.m"
          {
#line 955 "size_prof.m"
            transform_hlds__size_prof__ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "size_prof.m"
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorVar_21));
#line 955 "size_prof.m"
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 1) = ((MR_Box) (transform_hlds__size_prof__ArgTypeInfoVars_18));
#line 955 "size_prof.m"
          }
#line 953 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 953 "size_prof.m"
        }
#line 952 "size_prof.m"
        break;
#line 952 "size_prof.m"
      case (MR_Integer) 1:
#line 942 "size_prof.m"
        {
#line 942 "size_prof.m"
          MR_Integer transform_hlds__size_prof__Arity_23;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__VarSet0_24;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__VarTypes0_25;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__ArityGoal_26;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__ArityVar_27;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__VarSet1_28;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__VarTypes1_29;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_51_51;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_53_53;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_80_80;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_81_81;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_82_82;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_83_83;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_84_84;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_85_85;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_88_88;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_89_89;
#line 942 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_90_90;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_60_60;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_61_61;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_62_62;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_63_63;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_64_64;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_65_65;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_67_67;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_68_68;
#line 944 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_69_69;
#line 948 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_86_86;
#line 948 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_87_87;

#line 943 "size_prof.m"
          {
#line 943 "size_prof.m"
            mercury__list__length_2_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Arity_23);
          }
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 0)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 1)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 2)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 3)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 4)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 5)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 6)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__VarTypes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 7)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 8)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 9)));
#line 944 "size_prof.m"
          transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 10)));
#line 946 "size_prof.m"
          {
#line 946 "size_prof.m"
            hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__Arity_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_7[3]), &transform_hlds__size_prof__ArityGoal_26, &transform_hlds__size_prof__ArityVar_27, transform_hlds__size_prof__VarSet0_24, &transform_hlds__size_prof__VarSet1_28, transform_hlds__size_prof__VarTypes0_25, &transform_hlds__size_prof__VarTypes1_29);
          }
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 0)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 1)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 2)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 3)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 4)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 5)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 6)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 7)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 8)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 9)));
#line 948 "size_prof.m"
          transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 10)));
#line 949 "size_prof.m"
          {
#line 949 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (transform_hlds__size_prof__V_80_80));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (transform_hlds__size_prof__V_81_81));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (transform_hlds__size_prof__V_82_82));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (transform_hlds__size_prof__V_83_83));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet1_28));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes1_29));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 949 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 949 "size_prof.m"
          }
#line 950 "size_prof.m"
          {
#line 950 "size_prof.m"
            transform_hlds__size_prof__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "size_prof.m"
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_51_51, 0) = ((MR_Box) (transform_hlds__size_prof__ArityGoal_26));
#line 950 "size_prof.m"
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 950 "size_prof.m"
          }
#line 950 "size_prof.m"
          {
#line 950 "size_prof.m"
            transform_hlds__size_prof__FrontGoals_30 = mercury__list__append_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__TypeCtorGoals_22, transform_hlds__size_prof__V_51_51);
          }
#line 951 "size_prof.m"
          {
#line 951 "size_prof.m"
            transform_hlds__size_prof__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "size_prof.m"
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_53_53, 0) = ((MR_Box) (transform_hlds__size_prof__ArityVar_27));
#line 951 "size_prof.m"
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_53_53, 1) = ((MR_Box) (transform_hlds__size_prof__ArgTypeInfoVars_18));
#line 951 "size_prof.m"
          }
#line 951 "size_prof.m"
          {
#line 951 "size_prof.m"
            transform_hlds__size_prof__ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "size_prof.m"
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorVar_21));
#line 951 "size_prof.m"
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 1) = ((MR_Box) (transform_hlds__size_prof__V_53_53));
#line 951 "size_prof.m"
          }
#line 942 "size_prof.m"
        }
#line 952 "size_prof.m"
        break;
#line 952 "size_prof.m"
    }
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__TargetTypeInfoMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__VarSet2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__VarTypes2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__RttiVarMaps0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 961 "size_prof.m"
    {
#line 961 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__TypeInfo_181_181, transform_hlds__size_prof__TargetTypeInfoMap_35, ((MR_Box) (transform_hlds__size_prof__Type_11)), &transform_hlds__size_prof__conv4_PrefTIVar_36);
    }
#line 961 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 961 "size_prof.m"
      {
#line 961 "size_prof.m"
        transform_hlds__size_prof__PrefTIVar_36 = ((MR_Word) transform_hlds__size_prof__conv4_PrefTIVar_36);
#line 961 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 961 "size_prof.m"
      }
#line 961 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 962 "size_prof.m"
      {
#line 962 "size_prof.m"
        transform_hlds__size_prof__MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 962 "size_prof.m"
        MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybePreferredVar_37, 0) = ((MR_Box) (transform_hlds__size_prof__PrefTIVar_36));
#line 962 "size_prof.m"
      }
#line 961 "size_prof.m"
    else
#line 964 "size_prof.m"
      transform_hlds__size_prof__MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 966 "size_prof.m"
    {
#line 966 "size_prof.m"
      check_hlds__polymorphism__init_type_info_var_11_p_0(transform_hlds__size_prof__Type_11, transform_hlds__size_prof__ArgVars_31, transform_hlds__size_prof__MaybePreferredVar_37, transform_hlds__size_prof__TypeInfoVar_15, &transform_hlds__size_prof__TypeInfoGoal_38, transform_hlds__size_prof__VarSet2_32, &transform_hlds__size_prof__VarSet_39, transform_hlds__size_prof__VarTypes2_33, &transform_hlds__size_prof__VarTypes_40, transform_hlds__size_prof__RttiVarMaps0_34, &transform_hlds__size_prof__RttiVarMaps_41);
    }
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 969 "size_prof.m"
    transform_hlds__size_prof__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_153_153 = transform_hlds__size_prof__V_142_142;
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_154_154 = transform_hlds__size_prof__V_143_143;
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_155_155 = transform_hlds__size_prof__V_144_144;
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_156_156 = transform_hlds__size_prof__V_145_145;
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_157_157 = transform_hlds__size_prof__V_146_146;
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_158_158 = transform_hlds__size_prof__V_147_147;
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_159_159 = transform_hlds__size_prof__VarSet_39;
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_161_161 = transform_hlds__size_prof__V_150_150;
#line 970 "size_prof.m"
    transform_hlds__size_prof__V_163_163 = transform_hlds__size_prof__V_152_152;
#line 971 "size_prof.m"
    {
#line 971 "size_prof.m"
      MR_Word base;
#line 971 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 971 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_43 = base;
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_153_153));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_155_155));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_156_156));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_157_157));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_158_158));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_159_159));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_40));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_161_161));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_41));
#line 971 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_163_163));
#line 971 "size_prof.m"
    }
#line 972 "size_prof.m"
    {
#line 972 "size_prof.m"
      transform_hlds__size_prof__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoGoal_38));
#line 972 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "size_prof.m"
    }
#line 972 "size_prof.m"
    {
#line 972 "size_prof.m"
      transform_hlds__size_prof__V_57_57 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__FrontGoals_30, transform_hlds__size_prof__V_58_58);
    }
#line 972 "size_prof.m"
    {
#line 972 "size_prof.m"
      *transform_hlds__size_prof__TypeInfoGoals_16 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__ArgTypeInfoGoals_20, transform_hlds__size_prof__V_57_57);
    }
#line 936 "size_prof.m"
  }
#line 931 "size_prof.m"
}

#line 862 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
#line 862 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_7,
#line 862 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_8,
#line 862 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_9,
#line 862 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_10,
#line 862 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_38,
#line 862 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_39)
#line 862 "size_prof.m"
{
#line 866 "size_prof.m"
  {
#line 866 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoVarPrime_12;
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 866 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 866 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeInfoVarPrime_12;

#line 866 "size_prof.m"
    {
#line 866 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__V_40_40, ((MR_Box) (transform_hlds__size_prof__Type_8)), &transform_hlds__size_prof__conv0_TypeInfoVarPrime_12);
    }
#line 866 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 866 "size_prof.m"
      {
#line 866 "size_prof.m"
        transform_hlds__size_prof__TypeInfoVarPrime_12 = ((MR_Word) transform_hlds__size_prof__conv0_TypeInfoVarPrime_12);
#line 866 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 866 "size_prof.m"
      }
#line 866 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 867 "size_prof.m"
      {
#line 867 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoVar_9 = transform_hlds__size_prof__TypeInfoVarPrime_12;
#line 868 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_39 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 867 "size_prof.m"
      }
#line 866 "size_prof.m"
    else
#line 869 "size_prof.m"
      {
#line 869 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtor_13;
#line 869 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgTypes_14;

#line 869 "size_prof.m"
        {
#line 869 "size_prof.m"
          transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(transform_hlds__size_prof__Type_8, &transform_hlds__size_prof__TypeCtor_13, &transform_hlds__size_prof__ArgTypes_14);
        }
#line 869 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 870 "size_prof.m"
          {
#line 870 "size_prof.m"
            {
#line 870 "size_prof.m"
              transform_hlds__size_prof__construct_type_info_9_p_0(transform_hlds__size_prof__Context_7, transform_hlds__size_prof__Type_8, transform_hlds__size_prof__TypeCtor_13, transform_hlds__size_prof__ArgTypes_14, (MR_Integer) 1, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
            }
#line 870 "size_prof.m"
          }
#line 869 "size_prof.m"
        else
#line 872 "size_prof.m"
          {
#line 872 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtor_72;
#line 872 "size_prof.m"
            MR_Word transform_hlds__size_prof__ArgTypes_73;

#line 872 "size_prof.m"
            {
#line 872 "size_prof.m"
              transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__size_prof__Type_8, &transform_hlds__size_prof__TypeCtor_72, &transform_hlds__size_prof__ArgTypes_73);
            }
#line 872 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 879 "size_prof.m"
              if ((transform_hlds__size_prof__ArgTypes_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "size_prof.m"
                {
#line 875 "size_prof.m"
                  {
#line 875 "size_prof.m"
                    transform_hlds__size_prof__make_type_ctor_info_6_p_0(transform_hlds__size_prof__TypeCtor_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
                  }
#line 874 "size_prof.m"
                }
#line 879 "size_prof.m"
              else
#line 880 "size_prof.m"
                {
#line 881 "size_prof.m"
                  {
#line 881 "size_prof.m"
                    transform_hlds__size_prof__construct_type_info_9_p_0(transform_hlds__size_prof__Context_7, transform_hlds__size_prof__Type_8, transform_hlds__size_prof__TypeCtor_72, transform_hlds__size_prof__ArgTypes_73, (MR_Integer) 0, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
                  }
#line 880 "size_prof.m"
                }
#line 872 "size_prof.m"
            else
#line 884 "size_prof.m"
              {
#line 884 "size_prof.m"
                MR_Word transform_hlds__size_prof__TVar_19;
#line 884 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_20_20;

#line 884 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Type_8)) == (MR_mktag((MR_Integer) 0)));
#line 884 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 884 "size_prof.m"
                  {
#line 884 "size_prof.m"
                    transform_hlds__size_prof__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_8, (MR_Integer) 0)));
#line 884 "size_prof.m"
                    transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_8, (MR_Integer) 1)));
#line 885 "size_prof.m"
                    {
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TVarLocn_21;
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 885 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));

#line 885 "size_prof.m"
                      {
#line 885 "size_prof.m"
                        hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__size_prof__V_47_47, transform_hlds__size_prof__TVar_19, &transform_hlds__size_prof__TVarLocn_21);
                      }
#line 889 "size_prof.m"
                      if (((MR_tag((MR_Word) transform_hlds__size_prof__TVarLocn_21)) == (MR_mktag((MR_Integer) 0))))
#line 887 "size_prof.m"
                        {
#line 887 "size_prof.m"
                          *transform_hlds__size_prof__TypeInfoVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 0)));
#line 888 "size_prof.m"
                          *transform_hlds__size_prof__TypeInfoGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "size_prof.m"
                          *transform_hlds__size_prof__STATE_VARIABLE_Info_39 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 887 "size_prof.m"
                        }
#line 889 "size_prof.m"
                      else
#line 890 "size_prof.m"
                        {
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TypeClassInfoVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 0)));
#line 890 "size_prof.m"
                          MR_Integer transform_hlds__size_prof__Slot_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 1)));
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TargetTypeInfoMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet1_28;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes1_29;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__SlotGoal_32;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__SlotVar_33;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet_34;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes_35;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__PrivateBuiltin_36;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__ExtractGoal_37;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_49_49;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_53_53;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_59_59;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_61_61;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_62_62;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_63_63;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_64_64;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_67_67;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_145_145;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_146_146;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_147_147;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_148_148;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_149_149;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_150_150;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_153_153;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_154_154;
#line 890 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_155_155;
#line 891 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 891 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 891 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 891 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 891 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 891 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 891 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 891 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 894 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TargetVar_27;
#line 894 "size_prof.m"
                          MR_Box transform_hlds__size_prof__conv1_TargetVar_27;
#line 907 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_151_151;
#line 907 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_152_152;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_167_167;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_168_168;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_169_169;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_170_170;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_171_171;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_172_172;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_173_173;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_174_174;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_175_175;
#line 910 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_176_176;

#line 894 "size_prof.m"
                          {
#line 894 "size_prof.m"
                            transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__TargetTypeInfoMap_24, ((MR_Box) (transform_hlds__size_prof__Type_8)), &transform_hlds__size_prof__conv1_TargetVar_27);
                          }
#line 894 "size_prof.m"
                          if (transform_hlds__size_prof__succeeded)
#line 894 "size_prof.m"
                            {
#line 894 "size_prof.m"
                              transform_hlds__size_prof__TargetVar_27 = ((MR_Word) transform_hlds__size_prof__conv1_TargetVar_27);
#line 894 "size_prof.m"
                              transform_hlds__size_prof__succeeded = MR_TRUE;
#line 894 "size_prof.m"
                            }
#line 894 "size_prof.m"
                          if (transform_hlds__size_prof__succeeded)
#line 895 "size_prof.m"
                            {
#line 895 "size_prof.m"
                              *transform_hlds__size_prof__TypeInfoVar_9 = transform_hlds__size_prof__TargetVar_27;
#line 896 "size_prof.m"
                              transform_hlds__size_prof__VarSet1_28 = transform_hlds__size_prof__VarSet0_25;
#line 897 "size_prof.m"
                              transform_hlds__size_prof__VarTypes1_29 = transform_hlds__size_prof__VarTypes0_26;
#line 895 "size_prof.m"
                              transform_hlds__size_prof__STATE_VARIABLE_Info_49_49 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 895 "size_prof.m"
                            }
#line 894 "size_prof.m"
                          else
#line 899 "size_prof.m"
                            {
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RttiVarMaps0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RttiVarMaps_31;
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 899 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_134_134;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_135_135;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_136_136;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_137_137;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_138_138;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_139_139;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_140_140;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_141_141;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_142_142;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_144_144;
#line 903 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_143_143;

#line 900 "size_prof.m"
                              {
#line 900 "size_prof.m"
                                check_hlds__polymorphism__new_type_info_var_raw_9_p_0(transform_hlds__size_prof__Type_8, (MR_Integer) 0, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__VarSet0_25, &transform_hlds__size_prof__VarSet1_28, transform_hlds__size_prof__VarTypes0_26, &transform_hlds__size_prof__VarTypes1_29, transform_hlds__size_prof__RttiVarMaps0_30, &transform_hlds__size_prof__RttiVarMaps_31);
                              }
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 903 "size_prof.m"
                              transform_hlds__size_prof__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 903 "size_prof.m"
                              {
#line 903 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 1) = ((MR_Box) (transform_hlds__size_prof__V_135_135));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (transform_hlds__size_prof__V_137_137));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (transform_hlds__size_prof__V_138_138));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (transform_hlds__size_prof__V_139_139));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (transform_hlds__size_prof__V_140_140));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (transform_hlds__size_prof__V_141_141));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (transform_hlds__size_prof__V_142_142));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_31));
#line 903 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (transform_hlds__size_prof__V_144_144));
#line 903 "size_prof.m"
                              }
#line 899 "size_prof.m"
                            }
#line 905 "size_prof.m"
                          {
#line 905 "size_prof.m"
                            hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__Slot_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_7[2]), &transform_hlds__size_prof__SlotGoal_32, &transform_hlds__size_prof__SlotVar_33, transform_hlds__size_prof__VarSet1_28, &transform_hlds__size_prof__VarSet_34, transform_hlds__size_prof__VarTypes1_29, &transform_hlds__size_prof__VarTypes_35);
                          }
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 0)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 1)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 2)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 3)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 4)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 5)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 6)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 7)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 8)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 9)));
#line 907 "size_prof.m"
                          transform_hlds__size_prof__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 10)));
#line 908 "size_prof.m"
                          {
#line 908 "size_prof.m"
                            transform_hlds__size_prof__STATE_VARIABLE_Info_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 0) = ((MR_Box) (transform_hlds__size_prof__V_145_145));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 1) = ((MR_Box) (transform_hlds__size_prof__V_146_146));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 2) = ((MR_Box) (transform_hlds__size_prof__V_147_147));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 3) = ((MR_Box) (transform_hlds__size_prof__V_148_148));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 4) = ((MR_Box) (transform_hlds__size_prof__V_149_149));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 5) = ((MR_Box) (transform_hlds__size_prof__V_150_150));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet_34));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_35));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 8) = ((MR_Box) (transform_hlds__size_prof__V_153_153));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 9) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 908 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 10) = ((MR_Box) (transform_hlds__size_prof__V_155_155));
#line 908 "size_prof.m"
                          }
#line 909 "size_prof.m"
                          {
#line 909 "size_prof.m"
                            transform_hlds__size_prof__PrivateBuiltin_36 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          }
#line 913 "size_prof.m"
                          {
#line 913 "size_prof.m"
                            transform_hlds__size_prof__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_64_64, 0) = ((MR_Box) (*transform_hlds__size_prof__TypeInfoVar_9));
#line 913 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "size_prof.m"
                          }
#line 913 "size_prof.m"
                          {
#line 913 "size_prof.m"
                            transform_hlds__size_prof__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_63_63, 0) = ((MR_Box) (transform_hlds__size_prof__SlotVar_33));
#line 913 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_63_63, 1) = ((MR_Box) (transform_hlds__size_prof__V_64_64));
#line 913 "size_prof.m"
                          }
#line 913 "size_prof.m"
                          {
#line 913 "size_prof.m"
                            transform_hlds__size_prof__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 0) = ((MR_Box) (transform_hlds__size_prof__TypeClassInfoVar_22));
#line 913 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 1) = ((MR_Box) (transform_hlds__size_prof__V_63_63));
#line 913 "size_prof.m"
                          }
#line 914 "size_prof.m"
                          {
#line 914 "size_prof.m"
                            transform_hlds__size_prof__V_61_61 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__size_prof__TypeInfoVar_9);
                          }
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
#line 910 "size_prof.m"
                          transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
#line 910 "size_prof.m"
                          {
#line 910 "size_prof.m"
                            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__PrivateBuiltin_36, (MR_String) "type_info_from_typeclass_info", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__V_59_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_61_61, transform_hlds__size_prof__V_62_62, transform_hlds__size_prof__Context_7, &transform_hlds__size_prof__ExtractGoal_37);
                          }
#line 916 "size_prof.m"
                          {
#line 916 "size_prof.m"
                            transform_hlds__size_prof__record_type_info_var_4_p_0(transform_hlds__size_prof__Type_8, *transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
                          }
#line 917 "size_prof.m"
                          {
#line 917 "size_prof.m"
                            transform_hlds__size_prof__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_67_67, 0) = ((MR_Box) (transform_hlds__size_prof__ExtractGoal_37));
#line 917 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "size_prof.m"
                          }
#line 917 "size_prof.m"
                          {
#line 917 "size_prof.m"
                            MR_Word base;
#line 917 "size_prof.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "size_prof.m"
                            *transform_hlds__size_prof__TypeInfoGoals_10 = base;
#line 917 "size_prof.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__SlotGoal_32));
#line 917 "size_prof.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 917 "size_prof.m"
                          }
#line 890 "size_prof.m"
                        }
#line 885 "size_prof.m"
                    }
#line 884 "size_prof.m"
                  }
#line 884 "size_prof.m"
                else
#line 923 "size_prof.m"
                  {
#line 923 "size_prof.m"
                    {
#line 923 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.make_type_info\'/6", (MR_String) "cannot happen");
#line 923 "size_prof.m"
                      return;
                    }
#line 923 "size_prof.m"
                  }
#line 884 "size_prof.m"
              }
#line 872 "size_prof.m"
          }
#line 869 "size_prof.m"
      }
#line 866 "size_prof.m"
  }
#line 862 "size_prof.m"
}

#line 830 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
#line 830 "size_prof.m"
  MR_Word transform_hlds__size_prof__SizeVar0_8,
#line 830 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_9,
#line 830 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 830 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeVar_11,
#line 830 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goals_12,
#line 830 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_22,
#line 830 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_23)
#line 830 "size_prof.m"
{
#line 834 "size_prof.m"
  {
#line 834 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__KnownSize_9 == (MR_Integer) 0);

#line 834 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 835 "size_prof.m"
      {
#line 835 "size_prof.m"
        *transform_hlds__size_prof__SizeVar_11 = transform_hlds__size_prof__SizeVar0_8;
#line 836 "size_prof.m"
        *transform_hlds__size_prof__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 835 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_23 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_22;
#line 835 "size_prof.m"
      }
#line 834 "size_prof.m"
    else
#line 838 "size_prof.m"
      {
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeGoal_16;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeVar_17;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet1_18;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes1_19;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__TermSizeProfModule_20;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__AddGoal_21;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_27_27;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_28_28;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_67_67;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_68_68;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_69_69;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_70_70;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_75_75;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_76_76;
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 838 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 843 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_72_72;
#line 843 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_88_88;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_89_89;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_90_90;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_91_91;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_92_92;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_93_93;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_94_94;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_95_95;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_96_96;
#line 847 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_97_97;

#line 840 "size_prof.m"
        {
#line 840 "size_prof.m"
          hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__KnownSize_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_7[0]), &transform_hlds__size_prof__KnownSizeGoal_16, &transform_hlds__size_prof__KnownSizeVar_17, transform_hlds__size_prof__VarSet0_14, &transform_hlds__size_prof__VarSet1_18, transform_hlds__size_prof__VarTypes0_15, &transform_hlds__size_prof__VarTypes1_19);
        }
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 843 "size_prof.m"
        transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 844 "size_prof.m"
        {
#line 844 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (transform_hlds__size_prof__V_66_66));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (transform_hlds__size_prof__V_68_68));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (transform_hlds__size_prof__V_69_69));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (transform_hlds__size_prof__V_70_70));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 5) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet1_18));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes1_19));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 8) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 9) = ((MR_Box) (transform_hlds__size_prof__V_75_75));
#line 844 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 10) = ((MR_Box) (transform_hlds__size_prof__V_76_76));
#line 844 "size_prof.m"
        }
#line 845 "size_prof.m"
        {
#line 845 "size_prof.m"
          transform_hlds__size_prof__V_28_28 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 845 "size_prof.m"
        {
#line 845 "size_prof.m"
          transform_hlds__size_prof__get_new_var_5_p_0(transform_hlds__size_prof__V_28_28, (MR_String) "FinalSizeVar", transform_hlds__size_prof__SizeVar_11, transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, transform_hlds__size_prof__STATE_VARIABLE_Info_23);
        }
#line 846 "size_prof.m"
        {
#line 846 "size_prof.m"
          transform_hlds__size_prof__TermSizeProfModule_20 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 849 "size_prof.m"
        {
#line 849 "size_prof.m"
          transform_hlds__size_prof__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_42_42, 0) = ((MR_Box) (*transform_hlds__size_prof__SizeVar_11));
#line 849 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "size_prof.m"
        }
#line 849 "size_prof.m"
        {
#line 849 "size_prof.m"
          transform_hlds__size_prof__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_41_41, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSizeVar_17));
#line 849 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_41_41, 1) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 849 "size_prof.m"
        }
#line 849 "size_prof.m"
        {
#line 849 "size_prof.m"
          transform_hlds__size_prof__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_36_36, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar0_8));
#line 849 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_36_36, 1) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 849 "size_prof.m"
        }
#line 850 "size_prof.m"
        {
#line 850 "size_prof.m"
          transform_hlds__size_prof__V_38_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__size_prof__SizeVar_11);
        }
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 0)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 1)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 2)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 3)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 4)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 5)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 6)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 7)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 8)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 9)));
#line 847 "size_prof.m"
        transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 10)));
#line 847 "size_prof.m"
        {
#line 847 "size_prof.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfModule_20, (MR_String) "term_size_plus", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_7[1]), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__V_36_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_38_38, transform_hlds__size_prof__V_39_39, transform_hlds__size_prof__Context_10, &transform_hlds__size_prof__AddGoal_21);
        }
#line 852 "size_prof.m"
        {
#line 852 "size_prof.m"
          transform_hlds__size_prof__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_44_44, 0) = ((MR_Box) (transform_hlds__size_prof__AddGoal_21));
#line 852 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "size_prof.m"
        }
#line 852 "size_prof.m"
        {
#line 852 "size_prof.m"
          MR_Word base;
#line 852 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "size_prof.m"
          *transform_hlds__size_prof__Goals_12 = base;
#line 852 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSizeGoal_16));
#line 852 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 852 "size_prof.m"
        }
#line 838 "size_prof.m"
      }
#line 834 "size_prof.m"
  }
#line 830 "size_prof.m"
}

#line 800 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
#line 800 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 800 "size_prof.m"
  MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2,
#line 800 "size_prof.m"
  MR_Integer * transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3,
#line 800 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4,
#line 800 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5,
#line 800 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_6,
#line 800 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__7_7,
#line 800 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 800 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9)
#line 800 "size_prof.m"
{
#line 804 "size_prof.m"
  {
#line 804 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 804 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "size_prof.m"
      {
#line 804 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_9 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 804 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 804 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3 = transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2;
#line 804 "size_prof.m"
      }
#line 804 "size_prof.m"
    else
#line 806 "size_prof.m"
      {
#line 806 "size_prof.m"
        MR_Word transform_hlds__size_prof__Arg_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 806 "size_prof.m"
        MR_Word transform_hlds__size_prof__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 806 "size_prof.m"
        MR_Word transform_hlds__size_prof__Type_27;
#line 806 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgGoals_29;
#line 806 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterGoals_33;
#line 806 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 806 "size_prof.m"
        MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42;
#line 806 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45;
#line 806 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 807 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 808 "size_prof.m"
        MR_Integer transform_hlds__size_prof__ArgSize_28;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_67_67;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_68_68;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_69_69;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_70_70;
#line 808 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 808 "size_prof.m"
        MR_Box transform_hlds__size_prof__conv0_ArgSize_28;

#line 807 "size_prof.m"
        {
#line 807 "size_prof.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__size_prof__V_40_40, transform_hlds__size_prof__Arg_20, &transform_hlds__size_prof__Type_27);
        }
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 808 "size_prof.m"
        transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 808 "size_prof.m"
        {
#line 808 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__V_41_41, ((MR_Box) (transform_hlds__size_prof__Arg_20)), &transform_hlds__size_prof__conv0_ArgSize_28);
        }
#line 808 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 808 "size_prof.m"
          {
#line 808 "size_prof.m"
            transform_hlds__size_prof__ArgSize_28 = ((MR_Integer) transform_hlds__size_prof__conv0_ArgSize_28);
#line 808 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 808 "size_prof.m"
          }
#line 808 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 809 "size_prof.m"
          {
#line 809 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42 = (transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2 + transform_hlds__size_prof__ArgSize_28);
#line 810 "size_prof.m"
            transform_hlds__size_prof__ArgGoals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 809 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 809 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 809 "size_prof.m"
          }
#line 808 "size_prof.m"
        else
#line 811 "size_prof.m"
          {
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 811 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));

#line 811 "size_prof.m"
            {
#line 811 "size_prof.m"
              transform_hlds__size_prof__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__size_prof__V_43_43, transform_hlds__size_prof__Type_27);
            }
#line 811 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 812 "size_prof.m"
              {
#line 812 "size_prof.m"
                transform_hlds__size_prof__ArgGoals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 812 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 812 "size_prof.m"
              }
#line 811 "size_prof.m"
            else
#line 814 "size_prof.m"
              {
#line 814 "size_prof.m"
                MR_Word transform_hlds__size_prof__TypeInfoVar_30;
#line 814 "size_prof.m"
                MR_Word transform_hlds__size_prof__TypeInfoGoals_31;
#line 814 "size_prof.m"
                MR_Word transform_hlds__size_prof__SizeGoal_32;
#line 814 "size_prof.m"
                MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 814 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_47_47;

#line 814 "size_prof.m"
                {
#line 814 "size_prof.m"
                  transform_hlds__size_prof__make_type_info_6_p_0(transform_hlds__size_prof__Context_6, transform_hlds__size_prof__Type_27, &transform_hlds__size_prof__TypeInfoVar_30, &transform_hlds__size_prof__TypeInfoGoals_31, transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, &transform_hlds__size_prof__STATE_VARIABLE_Info_44_44);
                }
#line 815 "size_prof.m"
                {
#line 815 "size_prof.m"
                  transform_hlds__size_prof__make_size_goal_8_p_0(transform_hlds__size_prof__TypeInfoVar_30, transform_hlds__size_prof__Arg_20, transform_hlds__size_prof__Context_6, &transform_hlds__size_prof__SizeGoal_32, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4, &transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45, transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, &transform_hlds__size_prof__STATE_VARIABLE_Info_46_46);
                }
#line 817 "size_prof.m"
                {
#line 817 "size_prof.m"
                  transform_hlds__size_prof__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "size_prof.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_47_47, 0) = ((MR_Box) (transform_hlds__size_prof__SizeGoal_32));
#line 817 "size_prof.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "size_prof.m"
                }
#line 817 "size_prof.m"
                {
#line 817 "size_prof.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__TypeInfoGoals_31, transform_hlds__size_prof__V_47_47, &transform_hlds__size_prof__ArgGoals_29);
                }
#line 814 "size_prof.m"
              }
#line 811 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42 = transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2;
#line 811 "size_prof.m"
          }
#line 819 "size_prof.m"
        {
#line 819 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__Args_21, transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42, transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5, transform_hlds__size_prof__Context_6, &transform_hlds__size_prof__LaterGoals_33, transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, transform_hlds__size_prof__STATE_VARIABLE_Info_9);
        }
#line 821 "size_prof.m"
        {
#line 821 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__ArgGoals_29, transform_hlds__size_prof__LaterGoals_33);
        }
#line 806 "size_prof.m"
      }
#line 804 "size_prof.m"
  }
#line 800 "size_prof.m"
}

#line 771 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
#line 771 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg)
#line 771 "size_prof.m"
{
#line 771 "size_prof.m"
  {
#line 771 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 771 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 771 "size_prof.m"
    {
#line 771 "size_prof.m"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__771__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 4))));
    }
#line 771 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 771 "size_prof.m"
  }
#line 771 "size_prof.m"
}

#line 758 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_8,
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_9,
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_10,
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyGoal_11,
#line 758 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_12,
#line 758 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 758 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29)
#line 758 "size_prof.m"
{
#line 763 "size_prof.m"
  {
#line 763 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 763 "size_prof.m"
    MR_Word transform_hlds__size_prof__DefinedArgs_14;
#line 763 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr0_16;
#line 763 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalInfo0_17;
#line 763 "size_prof.m"
    MR_Word transform_hlds__size_prof__Context_18;
#line 763 "size_prof.m"
    MR_Integer transform_hlds__size_prof__KnownSize_19;
#line 763 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybeDynamicSizeVar_20;
#line 763 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgGoals_21;
#line 763 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_32_32;
#line 764 "size_prof.m"
    MR_Word transform_hlds__size_prof___NonDefArgs_15;

#line 764 "size_prof.m"
    {
#line 764 "size_prof.m"
      transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Args_9, transform_hlds__size_prof__ArgModes_10, &transform_hlds__size_prof__DefinedArgs_14, &transform_hlds__size_prof___NonDefArgs_15, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28);
    }
#line 765 "size_prof.m"
    transform_hlds__size_prof__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_11, (MR_Integer) 0)));
#line 765 "size_prof.m"
    transform_hlds__size_prof__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_11, (MR_Integer) 1)));
#line 766 "size_prof.m"
    {
#line 766 "size_prof.m"
      transform_hlds__size_prof__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__size_prof__GoalInfo0_17);
    }
#line 767 "size_prof.m"
    {
#line 767 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__DefinedArgs_14, (MR_Integer) 0, &transform_hlds__size_prof__KnownSize_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__MaybeDynamicSizeVar_20, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__ArgGoals_21, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, &transform_hlds__size_prof__STATE_VARIABLE_Info_32_32);
    }
#line 773 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeDynamicSizeVar_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "size_prof.m"
      {
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;

#line 771 "size_prof.m"
        {
#line 771 "size_prof.m"
          transform_hlds__size_prof__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 771 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[1]));
#line 771 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1));
#line 771 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 771 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 3) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_21));
#line 771 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "size_prof.m"
        }
#line 771 "size_prof.m"
        {
#line 771 "size_prof.m"
          mercury__require__expect_4_p_0(transform_hlds__size_prof__V_52_52, (MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_deconstruct\'/7", (MR_String) "nonempty ArgGoals");
        }
#line 772 "size_prof.m"
        *transform_hlds__size_prof__GoalExpr_12 = transform_hlds__size_prof__GoalExpr0_16;
#line 770 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = transform_hlds__size_prof__STATE_VARIABLE_Info_32_32;
#line 770 "size_prof.m"
      }
#line 773 "size_prof.m"
    else
#line 774 "size_prof.m"
      {
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_68_68;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeDynamicSizeVar_20, (MR_Integer) 0)));
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar_23;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeGoals_24;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__TermSizeProfBuiltin_25;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__UpdateGoal_26;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_27;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_45_45;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48;
#line 774 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 780 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;

#line 775 "size_prof.m"
        {
#line 775 "size_prof.m"
          transform_hlds__size_prof__generate_size_var_7_p_0(transform_hlds__size_prof__SizeVar0_22, transform_hlds__size_prof__KnownSize_19, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__SizeVar_23, &transform_hlds__size_prof__SizeGoals_24, transform_hlds__size_prof__STATE_VARIABLE_Info_32_32, transform_hlds__size_prof__STATE_VARIABLE_Info_29);
        }
#line 779 "size_prof.m"
        {
#line 779 "size_prof.m"
          transform_hlds__size_prof__TermSizeProfBuiltin_25 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 782 "size_prof.m"
        {
#line 782 "size_prof.m"
          transform_hlds__size_prof__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_43_43, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_23));
#line 782 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "size_prof.m"
        }
#line 782 "size_prof.m"
        {
#line 782 "size_prof.m"
          transform_hlds__size_prof__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_39_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_8));
#line 782 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_39_39, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 782 "size_prof.m"
        }
#line 782 "size_prof.m"
        {
#line 782 "size_prof.m"
          transform_hlds__size_prof__V_41_41 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 0)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 1)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 2)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 3)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 4)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 5)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 6)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 7)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 8)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 9)));
#line 780 "size_prof.m"
        transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 10)));
#line 780 "size_prof.m"
        {
#line 780 "size_prof.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfBuiltin_25, (MR_String) "increment_size", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__size_prof__V_39_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_41_41, transform_hlds__size_prof__V_42_42, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__UpdateGoal_26);
        }
#line 8306 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 785 "size_prof.m"
        {
#line 785 "size_prof.m"
          transform_hlds__size_prof__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_45_45, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyGoal_11));
#line 785 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "size_prof.m"
        }
#line 785 "size_prof.m"
        {
#line 785 "size_prof.m"
          transform_hlds__size_prof__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_49_49, 0) = ((MR_Box) (transform_hlds__size_prof__UpdateGoal_26));
#line 785 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "size_prof.m"
        }
#line 785 "size_prof.m"
        {
#line 785 "size_prof.m"
          transform_hlds__size_prof__V_48_48 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__SizeGoals_24, transform_hlds__size_prof__V_49_49);
        }
#line 785 "size_prof.m"
        {
#line 785 "size_prof.m"
          transform_hlds__size_prof__V_47_47 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__ArgGoals_21, transform_hlds__size_prof__V_48_48);
        }
#line 785 "size_prof.m"
        {
#line 785 "size_prof.m"
          transform_hlds__size_prof__Goals_27 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__V_45_45, transform_hlds__size_prof__V_47_47);
        }
#line 786 "size_prof.m"
        {
#line 786 "size_prof.m"
          MR_Word base;
#line 786 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 786 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_12 = base;
#line 786 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 786 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 786 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_27));
#line 786 "size_prof.m"
        }
#line 774 "size_prof.m"
      }
#line 763 "size_prof.m"
  }
#line 758 "size_prof.m"
}

#line 682 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_9,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_10,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_11,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_12,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_13,
#line 682 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_14,
#line 682 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 682 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29)
#line 682 "size_prof.m"
{
#line 687 "size_prof.m"
  {
#line 687 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 687 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarType_16;
#line 687 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtor_17;
#line 687 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtorModule_18;
#line 687 "size_prof.m"
    MR_String transform_hlds__size_prof__VarTypeCtorName_19;
#line 687 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 688 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 690 "size_prof.m"
    MR_Integer transform_hlds__size_prof__V_20_20;
#line 1324 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1327 "size_prof.m"
    MR_Integer transform_hlds__size_prof__lo_0;
#line 1327 "size_prof.m"
    MR_Integer transform_hlds__size_prof__hi_1;
#line 1327 "size_prof.m"
    MR_Integer transform_hlds__size_prof__mid_2;
#line 1327 "size_prof.m"
    MR_Integer transform_hlds__size_prof__result_3;

#line 688 "size_prof.m"
    {
#line 688 "size_prof.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__size_prof__V_30_30, transform_hlds__size_prof__Var_9, &transform_hlds__size_prof__VarType_16);
    }
#line 689 "size_prof.m"
    {
#line 689 "size_prof.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__size_prof__VarType_16, &transform_hlds__size_prof__VarTypeCtor_17);
    }
#line 690 "size_prof.m"
    {
#line 690 "size_prof.m"
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__size_prof__VarTypeCtor_17, &transform_hlds__size_prof__VarTypeCtorModule_18, &transform_hlds__size_prof__VarTypeCtorName_19, &transform_hlds__size_prof__V_20_20);
    }
#line 1325 "size_prof.m"
    {
#line 1325 "size_prof.m"
      transform_hlds__size_prof__V_47_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 1325 "size_prof.m"
    {
#line 1325 "size_prof.m"
      transform_hlds__size_prof__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__size_prof__VarTypeCtorModule_18, transform_hlds__size_prof__V_47_47);
    }
#line 1324 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1324 "size_prof.m"
      {
#line 1327 "size_prof.m"
        /* binary string simple lookup switch */
#line 1327 "size_prof.m"
        transform_hlds__size_prof__lo_0 = (MR_Integer) 0;
#line 1327 "size_prof.m"
        transform_hlds__size_prof__hi_1 = (MR_Integer) 3;
#line 1327 "size_prof.m"
        do
#line 1327 "size_prof.m"
          {
#line 1327 "size_prof.m"
            transform_hlds__size_prof__mid_2 = (((transform_hlds__size_prof__lo_0 + transform_hlds__size_prof__hi_1)) / (MR_Integer) 2);
#line 1327 "size_prof.m"
            transform_hlds__size_prof__result_3 = MR_strcmp(transform_hlds__size_prof__VarTypeCtorName_19, ((&transform_hlds__size_prof_vector_common_6[4 + transform_hlds__size_prof__mid_2]))->transform_hlds__size_prof__vector_common_type_6_0__vct_6_f_0);
#line 1327 "size_prof.m"
            if ((transform_hlds__size_prof__result_3 == (MR_Integer) 0))
#line 1327 "size_prof.m"
              {
#line 1327 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1327 "size_prof.m"
                /* jump out of search loop */
#line 1327 "size_prof.m"
                goto label_0;
#line 1327 "size_prof.m"
              }
#line 1327 "size_prof.m"
            else
#line 1327 "size_prof.m"
            if ((transform_hlds__size_prof__result_3 < (MR_Integer) 0))
#line 1327 "size_prof.m"
              transform_hlds__size_prof__hi_1 = (transform_hlds__size_prof__mid_2 - (MR_Integer) 1);
#line 1327 "size_prof.m"
            else
#line 1327 "size_prof.m"
              transform_hlds__size_prof__lo_0 = (transform_hlds__size_prof__mid_2 + (MR_Integer) 1);
#line 1327 "size_prof.m"
          }
#line 1327 "size_prof.m"
        while ((transform_hlds__size_prof__lo_0 <= transform_hlds__size_prof__hi_1));
#line 1327 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_FALSE;
#line 1327 "size_prof.m"
      label_0:;
#line 1324 "size_prof.m"
      }
#line 692 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 695 "size_prof.m"
      {
#line 695 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;

#line 695 "size_prof.m"
        *transform_hlds__size_prof__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 0)));
#line 695 "size_prof.m"
        transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 1)));
#line 695 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_28;
#line 695 "size_prof.m"
      }
#line 692 "size_prof.m"
    else
#line 696 "size_prof.m"
      {
#line 700 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_25_25;
#line 700 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;

#line 698 "size_prof.m"
        if (((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 697 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_TRUE;
#line 698 "size_prof.m"
        else
#line 698 "size_prof.m"
        if (((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 698 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_TRUE;
#line 698 "size_prof.m"
        else
#line 698 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_FALSE;
#line 699 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 699 "size_prof.m"
          {
#line 700 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_11)) == (MR_mktag((MR_Integer) 1)));
#line 700 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 700 "size_prof.m"
              {
#line 700 "size_prof.m"
                transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_11, (MR_Integer) 0)));
#line 700 "size_prof.m"
                transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_11, (MR_Integer) 1)));
#line 700 "size_prof.m"
              }
#line 699 "size_prof.m"
          }
#line 696 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 702 "size_prof.m"
          {
#line 702 "size_prof.m"
            transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(transform_hlds__size_prof__Var_9, transform_hlds__size_prof__Args_11, transform_hlds__size_prof__ArgModes_12, transform_hlds__size_prof__Goal0_13, transform_hlds__size_prof__GoalExpr_14, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, transform_hlds__size_prof__STATE_VARIABLE_Info_29);
          }
#line 696 "size_prof.m"
        else
#line 707 "size_prof.m"
          {
#line 707 "size_prof.m"
            MR_Word transform_hlds__size_prof__KnownSizeMap0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 707 "size_prof.m"
            MR_Word transform_hlds__size_prof__KnownSizeMap_55;
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 1147 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_67_67;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_68_68;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_69_69;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_70_70;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_71_71;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_73_73;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_74_74;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_75_75;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_76_76;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_77_77;
#line 1149 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_72_72;
#line 708 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_27_27;

#line 1148 "size_prof.m"
            {
#line 1148 "size_prof.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_9)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__size_prof__KnownSizeMap0_54, &transform_hlds__size_prof__KnownSizeMap_55);
            }
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 1149 "size_prof.m"
            transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 1149 "size_prof.m"
            {
#line 1149 "size_prof.m"
              MR_Word base;
#line 1149 "size_prof.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = base;
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_68_68));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_69_69));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_70_70));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_55));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_73_73));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_75_75));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_76_76));
#line 1149 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_77_77));
#line 1149 "size_prof.m"
            }
#line 708 "size_prof.m"
            *transform_hlds__size_prof__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 0)));
#line 708 "size_prof.m"
            transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 1)));
#line 707 "size_prof.m"
          }
#line 696 "size_prof.m"
      }
#line 687 "size_prof.m"
  }
#line 682 "size_prof.m"
}

#line 620 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_15,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_16,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_17,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_18,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_19,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_20,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_21,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_22,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_23,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_24,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo_25,
#line 620 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_26,
#line 620 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_45,
#line 620 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_46)
#line 620 "size_prof.m"
{
#line 627 "size_prof.m"
  {
#line 627 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 627 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarType_28;
#line 627 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtor_29;
#line 627 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtorModule_30;
#line 627 "size_prof.m"
    MR_String transform_hlds__size_prof__VarTypeCtorName_31;
#line 627 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 7)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 0)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 1)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 2)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 3)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 4)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 5)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 6)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 8)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 9)));
#line 628 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 10)));
#line 630 "size_prof.m"
    MR_Integer transform_hlds__size_prof__V_32_32;
#line 1324 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83;
#line 1327 "size_prof.m"
    MR_Integer transform_hlds__size_prof__lo_0;
#line 1327 "size_prof.m"
    MR_Integer transform_hlds__size_prof__hi_1;
#line 1327 "size_prof.m"
    MR_Integer transform_hlds__size_prof__mid_2;
#line 1327 "size_prof.m"
    MR_Integer transform_hlds__size_prof__result_3;

#line 628 "size_prof.m"
    {
#line 628 "size_prof.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__size_prof__V_47_47, transform_hlds__size_prof__Var_19, &transform_hlds__size_prof__VarType_28);
    }
#line 629 "size_prof.m"
    {
#line 629 "size_prof.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__size_prof__VarType_28, &transform_hlds__size_prof__VarTypeCtor_29);
    }
#line 630 "size_prof.m"
    {
#line 630 "size_prof.m"
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__size_prof__VarTypeCtor_29, &transform_hlds__size_prof__VarTypeCtorModule_30, &transform_hlds__size_prof__VarTypeCtorName_31, &transform_hlds__size_prof__V_32_32);
    }
#line 1325 "size_prof.m"
    {
#line 1325 "size_prof.m"
      transform_hlds__size_prof__V_83_83 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 1325 "size_prof.m"
    {
#line 1325 "size_prof.m"
      transform_hlds__size_prof__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__size_prof__VarTypeCtorModule_30, transform_hlds__size_prof__V_83_83);
    }
#line 1324 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1324 "size_prof.m"
      {
#line 1327 "size_prof.m"
        /* binary string simple lookup switch */
#line 1327 "size_prof.m"
        transform_hlds__size_prof__lo_0 = (MR_Integer) 0;
#line 1327 "size_prof.m"
        transform_hlds__size_prof__hi_1 = (MR_Integer) 3;
#line 1327 "size_prof.m"
        do
#line 1327 "size_prof.m"
          {
#line 1327 "size_prof.m"
            transform_hlds__size_prof__mid_2 = (((transform_hlds__size_prof__lo_0 + transform_hlds__size_prof__hi_1)) / (MR_Integer) 2);
#line 1327 "size_prof.m"
            transform_hlds__size_prof__result_3 = MR_strcmp(transform_hlds__size_prof__VarTypeCtorName_31, ((&transform_hlds__size_prof_vector_common_6[0 + transform_hlds__size_prof__mid_2]))->transform_hlds__size_prof__vector_common_type_6_0__vct_6_f_0);
#line 1327 "size_prof.m"
            if ((transform_hlds__size_prof__result_3 == (MR_Integer) 0))
#line 1327 "size_prof.m"
              {
#line 1327 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1327 "size_prof.m"
                /* jump out of search loop */
#line 1327 "size_prof.m"
                goto label_0;
#line 1327 "size_prof.m"
              }
#line 1327 "size_prof.m"
            else
#line 1327 "size_prof.m"
            if ((transform_hlds__size_prof__result_3 < (MR_Integer) 0))
#line 1327 "size_prof.m"
              transform_hlds__size_prof__hi_1 = (transform_hlds__size_prof__mid_2 - (MR_Integer) 1);
#line 1327 "size_prof.m"
            else
#line 1327 "size_prof.m"
              transform_hlds__size_prof__lo_0 = (transform_hlds__size_prof__mid_2 + (MR_Integer) 1);
#line 1327 "size_prof.m"
          }
#line 1327 "size_prof.m"
        while ((transform_hlds__size_prof__lo_0 <= transform_hlds__size_prof__hi_1));
#line 1327 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_FALSE;
#line 1327 "size_prof.m"
      label_0:;
#line 1324 "size_prof.m"
      }
#line 632 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 660 "size_prof.m"
      {
#line 660 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_39;

#line 635 "size_prof.m"
        transform_hlds__size_prof__succeeded = (strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_info") == 0);
#line 635 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 636 "size_prof.m"
          {
#line 636 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtorInfoVar_34;
#line 636 "size_prof.m"
            MR_Word transform_hlds__size_prof__ArgTypeInfoVars_35;
#line 637 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_33_33;

#line 637 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 1)));
#line 637 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 637 "size_prof.m"
              {
#line 637 "size_prof.m"
                transform_hlds__size_prof__V_33_33 = (MR_Word) MR_body(((MR_Word) transform_hlds__size_prof__ConsId_20), (MR_Integer) 1);
#line 638 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_21)) == (MR_mktag((MR_Integer) 1)));
#line 638 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 638 "size_prof.m"
                  {
#line 638 "size_prof.m"
                    transform_hlds__size_prof__TypeCtorInfoVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 0)));
#line 638 "size_prof.m"
                    transform_hlds__size_prof__ArgTypeInfoVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 1)));
#line 638 "size_prof.m"
                  }
#line 637 "size_prof.m"
              }
#line 636 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 640 "size_prof.m"
              {
#line 640 "size_prof.m"
                transform_hlds__size_prof__record_known_type_info_5_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__TypeCtorInfoVar_34, transform_hlds__size_prof__ArgTypeInfoVars_35, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
              }
#line 636 "size_prof.m"
            else
#line 642 "size_prof.m"
              {
#line 642 "size_prof.m"
                MR_Word transform_hlds__size_prof__M_36;
#line 642 "size_prof.m"
                MR_String transform_hlds__size_prof__N_37;
#line 642 "size_prof.m"
                MR_Integer transform_hlds__size_prof__A_38;

#line 643 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 643 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 643 "size_prof.m"
                  {
#line 643 "size_prof.m"
                    transform_hlds__size_prof__M_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 643 "size_prof.m"
                    transform_hlds__size_prof__N_37 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 643 "size_prof.m"
                    transform_hlds__size_prof__A_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 648 "size_prof.m"
                    {
#line 648 "size_prof.m"
                      transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__M_36, transform_hlds__size_prof__N_37, transform_hlds__size_prof__A_38, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
                    }
#line 643 "size_prof.m"
                  }
#line 643 "size_prof.m"
                else
#line 650 "size_prof.m"
                  {
#line 650 "size_prof.m"
                    {
#line 650 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_info");
#line 650 "size_prof.m"
                      return;
                    }
#line 650 "size_prof.m"
                  }
#line 642 "size_prof.m"
              }
#line 636 "size_prof.m"
          }
#line 635 "size_prof.m"
        else
#line 652 "size_prof.m"
          {
#line 652 "size_prof.m"
            transform_hlds__size_prof__succeeded = (strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_ctor_info") == 0);
#line 652 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 653 "size_prof.m"
              {
#line 653 "size_prof.m"
                MR_Word transform_hlds__size_prof__M_63;
#line 653 "size_prof.m"
                MR_String transform_hlds__size_prof__N_64;
#line 653 "size_prof.m"
                MR_Integer transform_hlds__size_prof__A_65;

#line 653 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 653 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 653 "size_prof.m"
                  {
#line 653 "size_prof.m"
                    transform_hlds__size_prof__M_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 653 "size_prof.m"
                    transform_hlds__size_prof__N_64 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 653 "size_prof.m"
                    transform_hlds__size_prof__A_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 654 "size_prof.m"
                    {
#line 654 "size_prof.m"
                      transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__M_63, transform_hlds__size_prof__N_64, transform_hlds__size_prof__A_65, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
                    }
#line 653 "size_prof.m"
                  }
#line 653 "size_prof.m"
                else
#line 656 "size_prof.m"
                  {
#line 656 "size_prof.m"
                    {
#line 656 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_ctor_info");
#line 656 "size_prof.m"
                      return;
                    }
#line 656 "size_prof.m"
                  }
#line 653 "size_prof.m"
              }
#line 652 "size_prof.m"
            else
#line 659 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_45;
#line 652 "size_prof.m"
          }
#line 661 "size_prof.m"
        {
#line 661 "size_prof.m"
          transform_hlds__size_prof__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 661 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
#line 661 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_20));
#line 661 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 2) = ((MR_Box) (transform_hlds__size_prof__Args_21));
#line 661 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_22));
#line 661 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 4) = ((MR_Box) (transform_hlds__size_prof__How_23));
#line 661 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_24));
#line 661 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "size_prof.m"
        }
#line 663 "size_prof.m"
        {
#line 663 "size_prof.m"
          MR_Word base;
#line 663 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 663 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_26 = base;
#line 663 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_15));
#line 663 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_16));
#line 663 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_17));
#line 663 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_39));
#line 663 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_18));
#line 663 "size_prof.m"
        }
#line 660 "size_prof.m"
      }
#line 632 "size_prof.m"
    else
#line 664 "size_prof.m"
      {
#line 665 "size_prof.m"
        MR_Word transform_hlds__size_prof___Name_40;
#line 665 "size_prof.m"
        MR_Integer transform_hlds__size_prof___Arity_41;
#line 665 "size_prof.m"
        MR_Word transform_hlds__size_prof___TypeCtor_42;
#line 666 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 666 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;

#line 665 "size_prof.m"
        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 665 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 665 "size_prof.m"
          {
#line 665 "size_prof.m"
            transform_hlds__size_prof___Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 665 "size_prof.m"
            transform_hlds__size_prof___Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 665 "size_prof.m"
            transform_hlds__size_prof___TypeCtor_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 666 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_21)) == (MR_mktag((MR_Integer) 1)));
#line 666 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 666 "size_prof.m"
              {
#line 666 "size_prof.m"
                transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 0)));
#line 666 "size_prof.m"
                transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 1)));
#line 666 "size_prof.m"
              }
#line 665 "size_prof.m"
          }
#line 664 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 668 "size_prof.m"
          {
#line 668 "size_prof.m"
            transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(transform_hlds__size_prof__LHS_15, transform_hlds__size_prof__RHS_16, transform_hlds__size_prof__UniMode_17, transform_hlds__size_prof__UnifyContext_18, transform_hlds__size_prof__Var_19, transform_hlds__size_prof__ConsId_20, transform_hlds__size_prof__Args_21, transform_hlds__size_prof__ArgModes_22, transform_hlds__size_prof__How_23, transform_hlds__size_prof__Unique_24, transform_hlds__size_prof__GoalInfo_25, transform_hlds__size_prof__GoalExpr_26, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
          }
#line 664 "size_prof.m"
        else
#line 674 "size_prof.m"
          {
#line 674 "size_prof.m"
            MR_Word transform_hlds__size_prof__Unification_69;

#line 674 "size_prof.m"
            {
#line 674 "size_prof.m"
              transform_hlds__size_prof__record_known_size_4_p_0(transform_hlds__size_prof__Var_19, (MR_Integer) 0, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
            }
#line 675 "size_prof.m"
            {
#line 675 "size_prof.m"
              transform_hlds__size_prof__Unification_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 675 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
#line 675 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_20));
#line 675 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 2) = ((MR_Box) (transform_hlds__size_prof__Args_21));
#line 675 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_22));
#line 675 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 4) = ((MR_Box) (transform_hlds__size_prof__How_23));
#line 675 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_24));
#line 675 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "size_prof.m"
            }
#line 677 "size_prof.m"
            {
#line 677 "size_prof.m"
              MR_Word base;
#line 677 "size_prof.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 677 "size_prof.m"
              *transform_hlds__size_prof__GoalExpr_26 = base;
#line 677 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_15));
#line 677 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_16));
#line 677 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_17));
#line 677 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_69));
#line 677 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_18));
#line 677 "size_prof.m"
            }
#line 674 "size_prof.m"
          }
#line 664 "size_prof.m"
      }
#line 627 "size_prof.m"
  }
#line 620 "size_prof.m"
}

#line 601 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
#line 601 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 601 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 601 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 601 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 601 "size_prof.m"
{
#line 601 "size_prof.m"
  {
#line 601 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 601 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_140;

#line 601 "size_prof.m"
    {
#line 601 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__601__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_140);
    }
#line 601 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_140));
#line 601 "size_prof.m"
  }
#line 601 "size_prof.m"
}

#line 579 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_41,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_42,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 579 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 579 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27)
#line 579 "size_prof.m"
{
#line 588 "size_prof.m"
  {
#line 588 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstMainConsId_28;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstOtherConsIds_29;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstGoal0_30;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstGoal_31;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMapFirst_32;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMapFirst_33;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_47_47;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_48_48;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 4)));
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 6)));
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 7)));
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 8)));
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 9)));
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 10)));
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_64_64 = transform_hlds__size_prof__TypeInfoMap0_21;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_67_67 = transform_hlds__size_prof__V_56_56;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_69_69 = transform_hlds__size_prof__V_58_58;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_70_70 = transform_hlds__size_prof__V_59_59;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = transform_hlds__size_prof__V_60_60;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_72_72 = transform_hlds__size_prof__V_61_61;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = transform_hlds__size_prof__V_62_62;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = transform_hlds__size_prof__V_64_64;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = transform_hlds__size_prof__V_67_67;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = transform_hlds__size_prof__V_69_69;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = transform_hlds__size_prof__V_70_70;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = transform_hlds__size_prof__V_71_71;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = transform_hlds__size_prof__V_72_72;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__TypeCtorMap0_23;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_86_86 = transform_hlds__size_prof__V_75_75;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = transform_hlds__size_prof__V_80_80;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_92_92 = transform_hlds__size_prof__V_81_81;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_93_93 = transform_hlds__size_prof__V_82_82;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_94_94 = transform_hlds__size_prof__V_83_83;
#line 588 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_95_95 = transform_hlds__size_prof__V_84_84;
#line 589 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 589 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 589 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 589 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
#line 589 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 5)));
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_107_107;
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_108_108;
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_110_110;
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_112_112;
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_113_113;
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_114_114;
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_115_115;
#line 596 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_116_116;

#line 593 "size_prof.m"
    {
#line 593 "size_prof.m"
      transform_hlds__size_prof__STATE_VARIABLE_Info_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 0) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 1) = ((MR_Box) (transform_hlds__size_prof__V_86_86));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_24));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 3) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 4) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_26));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 6) = ((MR_Box) (transform_hlds__size_prof__V_91_91));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 7) = ((MR_Box) (transform_hlds__size_prof__V_92_92));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 8) = ((MR_Box) (transform_hlds__size_prof__V_93_93));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 9) = ((MR_Box) (transform_hlds__size_prof__V_94_94));
#line 593 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 10) = ((MR_Box) (transform_hlds__size_prof__V_95_95));
#line 593 "size_prof.m"
    }
#line 594 "size_prof.m"
    transform_hlds__size_prof__FirstMainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 0)));
#line 594 "size_prof.m"
    transform_hlds__size_prof__FirstOtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 1)));
#line 594 "size_prof.m"
    transform_hlds__size_prof__FirstGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 2)));
#line 595 "size_prof.m"
    {
#line 595 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__FirstGoal0_30, &transform_hlds__size_prof__FirstGoal_31, transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, &transform_hlds__size_prof__STATE_VARIABLE_Info_48_48);
    }
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__TypeInfoMapFirst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__KnownSizeMapFirst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 596 "size_prof.m"
    transform_hlds__size_prof__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 598 "size_prof.m"
    {
#line 598 "size_prof.m"
      MR_Word base;
#line 598 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 598 "size_prof.m"
      *transform_hlds__size_prof__First_16 = base;
#line 598 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__FirstMainConsId_28));
#line 598 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__FirstOtherConsIds_29));
#line 598 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__FirstGoal_31));
#line 598 "size_prof.m"
    }
#line 611 "size_prof.m"
    if ((transform_hlds__size_prof__Later0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "size_prof.m"
      {
#line 613 "size_prof.m"
        *transform_hlds__size_prof__Later_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoMap_25 = transform_hlds__size_prof__TypeInfoMapFirst_32;
#line 615 "size_prof.m"
        *transform_hlds__size_prof__KnownSizeMap_27 = transform_hlds__size_prof__KnownSizeMapFirst_33;
#line 612 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_42 = transform_hlds__size_prof__STATE_VARIABLE_Info_48_48;
#line 612 "size_prof.m"
      }
#line 611 "size_prof.m"
    else
#line 600 "size_prof.m"
      {
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_142_142 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_143_143 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 0)));
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 1)));
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterTargetTypeInfoMap_36;
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head_37;
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail_38;
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMapLater_39;
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeMapLater_40;
#line 600 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_50_50;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_127_127;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_128_128;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_129_129;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_130_130;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_132_132;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_133_133;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_134_134;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_135_135;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_136_136;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_137_137;
#line 603 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_131_131;

#line 601 "size_prof.m"
        {
#line 601 "size_prof.m"
          mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_142_142, transform_hlds__size_prof__TypeCtorInfo_143_143, (MR_Word) &transform_hlds__size_prof_scalar_common_2[8], transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMapFirst_32, &transform_hlds__size_prof__LaterTargetTypeInfoMap_36);
        }
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 603 "size_prof.m"
        transform_hlds__size_prof__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 603 "size_prof.m"
        {
#line 603 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (transform_hlds__size_prof__V_127_127));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (transform_hlds__size_prof__V_128_128));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (transform_hlds__size_prof__V_129_129));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (transform_hlds__size_prof__LaterTargetTypeInfoMap_36));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (transform_hlds__size_prof__V_133_133));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (transform_hlds__size_prof__V_135_135));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 603 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (transform_hlds__size_prof__V_137_137));
#line 603 "size_prof.m"
        }
#line 604 "size_prof.m"
        {
#line 604 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_switch_14_p_0(transform_hlds__size_prof__Head0_34, &transform_hlds__size_prof__Head_37, transform_hlds__size_prof__Tail0_35, &transform_hlds__size_prof__Tail_38, transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, transform_hlds__size_prof__STATE_VARIABLE_Info_42, transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMap0_21, transform_hlds__size_prof__RevTypeInfoMap0_22, transform_hlds__size_prof__TypeCtorMap0_23, transform_hlds__size_prof__RevTypeCtorMap0_24, &transform_hlds__size_prof__TypeInfoMapLater_39, transform_hlds__size_prof__KnownSizeMap0_26, &transform_hlds__size_prof__KnownSizeMapLater_40);
        }
#line 608 "size_prof.m"
        {
#line 608 "size_prof.m"
          *transform_hlds__size_prof__TypeInfoMap_25 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_143_143, transform_hlds__size_prof__TypeInfo_142_142, transform_hlds__size_prof__TypeInfoMapFirst_32, transform_hlds__size_prof__TypeInfoMapLater_39);
        }
#line 609 "size_prof.m"
        {
#line 609 "size_prof.m"
          *transform_hlds__size_prof__KnownSizeMap_27 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_142_142, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapFirst_33, transform_hlds__size_prof__KnownSizeMapLater_40);
        }
#line 610 "size_prof.m"
        {
#line 610 "size_prof.m"
          MR_Word base;
#line 610 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "size_prof.m"
          *transform_hlds__size_prof__Later_18 = base;
#line 610 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Head_37));
#line 610 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Tail_38));
#line 610 "size_prof.m"
        }
#line 600 "size_prof.m"
      }
#line 588 "size_prof.m"
  }
#line 579 "size_prof.m"
}

#line 560 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
#line 560 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 560 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 560 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 560 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 560 "size_prof.m"
{
#line 560 "size_prof.m"
  {
#line 560 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 560 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_136;

#line 560 "size_prof.m"
    {
#line 560 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__560__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_136);
    }
#line 560 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_136));
#line 560 "size_prof.m"
  }
#line 560 "size_prof.m"
}

#line 541 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_37,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_38,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 541 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 541 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27)
#line 541 "size_prof.m"
{
#line 549 "size_prof.m"
  {
#line 549 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMapFirst_28;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMapFirst_29;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_43_43;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 4)));
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 6)));
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 7)));
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 8)));
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 9)));
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 10)));
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60 = transform_hlds__size_prof__TypeInfoMap0_21;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_63_63 = transform_hlds__size_prof__V_52_52;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_65_65 = transform_hlds__size_prof__V_54_54;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_66_66 = transform_hlds__size_prof__V_55_55;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_67_67 = transform_hlds__size_prof__V_56_56;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_68_68 = transform_hlds__size_prof__V_57_57;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_69_69 = transform_hlds__size_prof__V_58_58;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = transform_hlds__size_prof__V_60_60;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = transform_hlds__size_prof__V_63_63;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = transform_hlds__size_prof__V_65_65;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = transform_hlds__size_prof__V_66_66;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = transform_hlds__size_prof__V_67_67;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = transform_hlds__size_prof__V_68_68;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = transform_hlds__size_prof__V_69_69;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = transform_hlds__size_prof__TypeCtorMap0_23;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = transform_hlds__size_prof__V_71_71;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__V_74_74;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_87_87 = transform_hlds__size_prof__V_76_76;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_90_90 = transform_hlds__size_prof__V_79_79;
#line 549 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = transform_hlds__size_prof__V_80_80;
#line 550 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 0)));
#line 550 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 1)));
#line 550 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 2)));
#line 550 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 3)));
#line 550 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 5)));
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_103_103;
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_104_104;
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_105_105;
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_106_106;
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_108_108;
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_110_110;
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_111_111;
#line 556 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_112_112;

#line 554 "size_prof.m"
    {
#line 554 "size_prof.m"
      transform_hlds__size_prof__STATE_VARIABLE_Info_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 0) = ((MR_Box) (transform_hlds__size_prof__V_81_81));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 1) = ((MR_Box) (transform_hlds__size_prof__V_82_82));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_24));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 3) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 4) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_26));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 6) = ((MR_Box) (transform_hlds__size_prof__V_87_87));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 7) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 8) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 9) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 554 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 10) = ((MR_Box) (transform_hlds__size_prof__V_91_91));
#line 554 "size_prof.m"
    }
#line 555 "size_prof.m"
    {
#line 555 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__First0_15, transform_hlds__size_prof__First_16, transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, &transform_hlds__size_prof__STATE_VARIABLE_Info_44_44);
    }
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 0)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__TypeInfoMapFirst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 1)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 2)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 3)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 4)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__KnownSizeMapFirst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 5)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 6)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 7)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 8)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 9)));
#line 556 "size_prof.m"
    transform_hlds__size_prof__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 10)));
#line 570 "size_prof.m"
    if ((transform_hlds__size_prof__Later0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "size_prof.m"
      {
#line 572 "size_prof.m"
        *transform_hlds__size_prof__Later_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoMap_25 = transform_hlds__size_prof__TypeInfoMapFirst_28;
#line 574 "size_prof.m"
        *transform_hlds__size_prof__KnownSizeMap_27 = transform_hlds__size_prof__KnownSizeMapFirst_29;
#line 571 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_38 = transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 571 "size_prof.m"
      }
#line 570 "size_prof.m"
    else
#line 559 "size_prof.m"
      {
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_138_138 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 0)));
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 1)));
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterTargetTypeInfoMap_32;
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head_33;
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail_34;
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMapLater_35;
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeMapLater_36;
#line 559 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_123_123;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_124_124;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_125_125;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_126_126;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_128_128;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_129_129;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_130_130;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_131_131;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_132_132;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_133_133;
#line 562 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_127_127;

#line 560 "size_prof.m"
        {
#line 560 "size_prof.m"
          mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_138_138, transform_hlds__size_prof__TypeCtorInfo_139_139, (MR_Word) &transform_hlds__size_prof_scalar_common_2[7], transform_hlds__size_prof__TypeInfoMapFirst_28, transform_hlds__size_prof__TargetTypeInfoMap_20, &transform_hlds__size_prof__LaterTargetTypeInfoMap_32);
        }
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 0)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 1)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 2)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 3)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 4)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 5)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 6)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 7)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 8)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 9)));
#line 562 "size_prof.m"
        transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 10)));
#line 562 "size_prof.m"
        {
#line 562 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (transform_hlds__size_prof__V_123_123));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (transform_hlds__size_prof__V_124_124));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (transform_hlds__size_prof__V_125_125));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (transform_hlds__size_prof__V_126_126));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (transform_hlds__size_prof__LaterTargetTypeInfoMap_32));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (transform_hlds__size_prof__V_128_128));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (transform_hlds__size_prof__V_129_129));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 8) = ((MR_Box) (transform_hlds__size_prof__V_131_131));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 9) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 562 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 10) = ((MR_Box) (transform_hlds__size_prof__V_133_133));
#line 562 "size_prof.m"
        }
#line 563 "size_prof.m"
        {
#line 563 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_disj_14_p_0(transform_hlds__size_prof__Head0_30, &transform_hlds__size_prof__Head_33, transform_hlds__size_prof__Tail0_31, &transform_hlds__size_prof__Tail_34, transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, transform_hlds__size_prof__STATE_VARIABLE_Info_38, transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMap0_21, transform_hlds__size_prof__RevTypeInfoMap0_22, transform_hlds__size_prof__TypeCtorMap0_23, transform_hlds__size_prof__RevTypeCtorMap0_24, &transform_hlds__size_prof__TypeInfoMapLater_35, transform_hlds__size_prof__KnownSizeMap0_26, &transform_hlds__size_prof__KnownSizeMapLater_36);
        }
#line 567 "size_prof.m"
        {
#line 567 "size_prof.m"
          *transform_hlds__size_prof__TypeInfoMap_25 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_139_139, transform_hlds__size_prof__TypeInfo_138_138, transform_hlds__size_prof__TypeInfoMapFirst_28, transform_hlds__size_prof__TypeInfoMapLater_35);
        }
#line 568 "size_prof.m"
        {
#line 568 "size_prof.m"
          *transform_hlds__size_prof__KnownSizeMap_27 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_138_138, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapFirst_29, transform_hlds__size_prof__KnownSizeMapLater_36);
        }
#line 569 "size_prof.m"
        {
#line 569 "size_prof.m"
          MR_Word base;
#line 569 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "size_prof.m"
          *transform_hlds__size_prof__Later_18 = base;
#line 569 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Head_33));
#line 569 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Tail_34));
#line 569 "size_prof.m"
        }
#line 559 "size_prof.m"
      }
#line 549 "size_prof.m"
  }
#line 541 "size_prof.m"
}

#line 524 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 524 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 524 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_5,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_6,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_7,
#line 524 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_8)
#line 524 "size_prof.m"
{
#line 528 "size_prof.m"
  {
#line 528 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 528 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "size_prof.m"
      {
#line 528 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_4 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_3;
#line 528 "size_prof.m"
      }
#line 528 "size_prof.m"
    else
#line 530 "size_prof.m"
      {
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal_18;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_19;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_30_30;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_31_31;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 7)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 8)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 9)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 10)));
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46 = transform_hlds__size_prof__V_35_35;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47 = transform_hlds__size_prof__V_36_36;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48 = transform_hlds__size_prof__TargetTypeInfoMap0_5;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50 = transform_hlds__size_prof__V_39_39;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51 = transform_hlds__size_prof__V_40_40;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52 = transform_hlds__size_prof__V_41_41;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = transform_hlds__size_prof__V_42_42;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = transform_hlds__size_prof__V_43_43;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56 = transform_hlds__size_prof__TypeInfoMap0_6;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57 = transform_hlds__size_prof__V_46_46;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58 = transform_hlds__size_prof__V_47_47;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59 = transform_hlds__size_prof__V_48_48;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61 = transform_hlds__size_prof__V_50_50;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62 = transform_hlds__size_prof__V_51_51;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63 = transform_hlds__size_prof__V_52_52;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64 = transform_hlds__size_prof__V_53_53;
#line 530 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65 = transform_hlds__size_prof__V_54_54;
#line 531 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 531 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 531 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 531 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));

#line 534 "size_prof.m"
        {
#line 534 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap0_7));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (transform_hlds__size_prof__V_58_58));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_8));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (transform_hlds__size_prof__V_61_61));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (transform_hlds__size_prof__V_62_62));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (transform_hlds__size_prof__V_63_63));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (transform_hlds__size_prof__V_64_64));
#line 534 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (transform_hlds__size_prof__V_65_65));
#line 534 "size_prof.m"
        }
#line 535 "size_prof.m"
        {
#line 535 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_16, &transform_hlds__size_prof__Goal_18, transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, &transform_hlds__size_prof__STATE_VARIABLE_Info_31_31);
        }
#line 536 "size_prof.m"
        {
#line 536 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(transform_hlds__size_prof__Goals0_17, &transform_hlds__size_prof__Goals_19, transform_hlds__size_prof__STATE_VARIABLE_Info_31_31, transform_hlds__size_prof__STATE_VARIABLE_Info_4, transform_hlds__size_prof__TargetTypeInfoMap0_5, transform_hlds__size_prof__TypeInfoMap0_6, transform_hlds__size_prof__TypeCtorMap0_7, transform_hlds__size_prof__KnownSizeMap0_8);
        }
#line 529 "size_prof.m"
        {
#line 529 "size_prof.m"
          MR_Word base;
#line 529 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__2_2 = base;
#line 529 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Goal_18));
#line 529 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Goals_19));
#line 529 "size_prof.m"
        }
#line 530 "size_prof.m"
      }
#line 528 "size_prof.m"
  }
#line 524 "size_prof.m"
}

#line 505 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
#line 505 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 505 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 505 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 505 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4)
#line 505 "size_prof.m"
{
#line 508 "size_prof.m"
  {
#line 508 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 508 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "size_prof.m"
      {
#line 508 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_4 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_3;
#line 508 "size_prof.m"
      }
#line 508 "size_prof.m"
    else
#line 509 "size_prof.m"
      {
#line 509 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 509 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 509 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal_12;
#line 509 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_13;
#line 509 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_18_18;
#line 512 "size_prof.m"
        MR_Word transform_hlds__size_prof__SubConj_14;
#line 512 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20;
#line 512 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;
#line 512 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15;

#line 510 "size_prof.m"
        {
#line 510 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_8, &transform_hlds__size_prof__Goal_12, transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, &transform_hlds__size_prof__STATE_VARIABLE_Info_18_18);
        }
#line 511 "size_prof.m"
        {
#line 511 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_conj_4_p_0(transform_hlds__size_prof__Goals0_9, &transform_hlds__size_prof__Goals_13, transform_hlds__size_prof__STATE_VARIABLE_Info_18_18, transform_hlds__size_prof__STATE_VARIABLE_Info_4);
        }
#line 512 "size_prof.m"
        transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal_12, (MR_Integer) 0)));
#line 512 "size_prof.m"
        transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal_12, (MR_Integer) 1)));
#line 512 "size_prof.m"
        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 512 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 512 "size_prof.m"
          {
#line 512 "size_prof.m"
            transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 1)));
#line 512 "size_prof.m"
            transform_hlds__size_prof__SubConj_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 2)));
#line 512 "size_prof.m"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_21_21 == (MR_Integer) 0);
#line 512 "size_prof.m"
          }
#line 512 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 517 "size_prof.m"
          {
#line 517 "size_prof.m"
            {
#line 517 "size_prof.m"
              *transform_hlds__size_prof__HeadVar__2_2 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__SubConj_14, transform_hlds__size_prof__Goals_13);
            }
#line 517 "size_prof.m"
          }
#line 512 "size_prof.m"
        else
#line 519 "size_prof.m"
          {
#line 519 "size_prof.m"
            MR_Word base;
#line 519 "size_prof.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "size_prof.m"
            *transform_hlds__size_prof__HeadVar__2_2 = base;
#line 519 "size_prof.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Goal_12));
#line 519 "size_prof.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Goals_13));
#line 519 "size_prof.m"
          }
#line 509 "size_prof.m"
      }
#line 508 "size_prof.m"
  }
#line 505 "size_prof.m"
}

#line 300 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
#line 300 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 300 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1)
#line 300 "size_prof.m"
{
#line 300 "size_prof.m"
  {
#line 300 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 300 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 300 "size_prof.m"
    {
#line 300 "size_prof.m"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__binds_arg_in_cell_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1));
    }
#line 300 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 300 "size_prof.m"
  }
#line 300 "size_prof.m"
}

#line 444 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
#line 444 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 444 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 444 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 444 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 444 "size_prof.m"
{
#line 444 "size_prof.m"
  {
#line 444 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 444 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_1039;

#line 444 "size_prof.m"
    {
#line 444 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_1039);
    }
#line 444 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_1039));
#line 444 "size_prof.m"
  }
#line 444 "size_prof.m"
}

#line 280 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
#line 280 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_5,
#line 280 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goal_6,
#line 280 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_95,
#line 280 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_96)
#line 280 "size_prof.m"
{
#line 283 "size_prof.m"
  {
#line 283 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 283 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_5, (MR_Integer) 0)));
#line 283 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_5, (MR_Integer) 1)));
#line 283 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr_22;

#line 319 "size_prof.m"
#line 319 "size_prof.m"
    switch (MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) {
#line 319 "size_prof.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 319 "size_prof.m"
      case (MR_Integer) 0:
#line 465 "size_prof.m"
        {
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__NegGoal0_87 = (MR_Word) MR_body(((MR_Word) transform_hlds__size_prof__GoalExpr0_8), (MR_Integer) 0);
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__NegGoal_88;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_103_103;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__TypeInfoMap0_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__RevTypeInfoMap0_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__TypeCtorMap0_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__KnownSizeMap0_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__RevTypeCtorMap0_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_960_960;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_961_961;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_962_962;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_963_963;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_964_964;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_969_969;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_971_971;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_972_972;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_973_973;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_974_974;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_975_975;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_977_977;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_980_980;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_982_982;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_983_983;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_984_984;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_985_985;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_986_986;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_988_988;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_990_990;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_991_991;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_993_993;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_994_994;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_995_995;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_996_996;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_997_997;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_998_998;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_999_999;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_1001_1001;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_1002_1002;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_1004_1004;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_1005_1005;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_1006_1006;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_1007_1007;
#line 465 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_1008_1008;
#line 466 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_899_899 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 466 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_900_900 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 466 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_901_901 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 466 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_902_902 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 466 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_903_903 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 476 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_954_954;
#line 476 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_955_955;
#line 476 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_956_956;
#line 476 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_957_957;
#line 476 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_958_958;
#line 476 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_959_959;

#line 472 "size_prof.m"
          {
#line 472 "size_prof.m"
            transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__NegGoal0_87, &transform_hlds__size_prof__NegGoal_88, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_103_103);
          }
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_954_954 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 0)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_955_955 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 1)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_956_956 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 2)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_957_957 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 3)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_958_958 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 4)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_959_959 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 5)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_960_960 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 6)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_961_961 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 7)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_962_962 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 8)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_963_963 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 9)));
#line 476 "size_prof.m"
          transform_hlds__size_prof__V_964_964 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 10)));
#line 477 "size_prof.m"
          transform_hlds__size_prof__V_969_969 = transform_hlds__size_prof__TargetTypeInfoMap0_245;
#line 477 "size_prof.m"
          transform_hlds__size_prof__V_971_971 = transform_hlds__size_prof__V_960_960;
#line 477 "size_prof.m"
          transform_hlds__size_prof__V_972_972 = transform_hlds__size_prof__V_961_961;
#line 477 "size_prof.m"
          transform_hlds__size_prof__V_973_973 = transform_hlds__size_prof__V_962_962;
#line 477 "size_prof.m"
          transform_hlds__size_prof__V_974_974 = transform_hlds__size_prof__V_963_963;
#line 477 "size_prof.m"
          transform_hlds__size_prof__V_975_975 = transform_hlds__size_prof__V_964_964;
#line 478 "size_prof.m"
          transform_hlds__size_prof__V_977_977 = transform_hlds__size_prof__TypeInfoMap0_246;
#line 478 "size_prof.m"
          transform_hlds__size_prof__V_980_980 = transform_hlds__size_prof__V_969_969;
#line 478 "size_prof.m"
          transform_hlds__size_prof__V_982_982 = transform_hlds__size_prof__V_971_971;
#line 478 "size_prof.m"
          transform_hlds__size_prof__V_983_983 = transform_hlds__size_prof__V_972_972;
#line 478 "size_prof.m"
          transform_hlds__size_prof__V_984_984 = transform_hlds__size_prof__V_973_973;
#line 478 "size_prof.m"
          transform_hlds__size_prof__V_985_985 = transform_hlds__size_prof__V_974_974;
#line 478 "size_prof.m"
          transform_hlds__size_prof__V_986_986 = transform_hlds__size_prof__V_975_975;
#line 479 "size_prof.m"
          transform_hlds__size_prof__V_988_988 = transform_hlds__size_prof__V_977_977;
#line 479 "size_prof.m"
          transform_hlds__size_prof__V_990_990 = transform_hlds__size_prof__RevTypeInfoMap0_247;
#line 479 "size_prof.m"
          transform_hlds__size_prof__V_991_991 = transform_hlds__size_prof__V_980_980;
#line 479 "size_prof.m"
          transform_hlds__size_prof__V_993_993 = transform_hlds__size_prof__V_982_982;
#line 479 "size_prof.m"
          transform_hlds__size_prof__V_994_994 = transform_hlds__size_prof__V_983_983;
#line 479 "size_prof.m"
          transform_hlds__size_prof__V_995_995 = transform_hlds__size_prof__V_984_984;
#line 479 "size_prof.m"
          transform_hlds__size_prof__V_996_996 = transform_hlds__size_prof__V_985_985;
#line 479 "size_prof.m"
          transform_hlds__size_prof__V_997_997 = transform_hlds__size_prof__V_986_986;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_998_998 = transform_hlds__size_prof__TypeCtorMap0_248;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_999_999 = transform_hlds__size_prof__V_988_988;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_1001_1001 = transform_hlds__size_prof__V_990_990;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_1002_1002 = transform_hlds__size_prof__V_991_991;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_1004_1004 = transform_hlds__size_prof__V_993_993;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_1005_1005 = transform_hlds__size_prof__V_994_994;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_1006_1006 = transform_hlds__size_prof__V_995_995;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_1007_1007 = transform_hlds__size_prof__V_996_996;
#line 480 "size_prof.m"
          transform_hlds__size_prof__V_1008_1008 = transform_hlds__size_prof__V_997_997;
#line 481 "size_prof.m"
          {
#line 481 "size_prof.m"
            MR_Word base;
#line 481 "size_prof.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 481 "size_prof.m"
            *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_998_998));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_999_999));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_250));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_1001_1001));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_1002_1002));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_249));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_1004_1004));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_1005_1005));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_1006_1006));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_1007_1007));
#line 481 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_1008_1008));
#line 481 "size_prof.m"
          }
#line 482 "size_prof.m"
          transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__size_prof__NegGoal_88);
#line 465 "size_prof.m"
        }
#line 319 "size_prof.m"
        break;
#line 319 "size_prof.m"
      case (MR_Integer) 1:
#line 286 "size_prof.m"
        {
#line 286 "size_prof.m"
          MR_Word transform_hlds__size_prof__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)));
#line 286 "size_prof.m"
          MR_Word transform_hlds__size_prof__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 286 "size_prof.m"
          MR_Word transform_hlds__size_prof__UniMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 286 "size_prof.m"
          MR_Word transform_hlds__size_prof__Unify0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 286 "size_prof.m"
          MR_Word transform_hlds__size_prof__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 4)));

#line 292 "size_prof.m"
#line 292 "size_prof.m"
          switch (MR_tag((MR_Word) transform_hlds__size_prof__Unify0_13)) {
#line 292 "size_prof.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 292 "size_prof.m"
            case (MR_Integer) 0:
#line 288 "size_prof.m"
              {
#line 288 "size_prof.m"
                MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)));
#line 288 "size_prof.m"
                MR_Word transform_hlds__size_prof__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 1)));
#line 288 "size_prof.m"
                MR_Word transform_hlds__size_prof__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 2)));
#line 288 "size_prof.m"
                MR_Word transform_hlds__size_prof__ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 3)));
#line 288 "size_prof.m"
                MR_Word transform_hlds__size_prof__How_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 4)));
#line 288 "size_prof.m"
                MR_Word transform_hlds__size_prof__Unique_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 5)));
#line 288 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 6)));

#line 289 "size_prof.m"
                {
#line 289 "size_prof.m"
                  transform_hlds__size_prof__size_prof_process_construct_14_p_0(transform_hlds__size_prof__LHS_10, transform_hlds__size_prof__RHS_11, transform_hlds__size_prof__UniMode_12, transform_hlds__size_prof__UnifyContext_14, transform_hlds__size_prof__Var_15, transform_hlds__size_prof__ConsId_16, transform_hlds__size_prof__Args_17, transform_hlds__size_prof__ArgModes_18, transform_hlds__size_prof__How_19, transform_hlds__size_prof__Unique_20, transform_hlds__size_prof__GoalInfo0_9, &transform_hlds__size_prof__GoalExpr_22, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                }
#line 288 "size_prof.m"
              }
#line 292 "size_prof.m"
              break;
#line 292 "size_prof.m"
            case (MR_Integer) 1:
#line 294 "size_prof.m"
              {
#line 294 "size_prof.m"
                MR_Word transform_hlds__size_prof__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)));
#line 294 "size_prof.m"
                MR_Word transform_hlds__size_prof__ConsId_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 1)));
#line 294 "size_prof.m"
                MR_Word transform_hlds__size_prof__Args_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 2)));
#line 294 "size_prof.m"
                MR_Word transform_hlds__size_prof__ArgModes_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 3)));
#line 293 "size_prof.m"
                MR_Word transform_hlds__size_prof___CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 4)));
#line 293 "size_prof.m"
                MR_Word transform_hlds__size_prof___CanCGC_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 5)));
#line 301 "size_prof.m"
                MR_Word transform_hlds__size_prof__BindingArgModes_25;
#line 301 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_179_179;
#line 302 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_26_26;
#line 302 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_27_27;

#line 300 "size_prof.m"
                {
#line 300 "size_prof.m"
                  transform_hlds__size_prof__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 300 "size_prof.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[0]));
#line 300 "size_prof.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_2));
#line 300 "size_prof.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 300 "size_prof.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 3) = ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_Info_0_95));
#line 300 "size_prof.m"
                }
#line 300 "size_prof.m"
                {
#line 300 "size_prof.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, transform_hlds__size_prof__V_179_179, transform_hlds__size_prof__ArgModes_185, &transform_hlds__size_prof__BindingArgModes_25);
                }
#line 302 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__BindingArgModes_25)) == (MR_mktag((MR_Integer) 1)));
#line 302 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 302 "size_prof.m"
                  {
#line 302 "size_prof.m"
                    transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__BindingArgModes_25, (MR_Integer) 0)));
#line 302 "size_prof.m"
                    transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__BindingArgModes_25, (MR_Integer) 1)));
#line 304 "size_prof.m"
                    {
#line 304 "size_prof.m"
                      transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(transform_hlds__size_prof__Var_182, transform_hlds__size_prof__ConsId_183, transform_hlds__size_prof__Args_184, transform_hlds__size_prof__ArgModes_185, transform_hlds__size_prof__Goal0_5, &transform_hlds__size_prof__GoalExpr_22, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                    }
#line 302 "size_prof.m"
                  }
#line 302 "size_prof.m"
                else
#line 307 "size_prof.m"
                  {
#line 307 "size_prof.m"
                    transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 307 "size_prof.m"
                    *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 307 "size_prof.m"
                  }
#line 294 "size_prof.m"
              }
#line 292 "size_prof.m"
              break;
#line 292 "size_prof.m"
            case (MR_Integer) 2:
#line 312 "size_prof.m"
              {
#line 313 "size_prof.m"
                transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 312 "size_prof.m"
                *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 312 "size_prof.m"
              }
#line 292 "size_prof.m"
              break;
#line 292 "size_prof.m"
            case (MR_Integer) 3:
#line 292 "size_prof.m"
#line 292 "size_prof.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)))) {
#line 292 "size_prof.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 292 "size_prof.m"
                case (MR_Integer) 0:
#line 312 "size_prof.m"
                  {
#line 313 "size_prof.m"
                    transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 312 "size_prof.m"
                    *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 312 "size_prof.m"
                  }
#line 292 "size_prof.m"
                  break;
#line 292 "size_prof.m"
                case (MR_Integer) 1:
#line 315 "size_prof.m"
                  {
#line 317 "size_prof.m"
                    {
#line 317 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "complicated_unify");
#line 317 "size_prof.m"
                      return;
                    }
#line 315 "size_prof.m"
                  }
#line 292 "size_prof.m"
                  break;
#line 292 "size_prof.m"
              }
#line 292 "size_prof.m"
              break;
#line 292 "size_prof.m"
          }
#line 286 "size_prof.m"
        }
#line 319 "size_prof.m"
        break;
#line 319 "size_prof.m"
      case (MR_Integer) 2:
#line 320 "size_prof.m"
        {
#line 320 "size_prof.m"
          MR_Word transform_hlds__size_prof__TypeCtorInfo_1022_1022 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 320 "size_prof.m"
          MR_Word transform_hlds__size_prof__TypeInfo_1023_1023 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 320 "size_prof.m"
          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_172_172;
#line 320 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_173_173;
#line 320 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_175_175;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_252_252;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_253_253;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_254_254;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_255_255;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_256_256;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_257_257;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_258_258;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_259_259;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_260_260;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_261_261;
#line 324 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_251_251;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_262_262;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_263_263;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_265_265;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_266_266;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_267_267;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_268_268;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_269_269;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_270_270;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_271_271;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_272_272;
#line 325 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_264_264;

#line 324 "size_prof.m"
          {
#line 324 "size_prof.m"
            transform_hlds__size_prof__V_173_173 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1022_1022, transform_hlds__size_prof__TypeInfo_1023_1023);
          }
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 324 "size_prof.m"
          transform_hlds__size_prof__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 324 "size_prof.m"
          {
#line 324 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_Info_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 0) = ((MR_Box) (transform_hlds__size_prof__V_173_173));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 1) = ((MR_Box) (transform_hlds__size_prof__V_252_252));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 2) = ((MR_Box) (transform_hlds__size_prof__V_253_253));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 3) = ((MR_Box) (transform_hlds__size_prof__V_254_254));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 4) = ((MR_Box) (transform_hlds__size_prof__V_255_255));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 5) = ((MR_Box) (transform_hlds__size_prof__V_256_256));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 6) = ((MR_Box) (transform_hlds__size_prof__V_257_257));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 7) = ((MR_Box) (transform_hlds__size_prof__V_258_258));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 8) = ((MR_Box) (transform_hlds__size_prof__V_259_259));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 9) = ((MR_Box) (transform_hlds__size_prof__V_260_260));
#line 324 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 10) = ((MR_Box) (transform_hlds__size_prof__V_261_261));
#line 324 "size_prof.m"
          }
#line 325 "size_prof.m"
          {
#line 325 "size_prof.m"
            transform_hlds__size_prof__V_175_175 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1023_1023, transform_hlds__size_prof__TypeCtorInfo_1022_1022);
          }
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 0)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 1)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 2)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 3)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 4)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 5)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 6)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 7)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 8)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 9)));
#line 325 "size_prof.m"
          transform_hlds__size_prof__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 10)));
#line 325 "size_prof.m"
          {
#line 325 "size_prof.m"
            MR_Word base;
#line 325 "size_prof.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 325 "size_prof.m"
            *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_262_262));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_263_263));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_175_175));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_265_265));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_266_266));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_267_267));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_268_268));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_269_269));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_270_270));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_271_271));
#line 325 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_272_272));
#line 325 "size_prof.m"
          }
#line 326 "size_prof.m"
          transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 320 "size_prof.m"
        }
#line 319 "size_prof.m"
        break;
#line 319 "size_prof.m"
      case (MR_Integer) 3:
#line 319 "size_prof.m"
#line 319 "size_prof.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) {
#line 319 "size_prof.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 319 "size_prof.m"
          case (MR_Integer) 0:
#line 328 "size_prof.m"
            {
#line 328 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeCtorInfo_1024_1024 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 328 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeInfo_1025_1025 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 328 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_168_168;
#line 328 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_169_169;
#line 328 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_171_171;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_274_274;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_275_275;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_276_276;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_277_277;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_278_278;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_279_279;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_280_280;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_281_281;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_282_282;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_283_283;
#line 332 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_273_273;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_284_284;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_285_285;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_287_287;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_288_288;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_289_289;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_290_290;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_291_291;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_292_292;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_293_293;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_294_294;
#line 333 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_286_286;

#line 332 "size_prof.m"
              {
#line 332 "size_prof.m"
                transform_hlds__size_prof__V_169_169 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1024_1024, transform_hlds__size_prof__TypeInfo_1025_1025);
              }
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 332 "size_prof.m"
              transform_hlds__size_prof__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 332 "size_prof.m"
              {
#line 332 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 0) = ((MR_Box) (transform_hlds__size_prof__V_169_169));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 1) = ((MR_Box) (transform_hlds__size_prof__V_274_274));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 2) = ((MR_Box) (transform_hlds__size_prof__V_275_275));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 3) = ((MR_Box) (transform_hlds__size_prof__V_276_276));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 4) = ((MR_Box) (transform_hlds__size_prof__V_277_277));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 5) = ((MR_Box) (transform_hlds__size_prof__V_278_278));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 6) = ((MR_Box) (transform_hlds__size_prof__V_279_279));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 7) = ((MR_Box) (transform_hlds__size_prof__V_280_280));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 8) = ((MR_Box) (transform_hlds__size_prof__V_281_281));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 9) = ((MR_Box) (transform_hlds__size_prof__V_282_282));
#line 332 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 10) = ((MR_Box) (transform_hlds__size_prof__V_283_283));
#line 332 "size_prof.m"
              }
#line 333 "size_prof.m"
              {
#line 333 "size_prof.m"
                transform_hlds__size_prof__V_171_171 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1025_1025, transform_hlds__size_prof__TypeCtorInfo_1024_1024);
              }
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 0)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 1)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 2)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 3)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 4)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 5)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 6)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 7)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 8)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 9)));
#line 333 "size_prof.m"
              transform_hlds__size_prof__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 10)));
#line 333 "size_prof.m"
              {
#line 333 "size_prof.m"
                MR_Word base;
#line 333 "size_prof.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 333 "size_prof.m"
                *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_284_284));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_285_285));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_171_171));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_287_287));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_288_288));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_289_289));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_290_290));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_291_291));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_292_292));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_293_293));
#line 333 "size_prof.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_294_294));
#line 333 "size_prof.m"
              }
#line 334 "size_prof.m"
              transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 328 "size_prof.m"
            }
#line 319 "size_prof.m"
            break;
#line 319 "size_prof.m"
          case (MR_Integer) 1:
#line 336 "size_prof.m"
            {
#line 337 "size_prof.m"
              transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 336 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 336 "size_prof.m"
            }
#line 319 "size_prof.m"
            break;
#line 319 "size_prof.m"
          case (MR_Integer) 2:
#line 339 "size_prof.m"
            {
#line 339 "size_prof.m"
              MR_Word transform_hlds__size_prof__ConjType_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 339 "size_prof.m"
              MR_Word transform_hlds__size_prof__Goals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 339 "size_prof.m"
              MR_Word transform_hlds__size_prof__Goals_55;

#line 343 "size_prof.m"
#line 343 "size_prof.m"
              switch (transform_hlds__size_prof__ConjType_53) {
#line 343 "size_prof.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 343 "size_prof.m"
                case (MR_Integer) 1:
#line 344 "size_prof.m"
                  {
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeCtorInfo_1026_1026;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeInfo_1027_1027;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeInfoMap0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeCtorMap0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__KnownSizeMap0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_158_158;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_161_161;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_162_162;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_163_163;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_165_165;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_345_345;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_347_347;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_350_350;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_351_351;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_352_352;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_353_353;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_354_354;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_355_355;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_356_356;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_358_358;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_360_360;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_361_361;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_362_362;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_363_363;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_364_364;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_365_365;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_366_366;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_389_389;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_390_390;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_392_392;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_393_393;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_395_395;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_396_396;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_397_397;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_398_398;
#line 344 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_399_399;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 356 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_346_346;
#line 356 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_348_348;
#line 356 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_349_349;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_379_379;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_380_380;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_381_381;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_382_382;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_383_383;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_384_384;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_385_385;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_386_386;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_387_387;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_388_388;
#line 359 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_378_378;
#line 360 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_391_391;
#line 360 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_394_394;

#line 354 "size_prof.m"
                    {
#line 354 "size_prof.m"
                      transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(transform_hlds__size_prof__Goals0_54, &transform_hlds__size_prof__Goals_55, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, transform_hlds__size_prof__TargetTypeInfoMap0_56, transform_hlds__size_prof__TypeInfoMap0_57, transform_hlds__size_prof__TypeCtorMap0_59, transform_hlds__size_prof__KnownSizeMap0_60);
                    }
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 0)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 1)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 2)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 3)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 4)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 5)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 6)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 7)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 8)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 9)));
#line 356 "size_prof.m"
                    transform_hlds__size_prof__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 10)));
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_356_356 = transform_hlds__size_prof__V_345_345;
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_358_358 = transform_hlds__size_prof__V_347_347;
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_360_360 = transform_hlds__size_prof__TargetTypeInfoMap0_56;
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_361_361 = transform_hlds__size_prof__V_350_350;
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_362_362 = transform_hlds__size_prof__V_351_351;
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_363_363 = transform_hlds__size_prof__V_352_352;
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_364_364 = transform_hlds__size_prof__V_353_353;
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_365_365 = transform_hlds__size_prof__V_354_354;
#line 357 "size_prof.m"
                    transform_hlds__size_prof__V_366_366 = transform_hlds__size_prof__V_355_355;
#line 358 "size_prof.m"
                    {
#line 358 "size_prof.m"
                      transform_hlds__size_prof__STATE_VARIABLE_Info_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 0) = ((MR_Box) (transform_hlds__size_prof__V_356_356));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap0_57));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 2) = ((MR_Box) (transform_hlds__size_prof__V_358_358));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_58));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 4) = ((MR_Box) (transform_hlds__size_prof__V_360_360));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 5) = ((MR_Box) (transform_hlds__size_prof__V_361_361));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 6) = ((MR_Box) (transform_hlds__size_prof__V_362_362));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 7) = ((MR_Box) (transform_hlds__size_prof__V_363_363));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 8) = ((MR_Box) (transform_hlds__size_prof__V_364_364));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 9) = ((MR_Box) (transform_hlds__size_prof__V_365_365));
#line 358 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 10) = ((MR_Box) (transform_hlds__size_prof__V_366_366));
#line 358 "size_prof.m"
                    }
#line 11312 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeCtorInfo_1026_1026 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 11314 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeInfo_1027_1027 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 359 "size_prof.m"
                    {
#line 359 "size_prof.m"
                      transform_hlds__size_prof__V_163_163 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1026_1026, transform_hlds__size_prof__TypeInfo_1027_1027);
                    }
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 0)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 1)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 2)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 3)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 4)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 5)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 6)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 7)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 8)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 9)));
#line 359 "size_prof.m"
                    transform_hlds__size_prof__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 10)));
#line 359 "size_prof.m"
                    {
#line 359 "size_prof.m"
                      transform_hlds__size_prof__STATE_VARIABLE_Info_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 0) = ((MR_Box) (transform_hlds__size_prof__V_163_163));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 1) = ((MR_Box) (transform_hlds__size_prof__V_379_379));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 2) = ((MR_Box) (transform_hlds__size_prof__V_380_380));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 3) = ((MR_Box) (transform_hlds__size_prof__V_381_381));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 4) = ((MR_Box) (transform_hlds__size_prof__V_382_382));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 5) = ((MR_Box) (transform_hlds__size_prof__V_383_383));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 6) = ((MR_Box) (transform_hlds__size_prof__V_384_384));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 7) = ((MR_Box) (transform_hlds__size_prof__V_385_385));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 8) = ((MR_Box) (transform_hlds__size_prof__V_386_386));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 9) = ((MR_Box) (transform_hlds__size_prof__V_387_387));
#line 359 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 10) = ((MR_Box) (transform_hlds__size_prof__V_388_388));
#line 359 "size_prof.m"
                    }
#line 360 "size_prof.m"
                    {
#line 360 "size_prof.m"
                      transform_hlds__size_prof__V_165_165 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1027_1027, transform_hlds__size_prof__TypeCtorInfo_1026_1026);
                    }
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 0)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 1)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 2)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 3)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 4)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 5)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 6)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 7)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 8)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 9)));
#line 360 "size_prof.m"
                    transform_hlds__size_prof__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 10)));
#line 361 "size_prof.m"
                    {
#line 361 "size_prof.m"
                      MR_Word base;
#line 361 "size_prof.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 361 "size_prof.m"
                      *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_389_389));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_390_390));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_165_165));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_392_392));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_393_393));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_60));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_395_395));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_396_396));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_397_397));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_398_398));
#line 361 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_399_399));
#line 361 "size_prof.m"
                    }
#line 344 "size_prof.m"
                  }
#line 343 "size_prof.m"
                  break;
#line 343 "size_prof.m"
                case (MR_Integer) 0:
#line 342 "size_prof.m"
                  {
#line 342 "size_prof.m"
                    transform_hlds__size_prof__size_prof_process_conj_4_p_0(transform_hlds__size_prof__Goals0_54, &transform_hlds__size_prof__Goals_55, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                  }
#line 343 "size_prof.m"
                  break;
#line 343 "size_prof.m"
              }
#line 363 "size_prof.m"
              {
#line 363 "size_prof.m"
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 363 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 363 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__ConjType_53));
#line 363 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_55));
#line 363 "size_prof.m"
              }
#line 339 "size_prof.m"
            }
#line 319 "size_prof.m"
            break;
#line 319 "size_prof.m"
          case (MR_Integer) 3:
#line 394 "size_prof.m"
            {
#line 394 "size_prof.m"
              MR_Word transform_hlds__size_prof__Disjuncts0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 394 "size_prof.m"
              MR_Word transform_hlds__size_prof__Disjuncts_73;
#line 394 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_143_143;
#line 394 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_144_144;

#line 415 "size_prof.m"
              if ((transform_hlds__size_prof__Disjuncts0_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "size_prof.m"
                {
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeCtorInfo_1032_1032 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeInfo_1033_1033 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeCtorInfo_1034_1034;
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_129_129;
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_130_130;
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_131_131;
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_132_132;
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_133_133;
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_134_134;
#line 416 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_136_136;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_619_619;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_621_621;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_622_622;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_623_623;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_624_624;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_625_625;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_626_626;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_627_627;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_628_628;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_629_629;
#line 418 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_620_620;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_630_630;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_631_631;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_633_633;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_634_634;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_635_635;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_636_636;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_637_637;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_638_638;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_639_639;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_640_640;
#line 419 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_632_632;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_641_641;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_643_643;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_644_644;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_645_645;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_646_646;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_647_647;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_648_648;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_649_649;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_650_650;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_651_651;
#line 420 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_642_642;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_652_652;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_653_653;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_655_655;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_656_656;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_657_657;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_658_658;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_659_659;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_660_660;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_661_661;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_662_662;
#line 421 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_654_654;

#line 418 "size_prof.m"
                  {
#line 418 "size_prof.m"
                    transform_hlds__size_prof__V_130_130 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1032_1032, transform_hlds__size_prof__TypeInfo_1033_1033);
                  }
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_619_619 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_620_620 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_621_621 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_622_622 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_623_623 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_624_624 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_625_625 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_626_626 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_627_627 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_628_628 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 418 "size_prof.m"
                  transform_hlds__size_prof__V_629_629 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 418 "size_prof.m"
                  {
#line 418 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 0) = ((MR_Box) (transform_hlds__size_prof__V_619_619));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 1) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 2) = ((MR_Box) (transform_hlds__size_prof__V_621_621));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 3) = ((MR_Box) (transform_hlds__size_prof__V_622_622));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 4) = ((MR_Box) (transform_hlds__size_prof__V_623_623));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 5) = ((MR_Box) (transform_hlds__size_prof__V_624_624));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 6) = ((MR_Box) (transform_hlds__size_prof__V_625_625));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 7) = ((MR_Box) (transform_hlds__size_prof__V_626_626));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 8) = ((MR_Box) (transform_hlds__size_prof__V_627_627));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 9) = ((MR_Box) (transform_hlds__size_prof__V_628_628));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 10) = ((MR_Box) (transform_hlds__size_prof__V_629_629));
#line 418 "size_prof.m"
                  }
#line 11642 "transform_hlds.size_prof.c"
                  transform_hlds__size_prof__TypeCtorInfo_1034_1034 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 419 "size_prof.m"
                  {
#line 419 "size_prof.m"
                    transform_hlds__size_prof__V_132_132 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1033_1033, transform_hlds__size_prof__TypeCtorInfo_1034_1034);
                  }
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_630_630 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 0)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_631_631 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 1)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_632_632 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 2)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_633_633 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 3)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_634_634 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 4)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_635_635 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 5)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_636_636 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 6)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_637_637 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 7)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_638_638 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 8)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_639_639 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 9)));
#line 419 "size_prof.m"
                  transform_hlds__size_prof__V_640_640 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 10)));
#line 419 "size_prof.m"
                  {
#line 419 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 0) = ((MR_Box) (transform_hlds__size_prof__V_630_630));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 1) = ((MR_Box) (transform_hlds__size_prof__V_631_631));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 2) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 3) = ((MR_Box) (transform_hlds__size_prof__V_633_633));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 4) = ((MR_Box) (transform_hlds__size_prof__V_634_634));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 5) = ((MR_Box) (transform_hlds__size_prof__V_635_635));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 6) = ((MR_Box) (transform_hlds__size_prof__V_636_636));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 7) = ((MR_Box) (transform_hlds__size_prof__V_637_637));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 8) = ((MR_Box) (transform_hlds__size_prof__V_638_638));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 9) = ((MR_Box) (transform_hlds__size_prof__V_639_639));
#line 419 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 10) = ((MR_Box) (transform_hlds__size_prof__V_640_640));
#line 419 "size_prof.m"
                  }
#line 420 "size_prof.m"
                  {
#line 420 "size_prof.m"
                    transform_hlds__size_prof__V_134_134 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1032_1032, transform_hlds__size_prof__TypeInfo_1033_1033);
                  }
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_641_641 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 0)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_642_642 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 1)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_643_643 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 2)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_644_644 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 3)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_645_645 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 4)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_646_646 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 5)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_647_647 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 6)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_648_648 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 7)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_649_649 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 8)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_650_650 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 9)));
#line 420 "size_prof.m"
                  transform_hlds__size_prof__V_651_651 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 10)));
#line 420 "size_prof.m"
                  {
#line 420 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 0) = ((MR_Box) (transform_hlds__size_prof__V_641_641));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 1) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 2) = ((MR_Box) (transform_hlds__size_prof__V_643_643));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 3) = ((MR_Box) (transform_hlds__size_prof__V_644_644));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 4) = ((MR_Box) (transform_hlds__size_prof__V_645_645));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 5) = ((MR_Box) (transform_hlds__size_prof__V_646_646));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 6) = ((MR_Box) (transform_hlds__size_prof__V_647_647));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 7) = ((MR_Box) (transform_hlds__size_prof__V_648_648));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 8) = ((MR_Box) (transform_hlds__size_prof__V_649_649));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 9) = ((MR_Box) (transform_hlds__size_prof__V_650_650));
#line 420 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 10) = ((MR_Box) (transform_hlds__size_prof__V_651_651));
#line 420 "size_prof.m"
                  }
#line 421 "size_prof.m"
                  {
#line 421 "size_prof.m"
                    transform_hlds__size_prof__V_136_136 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1033_1033, transform_hlds__size_prof__TypeCtorInfo_1034_1034);
                  }
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_652_652 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 0)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_653_653 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 1)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_654_654 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 2)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_655_655 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 3)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_656_656 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 4)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_657_657 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 5)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_658_658 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 6)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_659_659 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 7)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_660_660 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 8)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_661_661 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 9)));
#line 421 "size_prof.m"
                  transform_hlds__size_prof__V_662_662 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 10)));
#line 421 "size_prof.m"
                  {
#line 421 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 0) = ((MR_Box) (transform_hlds__size_prof__V_652_652));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 1) = ((MR_Box) (transform_hlds__size_prof__V_653_653));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 2) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 3) = ((MR_Box) (transform_hlds__size_prof__V_655_655));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 4) = ((MR_Box) (transform_hlds__size_prof__V_656_656));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 5) = ((MR_Box) (transform_hlds__size_prof__V_657_657));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 6) = ((MR_Box) (transform_hlds__size_prof__V_658_658));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 7) = ((MR_Box) (transform_hlds__size_prof__V_659_659));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 8) = ((MR_Box) (transform_hlds__size_prof__V_660_660));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 9) = ((MR_Box) (transform_hlds__size_prof__V_661_661));
#line 421 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 10) = ((MR_Box) (transform_hlds__size_prof__V_662_662));
#line 421 "size_prof.m"
                  }
#line 422 "size_prof.m"
                  transform_hlds__size_prof__Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 416 "size_prof.m"
                }
#line 415 "size_prof.m"
              else
#line 396 "size_prof.m"
                {
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeCtorInfo_1030_1030;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeInfo_1031_1031;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_137_137;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_138_138;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_139_139;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_140_140;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_142_142;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeInfoMap0_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeCtorMap0_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__KnownSizeMap0_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__First0_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts0_72, (MR_Integer) 0)));
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Later0_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts0_72, (MR_Integer) 1)));
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__First_209;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Later_210;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeInfoMap_211;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__KnownSizeMap_212;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_597_597;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_598_598;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_600_600;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_601_601;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_603_603;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_604_604;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_605_605;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_606_606;
#line 396 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_607_607;
#line 397 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_520_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 397 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_521_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 397 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_522_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 397 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_523_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 397 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_575_575;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_577_577;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_578_578;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_579_579;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_580_580;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_581_581;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_582_582;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_583_583;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_584_584;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_585_585;
#line 408 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_576_576;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_587_587;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_588_588;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_589_589;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_590_590;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_591_591;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_592_592;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_593_593;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_594_594;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_595_595;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_596_596;
#line 411 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_586_586;
#line 412 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_599_599;
#line 412 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_602_602;

#line 403 "size_prof.m"
                  {
#line 403 "size_prof.m"
                    transform_hlds__size_prof__size_prof_process_disj_14_p_0(transform_hlds__size_prof__First0_206, &transform_hlds__size_prof__First_209, transform_hlds__size_prof__Later0_207, &transform_hlds__size_prof__Later_210, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, transform_hlds__size_prof__TargetTypeInfoMap0_201, transform_hlds__size_prof__TypeInfoMap0_202, transform_hlds__size_prof__RevTypeInfoMap0_203, transform_hlds__size_prof__TypeCtorMap0_204, transform_hlds__size_prof__RevTypeCtorMap0_208, &transform_hlds__size_prof__TypeInfoMap_211, transform_hlds__size_prof__KnownSizeMap0_205, &transform_hlds__size_prof__KnownSizeMap_212);
                  }
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_575_575 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 0)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_576_576 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 1)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_577_577 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 2)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_578_578 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 3)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_579_579 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 4)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_580_580 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 5)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_581_581 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 6)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_582_582 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 7)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_583_583 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 8)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_584_584 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 9)));
#line 408 "size_prof.m"
                  transform_hlds__size_prof__V_585_585 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 10)));
#line 408 "size_prof.m"
                  {
#line 408 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 0) = ((MR_Box) (transform_hlds__size_prof__V_575_575));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_211));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 2) = ((MR_Box) (transform_hlds__size_prof__V_577_577));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 3) = ((MR_Box) (transform_hlds__size_prof__V_578_578));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 4) = ((MR_Box) (transform_hlds__size_prof__V_579_579));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 5) = ((MR_Box) (transform_hlds__size_prof__V_580_580));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 6) = ((MR_Box) (transform_hlds__size_prof__V_581_581));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 7) = ((MR_Box) (transform_hlds__size_prof__V_582_582));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 8) = ((MR_Box) (transform_hlds__size_prof__V_583_583));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 9) = ((MR_Box) (transform_hlds__size_prof__V_584_584));
#line 408 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 10) = ((MR_Box) (transform_hlds__size_prof__V_585_585));
#line 408 "size_prof.m"
                  }
#line 11987 "transform_hlds.size_prof.c"
                  transform_hlds__size_prof__TypeCtorInfo_1030_1030 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 11989 "transform_hlds.size_prof.c"
                  transform_hlds__size_prof__TypeInfo_1031_1031 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 411 "size_prof.m"
                  {
#line 411 "size_prof.m"
                    transform_hlds__size_prof__V_140_140 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1030_1030, transform_hlds__size_prof__TypeInfo_1031_1031);
                  }
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_586_586 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 0)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_587_587 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 1)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_588_588 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 2)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_589_589 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 3)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_590_590 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 4)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_591_591 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 5)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_592_592 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 6)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_593_593 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 7)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_594_594 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 8)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_595_595 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 9)));
#line 411 "size_prof.m"
                  transform_hlds__size_prof__V_596_596 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 10)));
#line 411 "size_prof.m"
                  {
#line 411 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 0) = ((MR_Box) (transform_hlds__size_prof__V_140_140));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 1) = ((MR_Box) (transform_hlds__size_prof__V_587_587));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 2) = ((MR_Box) (transform_hlds__size_prof__V_588_588));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 3) = ((MR_Box) (transform_hlds__size_prof__V_589_589));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 4) = ((MR_Box) (transform_hlds__size_prof__V_590_590));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 5) = ((MR_Box) (transform_hlds__size_prof__V_591_591));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 6) = ((MR_Box) (transform_hlds__size_prof__V_592_592));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 7) = ((MR_Box) (transform_hlds__size_prof__V_593_593));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 8) = ((MR_Box) (transform_hlds__size_prof__V_594_594));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 9) = ((MR_Box) (transform_hlds__size_prof__V_595_595));
#line 411 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 10) = ((MR_Box) (transform_hlds__size_prof__V_596_596));
#line 411 "size_prof.m"
                  }
#line 412 "size_prof.m"
                  {
#line 412 "size_prof.m"
                    transform_hlds__size_prof__V_142_142 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1031_1031, transform_hlds__size_prof__TypeCtorInfo_1030_1030);
                  }
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_597_597 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 0)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_598_598 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 1)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_599_599 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 2)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_600_600 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 3)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_601_601 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 4)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_602_602 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 5)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_603_603 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 6)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_604_604 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 7)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_605_605 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 8)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_606_606 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 9)));
#line 412 "size_prof.m"
                  transform_hlds__size_prof__V_607_607 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 10)));
#line 413 "size_prof.m"
                  {
#line 413 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 0) = ((MR_Box) (transform_hlds__size_prof__V_597_597));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 1) = ((MR_Box) (transform_hlds__size_prof__V_598_598));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 2) = ((MR_Box) (transform_hlds__size_prof__V_142_142));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 3) = ((MR_Box) (transform_hlds__size_prof__V_600_600));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 4) = ((MR_Box) (transform_hlds__size_prof__V_601_601));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_212));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 6) = ((MR_Box) (transform_hlds__size_prof__V_603_603));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 7) = ((MR_Box) (transform_hlds__size_prof__V_604_604));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 8) = ((MR_Box) (transform_hlds__size_prof__V_605_605));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 9) = ((MR_Box) (transform_hlds__size_prof__V_606_606));
#line 413 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 10) = ((MR_Box) (transform_hlds__size_prof__V_607_607));
#line 413 "size_prof.m"
                  }
#line 414 "size_prof.m"
                  {
#line 414 "size_prof.m"
                    transform_hlds__size_prof__Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "size_prof.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts_73, 0) = ((MR_Box) (transform_hlds__size_prof__First_209));
#line 414 "size_prof.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts_73, 1) = ((MR_Box) (transform_hlds__size_prof__Later_210));
#line 414 "size_prof.m"
                  }
#line 396 "size_prof.m"
                }
#line 424 "size_prof.m"
              {
#line 424 "size_prof.m"
                transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, &transform_hlds__size_prof__STATE_VARIABLE_Info_144_144);
              }
#line 425 "size_prof.m"
              {
#line 425 "size_prof.m"
                transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_144_144, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
              }
#line 426 "size_prof.m"
              {
#line 426 "size_prof.m"
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 426 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Disjuncts_73));
#line 426 "size_prof.m"
              }
#line 394 "size_prof.m"
            }
#line 319 "size_prof.m"
            break;
#line 319 "size_prof.m"
          case (MR_Integer) 4:
#line 365 "size_prof.m"
            {
#line 365 "size_prof.m"
              MR_Word transform_hlds__size_prof__SwitchVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 365 "size_prof.m"
              MR_Word transform_hlds__size_prof__CanFail_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 365 "size_prof.m"
              MR_Word transform_hlds__size_prof__Cases0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 365 "size_prof.m"
              MR_Word transform_hlds__size_prof__Cases_71;
#line 365 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_155_155;
#line 365 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_156_156;

#line 386 "size_prof.m"
              if ((transform_hlds__size_prof__Cases0_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "size_prof.m"
                {
#line 388 "size_prof.m"
                  {
#line 388 "size_prof.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "empty switch");
#line 388 "size_prof.m"
                    return;
                  }
#line 387 "size_prof.m"
                }
#line 386 "size_prof.m"
              else
#line 367 "size_prof.m"
                {
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeCtorInfo_1028_1028;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeInfo_1029_1029;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__First0_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases0_63, (MR_Integer) 0)));
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Later0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases0_63, (MR_Integer) 1)));
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__First_67;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Later_68;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeInfoMap_69;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__KnownSizeMap_70;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_149_149;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_150_150;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_151_151;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_152_152;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_154_154;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeInfoMap0_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__TypeCtorMap0_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__KnownSizeMap0_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_493_493;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_494_494;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_496_496;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_497_497;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_499_499;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_500_500;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_501_501;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_502_502;
#line 367 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_503_503;
#line 368 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 368 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 368 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 368 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 368 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_471_471;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_473_473;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_474_474;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_475_475;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_476_476;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_477_477;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_478_478;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_479_479;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_480_480;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_481_481;
#line 379 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_472_472;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_483_483;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_484_484;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_485_485;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_486_486;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_487_487;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_488_488;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_489_489;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_490_490;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_491_491;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_492_492;
#line 382 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_482_482;
#line 383 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_495_495;
#line 383 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_498_498;

#line 374 "size_prof.m"
                  {
#line 374 "size_prof.m"
                    transform_hlds__size_prof__size_prof_process_switch_14_p_0(transform_hlds__size_prof__First0_64, &transform_hlds__size_prof__First_67, transform_hlds__size_prof__Later0_65, &transform_hlds__size_prof__Later_68, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, transform_hlds__size_prof__TargetTypeInfoMap0_186, transform_hlds__size_prof__TypeInfoMap0_187, transform_hlds__size_prof__RevTypeInfoMap0_188, transform_hlds__size_prof__TypeCtorMap0_189, transform_hlds__size_prof__RevTypeCtorMap0_66, &transform_hlds__size_prof__TypeInfoMap_69, transform_hlds__size_prof__KnownSizeMap0_190, &transform_hlds__size_prof__KnownSizeMap_70);
                  }
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 0)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 1)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 2)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 3)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 4)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 5)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 6)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 7)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 8)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 9)));
#line 379 "size_prof.m"
                  transform_hlds__size_prof__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 10)));
#line 379 "size_prof.m"
                  {
#line 379 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 0) = ((MR_Box) (transform_hlds__size_prof__V_471_471));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_69));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 2) = ((MR_Box) (transform_hlds__size_prof__V_473_473));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 3) = ((MR_Box) (transform_hlds__size_prof__V_474_474));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 4) = ((MR_Box) (transform_hlds__size_prof__V_475_475));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 5) = ((MR_Box) (transform_hlds__size_prof__V_476_476));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 6) = ((MR_Box) (transform_hlds__size_prof__V_477_477));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 7) = ((MR_Box) (transform_hlds__size_prof__V_478_478));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 8) = ((MR_Box) (transform_hlds__size_prof__V_479_479));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 9) = ((MR_Box) (transform_hlds__size_prof__V_480_480));
#line 379 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 10) = ((MR_Box) (transform_hlds__size_prof__V_481_481));
#line 379 "size_prof.m"
                  }
#line 12341 "transform_hlds.size_prof.c"
                  transform_hlds__size_prof__TypeCtorInfo_1028_1028 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 12343 "transform_hlds.size_prof.c"
                  transform_hlds__size_prof__TypeInfo_1029_1029 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 382 "size_prof.m"
                  {
#line 382 "size_prof.m"
                    transform_hlds__size_prof__V_152_152 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1028_1028, transform_hlds__size_prof__TypeInfo_1029_1029);
                  }
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 0)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 1)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 2)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 3)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 4)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 5)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 6)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 7)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 8)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 9)));
#line 382 "size_prof.m"
                  transform_hlds__size_prof__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 10)));
#line 382 "size_prof.m"
                  {
#line 382 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 0) = ((MR_Box) (transform_hlds__size_prof__V_152_152));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 1) = ((MR_Box) (transform_hlds__size_prof__V_483_483));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 2) = ((MR_Box) (transform_hlds__size_prof__V_484_484));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 3) = ((MR_Box) (transform_hlds__size_prof__V_485_485));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 4) = ((MR_Box) (transform_hlds__size_prof__V_486_486));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 5) = ((MR_Box) (transform_hlds__size_prof__V_487_487));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 6) = ((MR_Box) (transform_hlds__size_prof__V_488_488));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 7) = ((MR_Box) (transform_hlds__size_prof__V_489_489));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 8) = ((MR_Box) (transform_hlds__size_prof__V_490_490));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 9) = ((MR_Box) (transform_hlds__size_prof__V_491_491));
#line 382 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 10) = ((MR_Box) (transform_hlds__size_prof__V_492_492));
#line 382 "size_prof.m"
                  }
#line 383 "size_prof.m"
                  {
#line 383 "size_prof.m"
                    transform_hlds__size_prof__V_154_154 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1029_1029, transform_hlds__size_prof__TypeCtorInfo_1028_1028);
                  }
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 0)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 1)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 2)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 3)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 4)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 5)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 6)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 7)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 8)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 9)));
#line 383 "size_prof.m"
                  transform_hlds__size_prof__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 10)));
#line 384 "size_prof.m"
                  {
#line 384 "size_prof.m"
                    transform_hlds__size_prof__STATE_VARIABLE_Info_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 0) = ((MR_Box) (transform_hlds__size_prof__V_493_493));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 1) = ((MR_Box) (transform_hlds__size_prof__V_494_494));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 2) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 3) = ((MR_Box) (transform_hlds__size_prof__V_496_496));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 4) = ((MR_Box) (transform_hlds__size_prof__V_497_497));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_70));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 6) = ((MR_Box) (transform_hlds__size_prof__V_499_499));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 7) = ((MR_Box) (transform_hlds__size_prof__V_500_500));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 8) = ((MR_Box) (transform_hlds__size_prof__V_501_501));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 9) = ((MR_Box) (transform_hlds__size_prof__V_502_502));
#line 384 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 10) = ((MR_Box) (transform_hlds__size_prof__V_503_503));
#line 384 "size_prof.m"
                  }
#line 385 "size_prof.m"
                  {
#line 385 "size_prof.m"
                    transform_hlds__size_prof__Cases_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "size_prof.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases_71, 0) = ((MR_Box) (transform_hlds__size_prof__First_67));
#line 385 "size_prof.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases_71, 1) = ((MR_Box) (transform_hlds__size_prof__Later_68));
#line 385 "size_prof.m"
                  }
#line 367 "size_prof.m"
                }
#line 390 "size_prof.m"
              {
#line 390 "size_prof.m"
                transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, &transform_hlds__size_prof__STATE_VARIABLE_Info_156_156);
              }
#line 391 "size_prof.m"
              {
#line 391 "size_prof.m"
                transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_156_156, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
              }
#line 392 "size_prof.m"
              {
#line 392 "size_prof.m"
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 392 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 392 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__SwitchVar_61));
#line 392 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__CanFail_62));
#line 392 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 3) = ((MR_Box) (transform_hlds__size_prof__Cases_71));
#line 392 "size_prof.m"
              }
#line 365 "size_prof.m"
            }
#line 319 "size_prof.m"
            break;
#line 319 "size_prof.m"
          case (MR_Integer) 5:
#line 484 "size_prof.m"
            {
#line 484 "size_prof.m"
              MR_Word transform_hlds__size_prof__Reason0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 484 "size_prof.m"
              MR_Word transform_hlds__size_prof__SubGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 484 "size_prof.m"
              MR_Word transform_hlds__size_prof__Reason_92;
#line 484 "size_prof.m"
              MR_Word transform_hlds__size_prof__SubGoal_93;
#line 488 "size_prof.m"
              MR_Word transform_hlds__size_prof__TermVar_91;
#line 489 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_100_100;

#line 489 "size_prof.m"
              transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__Reason0_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 489 "size_prof.m"
              if (transform_hlds__size_prof__succeeded)
#line 489 "size_prof.m"
                {
#line 489 "size_prof.m"
                  transform_hlds__size_prof__TermVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 1)));
#line 489 "size_prof.m"
                  transform_hlds__size_prof__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 2)));
#line 489 "size_prof.m"
                  transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_100_100 == (MR_Integer) 1);
#line 489 "size_prof.m"
                }
#line 488 "size_prof.m"
              if (transform_hlds__size_prof__succeeded)
#line 491 "size_prof.m"
                {
#line 491 "size_prof.m"
                  {
#line 491 "size_prof.m"
                    transform_hlds__size_prof__Reason_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 491 "size_prof.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 491 "size_prof.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 1) = ((MR_Box) (transform_hlds__size_prof__TermVar_91));
#line 491 "size_prof.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 2) = ((MR_Box) ((MR_Integer) 3));
#line 491 "size_prof.m"
                  }
#line 491 "size_prof.m"
                }
#line 488 "size_prof.m"
              else
#line 493 "size_prof.m"
                transform_hlds__size_prof__Reason_92 = transform_hlds__size_prof__Reason0_89;
#line 495 "size_prof.m"
              {
#line 495 "size_prof.m"
                transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__SubGoal0_90, &transform_hlds__size_prof__SubGoal_93, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
              }
#line 496 "size_prof.m"
              {
#line 496 "size_prof.m"
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 496 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 496 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Reason_92));
#line 496 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__SubGoal_93));
#line 496 "size_prof.m"
              }
#line 484 "size_prof.m"
            }
#line 319 "size_prof.m"
            break;
#line 319 "size_prof.m"
          case (MR_Integer) 6:
#line 428 "size_prof.m"
            {
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeCtorInfo_1035_1035 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeInfo_1036_1036 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__Quant_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__Cond0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__Then0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__Else0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 4)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__Cond_78;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__Then_79;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TargetTypeInfoMapThen_80;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeInfoMapThen_81;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__KnownSizeMapThen_82;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__ElseTargetTypeInfoMap_83;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__Else_84;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeInfoMapElse_85;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__KnownSizeMapElse_86;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_110_110;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_111_111;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_112_112;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_113_113;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_114_114;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_121_121;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_122_122;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_123_123;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_125_125;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_126_126;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_127_127;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeInfoMap0_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__RevTypeInfoMap0_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeCtorMap0_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__KnownSizeMap0_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__RevTypeCtorMap0_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__TypeInfoMap_243;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__KnownSizeMap_244;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_781_781;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_782_782;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_783_783;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_784_784;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_785_785;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_790_790;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_792_792;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_793_793;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_794_794;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_795_795;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_796_796;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_798_798;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_801_801;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_803_803;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_804_804;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_805_805;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_806_806;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_807_807;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_809_809;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_811_811;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_812_812;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_814_814;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_815_815;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_816_816;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_817_817;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_818_818;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_819_819;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_820_820;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_822_822;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_823_823;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_825_825;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_826_826;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_827_827;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_828_828;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_829_829;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_873_873;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_874_874;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_875_875;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_876_876;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_878_878;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_879_879;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_880_880;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_881_881;
#line 428 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_882_882;
#line 429 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_668_668 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 429 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_669_669 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 429 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_670_670 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 429 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_671_671 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 429 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_672_672 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_723_723;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_724_724;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_725_725;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_726_726;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_728_728;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_729_729;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_730_730;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_731_731;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_732_732;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_733_733;
#line 436 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_727_727;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_734_734;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_735_735;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_736_736;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_737_737;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_739_739;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_740_740;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_741_741;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_742_742;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_743_743;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_744_744;
#line 438 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_738_738;
#line 440 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_745_745;
#line 440 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_747_747;
#line 440 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_748_748;
#line 440 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_750_750;
#line 440 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_751_751;
#line 440 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_752_752;
#line 440 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_753_753;
#line 440 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_754_754;
#line 446 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_775_775;
#line 446 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_776_776;
#line 446 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_777_777;
#line 446 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_778_778;
#line 446 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_779_779;
#line 446 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_780_780;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_841_841;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_842_842;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_843_843;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_844_844;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_846_846;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_847_847;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_848_848;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_849_849;
#line 453 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_850_850;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_861_861;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_863_863;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_864_864;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_865_865;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_866_866;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_867_867;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_868_868;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_869_869;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_870_870;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_871_871;
#line 458 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_862_862;
#line 459 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_872_872;
#line 459 "size_prof.m"
              MR_Word transform_hlds__size_prof__V_877_877;

#line 436 "size_prof.m"
              {
#line 436 "size_prof.m"
                transform_hlds__size_prof__V_111_111 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1035_1035, transform_hlds__size_prof__TypeInfo_1036_1036);
              }
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_723_723 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_724_724 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_725_725 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_726_726 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_727_727 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_728_728 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_729_729 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_730_730 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_731_731 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_732_732 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 436 "size_prof.m"
              transform_hlds__size_prof__V_733_733 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 436 "size_prof.m"
              {
#line 436 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 0) = ((MR_Box) (transform_hlds__size_prof__V_723_723));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 1) = ((MR_Box) (transform_hlds__size_prof__V_724_724));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 2) = ((MR_Box) (transform_hlds__size_prof__V_725_725));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 3) = ((MR_Box) (transform_hlds__size_prof__V_726_726));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 4) = ((MR_Box) (transform_hlds__size_prof__V_111_111));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 5) = ((MR_Box) (transform_hlds__size_prof__V_728_728));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 6) = ((MR_Box) (transform_hlds__size_prof__V_729_729));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 7) = ((MR_Box) (transform_hlds__size_prof__V_730_730));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 8) = ((MR_Box) (transform_hlds__size_prof__V_731_731));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 9) = ((MR_Box) (transform_hlds__size_prof__V_732_732));
#line 436 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 10) = ((MR_Box) (transform_hlds__size_prof__V_733_733));
#line 436 "size_prof.m"
              }
#line 437 "size_prof.m"
              {
#line 437 "size_prof.m"
                transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Cond0_75, &transform_hlds__size_prof__Cond_78, transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, &transform_hlds__size_prof__STATE_VARIABLE_Info_112_112);
              }
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_734_734 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 0)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_735_735 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 1)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_736_736 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 2)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_737_737 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 3)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_738_738 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 4)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_739_739 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 5)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_740_740 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 6)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_741_741 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 7)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_742_742 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 8)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_743_743 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 9)));
#line 438 "size_prof.m"
              transform_hlds__size_prof__V_744_744 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 10)));
#line 438 "size_prof.m"
              {
#line 438 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 0) = ((MR_Box) (transform_hlds__size_prof__V_734_734));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 1) = ((MR_Box) (transform_hlds__size_prof__V_735_735));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 2) = ((MR_Box) (transform_hlds__size_prof__V_736_736));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 3) = ((MR_Box) (transform_hlds__size_prof__V_737_737));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap0_237));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 5) = ((MR_Box) (transform_hlds__size_prof__V_739_739));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 6) = ((MR_Box) (transform_hlds__size_prof__V_740_740));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 7) = ((MR_Box) (transform_hlds__size_prof__V_741_741));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 8) = ((MR_Box) (transform_hlds__size_prof__V_742_742));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 9) = ((MR_Box) (transform_hlds__size_prof__V_743_743));
#line 438 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 10) = ((MR_Box) (transform_hlds__size_prof__V_744_744));
#line 438 "size_prof.m"
              }
#line 439 "size_prof.m"
              {
#line 439 "size_prof.m"
                transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Then0_76, &transform_hlds__size_prof__Then_79, transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, &transform_hlds__size_prof__STATE_VARIABLE_Info_114_114);
              }
#line 440 "size_prof.m"
              transform_hlds__size_prof__V_745_745 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 0)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__TypeInfoMapThen_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 1)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__V_747_747 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 2)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__V_748_748 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 3)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__TargetTypeInfoMapThen_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 4)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__KnownSizeMapThen_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 5)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__V_750_750 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 6)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__V_751_751 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 7)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__V_752_752 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 8)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__V_753_753 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 9)));
#line 440 "size_prof.m"
              transform_hlds__size_prof__V_754_754 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 10)));
#line 444 "size_prof.m"
              {
#line 444 "size_prof.m"
                mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_1036_1036, transform_hlds__size_prof__TypeCtorInfo_1035_1035, (MR_Word) &transform_hlds__size_prof_scalar_common_2[6], transform_hlds__size_prof__TargetTypeInfoMapThen_80, transform_hlds__size_prof__TargetTypeInfoMap0_237, &transform_hlds__size_prof__ElseTargetTypeInfoMap_83);
              }
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_775_775 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 0)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_776_776 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 1)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_777_777 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 2)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_778_778 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 3)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_779_779 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 4)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_780_780 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 5)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_781_781 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 6)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_782_782 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 7)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_783_783 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 8)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_784_784 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 9)));
#line 446 "size_prof.m"
              transform_hlds__size_prof__V_785_785 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 10)));
#line 447 "size_prof.m"
              transform_hlds__size_prof__V_790_790 = transform_hlds__size_prof__ElseTargetTypeInfoMap_83;
#line 447 "size_prof.m"
              transform_hlds__size_prof__V_792_792 = transform_hlds__size_prof__V_781_781;
#line 447 "size_prof.m"
              transform_hlds__size_prof__V_793_793 = transform_hlds__size_prof__V_782_782;
#line 447 "size_prof.m"
              transform_hlds__size_prof__V_794_794 = transform_hlds__size_prof__V_783_783;
#line 447 "size_prof.m"
              transform_hlds__size_prof__V_795_795 = transform_hlds__size_prof__V_784_784;
#line 447 "size_prof.m"
              transform_hlds__size_prof__V_796_796 = transform_hlds__size_prof__V_785_785;
#line 448 "size_prof.m"
              transform_hlds__size_prof__V_798_798 = transform_hlds__size_prof__TypeInfoMap0_238;
#line 448 "size_prof.m"
              transform_hlds__size_prof__V_801_801 = transform_hlds__size_prof__V_790_790;
#line 448 "size_prof.m"
              transform_hlds__size_prof__V_803_803 = transform_hlds__size_prof__V_792_792;
#line 448 "size_prof.m"
              transform_hlds__size_prof__V_804_804 = transform_hlds__size_prof__V_793_793;
#line 448 "size_prof.m"
              transform_hlds__size_prof__V_805_805 = transform_hlds__size_prof__V_794_794;
#line 448 "size_prof.m"
              transform_hlds__size_prof__V_806_806 = transform_hlds__size_prof__V_795_795;
#line 448 "size_prof.m"
              transform_hlds__size_prof__V_807_807 = transform_hlds__size_prof__V_796_796;
#line 449 "size_prof.m"
              transform_hlds__size_prof__V_809_809 = transform_hlds__size_prof__V_798_798;
#line 449 "size_prof.m"
              transform_hlds__size_prof__V_811_811 = transform_hlds__size_prof__RevTypeInfoMap0_239;
#line 449 "size_prof.m"
              transform_hlds__size_prof__V_812_812 = transform_hlds__size_prof__V_801_801;
#line 449 "size_prof.m"
              transform_hlds__size_prof__V_814_814 = transform_hlds__size_prof__V_803_803;
#line 449 "size_prof.m"
              transform_hlds__size_prof__V_815_815 = transform_hlds__size_prof__V_804_804;
#line 449 "size_prof.m"
              transform_hlds__size_prof__V_816_816 = transform_hlds__size_prof__V_805_805;
#line 449 "size_prof.m"
              transform_hlds__size_prof__V_817_817 = transform_hlds__size_prof__V_806_806;
#line 449 "size_prof.m"
              transform_hlds__size_prof__V_818_818 = transform_hlds__size_prof__V_807_807;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_819_819 = transform_hlds__size_prof__TypeCtorMap0_240;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_820_820 = transform_hlds__size_prof__V_809_809;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_822_822 = transform_hlds__size_prof__V_811_811;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_823_823 = transform_hlds__size_prof__V_812_812;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_825_825 = transform_hlds__size_prof__V_814_814;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_826_826 = transform_hlds__size_prof__V_815_815;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_827_827 = transform_hlds__size_prof__V_816_816;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_828_828 = transform_hlds__size_prof__V_817_817;
#line 450 "size_prof.m"
              transform_hlds__size_prof__V_829_829 = transform_hlds__size_prof__V_818_818;
#line 451 "size_prof.m"
              {
#line 451 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 0) = ((MR_Box) (transform_hlds__size_prof__V_819_819));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 1) = ((MR_Box) (transform_hlds__size_prof__V_820_820));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_242));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 3) = ((MR_Box) (transform_hlds__size_prof__V_822_822));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 4) = ((MR_Box) (transform_hlds__size_prof__V_823_823));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_241));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 6) = ((MR_Box) (transform_hlds__size_prof__V_825_825));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 7) = ((MR_Box) (transform_hlds__size_prof__V_826_826));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 8) = ((MR_Box) (transform_hlds__size_prof__V_827_827));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 9) = ((MR_Box) (transform_hlds__size_prof__V_828_828));
#line 451 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 10) = ((MR_Box) (transform_hlds__size_prof__V_829_829));
#line 451 "size_prof.m"
              }
#line 452 "size_prof.m"
              {
#line 452 "size_prof.m"
                transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Else0_77, &transform_hlds__size_prof__Else_84, transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, &transform_hlds__size_prof__STATE_VARIABLE_Info_122_122);
              }
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_841_841 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 0)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__TypeInfoMapElse_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 1)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_842_842 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 2)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_843_843 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 3)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_844_844 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 4)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__KnownSizeMapElse_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 5)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_846_846 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 6)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_847_847 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 7)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_848_848 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 8)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_849_849 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 9)));
#line 453 "size_prof.m"
              transform_hlds__size_prof__V_850_850 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 10)));
#line 456 "size_prof.m"
              {
#line 456 "size_prof.m"
                transform_hlds__size_prof__TypeInfoMap_243 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_1035_1035, transform_hlds__size_prof__TypeInfo_1036_1036, transform_hlds__size_prof__TypeInfoMapThen_81, transform_hlds__size_prof__TypeInfoMapElse_85);
              }
#line 457 "size_prof.m"
              {
#line 457 "size_prof.m"
                transform_hlds__size_prof__KnownSizeMap_244 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_1036_1036, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapThen_82, transform_hlds__size_prof__KnownSizeMapElse_86);
              }
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_861_861 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 0)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_862_862 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 1)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_863_863 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 2)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_864_864 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 3)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_865_865 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 4)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_866_866 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 5)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_867_867 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 6)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_868_868 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 7)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_869_869 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 8)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_870_870 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 9)));
#line 458 "size_prof.m"
              transform_hlds__size_prof__V_871_871 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 10)));
#line 458 "size_prof.m"
              {
#line 458 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 0) = ((MR_Box) (transform_hlds__size_prof__V_861_861));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_243));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 2) = ((MR_Box) (transform_hlds__size_prof__V_863_863));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 3) = ((MR_Box) (transform_hlds__size_prof__V_864_864));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 4) = ((MR_Box) (transform_hlds__size_prof__V_865_865));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 5) = ((MR_Box) (transform_hlds__size_prof__V_866_866));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 6) = ((MR_Box) (transform_hlds__size_prof__V_867_867));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 7) = ((MR_Box) (transform_hlds__size_prof__V_868_868));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 8) = ((MR_Box) (transform_hlds__size_prof__V_869_869));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 9) = ((MR_Box) (transform_hlds__size_prof__V_870_870));
#line 458 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 10) = ((MR_Box) (transform_hlds__size_prof__V_871_871));
#line 458 "size_prof.m"
              }
#line 459 "size_prof.m"
              {
#line 459 "size_prof.m"
                transform_hlds__size_prof__V_125_125 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__size_prof__TypeInfo_1036_1036);
              }
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_872_872 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 0)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_873_873 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 1)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_874_874 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 2)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_875_875 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 3)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_876_876 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 4)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_877_877 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 5)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_878_878 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 6)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_879_879 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 7)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_880_880 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 8)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_881_881 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 9)));
#line 459 "size_prof.m"
              transform_hlds__size_prof__V_882_882 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 10)));
#line 460 "size_prof.m"
              {
#line 460 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 0) = ((MR_Box) (transform_hlds__size_prof__V_125_125));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 1) = ((MR_Box) (transform_hlds__size_prof__V_873_873));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 2) = ((MR_Box) (transform_hlds__size_prof__V_874_874));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 3) = ((MR_Box) (transform_hlds__size_prof__V_875_875));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 4) = ((MR_Box) (transform_hlds__size_prof__V_876_876));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_244));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 6) = ((MR_Box) (transform_hlds__size_prof__V_878_878));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 7) = ((MR_Box) (transform_hlds__size_prof__V_879_879));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 8) = ((MR_Box) (transform_hlds__size_prof__V_880_880));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 9) = ((MR_Box) (transform_hlds__size_prof__V_881_881));
#line 460 "size_prof.m"
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 10) = ((MR_Box) (transform_hlds__size_prof__V_882_882));
#line 460 "size_prof.m"
              }
#line 461 "size_prof.m"
              {
#line 461 "size_prof.m"
                transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, &transform_hlds__size_prof__STATE_VARIABLE_Info_127_127);
              }
#line 462 "size_prof.m"
              {
#line 462 "size_prof.m"
                transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_127_127, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
              }
#line 463 "size_prof.m"
              {
#line 463 "size_prof.m"
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 463 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 463 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Quant_74));
#line 463 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__Cond_78));
#line 463 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 3) = ((MR_Box) (transform_hlds__size_prof__Then_79));
#line 463 "size_prof.m"
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 4) = ((MR_Box) (transform_hlds__size_prof__Else_84));
#line 463 "size_prof.m"
              }
#line 428 "size_prof.m"
            }
#line 319 "size_prof.m"
            break;
#line 319 "size_prof.m"
          case (MR_Integer) 7:
#line 498 "size_prof.m"
            {
#line 499 "size_prof.m"
              {
#line 499 "size_prof.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "shorthand");
#line 499 "size_prof.m"
                return;
              }
#line 498 "size_prof.m"
            }
#line 319 "size_prof.m"
            break;
#line 319 "size_prof.m"
        }
#line 319 "size_prof.m"
        break;
#line 319 "size_prof.m"
    }
#line 501 "size_prof.m"
    {
#line 501 "size_prof.m"
      MR_Word base;
#line 501 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "size_prof.m"
      *transform_hlds__size_prof__Goal_6 = base;
#line 501 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__GoalExpr_22));
#line 501 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__GoalInfo0_9));
#line 501 "size_prof.m"
    }
#line 283 "size_prof.m"
  }
#line 280 "size_prof.m"
}

#line 261 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
#line 261 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 261 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 261 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 261 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 261 "size_prof.m"
{
#line 261 "size_prof.m"
  {
#line 261 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14;

#line 261 "size_prof.m"
    {
#line 261 "size_prof.m"
      transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14);
    }
#line 261 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14));
#line 261 "size_prof.m"
  }
#line 261 "size_prof.m"
}

#line 234 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
#line 234 "size_prof.m"
  MR_Word transform_hlds__size_prof__Transform_7,
#line 234 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 234 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37,
#line 234 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38,
#line 234 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39,
#line 234 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40)
#line 234 "size_prof.m"
{
#line 239 "size_prof.m"
  {
#line 239 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_85_85;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_86_86;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_87_87;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "size_prof.m"
    MR_Integer transform_hlds__size_prof__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__SimplifyTasks_12;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal0_13;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet0_14;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes0_15;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__InstMap0_16;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps0_17;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap0_18;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap0_19;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_20;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_21;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_22;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap0_23;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info0_24;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__TVars_25;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info1_26;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal1_27;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info_28;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__HeadVars_29;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__InstVarSet_30;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal2_32;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_33;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_34;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps_35;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal_36;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_61_61;
#line 239 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_63_63;
#line 261 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv1_Info1_26;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_55_55;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_59_59;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_62_62;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_64_64;
#line 269 "size_prof.m"
    MR_Word transform_hlds__size_prof___Warnings_31;

#line 240 "size_prof.m"
    {
#line 240 "size_prof.m"
      transform_hlds__size_prof__SimplifyTasks_12 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 241 "size_prof.m"
    {
#line 241 "size_prof.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(transform_hlds__size_prof__SimplifyTasks_12, transform_hlds__size_prof__PredId_8, transform_hlds__size_prof__ProcId_9, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39, &transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 243 "size_prof.m"
    {
#line 243 "size_prof.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__Goal0_13);
    }
#line 244 "size_prof.m"
    {
#line 244 "size_prof.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__VarSet0_14);
    }
#line 245 "size_prof.m"
    {
#line 245 "size_prof.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__VarTypes0_15);
    }
#line 246 "size_prof.m"
    {
#line 246 "size_prof.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, &transform_hlds__size_prof__InstMap0_16);
    }
#line 247 "size_prof.m"
    {
#line 247 "size_prof.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__RttiVarMaps0_17);
    }
#line 13505 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 13507 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_86_86 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 250 "size_prof.m"
    {
#line 250 "size_prof.m"
      transform_hlds__size_prof__TypeCtorMap0_18 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_85_85, transform_hlds__size_prof__TypeInfo_86_86);
    }
#line 13514 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 251 "size_prof.m"
    {
#line 251 "size_prof.m"
      transform_hlds__size_prof__TypeInfoMap0_19 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_87_87, transform_hlds__size_prof__TypeInfo_86_86);
    }
#line 252 "size_prof.m"
    {
#line 252 "size_prof.m"
      transform_hlds__size_prof__RevTypeCtorMap0_20 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, transform_hlds__size_prof__TypeCtorInfo_85_85);
    }
#line 253 "size_prof.m"
    {
#line 253 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap0_21 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, transform_hlds__size_prof__TypeCtorInfo_87_87);
    }
#line 254 "size_prof.m"
    {
#line 254 "size_prof.m"
      transform_hlds__size_prof__TargetTypeInfoMap0_22 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_87_87, transform_hlds__size_prof__TypeInfo_86_86);
    }
#line 255 "size_prof.m"
    {
#line 255 "size_prof.m"
      transform_hlds__size_prof__KnownSizeMap0_23 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 256 "size_prof.m"
    {
#line 256 "size_prof.m"
      transform_hlds__size_prof__Info0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap0_18));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap0_19));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_20));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_21));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap0_22));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_23));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet0_14));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes0_15));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 8) = ((MR_Box) (transform_hlds__size_prof__Transform_7));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps0_17));
#line 256 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 10) = ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42));
#line 256 "size_prof.m"
    }
#line 260 "size_prof.m"
    {
#line 260 "size_prof.m"
      hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(transform_hlds__size_prof__RttiVarMaps0_17, &transform_hlds__size_prof__TVars_25);
    }
#line 261 "size_prof.m"
    {
#line 261 "size_prof.m"
      transform_hlds__size_prof__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 261 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[0]));
#line 261 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_proc_6_p_0_1));
#line 261 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 261 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 3) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps0_17));
#line 261 "size_prof.m"
    }
#line 261 "size_prof.m"
    {
#line 261 "size_prof.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[1], (MR_Word) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0, transform_hlds__size_prof__V_44_44, transform_hlds__size_prof__TVars_25, ((MR_Box) (transform_hlds__size_prof__Info0_24)), &transform_hlds__size_prof__conv1_Info1_26);
    }
#line 261 "size_prof.m"
    transform_hlds__size_prof__Info1_26 = ((MR_Word) transform_hlds__size_prof__conv1_Info1_26);
#line 263 "size_prof.m"
    {
#line 263 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_13, &transform_hlds__size_prof__Goal1_27, transform_hlds__size_prof__Info1_26, &transform_hlds__size_prof__Info_28);
    }
#line 267 "size_prof.m"
    {
#line 267 "size_prof.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__HeadVars_29);
    }
#line 268 "size_prof.m"
    {
#line 268 "size_prof.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__InstVarSet_30);
    }
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 0)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 1)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 2)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 3)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 4)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 5)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 6)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 7)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 8)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 9)));
#line 269 "size_prof.m"
    transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 10)));
#line 269 "size_prof.m"
    {
#line 269 "size_prof.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__size_prof__HeadVars_29, &transform_hlds__size_prof___Warnings_31, transform_hlds__size_prof__Goal1_27, &transform_hlds__size_prof__Goal2_32, transform_hlds__size_prof__V_46_46, &transform_hlds__size_prof__VarSet_33, transform_hlds__size_prof__V_61_61, &transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__V_63_63, &transform_hlds__size_prof__RttiVarMaps_35);
    }
#line 273 "size_prof.m"
    {
#line 273 "size_prof.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__size_prof__Goal2_32, &transform_hlds__size_prof__Goal_36, transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__InstVarSet_30, transform_hlds__size_prof__InstMap0_16, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40);
    }
#line 275 "size_prof.m"
    {
#line 275 "size_prof.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__size_prof__Goal_36, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51);
    }
#line 276 "size_prof.m"
    {
#line 276 "size_prof.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__size_prof__VarSet_33, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52);
    }
#line 277 "size_prof.m"
    {
#line 277 "size_prof.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 278 "size_prof.m"
    {
#line 278 "size_prof.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__size_prof__RttiVarMaps_35, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38);
    }
#line 239 "size_prof.m"
  }
#line 234 "size_prof.m"
}

#line 101 "size_prof.m"
void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(
#line 101 "size_prof.m"
  MR_Word transform_hlds__size_prof__Transform_7,
#line 101 "size_prof.m"
  MR_Word transform_hlds__size_prof__PredProcId_8,
#line 101 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_12,
#line 101 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_13,
#line 101 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14,
#line 101 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15)
#line 101 "size_prof.m"
{
#line 223 "size_prof.m"
  {
#line 223 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 225 "size_prof.m"
    {
#line 225 "size_prof.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Adding typeinfos in ", transform_hlds__size_prof__PredProcId_8, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14);
    }
#line 228 "size_prof.m"
    {
#line 228 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_proc_6_p_0(transform_hlds__size_prof__Transform_7, transform_hlds__size_prof__PredProcId_8, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_12, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_13, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15);
    }
#line 230 "size_prof.m"
    {
#line 230 "size_prof.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "done.\n", transform_hlds__size_prof__PredProcId_8, *transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15);
    }
#line 223 "size_prof.m"
  }
#line 101 "size_prof.m"
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
