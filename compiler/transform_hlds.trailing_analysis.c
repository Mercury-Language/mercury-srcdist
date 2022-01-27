/*
** Automatically generated from `trailing_analysis.m'
** by the Mercury compiler,
** version DEV
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



#line 844 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s {
#line 850 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded;
#line 863 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45;
#line 872 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0;
#line 872 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47;
#line 872 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48;
#line 872 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49;
#line 872 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139;
#line 872 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140;
#line 844 "trailing_analysis.m"
};

#line 298 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s {
#line 303 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded;
#line 320 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48;
#line 341 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0;
#line 341 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52;
#line 341 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53;
#line 341 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54;
#line 341 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162;
#line 341 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163;
#line 298 "trailing_analysis.m"
};

#line 176 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s {
#line 179 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded;
#line 179 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10;
#line 235 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0;
#line 235 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58;
#line 236 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58;
#line 243 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1;
#line 243 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59;
#line 243 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62;
#line 244 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59;
#line 249 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2;
#line 249 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63;
#line 249 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64;
#line 249 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64;
#line 176 "trailing_analysis.m"
};


#line 222 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 225 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0;

#line 228 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0;

#line 231 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 234 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 237 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0;

#line 240 "transform_hlds.trailing_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3];

#line 243 "transform_hlds.trailing_analysis.c"
static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3];

#line 246 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0;

#line 249 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1];

#line 252 "transform_hlds.trailing_analysis.c"
static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1];

#line 255 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1];

#line 258 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1];

#line 261 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1];

#line 264 "transform_hlds.trailing_analysis.c"
static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0;

#line 267 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
#line 270 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 272 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2);

#line 275 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
#line 278 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 280 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 282 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 285 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
#line 288 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 290 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2);

#line 293 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
#line 296 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 298 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 300 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 303 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 306 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 308 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 311 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 314 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 316 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 318 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2);

#line 321 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 324 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 326 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 328 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 330 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 333 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 336 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 338 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 340 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 342 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 345 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 348 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 351 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 354 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 357 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 360 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 363 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 366 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 368 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 371 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
#line 374 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 376 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 379 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 382 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 384 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 386 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 388 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3,
#line 390 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_6);

#line 1052 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1052 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1052 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3);

#line 1047 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1047 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1047 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5);

#line 1042 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void);

#line 1041 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1040 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1039 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1038 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1037 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 442 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__442__1_1_f_0(
#line 442 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__LambdaHeadVar__1_125);

#line 1064 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(
#line 1064 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1064 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__2_2);

#line 1063 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(
#line 1063 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1);

#line 1052 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
#line 1052 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1052 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3);

#line 1047 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 1047 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1047 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5);

#line 1042 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 1042 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_17,
#line 1042 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_18,
#line 1042 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_19);

#line 1041 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0(void);

#line 1040 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0(void);

#line 1039 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

#line 1038 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

#line 1037 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void);

#line 169 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
#line 169 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 169 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 169 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3);

#line 169 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
#line 169 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 169 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2);

#line 1193 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_4_p_0(
#line 1193 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Moduleinfo_5,
#line 1193 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6);

#line 1191 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1(
#line 1191 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1191 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1191 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1191 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1178 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(
#line 1178 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 1178 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 1178 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8);

#line 1132 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
#line 1132 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_7,
#line 1132 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_8,
#line 1132 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_9,
#line 1132 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__ProcId_10,
#line 1132 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18,
#line 1132 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19);

#line 1129 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
#line 1129 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1129 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1129 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1129 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1123 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
#line 1123 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 1123 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_6,
#line 1123 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10,
#line 1123 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11);

#line 1088 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
#line 1088 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 1088 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_7,
#line 1088 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_8,
#line 1088 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12,
#line 1088 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13);

#line 1016 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
#line 1016 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1016 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15,
#line 1016 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16,
#line 1016 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1016 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 1016 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);

#line 1013 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
#line 1013 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1013 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1013 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1013 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1011 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
#line 1011 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1011 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1011 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1011 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1011 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1011 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 1007 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
#line 1007 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1007 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12,
#line 1007 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13,
#line 1007 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1007 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 1007 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15);

#line 1004 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
#line 1004 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1004 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1004 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1004 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1002 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
#line 1002 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1002 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1002 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1002 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1002 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1002 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 997 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
#line 997 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 997 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12,
#line 997 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13,
#line 997 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 997 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 997 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15);

#line 872 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
#line 872 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 872 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
#line 872 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 872 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
#line 872 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 844 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
#line 844 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_8,
#line 844 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__GoalInfo_9,
#line 844 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109,
#line 844 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110,
#line 844 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_11,
#line 844 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111,
#line 844 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);

#line 825 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
#line 825 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 825 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15,
#line 825 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16,
#line 825 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 825 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 825 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);

#line 812 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
#line 812 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_4,
#line 812 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 812 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 767 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(
#line 767 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 767 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 767 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__TypeCtorCat_7);

#line 751 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_f_0(
#line 751 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 751 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_5);

#line 743 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_4_p_0(
#line 743 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 743 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 743 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8,
#line 743 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9);

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 737 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0(
#line 737 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 737 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Types_5);

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 699 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
#line 699 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 699 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_6,
#line 699 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Vars_7);

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 668 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
#line 668 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 668 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 668 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 668 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 668 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeResult_10);

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 654 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
#line 654 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 654 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 654 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 654 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 654 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_10);

#line 634 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
#line 634 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusA_4,
#line 634 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusB_5,
#line 634 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeStatus_6);

#line 623 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
#line 623 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 623 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 623 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__3_3);

#line 559 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
#line 559 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_3,
#line 559 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_4);

#line 534 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
#line 534 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_5,
#line 534 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_6,
#line 534 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerStatus_7);

#line 524 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
#line 524 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Attributes_3);

#line 516 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 516 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 514 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
#line 514 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 514 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 514 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 514 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 512 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
#line 512 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 512 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 512 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 512 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 512 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 512 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 506 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
#line 506 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 506 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 506 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goals_10,
#line 506 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 506 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 506 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16,
#line 506 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17);

#line 442 "trailing_analysis.m"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
#line 442 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 442 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 341 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
#line 341 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 341 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
#line 341 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 341 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
#line 341 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 298 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
#line 298 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 298 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 298 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goal_10,
#line 298 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 298 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 298 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109,
#line 298 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);

#line 281 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
#line 281 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 281 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 281 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17,
#line 281 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18,
#line 281 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19,
#line 281 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20);

#line 270 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
#line 270 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcResult_3,
#line 270 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_4);

#line 206 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
#line 206 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_5,
#line 206 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 206 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 206 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);

#line 201 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 201 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 201 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 197 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
#line 197 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 197 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 197 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 197 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 267 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 267 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 266 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
#line 266 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 266 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 266 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2);

#line 220 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
#line 220 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 220 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 220 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 220 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 220 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 220 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 235 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
#line 235 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 236 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
#line 236 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 235 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
#line 235 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 235 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
#line 235 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 243 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
#line 243 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 244 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
#line 244 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 243 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
#line 243 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 243 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
#line 243 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 249 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
#line 249 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 249 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
#line 249 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 249 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
#line 249 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 249 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
#line 249 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 176 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
#line 176 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Debug_6,
#line 176 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Pass1Only_7,
#line 176 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 176 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 176 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16);

#line 154 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2(
#line 154 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 154 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 154 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 154 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 140 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1(
#line 140 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 140 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 140 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 140 "trailing_analysis.m"
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


#line 346 "trailing_analysis.m"
/* sealed */ struct transform_hlds__trailing_analysis__vector_common_type_9_0_s {
#line 346 "trailing_analysis.m"
  const MR_Word transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 346 "trailing_analysis.m"
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



#line 1640 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1648 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0
  }
};

#line 1656 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 1664 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1672 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1681 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 1689 "transform_hlds.trailing_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0
};

#line 1696 "transform_hlds.trailing_analysis.c"
static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3] = {
  (MR_String) "tpr_ppid",
  (MR_String) "tpr_status",
  (MR_String) "tpr_maybe_analysis_status"
};

#line 1703 "transform_hlds.trailing_analysis.c"
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

#line 1718 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1] = {
  &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0
};

#line 1723 "transform_hlds.trailing_analysis.c"
static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0
  }
};

#line 1732 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1] = {
  &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0
};

#line 1737 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1] = {
  (MR_Integer) 0
};

#line 1742 "transform_hlds.trailing_analysis.c"
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

#line 1759 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1] = {
  (MR_Integer) 0
};

#line 1764 "transform_hlds.trailing_analysis.c"
static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 = {
  (MR_String) "trailing_analysis_answer",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0,
  NULL
};

#line 1771 "transform_hlds.trailing_analysis.c"
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

#line 1788 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 1799 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 1810 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 1819 "transform_hlds.trailing_analysis.c"
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

#line 1834 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
#line 1837 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1839 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1841 "transform_hlds.trailing_analysis.c"
{
#line 1843 "transform_hlds.trailing_analysis.c"
  {
#line 1845 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1848 "transform_hlds.trailing_analysis.c"
    {
#line 1850 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2));
    }
#line 1853 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 1855 "transform_hlds.trailing_analysis.c"
  }
#line 1857 "transform_hlds.trailing_analysis.c"
}

#line 1860 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
#line 1863 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1865 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1867 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1869 "transform_hlds.trailing_analysis.c"
{
#line 1871 "transform_hlds.trailing_analysis.c"
  {
#line 1873 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__1_1;

#line 1876 "transform_hlds.trailing_analysis.c"
    {
#line 1878 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(&transform_hlds__trailing_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 1881 "transform_hlds.trailing_analysis.c"
    *transform_hlds__trailing_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__1_1));
#line 1883 "transform_hlds.trailing_analysis.c"
  }
#line 1885 "transform_hlds.trailing_analysis.c"
}

#line 1888 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
#line 1891 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1893 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1895 "transform_hlds.trailing_analysis.c"
{
#line 1897 "transform_hlds.trailing_analysis.c"
  {
#line 1899 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1902 "transform_hlds.trailing_analysis.c"
    {
#line 1904 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2));
    }
#line 1907 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 1909 "transform_hlds.trailing_analysis.c"
  }
#line 1911 "transform_hlds.trailing_analysis.c"
}

#line 1914 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
#line 1917 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1919 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1921 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1923 "transform_hlds.trailing_analysis.c"
{
#line 1925 "transform_hlds.trailing_analysis.c"
  {
#line 1927 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__1_1;

#line 1930 "transform_hlds.trailing_analysis.c"
    {
#line 1932 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(&transform_hlds__trailing_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 1935 "transform_hlds.trailing_analysis.c"
    *transform_hlds__trailing_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__1_1));
#line 1937 "transform_hlds.trailing_analysis.c"
  }
#line 1939 "transform_hlds.trailing_analysis.c"
}

#line 1942 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 1945 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1947 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 1949 "transform_hlds.trailing_analysis.c"
{
#line 1951 "transform_hlds.trailing_analysis.c"
  {
#line 1953 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_2;
#line 1955 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 1957 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__2_2;

#line 1960 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1962 "transform_hlds.trailing_analysis.c"
    {
#line 1964 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__2_2 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
    }
#line 1967 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__2_2));
#line 1969 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_2;
#line 1971 "transform_hlds.trailing_analysis.c"
  }
#line 1973 "transform_hlds.trailing_analysis.c"
}

#line 1976 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 1979 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1981 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1983 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1985 "transform_hlds.trailing_analysis.c"
{
#line 1987 "transform_hlds.trailing_analysis.c"
  {
#line 1989 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1991 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 1993 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__2_2;

#line 1996 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1998 "transform_hlds.trailing_analysis.c"
    {
#line 2000 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv0_HeadVar__2_2);
    }
#line 2003 "transform_hlds.trailing_analysis.c"
    if (transform_hlds__trailing_analysis__succeeded)
#line 2005 "transform_hlds.trailing_analysis.c"
      {
#line 2007 "transform_hlds.trailing_analysis.c"
        *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__2_2));
#line 2009 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 2011 "transform_hlds.trailing_analysis.c"
      }
#line 2013 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2015 "transform_hlds.trailing_analysis.c"
  }
#line 2017 "transform_hlds.trailing_analysis.c"
}

#line 2020 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 2023 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2025 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2027 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2029 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 2031 "transform_hlds.trailing_analysis.c"
{
#line 2033 "transform_hlds.trailing_analysis.c"
  {
#line 2035 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 2037 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2040 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2042 "transform_hlds.trailing_analysis.c"
    {
#line 2044 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2047 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2049 "transform_hlds.trailing_analysis.c"
  }
#line 2051 "transform_hlds.trailing_analysis.c"
}

#line 2054 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 2057 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2059 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2061 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2063 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 2065 "transform_hlds.trailing_analysis.c"
{
#line 2067 "transform_hlds.trailing_analysis.c"
  {
#line 2069 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 2071 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2074 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2076 "transform_hlds.trailing_analysis.c"
    {
#line 2078 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2081 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2083 "transform_hlds.trailing_analysis.c"
  }
#line 2085 "transform_hlds.trailing_analysis.c"
}

#line 2088 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 2091 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2093 "transform_hlds.trailing_analysis.c"
{
#line 2095 "transform_hlds.trailing_analysis.c"
  {
#line 2097 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2099 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2101 "transform_hlds.trailing_analysis.c"
    MR_String transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2104 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2106 "transform_hlds.trailing_analysis.c"
    {
#line 2108 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0();
    }
#line 2111 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2113 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2115 "transform_hlds.trailing_analysis.c"
  }
#line 2117 "transform_hlds.trailing_analysis.c"
}

#line 2120 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 2123 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2125 "transform_hlds.trailing_analysis.c"
{
#line 2127 "transform_hlds.trailing_analysis.c"
  {
#line 2129 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2131 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2133 "transform_hlds.trailing_analysis.c"
    MR_Integer transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2136 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2138 "transform_hlds.trailing_analysis.c"
    {
#line 2140 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    }
#line 2143 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2145 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2147 "transform_hlds.trailing_analysis.c"
  }
#line 2149 "transform_hlds.trailing_analysis.c"
}

#line 2152 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 2155 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2157 "transform_hlds.trailing_analysis.c"
{
#line 2159 "transform_hlds.trailing_analysis.c"
  {
#line 2161 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2163 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2165 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2168 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2170 "transform_hlds.trailing_analysis.c"
    {
#line 2172 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    }
#line 2175 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2177 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2179 "transform_hlds.trailing_analysis.c"
  }
#line 2181 "transform_hlds.trailing_analysis.c"
}

#line 2184 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 2187 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2189 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 2191 "transform_hlds.trailing_analysis.c"
{
#line 2193 "transform_hlds.trailing_analysis.c"
  {
#line 2195 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2197 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2199 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2202 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2204 "transform_hlds.trailing_analysis.c"
    {
#line 2206 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0();
    }
#line 2209 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2211 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2213 "transform_hlds.trailing_analysis.c"
  }
#line 2215 "transform_hlds.trailing_analysis.c"
}

#line 2218 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
#line 2221 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2223 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 2225 "transform_hlds.trailing_analysis.c"
{
#line 2227 "transform_hlds.trailing_analysis.c"
  {
#line 2229 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2231 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2233 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2236 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2238 "transform_hlds.trailing_analysis.c"
    {
#line 2240 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0();
    }
#line 2243 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2245 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2247 "transform_hlds.trailing_analysis.c"
  }
#line 2249 "transform_hlds.trailing_analysis.c"
}

#line 2252 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 2255 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2257 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2259 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2261 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3,
#line 2263 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_6)
#line 2265 "transform_hlds.trailing_analysis.c"
{
#line 2267 "transform_hlds.trailing_analysis.c"
  {
#line 2269 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2272 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2274 "transform_hlds.trailing_analysis.c"
    {
#line 2276 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2279 "transform_hlds.trailing_analysis.c"
  }
#line 2281 "transform_hlds.trailing_analysis.c"
}

#line 1052 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1052 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1052 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3)
#line 1052 "trailing_analysis.m"
{
#line 1029 "trailing_analysis.m"
  {
#line 1029 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1029 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_11 = (MR_Integer) transform_hlds__trailing_analysis__Status_3;
#line 1029 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_12 = (MR_Integer) transform_hlds__trailing_analysis__Status_8;

#line 1029 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_11 == transform_hlds__trailing_analysis__CastY_12);
#line 1029 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1029 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1029 "trailing_analysis.m"
    else
#line 1029 "trailing_analysis.m"
      {
#line 1029 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9 = (MR_Word) transform_hlds__trailing_analysis__Status_3;
#line 1029 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_10_10 = (MR_Word) transform_hlds__trailing_analysis__Status_8;

#line 2317 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_9_9 == transform_hlds__trailing_analysis__V_10_10);
#line 1029 "trailing_analysis.m"
      }
#line 1029 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1029 "trailing_analysis.m"
  }
#line 1052 "trailing_analysis.m"
}

#line 1047 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1047 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1047 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5)
#line 1047 "trailing_analysis.m"
{
#line 1047 "trailing_analysis.m"
  {
#line 1047 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1047 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status1_6 = (MR_Word) transform_hlds__trailing_analysis__Answer1_4;
#line 1047 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status2_7 = (MR_Word) transform_hlds__trailing_analysis__Answer2_5;

#line 1058 "trailing_analysis.m"
#line 1058 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__Status1_6) {
#line 1058 "trailing_analysis.m"
      default:
#line 1058 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1058 "trailing_analysis.m"
        break;
#line 1058 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 1060 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__Status2_7 == (MR_Integer) 0);
#line 1058 "trailing_analysis.m"
        break;
#line 1058 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1058 "trailing_analysis.m"
#line 1058 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__Status2_7) {
#line 1058 "trailing_analysis.m"
          default:
#line 1058 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1058 "trailing_analysis.m"
            break;
#line 1058 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 1059 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1058 "trailing_analysis.m"
            break;
#line 1058 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 1058 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1058 "trailing_analysis.m"
            break;
#line 1058 "trailing_analysis.m"
        }
#line 1058 "trailing_analysis.m"
        break;
#line 1058 "trailing_analysis.m"
    }
#line 1047 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1047 "trailing_analysis.m"
  }
#line 1047 "trailing_analysis.m"
}

#line 1042 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void)
#line 1042 "trailing_analysis.m"
{
#line 1042 "trailing_analysis.m"
  {
#line 1042 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1042 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1042 "trailing_analysis.m"
  }
#line 1042 "trailing_analysis.m"
}

#line 1041 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1041 "trailing_analysis.m"
{
#line 1041 "trailing_analysis.m"
  {
#line 1041 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1041 "trailing_analysis.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1041 "trailing_analysis.m"
  }
#line 1041 "trailing_analysis.m"
}

#line 1040 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1040 "trailing_analysis.m"
{
#line 1040 "trailing_analysis.m"
  {
#line 1040 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1040 "trailing_analysis.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 1));
#line 1040 "trailing_analysis.m"
  }
#line 1040 "trailing_analysis.m"
}

#line 1039 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1039 "trailing_analysis.m"
{
#line 1039 "trailing_analysis.m"
  {
#line 1039 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1039 "trailing_analysis.m"
    return (MR_Integer) 0;
#line 1039 "trailing_analysis.m"
  }
#line 1039 "trailing_analysis.m"
}

#line 1038 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1038 "trailing_analysis.m"
{
#line 1038 "trailing_analysis.m"
  {
#line 1038 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1038 "trailing_analysis.m"
    return (MR_Integer) 1;
#line 1038 "trailing_analysis.m"
  }
#line 1038 "trailing_analysis.m"
}

#line 1037 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1037 "trailing_analysis.m"
{
#line 1034 "trailing_analysis.m"
  {
#line 1034 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1034 "trailing_analysis.m"
    return (MR_String) "trail_usage";
#line 1034 "trailing_analysis.m"
  }
#line 1037 "trailing_analysis.m"
}

#line 442 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__442__1_1_f_0(
#line 442 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__LambdaHeadVar__1_125)
#line 442 "trailing_analysis.m"
{
#line 442 "trailing_analysis.m"
  {
#line 442 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 442 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__LambdaHeadVar__2_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__LambdaHeadVar__1_125, (MR_Integer) 2)));
#line 442 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__LambdaHeadVar__1_125, (MR_Integer) 0)));
#line 442 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__LambdaHeadVar__1_125, (MR_Integer) 1)));

#line 442 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__LambdaHeadVar__2_126;
#line 442 "trailing_analysis.m"
  }
#line 442 "trailing_analysis.m"
}

#line 1064 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(
#line 1064 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1064 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__2_2)
#line 1064 "trailing_analysis.m"
{
#line 1076 "trailing_analysis.m"
  {
#line 1076 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1076 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_4;
#line 1076 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__String_5;
#line 1076 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_7_7;
#line 1076 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_8_8;
#line 1077 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6;

#line 1077 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1077 "trailing_analysis.m"
      {
#line 1077 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1077 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1077 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 1077 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__V_7_7)) == (MR_mktag((MR_Integer) 0)));
#line 1077 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 1077 "trailing_analysis.m"
          {
#line 1077 "trailing_analysis.m"
            transform_hlds__trailing_analysis__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, (MR_Integer) 0)));
#line 1077 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 1076 "trailing_analysis.m"
              {
#line 1084 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "conditional") == 0))
#line 1086 "trailing_analysis.m"
                  {
#line 1086 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 2;
#line 1086 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1086 "trailing_analysis.m"
                  }
#line 1084 "trailing_analysis.m"
                else
#line 1084 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "may_modify_trail") == 0))
#line 1084 "trailing_analysis.m"
                  {
#line 1084 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 0;
#line 1084 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1084 "trailing_analysis.m"
                  }
#line 1084 "trailing_analysis.m"
                else
#line 1084 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "will_not_modify_trail") == 0))
#line 1085 "trailing_analysis.m"
                  {
#line 1085 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 1085 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1085 "trailing_analysis.m"
                  }
#line 1084 "trailing_analysis.m"
                else
#line 1084 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1076 "trailing_analysis.m"
                if (transform_hlds__trailing_analysis__succeeded)
#line 1076 "trailing_analysis.m"
                  {
#line 1076 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Word) transform_hlds__trailing_analysis__Status_4;
#line 1076 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1076 "trailing_analysis.m"
                  }
#line 1076 "trailing_analysis.m"
              }
#line 1077 "trailing_analysis.m"
          }
#line 1077 "trailing_analysis.m"
      }
#line 1076 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1076 "trailing_analysis.m"
  }
#line 1064 "trailing_analysis.m"
}

