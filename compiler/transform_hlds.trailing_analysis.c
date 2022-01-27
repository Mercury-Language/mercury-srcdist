/*
** Automatically generated from `trailing_analysis.m'
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


/* :- module transform_hlds.trailing_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__trailing_analysis__init
ENDINIT
*/

#include "transform_hlds.trailing_analysis.mih"


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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.intermod.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



#line 848 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s {
#line 854 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded;
#line 867 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45;
#line 876 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0;
#line 876 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47;
#line 876 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48;
#line 876 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49;
#line 876 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139;
#line 876 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140;
#line 848 "trailing_analysis.m"
};

#line 302 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s {
#line 307 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded;
#line 324 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48;
#line 345 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0;
#line 345 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52;
#line 345 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53;
#line 345 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54;
#line 345 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162;
#line 345 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163;
#line 302 "trailing_analysis.m"
};

#line 180 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s {
#line 183 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded;
#line 183 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10;
#line 239 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0;
#line 239 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58;
#line 240 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58;
#line 247 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1;
#line 247 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59;
#line 247 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62;
#line 248 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59;
#line 253 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2;
#line 253 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63;
#line 253 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64;
#line 253 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64;
#line 180 "trailing_analysis.m"
};


#line 223 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 226 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0;

#line 229 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0;

#line 232 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 235 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 238 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0;

#line 241 "transform_hlds.trailing_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3];

#line 244 "transform_hlds.trailing_analysis.c"
static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3];

#line 247 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0;

#line 250 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1];

#line 253 "transform_hlds.trailing_analysis.c"
static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1];

#line 256 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1];

#line 259 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1];

#line 262 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1];

#line 265 "transform_hlds.trailing_analysis.c"
static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0;

#line 268 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
#line 271 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 273 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2);

#line 276 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
#line 279 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 281 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 283 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 286 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
#line 289 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 291 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2);

#line 294 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
#line 297 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 299 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 301 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 304 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 307 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 309 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 312 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 315 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 317 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 319 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2);

#line 322 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 325 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 327 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 329 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 331 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 334 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 337 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 339 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 341 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 343 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 346 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 349 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 352 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 355 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 358 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 361 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 364 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 367 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 369 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 372 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
#line 375 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 377 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 380 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 383 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 385 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 387 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 389 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3,
#line 391 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_6);

#line 1056 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1056 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1056 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3);

#line 1051 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1051 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1051 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5);

#line 1046 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void);

#line 1045 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1044 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1043 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1042 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1041 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 446 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__446__1_1_f_0(
#line 446 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__LambdaHeadVar__1_125);

#line 1068 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(
#line 1068 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1068 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__2_2);

#line 1067 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(
#line 1067 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1);

#line 1056 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
#line 1056 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1056 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3);

#line 1051 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 1051 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1051 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5);

#line 1046 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 1046 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_17,
#line 1046 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_18,
#line 1046 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_19);

#line 1045 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0(void);

#line 1044 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0(void);

#line 1043 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

#line 1042 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

#line 1041 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void);

#line 173 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
#line 173 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 173 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 173 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3);

#line 173 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
#line 173 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 173 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2);

#line 1197 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_4_p_0(
#line 1197 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Moduleinfo_5,
#line 1197 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6);

#line 1195 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1(
#line 1195 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1195 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1195 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1195 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1182 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(
#line 1182 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 1182 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 1182 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8);

#line 1136 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
#line 1136 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_7,
#line 1136 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_8,
#line 1136 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_9,
#line 1136 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__ProcId_10,
#line 1136 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18,
#line 1136 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19);

#line 1133 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
#line 1133 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1133 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1133 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1133 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1127 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
#line 1127 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 1127 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_6,
#line 1127 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10,
#line 1127 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11);

#line 1092 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
#line 1092 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 1092 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_7,
#line 1092 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_8,
#line 1092 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12,
#line 1092 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13);

#line 1020 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
#line 1020 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1020 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15,
#line 1020 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16,
#line 1020 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1020 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 1020 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);

#line 1017 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
#line 1017 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1017 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1017 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1017 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1015 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
#line 1015 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1015 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1015 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1015 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1015 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1015 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 1011 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
#line 1011 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1011 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12,
#line 1011 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13,
#line 1011 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1011 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 1011 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15);

#line 1008 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
#line 1008 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1008 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1008 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1008 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1006 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
#line 1006 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1006 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1006 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1006 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1006 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1006 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 1001 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
#line 1001 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1001 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12,
#line 1001 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13,
#line 1001 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1001 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 1001 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15);

#line 876 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
#line 876 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 876 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
#line 876 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 876 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
#line 876 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 848 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
#line 848 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_8,
#line 848 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__GoalInfo_9,
#line 848 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109,
#line 848 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110,
#line 848 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_11,
#line 848 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111,
#line 848 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);

#line 829 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
#line 829 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 829 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15,
#line 829 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16,
#line 829 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 829 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 829 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);

#line 816 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
#line 816 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_4,
#line 816 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 816 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 771 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(
#line 771 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 771 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 771 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__TypeCtorCat_7);

#line 755 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_f_0(
#line 755 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 755 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_5);

#line 747 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_4_p_0(
#line 747 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 747 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 747 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8,
#line 747 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 741 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0(
#line 741 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 741 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Types_5);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 703 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
#line 703 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 703 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_6,
#line 703 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Vars_7);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 672 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
#line 672 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 672 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 672 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 672 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 672 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeResult_10);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 658 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
#line 658 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 658 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 658 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 658 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 658 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_10);

#line 638 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
#line 638 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusA_4,
#line 638 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusB_5,
#line 638 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeStatus_6);

#line 627 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
#line 627 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 627 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 627 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__3_3);

#line 563 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
#line 563 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_3,
#line 563 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_4);

#line 538 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
#line 538 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_5,
#line 538 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_6,
#line 538 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerStatus_7);

#line 528 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
#line 528 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Attributes_3);

#line 520 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
#line 520 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 520 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 520 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 520 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 518 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
#line 518 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 518 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 518 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 518 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 516 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 516 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 516 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 516 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 510 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
#line 510 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 510 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 510 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goals_10,
#line 510 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 510 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 510 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16,
#line 510 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17);

#line 446 "trailing_analysis.m"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
#line 446 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 446 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 345 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
#line 345 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 345 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
#line 345 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 345 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
#line 345 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 302 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
#line 302 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 302 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 302 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goal_10,
#line 302 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 302 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 302 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109,
#line 302 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);

#line 285 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
#line 285 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 285 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 285 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17,
#line 285 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18,
#line 285 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19,
#line 285 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20);

#line 274 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
#line 274 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcResult_3,
#line 274 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_4);

#line 210 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
#line 210 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_5,
#line 210 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 210 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 210 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);

#line 205 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
#line 205 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 205 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 205 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 205 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 201 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 201 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 271 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
#line 271 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 271 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 271 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 271 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 270 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
#line 270 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 270 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 270 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2);

#line 224 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
#line 224 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 224 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 224 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 224 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 224 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 224 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 239 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
#line 239 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 240 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
#line 240 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 239 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
#line 239 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 239 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
#line 239 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 247 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
#line 247 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 248 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
#line 248 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 247 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
#line 247 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 247 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
#line 247 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 253 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
#line 253 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 253 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
#line 253 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 253 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
#line 253 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 253 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
#line 253 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 180 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Debug_6,
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Pass1Only_7,
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 180 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16);

#line 158 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2(
#line 158 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 158 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 158 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 158 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 144 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1(
#line 144 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 144 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 144 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 144 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_5[1][8];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_6[4][7];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_7[4][9];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_8[2][1];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_10[1][10];


#line 350 "trailing_analysis.m"
/* sealed */ struct transform_hlds__trailing_analysis__vector_common_type_9_0_s {
#line 350 "trailing_analysis.m"
  const MR_Word transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 350 "trailing_analysis.m"
};

static /* final */ const struct transform_hlds__trailing_analysis__vector_common_type_9_0_s transform_hlds__trailing_analysis_vector_common_9[4];



static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_3[4][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_1[3])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_1[4])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_4[4][6] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[1])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_6[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_trailing_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_7[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};


static /* final */ const struct transform_hlds__trailing_analysis__vector_common_type_9_0_s transform_hlds__trailing_analysis_vector_common_9[4] = {
  /* row 0 */   {     (MR_Integer) 2 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1641 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1649 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0
  }
};

#line 1657 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 1665 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1673 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1682 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 1690 "transform_hlds.trailing_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0
};

#line 1697 "transform_hlds.trailing_analysis.c"
static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3] = {
  (MR_String) "tpr_ppid",
  (MR_String) "tpr_status",
  (MR_String) "tpr_maybe_analysis_status"
};

#line 1704 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0 = {
  (MR_String) "trail_proc_result",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0,
  NULL,
  NULL
};

#line 1719 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1] = {
  &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0
};

#line 1724 "transform_hlds.trailing_analysis.c"
static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0
  }
};

#line 1733 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1] = {
  &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0
};

#line 1738 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1] = {
  (MR_Integer) 0
};

#line 1743 "transform_hlds.trailing_analysis.c"
const MR_TypeCtorInfo_Struct transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001)),
  (MR_String) "transform_hlds.trailing_analysis",
  (MR_String) "trail_proc_result",
  {     transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0 },
  {     transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0
};

#line 1760 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1] = {
  (MR_Integer) 0
};

#line 1765 "transform_hlds.trailing_analysis.c"
static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 = {
  (MR_String) "trailing_analysis_answer",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0,
  NULL
};

#line 1772 "transform_hlds.trailing_analysis.c"
const MR_TypeCtorInfo_Struct transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001)),
  (MR_String) "transform_hlds.trailing_analysis",
  (MR_String) "trailing_analysis_answer",
  {     &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 },
  {     &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0
};

#line 1789 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 1800 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 1811 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 1820 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[11] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

#line 1835 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
#line 1838 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1840 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1842 "transform_hlds.trailing_analysis.c"
{
#line 1844 "transform_hlds.trailing_analysis.c"
  {
#line 1846 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1849 "transform_hlds.trailing_analysis.c"
    {
#line 1851 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2));
    }
#line 1854 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 1856 "transform_hlds.trailing_analysis.c"
  }
#line 1858 "transform_hlds.trailing_analysis.c"
}

#line 1861 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
#line 1864 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1866 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1868 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1870 "transform_hlds.trailing_analysis.c"
{
#line 1872 "transform_hlds.trailing_analysis.c"
  {
#line 1874 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__1_1;

#line 1877 "transform_hlds.trailing_analysis.c"
    {
#line 1879 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(&transform_hlds__trailing_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 1882 "transform_hlds.trailing_analysis.c"
    *transform_hlds__trailing_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__1_1));
#line 1884 "transform_hlds.trailing_analysis.c"
  }
#line 1886 "transform_hlds.trailing_analysis.c"
}

#line 1889 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
#line 1892 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1894 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1896 "transform_hlds.trailing_analysis.c"
{
#line 1898 "transform_hlds.trailing_analysis.c"
  {
#line 1900 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1903 "transform_hlds.trailing_analysis.c"
    {
#line 1905 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2));
    }
#line 1908 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 1910 "transform_hlds.trailing_analysis.c"
  }
#line 1912 "transform_hlds.trailing_analysis.c"
}

#line 1915 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
#line 1918 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1920 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1922 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1924 "transform_hlds.trailing_analysis.c"
{
#line 1926 "transform_hlds.trailing_analysis.c"
  {
#line 1928 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__1_1;

#line 1931 "transform_hlds.trailing_analysis.c"
    {
#line 1933 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(&transform_hlds__trailing_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 1936 "transform_hlds.trailing_analysis.c"
    *transform_hlds__trailing_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__1_1));
#line 1938 "transform_hlds.trailing_analysis.c"
  }
#line 1940 "transform_hlds.trailing_analysis.c"
}

#line 1943 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 1946 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1948 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 1950 "transform_hlds.trailing_analysis.c"
{
#line 1952 "transform_hlds.trailing_analysis.c"
  {
#line 1954 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_2;
#line 1956 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 1958 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__2_2;

#line 1961 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1963 "transform_hlds.trailing_analysis.c"
    {
#line 1965 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__2_2 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
    }
#line 1968 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__2_2));
#line 1970 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_2;
#line 1972 "transform_hlds.trailing_analysis.c"
  }
#line 1974 "transform_hlds.trailing_analysis.c"
}

#line 1977 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 1980 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1982 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1984 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1986 "transform_hlds.trailing_analysis.c"
{
#line 1988 "transform_hlds.trailing_analysis.c"
  {
#line 1990 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1992 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 1994 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__2_2;

#line 1997 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1999 "transform_hlds.trailing_analysis.c"
    {
#line 2001 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv0_HeadVar__2_2);
    }
#line 2004 "transform_hlds.trailing_analysis.c"
    if (transform_hlds__trailing_analysis__succeeded)
#line 2006 "transform_hlds.trailing_analysis.c"
      {
#line 2008 "transform_hlds.trailing_analysis.c"
        *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__2_2));
#line 2010 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 2012 "transform_hlds.trailing_analysis.c"
      }
#line 2014 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2016 "transform_hlds.trailing_analysis.c"
  }
#line 2018 "transform_hlds.trailing_analysis.c"
}

#line 2021 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 2024 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2026 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2028 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2030 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 2032 "transform_hlds.trailing_analysis.c"
{
#line 2034 "transform_hlds.trailing_analysis.c"
  {
#line 2036 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 2038 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2041 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2043 "transform_hlds.trailing_analysis.c"
    {
#line 2045 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2048 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2050 "transform_hlds.trailing_analysis.c"
  }
#line 2052 "transform_hlds.trailing_analysis.c"
}

#line 2055 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 2058 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2060 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2062 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2064 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 2066 "transform_hlds.trailing_analysis.c"
{
#line 2068 "transform_hlds.trailing_analysis.c"
  {
#line 2070 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 2072 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2075 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2077 "transform_hlds.trailing_analysis.c"
    {
#line 2079 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2082 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2084 "transform_hlds.trailing_analysis.c"
  }
#line 2086 "transform_hlds.trailing_analysis.c"
}

#line 2089 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 2092 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2094 "transform_hlds.trailing_analysis.c"
{
#line 2096 "transform_hlds.trailing_analysis.c"
  {
#line 2098 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2100 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2102 "transform_hlds.trailing_analysis.c"
    MR_String transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2105 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2107 "transform_hlds.trailing_analysis.c"
    {
#line 2109 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0();
    }
#line 2112 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2114 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2116 "transform_hlds.trailing_analysis.c"
  }
#line 2118 "transform_hlds.trailing_analysis.c"
}

#line 2121 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 2124 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2126 "transform_hlds.trailing_analysis.c"
{
#line 2128 "transform_hlds.trailing_analysis.c"
  {
#line 2130 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2132 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2134 "transform_hlds.trailing_analysis.c"
    MR_Integer transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2137 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2139 "transform_hlds.trailing_analysis.c"
    {
#line 2141 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    }
#line 2144 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2146 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2148 "transform_hlds.trailing_analysis.c"
  }
#line 2150 "transform_hlds.trailing_analysis.c"
}

#line 2153 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 2156 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2158 "transform_hlds.trailing_analysis.c"
{
#line 2160 "transform_hlds.trailing_analysis.c"
  {
#line 2162 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2164 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2166 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2169 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2171 "transform_hlds.trailing_analysis.c"
    {
#line 2173 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    }
#line 2176 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2178 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2180 "transform_hlds.trailing_analysis.c"
  }
#line 2182 "transform_hlds.trailing_analysis.c"
}

#line 2185 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 2188 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2190 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 2192 "transform_hlds.trailing_analysis.c"
{
#line 2194 "transform_hlds.trailing_analysis.c"
  {
#line 2196 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2198 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2200 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2203 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2205 "transform_hlds.trailing_analysis.c"
    {
#line 2207 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0();
    }
#line 2210 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2212 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2214 "transform_hlds.trailing_analysis.c"
  }
#line 2216 "transform_hlds.trailing_analysis.c"
}

#line 2219 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
#line 2222 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2224 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 2226 "transform_hlds.trailing_analysis.c"
{
#line 2228 "transform_hlds.trailing_analysis.c"
  {
#line 2230 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2232 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2234 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2237 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2239 "transform_hlds.trailing_analysis.c"
    {
#line 2241 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0();
    }
#line 2244 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2246 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2248 "transform_hlds.trailing_analysis.c"
  }
#line 2250 "transform_hlds.trailing_analysis.c"
}

#line 2253 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 2256 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2258 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2260 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2262 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3,
#line 2264 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_6)
#line 2266 "transform_hlds.trailing_analysis.c"
{
#line 2268 "transform_hlds.trailing_analysis.c"
  {
#line 2270 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2273 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2275 "transform_hlds.trailing_analysis.c"
    {
#line 2277 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2280 "transform_hlds.trailing_analysis.c"
  }
#line 2282 "transform_hlds.trailing_analysis.c"
}

#line 1056 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1056 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1056 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3)
#line 1056 "trailing_analysis.m"
{
#line 1033 "trailing_analysis.m"
  {
#line 1033 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1033 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_11 = (MR_Integer) transform_hlds__trailing_analysis__Status_3;
#line 1033 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_12 = (MR_Integer) transform_hlds__trailing_analysis__Status_8;

#line 1033 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_11 == transform_hlds__trailing_analysis__CastY_12);
#line 1033 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1033 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1033 "trailing_analysis.m"
    else
#line 1033 "trailing_analysis.m"
      {
#line 1033 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9 = (MR_Word) transform_hlds__trailing_analysis__Status_3;
#line 1033 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_10_10 = (MR_Word) transform_hlds__trailing_analysis__Status_8;

#line 2318 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_9_9 == transform_hlds__trailing_analysis__V_10_10);
#line 1033 "trailing_analysis.m"
      }
#line 1033 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1033 "trailing_analysis.m"
  }
#line 1056 "trailing_analysis.m"
}

#line 1051 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1051 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1051 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5)
#line 1051 "trailing_analysis.m"
{
#line 1051 "trailing_analysis.m"
  {
#line 1051 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1051 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status1_6 = (MR_Word) transform_hlds__trailing_analysis__Answer1_4;
#line 1051 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status2_7 = (MR_Word) transform_hlds__trailing_analysis__Answer2_5;

#line 1062 "trailing_analysis.m"
#line 1062 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__Status1_6) {
#line 1062 "trailing_analysis.m"
      default:
#line 1062 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1062 "trailing_analysis.m"
        break;
#line 1062 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 1064 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__Status2_7 == (MR_Integer) 0);
#line 1062 "trailing_analysis.m"
        break;
#line 1062 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1062 "trailing_analysis.m"
#line 1062 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__Status2_7) {
#line 1062 "trailing_analysis.m"
          default:
#line 1062 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1062 "trailing_analysis.m"
            break;
#line 1062 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 1063 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1062 "trailing_analysis.m"
            break;
#line 1062 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 1062 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1062 "trailing_analysis.m"
            break;
#line 1062 "trailing_analysis.m"
        }
#line 1062 "trailing_analysis.m"
        break;
#line 1062 "trailing_analysis.m"
    }
#line 1051 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1051 "trailing_analysis.m"
  }
#line 1051 "trailing_analysis.m"
}

#line 1046 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void)
#line 1046 "trailing_analysis.m"
{
#line 1046 "trailing_analysis.m"
  {
#line 1046 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1046 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1046 "trailing_analysis.m"
  }
#line 1046 "trailing_analysis.m"
}

#line 1045 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1045 "trailing_analysis.m"
{
#line 1045 "trailing_analysis.m"
  {
#line 1045 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1045 "trailing_analysis.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1045 "trailing_analysis.m"
  }
#line 1045 "trailing_analysis.m"
}

#line 1044 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1044 "trailing_analysis.m"
{
#line 1044 "trailing_analysis.m"
  {
#line 1044 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1044 "trailing_analysis.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 1));
#line 1044 "trailing_analysis.m"
  }
#line 1044 "trailing_analysis.m"
}

#line 1043 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1043 "trailing_analysis.m"
{
#line 1043 "trailing_analysis.m"
  {
#line 1043 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1043 "trailing_analysis.m"
    return (MR_Integer) 0;
#line 1043 "trailing_analysis.m"
  }
#line 1043 "trailing_analysis.m"
}

#line 1042 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1042 "trailing_analysis.m"
{
#line 1042 "trailing_analysis.m"
  {
#line 1042 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1042 "trailing_analysis.m"
    return (MR_Integer) 1;
#line 1042 "trailing_analysis.m"
  }
#line 1042 "trailing_analysis.m"
}

#line 1041 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1041 "trailing_analysis.m"
{
#line 1038 "trailing_analysis.m"
  {
#line 1038 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1038 "trailing_analysis.m"
    return (MR_String) "trail_usage";
#line 1038 "trailing_analysis.m"
  }
#line 1041 "trailing_analysis.m"
}

#line 446 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__446__1_1_f_0(
#line 446 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__LambdaHeadVar__1_125)
#line 446 "trailing_analysis.m"
{
#line 446 "trailing_analysis.m"
  {
#line 446 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 446 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__LambdaHeadVar__2_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__LambdaHeadVar__1_125, (MR_Integer) 2)));
#line 446 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__LambdaHeadVar__1_125, (MR_Integer) 0)));
#line 446 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__LambdaHeadVar__1_125, (MR_Integer) 1)));

#line 446 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__LambdaHeadVar__2_126;
#line 446 "trailing_analysis.m"
  }
#line 446 "trailing_analysis.m"
}

#line 1068 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(
#line 1068 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1068 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__2_2)
#line 1068 "trailing_analysis.m"
{
#line 1080 "trailing_analysis.m"
  {
#line 1080 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1080 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_4;
#line 1080 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__String_5;
#line 1080 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_7_7;
#line 1080 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_8_8;
#line 1081 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6;

#line 1081 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1081 "trailing_analysis.m"
      {
#line 1081 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1081 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1081 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 1081 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__V_7_7)) == (MR_mktag((MR_Integer) 0)));
#line 1081 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 1081 "trailing_analysis.m"
          {
#line 1081 "trailing_analysis.m"
            transform_hlds__trailing_analysis__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, (MR_Integer) 0)));
#line 1081 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1080 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 1080 "trailing_analysis.m"
              {
#line 1088 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "conditional") == 0))
#line 1090 "trailing_analysis.m"
                  {
#line 1090 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 2;
#line 1090 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1090 "trailing_analysis.m"
                  }
#line 1088 "trailing_analysis.m"
                else
#line 1088 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "may_modify_trail") == 0))
#line 1088 "trailing_analysis.m"
                  {
#line 1088 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 0;
#line 1088 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1088 "trailing_analysis.m"
                  }
#line 1088 "trailing_analysis.m"
                else
#line 1088 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "will_not_modify_trail") == 0))
#line 1089 "trailing_analysis.m"
                  {
#line 1089 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 1089 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1089 "trailing_analysis.m"
                  }
#line 1088 "trailing_analysis.m"
                else
#line 1088 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1080 "trailing_analysis.m"
                if (transform_hlds__trailing_analysis__succeeded)
#line 1080 "trailing_analysis.m"
                  {
#line 1080 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Word) transform_hlds__trailing_analysis__Status_4;
#line 1080 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1080 "trailing_analysis.m"
                  }
#line 1080 "trailing_analysis.m"
              }
#line 1081 "trailing_analysis.m"
          }
#line 1081 "trailing_analysis.m"
      }
#line 1080 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1080 "trailing_analysis.m"
  }
#line 1068 "trailing_analysis.m"
}