#line 1063 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(
#line 1063 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1)
#line 1063 "trailing_analysis.m"
{
#line 1069 "trailing_analysis.m"
  {
#line 1069 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1069 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1069 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1069 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__String_5;
#line 1069 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6;
#line 1069 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_8_8;

#line 1084 "trailing_analysis.m"
#line 1084 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__Status_4) {
#line 1084 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1084 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 1086 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "conditional";
#line 1084 "trailing_analysis.m"
        break;
#line 1084 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 1084 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "may_modify_trail";
#line 1084 "trailing_analysis.m"
        break;
#line 1084 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1085 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "will_not_modify_trail";
#line 1084 "trailing_analysis.m"
        break;
#line 1084 "trailing_analysis.m"
    }
#line 1071 "trailing_analysis.m"
    {
#line 1071 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_6_6, 0) = ((MR_Box) (transform_hlds__trailing_analysis__String_5));
#line 1071 "trailing_analysis.m"
    }
#line 1071 "trailing_analysis.m"
    {
#line 1071 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 1071 "trailing_analysis.m"
    {
#line 1071 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_6_6));
#line 1071 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__trailing_analysis__V_8_8));
#line 1071 "trailing_analysis.m"
    }
#line 1069 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1069 "trailing_analysis.m"
  }
#line 1063 "trailing_analysis.m"
}

#line 1052 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
#line 1052 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1052 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3)
#line 1052 "trailing_analysis.m"
{
#line 1029 "trailing_analysis.m"
  {
#line 1029 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1029 "trailing_analysis.m"
    {
#line 1029 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__trailing_analysis__Status_8, transform_hlds__trailing_analysis__Status_3);
    }
#line 1029 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1029 "trailing_analysis.m"
  }
#line 1052 "trailing_analysis.m"
}

#line 1047 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 1047 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1047 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5)
#line 1047 "trailing_analysis.m"
{
#line 1047 "trailing_analysis.m"
  {
#line 1047 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1047 "trailing_analysis.m"
    {
#line 1047 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__trailing_analysis__Answer1_4, transform_hlds__trailing_analysis__Answer2_5);
    }
#line 1047 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1047 "trailing_analysis.m"
  }
#line 1047 "trailing_analysis.m"
}

#line 1042 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 1042 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_17,
#line 1042 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_18,
#line 1042 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_19)
#line 1042 "trailing_analysis.m"
{
#line 1042 "trailing_analysis.m"
  {
#line 1042 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1042 "trailing_analysis.m"
    {
#line 1042 "trailing_analysis.m"
      transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0();
    }
#line 1042 "trailing_analysis.m"
  }
#line 1042 "trailing_analysis.m"
}

#line 1041 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0(void)
#line 1041 "trailing_analysis.m"
{
#line 1041 "trailing_analysis.m"
  {
#line 1041 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1041 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1041 "trailing_analysis.m"
    {
#line 1041 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1041 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1041 "trailing_analysis.m"
  }
#line 1041 "trailing_analysis.m"
}

#line 1040 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0(void)
#line 1040 "trailing_analysis.m"
{
#line 1040 "trailing_analysis.m"
  {
#line 1040 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1040 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1040 "trailing_analysis.m"
    {
#line 1040 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1040 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1040 "trailing_analysis.m"
  }
#line 1040 "trailing_analysis.m"
}

#line 1039 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
#line 1039 "trailing_analysis.m"
{
#line 1039 "trailing_analysis.m"
  {
#line 1039 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1039 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1039 "trailing_analysis.m"
    {
#line 1039 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1039 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1039 "trailing_analysis.m"
  }
#line 1039 "trailing_analysis.m"
}

#line 1038 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
#line 1038 "trailing_analysis.m"
{
#line 1038 "trailing_analysis.m"
  {
#line 1038 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1038 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1038 "trailing_analysis.m"
    {
#line 1038 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1038 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1038 "trailing_analysis.m"
  }
#line 1038 "trailing_analysis.m"
}

#line 1037 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void)
#line 1037 "trailing_analysis.m"
{
#line 1034 "trailing_analysis.m"
  {
#line 1034 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1034 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1034 "trailing_analysis.m"
    {
#line 1034 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1034 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1034 "trailing_analysis.m"
  }
#line 1037 "trailing_analysis.m"
}

#line 1029 "trailing_analysis.m"
void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(
#line 1029 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1029 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 1029 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3)
#line 1029 "trailing_analysis.m"
{
#line 1029 "trailing_analysis.m"
  {
#line 1029 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1029 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_6 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1029 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_7 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1029 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_6 == transform_hlds__trailing_analysis__CastY_7);
#line 1029 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 2934 "transform_hlds.trailing_analysis.c"
      *transform_hlds__trailing_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 1029 "trailing_analysis.m"
    else
#line 1029 "trailing_analysis.m"
      {
#line 1029 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1029 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1029 "trailing_analysis.m"
        MR_Integer transform_hlds__trailing_analysis__V_9_9 = (MR_Integer) transform_hlds__trailing_analysis__V_4_4;
#line 1029 "trailing_analysis.m"
        MR_Integer transform_hlds__trailing_analysis__V_10_10 = (MR_Integer) transform_hlds__trailing_analysis__V_5_5;

#line 1029 "trailing_analysis.m"
        {
#line 1029 "trailing_analysis.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__trailing_analysis__HeadVar__1_1, transform_hlds__trailing_analysis__V_9_9, transform_hlds__trailing_analysis__V_10_10);
        }
#line 1029 "trailing_analysis.m"
      }
#line 1029 "trailing_analysis.m"
  }
#line 1029 "trailing_analysis.m"
}

#line 1029 "trailing_analysis.m"
MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(
#line 1029 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1029 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2)
#line 1029 "trailing_analysis.m"
{
#line 1029 "trailing_analysis.m"
  {
#line 1029 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1029 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_5 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1029 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_6 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 1029 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_5 == transform_hlds__trailing_analysis__CastY_6);
#line 1029 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1029 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1029 "trailing_analysis.m"
    else
#line 1029 "trailing_analysis.m"
      {
#line 1029 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_3_3 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1029 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 2994 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_3_3 == transform_hlds__trailing_analysis__V_4_4);
#line 1029 "trailing_analysis.m"
      }
#line 1029 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1029 "trailing_analysis.m"
  }
#line 1029 "trailing_analysis.m"
}

#line 169 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
#line 169 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 169 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 169 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3)
#line 169 "trailing_analysis.m"
{
#line 169 "trailing_analysis.m"
  {
#line 169 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 169 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_12 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 169 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_13 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__3_3;

#line 169 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_12 == transform_hlds__trailing_analysis__CastY_13);
#line 169 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 3029 "transform_hlds.trailing_analysis.c"
      *transform_hlds__trailing_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "trailing_analysis.m"
    else
#line 169 "trailing_analysis.m"
      {
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_10_10;

#line 169 "trailing_analysis.m"
        {
#line 169 "trailing_analysis.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__trailing_analysis__V_10_10, transform_hlds__trailing_analysis__V_4_4, transform_hlds__trailing_analysis__V_7_7);
        }
#line 3055 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_10_10 == (MR_Integer) 0);
#line 169 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 169 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 169 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__HeadVar__1_1 = transform_hlds__trailing_analysis__V_10_10;
#line 169 "trailing_analysis.m"
        else
#line 169 "trailing_analysis.m"
          {
#line 169 "trailing_analysis.m"
            MR_Word transform_hlds__trailing_analysis__V_11_11;
#line 169 "trailing_analysis.m"
            MR_Integer transform_hlds__trailing_analysis__V_17_17 = (MR_Integer) transform_hlds__trailing_analysis__V_5_5;
#line 169 "trailing_analysis.m"
            MR_Integer transform_hlds__trailing_analysis__V_18_18 = (MR_Integer) transform_hlds__trailing_analysis__V_8_8;

#line 169 "trailing_analysis.m"
            {
#line 169 "trailing_analysis.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__trailing_analysis__V_11_11, transform_hlds__trailing_analysis__V_17_17, transform_hlds__trailing_analysis__V_18_18);
            }
#line 3079 "transform_hlds.trailing_analysis.c"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_11_11 == (MR_Integer) 0);
#line 169 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 169 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 169 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__HeadVar__1_1 = transform_hlds__trailing_analysis__V_11_11;
#line 169 "trailing_analysis.m"
            else
#line 169 "trailing_analysis.m"
              {
#line 169 "trailing_analysis.m"
                {
#line 169 "trailing_analysis.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2], transform_hlds__trailing_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__trailing_analysis__V_6_6)), ((MR_Box) (transform_hlds__trailing_analysis__V_9_9)));
                }
#line 169 "trailing_analysis.m"
              }
#line 169 "trailing_analysis.m"
          }
#line 169 "trailing_analysis.m"
      }
#line 169 "trailing_analysis.m"
  }
#line 169 "trailing_analysis.m"
}

#line 169 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
#line 169 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 169 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2)
#line 169 "trailing_analysis.m"
{
#line 169 "trailing_analysis.m"
  {
#line 169 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 169 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_9 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 169 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_10 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 169 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_9 == transform_hlds__trailing_analysis__CastY_10);
#line 169 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 169 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 169 "trailing_analysis.m"
    else
#line 169 "trailing_analysis.m"
      {
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeInfo_12_12;
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 3150 "transform_hlds.trailing_analysis.c"
        {
#line 3152 "transform_hlds.trailing_analysis.c"
          transform_hlds__trailing_analysis__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__trailing_analysis__V_3_3, transform_hlds__trailing_analysis__V_6_6);
        }
#line 169 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 169 "trailing_analysis.m"
          {
#line 3159 "transform_hlds.trailing_analysis.c"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_4_4 == transform_hlds__trailing_analysis__V_7_7);
#line 169 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 169 "trailing_analysis.m"
              {
#line 3165 "transform_hlds.trailing_analysis.c"
                transform_hlds__trailing_analysis__TypeInfo_12_12 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 3167 "transform_hlds.trailing_analysis.c"
                {
#line 3169 "transform_hlds.trailing_analysis.c"
                  transform_hlds__trailing_analysis__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__trailing_analysis__TypeInfo_12_12, ((MR_Box) (transform_hlds__trailing_analysis__V_5_5)), ((MR_Box) (transform_hlds__trailing_analysis__V_8_8)));
                }
#line 169 "trailing_analysis.m"
              }
#line 169 "trailing_analysis.m"
          }
#line 169 "trailing_analysis.m"
      }
#line 169 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 169 "trailing_analysis.m"
  }
#line 169 "trailing_analysis.m"
}

#line 1193 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_4_p_0(
#line 1193 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Moduleinfo_5,
#line 1193 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6)
#line 1193 "trailing_analysis.m"
{
#line 1196 "trailing_analysis.m"
  {
#line 1196 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1196 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Pieces_8;
#line 1196 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__Str_9;
#line 1196 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__V_21_21;

#line 1197 "trailing_analysis.m"
    {
#line 1197 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Pieces_8 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__trailing_analysis__Moduleinfo_5, (MR_Integer) 0, transform_hlds__trailing_analysis__PPId_6);
    }
#line 1198 "trailing_analysis.m"
    {
#line 1198 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Str_9 = parse_tree__error_util__error_pieces_to_string_1_f_0(transform_hlds__trailing_analysis__Pieces_8);
    }
#line 1199 "trailing_analysis.m"
    {
#line 1199 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1199 "trailing_analysis.m"
    {
#line 1199 "trailing_analysis.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_8[1], transform_hlds__trailing_analysis__Str_9, &transform_hlds__trailing_analysis__V_21_21);
    }
#line 1199 "trailing_analysis.m"
    {
#line 1199 "trailing_analysis.m"
      mercury__io__write_string_3_p_0(transform_hlds__trailing_analysis__V_21_21);
    }
#line 1199 "trailing_analysis.m"
    {
#line 1199 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1196 "trailing_analysis.m"
  }
#line 1193 "trailing_analysis.m"
}

#line 1191 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1(
#line 1191 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1191 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1191 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1191 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1191 "trailing_analysis.m"
{
#line 1191 "trailing_analysis.m"
  {
#line 1191 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;

#line 1191 "trailing_analysis.m"
    {
#line 1191 "trailing_analysis.m"
      transform_hlds__trailing_analysis__output_proc_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
    }
#line 1191 "trailing_analysis.m"
  }
#line 1191 "trailing_analysis.m"
}

#line 1178 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(
#line 1178 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 1178 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 1178 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8)
#line 1178 "trailing_analysis.m"
{
#line 1181 "trailing_analysis.m"
  {
#line 1181 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1181 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_24_24;
#line 1191 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_IO_16_16;

#line 1182 "trailing_analysis.m"
    {
#line 1182 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "SCC: ");
    }
#line 1183 "trailing_analysis.m"
    {
#line 1183 "trailing_analysis.m"
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, ((MR_Box) (transform_hlds__trailing_analysis__Status_8)));
    }
#line 1184 "trailing_analysis.m"
    {
#line 1184 "trailing_analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1191 "trailing_analysis.m"
    {
#line 1191 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
#line 1191 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 1) = ((MR_Box) (transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1));
#line 1191 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1191 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 1191 "trailing_analysis.m"
    }
#line 1191 "trailing_analysis.m"
    {
#line 1191 "trailing_analysis.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__trailing_analysis__V_24_24, transform_hlds__trailing_analysis__SCC_7, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 1186 "trailing_analysis.m"
    {
#line 1186 "trailing_analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1181 "trailing_analysis.m"
  }
#line 1178 "trailing_analysis.m"
}

#line 1132 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
#line 1132 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_7,
#line 1132 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_8,
#line 1132 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_9,
#line 1132 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__ProcId_10,
#line 1132 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18,
#line 1132 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19)
#line 1132 "trailing_analysis.m"
{
#line 1136 "trailing_analysis.m"
  {
#line 1136 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1136 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ShouldWrite_12;

#line 1137 "trailing_analysis.m"
    {
#line 1137 "trailing_analysis.m"
      transform_hlds__intermod__should_write_trailing_info_6_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PredId_8, transform_hlds__trailing_analysis__ProcId_10, transform_hlds__trailing_analysis__PredInfo_9, (MR_Integer) 0, &transform_hlds__trailing_analysis__ShouldWrite_12);
    }
#line 1146 "trailing_analysis.m"
#line 1146 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__ShouldWrite_12) {
#line 1146 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 1147 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18;
#line 1146 "trailing_analysis.m"
        break;
#line 1146 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1140 "trailing_analysis.m"
        {
#line 1140 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__PPId_13;
#line 1140 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Status_14;
#line 1140 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ResultStatus_15;
#line 1140 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_16;
#line 1140 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__FuncId_17;
#line 1140 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_22_22;
#line 1140 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcInfo_30;
#line 1140 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31;
#line 1154 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___PredInfo_29;

#line 1141 "trailing_analysis.m"
          {
#line 1141 "trailing_analysis.m"
            transform_hlds__trailing_analysis__PPId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__PPId_13, 0) = ((MR_Box) (transform_hlds__trailing_analysis__PredId_8));
#line 1141 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__PPId_13, 1) = ((MR_Box) (transform_hlds__trailing_analysis__ProcId_10));
#line 1141 "trailing_analysis.m"
          }
#line 1154 "trailing_analysis.m"
          {
#line 1154 "trailing_analysis.m"
            hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PPId_13, &transform_hlds__trailing_analysis___PredInfo_29, &transform_hlds__trailing_analysis__ProcInfo_30);
          }
#line 1155 "trailing_analysis.m"
          {
#line 1155 "trailing_analysis.m"
            hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_30, &transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31);
          }
#line 1165 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "trailing_analysis.m"
            {
#line 1169 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_14 = (MR_Integer) 0;
#line 1170 "trailing_analysis.m"
              transform_hlds__trailing_analysis__ResultStatus_15 = (MR_Integer) 2;
#line 1166 "trailing_analysis.m"
            }
#line 1165 "trailing_analysis.m"
          else
#line 1157 "trailing_analysis.m"
            {
#line 1157 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31, (MR_Integer) 0)));
#line 1157 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__MaybeResultStatus_33;

#line 1158 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_32, (MR_Integer) 0)));
#line 1158 "trailing_analysis.m"
              transform_hlds__trailing_analysis__MaybeResultStatus_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_32, (MR_Integer) 1)));
#line 1161 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__MaybeResultStatus_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1162 "trailing_analysis.m"
                {
#line 1163 "trailing_analysis.m"
                  {
#line 1163 "trailing_analysis.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.lookup_proc_trailing_info\'/4", (MR_String) "no result status");
#line 1163 "trailing_analysis.m"
                    return;
                  }
#line 1162 "trailing_analysis.m"
                }
#line 1161 "trailing_analysis.m"
              else
#line 1160 "trailing_analysis.m"
                transform_hlds__trailing_analysis__ResultStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResultStatus_33, (MR_Integer) 0)));
#line 1157 "trailing_analysis.m"
            }
#line 1143 "trailing_analysis.m"
          {
#line 1143 "trailing_analysis.m"
            transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PPId_13, &transform_hlds__trailing_analysis__ModuleName_16, &transform_hlds__trailing_analysis__FuncId_17);
          }
#line 1144 "trailing_analysis.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1145 "trailing_analysis.m"
          transform_hlds__trailing_analysis__V_22_22 = (MR_Word) transform_hlds__trailing_analysis__Status_14;
#line 1144 "trailing_analysis.m"
          {
#line 1144 "trailing_analysis.m"
            analysis__record_result_7_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__ModuleName_16, transform_hlds__trailing_analysis__FuncId_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (transform_hlds__trailing_analysis__V_22_22)), transform_hlds__trailing_analysis__ResultStatus_15, transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18, transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19);
          }