#line 1067 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(
#line 1067 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1)
#line 1067 "trailing_analysis.m"
{
#line 1073 "trailing_analysis.m"
  {
#line 1073 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1073 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1073 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1073 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__String_5;
#line 1073 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6;
#line 1073 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_8_8;

#line 1088 "trailing_analysis.m"
#line 1088 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__Status_4) {
#line 1088 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1088 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 1090 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "conditional";
#line 1088 "trailing_analysis.m"
        break;
#line 1088 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 1088 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "may_modify_trail";
#line 1088 "trailing_analysis.m"
        break;
#line 1088 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1089 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "will_not_modify_trail";
#line 1088 "trailing_analysis.m"
        break;
#line 1088 "trailing_analysis.m"
    }
#line 1075 "trailing_analysis.m"
    {
#line 1075 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_6_6, 0) = ((MR_Box) (transform_hlds__trailing_analysis__String_5));
#line 1075 "trailing_analysis.m"
    }
#line 1075 "trailing_analysis.m"
    {
#line 1075 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 1075 "trailing_analysis.m"
    {
#line 1075 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_6_6));
#line 1075 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1075 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__trailing_analysis__V_8_8));
#line 1075 "trailing_analysis.m"
    }
#line 1073 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1073 "trailing_analysis.m"
  }
#line 1067 "trailing_analysis.m"
}

#line 1056 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
#line 1056 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1056 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3)
#line 1056 "trailing_analysis.m"
{
#line 1033 "trailing_analysis.m"
  {
#line 1033 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1033 "trailing_analysis.m"
    {
#line 1033 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__trailing_analysis__Status_8, transform_hlds__trailing_analysis__Status_3);
    }
#line 1033 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1033 "trailing_analysis.m"
  }
#line 1056 "trailing_analysis.m"
}

#line 1051 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 1051 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1051 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5)
#line 1051 "trailing_analysis.m"
{
#line 1051 "trailing_analysis.m"
  {
#line 1051 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1051 "trailing_analysis.m"
    {
#line 1051 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__trailing_analysis__Answer1_4, transform_hlds__trailing_analysis__Answer2_5);
    }
#line 1051 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1051 "trailing_analysis.m"
  }
#line 1051 "trailing_analysis.m"
}

#line 1046 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 1046 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_17,
#line 1046 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_18,
#line 1046 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_19)
#line 1046 "trailing_analysis.m"
{
#line 1046 "trailing_analysis.m"
  {
#line 1046 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1046 "trailing_analysis.m"
    {
#line 1046 "trailing_analysis.m"
      transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0();
    }
#line 1046 "trailing_analysis.m"
  }
#line 1046 "trailing_analysis.m"
}

#line 1045 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0(void)
#line 1045 "trailing_analysis.m"
{
#line 1045 "trailing_analysis.m"
  {
#line 1045 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1045 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1045 "trailing_analysis.m"
    {
#line 1045 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1045 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1045 "trailing_analysis.m"
  }
#line 1045 "trailing_analysis.m"
}

#line 1044 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0(void)
#line 1044 "trailing_analysis.m"
{
#line 1044 "trailing_analysis.m"
  {
#line 1044 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1044 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1044 "trailing_analysis.m"
    {
#line 1044 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1044 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1044 "trailing_analysis.m"
  }
#line 1044 "trailing_analysis.m"
}

#line 1043 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
#line 1043 "trailing_analysis.m"
{
#line 1043 "trailing_analysis.m"
  {
#line 1043 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1043 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1043 "trailing_analysis.m"
    {
#line 1043 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1043 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1043 "trailing_analysis.m"
  }
#line 1043 "trailing_analysis.m"
}

#line 1042 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
#line 1042 "trailing_analysis.m"
{
#line 1042 "trailing_analysis.m"
  {
#line 1042 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1042 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1042 "trailing_analysis.m"
    {
#line 1042 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1042 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1042 "trailing_analysis.m"
  }
#line 1042 "trailing_analysis.m"
}

#line 1041 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void)
#line 1041 "trailing_analysis.m"
{
#line 1038 "trailing_analysis.m"
  {
#line 1038 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1038 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1038 "trailing_analysis.m"
    {
#line 1038 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1038 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1038 "trailing_analysis.m"
  }
#line 1041 "trailing_analysis.m"
}

#line 1033 "trailing_analysis.m"
void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(
#line 1033 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1033 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 1033 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3)
#line 1033 "trailing_analysis.m"
{
#line 1033 "trailing_analysis.m"
  {
#line 1033 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1033 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_6 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1033 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_7 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1033 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_6 == transform_hlds__trailing_analysis__CastY_7);
#line 1033 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 2935 "transform_hlds.trailing_analysis.c"
      *transform_hlds__trailing_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 1033 "trailing_analysis.m"
    else
#line 1033 "trailing_analysis.m"
      {
#line 1033 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1033 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1033 "trailing_analysis.m"
        MR_Integer transform_hlds__trailing_analysis__V_9_9 = (MR_Integer) transform_hlds__trailing_analysis__V_4_4;
#line 1033 "trailing_analysis.m"
        MR_Integer transform_hlds__trailing_analysis__V_10_10 = (MR_Integer) transform_hlds__trailing_analysis__V_5_5;

#line 1033 "trailing_analysis.m"
        {
#line 1033 "trailing_analysis.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__trailing_analysis__HeadVar__1_1, transform_hlds__trailing_analysis__V_9_9, transform_hlds__trailing_analysis__V_10_10);
        }
#line 1033 "trailing_analysis.m"
      }
#line 1033 "trailing_analysis.m"
  }
#line 1033 "trailing_analysis.m"
}

#line 1033 "trailing_analysis.m"
MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(
#line 1033 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1033 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2)
#line 1033 "trailing_analysis.m"
{
#line 1033 "trailing_analysis.m"
  {
#line 1033 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1033 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_5 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1033 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_6 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 1033 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_5 == transform_hlds__trailing_analysis__CastY_6);
#line 1033 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1033 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1033 "trailing_analysis.m"
    else
#line 1033 "trailing_analysis.m"
      {
#line 1033 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_3_3 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1033 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 2995 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_3_3 == transform_hlds__trailing_analysis__V_4_4);
#line 1033 "trailing_analysis.m"
      }
#line 1033 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1033 "trailing_analysis.m"
  }
#line 1033 "trailing_analysis.m"
}

#line 173 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
#line 173 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 173 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 173 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3)
#line 173 "trailing_analysis.m"
{
#line 173 "trailing_analysis.m"
  {
#line 173 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 173 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_12 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 173 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_13 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__3_3;

#line 173 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_12 == transform_hlds__trailing_analysis__CastY_13);
#line 173 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 3030 "transform_hlds.trailing_analysis.c"
      *transform_hlds__trailing_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 173 "trailing_analysis.m"
    else
#line 173 "trailing_analysis.m"
      {
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_10_10;

#line 173 "trailing_analysis.m"
        {
#line 173 "trailing_analysis.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__trailing_analysis__V_10_10, transform_hlds__trailing_analysis__V_4_4, transform_hlds__trailing_analysis__V_7_7);
        }
#line 3056 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_10_10 == (MR_Integer) 0);
#line 173 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 173 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 173 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__HeadVar__1_1 = transform_hlds__trailing_analysis__V_10_10;
#line 173 "trailing_analysis.m"
        else
#line 173 "trailing_analysis.m"
          {
#line 173 "trailing_analysis.m"
            MR_Word transform_hlds__trailing_analysis__V_11_11;
#line 173 "trailing_analysis.m"
            MR_Integer transform_hlds__trailing_analysis__V_17_17 = (MR_Integer) transform_hlds__trailing_analysis__V_5_5;
#line 173 "trailing_analysis.m"
            MR_Integer transform_hlds__trailing_analysis__V_18_18 = (MR_Integer) transform_hlds__trailing_analysis__V_8_8;

#line 173 "trailing_analysis.m"
            {
#line 173 "trailing_analysis.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__trailing_analysis__V_11_11, transform_hlds__trailing_analysis__V_17_17, transform_hlds__trailing_analysis__V_18_18);
            }
#line 3080 "transform_hlds.trailing_analysis.c"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_11_11 == (MR_Integer) 0);
#line 173 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 173 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 173 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__HeadVar__1_1 = transform_hlds__trailing_analysis__V_11_11;
#line 173 "trailing_analysis.m"
            else
#line 173 "trailing_analysis.m"
              {
#line 173 "trailing_analysis.m"
                {
#line 173 "trailing_analysis.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2], transform_hlds__trailing_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__trailing_analysis__V_6_6)), ((MR_Box) (transform_hlds__trailing_analysis__V_9_9)));
                }
#line 173 "trailing_analysis.m"
              }
#line 173 "trailing_analysis.m"
          }
#line 173 "trailing_analysis.m"
      }
#line 173 "trailing_analysis.m"
  }
#line 173 "trailing_analysis.m"
}

#line 173 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
#line 173 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 173 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2)
#line 173 "trailing_analysis.m"
{
#line 173 "trailing_analysis.m"
  {
#line 173 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 173 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_9 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 173 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_10 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 173 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_9 == transform_hlds__trailing_analysis__CastY_10);
#line 173 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 173 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 173 "trailing_analysis.m"
    else
#line 173 "trailing_analysis.m"
      {
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeInfo_12_12;
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 3151 "transform_hlds.trailing_analysis.c"
        {
#line 3153 "transform_hlds.trailing_analysis.c"
          transform_hlds__trailing_analysis__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__trailing_analysis__V_3_3, transform_hlds__trailing_analysis__V_6_6);
        }
#line 173 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 173 "trailing_analysis.m"
          {
#line 3160 "transform_hlds.trailing_analysis.c"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_4_4 == transform_hlds__trailing_analysis__V_7_7);
#line 173 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 173 "trailing_analysis.m"
              {
#line 3166 "transform_hlds.trailing_analysis.c"
                transform_hlds__trailing_analysis__TypeInfo_12_12 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 3168 "transform_hlds.trailing_analysis.c"
                {
#line 3170 "transform_hlds.trailing_analysis.c"
                  transform_hlds__trailing_analysis__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__trailing_analysis__TypeInfo_12_12, ((MR_Box) (transform_hlds__trailing_analysis__V_5_5)), ((MR_Box) (transform_hlds__trailing_analysis__V_8_8)));
                }
#line 173 "trailing_analysis.m"
              }
#line 173 "trailing_analysis.m"
          }
#line 173 "trailing_analysis.m"
      }
#line 173 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 173 "trailing_analysis.m"
  }
#line 173 "trailing_analysis.m"
}

#line 1197 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_4_p_0(
#line 1197 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Moduleinfo_5,
#line 1197 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6)
#line 1197 "trailing_analysis.m"
{
#line 1200 "trailing_analysis.m"
  {
#line 1200 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1200 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Pieces_8;
#line 1200 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__Str_9;
#line 1200 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__V_21_21;

#line 1201 "trailing_analysis.m"
    {
#line 1201 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Pieces_8 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__trailing_analysis__Moduleinfo_5, (MR_Integer) 0, transform_hlds__trailing_analysis__PPId_6);
    }
#line 1202 "trailing_analysis.m"
    {
#line 1202 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Str_9 = parse_tree__error_util__error_pieces_to_string_1_f_0(transform_hlds__trailing_analysis__Pieces_8);
    }
#line 1203 "trailing_analysis.m"
    {
#line 1203 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1203 "trailing_analysis.m"
    {
#line 1203 "trailing_analysis.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_8[1], transform_hlds__trailing_analysis__Str_9, &transform_hlds__trailing_analysis__V_21_21);
    }
#line 1203 "trailing_analysis.m"
    {
#line 1203 "trailing_analysis.m"
      mercury__io__write_string_3_p_0(transform_hlds__trailing_analysis__V_21_21);
    }
#line 1203 "trailing_analysis.m"
    {
#line 1203 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1200 "trailing_analysis.m"
  }
#line 1197 "trailing_analysis.m"
}

#line 1195 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1(
#line 1195 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1195 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1195 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1195 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1195 "trailing_analysis.m"
{
#line 1195 "trailing_analysis.m"
  {
#line 1195 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;

#line 1195 "trailing_analysis.m"
    {
#line 1195 "trailing_analysis.m"
      transform_hlds__trailing_analysis__output_proc_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
    }
#line 1195 "trailing_analysis.m"
  }
#line 1195 "trailing_analysis.m"
}

#line 1182 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(
#line 1182 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 1182 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 1182 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8)
#line 1182 "trailing_analysis.m"
{
#line 1185 "trailing_analysis.m"
  {
#line 1185 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1185 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_24_24;
#line 1195 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_IO_16_16;

#line 1186 "trailing_analysis.m"
    {
#line 1186 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "SCC: ");
    }
#line 1187 "trailing_analysis.m"
    {
#line 1187 "trailing_analysis.m"
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, ((MR_Box) (transform_hlds__trailing_analysis__Status_8)));
    }
#line 1188 "trailing_analysis.m"
    {
#line 1188 "trailing_analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1195 "trailing_analysis.m"
    {
#line 1195 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
#line 1195 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 1) = ((MR_Box) (transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1));
#line 1195 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1195 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 1195 "trailing_analysis.m"
    }
#line 1195 "trailing_analysis.m"
    {
#line 1195 "trailing_analysis.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__trailing_analysis__V_24_24, transform_hlds__trailing_analysis__SCC_7, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 1190 "trailing_analysis.m"
    {
#line 1190 "trailing_analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1185 "trailing_analysis.m"
  }
#line 1182 "trailing_analysis.m"
}

#line 1136 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
#line 1136 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_7,
#line 1136 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_8,
#line 1136 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_9,
#line 1136 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__ProcId_10,
#line 1136 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18,
#line 1136 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19)
#line 1136 "trailing_analysis.m"
{
#line 1140 "trailing_analysis.m"
  {
#line 1140 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1140 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ShouldWrite_12;

#line 1141 "trailing_analysis.m"
    {
#line 1141 "trailing_analysis.m"
      transform_hlds__intermod__should_write_trailing_info_6_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PredId_8, transform_hlds__trailing_analysis__ProcId_10, transform_hlds__trailing_analysis__PredInfo_9, (MR_Integer) 0, &transform_hlds__trailing_analysis__ShouldWrite_12);
    }
#line 1150 "trailing_analysis.m"
#line 1150 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__ShouldWrite_12) {
#line 1150 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1150 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 1151 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18;
#line 1150 "trailing_analysis.m"
        break;
#line 1150 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1144 "trailing_analysis.m"
        {
#line 1144 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__PPId_13;
#line 1144 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Status_14;
#line 1144 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ResultStatus_15;
#line 1144 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_16;
#line 1144 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__FuncId_17;
#line 1144 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_22_22;
#line 1144 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcInfo_30;
#line 1144 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31;
#line 1158 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___PredInfo_29;

#line 1145 "trailing_analysis.m"
          {
#line 1145 "trailing_analysis.m"
            transform_hlds__trailing_analysis__PPId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__PPId_13, 0) = ((MR_Box) (transform_hlds__trailing_analysis__PredId_8));
#line 1145 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__PPId_13, 1) = ((MR_Box) (transform_hlds__trailing_analysis__ProcId_10));
#line 1145 "trailing_analysis.m"
          }
#line 1158 "trailing_analysis.m"
          {
#line 1158 "trailing_analysis.m"
            hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PPId_13, &transform_hlds__trailing_analysis___PredInfo_29, &transform_hlds__trailing_analysis__ProcInfo_30);
          }
#line 1159 "trailing_analysis.m"
          {
#line 1159 "trailing_analysis.m"
            hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_30, &transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31);
          }
#line 1169 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1170 "trailing_analysis.m"
            {
#line 1173 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_14 = (MR_Integer) 0;
#line 1174 "trailing_analysis.m"
              transform_hlds__trailing_analysis__ResultStatus_15 = (MR_Integer) 2;
#line 1170 "trailing_analysis.m"
            }
#line 1169 "trailing_analysis.m"
          else
#line 1161 "trailing_analysis.m"
            {
#line 1161 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31, (MR_Integer) 0)));
#line 1161 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__MaybeResultStatus_33;

#line 1162 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_32, (MR_Integer) 0)));
#line 1162 "trailing_analysis.m"
              transform_hlds__trailing_analysis__MaybeResultStatus_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_32, (MR_Integer) 1)));
#line 1165 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__MaybeResultStatus_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "trailing_analysis.m"
                {
#line 1167 "trailing_analysis.m"
                  {
#line 1167 "trailing_analysis.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.lookup_proc_trailing_info\'/4", (MR_String) "no result status");
#line 1167 "trailing_analysis.m"
                    return;
                  }
#line 1166 "trailing_analysis.m"
                }
#line 1165 "trailing_analysis.m"
              else
#line 1164 "trailing_analysis.m"
                transform_hlds__trailing_analysis__ResultStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResultStatus_33, (MR_Integer) 0)));
#line 1161 "trailing_analysis.m"
            }
#line 1147 "trailing_analysis.m"
          {
#line 1147 "trailing_analysis.m"
            transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PPId_13, &transform_hlds__trailing_analysis__ModuleName_16, &transform_hlds__trailing_analysis__FuncId_17);
          }
#line 1148 "trailing_analysis.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1149 "trailing_analysis.m"
          transform_hlds__trailing_analysis__V_22_22 = (MR_Word) transform_hlds__trailing_analysis__Status_14;
#line 1148 "trailing_analysis.m"
          {
#line 1148 "trailing_analysis.m"
            analysis__record_result_7_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__ModuleName_16, transform_hlds__trailing_analysis__FuncId_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (transform_hlds__trailing_analysis__V_22_22)), transform_hlds__trailing_analysis__ResultStatus_15, transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18, transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19);
          }