#line 1140 "trailing_analysis.m"
        }
#line 1146 "trailing_analysis.m"
        break;
#line 1146 "trailing_analysis.m"
    }
#line 1136 "trailing_analysis.m"
  }
#line 1132 "trailing_analysis.m"
}

#line 1129 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
#line 1129 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1129 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1129 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1129 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1129 "trailing_analysis.m"
{
#line 1129 "trailing_analysis.m"
  {
#line 1129 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1129 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19;

#line 1129 "trailing_analysis.m"
    {
#line 1129 "trailing_analysis.m"
      transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19);
    }
#line 1129 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19));
#line 1129 "trailing_analysis.m"
  }
#line 1129 "trailing_analysis.m"
}

#line 1123 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
#line 1123 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 1123 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_6,
#line 1123 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10,
#line 1123 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11)
#line 1123 "trailing_analysis.m"
{
#line 1126 "trailing_analysis.m"
  {
#line 1126 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1126 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo_8;
#line 1126 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcIds_9;
#line 1126 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_12_12;
#line 1129 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11;

#line 1127 "trailing_analysis.m"
    {
#line 1127 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__PredId_6, &transform_hlds__trailing_analysis__PredInfo_8);
    }
#line 1128 "trailing_analysis.m"
    {
#line 1128 "trailing_analysis.m"
      transform_hlds__trailing_analysis__ProcIds_9 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__trailing_analysis__PredInfo_8);
    }
#line 1129 "trailing_analysis.m"
    {
#line 1129 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[3]));
#line 1129 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 1) = ((MR_Box) (transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1));
#line 1129 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1129 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 1129 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 4) = ((MR_Box) (transform_hlds__trailing_analysis__PredId_6));
#line 1129 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 5) = ((MR_Box) (transform_hlds__trailing_analysis__PredInfo_8));
#line 1129 "trailing_analysis.m"
    }
#line 1129 "trailing_analysis.m"
    {
#line 1129 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__trailing_analysis__V_12_12, transform_hlds__trailing_analysis__ProcIds_9, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10)), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11);
    }
#line 1129 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11 = ((MR_Word) transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11);
#line 1126 "trailing_analysis.m"
  }
#line 1123 "trailing_analysis.m"
}

#line 1088 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
#line 1088 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 1088 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_7,
#line 1088 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_8,
#line 1088 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12,
#line 1088 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13)
#line 1088 "trailing_analysis.m"
{
#line 1091 "trailing_analysis.m"
  {
#line 1091 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1091 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__AnalysisInfo0_10;
#line 1091 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__AnalysisInfo_11;
#line 1091 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ModuleName_22;
#line 1091 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__FuncId_23;
#line 1091 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeBestStatus_25;

#line 1092 "trailing_analysis.m"
    {
#line 1092 "trailing_analysis.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__trailing_analysis__AnalysisInfo0_10);
    }
#line 1103 "trailing_analysis.m"
    {
#line 1103 "trailing_analysis.m"
      transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__trailing_analysis__PPId_6, &transform_hlds__trailing_analysis__ModuleName_22, &transform_hlds__trailing_analysis__FuncId_23);
    }
#line 1104 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1106 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1105 "trailing_analysis.m"
    {
#line 1105 "trailing_analysis.m"
      analysis__lookup_best_result_6_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__AnalysisInfo0_10, transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trailing_analysis__MaybeBestStatus_25);
    }
#line 1112 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeBestStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1113 "trailing_analysis.m"
      {
#line 1113 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeClassInfo_for_analysis_40 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0];
#line 1113 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__Answer_28;
#line 74 "analysis.int"
        MR_Box MR_CALL (* transform_hlds__trailing_analysis__func_0)(MR_Box, MR_Box);
#line 74 "analysis.int"
        MR_Box transform_hlds__trailing_analysis__conv1_Answer_28;

#line 1116 "trailing_analysis.m"
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
#line 1117 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_7 = (MR_Word) transform_hlds__trailing_analysis__Answer_28;
#line 1118 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__AnalysisStatus_8 = (MR_Integer) 2;
#line 1119 "trailing_analysis.m"
        {
#line 1119 "trailing_analysis.m"
          analysis__record_request_6_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_3[0], (MR_String) "trail_usage", transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), transform_hlds__trailing_analysis__AnalysisInfo0_10, &transform_hlds__trailing_analysis__AnalysisInfo_11);
        }
#line 1113 "trailing_analysis.m"
      }
#line 1112 "trailing_analysis.m"
    else
#line 1109 "trailing_analysis.m"
      {
#line 1109 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeBestStatus_25, (MR_Integer) 0)));
#line 1109 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_33_33, (MR_Integer) 1)));
#line 1110 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_36_36;

#line 1108 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__AnalysisStatus_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_33_33, (MR_Integer) 2)));
#line 1109 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_7 = (MR_Word) transform_hlds__trailing_analysis__V_34_34;
#line 1110 "trailing_analysis.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1110 "trailing_analysis.m"
        {
#line 1110 "trailing_analysis.m"
          analysis__record_dependency_7_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__trailing_analysis__AnalysisInfo0_10, &transform_hlds__trailing_analysis__AnalysisInfo_11);
        }
#line 1109 "trailing_analysis.m"
      }
#line 1095 "trailing_analysis.m"
    {
#line 1095 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__trailing_analysis__AnalysisInfo_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13);
    }
#line 1091 "trailing_analysis.m"
  }
#line 1088 "trailing_analysis.m"
}

#line 1016 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
#line 1016 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1016 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15,
#line 1016 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16,
#line 1016 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1016 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 1016 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18)
#line 1016 "trailing_analysis.m"
{
#line 1019 "trailing_analysis.m"
  {
#line 1019 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1019 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 0)));
#line 1019 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 1)));
#line 1019 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 2)));
#line 1019 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Goal_14;
#line 1019 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal0_13, (MR_Integer) 0)));
#line 1019 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal0_13, (MR_Integer) 1)));
#line 1019 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_31;
#line 1019 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_32;

#line 830 "trailing_analysis.m"
    {
#line 830 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__GoalInfo0_30, transform_hlds__trailing_analysis__GoalExpr0_29, &transform_hlds__trailing_analysis__GoalExpr_31, transform_hlds__trailing_analysis__Status_9, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);
    }
#line 836 "trailing_analysis.m"
#line 836 "trailing_analysis.m"
    switch (*transform_hlds__trailing_analysis__Status_9) {
#line 836 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 836 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 836 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 840 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_32 = transform_hlds__trailing_analysis__GoalInfo0_30;
#line 836 "trailing_analysis.m"
        break;
#line 836 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 833 "trailing_analysis.m"
        {
#line 834 "trailing_analysis.m"
          {
#line 834 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_30, &transform_hlds__trailing_analysis__GoalInfo_32);
          }
#line 833 "trailing_analysis.m"
        }
#line 836 "trailing_analysis.m"
        break;
#line 836 "trailing_analysis.m"
    }
#line 842 "trailing_analysis.m"
    {
#line 842 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_14, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_31));
#line 842 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_14, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_32));
#line 842 "trailing_analysis.m"
    }
#line 1022 "trailing_analysis.m"
    {
#line 1022 "trailing_analysis.m"
      MR_Word base;
#line 1022 "trailing_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16 = base;
#line 1022 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__MainConsId_11));
#line 1022 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__OtherConsIds_12));
#line 1022 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__Goal_14));
#line 1022 "trailing_analysis.m"
    }
#line 1019 "trailing_analysis.m"
  }
#line 1016 "trailing_analysis.m"
}

#line 1013 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
#line 1013 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1013 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1013 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1013 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1013 "trailing_analysis.m"
{
#line 1013 "trailing_analysis.m"
  {
#line 1013 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1013 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 1013 "trailing_analysis.m"
    {
#line 1013 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 1013 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 1013 "trailing_analysis.m"
  }
#line 1013 "trailing_analysis.m"
}

#line 1011 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
#line 1011 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1011 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1011 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1011 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1011 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1011 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 1011 "trailing_analysis.m"
{
#line 1011 "trailing_analysis.m"
  {
#line 1011 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1011 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16;
#line 1011 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_Status_9;
#line 1011 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 1011 "trailing_analysis.m"
    {
#line 1011 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16, &transform_hlds__trailing_analysis__conv1_Status_9, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 1011 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16));
#line 1011 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_Status_9));
#line 1011 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 1011 "trailing_analysis.m"
  }
#line 1011 "trailing_analysis.m"
}

#line 1007 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
#line 1007 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1007 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12,
#line 1007 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13,
#line 1007 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1007 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 1007 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15)
#line 1007 "trailing_analysis.m"
{
#line 1010 "trailing_analysis.m"
  {
#line 1010 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1010 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_26_26;
#line 1010 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 1010 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Statuses_11;
#line 1010 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_16_16;
#line 1011 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15;
#line 1013 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Status_9;

#line 1011 "trailing_analysis.m"
    {
#line 1011 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
#line 1011 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1));
#line 1011 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1011 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 3) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_7));
#line 1011 "trailing_analysis.m"
    }
#line 3924 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 3926 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 1011 "trailing_analysis.m"
    {
#line 1011 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13, &transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
    }
#line 1011 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
#line 1013 "trailing_analysis.m"
    {
#line 1013 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[9], transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_9);
    }
#line 1013 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Status_9 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_9);
#line 1010 "trailing_analysis.m"
  }
#line 1007 "trailing_analysis.m"
}

#line 1004 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
#line 1004 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1004 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1004 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1004 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1004 "trailing_analysis.m"
{
#line 1004 "trailing_analysis.m"
  {
#line 1004 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1004 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 1004 "trailing_analysis.m"
    {
#line 1004 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 1004 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 1004 "trailing_analysis.m"
  }
#line 1004 "trailing_analysis.m"
}

#line 1002 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
#line 1002 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1002 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1002 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1002 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1002 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1002 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 1002 "trailing_analysis.m"
{
#line 1002 "trailing_analysis.m"
  {
#line 1002 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1002 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16;
#line 1002 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_Status_9;
#line 1002 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 1002 "trailing_analysis.m"
    {
#line 1002 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16, &transform_hlds__trailing_analysis__conv1_Status_9, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 1002 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16));
#line 1002 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_Status_9));
#line 1002 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 1002 "trailing_analysis.m"
  }
#line 1002 "trailing_analysis.m"
}

#line 997 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
#line 997 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 997 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12,
#line 997 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13,
#line 997 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 997 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 997 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15)
#line 997 "trailing_analysis.m"
{
#line 1001 "trailing_analysis.m"
  {
#line 1001 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1001 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_26_26;
#line 1001 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 1001 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Statuses_11;
#line 1001 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_16_16;
#line 1002 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15;
#line 1004 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Status_9;

#line 1002 "trailing_analysis.m"
    {
#line 1002 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[1]));
#line 1002 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1));
#line 1002 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1002 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 3) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_7));
#line 1002 "trailing_analysis.m"
    }
#line 4071 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 4073 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 1002 "trailing_analysis.m"
    {
#line 1002 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13, &transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
    }
#line 1002 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
#line 1004 "trailing_analysis.m"
    {
#line 1004 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[8], transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_9);
    }
#line 1004 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Status_9 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_9);
#line 1001 "trailing_analysis.m"
  }
#line 997 "trailing_analysis.m"
}

#line 872 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
#line 872 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 872 "trailing_analysis.m"
{
#line 872 "trailing_analysis.m"
  {
#line 872 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 872 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0, 1);
#line 872 "trailing_analysis.m"
  }
#line 872 "trailing_analysis.m"
}

#line 872 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
#line 872 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 872 "trailing_analysis.m"
{
#line 872 "trailing_analysis.m"
  {
#line 872 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 872 "trailing_analysis.m"
    {
#line 879 "trailing_analysis.m"
      MR_String transform_hlds__trailing_analysis__V_50_50;

#line 879 "trailing_analysis.m"
      {
#line 879 "trailing_analysis.m"
        mdbcomp__prim_data__special_pred_name_arity_4_p_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139, &transform_hlds__trailing_analysis__V_50_50, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140);
      }
#line 879 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (strcmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139) == 0);
#line 872 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 872 "trailing_analysis.m"
        {
#line 879 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48 == (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140);
#line 879 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 879 "trailing_analysis.m"
            {
#line 879 "trailing_analysis.m"
              transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(transform_hlds__trailing_analysis__env_ptr);
            }
#line 872 "trailing_analysis.m"
        }
#line 872 "trailing_analysis.m"
    }
#line 872 "trailing_analysis.m"
  }
#line 872 "trailing_analysis.m"
}

#line 872 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
#line 872 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 872 "trailing_analysis.m"
{
#line 872 "trailing_analysis.m"
  {
#line 872 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 872 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0) == 0)
#line 872 "trailing_analysis.m"
      {
#line 872 "trailing_analysis.m"
        {
#line 872 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_46;

#line 872 "trailing_analysis.m"
          {
#line 872 "trailing_analysis.m"
            transform_hlds__trailing_analysis__ModuleName_46 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 873 "trailing_analysis.m"
          {
#line 873 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__trailing_analysis__ModuleName_46);
          }
#line 872 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 872 "trailing_analysis.m"
            {
#line 874 "trailing_analysis.m"
              {
#line 874 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47 = hlds__hlds_pred__pred_info_name_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
              }
#line 875 "trailing_analysis.m"
              {
#line 875 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48 = hlds__hlds_pred__pred_info_orig_arity_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
              }
#line 877 "trailing_analysis.m"
              {
#line 877 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__slot_1 = (MR_Integer) 0;

#line 877 "trailing_analysis.m"
                do
#line 877 "trailing_analysis.m"
                  {
#line 877 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49 = ((&transform_hlds__trailing_analysis_vector_common_9[2 + transform_hlds__trailing_analysis__slot_1]))->transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 877 "trailing_analysis.m"
                    {
#line 877 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(transform_hlds__trailing_analysis__env_ptr);
                    }
#line 877 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__slot_1 = (transform_hlds__trailing_analysis__slot_1 + (MR_Integer) 1);
#line 877 "trailing_analysis.m"
                  }
#line 877 "trailing_analysis.m"
                while ((transform_hlds__trailing_analysis__slot_1 < (MR_Integer) 2));
#line 877 "trailing_analysis.m"
              }
#line 872 "trailing_analysis.m"
            }
#line 872 "trailing_analysis.m"
        }
#line 872 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 872 "trailing_analysis.m"
      }
#line 872 "trailing_analysis.m"
    else
#line 872 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 872 "trailing_analysis.m"
  }
#line 872 "trailing_analysis.m"
}

#line 844 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
#line 844 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_8,
#line 844 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__GoalInfo_9,
#line 844 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109,
#line 844 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110,
#line 844 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_11,
#line 844 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111,
#line 844 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112)
#line 844 "trailing_analysis.m"
{
#line 844 "trailing_analysis.m"
  {
#line 844 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 850 "trailing_analysis.m"
#line 850 "trailing_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109)) {
#line 850 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 850 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 974 "trailing_analysis.m"
        {
#line 974 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SubGoal0_97 = (MR_Word) MR_body(((MR_Word) transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109), (MR_Integer) 0);
#line 974 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SubGoal_98;

#line 975 "trailing_analysis.m"
          {
#line 975 "trailing_analysis.m"
            transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__SubGoal0_97, &transform_hlds__trailing_analysis__SubGoal_98, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
          }
#line 976 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__trailing_analysis__SubGoal_98);
#line 974 "trailing_analysis.m"
        }
#line 850 "trailing_analysis.m"
        break;
#line 850 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 850 "trailing_analysis.m"
        {
#line 850 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 850 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)));
#line 850 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 850 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 850 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));

#line 857 "trailing_analysis.m"
#line 857 "trailing_analysis.m"
          switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Kind_16)) {
#line 857 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 857 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 852 "trailing_analysis.m"
              {
#line 852 "trailing_analysis.m"
              }
#line 857 "trailing_analysis.m"
              break;
#line 857 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 853 "trailing_analysis.m"
              {
#line 853 "trailing_analysis.m"
              }
#line 857 "trailing_analysis.m"
              break;
#line 857 "trailing_analysis.m"
            case (MR_Integer) 2:
#line 854 "trailing_analysis.m"
              {
#line 854 "trailing_analysis.m"
              }
#line 857 "trailing_analysis.m"
              break;
#line 857 "trailing_analysis.m"
            case (MR_Integer) 3:
#line 857 "trailing_analysis.m"
#line 857 "trailing_analysis.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Kind_16, (MR_Integer) 0)))) {
#line 857 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 857 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 855 "trailing_analysis.m"
                  {
#line 855 "trailing_analysis.m"
                  }
#line 857 "trailing_analysis.m"
                  break;
#line 857 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 858 "trailing_analysis.m"
                  {
#line 859 "trailing_analysis.m"
                    {
#line 859 "trailing_analysis.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "complicated unify");
#line 859 "trailing_analysis.m"
                      return;
                    }
#line 858 "trailing_analysis.m"
                  }
#line 857 "trailing_analysis.m"
                  break;
#line 857 "trailing_analysis.m"
              }
#line 857 "trailing_analysis.m"
              break;
#line 857 "trailing_analysis.m"
          }
#line 861 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 850 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 850 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 850 "trailing_analysis.m"
        }
#line 850 "trailing_analysis.m"
        break;
#line 850 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 863 "trailing_analysis.m"
        {
#line 863 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallPredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)));
#line 863 "trailing_analysis.m"
          MR_Integer transform_hlds__trailing_analysis__CallProcId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 863 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 863 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallPPId_44;
#line 863 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 863 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 863 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));

#line 864 "trailing_analysis.m"
          {
#line 864 "trailing_analysis.m"
            transform_hlds__trailing_analysis__CallPPId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_44, 0) = ((MR_Box) (transform_hlds__trailing_analysis__CallPredId_38));
#line 864 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_44, 1) = ((MR_Box) (transform_hlds__trailing_analysis__CallProcId_39));
#line 864 "trailing_analysis.m"
          }
#line 865 "trailing_analysis.m"
          {
#line 865 "trailing_analysis.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__CallPredId_38, &(transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 867 "trailing_analysis.m"
          {
#line 867 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 870 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 869 "trailing_analysis.m"
            {
#line 869 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 869 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 869 "trailing_analysis.m"
            }
#line 870 "trailing_analysis.m"
          else
#line 882 "trailing_analysis.m"
            {
#line 872 "trailing_analysis.m"
              {
#line 872 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(&transform_hlds__trailing_analysis__env);
              }
#line 882 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 881 "trailing_analysis.m"
                {
#line 881 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 881 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 881 "trailing_analysis.m"
                }
#line 882 "trailing_analysis.m"
              else
#line 888 "trailing_analysis.m"
                {
#line 888 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Status0_51;

#line 885 "trailing_analysis.m"
                  {
#line 885 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45, &transform_hlds__trailing_analysis__Status0_51);
                  }
#line 888 "trailing_analysis.m"
                  if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 887 "trailing_analysis.m"
                    {
#line 887 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__Status0_51;
#line 887 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 887 "trailing_analysis.m"
                    }
#line 888 "trailing_analysis.m"
                  else
#line 889 "trailing_analysis.m"
                    {
#line 889 "trailing_analysis.m"
                      MR_Word transform_hlds__trailing_analysis__Globals_52;
#line 889 "trailing_analysis.m"
                      MR_Word transform_hlds__trailing_analysis__IntermodAnalysis_53;

#line 889 "trailing_analysis.m"
                      {
#line 889 "trailing_analysis.m"
                        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, &transform_hlds__trailing_analysis__Globals_52);
                      }
#line 890 "trailing_analysis.m"
                      {
#line 890 "trailing_analysis.m"
                        libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_52, (MR_Integer) 325, &transform_hlds__trailing_analysis__IntermodAnalysis_53);
                      }
#line 893 "trailing_analysis.m"
                      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__IntermodAnalysis_53 == (MR_Integer) 1);
#line 893 "trailing_analysis.m"
                      if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 894 "trailing_analysis.m"
                        {
#line 894 "trailing_analysis.m"
                          (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
                        }
#line 919 "trailing_analysis.m"
                      if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 897 "trailing_analysis.m"
                        {
#line 897 "trailing_analysis.m"
                          MR_Word transform_hlds__trailing_analysis__Result_54;
#line 897 "trailing_analysis.m"
                          MR_Word transform_hlds__trailing_analysis__AnalysisStatus_55;

#line 896 "trailing_analysis.m"
                          {
#line 896 "trailing_analysis.m"
                            transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(transform_hlds__trailing_analysis__CallPPId_44, &transform_hlds__trailing_analysis__Result_54, &transform_hlds__trailing_analysis__AnalysisStatus_55, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
                          }
#line 904 "trailing_analysis.m"
#line 904 "trailing_analysis.m"
                          switch (transform_hlds__trailing_analysis__AnalysisStatus_55) {
#line 904 "trailing_analysis.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 904 "trailing_analysis.m"
                            case (MR_Integer) 0:
#line 903 "trailing_analysis.m"
                              *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 904 "trailing_analysis.m"
                              break;
#line 904 "trailing_analysis.m"
                            case (MR_Integer) 2:
#line 904 "trailing_analysis.m"
                            case (MR_Integer) 1:
#line 912 "trailing_analysis.m"
#line 912 "trailing_analysis.m"
                              switch (transform_hlds__trailing_analysis__Result_54) {
#line 912 "trailing_analysis.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 912 "trailing_analysis.m"
                                case (MR_Integer) 2:
#line 910 "trailing_analysis.m"
                                  {
#line 910 "trailing_analysis.m"
                                    *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112, transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__CallArgs_40);
                                  }
#line 912 "trailing_analysis.m"
                                  break;
#line 912 "trailing_analysis.m"
                                case (MR_Integer) 0:
#line 912 "trailing_analysis.m"
                                case (MR_Integer) 1:
#line 916 "trailing_analysis.m"
                                  *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__Result_54;
#line 912 "trailing_analysis.m"
                                  break;
#line 912 "trailing_analysis.m"
                              }
#line 904 "trailing_analysis.m"
                              break;
#line 904 "trailing_analysis.m"
                          }
#line 897 "trailing_analysis.m"
                        }
#line 919 "trailing_analysis.m"
                      else
#line 921 "trailing_analysis.m"
                        {
#line 921 "trailing_analysis.m"
                          {
#line 921 "trailing_analysis.m"
                            transform_hlds__trailing_analysis__trail_check_call_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__CallPPId_44, transform_hlds__trailing_analysis__CallArgs_40, transform_hlds__trailing_analysis__Status_11);
                          }
#line 921 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 921 "trailing_analysis.m"
                        }
#line 889 "trailing_analysis.m"
                    }
#line 888 "trailing_analysis.m"
                }
#line 882 "trailing_analysis.m"
            }
#line 863 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 863 "trailing_analysis.m"
        }
#line 850 "trailing_analysis.m"
        break;
#line 850 "trailing_analysis.m"
      case (MR_Integer) 3:
#line 850 "trailing_analysis.m"
#line 850 "trailing_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)))) {
#line 850 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 850 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 930 "trailing_analysis.m"
            {
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__GenericCall_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 930 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));

#line 934 "trailing_analysis.m"
#line 934 "trailing_analysis.m"
              switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__GenericCall_63)) {
#line 934 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 934 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 933 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 934 "trailing_analysis.m"
                  break;
#line 934 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 936 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 934 "trailing_analysis.m"
                  break;
#line 934 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 939 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 934 "trailing_analysis.m"
                  break;
#line 934 "trailing_analysis.m"
                case (MR_Integer) 3:
#line 942 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 934 "trailing_analysis.m"
                  break;
#line 934 "trailing_analysis.m"
              }
#line 930 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 930 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 930 "trailing_analysis.m"
            }
#line 850 "trailing_analysis.m"
            break;
#line 850 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 926 "trailing_analysis.m"
            {
#line 926 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Attributes_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 926 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 926 "trailing_analysis.m"
              MR_Integer transform_hlds__trailing_analysis__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 926 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 926 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));
#line 926 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 6)));
#line 926 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 7)));

#line 927 "trailing_analysis.m"
              {
#line 927 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(transform_hlds__trailing_analysis__Attributes_56);
              }
#line 926 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 926 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 926 "trailing_analysis.m"
            }
#line 850 "trailing_analysis.m"
            break;
#line 850 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 945 "trailing_analysis.m"
            {
#line 945 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ConjType_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 945 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Conjuncts0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 945 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Conjuncts_80;

#line 946 "trailing_analysis.m"
              {
#line 946 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Conjuncts0_79, &transform_hlds__trailing_analysis__Conjuncts_80, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 948 "trailing_analysis.m"
              {
#line 948 "trailing_analysis.m"
                MR_Word base;
#line 948 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 948 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 948 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 948 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__ConjType_78));
#line 948 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__Conjuncts_80));
#line 948 "trailing_analysis.m"
              }
#line 945 "trailing_analysis.m"
            }
#line 850 "trailing_analysis.m"
            break;
#line 850 "trailing_analysis.m"
          case (MR_Integer) 3:
#line 950 "trailing_analysis.m"
            {
#line 950 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Disjuncts0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 950 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Disjuncts_82;

#line 951 "trailing_analysis.m"
              {
#line 951 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Disjuncts0_81, &transform_hlds__trailing_analysis__Disjuncts_82, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 953 "trailing_analysis.m"
              {
#line 953 "trailing_analysis.m"
                MR_Word base;
#line 953 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 953 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 953 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Disjuncts_82));
#line 953 "trailing_analysis.m"
              }
#line 950 "trailing_analysis.m"
            }
#line 850 "trailing_analysis.m"
            break;
#line 850 "trailing_analysis.m"
          case (MR_Integer) 4:
#line 955 "trailing_analysis.m"
            {
#line 955 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 955 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__CanFail_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 955 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Cases0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 955 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Cases_86;

#line 956 "trailing_analysis.m"
              {
#line 956 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Cases0_85, &transform_hlds__trailing_analysis__Cases_86, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 957 "trailing_analysis.m"
              {
#line 957 "trailing_analysis.m"
                MR_Word base;
#line 957 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 957 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 957 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 957 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Var_83));
#line 957 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__CanFail_84));
#line 957 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Cases_86));
#line 957 "trailing_analysis.m"
              }
#line 955 "trailing_analysis.m"
            }
#line 850 "trailing_analysis.m"
            break;
#line 850 "trailing_analysis.m"
          case (MR_Integer) 5:
#line 978 "trailing_analysis.m"
            {
#line 978 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Reason_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 978 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__InnerGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 979 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_116_116;
#line 979 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_101_101;

#line 979 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__trailing_analysis__Reason_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 979 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 979 "trailing_analysis.m"
                {
#line 979 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 1)));
#line 979 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 2)));
#line 979 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_116_116 == (MR_Integer) 1);
#line 979 "trailing_analysis.m"
                }
#line 981 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 980 "trailing_analysis.m"
                {
#line 980 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 980 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 980 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 980 "trailing_analysis.m"
                }
#line 981 "trailing_analysis.m"
              else
#line 982 "trailing_analysis.m"
                {
#line 982 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerGoal_103;
#line 982 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerGoalInfo_105;
#line 982 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_106;
#line 982 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_107;
#line 982 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Status0_136;
#line 985 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__V_104_104;

#line 983 "trailing_analysis.m"
                  {
#line 983 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__InnerGoal0_100, &transform_hlds__trailing_analysis__InnerGoal_103, &transform_hlds__trailing_analysis__Status0_136, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
                  }
#line 985 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_103, (MR_Integer) 0)));
#line 985 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__InnerGoalInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_103, (MR_Integer) 1)));
#line 986 "trailing_analysis.m"
                  {
#line 986 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__InnerCodeModel_106 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__InnerGoalInfo_105);
                  }
#line 987 "trailing_analysis.m"
                  {
#line 987 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__OuterCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__GoalInfo_9);
                  }
#line 988 "trailing_analysis.m"
                  {
#line 988 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(transform_hlds__trailing_analysis__InnerCodeModel_106, transform_hlds__trailing_analysis__OuterCodeModel_107, transform_hlds__trailing_analysis__Status0_136);
                  }
#line 990 "trailing_analysis.m"
                  {
#line 990 "trailing_analysis.m"
                    MR_Word base;
#line 990 "trailing_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 990 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 990 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 990 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Reason_99));
#line 990 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__InnerGoal_103));
#line 990 "trailing_analysis.m"
                  }
#line 982 "trailing_analysis.m"
                }
#line 978 "trailing_analysis.m"
            }
#line 850 "trailing_analysis.m"
            break;
#line 850 "trailing_analysis.m"
          case (MR_Integer) 6:
#line 959 "trailing_analysis.m"
            {
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Vars_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__If0_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Then0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Else0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__If_91;
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__IfStatus_92;
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Then_93;
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ThenStatus_94;
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Else_95;
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ElseStatus_96;
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121;
#line 959 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122;

#line 960 "trailing_analysis.m"
              {
#line 960 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__If0_88, &transform_hlds__trailing_analysis__If_91, &transform_hlds__trailing_analysis__IfStatus_92, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121);
              }
#line 961 "trailing_analysis.m"
              {
#line 961 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Then0_89, &transform_hlds__trailing_analysis__Then_93, &transform_hlds__trailing_analysis__ThenStatus_94, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122);
              }
#line 962 "trailing_analysis.m"
              {
#line 962 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Else0_90, &transform_hlds__trailing_analysis__Else_95, &transform_hlds__trailing_analysis__ElseStatus_96, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 964 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__IfStatus_92 == (MR_Integer) 1);
#line 964 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 964 "trailing_analysis.m"
                {
#line 965 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__ThenStatus_94 == (MR_Integer) 1);
#line 964 "trailing_analysis.m"
                  if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 966 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__ElseStatus_96 == (MR_Integer) 1);
#line 964 "trailing_analysis.m"
                }
#line 969 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 968 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 969 "trailing_analysis.m"
              else
#line 970 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 972 "trailing_analysis.m"
              {
#line 972 "trailing_analysis.m"
                MR_Word base;
#line 972 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 972 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 972 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 972 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Vars_87));
#line 972 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__If_91));
#line 972 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Then_93));
#line 972 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__trailing_analysis__Else_95));
#line 972 "trailing_analysis.m"
              }
#line 959 "trailing_analysis.m"
            }
#line 850 "trailing_analysis.m"
            break;
#line 850 "trailing_analysis.m"
          case (MR_Integer) 7:
#line 993 "trailing_analysis.m"
            {
#line 994 "trailing_analysis.m"
              {
#line 994 "trailing_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "shorthand");
#line 994 "trailing_analysis.m"
                return;
              }
#line 993 "trailing_analysis.m"
            }
#line 850 "trailing_analysis.m"
            break;
#line 850 "trailing_analysis.m"
        }
#line 850 "trailing_analysis.m"
        break;
#line 850 "trailing_analysis.m"
    }
#line 844 "trailing_analysis.m"
  }
#line 844 "trailing_analysis.m"
}

#line 825 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
#line 825 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 825 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15,
#line 825 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16,
#line 825 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 825 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 825 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18)
#line 825 "trailing_analysis.m"
{
#line 828 "trailing_analysis.m"
  {
#line 828 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 828 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15, (MR_Integer) 0)));
#line 828 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15, (MR_Integer) 1)));
#line 828 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_13;
#line 828 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_14;

#line 830 "trailing_analysis.m"
    {
#line 830 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__GoalInfo0_12, transform_hlds__trailing_analysis__GoalExpr0_11, &transform_hlds__trailing_analysis__GoalExpr_13, transform_hlds__trailing_analysis__Status_9, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);
    }
#line 836 "trailing_analysis.m"
#line 836 "trailing_analysis.m"
    switch (*transform_hlds__trailing_analysis__Status_9) {
#line 836 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 836 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 836 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 840 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_14 = transform_hlds__trailing_analysis__GoalInfo0_12;
#line 836 "trailing_analysis.m"
        break;
#line 836 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 833 "trailing_analysis.m"
        {
#line 834 "trailing_analysis.m"
          {
#line 834 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_12, &transform_hlds__trailing_analysis__GoalInfo_14);
          }
#line 833 "trailing_analysis.m"
        }
#line 836 "trailing_analysis.m"
        break;
#line 836 "trailing_analysis.m"
    }
#line 842 "trailing_analysis.m"
    {
#line 842 "trailing_analysis.m"
      MR_Word base;
#line 842 "trailing_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16 = base;
#line 842 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_13));
#line 842 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_14));
#line 842 "trailing_analysis.m"
    }
#line 828 "trailing_analysis.m"
  }
#line 825 "trailing_analysis.m"
}

#line 812 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
#line 812 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_4,
#line 812 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 812 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12)
#line 812 "trailing_analysis.m"
{
#line 817 "trailing_analysis.m"
  {
#line 817 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo_8;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__VarTypes_9;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___Status_10;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_27;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_28;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_29;
#line 817 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_30;

#line 817 "trailing_analysis.m"
    {
#line 817 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__PPId_4, &transform_hlds__trailing_analysis__PredInfo_8, &transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13);
    }
#line 818 "trailing_analysis.m"
    {
#line 818 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14);
    }
#line 819 "trailing_analysis.m"
    {
#line 819 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__VarTypes_9);
    }
#line 829 "trailing_analysis.m"
    transform_hlds__trailing_analysis__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14, (MR_Integer) 0)));
#line 829 "trailing_analysis.m"
    transform_hlds__trailing_analysis__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14, (MR_Integer) 1)));
#line 830 "trailing_analysis.m"
    {
#line 830 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__GoalInfo0_28, transform_hlds__trailing_analysis__GoalExpr0_27, &transform_hlds__trailing_analysis__GoalExpr_29, &transform_hlds__trailing_analysis___Status_10, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16);
    }
#line 836 "trailing_analysis.m"
#line 836 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis___Status_10) {
#line 836 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 836 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 836 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 840 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_30 = transform_hlds__trailing_analysis__GoalInfo0_28;
#line 836 "trailing_analysis.m"
        break;
#line 836 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 833 "trailing_analysis.m"
        {
#line 834 "trailing_analysis.m"
          {
#line 834 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_28, &transform_hlds__trailing_analysis__GoalInfo_30);
          }
#line 833 "trailing_analysis.m"
        }
#line 836 "trailing_analysis.m"
        break;
#line 836 "trailing_analysis.m"
    }
#line 842 "trailing_analysis.m"
    {
#line 842 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_29));
#line 842 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_30));
#line 842 "trailing_analysis.m"
    }
#line 821 "trailing_analysis.m"
    {
#line 821 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17);
    }
#line 822 "trailing_analysis.m"
    {
#line 822 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__trailing_analysis__PPId_4, transform_hlds__trailing_analysis__PredInfo_8, transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);
    }
#line 817 "trailing_analysis.m"
  }
#line 812 "trailing_analysis.m"
}

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 740 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9);
    }
#line 740 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9));
#line 740 "trailing_analysis.m"
  }
#line 740 "trailing_analysis.m"
}

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 740 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9);
    }
#line 740 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9));
#line 740 "trailing_analysis.m"
  }
#line 740 "trailing_analysis.m"
}

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 740 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9);
    }
#line 740 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9));
#line 740 "trailing_analysis.m"
  }
#line 740 "trailing_analysis.m"
}

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 740 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 740 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 740 "trailing_analysis.m"
  }
#line 740 "trailing_analysis.m"
}