#line 1144 "trailing_analysis.m"
        }
#line 1150 "trailing_analysis.m"
        break;
#line 1150 "trailing_analysis.m"
    }
#line 1140 "trailing_analysis.m"
  }
#line 1136 "trailing_analysis.m"
}

#line 1133 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
#line 1133 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1133 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1133 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1133 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1133 "trailing_analysis.m"
{
#line 1133 "trailing_analysis.m"
  {
#line 1133 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1133 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19;

#line 1133 "trailing_analysis.m"
    {
#line 1133 "trailing_analysis.m"
      transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19);
    }
#line 1133 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19));
#line 1133 "trailing_analysis.m"
  }
#line 1133 "trailing_analysis.m"
}

#line 1127 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
#line 1127 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 1127 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_6,
#line 1127 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10,
#line 1127 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11)
#line 1127 "trailing_analysis.m"
{
#line 1130 "trailing_analysis.m"
  {
#line 1130 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1130 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo_8;
#line 1130 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcIds_9;
#line 1130 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_12_12;
#line 1133 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11;

#line 1131 "trailing_analysis.m"
    {
#line 1131 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__PredId_6, &transform_hlds__trailing_analysis__PredInfo_8);
    }
#line 1132 "trailing_analysis.m"
    {
#line 1132 "trailing_analysis.m"
      transform_hlds__trailing_analysis__ProcIds_9 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__trailing_analysis__PredInfo_8);
    }
#line 1133 "trailing_analysis.m"
    {
#line 1133 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[3]));
#line 1133 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 1) = ((MR_Box) (transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1));
#line 1133 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1133 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 1133 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 4) = ((MR_Box) (transform_hlds__trailing_analysis__PredId_6));
#line 1133 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 5) = ((MR_Box) (transform_hlds__trailing_analysis__PredInfo_8));
#line 1133 "trailing_analysis.m"
    }
#line 1133 "trailing_analysis.m"
    {
#line 1133 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__trailing_analysis__V_12_12, transform_hlds__trailing_analysis__ProcIds_9, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10)), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11);
    }
#line 1133 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11 = ((MR_Word) transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11);
#line 1130 "trailing_analysis.m"
  }
#line 1127 "trailing_analysis.m"
}

#line 1092 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
#line 1092 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 1092 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_7,
#line 1092 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_8,
#line 1092 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12,
#line 1092 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13)
#line 1092 "trailing_analysis.m"
{
#line 1095 "trailing_analysis.m"
  {
#line 1095 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1095 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__AnalysisInfo0_10;
#line 1095 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__AnalysisInfo_11;
#line 1095 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ModuleName_22;
#line 1095 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__FuncId_23;
#line 1095 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeBestStatus_25;

#line 1096 "trailing_analysis.m"
    {
#line 1096 "trailing_analysis.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__trailing_analysis__AnalysisInfo0_10);
    }
#line 1107 "trailing_analysis.m"
    {
#line 1107 "trailing_analysis.m"
      transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__trailing_analysis__PPId_6, &transform_hlds__trailing_analysis__ModuleName_22, &transform_hlds__trailing_analysis__FuncId_23);
    }
#line 1108 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1110 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1109 "trailing_analysis.m"
    {
#line 1109 "trailing_analysis.m"
      analysis__lookup_best_result_6_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__AnalysisInfo0_10, transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trailing_analysis__MaybeBestStatus_25);
    }
#line 1116 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeBestStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1117 "trailing_analysis.m"
      {
#line 1117 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeClassInfo_for_analysis_40 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0];
#line 1117 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__Answer_28;
#line 74 "analysis.int"
        MR_Box MR_CALL (* transform_hlds__trailing_analysis__func_0)(MR_Box, MR_Box);
#line 74 "analysis.int"
        MR_Box transform_hlds__trailing_analysis__conv1_Answer_28;

#line 1120 "trailing_analysis.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 74 "analysis.int"
        transform_hlds__trailing_analysis__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__TypeClassInfo_for_analysis_40, (MR_Integer) 0)), (MR_Integer) 9)));
#line 74 "analysis.int"
        {
#line 74 "analysis.int"
          transform_hlds__trailing_analysis__conv1_Answer_28 = transform_hlds__trailing_analysis__func_0(((MR_Box) transform_hlds__trailing_analysis__TypeClassInfo_for_analysis_40), ((MR_Box) ((MR_Integer) 0)));
        }
#line 74 "analysis.int"
        transform_hlds__trailing_analysis__Answer_28 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Answer_28);
#line 1121 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_7 = (MR_Word) transform_hlds__trailing_analysis__Answer_28;
#line 1122 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__AnalysisStatus_8 = (MR_Integer) 2;
#line 1123 "trailing_analysis.m"
        {
#line 1123 "trailing_analysis.m"
          analysis__record_request_6_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_3[0], (MR_String) "trail_usage", transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), transform_hlds__trailing_analysis__AnalysisInfo0_10, &transform_hlds__trailing_analysis__AnalysisInfo_11);
        }
#line 1117 "trailing_analysis.m"
      }
#line 1116 "trailing_analysis.m"
    else
#line 1113 "trailing_analysis.m"
      {
#line 1113 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeBestStatus_25, (MR_Integer) 0)));
#line 1113 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_33_33, (MR_Integer) 1)));
#line 1114 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_36_36;

#line 1112 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__AnalysisStatus_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_33_33, (MR_Integer) 2)));
#line 1113 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_7 = (MR_Word) transform_hlds__trailing_analysis__V_34_34;
#line 1114 "trailing_analysis.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1114 "trailing_analysis.m"
        {
#line 1114 "trailing_analysis.m"
          analysis__record_dependency_7_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__trailing_analysis__AnalysisInfo0_10, &transform_hlds__trailing_analysis__AnalysisInfo_11);
        }
#line 1113 "trailing_analysis.m"
      }
#line 1099 "trailing_analysis.m"
    {
#line 1099 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__trailing_analysis__AnalysisInfo_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13);
    }
#line 1095 "trailing_analysis.m"
  }
#line 1092 "trailing_analysis.m"
}

#line 1020 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
#line 1020 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1020 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15,
#line 1020 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16,
#line 1020 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1020 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 1020 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18)
#line 1020 "trailing_analysis.m"
{
#line 1023 "trailing_analysis.m"
  {
#line 1023 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1023 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 0)));
#line 1023 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 1)));
#line 1023 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 2)));
#line 1023 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Goal_14;
#line 1023 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal0_13, (MR_Integer) 0)));
#line 1023 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal0_13, (MR_Integer) 1)));
#line 1023 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_31;
#line 1023 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_32;

#line 834 "trailing_analysis.m"
    {
#line 834 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__GoalInfo0_30, transform_hlds__trailing_analysis__GoalExpr0_29, &transform_hlds__trailing_analysis__GoalExpr_31, transform_hlds__trailing_analysis__Status_9, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);
    }
#line 840 "trailing_analysis.m"
#line 840 "trailing_analysis.m"
    switch (*transform_hlds__trailing_analysis__Status_9) {
#line 840 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 840 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 840 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 844 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_32 = transform_hlds__trailing_analysis__GoalInfo0_30;
#line 840 "trailing_analysis.m"
        break;
#line 840 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 837 "trailing_analysis.m"
        {
#line 838 "trailing_analysis.m"
          {
#line 838 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_30, &transform_hlds__trailing_analysis__GoalInfo_32);
          }
#line 837 "trailing_analysis.m"
        }
#line 840 "trailing_analysis.m"
        break;
#line 840 "trailing_analysis.m"
    }
#line 846 "trailing_analysis.m"
    {
#line 846 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 846 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_14, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_31));
#line 846 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_14, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_32));
#line 846 "trailing_analysis.m"
    }
#line 1026 "trailing_analysis.m"
    {
#line 1026 "trailing_analysis.m"
      MR_Word base;
#line 1026 "trailing_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16 = base;
#line 1026 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__MainConsId_11));
#line 1026 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__OtherConsIds_12));
#line 1026 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__Goal_14));
#line 1026 "trailing_analysis.m"
    }
#line 1023 "trailing_analysis.m"
  }
#line 1020 "trailing_analysis.m"
}

#line 1017 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
#line 1017 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1017 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1017 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1017 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1017 "trailing_analysis.m"
{
#line 1017 "trailing_analysis.m"
  {
#line 1017 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1017 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 1017 "trailing_analysis.m"
    {
#line 1017 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 1017 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 1017 "trailing_analysis.m"
  }
#line 1017 "trailing_analysis.m"
}

#line 1015 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
#line 1015 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1015 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1015 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1015 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1015 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1015 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 1015 "trailing_analysis.m"
{
#line 1015 "trailing_analysis.m"
  {
#line 1015 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1015 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16;
#line 1015 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_Status_9;
#line 1015 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 1015 "trailing_analysis.m"
    {
#line 1015 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16, &transform_hlds__trailing_analysis__conv1_Status_9, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 1015 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16));
#line 1015 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_Status_9));
#line 1015 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 1015 "trailing_analysis.m"
  }
#line 1015 "trailing_analysis.m"
}

#line 1011 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
#line 1011 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1011 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12,
#line 1011 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13,
#line 1011 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1011 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 1011 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15)
#line 1011 "trailing_analysis.m"
{
#line 1014 "trailing_analysis.m"
  {
#line 1014 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1014 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_26_26;
#line 1014 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 1014 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Statuses_11;
#line 1014 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_16_16;
#line 1015 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15;
#line 1017 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Status_9;

#line 1015 "trailing_analysis.m"
    {
#line 1015 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
#line 1015 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1));
#line 1015 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1015 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 3) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_7));
#line 1015 "trailing_analysis.m"
    }
#line 3925 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 3927 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 1015 "trailing_analysis.m"
    {
#line 1015 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13, &transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
    }
#line 1015 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
#line 1017 "trailing_analysis.m"
    {
#line 1017 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[9], transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_9);
    }
#line 1017 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Status_9 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_9);
#line 1014 "trailing_analysis.m"
  }
#line 1011 "trailing_analysis.m"
}

#line 1008 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
#line 1008 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1008 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1008 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1008 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1008 "trailing_analysis.m"
{
#line 1008 "trailing_analysis.m"
  {
#line 1008 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1008 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 1008 "trailing_analysis.m"
    {
#line 1008 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 1008 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 1008 "trailing_analysis.m"
  }
#line 1008 "trailing_analysis.m"
}

#line 1006 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
#line 1006 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1006 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1006 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1006 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1006 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1006 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 1006 "trailing_analysis.m"
{
#line 1006 "trailing_analysis.m"
  {
#line 1006 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1006 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16;
#line 1006 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_Status_9;
#line 1006 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 1006 "trailing_analysis.m"
    {
#line 1006 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16, &transform_hlds__trailing_analysis__conv1_Status_9, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 1006 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16));
#line 1006 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_Status_9));
#line 1006 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 1006 "trailing_analysis.m"
  }
#line 1006 "trailing_analysis.m"
}

#line 1001 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
#line 1001 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1001 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12,
#line 1001 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13,
#line 1001 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1001 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 1001 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15)
#line 1001 "trailing_analysis.m"
{
#line 1005 "trailing_analysis.m"
  {
#line 1005 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1005 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_26_26;
#line 1005 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 1005 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Statuses_11;
#line 1005 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_16_16;
#line 1006 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15;
#line 1008 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Status_9;

#line 1006 "trailing_analysis.m"
    {
#line 1006 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[1]));
#line 1006 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1));
#line 1006 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1006 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 3) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_7));
#line 1006 "trailing_analysis.m"
    }
#line 4072 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 4074 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 1006 "trailing_analysis.m"
    {
#line 1006 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13, &transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
    }
#line 1006 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
#line 1008 "trailing_analysis.m"
    {
#line 1008 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[8], transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_9);
    }
#line 1008 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Status_9 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_9);
#line 1005 "trailing_analysis.m"
  }
#line 1001 "trailing_analysis.m"
}

#line 876 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
#line 876 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 876 "trailing_analysis.m"
{
#line 876 "trailing_analysis.m"
  {
#line 876 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 876 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0, 1);
#line 876 "trailing_analysis.m"
  }
#line 876 "trailing_analysis.m"
}

#line 876 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
#line 876 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 876 "trailing_analysis.m"
{
#line 876 "trailing_analysis.m"
  {
#line 876 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 876 "trailing_analysis.m"
    {
#line 883 "trailing_analysis.m"
      MR_String transform_hlds__trailing_analysis__V_50_50;

#line 883 "trailing_analysis.m"
      {
#line 883 "trailing_analysis.m"
        mdbcomp__prim_data__special_pred_name_arity_4_p_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139, &transform_hlds__trailing_analysis__V_50_50, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140);
      }
#line 883 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (strcmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139) == 0);
#line 876 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 876 "trailing_analysis.m"
        {
#line 883 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48 == (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140);
#line 883 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 883 "trailing_analysis.m"
            {
#line 883 "trailing_analysis.m"
              transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(transform_hlds__trailing_analysis__env_ptr);
            }
#line 876 "trailing_analysis.m"
        }
#line 876 "trailing_analysis.m"
    }
#line 876 "trailing_analysis.m"
  }
#line 876 "trailing_analysis.m"
}

#line 876 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
#line 876 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 876 "trailing_analysis.m"
{
#line 876 "trailing_analysis.m"
  {
#line 876 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 876 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0) == 0)
#line 876 "trailing_analysis.m"
      {
#line 876 "trailing_analysis.m"
        {
#line 876 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_46;

#line 876 "trailing_analysis.m"
          {
#line 876 "trailing_analysis.m"
            transform_hlds__trailing_analysis__ModuleName_46 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 877 "trailing_analysis.m"
          {
#line 877 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__trailing_analysis__ModuleName_46);
          }
#line 876 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 876 "trailing_analysis.m"
            {
#line 878 "trailing_analysis.m"
              {
#line 878 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47 = hlds__hlds_pred__pred_info_name_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
              }
#line 879 "trailing_analysis.m"
              {
#line 879 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48 = hlds__hlds_pred__pred_info_orig_arity_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
              }
#line 881 "trailing_analysis.m"
              {
#line 881 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__slot_1 = (MR_Integer) 0;

#line 881 "trailing_analysis.m"
                do
#line 881 "trailing_analysis.m"
                  {
#line 881 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49 = ((&transform_hlds__trailing_analysis_vector_common_9[2 + transform_hlds__trailing_analysis__slot_1]))->transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 881 "trailing_analysis.m"
                    {
#line 881 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(transform_hlds__trailing_analysis__env_ptr);
                    }
#line 881 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__slot_1 = (transform_hlds__trailing_analysis__slot_1 + (MR_Integer) 1);
#line 881 "trailing_analysis.m"
                  }
#line 881 "trailing_analysis.m"
                while ((transform_hlds__trailing_analysis__slot_1 < (MR_Integer) 2));
#line 881 "trailing_analysis.m"
              }
#line 876 "trailing_analysis.m"
            }
#line 876 "trailing_analysis.m"
        }
#line 876 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 876 "trailing_analysis.m"
      }
#line 876 "trailing_analysis.m"
    else
#line 876 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 876 "trailing_analysis.m"
  }
#line 876 "trailing_analysis.m"
}

#line 848 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
#line 848 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_8,
#line 848 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__GoalInfo_9,
#line 848 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109,
#line 848 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110,
#line 848 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_11,
#line 848 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111,
#line 848 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112)
#line 848 "trailing_analysis.m"
{
#line 848 "trailing_analysis.m"
  {
#line 848 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 854 "trailing_analysis.m"
#line 854 "trailing_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109)) {
#line 854 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 854 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 978 "trailing_analysis.m"
        {
#line 978 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SubGoal0_97 = (MR_Word) MR_body(((MR_Word) transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109), (MR_Integer) 0);
#line 978 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SubGoal_98;

#line 979 "trailing_analysis.m"
          {
#line 979 "trailing_analysis.m"
            transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__SubGoal0_97, &transform_hlds__trailing_analysis__SubGoal_98, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
          }
#line 980 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__trailing_analysis__SubGoal_98);
#line 978 "trailing_analysis.m"
        }
#line 854 "trailing_analysis.m"
        break;
#line 854 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 854 "trailing_analysis.m"
        {
#line 854 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 854 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)));
#line 854 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 854 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 854 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));

#line 861 "trailing_analysis.m"
#line 861 "trailing_analysis.m"
          switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Kind_16)) {
#line 861 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 861 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 856 "trailing_analysis.m"
              {
#line 856 "trailing_analysis.m"
              }
#line 861 "trailing_analysis.m"
              break;
#line 861 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 857 "trailing_analysis.m"
              {
#line 857 "trailing_analysis.m"
              }
#line 861 "trailing_analysis.m"
              break;
#line 861 "trailing_analysis.m"
            case (MR_Integer) 2:
#line 858 "trailing_analysis.m"
              {
#line 858 "trailing_analysis.m"
              }
#line 861 "trailing_analysis.m"
              break;
#line 861 "trailing_analysis.m"
            case (MR_Integer) 3:
#line 861 "trailing_analysis.m"
#line 861 "trailing_analysis.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Kind_16, (MR_Integer) 0)))) {
#line 861 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 861 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 859 "trailing_analysis.m"
                  {
#line 859 "trailing_analysis.m"
                  }
#line 861 "trailing_analysis.m"
                  break;
#line 861 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 862 "trailing_analysis.m"
                  {
#line 863 "trailing_analysis.m"
                    {
#line 863 "trailing_analysis.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "complicated unify");
#line 863 "trailing_analysis.m"
                      return;
                    }
#line 862 "trailing_analysis.m"
                  }
#line 861 "trailing_analysis.m"
                  break;
#line 861 "trailing_analysis.m"
              }
#line 861 "trailing_analysis.m"
              break;
#line 861 "trailing_analysis.m"
          }
#line 865 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 854 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 854 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 854 "trailing_analysis.m"
        }
#line 854 "trailing_analysis.m"
        break;
#line 854 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 867 "trailing_analysis.m"
        {
#line 867 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallPredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)));
#line 867 "trailing_analysis.m"
          MR_Integer transform_hlds__trailing_analysis__CallProcId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 867 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 867 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallPPId_44;
#line 867 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 867 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 867 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));

#line 868 "trailing_analysis.m"
          {
#line 868 "trailing_analysis.m"
            transform_hlds__trailing_analysis__CallPPId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 868 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_44, 0) = ((MR_Box) (transform_hlds__trailing_analysis__CallPredId_38));
#line 868 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_44, 1) = ((MR_Box) (transform_hlds__trailing_analysis__CallProcId_39));
#line 868 "trailing_analysis.m"
          }
#line 869 "trailing_analysis.m"
          {
#line 869 "trailing_analysis.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__CallPredId_38, &(transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 871 "trailing_analysis.m"
          {
#line 871 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 870 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 873 "trailing_analysis.m"
            {
#line 873 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 873 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 873 "trailing_analysis.m"
            }
#line 870 "trailing_analysis.m"
          else
#line 874 "trailing_analysis.m"
            {
#line 876 "trailing_analysis.m"
              {
#line 876 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(&transform_hlds__trailing_analysis__env);
              }
#line 874 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 885 "trailing_analysis.m"
                {
#line 885 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 885 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 885 "trailing_analysis.m"
                }
#line 874 "trailing_analysis.m"
              else
#line 886 "trailing_analysis.m"
                {
#line 886 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Status0_51;

#line 889 "trailing_analysis.m"
                  {
#line 889 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45, &transform_hlds__trailing_analysis__Status0_51);
                  }
#line 886 "trailing_analysis.m"
                  if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 891 "trailing_analysis.m"
                    {
#line 891 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__Status0_51;
#line 891 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 891 "trailing_analysis.m"
                    }
#line 886 "trailing_analysis.m"
                  else
#line 893 "trailing_analysis.m"
                    {
#line 893 "trailing_analysis.m"
                      MR_Word transform_hlds__trailing_analysis__Globals_52;
#line 893 "trailing_analysis.m"
                      MR_Word transform_hlds__trailing_analysis__IntermodAnalysis_53;

#line 893 "trailing_analysis.m"
                      {
#line 893 "trailing_analysis.m"
                        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, &transform_hlds__trailing_analysis__Globals_52);
                      }
#line 894 "trailing_analysis.m"
                      {
#line 894 "trailing_analysis.m"
                        libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_52, (MR_Integer) 326, &transform_hlds__trailing_analysis__IntermodAnalysis_53);
                      }
#line 897 "trailing_analysis.m"
                      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__IntermodAnalysis_53 == (MR_Integer) 1);
#line 897 "trailing_analysis.m"
                      if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 898 "trailing_analysis.m"
                        {
#line 898 "trailing_analysis.m"
                          (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
                        }
#line 896 "trailing_analysis.m"
                      if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 901 "trailing_analysis.m"
                        {
#line 901 "trailing_analysis.m"
                          MR_Word transform_hlds__trailing_analysis__Result_54;
#line 901 "trailing_analysis.m"
                          MR_Word transform_hlds__trailing_analysis__AnalysisStatus_55;

#line 900 "trailing_analysis.m"
                          {
#line 900 "trailing_analysis.m"
                            transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(transform_hlds__trailing_analysis__CallPPId_44, &transform_hlds__trailing_analysis__Result_54, &transform_hlds__trailing_analysis__AnalysisStatus_55, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
                          }
#line 908 "trailing_analysis.m"
#line 908 "trailing_analysis.m"
                          switch (transform_hlds__trailing_analysis__AnalysisStatus_55) {
#line 908 "trailing_analysis.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 908 "trailing_analysis.m"
                            case (MR_Integer) 0:
#line 907 "trailing_analysis.m"
                              *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 908 "trailing_analysis.m"
                              break;
#line 908 "trailing_analysis.m"
                            case (MR_Integer) 2:
#line 908 "trailing_analysis.m"
                            case (MR_Integer) 1:
#line 916 "trailing_analysis.m"
#line 916 "trailing_analysis.m"
                              switch (transform_hlds__trailing_analysis__Result_54) {
#line 916 "trailing_analysis.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 916 "trailing_analysis.m"
                                case (MR_Integer) 2:
#line 914 "trailing_analysis.m"
                                  {
#line 914 "trailing_analysis.m"
                                    *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112, transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__CallArgs_40);
                                  }
#line 916 "trailing_analysis.m"
                                  break;
#line 916 "trailing_analysis.m"
                                case (MR_Integer) 0:
#line 916 "trailing_analysis.m"
                                case (MR_Integer) 1:
#line 920 "trailing_analysis.m"
                                  *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__Result_54;
#line 916 "trailing_analysis.m"
                                  break;
#line 916 "trailing_analysis.m"
                              }
#line 908 "trailing_analysis.m"
                              break;
#line 908 "trailing_analysis.m"
                          }
#line 901 "trailing_analysis.m"
                        }
#line 896 "trailing_analysis.m"
                      else
#line 925 "trailing_analysis.m"
                        {
#line 925 "trailing_analysis.m"
                          {
#line 925 "trailing_analysis.m"
                            transform_hlds__trailing_analysis__trail_check_call_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__CallPPId_44, transform_hlds__trailing_analysis__CallArgs_40, transform_hlds__trailing_analysis__Status_11);
                          }
#line 925 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 925 "trailing_analysis.m"
                        }
#line 893 "trailing_analysis.m"
                    }
#line 886 "trailing_analysis.m"
                }
#line 874 "trailing_analysis.m"
            }
#line 867 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 867 "trailing_analysis.m"
        }
#line 854 "trailing_analysis.m"
        break;
#line 854 "trailing_analysis.m"
      case (MR_Integer) 3:
#line 854 "trailing_analysis.m"
#line 854 "trailing_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)))) {
#line 854 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 854 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 934 "trailing_analysis.m"
            {
#line 934 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__GenericCall_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 934 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 934 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 934 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 934 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));

#line 938 "trailing_analysis.m"
#line 938 "trailing_analysis.m"
              switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__GenericCall_63)) {
#line 938 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 938 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 937 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 938 "trailing_analysis.m"
                  break;
#line 938 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 940 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 938 "trailing_analysis.m"
                  break;
#line 938 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 943 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 938 "trailing_analysis.m"
                  break;
#line 938 "trailing_analysis.m"
                case (MR_Integer) 3:
#line 946 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 938 "trailing_analysis.m"
                  break;
#line 938 "trailing_analysis.m"
              }