#line 767 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(
#line 767 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 767 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 767 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__TypeCtorCat_7)
#line 767 "trailing_analysis.m"
{
#line 778 "trailing_analysis.m"
  {
#line 778 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 778 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_8;

#line 778 "trailing_analysis.m"
#line 778 "trailing_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__TypeCtorCat_7)) {
#line 778 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 778 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 778 "trailing_analysis.m"
#line 778 "trailing_analysis.m"
        switch (MR_unmkbody(transform_hlds__trailing_analysis__TypeCtorCat_7)) {
#line 778 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 778 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 778 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 778 "trailing_analysis.m"
            break;
#line 778 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 788 "trailing_analysis.m"
            {
#line 788 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Args_22;
#line 789 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis___TypeCtor_18;
#line 791 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis___UnifyCompare_19;

#line 789 "trailing_analysis.m"
              {
#line 789 "trailing_analysis.m"
                parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_18, &transform_hlds__trailing_analysis__Args_22);
              }
#line 791 "trailing_analysis.m"
              {
#line 791 "trailing_analysis.m"
                transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_19);
              }
#line 798 "trailing_analysis.m"
              if (transform_hlds__trailing_analysis__succeeded)
#line 797 "trailing_analysis.m"
                transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 798 "trailing_analysis.m"
              else
#line 739 "trailing_analysis.m"
                {
#line 739 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__V_53_53;
#line 740 "trailing_analysis.m"
                  MR_Box transform_hlds__trailing_analysis__conv3_Status_8;

#line 740 "trailing_analysis.m"
                  {
#line 740 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 740 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2));
#line 740 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 740 "trailing_analysis.m"
                  }
#line 740 "trailing_analysis.m"
                  {
#line 740 "trailing_analysis.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_53_53, transform_hlds__trailing_analysis__Args_22, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv3_Status_8);
                  }
#line 740 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv3_Status_8);
#line 739 "trailing_analysis.m"
                }
#line 788 "trailing_analysis.m"
            }
#line 778 "trailing_analysis.m"
            break;
#line 778 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 778 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 778 "trailing_analysis.m"
            break;
#line 778 "trailing_analysis.m"
          case (MR_Integer) 3:
#line 781 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 2;
#line 778 "trailing_analysis.m"
            break;
#line 778 "trailing_analysis.m"
          case (MR_Integer) 4:
#line 778 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 778 "trailing_analysis.m"
            break;
#line 778 "trailing_analysis.m"
        }
#line 778 "trailing_analysis.m"
        break;
#line 778 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 779 "trailing_analysis.m"
        transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 778 "trailing_analysis.m"
        break;
#line 778 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 788 "trailing_analysis.m"
        {
#line 788 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Args_13;
#line 789 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___TypeCtor_12;
#line 791 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___UnifyCompare_14;

#line 789 "trailing_analysis.m"
          {
#line 789 "trailing_analysis.m"
            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_12, &transform_hlds__trailing_analysis__Args_13);
          }
#line 791 "trailing_analysis.m"
          {
#line 791 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_14);
          }
#line 798 "trailing_analysis.m"
          if (transform_hlds__trailing_analysis__succeeded)
#line 797 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 798 "trailing_analysis.m"
          else
#line 739 "trailing_analysis.m"
            {
#line 739 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_43_43;
#line 740 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_Status_8;

#line 740 "trailing_analysis.m"
              {
#line 740 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 740 "trailing_analysis.m"
              }
#line 740 "trailing_analysis.m"
              {
#line 740 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_43_43, transform_hlds__trailing_analysis__Args_13, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Status_8);
              }
#line 740 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Status_8);
#line 739 "trailing_analysis.m"
            }
#line 788 "trailing_analysis.m"
        }
#line 778 "trailing_analysis.m"
        break;
#line 778 "trailing_analysis.m"
      case (MR_Integer) 3:
#line 778 "trailing_analysis.m"
#line 778 "trailing_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__TypeCtorCat_7, (MR_Integer) 0)))) {
#line 778 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 778 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 779 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 778 "trailing_analysis.m"
            break;
#line 778 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 778 "trailing_analysis.m"
            {
#line 778 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__TypeCtorCat_7, (MR_Integer) 1)));

#line 778 "trailing_analysis.m"
#line 778 "trailing_analysis.m"
              switch (transform_hlds__trailing_analysis__V_39_39) {
#line 778 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 778 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 779 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 778 "trailing_analysis.m"
                  break;
#line 778 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 788 "trailing_analysis.m"
                  {
#line 788 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Args_34;
#line 789 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___TypeCtor_30;
#line 791 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___UnifyCompare_31;

#line 789 "trailing_analysis.m"
                    {
#line 789 "trailing_analysis.m"
                      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_30, &transform_hlds__trailing_analysis__Args_34);
                    }
#line 791 "trailing_analysis.m"
                    {
#line 791 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_31);
                    }
#line 798 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 797 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 798 "trailing_analysis.m"
                    else
#line 739 "trailing_analysis.m"
                      {
#line 739 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_63_63;
#line 740 "trailing_analysis.m"
                        MR_Box transform_hlds__trailing_analysis__conv5_Status_8;

#line 740 "trailing_analysis.m"
                        {
#line 740 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 740 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3));
#line 740 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 740 "trailing_analysis.m"
                        }
#line 740 "trailing_analysis.m"
                        {
#line 740 "trailing_analysis.m"
                          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_63_63, transform_hlds__trailing_analysis__Args_34, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_8);
                        }
#line 740 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_8);
#line 739 "trailing_analysis.m"
                      }
#line 788 "trailing_analysis.m"
                  }
#line 778 "trailing_analysis.m"
                  break;
#line 778 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 788 "trailing_analysis.m"
                  {
#line 788 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Args_28;
#line 789 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___TypeCtor_24;
#line 791 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___UnifyCompare_25;

#line 789 "trailing_analysis.m"
                    {
#line 789 "trailing_analysis.m"
                      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_24, &transform_hlds__trailing_analysis__Args_28);
                    }
#line 791 "trailing_analysis.m"
                    {
#line 791 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_25);
                    }
#line 798 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 797 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 798 "trailing_analysis.m"
                    else
#line 739 "trailing_analysis.m"
                      {
#line 739 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_73_73;
#line 740 "trailing_analysis.m"
                        MR_Box transform_hlds__trailing_analysis__conv7_Status_8;

#line 740 "trailing_analysis.m"
                        {
#line 740 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 740 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4));
#line 740 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 740 "trailing_analysis.m"
                        }
#line 740 "trailing_analysis.m"
                        {
#line 740 "trailing_analysis.m"
                          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_73_73, transform_hlds__trailing_analysis__Args_28, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv7_Status_8);
                        }
#line 740 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv7_Status_8);
#line 739 "trailing_analysis.m"
                      }
#line 788 "trailing_analysis.m"
                  }
#line 778 "trailing_analysis.m"
                  break;
#line 778 "trailing_analysis.m"
              }
#line 778 "trailing_analysis.m"
            }
#line 778 "trailing_analysis.m"
            break;
#line 778 "trailing_analysis.m"
        }
#line 778 "trailing_analysis.m"
        break;
#line 778 "trailing_analysis.m"
    }
#line 778 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_8;
#line 778 "trailing_analysis.m"
  }
#line 767 "trailing_analysis.m"
}

#line 751 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_f_0(
#line 751 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 751 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_5)
#line 751 "trailing_analysis.m"
{
#line 762 "trailing_analysis.m"
  {
#line 762 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 762 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_6;

#line 755 "trailing_analysis.m"
    {
#line 755 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
    }
#line 756 "trailing_analysis.m"
    if (!(transform_hlds__trailing_analysis__succeeded))
#line 756 "trailing_analysis.m"
      {
#line 756 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_is_existq_type_2_p_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
      }
#line 762 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 761 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Status_6 = (MR_Integer) 0;
#line 762 "trailing_analysis.m"
    else
#line 763 "trailing_analysis.m"
      {
#line 763 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeCtorCategory_7;

#line 763 "trailing_analysis.m"
        {
#line 763 "trailing_analysis.m"
          transform_hlds__trailing_analysis__TypeCtorCategory_7 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
        }
#line 764 "trailing_analysis.m"
        {
#line 764 "trailing_analysis.m"
          transform_hlds__trailing_analysis__Status_6 = transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5, transform_hlds__trailing_analysis__TypeCtorCategory_7);
        }
#line 763 "trailing_analysis.m"
      }
#line 762 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_6;
#line 762 "trailing_analysis.m"
  }
#line 751 "trailing_analysis.m"
}

#line 743 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_4_p_0(
#line 743 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 743 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 743 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8,
#line 743 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9)
#line 743 "trailing_analysis.m"
{
#line 746 "trailing_analysis.m"
  {
#line 746 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 746 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_10_10;

#line 747 "trailing_analysis.m"
    {
#line 747 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_10_10 = transform_hlds__trailing_analysis__trail_check_type_2_f_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6);
    }
#line 626 "trailing_analysis.m"
#line 626 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__V_10_10) {
#line 626 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 626 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 626 "trailing_analysis.m"
#line 626 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8) {
#line 626 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 626 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 631 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 2;
#line 626 "trailing_analysis.m"
            break;
#line 626 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 632 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 0;
#line 626 "trailing_analysis.m"
            break;
#line 626 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 629 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 2;
#line 626 "trailing_analysis.m"
            break;
#line 626 "trailing_analysis.m"
        }
#line 626 "trailing_analysis.m"
        break;
#line 626 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 627 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 0;
#line 626 "trailing_analysis.m"
        break;
#line 626 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 626 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8;
#line 626 "trailing_analysis.m"
        break;
#line 626 "trailing_analysis.m"
    }
#line 746 "trailing_analysis.m"
  }
#line 743 "trailing_analysis.m"
}

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 740 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 740 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 740 "trailing_analysis.m"
  }
#line 740 "trailing_analysis.m"
}

#line 737 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0(
#line 737 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 737 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Types_5)
#line 737 "trailing_analysis.m"
{
#line 739 "trailing_analysis.m"
  {
#line 739 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 739 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_6;
#line 739 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_7_7;
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_Status_6;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 740 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_types_2_f_0_1));
#line 740 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_4));
#line 740 "trailing_analysis.m"
    }
#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_7_7, transform_hlds__trailing_analysis__Types_5, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Status_6);
    }
#line 740 "trailing_analysis.m"
    transform_hlds__trailing_analysis__Status_6 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Status_6);
#line 739 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_6;
#line 739 "trailing_analysis.m"
  }
#line 737 "trailing_analysis.m"
}

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 740 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 740 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 740 "trailing_analysis.m"
  }
#line 740 "trailing_analysis.m"
}

#line 699 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
#line 699 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 699 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_6,
#line 699 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Vars_7)
#line 699 "trailing_analysis.m"
{
#line 701 "trailing_analysis.m"
  {
#line 701 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 701 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Result_8;
#line 701 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Types_9;
#line 701 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_13_13;
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_Result_8;

#line 702 "trailing_analysis.m"
    {
#line 702 "trailing_analysis.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_6, transform_hlds__trailing_analysis__Vars_7, &transform_hlds__trailing_analysis__Types_9);
    }
#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 740 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1));
#line 740 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 740 "trailing_analysis.m"
    }
#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_13_13, transform_hlds__trailing_analysis__Types_9, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Result_8);
    }
#line 740 "trailing_analysis.m"
    transform_hlds__trailing_analysis__Result_8 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Result_8);
#line 701 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Result_8;
#line 701 "trailing_analysis.m"
  }
#line 699 "trailing_analysis.m"
}

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 740 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 740 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 740 "trailing_analysis.m"
  }
#line 740 "trailing_analysis.m"
}

#line 668 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
#line 668 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 668 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 668 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 668 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 668 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeResult_10)
#line 668 "trailing_analysis.m"
{
#line 671 "trailing_analysis.m"
  {
#line 671 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 671 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_12;
#line 671 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 672 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___PredInfo_11;

#line 672 "trailing_analysis.m"
    {
#line 672 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_6, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis___PredInfo_11, &transform_hlds__trailing_analysis__ProcInfo_12);
    }
#line 673 "trailing_analysis.m"
    {
#line 673 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13);
    }
#line 694 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__MaybeResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "trailing_analysis.m"
    else
#line 675 "trailing_analysis.m"
      {
#line 675 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13, (MR_Integer) 0)));
#line 675 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_14, (MR_Integer) 0)));
#line 675 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__AnalysisStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_14, (MR_Integer) 1)));

#line 681 "trailing_analysis.m"
#line 681 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__CalleeTrailingStatus_15) {
#line 681 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 681 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 685 "trailing_analysis.m"
            {
#line 685 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__TrailingStatus_17;
#line 685 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_18_18;
#line 685 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Types_23;
#line 685 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_27_27;
#line 740 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_TrailingStatus_17;

#line 702 "trailing_analysis.m"
              {
#line 702 "trailing_analysis.m"
                hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__Args_9, &transform_hlds__trailing_analysis__Types_23);
              }
#line 740 "trailing_analysis.m"
              {
#line 740 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 740 "trailing_analysis.m"
              }
#line 740 "trailing_analysis.m"
              {
#line 740 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_27_27, transform_hlds__trailing_analysis__Types_23, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_TrailingStatus_17);
              }
#line 740 "trailing_analysis.m"
              transform_hlds__trailing_analysis__TrailingStatus_17 = ((MR_Word) transform_hlds__trailing_analysis__conv1_TrailingStatus_17);
#line 690 "trailing_analysis.m"
              {
#line 690 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_17));
#line 690 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 1) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_16));
#line 690 "trailing_analysis.m"
              }
#line 690 "trailing_analysis.m"
              {
#line 690 "trailing_analysis.m"
                MR_Word base;
#line 690 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__MaybeResult_10 = base;
#line 690 "trailing_analysis.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_18_18));
#line 690 "trailing_analysis.m"
              }
#line 685 "trailing_analysis.m"
            }
#line 681 "trailing_analysis.m"
            break;
#line 681 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 683 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__MaybeResult_10 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 681 "trailing_analysis.m"
            break;
#line 681 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 680 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__MaybeResult_10 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 681 "trailing_analysis.m"
            break;
#line 681 "trailing_analysis.m"
        }
#line 675 "trailing_analysis.m"
      }
#line 671 "trailing_analysis.m"
  }
#line 668 "trailing_analysis.m"
}

#line 740 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 740 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 740 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 740 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 740 "trailing_analysis.m"
    {
#line 740 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 740 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 740 "trailing_analysis.m"
  }
#line 740 "trailing_analysis.m"
}

#line 654 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
#line 654 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 654 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 654 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 654 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 654 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_10)
#line 654 "trailing_analysis.m"
{
#line 657 "trailing_analysis.m"
  {
#line 657 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 657 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeResult_11;
#line 657 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_20;
#line 657 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 672 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___PredInfo_19;

#line 672 "trailing_analysis.m"
    {
#line 672 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_6, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis___PredInfo_19, &transform_hlds__trailing_analysis__ProcInfo_20);
    }
#line 673 "trailing_analysis.m"
    {
#line 673 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_20, &transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21);
    }
#line 694 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "trailing_analysis.m"
      transform_hlds__trailing_analysis__MaybeResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "trailing_analysis.m"
    else
#line 675 "trailing_analysis.m"
      {
#line 675 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21, (MR_Integer) 0)));
#line 675 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingStatus_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_22, (MR_Integer) 0)));
#line 675 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__AnalysisStatus_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_22, (MR_Integer) 1)));

#line 681 "trailing_analysis.m"
#line 681 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__CalleeTrailingStatus_23) {
#line 681 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 681 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 685 "trailing_analysis.m"
            {
#line 685 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__TrailingStatus_25;
#line 685 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_26_26;
#line 685 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Types_31;
#line 685 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_35_35;
#line 740 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_TrailingStatus_25;

#line 702 "trailing_analysis.m"
              {
#line 702 "trailing_analysis.m"
                hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__Args_9, &transform_hlds__trailing_analysis__Types_31);
              }
#line 740 "trailing_analysis.m"
              {
#line 740 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_5_p_0_1));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 740 "trailing_analysis.m"
              }
#line 740 "trailing_analysis.m"
              {
#line 740 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_35_35, transform_hlds__trailing_analysis__Types_31, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_TrailingStatus_25);
              }
#line 740 "trailing_analysis.m"
              transform_hlds__trailing_analysis__TrailingStatus_25 = ((MR_Word) transform_hlds__trailing_analysis__conv1_TrailingStatus_25);
#line 690 "trailing_analysis.m"
              {
#line 690 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_26_26, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_25));
#line 690 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_26_26, 1) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_24));
#line 690 "trailing_analysis.m"
              }
#line 690 "trailing_analysis.m"
              {
#line 690 "trailing_analysis.m"
                transform_hlds__trailing_analysis__MaybeResult_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "trailing_analysis.m"
                MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_11, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_26_26));
#line 690 "trailing_analysis.m"
              }
#line 685 "trailing_analysis.m"
            }
#line 681 "trailing_analysis.m"
            break;
#line 681 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 683 "trailing_analysis.m"
            transform_hlds__trailing_analysis__MaybeResult_11 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 681 "trailing_analysis.m"
            break;
#line 681 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 680 "trailing_analysis.m"
            transform_hlds__trailing_analysis__MaybeResult_11 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 681 "trailing_analysis.m"
            break;
#line 681 "trailing_analysis.m"
        }
#line 675 "trailing_analysis.m"
      }
#line 661 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__Result_10 = (MR_Integer) 0;
#line 661 "trailing_analysis.m"
    else
#line 660 "trailing_analysis.m"
      {
#line 660 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_11, (MR_Integer) 0)));
#line 660 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_12_12;

#line 660 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, (MR_Integer) 0)));
#line 660 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, (MR_Integer) 1)));
#line 660 "trailing_analysis.m"
      }
#line 657 "trailing_analysis.m"
  }
#line 654 "trailing_analysis.m"
}

#line 634 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
#line 634 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusA_4,
#line 634 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusB_5,
#line 634 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeStatus_6)
#line 634 "trailing_analysis.m"
{
#line 643 "trailing_analysis.m"
  {
#line 643 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__MaybeStatusA_4)) == (MR_mktag((MR_Integer) 1)));
#line 643 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__StatusA_7;
#line 643 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__StatusB_8;

#line 639 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 639 "trailing_analysis.m"
      {
#line 639 "trailing_analysis.m"
        transform_hlds__trailing_analysis__StatusA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeStatusA_4, (MR_Integer) 0)));
#line 640 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__MaybeStatusB_5)) == (MR_mktag((MR_Integer) 1)));
#line 640 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 640 "trailing_analysis.m"
          transform_hlds__trailing_analysis__StatusB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeStatusB_5, (MR_Integer) 0)));
#line 639 "trailing_analysis.m"
      }