#line 934 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 934 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 934 "trailing_analysis.m"
            }
#line 854 "trailing_analysis.m"
            break;
#line 854 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 930 "trailing_analysis.m"
            {
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Attributes_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 930 "trailing_analysis.m"
              MR_Integer transform_hlds__trailing_analysis__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 6)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 7)));

#line 931 "trailing_analysis.m"
              {
#line 931 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(transform_hlds__trailing_analysis__Attributes_56);
              }
#line 930 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 930 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 930 "trailing_analysis.m"
            }
#line 854 "trailing_analysis.m"
            break;
#line 854 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 949 "trailing_analysis.m"
            {
#line 949 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ConjType_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 949 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Conjuncts0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 949 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Conjuncts_80;

#line 950 "trailing_analysis.m"
              {
#line 950 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Conjuncts0_79, &transform_hlds__trailing_analysis__Conjuncts_80, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 952 "trailing_analysis.m"
              {
#line 952 "trailing_analysis.m"
                MR_Word base;
#line 952 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 952 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 952 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 952 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__ConjType_78));
#line 952 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__Conjuncts_80));
#line 952 "trailing_analysis.m"
              }
#line 949 "trailing_analysis.m"
            }
#line 854 "trailing_analysis.m"
            break;
#line 854 "trailing_analysis.m"
          case (MR_Integer) 3:
#line 954 "trailing_analysis.m"
            {
#line 954 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Disjuncts0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 954 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Disjuncts_82;

#line 955 "trailing_analysis.m"
              {
#line 955 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Disjuncts0_81, &transform_hlds__trailing_analysis__Disjuncts_82, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 957 "trailing_analysis.m"
              {
#line 957 "trailing_analysis.m"
                MR_Word base;
#line 957 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 957 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 957 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Disjuncts_82));
#line 957 "trailing_analysis.m"
              }
#line 954 "trailing_analysis.m"
            }
#line 854 "trailing_analysis.m"
            break;
#line 854 "trailing_analysis.m"
          case (MR_Integer) 4:
#line 959 "trailing_analysis.m"
            {
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__CanFail_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Cases0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Cases_86;

#line 960 "trailing_analysis.m"
              {
#line 960 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Cases0_85, &transform_hlds__trailing_analysis__Cases_86, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 961 "trailing_analysis.m"
              {
#line 961 "trailing_analysis.m"
                MR_Word base;
#line 961 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 961 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 961 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 961 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Var_83));
#line 961 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__CanFail_84));
#line 961 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Cases_86));
#line 961 "trailing_analysis.m"
              }
#line 959 "trailing_analysis.m"
            }
#line 854 "trailing_analysis.m"
            break;
#line 854 "trailing_analysis.m"
          case (MR_Integer) 5:
#line 982 "trailing_analysis.m"
            {
#line 982 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Reason_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 982 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__InnerGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 983 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_116_116;
#line 983 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_101_101;

#line 983 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__trailing_analysis__Reason_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 983 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 983 "trailing_analysis.m"
                {
#line 983 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 1)));
#line 983 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 2)));
#line 983 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_116_116 == (MR_Integer) 1);
#line 983 "trailing_analysis.m"
                }
#line 983 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 984 "trailing_analysis.m"
                {
#line 984 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 984 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 984 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 984 "trailing_analysis.m"
                }
#line 983 "trailing_analysis.m"
              else
#line 986 "trailing_analysis.m"
                {
#line 986 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerGoal_103;
#line 986 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerGoalInfo_105;
#line 986 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_106;
#line 986 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_107;
#line 986 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Status0_136;
#line 989 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__V_104_104;

#line 987 "trailing_analysis.m"
                  {
#line 987 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__InnerGoal0_100, &transform_hlds__trailing_analysis__InnerGoal_103, &transform_hlds__trailing_analysis__Status0_136, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
                  }
#line 989 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_103, (MR_Integer) 0)));
#line 989 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__InnerGoalInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_103, (MR_Integer) 1)));
#line 990 "trailing_analysis.m"
                  {
#line 990 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__InnerCodeModel_106 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__InnerGoalInfo_105);
                  }
#line 991 "trailing_analysis.m"
                  {
#line 991 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__OuterCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__GoalInfo_9);
                  }
#line 992 "trailing_analysis.m"
                  {
#line 992 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(transform_hlds__trailing_analysis__InnerCodeModel_106, transform_hlds__trailing_analysis__OuterCodeModel_107, transform_hlds__trailing_analysis__Status0_136);
                  }
#line 994 "trailing_analysis.m"
                  {
#line 994 "trailing_analysis.m"
                    MR_Word base;
#line 994 "trailing_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 994 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 994 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 994 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Reason_99));
#line 994 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__InnerGoal_103));
#line 994 "trailing_analysis.m"
                  }
#line 986 "trailing_analysis.m"
                }
#line 982 "trailing_analysis.m"
            }
#line 854 "trailing_analysis.m"
            break;
#line 854 "trailing_analysis.m"
          case (MR_Integer) 6:
#line 963 "trailing_analysis.m"
            {
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Vars_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__If0_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Then0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Else0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__If_91;
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__IfStatus_92;
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Then_93;
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ThenStatus_94;
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Else_95;
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ElseStatus_96;
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121;
#line 963 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122;

#line 964 "trailing_analysis.m"
              {
#line 964 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__If0_88, &transform_hlds__trailing_analysis__If_91, &transform_hlds__trailing_analysis__IfStatus_92, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121);
              }
#line 965 "trailing_analysis.m"
              {
#line 965 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Then0_89, &transform_hlds__trailing_analysis__Then_93, &transform_hlds__trailing_analysis__ThenStatus_94, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122);
              }
#line 966 "trailing_analysis.m"
              {
#line 966 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Else0_90, &transform_hlds__trailing_analysis__Else_95, &transform_hlds__trailing_analysis__ElseStatus_96, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 968 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__IfStatus_92 == (MR_Integer) 1);
#line 968 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 968 "trailing_analysis.m"
                {
#line 969 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__ThenStatus_94 == (MR_Integer) 1);
#line 968 "trailing_analysis.m"
                  if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 970 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__ElseStatus_96 == (MR_Integer) 1);
#line 968 "trailing_analysis.m"
                }
#line 967 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 972 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 967 "trailing_analysis.m"
              else
#line 974 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 976 "trailing_analysis.m"
              {
#line 976 "trailing_analysis.m"
                MR_Word base;
#line 976 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 976 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 976 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 976 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Vars_87));
#line 976 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__If_91));
#line 976 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Then_93));
#line 976 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__trailing_analysis__Else_95));
#line 976 "trailing_analysis.m"
              }
#line 963 "trailing_analysis.m"
            }
#line 854 "trailing_analysis.m"
            break;
#line 854 "trailing_analysis.m"
          case (MR_Integer) 7:
#line 997 "trailing_analysis.m"
            {
#line 998 "trailing_analysis.m"
              {
#line 998 "trailing_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "shorthand");
#line 998 "trailing_analysis.m"
                return;
              }
#line 997 "trailing_analysis.m"
            }
#line 854 "trailing_analysis.m"
            break;
#line 854 "trailing_analysis.m"
        }
#line 854 "trailing_analysis.m"
        break;
#line 854 "trailing_analysis.m"
    }
#line 848 "trailing_analysis.m"
  }
#line 848 "trailing_analysis.m"
}

#line 829 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
#line 829 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 829 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15,
#line 829 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16,
#line 829 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 829 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 829 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18)
#line 829 "trailing_analysis.m"
{
#line 832 "trailing_analysis.m"
  {
#line 832 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 832 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15, (MR_Integer) 0)));
#line 832 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15, (MR_Integer) 1)));
#line 832 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_13;
#line 832 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_14;

#line 834 "trailing_analysis.m"
    {
#line 834 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__GoalInfo0_12, transform_hlds__trailing_analysis__GoalExpr0_11, &transform_hlds__trailing_analysis__GoalExpr_13, transform_hlds__trailing_analysis__Status_9, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);
    }
#line 840 "trailing_analysis.m"
#line 840 "trailing_analysis.m"
    switch (*transform_hlds__trailing_analysis__Status_9) {
#line 840 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 840 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 840 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 844 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_14 = transform_hlds__trailing_analysis__GoalInfo0_12;
#line 840 "trailing_analysis.m"
        break;
#line 840 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 837 "trailing_analysis.m"
        {
#line 838 "trailing_analysis.m"
          {
#line 838 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_12, &transform_hlds__trailing_analysis__GoalInfo_14);
          }
#line 837 "trailing_analysis.m"
        }
#line 840 "trailing_analysis.m"
        break;
#line 840 "trailing_analysis.m"
    }
#line 846 "trailing_analysis.m"
    {
#line 846 "trailing_analysis.m"
      MR_Word base;
#line 846 "trailing_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 846 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16 = base;
#line 846 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_13));
#line 846 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_14));
#line 846 "trailing_analysis.m"
    }
#line 832 "trailing_analysis.m"
  }
#line 829 "trailing_analysis.m"
}

#line 816 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
#line 816 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_4,
#line 816 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 816 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12)
#line 816 "trailing_analysis.m"
{
#line 821 "trailing_analysis.m"
  {
#line 821 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo_8;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__VarTypes_9;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___Status_10;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_27;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_28;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_29;
#line 821 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_30;

#line 821 "trailing_analysis.m"
    {
#line 821 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__PPId_4, &transform_hlds__trailing_analysis__PredInfo_8, &transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13);
    }
#line 822 "trailing_analysis.m"
    {
#line 822 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14);
    }
#line 823 "trailing_analysis.m"
    {
#line 823 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__VarTypes_9);
    }
#line 833 "trailing_analysis.m"
    transform_hlds__trailing_analysis__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14, (MR_Integer) 0)));
#line 833 "trailing_analysis.m"
    transform_hlds__trailing_analysis__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14, (MR_Integer) 1)));
#line 834 "trailing_analysis.m"
    {
#line 834 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__GoalInfo0_28, transform_hlds__trailing_analysis__GoalExpr0_27, &transform_hlds__trailing_analysis__GoalExpr_29, &transform_hlds__trailing_analysis___Status_10, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16);
    }
#line 840 "trailing_analysis.m"
#line 840 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis___Status_10) {
#line 840 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 840 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 840 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 844 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_30 = transform_hlds__trailing_analysis__GoalInfo0_28;
#line 840 "trailing_analysis.m"
        break;
#line 840 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 837 "trailing_analysis.m"
        {
#line 838 "trailing_analysis.m"
          {
#line 838 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_28, &transform_hlds__trailing_analysis__GoalInfo_30);
          }
#line 837 "trailing_analysis.m"
        }
#line 840 "trailing_analysis.m"
        break;
#line 840 "trailing_analysis.m"
    }
#line 846 "trailing_analysis.m"
    {
#line 846 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 846 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_29));
#line 846 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_30));
#line 846 "trailing_analysis.m"
    }
#line 825 "trailing_analysis.m"
    {
#line 825 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17);
    }
#line 826 "trailing_analysis.m"
    {
#line 826 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__trailing_analysis__PPId_4, transform_hlds__trailing_analysis__PredInfo_8, transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);
    }
#line 821 "trailing_analysis.m"
  }