#line 643 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 642 "trailing_analysis.m"
      {
#line 642 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9;

#line 642 "trailing_analysis.m"
        {
#line 642 "trailing_analysis.m"
          transform_hlds__trailing_analysis__V_9_9 = analysis__lub_2_f_0(transform_hlds__trailing_analysis__StatusA_7, transform_hlds__trailing_analysis__StatusB_8);
        }
#line 642 "trailing_analysis.m"
        {
#line 642 "trailing_analysis.m"
          MR_Word base;
#line 642 "trailing_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__MaybeStatus_6 = base;
#line 642 "trailing_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_9_9));
#line 642 "trailing_analysis.m"
        }
#line 642 "trailing_analysis.m"
      }
#line 643 "trailing_analysis.m"
    else
#line 644 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__MaybeStatus_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "trailing_analysis.m"
  }
#line 634 "trailing_analysis.m"
}

#line 623 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
#line 623 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 623 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 623 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__3_3)
#line 623 "trailing_analysis.m"
{
#line 626 "trailing_analysis.m"
  {
#line 626 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 626 "trailing_analysis.m"
#line 626 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__HeadVar__1_1) {
#line 626 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 626 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 626 "trailing_analysis.m"
#line 626 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__HeadVar__2_2) {
#line 626 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 626 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 631 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 2;
#line 626 "trailing_analysis.m"
            break;
#line 626 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 632 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 0;
#line 626 "trailing_analysis.m"
            break;
#line 626 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 629 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 2;
#line 626 "trailing_analysis.m"
            break;
#line 626 "trailing_analysis.m"
        }
#line 626 "trailing_analysis.m"
        break;
#line 626 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 627 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 0;
#line 626 "trailing_analysis.m"
        break;
#line 626 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 626 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__HeadVar__2_2;
#line 626 "trailing_analysis.m"
        break;
#line 626 "trailing_analysis.m"
    }
#line 626 "trailing_analysis.m"
  }
#line 623 "trailing_analysis.m"
}

#line 559 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
#line 559 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_3,
#line 559 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_4)
#line 559 "trailing_analysis.m"
{
#line 562 "trailing_analysis.m"
  {
#line 562 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 562 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__Name_5;
#line 562 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredOrFunc_6;
#line 562 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ModuleName_7;
#line 562 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__ModuleNameStr_8;
#line 562 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__Arity_9;

#line 563 "trailing_analysis.m"
    {
#line 563 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Name_5 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 564 "trailing_analysis.m"
    {
#line 564 "trailing_analysis.m"
      transform_hlds__trailing_analysis__PredOrFunc_6 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 565 "trailing_analysis.m"
    {
#line 565 "trailing_analysis.m"
      transform_hlds__trailing_analysis__ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 566 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__ModuleName_7)) == (MR_mktag((MR_Integer) 0)));
#line 566 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 566 "trailing_analysis.m"
      {
#line 566 "trailing_analysis.m"
        transform_hlds__trailing_analysis__ModuleNameStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ModuleName_7, (MR_Integer) 0)));
#line 567 "trailing_analysis.m"
        {
#line 567 "trailing_analysis.m"
          transform_hlds__trailing_analysis__Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
        }
#line 583 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__Arity_9 == (MR_Integer) 1);
#line 562 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 578 "trailing_analysis.m"
          {
#line 578 "trailing_analysis.m"
            if ((strcmp(transform_hlds__trailing_analysis__ModuleNameStr_8, (MR_String) "require") == 0))
#line 578 "trailing_analysis.m"
#line 578 "trailing_analysis.m"
              switch (transform_hlds__trailing_analysis__PredOrFunc_6) {
#line 578 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 578 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 580 "trailing_analysis.m"
                  {
#line 580 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = (strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "func_error") == 0);
#line 580 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 580 "trailing_analysis.m"
                      {
#line 581 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 581 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 580 "trailing_analysis.m"
                      }
#line 580 "trailing_analysis.m"
                  }
#line 578 "trailing_analysis.m"
                  break;
#line 578 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 578 "trailing_analysis.m"
                  {
#line 578 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = (strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "error") == 0);
#line 578 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 578 "trailing_analysis.m"
                      {
#line 579 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 579 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 578 "trailing_analysis.m"
                      }
#line 578 "trailing_analysis.m"
                  }
#line 578 "trailing_analysis.m"
                  break;
#line 578 "trailing_analysis.m"
              }
#line 578 "trailing_analysis.m"
            else
#line 578 "trailing_analysis.m"
            if ((strcmp(transform_hlds__trailing_analysis__ModuleNameStr_8, (MR_String) "exception") == 0))
#line 578 "trailing_analysis.m"
              if ((strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "throw") == 0))
#line 582 "trailing_analysis.m"
                {
#line 582 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 582 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 582 "trailing_analysis.m"
                }
#line 578 "trailing_analysis.m"
              else
#line 578 "trailing_analysis.m"
              if ((strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "rethrow") == 0))
#line 583 "trailing_analysis.m"
                {
#line 583 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 583 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 583 "trailing_analysis.m"
                }
#line 578 "trailing_analysis.m"
              else
#line 578 "trailing_analysis.m"
                transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 578 "trailing_analysis.m"
            else
#line 578 "trailing_analysis.m"
              transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 578 "trailing_analysis.m"
          }
#line 566 "trailing_analysis.m"
      }
#line 562 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 562 "trailing_analysis.m"
  }
#line 559 "trailing_analysis.m"
}

#line 534 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
#line 534 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_5,
#line 534 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_6,
#line 534 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerStatus_7)
#line 534 "trailing_analysis.m"
{
#line 537 "trailing_analysis.m"
  {
#line 537 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__InnerCodeModel_5 == (MR_Integer) 2);
#line 537 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__4_4;

#line 541 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 541 "trailing_analysis.m"
      {
#line 542 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__OuterCodeModel_6 == (MR_Integer) 2);
#line 542 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 541 "trailing_analysis.m"
      }
#line 537 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 544 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__4_4 = (MR_Integer) 0;
#line 537 "trailing_analysis.m"
    else
#line 546 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__4_4 = transform_hlds__trailing_analysis__InnerStatus_7;
#line 537 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__4_4;
#line 537 "trailing_analysis.m"
  }
#line 534 "trailing_analysis.m"
}

#line 524 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
#line 524 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Attributes_3)
#line 524 "trailing_analysis.m"
{
#line 527 "trailing_analysis.m"
  {
#line 527 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 527 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__2_2;
#line 528 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_4_4;

#line 528 "trailing_analysis.m"
    {
#line 528 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_4_4 = parse_tree__prog_data__get_may_modify_trail_1_f_0(transform_hlds__trailing_analysis__Attributes_3);
    }
#line 528 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_4_4 == (MR_Integer) 0);
#line 527 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 529 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 527 "trailing_analysis.m"
    else
#line 531 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 527 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__2_2;
#line 527 "trailing_analysis.m"
  }
#line 524 "trailing_analysis.m"
}

#line 516 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 516 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 516 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 516 "trailing_analysis.m"
{
#line 516 "trailing_analysis.m"
  {
#line 516 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 516 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv6_MaybeStatus_6;

#line 516 "trailing_analysis.m"
    {
#line 516 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv6_MaybeStatus_6);
    }
#line 516 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv6_MaybeStatus_6));
#line 516 "trailing_analysis.m"
  }
#line 516 "trailing_analysis.m"
}

#line 514 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
#line 514 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 514 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 514 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 514 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 514 "trailing_analysis.m"
{
#line 514 "trailing_analysis.m"
  {
#line 514 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 514 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 514 "trailing_analysis.m"
    {
#line 514 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 514 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 514 "trailing_analysis.m"
  }
#line 514 "trailing_analysis.m"
}

#line 512 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
#line 512 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 512 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 512 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 512 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 512 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 512 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 512 "trailing_analysis.m"
{
#line 512 "trailing_analysis.m"
  {
#line 512 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 512 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_Result_11;
#line 512 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12;
#line 512 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110;

#line 512 "trailing_analysis.m"
    {
#line 512 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_Result_11, &transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110);
    }
#line 512 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_Result_11));
#line 512 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12));
#line 512 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110));
#line 512 "trailing_analysis.m"
  }
#line 512 "trailing_analysis.m"
}

#line 506 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
#line 506 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 506 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 506 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goals_10,
#line 506 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 506 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 506 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16,
#line 506 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17)
#line 506 "trailing_analysis.m"
{
#line 511 "trailing_analysis.m"
  {
#line 511 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 511 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_31_31;
#line 511 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeInfo_32_32;
#line 511 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Results_14;
#line 511 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15;
#line 511 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_18_18;
#line 512 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17;
#line 514 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Result_11;
#line 516 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12;

#line 512 "trailing_analysis.m"
    {
#line 512 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 512 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_10[0]));
#line 512 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 1) = ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1));
#line 512 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 512 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 3) = ((MR_Box) (transform_hlds__trailing_analysis__SCC_8));
#line 512 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 4) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_9));
#line 512 "trailing_analysis.m"
    }
#line 6899 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 6901 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeInfo_32_32 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 512 "trailing_analysis.m"
    {
#line 512 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__trailing_analysis__TypeCtorInfo_31_31, transform_hlds__trailing_analysis__TypeInfo_32_32, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_18_18, transform_hlds__trailing_analysis__Goals_10, &transform_hlds__trailing_analysis__Results_14, &transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17);
    }
#line 512 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17);
#line 514 "trailing_analysis.m"
    {
#line 514 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_31_31, transform_hlds__trailing_analysis__TypeCtorInfo_31_31, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[6], transform_hlds__trailing_analysis__Results_14, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Result_11);
    }
#line 514 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Result_11 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Result_11);
#line 516 "trailing_analysis.m"
    {
#line 516 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeInfo_32_32, transform_hlds__trailing_analysis__TypeInfo_32_32, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[7], transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15, ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]))), &transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12);
    }
#line 516 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12);
#line 511 "trailing_analysis.m"
  }
#line 506 "trailing_analysis.m"
}

#line 442 "trailing_analysis.m"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
#line 442 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 442 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 442 "trailing_analysis.m"
{
#line 442 "trailing_analysis.m"
  {
#line 442 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_2;
#line 442 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 442 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_LambdaHeadVar__2_126;

#line 442 "trailing_analysis.m"
    {
#line 442 "trailing_analysis.m"
      transform_hlds__trailing_analysis__conv0_LambdaHeadVar__2_126 = transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__442__1_1_f_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
    }
#line 442 "trailing_analysis.m"
    transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_LambdaHeadVar__2_126));
#line 442 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__wrapper_arg_2;
#line 442 "trailing_analysis.m"
  }
#line 442 "trailing_analysis.m"
}

#line 341 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
#line 341 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 341 "trailing_analysis.m"
{
#line 341 "trailing_analysis.m"
  {
#line 341 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 341 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0, 1);
#line 341 "trailing_analysis.m"
  }
#line 341 "trailing_analysis.m"
}

#line 341 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
#line 341 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 341 "trailing_analysis.m"
{
#line 341 "trailing_analysis.m"
  {
#line 341 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 341 "trailing_analysis.m"
    {
#line 348 "trailing_analysis.m"
      MR_String transform_hlds__trailing_analysis__V_55_55;

#line 348 "trailing_analysis.m"
      {
#line 348 "trailing_analysis.m"
        mdbcomp__prim_data__special_pred_name_arity_4_p_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162, &transform_hlds__trailing_analysis__V_55_55, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163);
      }
#line 348 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (strcmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162) == 0);
#line 341 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 341 "trailing_analysis.m"
        {
#line 348 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53 == (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163);
#line 348 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 348 "trailing_analysis.m"
            {
#line 348 "trailing_analysis.m"
              transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(transform_hlds__trailing_analysis__env_ptr);
            }
#line 341 "trailing_analysis.m"
        }
#line 341 "trailing_analysis.m"
    }
#line 341 "trailing_analysis.m"
  }
#line 341 "trailing_analysis.m"
}

#line 341 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
#line 341 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 341 "trailing_analysis.m"
{
#line 341 "trailing_analysis.m"
  {
#line 341 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 341 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0) == 0)
#line 341 "trailing_analysis.m"
      {
#line 341 "trailing_analysis.m"
        {
#line 341 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_51;

#line 341 "trailing_analysis.m"
          {
#line 341 "trailing_analysis.m"
            transform_hlds__trailing_analysis__ModuleName_51 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
          }
#line 342 "trailing_analysis.m"
          {
#line 342 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__trailing_analysis__ModuleName_51);
          }
#line 341 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 341 "trailing_analysis.m"
            {
#line 343 "trailing_analysis.m"
              {
#line 343 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52 = hlds__hlds_pred__pred_info_name_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
              }
#line 344 "trailing_analysis.m"
              {
#line 344 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53 = hlds__hlds_pred__pred_info_orig_arity_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
              }
#line 346 "trailing_analysis.m"
              {
#line 346 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__slot_1 = (MR_Integer) 0;

#line 346 "trailing_analysis.m"
                do
#line 346 "trailing_analysis.m"
                  {
#line 346 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54 = ((&transform_hlds__trailing_analysis_vector_common_9[0 + transform_hlds__trailing_analysis__slot_1]))->transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 346 "trailing_analysis.m"
                    {
#line 346 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(transform_hlds__trailing_analysis__env_ptr);
                    }
#line 346 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__slot_1 = (transform_hlds__trailing_analysis__slot_1 + (MR_Integer) 1);
#line 346 "trailing_analysis.m"
                  }
#line 346 "trailing_analysis.m"
                while ((transform_hlds__trailing_analysis__slot_1 < (MR_Integer) 2));
#line 346 "trailing_analysis.m"
              }
#line 341 "trailing_analysis.m"
            }
#line 341 "trailing_analysis.m"
        }
#line 341 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_FALSE;
#line 341 "trailing_analysis.m"
      }
#line 341 "trailing_analysis.m"
    else
#line 341 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_TRUE;
#line 341 "trailing_analysis.m"
  }
#line 341 "trailing_analysis.m"
}

#line 298 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
#line 298 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 298 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 298 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goal_10,
#line 298 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 298 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 298 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109,
#line 298 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110)
#line 298 "trailing_analysis.m"
{
#line 298 "trailing_analysis.m"
  {
#line 298 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 303 "trailing_analysis.m"
    while (MR_TRUE)
#line 303 "trailing_analysis.m"
      {
#line 303 "trailing_analysis.m"
        /* tailcall optimized into a loop */
#line 303 "trailing_analysis.m"
        {
#line 303 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_10, (MR_Integer) 0)));
#line 303 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_10, (MR_Integer) 1)));

#line 319 "trailing_analysis.m"
#line 319 "trailing_analysis.m"
          switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__GoalExpr_14)) {
#line 319 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 319 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 477 "trailing_analysis.m"
              {
#line 477 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__SubGoal_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__trailing_analysis__GoalExpr_14), (MR_Integer) 0);

#line 478 "trailing_analysis.m"
                /* direct tailcall eliminated */
#line 478 "trailing_analysis.m"
                {
#line 478 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Goal__tmp_copy_10 = transform_hlds__trailing_analysis__SubGoal_99;

#line 478 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Goal_10 = transform_hlds__trailing_analysis__Goal__tmp_copy_10;
#line 478 "trailing_analysis.m"
                }
#line 478 "trailing_analysis.m"
                continue;
#line 477 "trailing_analysis.m"
              }
#line 319 "trailing_analysis.m"
              break;
#line 319 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 306 "trailing_analysis.m"
              {
#line 306 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 306 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)));
#line 306 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 306 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 306 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));

#line 307 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 308 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 315 "trailing_analysis.m"
#line 315 "trailing_analysis.m"
                switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Kind_19)) {
#line 315 "trailing_analysis.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 315 "trailing_analysis.m"
                  case (MR_Integer) 0:
#line 310 "trailing_analysis.m"
                    {
#line 310 "trailing_analysis.m"
                    }
#line 315 "trailing_analysis.m"
                    break;
#line 315 "trailing_analysis.m"
                  case (MR_Integer) 1:
#line 311 "trailing_analysis.m"
                    {
#line 311 "trailing_analysis.m"
                    }
#line 315 "trailing_analysis.m"
                    break;
#line 315 "trailing_analysis.m"
                  case (MR_Integer) 2:
#line 312 "trailing_analysis.m"
                    {
#line 312 "trailing_analysis.m"
                    }
#line 315 "trailing_analysis.m"
                    break;
#line 315 "trailing_analysis.m"
                  case (MR_Integer) 3:
#line 315 "trailing_analysis.m"
#line 315 "trailing_analysis.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Kind_19, (MR_Integer) 0)))) {
#line 315 "trailing_analysis.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 315 "trailing_analysis.m"
                      case (MR_Integer) 0:
#line 313 "trailing_analysis.m"
                        {
#line 313 "trailing_analysis.m"
                        }
#line 315 "trailing_analysis.m"
                        break;
#line 315 "trailing_analysis.m"
                      case (MR_Integer) 1:
#line 316 "trailing_analysis.m"
                        {
#line 317 "trailing_analysis.m"
                          {
#line 317 "trailing_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "complicated unify");
#line 317 "trailing_analysis.m"
                            return;
                          }
#line 316 "trailing_analysis.m"
                        }
#line 315 "trailing_analysis.m"
                        break;
#line 315 "trailing_analysis.m"
                    }
#line 315 "trailing_analysis.m"
                    break;
#line 315 "trailing_analysis.m"
                }
#line 306 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 306 "trailing_analysis.m"
              }
#line 319 "trailing_analysis.m"
              break;
#line 319 "trailing_analysis.m"
            case (MR_Integer) 2:
#line 320 "trailing_analysis.m"
              {
#line 320 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallPredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)));
#line 320 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__CallProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 320 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 320 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallPPId_47;
#line 320 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 320 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 320 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));

#line 321 "trailing_analysis.m"
                {
#line 321 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__CallPPId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_47, 0) = ((MR_Box) (transform_hlds__trailing_analysis__CallPredId_41));
#line 321 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_47, 1) = ((MR_Box) (transform_hlds__trailing_analysis__CallProcId_42));
#line 321 "trailing_analysis.m"
                }
#line 322 "trailing_analysis.m"
                {
#line 322 "trailing_analysis.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__CallPredId_41, &(transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                }
#line 325 "trailing_analysis.m"
                {
#line 325 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__trailing_analysis__CallPPId_47)), transform_hlds__trailing_analysis__SCC_8);
                }
#line 331 "trailing_analysis.m"
                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 327 "trailing_analysis.m"
                  {
#line 327 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Types_49;

#line 327 "trailing_analysis.m"
                    {
#line 327 "trailing_analysis.m"
                      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallArgs_43, &transform_hlds__trailing_analysis__Types_49);
                    }
#line 328 "trailing_analysis.m"
                    {
#line 328 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__trail_check_types_2_f_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__Types_49);
                    }
#line 330 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 327 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 327 "trailing_analysis.m"
                  }
#line 331 "trailing_analysis.m"
                else
#line 337 "trailing_analysis.m"
                  {
#line 332 "trailing_analysis.m"
                    {
#line 332 "trailing_analysis.m"
                      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                    }
#line 337 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 335 "trailing_analysis.m"
                      {
#line 335 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 336 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 335 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 335 "trailing_analysis.m"
                      }
#line 337 "trailing_analysis.m"
                    else
#line 355 "trailing_analysis.m"
                      {
#line 341 "trailing_analysis.m"
                        {
#line 341 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(&transform_hlds__trailing_analysis__env);
                        }
#line 355 "trailing_analysis.m"
                        if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 353 "trailing_analysis.m"
                          {
#line 353 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 354 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 353 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 353 "trailing_analysis.m"
                          }
#line 355 "trailing_analysis.m"
                        else
#line 362 "trailing_analysis.m"
                          {
#line 362 "trailing_analysis.m"
                            MR_Word transform_hlds__trailing_analysis__Result0_56;

#line 358 "trailing_analysis.m"
                            {
#line 358 "trailing_analysis.m"
                              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48, &transform_hlds__trailing_analysis__Result0_56);
                            }
#line 362 "trailing_analysis.m"
                            if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 360 "trailing_analysis.m"
                              {
#line 360 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__Result0_56;
#line 361 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 360 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 360 "trailing_analysis.m"
                              }
#line 362 "trailing_analysis.m"
                            else
#line 363 "trailing_analysis.m"
                              {
#line 363 "trailing_analysis.m"
                                MR_Word transform_hlds__trailing_analysis__Globals_57;
#line 363 "trailing_analysis.m"
                                MR_Word transform_hlds__trailing_analysis__Intermod_58;

#line 363 "trailing_analysis.m"
                                {
#line 363 "trailing_analysis.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, &transform_hlds__trailing_analysis__Globals_57);
                                }
#line 364 "trailing_analysis.m"
                                {
#line 364 "trailing_analysis.m"
                                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_57, (MR_Integer) 325, &transform_hlds__trailing_analysis__Intermod_58);
                                }
#line 367 "trailing_analysis.m"
                                (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__Intermod_58 == (MR_Integer) 1);
#line 367 "trailing_analysis.m"
                                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 368 "trailing_analysis.m"
                                  {
#line 368 "trailing_analysis.m"
                                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                                  }
#line 385 "trailing_analysis.m"
                                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 374 "trailing_analysis.m"
                                  {
#line 374 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__AnalysisStatus_59;
#line 374 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__Result0_146;

#line 373 "trailing_analysis.m"
                                    {
#line 373 "trailing_analysis.m"
                                      transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(transform_hlds__trailing_analysis__CallPPId_47, &transform_hlds__trailing_analysis__Result0_146, &transform_hlds__trailing_analysis__AnalysisStatus_59, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                                    }
#line 378 "trailing_analysis.m"
#line 378 "trailing_analysis.m"
                                    switch (transform_hlds__trailing_analysis__Result0_146) {
#line 378 "trailing_analysis.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 378 "trailing_analysis.m"
                                      case (MR_Integer) 2:
#line 377 "trailing_analysis.m"
                                        {
#line 377 "trailing_analysis.m"
                                          *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallArgs_43);
                                        }
#line 378 "trailing_analysis.m"
                                        break;
#line 378 "trailing_analysis.m"
                                      case (MR_Integer) 0:
#line 378 "trailing_analysis.m"
                                      case (MR_Integer) 1:
#line 382 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__Result0_146;
#line 378 "trailing_analysis.m"
                                        break;
#line 378 "trailing_analysis.m"
                                    }
#line 384 "trailing_analysis.m"
                                    {
#line 384 "trailing_analysis.m"
                                      MR_Word base;
#line 384 "trailing_analysis.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "trailing_analysis.m"
                                      *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = base;
#line 384 "trailing_analysis.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_59));
#line 384 "trailing_analysis.m"
                                    }
#line 374 "trailing_analysis.m"
                                  }
#line 385 "trailing_analysis.m"
                                else
#line 387 "trailing_analysis.m"
                                  {
#line 387 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__MaybeResult_60;

#line 386 "trailing_analysis.m"
                                    {
#line 386 "trailing_analysis.m"
                                      transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallPPId_47, transform_hlds__trailing_analysis__CallArgs_43, &transform_hlds__trailing_analysis__MaybeResult_60);
                                    }
#line 391 "trailing_analysis.m"
                                    if ((transform_hlds__trailing_analysis__MaybeResult_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "trailing_analysis.m"
                                      {
#line 395 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 399 "trailing_analysis.m"
#line 399 "trailing_analysis.m"
                                        switch (transform_hlds__trailing_analysis__Intermod_58) {
#line 399 "trailing_analysis.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 399 "trailing_analysis.m"
                                          case (MR_Integer) 0:
#line 401 "trailing_analysis.m"
                                            *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "trailing_analysis.m"
                                            break;
#line 399 "trailing_analysis.m"
                                          case (MR_Integer) 1:
#line 397 "trailing_analysis.m"
                                            {
#line 398 "trailing_analysis.m"
                                              *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 397 "trailing_analysis.m"
                                            }
#line 399 "trailing_analysis.m"
                                            break;
#line 399 "trailing_analysis.m"
                                        }
#line 392 "trailing_analysis.m"
                                      }
#line 391 "trailing_analysis.m"
                                    else
#line 389 "trailing_analysis.m"
                                      {
#line 389 "trailing_analysis.m"
                                        MR_Word transform_hlds__trailing_analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_60, (MR_Integer) 0)));

#line 389 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_141_141, (MR_Integer) 0)));
#line 389 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_141_141, (MR_Integer) 1)));
#line 389 "trailing_analysis.m"
                                      }
#line 387 "trailing_analysis.m"
                                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 387 "trailing_analysis.m"
                                  }
#line 363 "trailing_analysis.m"
                              }
#line 362 "trailing_analysis.m"
                          }
#line 355 "trailing_analysis.m"
                      }
#line 337 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
              }
#line 319 "trailing_analysis.m"
              break;
#line 319 "trailing_analysis.m"
            case (MR_Integer) 3:
#line 319 "trailing_analysis.m"
#line 319 "trailing_analysis.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)))) {
#line 319 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 319 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 407 "trailing_analysis.m"
                  {
#line 407 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Details_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 407 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___Args_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 407 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___ArgModes_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 407 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 407 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));

#line 413 "trailing_analysis.m"
#line 413 "trailing_analysis.m"
                    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Details_61)) {
#line 413 "trailing_analysis.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 413 "trailing_analysis.m"
                      case (MR_Integer) 0:
#line 410 "trailing_analysis.m"
                        {
#line 411 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 412 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 410 "trailing_analysis.m"
                        }
#line 413 "trailing_analysis.m"
                        break;
#line 413 "trailing_analysis.m"
                      case (MR_Integer) 1:
#line 415 "trailing_analysis.m"
                        {
#line 416 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 417 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 415 "trailing_analysis.m"
                        }
#line 413 "trailing_analysis.m"
                        break;
#line 413 "trailing_analysis.m"
                      case (MR_Integer) 2:
#line 413 "trailing_analysis.m"
                      case (MR_Integer) 3:
#line 421 "trailing_analysis.m"
                        {
#line 422 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 423 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 421 "trailing_analysis.m"
                        }
#line 413 "trailing_analysis.m"
                        break;
#line 413 "trailing_analysis.m"
                    }
#line 407 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 407 "trailing_analysis.m"
                  }
#line 319 "trailing_analysis.m"
                  break;
#line 319 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 426 "trailing_analysis.m"
                  {
#line 426 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Attributes_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 426 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 426 "trailing_analysis.m"
                    MR_Integer transform_hlds__trailing_analysis__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 426 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 426 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));
#line 426 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 6)));
#line 426 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 7)));

#line 427 "trailing_analysis.m"
                    {
#line 427 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(transform_hlds__trailing_analysis__Attributes_76);
                    }
#line 428 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 426 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 426 "trailing_analysis.m"
                  }
#line 319 "trailing_analysis.m"
                  break;
#line 319 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 430 "trailing_analysis.m"
                  {
#line 430 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Goals_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 430 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___ConjType_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));

#line 431 "trailing_analysis.m"
                    {
#line 431 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__Goals_84, transform_hlds__trailing_analysis__Result_11, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 430 "trailing_analysis.m"
                  }
#line 319 "trailing_analysis.m"
                  break;
#line 319 "trailing_analysis.m"
                case (MR_Integer) 3:
#line 434 "trailing_analysis.m"
                  {
#line 434 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Goals_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 435 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___Result0_85;

#line 435 "trailing_analysis.m"
                    {
#line 435 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__Goals_149, &transform_hlds__trailing_analysis___Result0_85, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 439 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 434 "trailing_analysis.m"
                  }
#line 319 "trailing_analysis.m"
                  break;
#line 319 "trailing_analysis.m"
                case (MR_Integer) 4:
#line 441 "trailing_analysis.m"
                  {
#line 441 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Cases_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 441 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__CaseGoals_89;
#line 441 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 441 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));

#line 442 "trailing_analysis.m"
                    {
#line 442 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__CaseGoals_89 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[5], transform_hlds__trailing_analysis__Cases_88);
                    }
#line 443 "trailing_analysis.m"
                    {
#line 443 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CaseGoals_89, transform_hlds__trailing_analysis__Result_11, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 441 "trailing_analysis.m"
                  }
#line 319 "trailing_analysis.m"
                  break;
#line 319 "trailing_analysis.m"
                case (MR_Integer) 5:
#line 481 "trailing_analysis.m"
                  {
#line 481 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Reason_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 481 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__InnerGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 482 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_114_114;
#line 482 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_102_102;

#line 482 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__trailing_analysis__Reason_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 482 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 482 "trailing_analysis.m"
                      {
#line 482 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 1)));
#line 482 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 2)));
#line 482 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_114_114 == (MR_Integer) 1);
#line 482 "trailing_analysis.m"
                      }
#line 486 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 484 "trailing_analysis.m"
                      {
#line 484 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 485 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 484 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 484 "trailing_analysis.m"
                      }
#line 486 "trailing_analysis.m"
                    else
#line 487 "trailing_analysis.m"
                      {
#line 487 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__InnerGoalInfo_105;
#line 487 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__InnerCodeModel_106;
#line 487 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__OuterCodeModel_107;
#line 487 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__Result0_156;
#line 490 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_104_104;

#line 488 "trailing_analysis.m"
                        {
#line 488 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__InnerGoal_101, &transform_hlds__trailing_analysis__Result0_156, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                        }
#line 490 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_101, (MR_Integer) 0)));
#line 490 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__InnerGoalInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_101, (MR_Integer) 1)));
#line 491 "trailing_analysis.m"
                        {
#line 491 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__InnerCodeModel_106 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__InnerGoalInfo_105);
                        }
#line 492 "trailing_analysis.m"
                        {
#line 492 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__OuterCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__GoalInfo_15);
                        }
#line 498 "trailing_analysis.m"
                        {
#line 498 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(transform_hlds__trailing_analysis__InnerCodeModel_106, transform_hlds__trailing_analysis__OuterCodeModel_107, transform_hlds__trailing_analysis__Result0_156);
                        }
#line 487 "trailing_analysis.m"
                      }
#line 481 "trailing_analysis.m"
                  }
#line 319 "trailing_analysis.m"
                  break;
#line 319 "trailing_analysis.m"
                case (MR_Integer) 6:
#line 446 "trailing_analysis.m"
                  {
#line 446 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Cond_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 446 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Then_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 446 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Else_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 446 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_118_118;
#line 446 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_120_120;
#line 446 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_121_121;
#line 446 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Result0_155;
#line 446 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 457 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__CondGoalInfo_98;
#line 458 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___CondGoalExpr_97;
#line 459 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_123_123;

#line 447 "trailing_analysis.m"
                    {
#line 447 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_121_121, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Else_96));
#line 447 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "trailing_analysis.m"
                    }
#line 447 "trailing_analysis.m"
                    {
#line 447 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_120_120, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Then_95));
#line 447 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_120_120, 1) = ((MR_Box) (transform_hlds__trailing_analysis__V_121_121));
#line 447 "trailing_analysis.m"
                    }
#line 447 "trailing_analysis.m"
                    {
#line 447 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_118_118, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Cond_94));
#line 447 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_118_118, 1) = ((MR_Box) (transform_hlds__trailing_analysis__V_120_120));
#line 447 "trailing_analysis.m"
                    }
#line 447 "trailing_analysis.m"
                    {
#line 447 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__V_118_118, &transform_hlds__trailing_analysis__Result0_155, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 457 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__Result0_155 == (MR_Integer) 1);
#line 457 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 457 "trailing_analysis.m"
                      {
#line 458 "trailing_analysis.m"
                        transform_hlds__trailing_analysis___CondGoalExpr_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Cond_94, (MR_Integer) 0)));
#line 458 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__CondGoalInfo_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Cond_94, (MR_Integer) 1)));
#line 459 "trailing_analysis.m"
                        {
#line 459 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_123_123 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__CondGoalInfo_98);
                        }
#line 459 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_123_123 == (MR_Integer) 2);
#line 459 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded);
#line 457 "trailing_analysis.m"
                      }
#line 462 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 461 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 462 "trailing_analysis.m"
                    else
#line 474 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 446 "trailing_analysis.m"
                  }
#line 319 "trailing_analysis.m"
                  break;
#line 319 "trailing_analysis.m"
                case (MR_Integer) 7:
#line 502 "trailing_analysis.m"
                  {
#line 503 "trailing_analysis.m"
                    {
#line 503 "trailing_analysis.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "shorthand");
#line 503 "trailing_analysis.m"
                      return;
                    }
#line 502 "trailing_analysis.m"
                  }
#line 319 "trailing_analysis.m"
                  break;
#line 319 "trailing_analysis.m"
              }
#line 319 "trailing_analysis.m"
              break;
#line 319 "trailing_analysis.m"
          }
#line 303 "trailing_analysis.m"
        }
#line 303 "trailing_analysis.m"
        break;
#line 303 "trailing_analysis.m"
      }
#line 298 "trailing_analysis.m"
  }
#line 298 "trailing_analysis.m"
}

#line 281 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
#line 281 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 281 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 281 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17,
#line 281 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18,
#line 281 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19,
#line 281 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20)
#line 281 "trailing_analysis.m"
{
#line 285 "trailing_analysis.m"
  {
#line 285 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 285 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_12;
#line 285 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Body_13;
#line 285 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__VarTypes_14;
#line 285 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Result_15;
#line 285 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatus_16;
#line 285 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_22_22;
#line 286 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_11_11;

#line 286 "trailing_analysis.m"
    {
#line 286 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis__V_11_11, &transform_hlds__trailing_analysis__ProcInfo_12);
    }
#line 287 "trailing_analysis.m"
    {
#line 287 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__Body_13);
    }
#line 288 "trailing_analysis.m"
    {
#line 288 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__VarTypes_14);
    }
#line 289 "trailing_analysis.m"
    {
#line 289 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_7, transform_hlds__trailing_analysis__VarTypes_14, transform_hlds__trailing_analysis__Body_13, &transform_hlds__trailing_analysis__Result_15, &transform_hlds__trailing_analysis__MaybeAnalysisStatus_16, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20);
    }
#line 291 "trailing_analysis.m"
    {
#line 291 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 291 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 0) = ((MR_Box) (transform_hlds__trailing_analysis__PPId_8));
#line 291 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Result_15));
#line 291 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 2) = ((MR_Box) (transform_hlds__trailing_analysis__MaybeAnalysisStatus_16));
#line 291 "trailing_analysis.m"
    }
#line 291 "trailing_analysis.m"
    {
#line 291 "trailing_analysis.m"
      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, ((MR_Box) (transform_hlds__trailing_analysis__V_22_22)), transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18);
    }
#line 285 "trailing_analysis.m"
  }
#line 281 "trailing_analysis.m"
}

#line 270 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
#line 270 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcResult_3,
#line 270 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_4)
#line 270 "trailing_analysis.m"
{
#line 274 "trailing_analysis.m"
  {
#line 274 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 274 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 0)));
#line 274 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 1)));

#line 274 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__AnalysisStatus_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 2)));
#line 274 "trailing_analysis.m"
  }
#line 270 "trailing_analysis.m"
}

#line 206 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
#line 206 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_5,
#line 206 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 206 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 206 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12)
#line 206 "trailing_analysis.m"
{
#line 209 "trailing_analysis.m"
  {
#line 209 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 209 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo0_8;
#line 209 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo0_9;
#line 209 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_10;
#line 209 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_13_13;

#line 210 "trailing_analysis.m"
    {
#line 210 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__PPId_6, &transform_hlds__trailing_analysis__PredInfo0_8, &transform_hlds__trailing_analysis__ProcInfo0_9);
    }
#line 211 "trailing_analysis.m"
    {
#line 211 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "trailing_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_13_13, 0) = ((MR_Box) (transform_hlds__trailing_analysis__ProcTrailingInfo_5));
#line 211 "trailing_analysis.m"
    }
#line 211 "trailing_analysis.m"
    {
#line 211 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(transform_hlds__trailing_analysis__V_13_13, transform_hlds__trailing_analysis__ProcInfo0_9, &transform_hlds__trailing_analysis__ProcInfo_10);
    }
#line 212 "trailing_analysis.m"
    {
#line 212 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__trailing_analysis__PPId_6, transform_hlds__trailing_analysis__PredInfo0_8, transform_hlds__trailing_analysis__ProcInfo_10, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);
    }
#line 209 "trailing_analysis.m"
  }
#line 206 "trailing_analysis.m"
}

#line 201 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
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
    MR_Word transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12;

#line 201 "trailing_analysis.m"
    {
#line 201 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12);
    }
#line 201 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12));
#line 201 "trailing_analysis.m"
  }
#line 201 "trailing_analysis.m"
}

#line 197 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
#line 197 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 197 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 197 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 197 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 197 "trailing_analysis.m"
{
#line 197 "trailing_analysis.m"
  {
#line 197 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 197 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12;

#line 197 "trailing_analysis.m"
    {
#line 197 "trailing_analysis.m"
      transform_hlds__trailing_analysis__set_trailing_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12);
    }
#line 197 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12));
#line 197 "trailing_analysis.m"
  }
#line 197 "trailing_analysis.m"
}

#line 267 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 267 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 267 "trailing_analysis.m"
{
#line 267 "trailing_analysis.m"
  {
#line 267 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 267 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv8_MaybeStatus_6;

#line 267 "trailing_analysis.m"
    {
#line 267 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv8_MaybeStatus_6);
    }
#line 267 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv8_MaybeStatus_6));
#line 267 "trailing_analysis.m"
  }
#line 267 "trailing_analysis.m"
}

#line 266 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
#line 266 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 266 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 266 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2)
#line 266 "trailing_analysis.m"
{
#line 266 "trailing_analysis.m"
  {
#line 266 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 266 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv7_AnalysisStatus_4;

#line 266 "trailing_analysis.m"
    {
#line 266 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv7_AnalysisStatus_4);
    }
#line 266 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv7_AnalysisStatus_4));
#line 266 "trailing_analysis.m"
  }
#line 266 "trailing_analysis.m"
}