#line 816 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 744 "trailing_analysis.m"
{
#line 744 "trailing_analysis.m"
  {
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 744 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9);
    }
#line 744 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9));
#line 744 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 744 "trailing_analysis.m"
{
#line 744 "trailing_analysis.m"
  {
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 744 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9);
    }
#line 744 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9));
#line 744 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 744 "trailing_analysis.m"
{
#line 744 "trailing_analysis.m"
  {
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 744 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9);
    }
#line 744 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9));
#line 744 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 744 "trailing_analysis.m"
{
#line 744 "trailing_analysis.m"
  {
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 744 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 744 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 744 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 771 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(
#line 771 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 771 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 771 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__TypeCtorCat_7)
#line 771 "trailing_analysis.m"
{
#line 782 "trailing_analysis.m"
  {
#line 782 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 782 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_8;

#line 782 "trailing_analysis.m"
#line 782 "trailing_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__TypeCtorCat_7)) {
#line 782 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 782 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 782 "trailing_analysis.m"
#line 782 "trailing_analysis.m"
        switch (MR_unmkbody(transform_hlds__trailing_analysis__TypeCtorCat_7)) {
#line 782 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 782 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 782 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 782 "trailing_analysis.m"
            break;
#line 782 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 792 "trailing_analysis.m"
            {
#line 792 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Args_22;
#line 793 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis___TypeCtor_18;
#line 795 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis___UnifyCompare_19;

#line 793 "trailing_analysis.m"
              {
#line 793 "trailing_analysis.m"
                parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_18, &transform_hlds__trailing_analysis__Args_22);
              }
#line 795 "trailing_analysis.m"
              {
#line 795 "trailing_analysis.m"
                transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_19);
              }
#line 794 "trailing_analysis.m"
              if (transform_hlds__trailing_analysis__succeeded)
#line 801 "trailing_analysis.m"
                transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 794 "trailing_analysis.m"
              else
#line 743 "trailing_analysis.m"
                {
#line 743 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__V_53_53;
#line 744 "trailing_analysis.m"
                  MR_Box transform_hlds__trailing_analysis__conv3_Status_8;

#line 744 "trailing_analysis.m"
                  {
#line 744 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 744 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2));
#line 744 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 744 "trailing_analysis.m"
                  }
#line 744 "trailing_analysis.m"
                  {
#line 744 "trailing_analysis.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_53_53, transform_hlds__trailing_analysis__Args_22, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv3_Status_8);
                  }
#line 744 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv3_Status_8);
#line 743 "trailing_analysis.m"
                }
#line 792 "trailing_analysis.m"
            }
#line 782 "trailing_analysis.m"
            break;
#line 782 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 782 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 782 "trailing_analysis.m"
            break;
#line 782 "trailing_analysis.m"
          case (MR_Integer) 3:
#line 785 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 2;
#line 782 "trailing_analysis.m"
            break;
#line 782 "trailing_analysis.m"
          case (MR_Integer) 4:
#line 782 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 782 "trailing_analysis.m"
            break;
#line 782 "trailing_analysis.m"
        }
#line 782 "trailing_analysis.m"
        break;
#line 782 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 783 "trailing_analysis.m"
        transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 782 "trailing_analysis.m"
        break;
#line 782 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 792 "trailing_analysis.m"
        {
#line 792 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Args_13;
#line 793 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___TypeCtor_12;
#line 795 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___UnifyCompare_14;

#line 793 "trailing_analysis.m"
          {
#line 793 "trailing_analysis.m"
            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_12, &transform_hlds__trailing_analysis__Args_13);
          }
#line 795 "trailing_analysis.m"
          {
#line 795 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_14);
          }
#line 794 "trailing_analysis.m"
          if (transform_hlds__trailing_analysis__succeeded)
#line 801 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 794 "trailing_analysis.m"
          else
#line 743 "trailing_analysis.m"
            {
#line 743 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_43_43;
#line 744 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_Status_8;

#line 744 "trailing_analysis.m"
              {
#line 744 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 744 "trailing_analysis.m"
              }
#line 744 "trailing_analysis.m"
              {
#line 744 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_43_43, transform_hlds__trailing_analysis__Args_13, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Status_8);
              }
#line 744 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Status_8);
#line 743 "trailing_analysis.m"
            }
#line 792 "trailing_analysis.m"
        }
#line 782 "trailing_analysis.m"
        break;
#line 782 "trailing_analysis.m"
      case (MR_Integer) 3:
#line 782 "trailing_analysis.m"
#line 782 "trailing_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__TypeCtorCat_7, (MR_Integer) 0)))) {
#line 782 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 782 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 783 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 782 "trailing_analysis.m"
            break;
#line 782 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 782 "trailing_analysis.m"
            {
#line 782 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__TypeCtorCat_7, (MR_Integer) 1)));

#line 782 "trailing_analysis.m"
#line 782 "trailing_analysis.m"
              switch (transform_hlds__trailing_analysis__V_39_39) {
#line 782 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 782 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 783 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 782 "trailing_analysis.m"
                  break;
#line 782 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 792 "trailing_analysis.m"
                  {
#line 792 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Args_34;
#line 793 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___TypeCtor_30;
#line 795 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___UnifyCompare_31;

#line 793 "trailing_analysis.m"
                    {
#line 793 "trailing_analysis.m"
                      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_30, &transform_hlds__trailing_analysis__Args_34);
                    }
#line 795 "trailing_analysis.m"
                    {
#line 795 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_31);
                    }
#line 794 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 801 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 794 "trailing_analysis.m"
                    else
#line 743 "trailing_analysis.m"
                      {
#line 743 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_63_63;
#line 744 "trailing_analysis.m"
                        MR_Box transform_hlds__trailing_analysis__conv5_Status_8;

#line 744 "trailing_analysis.m"
                        {
#line 744 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 744 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3));
#line 744 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 744 "trailing_analysis.m"
                        }
#line 744 "trailing_analysis.m"
                        {
#line 744 "trailing_analysis.m"
                          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_63_63, transform_hlds__trailing_analysis__Args_34, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_8);
                        }
#line 744 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_8);
#line 743 "trailing_analysis.m"
                      }
#line 792 "trailing_analysis.m"
                  }
#line 782 "trailing_analysis.m"
                  break;
#line 782 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 792 "trailing_analysis.m"
                  {
#line 792 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Args_28;
#line 793 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___TypeCtor_24;
#line 795 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___UnifyCompare_25;

#line 793 "trailing_analysis.m"
                    {
#line 793 "trailing_analysis.m"
                      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_24, &transform_hlds__trailing_analysis__Args_28);
                    }
#line 795 "trailing_analysis.m"
                    {
#line 795 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_25);
                    }
#line 794 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 801 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 794 "trailing_analysis.m"
                    else
#line 743 "trailing_analysis.m"
                      {
#line 743 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_73_73;
#line 744 "trailing_analysis.m"
                        MR_Box transform_hlds__trailing_analysis__conv7_Status_8;

#line 744 "trailing_analysis.m"
                        {
#line 744 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 744 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4));
#line 744 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 744 "trailing_analysis.m"
                        }
#line 744 "trailing_analysis.m"
                        {
#line 744 "trailing_analysis.m"
                          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_73_73, transform_hlds__trailing_analysis__Args_28, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv7_Status_8);
                        }
#line 744 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv7_Status_8);
#line 743 "trailing_analysis.m"
                      }
#line 792 "trailing_analysis.m"
                  }
#line 782 "trailing_analysis.m"
                  break;
#line 782 "trailing_analysis.m"
              }
#line 782 "trailing_analysis.m"
            }
#line 782 "trailing_analysis.m"
            break;
#line 782 "trailing_analysis.m"
        }
#line 782 "trailing_analysis.m"
        break;
#line 782 "trailing_analysis.m"
    }
#line 782 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_8;
#line 782 "trailing_analysis.m"
  }
#line 771 "trailing_analysis.m"
}

#line 755 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_f_0(
#line 755 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 755 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_5)
#line 755 "trailing_analysis.m"
{
#line 758 "trailing_analysis.m"
  {
#line 758 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 758 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_6;

#line 759 "trailing_analysis.m"
    {
#line 759 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
    }
#line 760 "trailing_analysis.m"
    if (!(transform_hlds__trailing_analysis__succeeded))
#line 760 "trailing_analysis.m"
      {
#line 760 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_is_existq_type_2_p_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
      }
#line 758 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 765 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Status_6 = (MR_Integer) 0;
#line 758 "trailing_analysis.m"
    else
#line 767 "trailing_analysis.m"
      {
#line 767 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeCtorCategory_7;

#line 767 "trailing_analysis.m"
        {
#line 767 "trailing_analysis.m"
          transform_hlds__trailing_analysis__TypeCtorCategory_7 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
        }
#line 768 "trailing_analysis.m"
        {
#line 768 "trailing_analysis.m"
          transform_hlds__trailing_analysis__Status_6 = transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5, transform_hlds__trailing_analysis__TypeCtorCategory_7);
        }
#line 767 "trailing_analysis.m"
      }
#line 758 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_6;
#line 758 "trailing_analysis.m"
  }
#line 755 "trailing_analysis.m"
}

#line 747 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_4_p_0(
#line 747 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 747 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 747 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8,
#line 747 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9)
#line 747 "trailing_analysis.m"
{
#line 750 "trailing_analysis.m"
  {
#line 750 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 750 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_10_10;

#line 751 "trailing_analysis.m"
    {
#line 751 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_10_10 = transform_hlds__trailing_analysis__trail_check_type_2_f_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6);
    }
#line 630 "trailing_analysis.m"
#line 630 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__V_10_10) {
#line 630 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 630 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 630 "trailing_analysis.m"
#line 630 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8) {
#line 630 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 630 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 635 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 2;
#line 630 "trailing_analysis.m"
            break;
#line 630 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 636 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 0;
#line 630 "trailing_analysis.m"
            break;
#line 630 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 633 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 2;
#line 630 "trailing_analysis.m"
            break;
#line 630 "trailing_analysis.m"
        }
#line 630 "trailing_analysis.m"
        break;
#line 630 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 631 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 0;
#line 630 "trailing_analysis.m"
        break;
#line 630 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 630 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8;
#line 630 "trailing_analysis.m"
        break;
#line 630 "trailing_analysis.m"
    }
#line 750 "trailing_analysis.m"
  }
#line 747 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 744 "trailing_analysis.m"
{
#line 744 "trailing_analysis.m"
  {
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 744 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 744 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 744 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0(
#line 741 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 741 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Types_5)
#line 741 "trailing_analysis.m"
{
#line 743 "trailing_analysis.m"
  {
#line 743 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 743 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_6;
#line 743 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_7_7;
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_Status_6;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 744 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_types_2_f_0_1));
#line 744 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_4));
#line 744 "trailing_analysis.m"
    }
#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_7_7, transform_hlds__trailing_analysis__Types_5, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Status_6);
    }
#line 744 "trailing_analysis.m"
    transform_hlds__trailing_analysis__Status_6 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Status_6);
#line 743 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_6;
#line 743 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 744 "trailing_analysis.m"
{
#line 744 "trailing_analysis.m"
  {
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 744 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 744 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 744 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 703 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
#line 703 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 703 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_6,
#line 703 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Vars_7)
#line 703 "trailing_analysis.m"
{
#line 705 "trailing_analysis.m"
  {
#line 705 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 705 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Result_8;
#line 705 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Types_9;
#line 705 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_13_13;
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_Result_8;

#line 706 "trailing_analysis.m"
    {
#line 706 "trailing_analysis.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_6, transform_hlds__trailing_analysis__Vars_7, &transform_hlds__trailing_analysis__Types_9);
    }
#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 744 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1));
#line 744 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 744 "trailing_analysis.m"
    }
#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_13_13, transform_hlds__trailing_analysis__Types_9, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Result_8);
    }
#line 744 "trailing_analysis.m"
    transform_hlds__trailing_analysis__Result_8 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Result_8);
#line 705 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Result_8;
#line 705 "trailing_analysis.m"
  }
#line 703 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 744 "trailing_analysis.m"
{
#line 744 "trailing_analysis.m"
  {
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 744 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 744 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 744 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 672 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
#line 672 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 672 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 672 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 672 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 672 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeResult_10)
#line 672 "trailing_analysis.m"
{
#line 675 "trailing_analysis.m"
  {
#line 675 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 675 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_12;
#line 675 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 676 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___PredInfo_11;

#line 676 "trailing_analysis.m"
    {
#line 676 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_6, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis___PredInfo_11, &transform_hlds__trailing_analysis__ProcInfo_12);
    }
#line 677 "trailing_analysis.m"
    {
#line 677 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13);
    }
#line 698 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__MaybeResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "trailing_analysis.m"
    else
#line 679 "trailing_analysis.m"
      {
#line 679 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13, (MR_Integer) 0)));
#line 679 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_14, (MR_Integer) 0)));
#line 679 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__AnalysisStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_14, (MR_Integer) 1)));

#line 685 "trailing_analysis.m"
#line 685 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__CalleeTrailingStatus_15) {
#line 685 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 685 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 689 "trailing_analysis.m"
            {
#line 689 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__TrailingStatus_17;
#line 689 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_18_18;
#line 689 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Types_23;
#line 689 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_27_27;
#line 744 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_TrailingStatus_17;

#line 706 "trailing_analysis.m"
              {
#line 706 "trailing_analysis.m"
                hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__Args_9, &transform_hlds__trailing_analysis__Types_23);
              }
#line 744 "trailing_analysis.m"
              {
#line 744 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 744 "trailing_analysis.m"
              }
#line 744 "trailing_analysis.m"
              {
#line 744 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_27_27, transform_hlds__trailing_analysis__Types_23, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_TrailingStatus_17);
              }
#line 744 "trailing_analysis.m"
              transform_hlds__trailing_analysis__TrailingStatus_17 = ((MR_Word) transform_hlds__trailing_analysis__conv1_TrailingStatus_17);
#line 694 "trailing_analysis.m"
              {
#line 694 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_17));
#line 694 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 1) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_16));
#line 694 "trailing_analysis.m"
              }
#line 694 "trailing_analysis.m"
              {
#line 694 "trailing_analysis.m"
                MR_Word base;
#line 694 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 694 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__MaybeResult_10 = base;
#line 694 "trailing_analysis.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_18_18));
#line 694 "trailing_analysis.m"
              }
#line 689 "trailing_analysis.m"
            }
#line 685 "trailing_analysis.m"
            break;
#line 685 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 687 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__MaybeResult_10 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 685 "trailing_analysis.m"
            break;
#line 685 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 684 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__MaybeResult_10 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 685 "trailing_analysis.m"
            break;
#line 685 "trailing_analysis.m"
        }
#line 679 "trailing_analysis.m"
      }
#line 675 "trailing_analysis.m"
  }
#line 672 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 744 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 744 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 744 "trailing_analysis.m"
{
#line 744 "trailing_analysis.m"
  {
#line 744 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 744 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 744 "trailing_analysis.m"
    {
#line 744 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 744 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 744 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 658 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
#line 658 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 658 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 658 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 658 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 658 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_10)
#line 658 "trailing_analysis.m"
{
#line 661 "trailing_analysis.m"
  {
#line 661 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 661 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeResult_11;
#line 661 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_20;
#line 661 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 676 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___PredInfo_19;

#line 676 "trailing_analysis.m"
    {
#line 676 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_6, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis___PredInfo_19, &transform_hlds__trailing_analysis__ProcInfo_20);
    }
#line 677 "trailing_analysis.m"
    {
#line 677 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_20, &transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21);
    }
#line 698 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "trailing_analysis.m"
      transform_hlds__trailing_analysis__MaybeResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "trailing_analysis.m"
    else
#line 679 "trailing_analysis.m"
      {
#line 679 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21, (MR_Integer) 0)));
#line 679 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingStatus_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_22, (MR_Integer) 0)));
#line 679 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__AnalysisStatus_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_22, (MR_Integer) 1)));

#line 685 "trailing_analysis.m"
#line 685 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__CalleeTrailingStatus_23) {
#line 685 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 685 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 689 "trailing_analysis.m"
            {
#line 689 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__TrailingStatus_25;
#line 689 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_26_26;
#line 689 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Types_31;
#line 689 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_35_35;
#line 744 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_TrailingStatus_25;

#line 706 "trailing_analysis.m"
              {
#line 706 "trailing_analysis.m"
                hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__Args_9, &transform_hlds__trailing_analysis__Types_31);
              }
#line 744 "trailing_analysis.m"
              {
#line 744 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_5_p_0_1));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 744 "trailing_analysis.m"
              }
#line 744 "trailing_analysis.m"
              {
#line 744 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_35_35, transform_hlds__trailing_analysis__Types_31, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_TrailingStatus_25);
              }
#line 744 "trailing_analysis.m"
              transform_hlds__trailing_analysis__TrailingStatus_25 = ((MR_Word) transform_hlds__trailing_analysis__conv1_TrailingStatus_25);
#line 694 "trailing_analysis.m"
              {
#line 694 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_26_26, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_25));
#line 694 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_26_26, 1) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_24));
#line 694 "trailing_analysis.m"
              }
#line 694 "trailing_analysis.m"
              {
#line 694 "trailing_analysis.m"
                transform_hlds__trailing_analysis__MaybeResult_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 694 "trailing_analysis.m"
                MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_11, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_26_26));
#line 694 "trailing_analysis.m"
              }
#line 689 "trailing_analysis.m"
            }
#line 685 "trailing_analysis.m"
            break;
#line 685 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 687 "trailing_analysis.m"
            transform_hlds__trailing_analysis__MaybeResult_11 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 685 "trailing_analysis.m"
            break;
#line 685 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 684 "trailing_analysis.m"
            transform_hlds__trailing_analysis__MaybeResult_11 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 685 "trailing_analysis.m"
            break;
#line 685 "trailing_analysis.m"
        }
#line 679 "trailing_analysis.m"
      }
#line 665 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 669 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__Result_10 = (MR_Integer) 0;
#line 665 "trailing_analysis.m"
    else
#line 664 "trailing_analysis.m"
      {
#line 664 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_11, (MR_Integer) 0)));
#line 664 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_12_12;

#line 664 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, (MR_Integer) 0)));
#line 664 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, (MR_Integer) 1)));
#line 664 "trailing_analysis.m"
      }
#line 661 "trailing_analysis.m"
  }
#line 658 "trailing_analysis.m"
}

#line 638 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
#line 638 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusA_4,
#line 638 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusB_5,
#line 638 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeStatus_6)
#line 638 "trailing_analysis.m"
{
#line 642 "trailing_analysis.m"
  {
#line 642 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__MaybeStatusA_4)) == (MR_mktag((MR_Integer) 1)));
#line 642 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__StatusA_7;
#line 642 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__StatusB_8;

#line 643 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 643 "trailing_analysis.m"
      {
#line 643 "trailing_analysis.m"
        transform_hlds__trailing_analysis__StatusA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeStatusA_4, (MR_Integer) 0)));
#line 644 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__MaybeStatusB_5)) == (MR_mktag((MR_Integer) 1)));
#line 644 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 644 "trailing_analysis.m"
          transform_hlds__trailing_analysis__StatusB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeStatusB_5, (MR_Integer) 0)));