#line 220 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
#line 220 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 220 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 220 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 220 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 220 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 220 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 220 "trailing_analysis.m"
{
#line 220 "trailing_analysis.m"
  {
#line 220 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 220 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18;
#line 220 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 220 "trailing_analysis.m"
    {
#line 220 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 220 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18));
#line 220 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 220 "trailing_analysis.m"
  }
#line 220 "trailing_analysis.m"
}

#line 235 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
#line 235 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 235 "trailing_analysis.m"
{
#line 235 "trailing_analysis.m"
  {
#line 235 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 235 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0, 1);
#line 235 "trailing_analysis.m"
  }
#line 235 "trailing_analysis.m"
}

#line 236 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
#line 236 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 236 "trailing_analysis.m"
{
#line 236 "trailing_analysis.m"
  {
#line 236 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 236 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58);
#line 236 "trailing_analysis.m"
    {
#line 236 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(transform_hlds__trailing_analysis__env_ptr);
    }
#line 236 "trailing_analysis.m"
  }
#line 236 "trailing_analysis.m"
}

#line 235 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
#line 235 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 235 "trailing_analysis.m"
{
#line 235 "trailing_analysis.m"
  {
#line 235 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 235 "trailing_analysis.m"
    {
#line 238 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 1)));
#line 238 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 0)));
#line 238 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 2)));

#line 238 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_61_61 == (MR_Integer) 1);
#line 237 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 237 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 237 "trailing_analysis.m"
        {
#line 237 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(transform_hlds__trailing_analysis__env_ptr);
        }
#line 235 "trailing_analysis.m"
    }
#line 235 "trailing_analysis.m"
  }
#line 235 "trailing_analysis.m"
}

#line 235 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
#line 235 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 235 "trailing_analysis.m"
{
#line 235 "trailing_analysis.m"
  {
#line 235 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 235 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0) == 0)
#line 235 "trailing_analysis.m"
      {
#line 235 "trailing_analysis.m"
        {
#line 236 "trailing_analysis.m"
          {
#line 236 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4, transform_hlds__trailing_analysis__env_ptr);
          }
#line 235 "trailing_analysis.m"
        }
#line 235 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 235 "trailing_analysis.m"
      }
#line 235 "trailing_analysis.m"
    else
#line 235 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 235 "trailing_analysis.m"
  }
#line 235 "trailing_analysis.m"
}

#line 243 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
#line 243 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 243 "trailing_analysis.m"
{
#line 243 "trailing_analysis.m"
  {
#line 243 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 243 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1, 1);
#line 243 "trailing_analysis.m"
  }
#line 243 "trailing_analysis.m"
}

#line 244 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
#line 244 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 244 "trailing_analysis.m"
{
#line 244 "trailing_analysis.m"
  {
#line 244 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 244 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59);
#line 244 "trailing_analysis.m"
    {
#line 244 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(transform_hlds__trailing_analysis__env_ptr);
    }
#line 244 "trailing_analysis.m"
  }
#line 244 "trailing_analysis.m"
}

#line 243 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
#line 243 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 243 "trailing_analysis.m"
{
#line 243 "trailing_analysis.m"
  {
#line 243 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 243 "trailing_analysis.m"
    {
#line 246 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 0)));
#line 246 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_68_68;

#line 246 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 1)));
#line 246 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 2)));
#line 246 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62 == (MR_Integer) 0);
#line 246 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 246 "trailing_analysis.m"
        {
#line 246 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(transform_hlds__trailing_analysis__env_ptr);
        }
#line 243 "trailing_analysis.m"
    }
#line 243 "trailing_analysis.m"
  }
#line 243 "trailing_analysis.m"
}

#line 243 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
#line 243 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 243 "trailing_analysis.m"
{
#line 243 "trailing_analysis.m"
  {
#line 243 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 243 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1) == 0)
#line 243 "trailing_analysis.m"
      {
#line 243 "trailing_analysis.m"
        {
#line 244 "trailing_analysis.m"
          {
#line 244 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8, transform_hlds__trailing_analysis__env_ptr);
          }
#line 243 "trailing_analysis.m"
        }
#line 243 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 243 "trailing_analysis.m"
      }
#line 243 "trailing_analysis.m"
    else
#line 243 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 243 "trailing_analysis.m"
  }
#line 243 "trailing_analysis.m"
}

#line 249 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
#line 249 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 249 "trailing_analysis.m"
{
#line 249 "trailing_analysis.m"
  {
#line 249 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 249 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2, 1);
#line 249 "trailing_analysis.m"
  }
#line 249 "trailing_analysis.m"
}

#line 249 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
#line 249 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 249 "trailing_analysis.m"
{
#line 249 "trailing_analysis.m"
  {
#line 249 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 249 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64);
#line 249 "trailing_analysis.m"
    {
#line 249 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(transform_hlds__trailing_analysis__env_ptr);
    }
#line 249 "trailing_analysis.m"
  }
#line 249 "trailing_analysis.m"
}

#line 249 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
#line 249 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 249 "trailing_analysis.m"
{
#line 249 "trailing_analysis.m"
  {
#line 249 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 249 "trailing_analysis.m"
    {
#line 250 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 0)));
#line 250 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_70_70;

#line 250 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 1)));
#line 250 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 2)));
#line 250 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63 == (MR_Integer) 2);
#line 250 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 250 "trailing_analysis.m"
        {
#line 250 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(transform_hlds__trailing_analysis__env_ptr);
        }
#line 249 "trailing_analysis.m"
    }
#line 249 "trailing_analysis.m"
  }
#line 249 "trailing_analysis.m"
}

#line 249 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
#line 249 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 249 "trailing_analysis.m"
{
#line 249 "trailing_analysis.m"
  {
#line 249 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 249 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2) == 0)
#line 249 "trailing_analysis.m"
      {
#line 249 "trailing_analysis.m"
        {
#line 249 "trailing_analysis.m"
          {
#line 249 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12, transform_hlds__trailing_analysis__env_ptr);
          }
#line 249 "trailing_analysis.m"
        }
#line 249 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 249 "trailing_analysis.m"
      }
#line 249 "trailing_analysis.m"
    else
#line 249 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 249 "trailing_analysis.m"
  }
#line 249 "trailing_analysis.m"
}

#line 176 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
#line 176 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Debug_6,
#line 176 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Pass1Only_7,
#line 176 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 176 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 176 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16)
#line 176 "trailing_analysis.m"
{
#line 176 "trailing_analysis.m"
  {
#line 176 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 179 "trailing_analysis.m"
    {
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_28_28;
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TrailingStatus_11;
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatus_12;
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_14;
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17;
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_20_20;
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21;
#line 179 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_37_37;
#line 220 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv3_ProcResults_10;
#line 220 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17;
#line 197 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21;

#line 220 "trailing_analysis.m"
      {
#line 220 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 220 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[0]));
#line 220 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1));
#line 220 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 220 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 3) = ((MR_Box) (transform_hlds__trailing_analysis__SCC_8));
#line 220 "trailing_analysis.m"
      }
#line 220 "trailing_analysis.m"
      {
#line 220 "trailing_analysis.m"
        mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[1], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_37_37, transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__trailing_analysis__conv3_ProcResults_10, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15)), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17);
      }
#line 220 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 = ((MR_Word) transform_hlds__trailing_analysis__conv3_ProcResults_10);
#line 220 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17 = ((MR_Word) transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17);
#line 228 "trailing_analysis.m"
      if (((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "trailing_analysis.m"
        {
#line 229 "trailing_analysis.m"
          {
#line 229 "trailing_analysis.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_combine_individual_proc_results\'/3", (MR_String) "empty SCC");
#line 229 "trailing_analysis.m"
            return;
          }
#line 228 "trailing_analysis.m"
        }
#line 228 "trailing_analysis.m"
      else
#line 231 "trailing_analysis.m"
        {
#line 231 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__TypeInfo_13_84;
#line 231 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76;
#line 267 "trailing_analysis.m"
          MR_Box transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12;

#line 235 "trailing_analysis.m"
          {
#line 235 "trailing_analysis.m"
            transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(&transform_hlds__trailing_analysis__env);
          }
#line 235 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 242 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 241 "trailing_analysis.m"
            transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 1;
#line 242 "trailing_analysis.m"
          else
#line 254 "trailing_analysis.m"
            {
#line 243 "trailing_analysis.m"
              {
#line 243 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(&transform_hlds__trailing_analysis__env);
              }
#line 243 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 247 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 249 "trailing_analysis.m"
                {
#line 249 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(&transform_hlds__trailing_analysis__env);
                }
#line 254 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 253 "trailing_analysis.m"
                transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 2;
#line 254 "trailing_analysis.m"
              else
#line 256 "trailing_analysis.m"
                transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 0;
#line 254 "trailing_analysis.m"
            }
#line 8745 "transform_hlds.trailing_analysis.c"
          transform_hlds__trailing_analysis__TypeInfo_13_84 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 266 "trailing_analysis.m"
          {
#line 266 "trailing_analysis.m"
            mercury__list__map_3_p_0((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, transform_hlds__trailing_analysis__TypeInfo_13_84, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[2], (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, &transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76);
          }
#line 267 "trailing_analysis.m"
          {
#line 267 "trailing_analysis.m"
            mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeInfo_13_84, transform_hlds__trailing_analysis__TypeInfo_13_84, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[3], transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76, ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]))), &transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12);
          }
#line 267 "trailing_analysis.m"
          transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12);
#line 231 "trailing_analysis.m"
        }
#line 192 "trailing_analysis.m"
#line 192 "trailing_analysis.m"
      switch (transform_hlds__trailing_analysis__Debug_6) {
#line 192 "trailing_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 192 "trailing_analysis.m"
        case (MR_Integer) 0:
#line 193 "trailing_analysis.m"
          {
#line 193 "trailing_analysis.m"
          }
#line 192 "trailing_analysis.m"
          break;
#line 192 "trailing_analysis.m"
        case (MR_Integer) 1:
#line 190 "trailing_analysis.m"
          {
#line 190 "trailing_analysis.m"
            transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17, transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__TrailingStatus_11);
          }
#line 192 "trailing_analysis.m"
          break;
#line 192 "trailing_analysis.m"
      }
#line 196 "trailing_analysis.m"
      {
#line 196 "trailing_analysis.m"
        transform_hlds__trailing_analysis__ProcTrailingInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_14, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_11));
#line 196 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_14, 1) = ((MR_Box) (transform_hlds__trailing_analysis__MaybeAnalysisStatus_12));
#line 196 "trailing_analysis.m"
      }
#line 197 "trailing_analysis.m"
      {
#line 197 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 197 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[1]));
#line 197 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16));
#line 197 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 197 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ProcTrailingInfo_14));
#line 197 "trailing_analysis.m"
      }
#line 8809 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8811 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 197 "trailing_analysis.m"
      {
#line 197 "trailing_analysis.m"
        mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_28_28, transform_hlds__trailing_analysis__V_20_20, transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17)), &transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21);
      }
#line 197 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21);
#line 202 "trailing_analysis.m"
#line 202 "trailing_analysis.m"
      switch (transform_hlds__trailing_analysis__Pass1Only_7) {
#line 202 "trailing_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 202 "trailing_analysis.m"
        case (MR_Integer) 0:
#line 200 "trailing_analysis.m"
          {
#line 201 "trailing_analysis.m"
            MR_Box transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16;

#line 201 "trailing_analysis.m"
            {
#line 201 "trailing_analysis.m"
              mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[4], transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21)), &transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16);
            }
#line 201 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16);
#line 200 "trailing_analysis.m"
          }
#line 202 "trailing_analysis.m"
          break;
#line 202 "trailing_analysis.m"
        case (MR_Integer) 1:
#line 203 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21;
#line 202 "trailing_analysis.m"
          break;
#line 202 "trailing_analysis.m"
      }
#line 179 "trailing_analysis.m"
    }
#line 176 "trailing_analysis.m"
  }
#line 176 "trailing_analysis.m"
}

#line 154 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2(
#line 154 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 154 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 154 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 154 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 154 "trailing_analysis.m"
{
#line 154 "trailing_analysis.m"
  {
#line 154 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 154 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11;

#line 154 "trailing_analysis.m"
    {
#line 154 "trailing_analysis.m"
      transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11);
    }
#line 154 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11));
#line 154 "trailing_analysis.m"
  }
#line 154 "trailing_analysis.m"
}

#line 140 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1(
#line 140 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 140 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 140 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 140 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 140 "trailing_analysis.m"
{
#line 140 "trailing_analysis.m"
  {
#line 140 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 140 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16;

#line 140 "trailing_analysis.m"
    {
#line 140 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16);
    }
#line 140 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16));
#line 140 "trailing_analysis.m"
  }
#line 140 "trailing_analysis.m"
}

#line 63 "trailing_analysis.m"
void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0(
#line 63 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18,
#line 63 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19)
#line 63 "trailing_analysis.m"
{
#line 122 "trailing_analysis.m"
  {
#line 122 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 122 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Globals_4;
#line 122 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__UseTrail_5;

#line 123 "trailing_analysis.m"
    {
#line 123 "trailing_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__trailing_analysis__Globals_4);
    }
#line 124 "trailing_analysis.m"
    {
#line 124 "trailing_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 215, &transform_hlds__trailing_analysis__UseTrail_5);
    }
#line 160 "trailing_analysis.m"
#line 160 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__UseTrail_5) {
#line 160 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 160 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 161 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18;
#line 160 "trailing_analysis.m"
        break;
#line 160 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 127 "trailing_analysis.m"
        {
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeOptInt_6;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeTransOptInt_7;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeAnalysisReg_8;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Pass1Only_9;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__DepInfo_10;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SCCs_11;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Debug_12;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcAnalysisKinds0_13;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcAnalysisKinds_14;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_24_24;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_27_27;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28;
#line 127 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30;
#line 140 "trailing_analysis.m"
          MR_Box transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28;

#line 128 "trailing_analysis.m"
          {
#line 128 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 86, &transform_hlds__trailing_analysis__MakeOptInt_6);
          }
#line 130 "trailing_analysis.m"
          {
#line 130 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 87, &transform_hlds__trailing_analysis__MakeTransOptInt_7);
          }
#line 132 "trailing_analysis.m"
          {
#line 132 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 88, &transform_hlds__trailing_analysis__MakeAnalysisReg_8);
          }
#line 134 "trailing_analysis.m"
          {
#line 134 "trailing_analysis.m"
            transform_hlds__trailing_analysis__V_24_24 = mercury__bool__or_2_f_0(transform_hlds__trailing_analysis__MakeOptInt_6, transform_hlds__trailing_analysis__MakeTransOptInt_7);
          }
#line 135 "trailing_analysis.m"
          {
#line 135 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Pass1Only_9 = mercury__bool__or_2_f_0(transform_hlds__trailing_analysis__V_24_24, transform_hlds__trailing_analysis__MakeAnalysisReg_8);
          }
#line 136 "trailing_analysis.m"
          {
#line 136 "trailing_analysis.m"
            transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25);
          }
#line 137 "trailing_analysis.m"
          {
#line 137 "trailing_analysis.m"
            hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25, &transform_hlds__trailing_analysis__DepInfo_10);
          }
#line 138 "trailing_analysis.m"
          {
#line 138 "trailing_analysis.m"
            hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__trailing_analysis__DepInfo_10, &transform_hlds__trailing_analysis__SCCs_11);
          }
#line 139 "trailing_analysis.m"
          {
#line 139 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 77, &transform_hlds__trailing_analysis__Debug_12);
          }
#line 140 "trailing_analysis.m"
          {
#line 140 "trailing_analysis.m"
            transform_hlds__trailing_analysis__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 140 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_5[0]));
#line 140 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1));
#line 140 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 140 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Debug_12));
#line 140 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 4) = ((MR_Box) (transform_hlds__trailing_analysis__Pass1Only_9));
#line 140 "trailing_analysis.m"
          }
#line 140 "trailing_analysis.m"
          {
#line 140 "trailing_analysis.m"
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_27_27, transform_hlds__trailing_analysis__SCCs_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25)), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28);
          }
#line 140 "trailing_analysis.m"
          transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28);
#line 142 "trailing_analysis.m"
          {
#line 142 "trailing_analysis.m"
            hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__trailing_analysis__ProcAnalysisKinds0_13);
          }
#line 143 "trailing_analysis.m"
          {
#line 143 "trailing_analysis.m"
            mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 1)), transform_hlds__trailing_analysis__ProcAnalysisKinds0_13, &transform_hlds__trailing_analysis__ProcAnalysisKinds_14);
          }
#line 144 "trailing_analysis.m"
          {
#line 144 "trailing_analysis.m"
            hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(transform_hlds__trailing_analysis__ProcAnalysisKinds_14, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30);
          }
#line 157 "trailing_analysis.m"
#line 157 "trailing_analysis.m"
          switch (transform_hlds__trailing_analysis__MakeAnalysisReg_8) {
#line 157 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 157 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 158 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30;
#line 157 "trailing_analysis.m"
              break;
#line 157 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 151 "trailing_analysis.m"
              {
#line 151 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__AnalysisInfo0_15;
#line 151 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__PredIds_16;
#line 151 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__AnalysisInfo_17;
#line 151 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_31_31;
#line 154 "trailing_analysis.m"
                MR_Box transform_hlds__trailing_analysis__conv3_AnalysisInfo_17;

#line 152 "trailing_analysis.m"
                {
#line 152 "trailing_analysis.m"
                  hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__trailing_analysis__AnalysisInfo0_15);
                }
#line 153 "trailing_analysis.m"
                {
#line 153 "trailing_analysis.m"
                  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__trailing_analysis__PredIds_16);
                }
#line 154 "trailing_analysis.m"
                {
#line 154 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 154 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[0]));
#line 154 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2));
#line 154 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 154 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 3) = ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30));
#line 154 "trailing_analysis.m"
                }
#line 154 "trailing_analysis.m"
                {
#line 154 "trailing_analysis.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__trailing_analysis__V_31_31, transform_hlds__trailing_analysis__PredIds_16, ((MR_Box) (transform_hlds__trailing_analysis__AnalysisInfo0_15)), &transform_hlds__trailing_analysis__conv3_AnalysisInfo_17);
                }
#line 154 "trailing_analysis.m"
                transform_hlds__trailing_analysis__AnalysisInfo_17 = ((MR_Word) transform_hlds__trailing_analysis__conv3_AnalysisInfo_17);
#line 156 "trailing_analysis.m"
                {
#line 156 "trailing_analysis.m"
                  hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__trailing_analysis__AnalysisInfo_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19);
                }
#line 151 "trailing_analysis.m"
              }
#line 157 "trailing_analysis.m"
              break;
#line 157 "trailing_analysis.m"
          }
#line 127 "trailing_analysis.m"
        }
#line 160 "trailing_analysis.m"
        break;
#line 160 "trailing_analysis.m"
    }
#line 122 "trailing_analysis.m"
  }
#line 63 "trailing_analysis.m"
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