#line 643 "trailing_analysis.m"
      }
#line 642 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 646 "trailing_analysis.m"
      {
#line 646 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9;

#line 646 "trailing_analysis.m"
        {
#line 646 "trailing_analysis.m"
          transform_hlds__trailing_analysis__V_9_9 = analysis__lub_2_f_0(transform_hlds__trailing_analysis__StatusA_7, transform_hlds__trailing_analysis__StatusB_8);
        }
#line 646 "trailing_analysis.m"
        {
#line 646 "trailing_analysis.m"
          MR_Word base;
#line 646 "trailing_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__MaybeStatus_6 = base;
#line 646 "trailing_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_9_9));
#line 646 "trailing_analysis.m"
        }
#line 646 "trailing_analysis.m"
      }
#line 642 "trailing_analysis.m"
    else
#line 648 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__MaybeStatus_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "trailing_analysis.m"
  }
#line 638 "trailing_analysis.m"
}

#line 627 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
#line 627 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 627 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 627 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__3_3)
#line 627 "trailing_analysis.m"
{
#line 630 "trailing_analysis.m"
  {
#line 630 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 630 "trailing_analysis.m"
#line 630 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__HeadVar__1_1) {
#line 630 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 630 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 630 "trailing_analysis.m"
#line 630 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__HeadVar__2_2) {
#line 630 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 630 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 635 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 2;
#line 630 "trailing_analysis.m"
            break;
#line 630 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 636 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 0;
#line 630 "trailing_analysis.m"
            break;
#line 630 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 633 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 2;
#line 630 "trailing_analysis.m"
            break;
#line 630 "trailing_analysis.m"
        }
#line 630 "trailing_analysis.m"
        break;
#line 630 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 631 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 0;
#line 630 "trailing_analysis.m"
        break;
#line 630 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 630 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__HeadVar__2_2;
#line 630 "trailing_analysis.m"
        break;
#line 630 "trailing_analysis.m"
    }
#line 630 "trailing_analysis.m"
  }
#line 627 "trailing_analysis.m"
}

#line 563 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
#line 563 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_3,
#line 563 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_4)
#line 563 "trailing_analysis.m"
{
#line 566 "trailing_analysis.m"
  {
#line 566 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 566 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__Name_5;
#line 566 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredOrFunc_6;
#line 566 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ModuleName_7;
#line 566 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__ModuleNameStr_8;
#line 566 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__Arity_9;

#line 567 "trailing_analysis.m"
    {
#line 567 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Name_5 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 568 "trailing_analysis.m"
    {
#line 568 "trailing_analysis.m"
      transform_hlds__trailing_analysis__PredOrFunc_6 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 569 "trailing_analysis.m"
    {
#line 569 "trailing_analysis.m"
      transform_hlds__trailing_analysis__ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 570 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__ModuleName_7)) == (MR_mktag((MR_Integer) 0)));
#line 570 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 570 "trailing_analysis.m"
      {
#line 570 "trailing_analysis.m"
        transform_hlds__trailing_analysis__ModuleNameStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ModuleName_7, (MR_Integer) 0)));
#line 571 "trailing_analysis.m"
        {
#line 571 "trailing_analysis.m"
          transform_hlds__trailing_analysis__Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
        }
#line 587 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__Arity_9 == (MR_Integer) 1);
#line 566 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 582 "trailing_analysis.m"
          {
#line 582 "trailing_analysis.m"
            if ((strcmp(transform_hlds__trailing_analysis__ModuleNameStr_8, (MR_String) "require") == 0))
#line 582 "trailing_analysis.m"
#line 582 "trailing_analysis.m"
              switch (transform_hlds__trailing_analysis__PredOrFunc_6) {
#line 582 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 582 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 584 "trailing_analysis.m"
                  {
#line 584 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = (strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "func_error") == 0);
#line 584 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 584 "trailing_analysis.m"
                      {
#line 585 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 585 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 584 "trailing_analysis.m"
                      }
#line 584 "trailing_analysis.m"
                  }
#line 582 "trailing_analysis.m"
                  break;
#line 582 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 582 "trailing_analysis.m"
                  {
#line 582 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = (strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "error") == 0);
#line 582 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 582 "trailing_analysis.m"
                      {
#line 583 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 583 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 582 "trailing_analysis.m"
                      }
#line 582 "trailing_analysis.m"
                  }
#line 582 "trailing_analysis.m"
                  break;
#line 582 "trailing_analysis.m"
              }
#line 582 "trailing_analysis.m"
            else
#line 582 "trailing_analysis.m"
            if ((strcmp(transform_hlds__trailing_analysis__ModuleNameStr_8, (MR_String) "exception") == 0))
#line 582 "trailing_analysis.m"
              if ((strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "throw") == 0))
#line 586 "trailing_analysis.m"
                {
#line 586 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 586 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 586 "trailing_analysis.m"
                }
#line 582 "trailing_analysis.m"
              else
#line 582 "trailing_analysis.m"
              if ((strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "rethrow") == 0))
#line 587 "trailing_analysis.m"
                {
#line 587 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 587 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 587 "trailing_analysis.m"
                }
#line 582 "trailing_analysis.m"
              else
#line 582 "trailing_analysis.m"
                transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 582 "trailing_analysis.m"
            else
#line 582 "trailing_analysis.m"
              transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 582 "trailing_analysis.m"
          }
#line 570 "trailing_analysis.m"
      }
#line 566 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 566 "trailing_analysis.m"
  }
#line 563 "trailing_analysis.m"
}

#line 538 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
#line 538 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_5,
#line 538 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_6,
#line 538 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerStatus_7)
#line 538 "trailing_analysis.m"
{
#line 541 "trailing_analysis.m"
  {
#line 541 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__InnerCodeModel_5 == (MR_Integer) 2);
#line 541 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__4_4;

#line 545 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 545 "trailing_analysis.m"
      {
#line 546 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__OuterCodeModel_6 == (MR_Integer) 2);
#line 546 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 545 "trailing_analysis.m"
      }
#line 541 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 548 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__4_4 = (MR_Integer) 0;
#line 541 "trailing_analysis.m"
    else
#line 550 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__4_4 = transform_hlds__trailing_analysis__InnerStatus_7;
#line 541 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__4_4;
#line 541 "trailing_analysis.m"
  }
#line 538 "trailing_analysis.m"
}

#line 528 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
#line 528 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Attributes_3)
#line 528 "trailing_analysis.m"
{
#line 531 "trailing_analysis.m"
  {
#line 531 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 531 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__2_2;
#line 532 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_4_4;

#line 532 "trailing_analysis.m"
    {
#line 532 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_4_4 = parse_tree__prog_data__get_may_modify_trail_1_f_0(transform_hlds__trailing_analysis__Attributes_3);
    }
#line 532 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_4_4 == (MR_Integer) 0);
#line 531 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 533 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 531 "trailing_analysis.m"
    else
#line 535 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 531 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__2_2;
#line 531 "trailing_analysis.m"
  }
#line 528 "trailing_analysis.m"
}

#line 520 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
#line 520 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 520 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 520 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 520 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 520 "trailing_analysis.m"
{
#line 520 "trailing_analysis.m"
  {
#line 520 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 520 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv6_MaybeStatus_6;

#line 520 "trailing_analysis.m"
    {
#line 520 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv6_MaybeStatus_6);
    }
#line 520 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv6_MaybeStatus_6));
#line 520 "trailing_analysis.m"
  }
#line 520 "trailing_analysis.m"
}

#line 518 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
#line 518 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 518 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 518 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 518 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 518 "trailing_analysis.m"
{
#line 518 "trailing_analysis.m"
  {
#line 518 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 518 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 518 "trailing_analysis.m"
    {
#line 518 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 518 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 518 "trailing_analysis.m"
  }
#line 518 "trailing_analysis.m"
}

#line 516 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 516 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 516 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 516 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 516 "trailing_analysis.m"
{
#line 516 "trailing_analysis.m"
  {
#line 516 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 516 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_Result_11;
#line 516 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12;
#line 516 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110;

#line 516 "trailing_analysis.m"
    {
#line 516 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_Result_11, &transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110);
    }
#line 516 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_Result_11));
#line 516 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12));
#line 516 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110));
#line 516 "trailing_analysis.m"
  }
#line 516 "trailing_analysis.m"
}

#line 510 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
#line 510 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 510 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 510 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goals_10,
#line 510 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 510 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 510 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16,
#line 510 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17)
#line 510 "trailing_analysis.m"
{
#line 515 "trailing_analysis.m"
  {
#line 515 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 515 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_31_31;
#line 515 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeInfo_32_32;
#line 515 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Results_14;
#line 515 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15;
#line 515 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_18_18;
#line 516 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17;
#line 518 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Result_11;
#line 520 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12;

#line 516 "trailing_analysis.m"
    {
#line 516 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 516 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_10[0]));
#line 516 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 1) = ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1));
#line 516 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 516 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 3) = ((MR_Box) (transform_hlds__trailing_analysis__SCC_8));
#line 516 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 4) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_9));
#line 516 "trailing_analysis.m"
    }
#line 6900 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 6902 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeInfo_32_32 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 516 "trailing_analysis.m"
    {
#line 516 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__trailing_analysis__TypeCtorInfo_31_31, transform_hlds__trailing_analysis__TypeInfo_32_32, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_18_18, transform_hlds__trailing_analysis__Goals_10, &transform_hlds__trailing_analysis__Results_14, &transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17);
    }
#line 516 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17);
#line 518 "trailing_analysis.m"
    {
#line 518 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_31_31, transform_hlds__trailing_analysis__TypeCtorInfo_31_31, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[6], transform_hlds__trailing_analysis__Results_14, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Result_11);
    }
#line 518 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Result_11 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Result_11);
#line 520 "trailing_analysis.m"
    {
#line 520 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeInfo_32_32, transform_hlds__trailing_analysis__TypeInfo_32_32, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[7], transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15, ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]))), &transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12);
    }
#line 520 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12);
#line 515 "trailing_analysis.m"
  }
#line 510 "trailing_analysis.m"
}

#line 446 "trailing_analysis.m"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
#line 446 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 446 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 446 "trailing_analysis.m"
{
#line 446 "trailing_analysis.m"
  {
#line 446 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_2;
#line 446 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 446 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_LambdaHeadVar__2_126;

#line 446 "trailing_analysis.m"
    {
#line 446 "trailing_analysis.m"
      transform_hlds__trailing_analysis__conv0_LambdaHeadVar__2_126 = transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__446__1_1_f_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
    }
#line 446 "trailing_analysis.m"
    transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_LambdaHeadVar__2_126));
#line 446 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__wrapper_arg_2;
#line 446 "trailing_analysis.m"
  }
#line 446 "trailing_analysis.m"
}

#line 345 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
#line 345 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 345 "trailing_analysis.m"
{
#line 345 "trailing_analysis.m"
  {
#line 345 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 345 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0, 1);
#line 345 "trailing_analysis.m"
  }
#line 345 "trailing_analysis.m"
}

#line 345 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
#line 345 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 345 "trailing_analysis.m"
{
#line 345 "trailing_analysis.m"
  {
#line 345 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 345 "trailing_analysis.m"
    {
#line 352 "trailing_analysis.m"
      MR_String transform_hlds__trailing_analysis__V_55_55;

#line 352 "trailing_analysis.m"
      {
#line 352 "trailing_analysis.m"
        mdbcomp__prim_data__special_pred_name_arity_4_p_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162, &transform_hlds__trailing_analysis__V_55_55, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163);
      }
#line 352 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (strcmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162) == 0);
#line 345 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 345 "trailing_analysis.m"
        {
#line 352 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53 == (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163);
#line 352 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 352 "trailing_analysis.m"
            {
#line 352 "trailing_analysis.m"
              transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(transform_hlds__trailing_analysis__env_ptr);
            }
#line 345 "trailing_analysis.m"
        }
#line 345 "trailing_analysis.m"
    }
#line 345 "trailing_analysis.m"
  }
#line 345 "trailing_analysis.m"
}

#line 345 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
#line 345 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 345 "trailing_analysis.m"
{
#line 345 "trailing_analysis.m"
  {
#line 345 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 345 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0) == 0)
#line 345 "trailing_analysis.m"
      {
#line 345 "trailing_analysis.m"
        {
#line 345 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_51;

#line 345 "trailing_analysis.m"
          {
#line 345 "trailing_analysis.m"
            transform_hlds__trailing_analysis__ModuleName_51 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
          }
#line 346 "trailing_analysis.m"
          {
#line 346 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__trailing_analysis__ModuleName_51);
          }
#line 345 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 345 "trailing_analysis.m"
            {
#line 347 "trailing_analysis.m"
              {
#line 347 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52 = hlds__hlds_pred__pred_info_name_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
              }
#line 348 "trailing_analysis.m"
              {
#line 348 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53 = hlds__hlds_pred__pred_info_orig_arity_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
              }
#line 350 "trailing_analysis.m"
              {
#line 350 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__slot_1 = (MR_Integer) 0;

#line 350 "trailing_analysis.m"
                do
#line 350 "trailing_analysis.m"
                  {
#line 350 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54 = ((&transform_hlds__trailing_analysis_vector_common_9[0 + transform_hlds__trailing_analysis__slot_1]))->transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 350 "trailing_analysis.m"
                    {
#line 350 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(transform_hlds__trailing_analysis__env_ptr);
                    }
#line 350 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__slot_1 = (transform_hlds__trailing_analysis__slot_1 + (MR_Integer) 1);
#line 350 "trailing_analysis.m"
                  }
#line 350 "trailing_analysis.m"
                while ((transform_hlds__trailing_analysis__slot_1 < (MR_Integer) 2));
#line 350 "trailing_analysis.m"
              }
#line 345 "trailing_analysis.m"
            }
#line 345 "trailing_analysis.m"
        }
#line 345 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_FALSE;
#line 345 "trailing_analysis.m"
      }
#line 345 "trailing_analysis.m"
    else
#line 345 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_TRUE;
#line 345 "trailing_analysis.m"
  }
#line 345 "trailing_analysis.m"
}

#line 302 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
#line 302 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 302 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 302 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goal_10,
#line 302 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 302 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 302 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109,
#line 302 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110)
#line 302 "trailing_analysis.m"
{
#line 302 "trailing_analysis.m"
  {
#line 302 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 307 "trailing_analysis.m"
    while (MR_TRUE)
#line 307 "trailing_analysis.m"
      {
#line 307 "trailing_analysis.m"
        /* tailcall optimized into a loop */
#line 307 "trailing_analysis.m"
        {
#line 307 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_10, (MR_Integer) 0)));
#line 307 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_10, (MR_Integer) 1)));

#line 323 "trailing_analysis.m"
#line 323 "trailing_analysis.m"
          switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__GoalExpr_14)) {
#line 323 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 323 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 481 "trailing_analysis.m"
              {
#line 481 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__SubGoal_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__trailing_analysis__GoalExpr_14), (MR_Integer) 0);

#line 482 "trailing_analysis.m"
                /* direct tailcall eliminated */
#line 482 "trailing_analysis.m"
                {
#line 482 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Goal__tmp_copy_10 = transform_hlds__trailing_analysis__SubGoal_99;

#line 482 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Goal_10 = transform_hlds__trailing_analysis__Goal__tmp_copy_10;
#line 482 "trailing_analysis.m"
                }
#line 482 "trailing_analysis.m"
                continue;
#line 481 "trailing_analysis.m"
              }
#line 323 "trailing_analysis.m"
              break;
#line 323 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 310 "trailing_analysis.m"
              {
#line 310 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 310 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)));
#line 310 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 310 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 310 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));

#line 311 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 312 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 319 "trailing_analysis.m"
#line 319 "trailing_analysis.m"
                switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Kind_19)) {
#line 319 "trailing_analysis.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 319 "trailing_analysis.m"
                  case (MR_Integer) 0:
#line 314 "trailing_analysis.m"
                    {
#line 314 "trailing_analysis.m"
                    }
#line 319 "trailing_analysis.m"
                    break;
#line 319 "trailing_analysis.m"
                  case (MR_Integer) 1:
#line 315 "trailing_analysis.m"
                    {
#line 315 "trailing_analysis.m"
                    }
#line 319 "trailing_analysis.m"
                    break;
#line 319 "trailing_analysis.m"
                  case (MR_Integer) 2:
#line 316 "trailing_analysis.m"
                    {
#line 316 "trailing_analysis.m"
                    }
#line 319 "trailing_analysis.m"
                    break;
#line 319 "trailing_analysis.m"
                  case (MR_Integer) 3:
#line 319 "trailing_analysis.m"
#line 319 "trailing_analysis.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Kind_19, (MR_Integer) 0)))) {
#line 319 "trailing_analysis.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 319 "trailing_analysis.m"
                      case (MR_Integer) 0:
#line 317 "trailing_analysis.m"
                        {
#line 317 "trailing_analysis.m"
                        }
#line 319 "trailing_analysis.m"
                        break;
#line 319 "trailing_analysis.m"
                      case (MR_Integer) 1:
#line 320 "trailing_analysis.m"
                        {
#line 321 "trailing_analysis.m"
                          {
#line 321 "trailing_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "complicated unify");
#line 321 "trailing_analysis.m"
                            return;
                          }
#line 320 "trailing_analysis.m"
                        }
#line 319 "trailing_analysis.m"
                        break;
#line 319 "trailing_analysis.m"
                    }
#line 319 "trailing_analysis.m"
                    break;
#line 319 "trailing_analysis.m"
                }
#line 310 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 310 "trailing_analysis.m"
              }
#line 323 "trailing_analysis.m"
              break;
#line 323 "trailing_analysis.m"
            case (MR_Integer) 2:
#line 324 "trailing_analysis.m"
              {
#line 324 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallPredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)));
#line 324 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__CallProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 324 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 324 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallPPId_47;
#line 324 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 324 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 324 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));

#line 325 "trailing_analysis.m"
                {
#line 325 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__CallPPId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_47, 0) = ((MR_Box) (transform_hlds__trailing_analysis__CallPredId_41));
#line 325 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_47, 1) = ((MR_Box) (transform_hlds__trailing_analysis__CallProcId_42));
#line 325 "trailing_analysis.m"
                }
#line 326 "trailing_analysis.m"
                {
#line 326 "trailing_analysis.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__CallPredId_41, &(transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                }
#line 329 "trailing_analysis.m"
                {
#line 329 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__trailing_analysis__CallPPId_47)), transform_hlds__trailing_analysis__SCC_8);
                }
#line 327 "trailing_analysis.m"
                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 331 "trailing_analysis.m"
                  {
#line 331 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Types_49;

#line 331 "trailing_analysis.m"
                    {
#line 331 "trailing_analysis.m"
                      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallArgs_43, &transform_hlds__trailing_analysis__Types_49);
                    }
#line 332 "trailing_analysis.m"
                    {
#line 332 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__trail_check_types_2_f_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__Types_49);
                    }
#line 334 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 331 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 331 "trailing_analysis.m"
                  }
#line 327 "trailing_analysis.m"
                else
#line 335 "trailing_analysis.m"
                  {
#line 336 "trailing_analysis.m"
                    {
#line 336 "trailing_analysis.m"
                      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                    }
#line 335 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 339 "trailing_analysis.m"
                      {
#line 339 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 340 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 339 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 339 "trailing_analysis.m"
                      }
#line 335 "trailing_analysis.m"
                    else
#line 341 "trailing_analysis.m"
                      {
#line 345 "trailing_analysis.m"
                        {
#line 345 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(&transform_hlds__trailing_analysis__env);
                        }
#line 341 "trailing_analysis.m"
                        if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 357 "trailing_analysis.m"
                          {
#line 357 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 358 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 357 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 357 "trailing_analysis.m"
                          }
#line 341 "trailing_analysis.m"
                        else
#line 359 "trailing_analysis.m"
                          {
#line 359 "trailing_analysis.m"
                            MR_Word transform_hlds__trailing_analysis__Result0_56;

#line 362 "trailing_analysis.m"
                            {
#line 362 "trailing_analysis.m"
                              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48, &transform_hlds__trailing_analysis__Result0_56);
                            }
#line 359 "trailing_analysis.m"
                            if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 364 "trailing_analysis.m"
                              {
#line 364 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__Result0_56;
#line 365 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 364 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 364 "trailing_analysis.m"
                              }
#line 359 "trailing_analysis.m"
                            else
#line 367 "trailing_analysis.m"
                              {
#line 367 "trailing_analysis.m"
                                MR_Word transform_hlds__trailing_analysis__Globals_57;
#line 367 "trailing_analysis.m"
                                MR_Word transform_hlds__trailing_analysis__Intermod_58;

#line 367 "trailing_analysis.m"
                                {
#line 367 "trailing_analysis.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, &transform_hlds__trailing_analysis__Globals_57);
                                }
#line 368 "trailing_analysis.m"
                                {
#line 368 "trailing_analysis.m"
                                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_57, (MR_Integer) 326, &transform_hlds__trailing_analysis__Intermod_58);
                                }
#line 371 "trailing_analysis.m"
                                (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__Intermod_58 == (MR_Integer) 1);
#line 371 "trailing_analysis.m"
                                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 372 "trailing_analysis.m"
                                  {
#line 372 "trailing_analysis.m"
                                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                                  }
#line 370 "trailing_analysis.m"
                                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 378 "trailing_analysis.m"
                                  {
#line 378 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__AnalysisStatus_59;
#line 378 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__Result0_146;

#line 377 "trailing_analysis.m"
                                    {
#line 377 "trailing_analysis.m"
                                      transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(transform_hlds__trailing_analysis__CallPPId_47, &transform_hlds__trailing_analysis__Result0_146, &transform_hlds__trailing_analysis__AnalysisStatus_59, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                                    }
#line 382 "trailing_analysis.m"
#line 382 "trailing_analysis.m"
                                    switch (transform_hlds__trailing_analysis__Result0_146) {
#line 382 "trailing_analysis.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 382 "trailing_analysis.m"
                                      case (MR_Integer) 2:
#line 381 "trailing_analysis.m"
                                        {
#line 381 "trailing_analysis.m"
                                          *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallArgs_43);
                                        }
#line 382 "trailing_analysis.m"
                                        break;
#line 382 "trailing_analysis.m"
                                      case (MR_Integer) 0:
#line 382 "trailing_analysis.m"
                                      case (MR_Integer) 1:
#line 386 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__Result0_146;
#line 382 "trailing_analysis.m"
                                        break;
#line 382 "trailing_analysis.m"
                                    }
#line 388 "trailing_analysis.m"
                                    {
#line 388 "trailing_analysis.m"
                                      MR_Word base;
#line 388 "trailing_analysis.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 388 "trailing_analysis.m"
                                      *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = base;
#line 388 "trailing_analysis.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_59));
#line 388 "trailing_analysis.m"
                                    }
#line 378 "trailing_analysis.m"
                                  }
#line 370 "trailing_analysis.m"
                                else
#line 391 "trailing_analysis.m"
                                  {
#line 391 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__MaybeResult_60;

#line 390 "trailing_analysis.m"
                                    {
#line 390 "trailing_analysis.m"
                                      transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallPPId_47, transform_hlds__trailing_analysis__CallArgs_43, &transform_hlds__trailing_analysis__MaybeResult_60);
                                    }
#line 395 "trailing_analysis.m"
                                    if ((transform_hlds__trailing_analysis__MaybeResult_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "trailing_analysis.m"
                                      {
#line 399 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 403 "trailing_analysis.m"
#line 403 "trailing_analysis.m"
                                        switch (transform_hlds__trailing_analysis__Intermod_58) {
#line 403 "trailing_analysis.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 403 "trailing_analysis.m"
                                          case (MR_Integer) 0:
#line 405 "trailing_analysis.m"
                                            *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "trailing_analysis.m"
                                            break;
#line 403 "trailing_analysis.m"
                                          case (MR_Integer) 1:
#line 401 "trailing_analysis.m"
                                            {
#line 402 "trailing_analysis.m"
                                              *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 401 "trailing_analysis.m"
                                            }
#line 403 "trailing_analysis.m"
                                            break;
#line 403 "trailing_analysis.m"
                                        }
#line 396 "trailing_analysis.m"
                                      }
#line 395 "trailing_analysis.m"
                                    else
#line 393 "trailing_analysis.m"
                                      {
#line 393 "trailing_analysis.m"
                                        MR_Word transform_hlds__trailing_analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_60, (MR_Integer) 0)));

#line 393 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_141_141, (MR_Integer) 0)));
#line 393 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_141_141, (MR_Integer) 1)));
#line 393 "trailing_analysis.m"
                                      }
#line 391 "trailing_analysis.m"
                                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 391 "trailing_analysis.m"
                                  }
#line 367 "trailing_analysis.m"
                              }
#line 359 "trailing_analysis.m"
                          }
#line 341 "trailing_analysis.m"
                      }
#line 335 "trailing_analysis.m"
                  }
#line 324 "trailing_analysis.m"
              }
#line 323 "trailing_analysis.m"
              break;
#line 323 "trailing_analysis.m"
            case (MR_Integer) 3:
#line 323 "trailing_analysis.m"
#line 323 "trailing_analysis.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)))) {
#line 323 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 323 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 411 "trailing_analysis.m"
                  {
#line 411 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Details_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 411 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___Args_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 411 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___ArgModes_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 411 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 411 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));

#line 417 "trailing_analysis.m"
#line 417 "trailing_analysis.m"
                    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Details_61)) {
#line 417 "trailing_analysis.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 417 "trailing_analysis.m"
                      case (MR_Integer) 0:
#line 414 "trailing_analysis.m"
                        {
#line 415 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 416 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 414 "trailing_analysis.m"
                        }
#line 417 "trailing_analysis.m"
                        break;
#line 417 "trailing_analysis.m"
                      case (MR_Integer) 1:
#line 419 "trailing_analysis.m"
                        {
#line 420 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 421 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 419 "trailing_analysis.m"
                        }
#line 417 "trailing_analysis.m"
                        break;
#line 417 "trailing_analysis.m"
                      case (MR_Integer) 2:
#line 417 "trailing_analysis.m"
                      case (MR_Integer) 3:
#line 425 "trailing_analysis.m"
                        {
#line 426 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 427 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 425 "trailing_analysis.m"
                        }
#line 417 "trailing_analysis.m"
                        break;
#line 417 "trailing_analysis.m"
                    }
#line 411 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 411 "trailing_analysis.m"
                  }
#line 323 "trailing_analysis.m"
                  break;
#line 323 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 430 "trailing_analysis.m"
                  {
#line 430 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Attributes_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 430 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 430 "trailing_analysis.m"
                    MR_Integer transform_hlds__trailing_analysis__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 430 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 430 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));
#line 430 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 6)));
#line 430 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 7)));

#line 431 "trailing_analysis.m"
                    {
#line 431 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(transform_hlds__trailing_analysis__Attributes_76);
                    }
#line 432 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 430 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 430 "trailing_analysis.m"
                  }
#line 323 "trailing_analysis.m"
                  break;
#line 323 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 434 "trailing_analysis.m"
                  {
#line 434 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Goals_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 434 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___ConjType_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));

#line 435 "trailing_analysis.m"
                    {
#line 435 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__Goals_84, transform_hlds__trailing_analysis__Result_11, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 434 "trailing_analysis.m"
                  }
#line 323 "trailing_analysis.m"
                  break;
#line 323 "trailing_analysis.m"
                case (MR_Integer) 3:
#line 438 "trailing_analysis.m"
                  {
#line 438 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Goals_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 439 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___Result0_85;

#line 439 "trailing_analysis.m"
                    {
#line 439 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__Goals_149, &transform_hlds__trailing_analysis___Result0_85, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 443 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 438 "trailing_analysis.m"
                  }
#line 323 "trailing_analysis.m"
                  break;
#line 323 "trailing_analysis.m"
                case (MR_Integer) 4:
#line 445 "trailing_analysis.m"
                  {
#line 445 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Cases_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 445 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__CaseGoals_89;
#line 445 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 445 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));

#line 446 "trailing_analysis.m"
                    {
#line 446 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__CaseGoals_89 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[5], transform_hlds__trailing_analysis__Cases_88);
                    }
#line 447 "trailing_analysis.m"
                    {
#line 447 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CaseGoals_89, transform_hlds__trailing_analysis__Result_11, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 445 "trailing_analysis.m"
                  }
#line 323 "trailing_analysis.m"
                  break;
#line 323 "trailing_analysis.m"
                case (MR_Integer) 5:
#line 485 "trailing_analysis.m"
                  {
#line 485 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Reason_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 485 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__InnerGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 486 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_114_114;
#line 486 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_102_102;

#line 486 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__trailing_analysis__Reason_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 486 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 486 "trailing_analysis.m"
                      {
#line 486 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 1)));
#line 486 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 2)));
#line 486 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_114_114 == (MR_Integer) 1);
#line 486 "trailing_analysis.m"
                      }
#line 486 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 488 "trailing_analysis.m"
                      {
#line 488 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 489 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 488 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 488 "trailing_analysis.m"
                      }
#line 486 "trailing_analysis.m"
                    else
#line 491 "trailing_analysis.m"
                      {
#line 491 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__InnerGoalInfo_105;
#line 491 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__InnerCodeModel_106;
#line 491 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__OuterCodeModel_107;
#line 491 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__Result0_156;
#line 494 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_104_104;

#line 492 "trailing_analysis.m"
                        {
#line 492 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__InnerGoal_101, &transform_hlds__trailing_analysis__Result0_156, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                        }
#line 494 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_101, (MR_Integer) 0)));
#line 494 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__InnerGoalInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_101, (MR_Integer) 1)));
#line 495 "trailing_analysis.m"
                        {
#line 495 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__InnerCodeModel_106 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__InnerGoalInfo_105);
                        }
#line 496 "trailing_analysis.m"
                        {
#line 496 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__OuterCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__GoalInfo_15);
                        }
#line 502 "trailing_analysis.m"
                        {
#line 502 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(transform_hlds__trailing_analysis__InnerCodeModel_106, transform_hlds__trailing_analysis__OuterCodeModel_107, transform_hlds__trailing_analysis__Result0_156);
                        }
#line 491 "trailing_analysis.m"
                      }
#line 485 "trailing_analysis.m"
                  }
#line 323 "trailing_analysis.m"
                  break;
#line 323 "trailing_analysis.m"
                case (MR_Integer) 6:
#line 450 "trailing_analysis.m"
                  {
#line 450 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Cond_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 450 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Then_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 450 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Else_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 450 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_118_118;
#line 450 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_120_120;
#line 450 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_121_121;
#line 450 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Result0_155;
#line 450 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 461 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__CondGoalInfo_98;
#line 462 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___CondGoalExpr_97;
#line 463 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_123_123;

#line 451 "trailing_analysis.m"
                    {
#line 451 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_121_121, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Else_96));
#line 451 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "trailing_analysis.m"
                    }
#line 451 "trailing_analysis.m"
                    {
#line 451 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_120_120, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Then_95));
#line 451 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_120_120, 1) = ((MR_Box) (transform_hlds__trailing_analysis__V_121_121));
#line 451 "trailing_analysis.m"
                    }
#line 451 "trailing_analysis.m"
                    {
#line 451 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_118_118, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Cond_94));
#line 451 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_118_118, 1) = ((MR_Box) (transform_hlds__trailing_analysis__V_120_120));
#line 451 "trailing_analysis.m"
                    }
#line 451 "trailing_analysis.m"
                    {
#line 451 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__V_118_118, &transform_hlds__trailing_analysis__Result0_155, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 461 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__Result0_155 == (MR_Integer) 1);
#line 461 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 461 "trailing_analysis.m"
                      {
#line 462 "trailing_analysis.m"
                        transform_hlds__trailing_analysis___CondGoalExpr_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Cond_94, (MR_Integer) 0)));
#line 462 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__CondGoalInfo_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Cond_94, (MR_Integer) 1)));
#line 463 "trailing_analysis.m"
                        {
#line 463 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_123_123 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__CondGoalInfo_98);
                        }
#line 463 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_123_123 == (MR_Integer) 2);
#line 463 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded);
#line 461 "trailing_analysis.m"
                      }
#line 453 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 465 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 453 "trailing_analysis.m"
                    else
#line 478 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 450 "trailing_analysis.m"
                  }
#line 323 "trailing_analysis.m"
                  break;
#line 323 "trailing_analysis.m"
                case (MR_Integer) 7:
#line 506 "trailing_analysis.m"
                  {
#line 507 "trailing_analysis.m"
                    {
#line 507 "trailing_analysis.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "shorthand");
#line 507 "trailing_analysis.m"
                      return;
                    }
#line 506 "trailing_analysis.m"
                  }
#line 323 "trailing_analysis.m"
                  break;
#line 323 "trailing_analysis.m"
              }
#line 323 "trailing_analysis.m"
              break;
#line 323 "trailing_analysis.m"
          }
#line 307 "trailing_analysis.m"
        }
#line 307 "trailing_analysis.m"
        break;
#line 307 "trailing_analysis.m"
      }
#line 302 "trailing_analysis.m"
  }
#line 302 "trailing_analysis.m"
}

#line 285 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
#line 285 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 285 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 285 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17,
#line 285 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18,
#line 285 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19,
#line 285 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20)
#line 285 "trailing_analysis.m"
{
#line 289 "trailing_analysis.m"
  {
#line 289 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 289 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_12;
#line 289 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Body_13;
#line 289 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__VarTypes_14;
#line 289 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Result_15;
#line 289 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatus_16;
#line 289 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_22_22;
#line 290 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_11_11;

#line 290 "trailing_analysis.m"
    {
#line 290 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis__V_11_11, &transform_hlds__trailing_analysis__ProcInfo_12);
    }
#line 291 "trailing_analysis.m"
    {
#line 291 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__Body_13);
    }
#line 292 "trailing_analysis.m"
    {
#line 292 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__VarTypes_14);
    }
#line 293 "trailing_analysis.m"
    {
#line 293 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_7, transform_hlds__trailing_analysis__VarTypes_14, transform_hlds__trailing_analysis__Body_13, &transform_hlds__trailing_analysis__Result_15, &transform_hlds__trailing_analysis__MaybeAnalysisStatus_16, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20);
    }
#line 295 "trailing_analysis.m"
    {
#line 295 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 295 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 0) = ((MR_Box) (transform_hlds__trailing_analysis__PPId_8));
#line 295 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Result_15));
#line 295 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 2) = ((MR_Box) (transform_hlds__trailing_analysis__MaybeAnalysisStatus_16));
#line 295 "trailing_analysis.m"
    }
#line 295 "trailing_analysis.m"
    {
#line 295 "trailing_analysis.m"
      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, ((MR_Box) (transform_hlds__trailing_analysis__V_22_22)), transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18);
    }
#line 289 "trailing_analysis.m"
  }
#line 285 "trailing_analysis.m"
}

#line 274 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
#line 274 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcResult_3,
#line 274 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_4)
#line 274 "trailing_analysis.m"
{
#line 278 "trailing_analysis.m"
  {
#line 278 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 278 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 0)));
#line 278 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 1)));

#line 278 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__AnalysisStatus_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 2)));
#line 278 "trailing_analysis.m"
  }
#line 274 "trailing_analysis.m"
}

#line 210 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
#line 210 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_5,
#line 210 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 210 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 210 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12)
#line 210 "trailing_analysis.m"
{
#line 213 "trailing_analysis.m"
  {
#line 213 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 213 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo0_8;
#line 213 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo0_9;
#line 213 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_10;
#line 213 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_13_13;

#line 214 "trailing_analysis.m"
    {
#line 214 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__PPId_6, &transform_hlds__trailing_analysis__PredInfo0_8, &transform_hlds__trailing_analysis__ProcInfo0_9);
    }
#line 215 "trailing_analysis.m"
    {
#line 215 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "trailing_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_13_13, 0) = ((MR_Box) (transform_hlds__trailing_analysis__ProcTrailingInfo_5));
#line 215 "trailing_analysis.m"
    }
#line 215 "trailing_analysis.m"
    {
#line 215 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(transform_hlds__trailing_analysis__V_13_13, transform_hlds__trailing_analysis__ProcInfo0_9, &transform_hlds__trailing_analysis__ProcInfo_10);
    }
#line 216 "trailing_analysis.m"
    {
#line 216 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__trailing_analysis__PPId_6, transform_hlds__trailing_analysis__PredInfo0_8, transform_hlds__trailing_analysis__ProcInfo_10, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);
    }
#line 213 "trailing_analysis.m"
  }
#line 210 "trailing_analysis.m"
}

#line 205 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
#line 205 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 205 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 205 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 205 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 205 "trailing_analysis.m"
{
#line 205 "trailing_analysis.m"
  {
#line 205 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 205 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12;

#line 205 "trailing_analysis.m"
    {
#line 205 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12);
    }
#line 205 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12));
#line 205 "trailing_analysis.m"
  }
#line 205 "trailing_analysis.m"
}

#line 201 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 201 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 201 "trailing_analysis.m"
{
#line 201 "trailing_analysis.m"
  {
#line 201 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 201 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12;

#line 201 "trailing_analysis.m"
    {
#line 201 "trailing_analysis.m"
      transform_hlds__trailing_analysis__set_trailing_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12);
    }
#line 201 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12));
#line 201 "trailing_analysis.m"
  }
#line 201 "trailing_analysis.m"
}

#line 271 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
#line 271 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 271 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 271 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 271 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 271 "trailing_analysis.m"
{
#line 271 "trailing_analysis.m"
  {
#line 271 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 271 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv8_MaybeStatus_6;

#line 271 "trailing_analysis.m"
    {
#line 271 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv8_MaybeStatus_6);
    }
#line 271 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv8_MaybeStatus_6));
#line 271 "trailing_analysis.m"
  }
#line 271 "trailing_analysis.m"
}

#line 270 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
#line 270 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 270 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 270 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2)
#line 270 "trailing_analysis.m"
{
#line 270 "trailing_analysis.m"
  {
#line 270 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 270 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv7_AnalysisStatus_4;

#line 270 "trailing_analysis.m"
    {
#line 270 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv7_AnalysisStatus_4);
    }
#line 270 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv7_AnalysisStatus_4));
#line 270 "trailing_analysis.m"
  }
#line 270 "trailing_analysis.m"
}

#line 224 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
#line 224 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 224 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 224 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 224 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 224 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 224 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 224 "trailing_analysis.m"
{
#line 224 "trailing_analysis.m"
  {
#line 224 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 224 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18;
#line 224 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 224 "trailing_analysis.m"
    {
#line 224 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 224 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18));
#line 224 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 224 "trailing_analysis.m"
  }
#line 224 "trailing_analysis.m"
}

#line 239 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
#line 239 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 239 "trailing_analysis.m"
{
#line 239 "trailing_analysis.m"
  {
#line 239 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 239 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0, 1);
#line 239 "trailing_analysis.m"
  }
#line 239 "trailing_analysis.m"
}

#line 240 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
#line 240 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 240 "trailing_analysis.m"
{
#line 240 "trailing_analysis.m"
  {
#line 240 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 240 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58);
#line 240 "trailing_analysis.m"
    {
#line 240 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(transform_hlds__trailing_analysis__env_ptr);
    }
#line 240 "trailing_analysis.m"
  }
#line 240 "trailing_analysis.m"
}

#line 239 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
#line 239 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 239 "trailing_analysis.m"
{
#line 239 "trailing_analysis.m"
  {
#line 239 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 239 "trailing_analysis.m"
    {
#line 242 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 1)));
#line 242 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 0)));
#line 242 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 2)));

#line 242 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_61_61 == (MR_Integer) 1);
#line 241 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 241 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 241 "trailing_analysis.m"
        {
#line 241 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(transform_hlds__trailing_analysis__env_ptr);
        }
#line 239 "trailing_analysis.m"
    }
#line 239 "trailing_analysis.m"
  }
#line 239 "trailing_analysis.m"
}

#line 239 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
#line 239 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 239 "trailing_analysis.m"
{
#line 239 "trailing_analysis.m"
  {
#line 239 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 239 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0) == 0)
#line 239 "trailing_analysis.m"
      {
#line 239 "trailing_analysis.m"
        {
#line 240 "trailing_analysis.m"
          {
#line 240 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4, transform_hlds__trailing_analysis__env_ptr);
          }
#line 239 "trailing_analysis.m"
        }
#line 239 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 239 "trailing_analysis.m"
      }
#line 239 "trailing_analysis.m"
    else
#line 239 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 239 "trailing_analysis.m"
  }
#line 239 "trailing_analysis.m"
}

#line 247 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
#line 247 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 247 "trailing_analysis.m"
{
#line 247 "trailing_analysis.m"
  {
#line 247 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 247 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1, 1);
#line 247 "trailing_analysis.m"
  }
#line 247 "trailing_analysis.m"
}

#line 248 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
#line 248 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 248 "trailing_analysis.m"
{
#line 248 "trailing_analysis.m"
  {
#line 248 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 248 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59);
#line 248 "trailing_analysis.m"
    {
#line 248 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(transform_hlds__trailing_analysis__env_ptr);
    }
#line 248 "trailing_analysis.m"
  }
#line 248 "trailing_analysis.m"
}

#line 247 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
#line 247 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 247 "trailing_analysis.m"
{
#line 247 "trailing_analysis.m"
  {
#line 247 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 247 "trailing_analysis.m"
    {
#line 250 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 0)));
#line 250 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_68_68;

#line 250 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 1)));
#line 250 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 2)));
#line 250 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62 == (MR_Integer) 0);
#line 250 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 250 "trailing_analysis.m"
        {
#line 250 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(transform_hlds__trailing_analysis__env_ptr);
        }
#line 247 "trailing_analysis.m"
    }
#line 247 "trailing_analysis.m"
  }
#line 247 "trailing_analysis.m"
}

#line 247 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
#line 247 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 247 "trailing_analysis.m"
{
#line 247 "trailing_analysis.m"
  {
#line 247 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 247 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1) == 0)
#line 247 "trailing_analysis.m"
      {
#line 247 "trailing_analysis.m"
        {
#line 248 "trailing_analysis.m"
          {
#line 248 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8, transform_hlds__trailing_analysis__env_ptr);
          }
#line 247 "trailing_analysis.m"
        }
#line 247 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 247 "trailing_analysis.m"
      }
#line 247 "trailing_analysis.m"
    else
#line 247 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 247 "trailing_analysis.m"
  }
#line 247 "trailing_analysis.m"
}

#line 253 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
#line 253 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 253 "trailing_analysis.m"
{
#line 253 "trailing_analysis.m"
  {
#line 253 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 253 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2, 1);
#line 253 "trailing_analysis.m"
  }
#line 253 "trailing_analysis.m"
}

#line 253 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
#line 253 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 253 "trailing_analysis.m"
{
#line 253 "trailing_analysis.m"
  {
#line 253 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 253 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64);
#line 253 "trailing_analysis.m"
    {
#line 253 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(transform_hlds__trailing_analysis__env_ptr);
    }
#line 253 "trailing_analysis.m"
  }
#line 253 "trailing_analysis.m"
}

#line 253 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
#line 253 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 253 "trailing_analysis.m"
{
#line 253 "trailing_analysis.m"
  {
#line 253 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 253 "trailing_analysis.m"
    {
#line 254 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 0)));
#line 254 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_70_70;

#line 254 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 1)));
#line 254 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 2)));
#line 254 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63 == (MR_Integer) 2);
#line 254 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 254 "trailing_analysis.m"
        {
#line 254 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(transform_hlds__trailing_analysis__env_ptr);
        }
#line 253 "trailing_analysis.m"
    }
#line 253 "trailing_analysis.m"
  }
#line 253 "trailing_analysis.m"
}

#line 253 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
#line 253 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 253 "trailing_analysis.m"
{
#line 253 "trailing_analysis.m"
  {
#line 253 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 253 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2) == 0)
#line 253 "trailing_analysis.m"
      {
#line 253 "trailing_analysis.m"
        {
#line 253 "trailing_analysis.m"
          {
#line 253 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12, transform_hlds__trailing_analysis__env_ptr);
          }
#line 253 "trailing_analysis.m"
        }
#line 253 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 253 "trailing_analysis.m"
      }
#line 253 "trailing_analysis.m"
    else
#line 253 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 253 "trailing_analysis.m"
  }
#line 253 "trailing_analysis.m"
}

#line 180 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Debug_6,
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Pass1Only_7,
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 180 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16)
#line 180 "trailing_analysis.m"
{
#line 180 "trailing_analysis.m"
  {
#line 180 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 183 "trailing_analysis.m"
    {
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_28_28;
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TrailingStatus_11;
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatus_12;
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_14;
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17;
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_20_20;
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21;
#line 183 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_37_37;
#line 224 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv3_ProcResults_10;
#line 224 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17;
#line 201 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21;

#line 224 "trailing_analysis.m"
      {
#line 224 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 224 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[0]));
#line 224 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1));
#line 224 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 224 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 3) = ((MR_Box) (transform_hlds__trailing_analysis__SCC_8));
#line 224 "trailing_analysis.m"
      }
#line 224 "trailing_analysis.m"
      {
#line 224 "trailing_analysis.m"
        mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[1], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_37_37, transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__trailing_analysis__conv3_ProcResults_10, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15)), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17);
      }
#line 224 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 = ((MR_Word) transform_hlds__trailing_analysis__conv3_ProcResults_10);
#line 224 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17 = ((MR_Word) transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17);
#line 232 "trailing_analysis.m"
      if (((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "trailing_analysis.m"
        {
#line 233 "trailing_analysis.m"
          {
#line 233 "trailing_analysis.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_combine_individual_proc_results\'/3", (MR_String) "empty SCC");
#line 233 "trailing_analysis.m"
            return;
          }
#line 232 "trailing_analysis.m"
        }
#line 232 "trailing_analysis.m"
      else
#line 235 "trailing_analysis.m"
        {
#line 235 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__TypeInfo_13_84;
#line 235 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76;
#line 271 "trailing_analysis.m"
          MR_Box transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12;

#line 239 "trailing_analysis.m"
          {
#line 239 "trailing_analysis.m"
            transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(&transform_hlds__trailing_analysis__env);
          }
#line 239 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 236 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 245 "trailing_analysis.m"
            transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 1;
#line 236 "trailing_analysis.m"
          else
#line 246 "trailing_analysis.m"
            {
#line 247 "trailing_analysis.m"
              {
#line 247 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(&transform_hlds__trailing_analysis__env);
              }
#line 247 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 251 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 253 "trailing_analysis.m"
                {
#line 253 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(&transform_hlds__trailing_analysis__env);
                }
#line 246 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 257 "trailing_analysis.m"
                transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 2;
#line 246 "trailing_analysis.m"
              else
#line 260 "trailing_analysis.m"
                transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 0;
#line 246 "trailing_analysis.m"
            }
#line 8746 "transform_hlds.trailing_analysis.c"
          transform_hlds__trailing_analysis__TypeInfo_13_84 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 270 "trailing_analysis.m"
          {
#line 270 "trailing_analysis.m"
            mercury__list__map_3_p_0((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, transform_hlds__trailing_analysis__TypeInfo_13_84, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[2], (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, &transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76);
          }
#line 271 "trailing_analysis.m"
          {
#line 271 "trailing_analysis.m"
            mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeInfo_13_84, transform_hlds__trailing_analysis__TypeInfo_13_84, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[3], transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76, ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]))), &transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12);
          }
#line 271 "trailing_analysis.m"
          transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12);
#line 235 "trailing_analysis.m"
        }
#line 196 "trailing_analysis.m"
#line 196 "trailing_analysis.m"
      switch (transform_hlds__trailing_analysis__Debug_6) {
#line 196 "trailing_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 196 "trailing_analysis.m"
        case (MR_Integer) 0:
#line 197 "trailing_analysis.m"
          {
#line 197 "trailing_analysis.m"
          }
#line 196 "trailing_analysis.m"
          break;
#line 196 "trailing_analysis.m"
        case (MR_Integer) 1:
#line 194 "trailing_analysis.m"
          {
#line 194 "trailing_analysis.m"
            transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17, transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__TrailingStatus_11);
          }
#line 196 "trailing_analysis.m"
          break;
#line 196 "trailing_analysis.m"
      }
#line 200 "trailing_analysis.m"
      {
#line 200 "trailing_analysis.m"
        transform_hlds__trailing_analysis__ProcTrailingInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_14, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_11));
#line 200 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_14, 1) = ((MR_Box) (transform_hlds__trailing_analysis__MaybeAnalysisStatus_12));
#line 200 "trailing_analysis.m"
      }
#line 201 "trailing_analysis.m"
      {
#line 201 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[1]));
#line 201 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16));
#line 201 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ProcTrailingInfo_14));
#line 201 "trailing_analysis.m"
      }
#line 8810 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8812 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 201 "trailing_analysis.m"
      {
#line 201 "trailing_analysis.m"
        mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_28_28, transform_hlds__trailing_analysis__V_20_20, transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17)), &transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21);
      }
#line 201 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21);
#line 206 "trailing_analysis.m"
#line 206 "trailing_analysis.m"
      switch (transform_hlds__trailing_analysis__Pass1Only_7) {
#line 206 "trailing_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 206 "trailing_analysis.m"
        case (MR_Integer) 0:
#line 204 "trailing_analysis.m"
          {
#line 205 "trailing_analysis.m"
            MR_Box transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16;

#line 205 "trailing_analysis.m"
            {
#line 205 "trailing_analysis.m"
              mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[4], transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21)), &transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16);
            }
#line 205 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16);
#line 204 "trailing_analysis.m"
          }
#line 206 "trailing_analysis.m"
          break;
#line 206 "trailing_analysis.m"
        case (MR_Integer) 1:
#line 207 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21;
#line 206 "trailing_analysis.m"
          break;
#line 206 "trailing_analysis.m"
      }
#line 183 "trailing_analysis.m"
    }
#line 180 "trailing_analysis.m"
  }
#line 180 "trailing_analysis.m"
}

#line 158 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2(
#line 158 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 158 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 158 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 158 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 158 "trailing_analysis.m"
{
#line 158 "trailing_analysis.m"
  {
#line 158 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 158 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11;

#line 158 "trailing_analysis.m"
    {
#line 158 "trailing_analysis.m"
      transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11);
    }
#line 158 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11));
#line 158 "trailing_analysis.m"
  }
#line 158 "trailing_analysis.m"
}

#line 144 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1(
#line 144 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 144 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 144 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 144 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 144 "trailing_analysis.m"
{
#line 144 "trailing_analysis.m"
  {
#line 144 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 144 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16;

#line 144 "trailing_analysis.m"
    {
#line 144 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16);
    }
#line 144 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16));
#line 144 "trailing_analysis.m"
  }
#line 144 "trailing_analysis.m"
}

#line 64 "trailing_analysis.m"
void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0(
#line 64 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18,
#line 64 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19)
#line 64 "trailing_analysis.m"
{
#line 126 "trailing_analysis.m"
  {
#line 126 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 126 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Globals_4;
#line 126 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__UseTrail_5;

#line 127 "trailing_analysis.m"
    {
#line 127 "trailing_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__trailing_analysis__Globals_4);
    }
#line 128 "trailing_analysis.m"
    {
#line 128 "trailing_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 216, &transform_hlds__trailing_analysis__UseTrail_5);
    }
#line 164 "trailing_analysis.m"
#line 164 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__UseTrail_5) {
#line 164 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 164 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 165 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18;
#line 164 "trailing_analysis.m"
        break;
#line 164 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 131 "trailing_analysis.m"
        {
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeOptInt_6;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeTransOptInt_7;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeAnalysisReg_8;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Pass1Only_9;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__DepInfo_10;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SCCs_11;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Debug_12;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcAnalysisKinds0_13;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcAnalysisKinds_14;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_24_24;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_27_27;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28;
#line 131 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30;
#line 144 "trailing_analysis.m"
          MR_Box transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28;

#line 132 "trailing_analysis.m"
          {
#line 132 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 87, &transform_hlds__trailing_analysis__MakeOptInt_6);
          }
#line 134 "trailing_analysis.m"
          {
#line 134 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 88, &transform_hlds__trailing_analysis__MakeTransOptInt_7);
          }
#line 136 "trailing_analysis.m"
          {
#line 136 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 89, &transform_hlds__trailing_analysis__MakeAnalysisReg_8);
          }
#line 138 "trailing_analysis.m"
          {
#line 138 "trailing_analysis.m"
            transform_hlds__trailing_analysis__V_24_24 = mercury__bool__or_2_f_0(transform_hlds__trailing_analysis__MakeOptInt_6, transform_hlds__trailing_analysis__MakeTransOptInt_7);
          }
#line 139 "trailing_analysis.m"
          {
#line 139 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Pass1Only_9 = mercury__bool__or_2_f_0(transform_hlds__trailing_analysis__V_24_24, transform_hlds__trailing_analysis__MakeAnalysisReg_8);
          }
#line 140 "trailing_analysis.m"
          {
#line 140 "trailing_analysis.m"
            transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25);
          }
#line 141 "trailing_analysis.m"
          {
#line 141 "trailing_analysis.m"
            hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25, &transform_hlds__trailing_analysis__DepInfo_10);
          }
#line 142 "trailing_analysis.m"
          {
#line 142 "trailing_analysis.m"
            hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__trailing_analysis__DepInfo_10, &transform_hlds__trailing_analysis__SCCs_11);
          }
#line 143 "trailing_analysis.m"
          {
#line 143 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 78, &transform_hlds__trailing_analysis__Debug_12);
          }
#line 144 "trailing_analysis.m"
          {
#line 144 "trailing_analysis.m"
            transform_hlds__trailing_analysis__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 144 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_5[0]));
#line 144 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1));
#line 144 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 144 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Debug_12));
#line 144 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 4) = ((MR_Box) (transform_hlds__trailing_analysis__Pass1Only_9));
#line 144 "trailing_analysis.m"
          }
#line 144 "trailing_analysis.m"
          {
#line 144 "trailing_analysis.m"
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_27_27, transform_hlds__trailing_analysis__SCCs_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25)), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28);
          }
#line 144 "trailing_analysis.m"
          transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28);
#line 146 "trailing_analysis.m"
          {
#line 146 "trailing_analysis.m"
            hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__trailing_analysis__ProcAnalysisKinds0_13);
          }
#line 147 "trailing_analysis.m"
          {
#line 147 "trailing_analysis.m"
            mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 1)), transform_hlds__trailing_analysis__ProcAnalysisKinds0_13, &transform_hlds__trailing_analysis__ProcAnalysisKinds_14);
          }
#line 148 "trailing_analysis.m"
          {
#line 148 "trailing_analysis.m"
            hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(transform_hlds__trailing_analysis__ProcAnalysisKinds_14, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30);
          }
#line 161 "trailing_analysis.m"
#line 161 "trailing_analysis.m"
          switch (transform_hlds__trailing_analysis__MakeAnalysisReg_8) {
#line 161 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 161 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 162 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30;
#line 161 "trailing_analysis.m"
              break;
#line 161 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 155 "trailing_analysis.m"
              {
#line 155 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__AnalysisInfo0_15;
#line 155 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__PredIds_16;
#line 155 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__AnalysisInfo_17;
#line 155 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_31_31;
#line 158 "trailing_analysis.m"
                MR_Box transform_hlds__trailing_analysis__conv3_AnalysisInfo_17;

#line 156 "trailing_analysis.m"
                {
#line 156 "trailing_analysis.m"
                  hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__trailing_analysis__AnalysisInfo0_15);
                }
#line 157 "trailing_analysis.m"
                {
#line 157 "trailing_analysis.m"
                  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__trailing_analysis__PredIds_16);
                }
#line 158 "trailing_analysis.m"
                {
#line 158 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 158 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[0]));
#line 158 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2));
#line 158 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 158 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 3) = ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30));
#line 158 "trailing_analysis.m"
                }
#line 158 "trailing_analysis.m"
                {
#line 158 "trailing_analysis.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__trailing_analysis__V_31_31, transform_hlds__trailing_analysis__PredIds_16, ((MR_Box) (transform_hlds__trailing_analysis__AnalysisInfo0_15)), &transform_hlds__trailing_analysis__conv3_AnalysisInfo_17);
                }
#line 158 "trailing_analysis.m"
                transform_hlds__trailing_analysis__AnalysisInfo_17 = ((MR_Word) transform_hlds__trailing_analysis__conv3_AnalysisInfo_17);
#line 160 "trailing_analysis.m"
                {
#line 160 "trailing_analysis.m"
                  hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__trailing_analysis__AnalysisInfo_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19);
                }
#line 155 "trailing_analysis.m"
              }
#line 161 "trailing_analysis.m"
              break;
#line 161 "trailing_analysis.m"
          }
#line 131 "trailing_analysis.m"
        }
#line 164 "trailing_analysis.m"
        break;
#line 164 "trailing_analysis.m"
    }
#line 126 "trailing_analysis.m"
  }
#line 64 "trailing_analysis.m"
}

void mercury__transform_hlds__trailing_analysis__init(void)
{
}

void mercury__transform_hlds__trailing_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0);
	MR_register_type_ctor_info(&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0);
}

void mercury__transform_hlds__trailing_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.trailing_analysis. */
