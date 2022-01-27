/*
** Automatically generated from `trailing_analysis.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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



#line 845 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s {
#line 851 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded;
#line 864 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45;
#line 873 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0;
#line 873 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47;
#line 873 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48;
#line 873 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49;
#line 873 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139;
#line 873 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140;
#line 845 "trailing_analysis.m"
};

#line 299 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s {
#line 304 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded;
#line 321 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48;
#line 342 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0;
#line 342 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52;
#line 342 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53;
#line 342 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54;
#line 342 "trailing_analysis.m"
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162;
#line 342 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163;
#line 299 "trailing_analysis.m"
};

#line 177 "trailing_analysis.m"
struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s {
#line 180 "trailing_analysis.m"
  MR_bool transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded;
#line 180 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10;
#line 236 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0;
#line 236 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58;
#line 237 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58;
#line 244 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1;
#line 244 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59;
#line 244 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62;
#line 245 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59;
#line 250 "trailing_analysis.m"
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2;
#line 250 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63;
#line 250 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64;
#line 250 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64;
#line 177 "trailing_analysis.m"
};


#line 221 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 224 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0;

#line 227 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0;

#line 230 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 233 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 236 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0;

#line 239 "transform_hlds.trailing_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3];

#line 242 "transform_hlds.trailing_analysis.c"
static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3];

#line 245 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0;

#line 248 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1];

#line 251 "transform_hlds.trailing_analysis.c"
static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1];

#line 254 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1];

#line 257 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1];

#line 260 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1];

#line 263 "transform_hlds.trailing_analysis.c"
static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0;

#line 266 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
#line 269 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 271 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2);

#line 274 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
#line 277 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 279 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 281 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 284 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
#line 287 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 289 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2);

#line 292 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
#line 295 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 297 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 299 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 302 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 305 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 307 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 310 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 313 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 315 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 317 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2);

#line 320 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 323 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 325 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 327 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 329 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 332 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 335 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 337 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 339 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 341 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3);

#line 344 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 347 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 350 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 353 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 356 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 359 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg);

#line 362 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 365 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 367 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 370 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
#line 373 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 375 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 378 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 381 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 383 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 385 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 387 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3,
#line 389 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_6);

#line 1053 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1053 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1053 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3);

#line 1048 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1048 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1048 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5);

#line 1043 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void);

#line 1042 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1041 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1040 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1039 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1038 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 443 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__443__1_1_f_0(
#line 443 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_125);

#line 1065 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(
#line 1065 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1065 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__2_2);

#line 1064 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(
#line 1064 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1);

#line 1053 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
#line 1053 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1053 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3);

#line 1048 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 1048 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1048 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5);

#line 1043 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 1043 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_17,
#line 1043 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_18,
#line 1043 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_19);

#line 1042 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0(void);

#line 1041 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0(void);

#line 1040 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

#line 1039 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

#line 1038 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void);

#line 170 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
#line 170 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 170 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 170 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3);

#line 170 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
#line 170 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 170 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2);

#line 1194 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_4_p_0(
#line 1194 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Moduleinfo_5,
#line 1194 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6);

#line 1192 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1(
#line 1192 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1192 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1192 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1192 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1179 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(
#line 1179 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 1179 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 1179 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8);

#line 1133 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
#line 1133 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_7,
#line 1133 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_8,
#line 1133 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_9,
#line 1133 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__ProcId_10,
#line 1133 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18,
#line 1133 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19);

#line 1130 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
#line 1130 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1130 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1130 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1130 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1124 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
#line 1124 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 1124 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_6,
#line 1124 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10,
#line 1124 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11);

#line 1089 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
#line 1089 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 1089 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_7,
#line 1089 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_8,
#line 1089 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12,
#line 1089 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13);

#line 1017 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
#line 1017 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1017 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15,
#line 1017 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16,
#line 1017 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1017 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 1017 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);

#line 1014 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
#line 1014 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1014 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1014 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1014 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1012 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
#line 1012 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1012 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1012 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1012 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1012 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1012 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 1008 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
#line 1008 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1008 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12,
#line 1008 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13,
#line 1008 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1008 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 1008 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15);

#line 1005 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
#line 1005 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1005 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1005 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1005 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 1003 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
#line 1003 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1003 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1003 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1003 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1003 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1003 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 998 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
#line 998 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 998 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12,
#line 998 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13,
#line 998 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 998 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 998 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15);

#line 873 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
#line 873 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 873 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
#line 873 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 873 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
#line 873 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 845 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
#line 845 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_8,
#line 845 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__GoalInfo_9,
#line 845 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109,
#line 845 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110,
#line 845 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_11,
#line 845 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111,
#line 845 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);

#line 826 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
#line 826 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 826 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15,
#line 826 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16,
#line 826 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 826 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 826 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);

#line 813 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
#line 813 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_4,
#line 813 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 813 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 768 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(
#line 768 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 768 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 768 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__TypeCtorCat_7);

#line 752 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_f_0(
#line 752 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 752 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_5);

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_4_p_0(
#line 744 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 744 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 744 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8,
#line 744 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9);

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 738 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0(
#line 738 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 738 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Types_5);

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 700 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
#line 700 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 700 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_6,
#line 700 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Vars_7);

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 669 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
#line 669 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 669 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 669 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 669 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 669 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeResult_10);

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 655 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
#line 655 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 655 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 655 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 655 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 655 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_10);

#line 635 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
#line 635 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusA_4,
#line 635 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusB_5,
#line 635 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeStatus_6);

#line 624 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
#line 624 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 624 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 624 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__3_3);

#line 560 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
#line 560 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_3,
#line 560 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_4);

#line 535 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
#line 535 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_5,
#line 535 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_6,
#line 535 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerStatus_7);

#line 525 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
#line 525 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Attributes_3);

#line 517 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
#line 517 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 517 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 517 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 517 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 515 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
#line 515 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 515 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 515 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 515 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 513 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
#line 513 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 513 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 513 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 513 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 513 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 513 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 507 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
#line 507 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 507 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 507 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goals_10,
#line 507 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 507 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 507 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16,
#line 507 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17);

#line 443 "trailing_analysis.m"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
#line 443 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 443 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1);

#line 342 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
#line 342 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 342 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
#line 342 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 342 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
#line 342 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 299 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
#line 299 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 299 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 299 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goal_10,
#line 299 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 299 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 299 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109,
#line 299 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);

#line 282 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
#line 282 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 282 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 282 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17,
#line 282 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18,
#line 282 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19,
#line 282 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20);

#line 271 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
#line 271 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcResult_3,
#line 271 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_4);

#line 207 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
#line 207 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_5,
#line 207 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 207 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 207 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);

#line 202 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
#line 202 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 202 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 202 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 202 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 198 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
#line 198 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 198 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 198 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 198 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 268 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
#line 268 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 268 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 268 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 268 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 267 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 267 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2);

#line 221 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
#line 221 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 221 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 221 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 221 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 221 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 221 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5);

#line 236 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
#line 236 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 237 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
#line 237 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 236 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
#line 236 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 236 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
#line 236 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 244 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
#line 244 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 245 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
#line 245 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 244 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
#line 244 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 244 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
#line 244 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 250 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
#line 250 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 250 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
#line 250 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 250 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
#line 250 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 250 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
#line 250 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg);

#line 177 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
#line 177 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Debug_6,
#line 177 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Pass1Only_7,
#line 177 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 177 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 177 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16);

#line 155 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2(
#line 155 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 155 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 155 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 155 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3);

#line 141 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1(
#line 141 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 141 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 141 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 141 "trailing_analysis.m"
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


#line 347 "trailing_analysis.m"
/* sealed */ struct transform_hlds__trailing_analysis__vector_common_type_9_0_s {
#line 347 "trailing_analysis.m"
  const MR_Word transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 347 "trailing_analysis.m"
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



#line 1639 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1647 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0
  }
};

#line 1655 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 1663 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1671 "transform_hlds.trailing_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1680 "transform_hlds.trailing_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 1688 "transform_hlds.trailing_analysis.c"
static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0
};

#line 1695 "transform_hlds.trailing_analysis.c"
static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3] = {
  (MR_String) "tpr_ppid",
  (MR_String) "tpr_status",
  (MR_String) "tpr_maybe_analysis_status"
};

#line 1702 "transform_hlds.trailing_analysis.c"
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

#line 1717 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1] = {
  &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0
};

#line 1722 "transform_hlds.trailing_analysis.c"
static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0
  }
};

#line 1731 "transform_hlds.trailing_analysis.c"
static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1] = {
  &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0
};

#line 1736 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1] = {
  (MR_Integer) 0
};

#line 1741 "transform_hlds.trailing_analysis.c"
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

#line 1758 "transform_hlds.trailing_analysis.c"
static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1] = {
  (MR_Integer) 0
};

#line 1763 "transform_hlds.trailing_analysis.c"
static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 = {
  (MR_String) "trailing_analysis_answer",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0,
  NULL
};

#line 1770 "transform_hlds.trailing_analysis.c"
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

#line 1787 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 1798 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 1809 "transform_hlds.trailing_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 1818 "transform_hlds.trailing_analysis.c"
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

#line 1833 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
#line 1836 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1838 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1840 "transform_hlds.trailing_analysis.c"
{
#line 1842 "transform_hlds.trailing_analysis.c"
  {
#line 1844 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1847 "transform_hlds.trailing_analysis.c"
    {
#line 1849 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2));
    }
#line 1852 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 1854 "transform_hlds.trailing_analysis.c"
  }
#line 1856 "transform_hlds.trailing_analysis.c"
}

#line 1859 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
#line 1862 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1864 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1866 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1868 "transform_hlds.trailing_analysis.c"
{
#line 1870 "transform_hlds.trailing_analysis.c"
  {
#line 1872 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__1_1;

#line 1875 "transform_hlds.trailing_analysis.c"
    {
#line 1877 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(&transform_hlds__trailing_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 1880 "transform_hlds.trailing_analysis.c"
    *transform_hlds__trailing_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__1_1));
#line 1882 "transform_hlds.trailing_analysis.c"
  }
#line 1884 "transform_hlds.trailing_analysis.c"
}

#line 1887 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
#line 1890 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1892 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1894 "transform_hlds.trailing_analysis.c"
{
#line 1896 "transform_hlds.trailing_analysis.c"
  {
#line 1898 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1901 "transform_hlds.trailing_analysis.c"
    {
#line 1903 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2));
    }
#line 1906 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 1908 "transform_hlds.trailing_analysis.c"
  }
#line 1910 "transform_hlds.trailing_analysis.c"
}

#line 1913 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
#line 1916 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1918 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1920 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1922 "transform_hlds.trailing_analysis.c"
{
#line 1924 "transform_hlds.trailing_analysis.c"
  {
#line 1926 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__1_1;

#line 1929 "transform_hlds.trailing_analysis.c"
    {
#line 1931 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(&transform_hlds__trailing_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 1934 "transform_hlds.trailing_analysis.c"
    *transform_hlds__trailing_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__1_1));
#line 1936 "transform_hlds.trailing_analysis.c"
  }
#line 1938 "transform_hlds.trailing_analysis.c"
}

#line 1941 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 1944 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1946 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 1948 "transform_hlds.trailing_analysis.c"
{
#line 1950 "transform_hlds.trailing_analysis.c"
  {
#line 1952 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_2;
#line 1954 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 1956 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__2_2;

#line 1959 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1961 "transform_hlds.trailing_analysis.c"
    {
#line 1963 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__2_2 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
    }
#line 1966 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__2_2));
#line 1968 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_2;
#line 1970 "transform_hlds.trailing_analysis.c"
  }
#line 1972 "transform_hlds.trailing_analysis.c"
}

#line 1975 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 1978 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1980 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1982 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2)
#line 1984 "transform_hlds.trailing_analysis.c"
{
#line 1986 "transform_hlds.trailing_analysis.c"
  {
#line 1988 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1990 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 1992 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__2_2;

#line 1995 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1997 "transform_hlds.trailing_analysis.c"
    {
#line 1999 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv0_HeadVar__2_2);
    }
#line 2002 "transform_hlds.trailing_analysis.c"
    if (transform_hlds__trailing_analysis__succeeded)
#line 2004 "transform_hlds.trailing_analysis.c"
      {
#line 2006 "transform_hlds.trailing_analysis.c"
        *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__2_2));
#line 2008 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 2010 "transform_hlds.trailing_analysis.c"
      }
#line 2012 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2014 "transform_hlds.trailing_analysis.c"
  }
#line 2016 "transform_hlds.trailing_analysis.c"
}

#line 2019 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 2022 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2024 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2026 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2028 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 2030 "transform_hlds.trailing_analysis.c"
{
#line 2032 "transform_hlds.trailing_analysis.c"
  {
#line 2034 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 2036 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2039 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2041 "transform_hlds.trailing_analysis.c"
    {
#line 2043 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2046 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2048 "transform_hlds.trailing_analysis.c"
  }
#line 2050 "transform_hlds.trailing_analysis.c"
}

#line 2053 "transform_hlds.trailing_analysis.c"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 2056 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2058 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2060 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2062 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3)
#line 2064 "transform_hlds.trailing_analysis.c"
{
#line 2066 "transform_hlds.trailing_analysis.c"
  {
#line 2068 "transform_hlds.trailing_analysis.c"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 2070 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2073 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2075 "transform_hlds.trailing_analysis.c"
    {
#line 2077 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2080 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__succeeded;
#line 2082 "transform_hlds.trailing_analysis.c"
  }
#line 2084 "transform_hlds.trailing_analysis.c"
}

#line 2087 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 2090 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2092 "transform_hlds.trailing_analysis.c"
{
#line 2094 "transform_hlds.trailing_analysis.c"
  {
#line 2096 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2098 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2100 "transform_hlds.trailing_analysis.c"
    MR_String transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2103 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2105 "transform_hlds.trailing_analysis.c"
    {
#line 2107 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0();
    }
#line 2110 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2112 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2114 "transform_hlds.trailing_analysis.c"
  }
#line 2116 "transform_hlds.trailing_analysis.c"
}

#line 2119 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 2122 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2124 "transform_hlds.trailing_analysis.c"
{
#line 2126 "transform_hlds.trailing_analysis.c"
  {
#line 2128 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2130 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2132 "transform_hlds.trailing_analysis.c"
    MR_Integer transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2135 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2137 "transform_hlds.trailing_analysis.c"
    {
#line 2139 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    }
#line 2142 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2144 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2146 "transform_hlds.trailing_analysis.c"
  }
#line 2148 "transform_hlds.trailing_analysis.c"
}

#line 2151 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 2154 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg)
#line 2156 "transform_hlds.trailing_analysis.c"
{
#line 2158 "transform_hlds.trailing_analysis.c"
  {
#line 2160 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2162 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2164 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2167 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2169 "transform_hlds.trailing_analysis.c"
    {
#line 2171 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    }
#line 2174 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2176 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2178 "transform_hlds.trailing_analysis.c"
  }
#line 2180 "transform_hlds.trailing_analysis.c"
}

#line 2183 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 2186 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2188 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 2190 "transform_hlds.trailing_analysis.c"
{
#line 2192 "transform_hlds.trailing_analysis.c"
  {
#line 2194 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2196 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2198 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2201 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2203 "transform_hlds.trailing_analysis.c"
    {
#line 2205 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0();
    }
#line 2208 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2210 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2212 "transform_hlds.trailing_analysis.c"
  }
#line 2214 "transform_hlds.trailing_analysis.c"
}

#line 2217 "transform_hlds.trailing_analysis.c"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
#line 2220 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2222 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 2224 "transform_hlds.trailing_analysis.c"
{
#line 2226 "transform_hlds.trailing_analysis.c"
  {
#line 2228 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2230 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;
#line 2232 "transform_hlds.trailing_analysis.c"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__3_3;

#line 2235 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2237 "transform_hlds.trailing_analysis.c"
    {
#line 2239 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0();
    }
#line 2242 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__3_3));
#line 2244 "transform_hlds.trailing_analysis.c"
    return transform_hlds__trailing_analysis__wrapper_arg_3;
#line 2246 "transform_hlds.trailing_analysis.c"
  }
#line 2248 "transform_hlds.trailing_analysis.c"
}

#line 2251 "transform_hlds.trailing_analysis.c"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 2254 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 2256 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 2258 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 2260 "transform_hlds.trailing_analysis.c"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_3,
#line 2262 "transform_hlds.trailing_analysis.c"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_6)
#line 2264 "transform_hlds.trailing_analysis.c"
{
#line 2266 "transform_hlds.trailing_analysis.c"
  {
#line 2268 "transform_hlds.trailing_analysis.c"
    MR_Box transform_hlds__trailing_analysis__closure;

#line 2271 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 2273 "transform_hlds.trailing_analysis.c"
    {
#line 2275 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_3));
    }
#line 2278 "transform_hlds.trailing_analysis.c"
  }
#line 2280 "transform_hlds.trailing_analysis.c"
}

#line 1053 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1053 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1053 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3)
#line 1053 "trailing_analysis.m"
{
#line 1030 "trailing_analysis.m"
  {
#line 1030 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1030 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_11 = (MR_Integer) transform_hlds__trailing_analysis__Status_3;
#line 1030 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_12 = (MR_Integer) transform_hlds__trailing_analysis__Status_8;

#line 1030 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_11 == transform_hlds__trailing_analysis__CastY_12);
#line 1030 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1030 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1030 "trailing_analysis.m"
    else
#line 1030 "trailing_analysis.m"
      {
#line 1030 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9 = (MR_Word) transform_hlds__trailing_analysis__Status_3;
#line 1030 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_10_10 = (MR_Word) transform_hlds__trailing_analysis__Status_8;

#line 2316 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_9_9 == transform_hlds__trailing_analysis__V_10_10);
#line 1030 "trailing_analysis.m"
      }
#line 1030 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1030 "trailing_analysis.m"
  }
#line 1053 "trailing_analysis.m"
}

#line 1048 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
#line 1048 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1048 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5)
#line 1048 "trailing_analysis.m"
{
#line 1048 "trailing_analysis.m"
  {
#line 1048 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1048 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status1_6 = (MR_Word) transform_hlds__trailing_analysis__Answer1_4;
#line 1048 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status2_7 = (MR_Word) transform_hlds__trailing_analysis__Answer2_5;

#line 1059 "trailing_analysis.m"
#line 1059 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__Status1_6) {
#line 1059 "trailing_analysis.m"
      default:
#line 1059 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1059 "trailing_analysis.m"
        break;
#line 1059 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 1061 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__Status2_7 == (MR_Integer) 0);
#line 1059 "trailing_analysis.m"
        break;
#line 1059 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1059 "trailing_analysis.m"
#line 1059 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__Status2_7) {
#line 1059 "trailing_analysis.m"
          default:
#line 1059 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1059 "trailing_analysis.m"
            break;
#line 1059 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 1060 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1059 "trailing_analysis.m"
            break;
#line 1059 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 1059 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1059 "trailing_analysis.m"
            break;
#line 1059 "trailing_analysis.m"
        }
#line 1059 "trailing_analysis.m"
        break;
#line 1059 "trailing_analysis.m"
    }
#line 1048 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1048 "trailing_analysis.m"
  }
#line 1048 "trailing_analysis.m"
}

#line 1043 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void)
#line 1043 "trailing_analysis.m"
{
#line 1043 "trailing_analysis.m"
  {
#line 1043 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1043 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1043 "trailing_analysis.m"
  }
#line 1043 "trailing_analysis.m"
}

#line 1042 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1042 "trailing_analysis.m"
{
#line 1042 "trailing_analysis.m"
  {
#line 1042 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1042 "trailing_analysis.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1042 "trailing_analysis.m"
  }
#line 1042 "trailing_analysis.m"
}

#line 1041 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1041 "trailing_analysis.m"
{
#line 1041 "trailing_analysis.m"
  {
#line 1041 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1041 "trailing_analysis.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 1));
#line 1041 "trailing_analysis.m"
  }
#line 1041 "trailing_analysis.m"
}

#line 1040 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1040 "trailing_analysis.m"
{
#line 1040 "trailing_analysis.m"
  {
#line 1040 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1040 "trailing_analysis.m"
    return (MR_Integer) 0;
#line 1040 "trailing_analysis.m"
  }
#line 1040 "trailing_analysis.m"
}

#line 1039 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1039 "trailing_analysis.m"
{
#line 1039 "trailing_analysis.m"
  {
#line 1039 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1039 "trailing_analysis.m"
    return (MR_Integer) 1;
#line 1039 "trailing_analysis.m"
  }
#line 1039 "trailing_analysis.m"
}

#line 1038 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1038 "trailing_analysis.m"
{
#line 1035 "trailing_analysis.m"
  {
#line 1035 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1035 "trailing_analysis.m"
    return (MR_String) "trail_usage";
#line 1035 "trailing_analysis.m"
  }
#line 1038 "trailing_analysis.m"
}

#line 443 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__443__1_1_f_0(
#line 443 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_125)
#line 443 "trailing_analysis.m"
{
#line 443 "trailing_analysis.m"
  {
#line 443 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 443 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__2_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_125, (MR_Integer) 2)));
#line 443 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_125, (MR_Integer) 0)));
#line 443 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_125, (MR_Integer) 1)));

#line 443 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__2_126;
#line 443 "trailing_analysis.m"
  }
#line 443 "trailing_analysis.m"
}

#line 1065 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(
#line 1065 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1065 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__2_2)
#line 1065 "trailing_analysis.m"
{
#line 1077 "trailing_analysis.m"
  {
#line 1077 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1077 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_4;
#line 1077 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__String_5;
#line 1077 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_7_7;
#line 1077 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_8_8;
#line 1078 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6;

#line 1078 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1078 "trailing_analysis.m"
      {
#line 1078 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1078 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1078 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 1078 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__V_7_7)) == (MR_mktag((MR_Integer) 0)));
#line 1078 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 1078 "trailing_analysis.m"
          {
#line 1078 "trailing_analysis.m"
            transform_hlds__trailing_analysis__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, (MR_Integer) 0)));
#line 1078 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1077 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 1077 "trailing_analysis.m"
              {
#line 1085 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "conditional") == 0))
#line 1087 "trailing_analysis.m"
                  {
#line 1087 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 2;
#line 1087 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1087 "trailing_analysis.m"
                  }
#line 1085 "trailing_analysis.m"
                else
#line 1085 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "may_modify_trail") == 0))
#line 1085 "trailing_analysis.m"
                  {
#line 1085 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 0;
#line 1085 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1085 "trailing_analysis.m"
                  }
#line 1085 "trailing_analysis.m"
                else
#line 1085 "trailing_analysis.m"
                if ((strcmp(transform_hlds__trailing_analysis__String_5, (MR_String) "will_not_modify_trail") == 0))
#line 1086 "trailing_analysis.m"
                  {
#line 1086 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 1086 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1086 "trailing_analysis.m"
                  }
#line 1085 "trailing_analysis.m"
                else
#line 1085 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 1077 "trailing_analysis.m"
                if (transform_hlds__trailing_analysis__succeeded)
#line 1077 "trailing_analysis.m"
                  {
#line 1077 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Word) transform_hlds__trailing_analysis__Status_4;
#line 1077 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1077 "trailing_analysis.m"
                  }
#line 1077 "trailing_analysis.m"
              }
#line 1078 "trailing_analysis.m"
          }
#line 1078 "trailing_analysis.m"
      }
#line 1077 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1077 "trailing_analysis.m"
  }
#line 1065 "trailing_analysis.m"
}

#line 1064 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(
#line 1064 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1)
#line 1064 "trailing_analysis.m"
{
#line 1070 "trailing_analysis.m"
  {
#line 1070 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1070 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1070 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1070 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__String_5;
#line 1070 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6;
#line 1070 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_8_8;

#line 1085 "trailing_analysis.m"
#line 1085 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__Status_4) {
#line 1085 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1085 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 1087 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "conditional";
#line 1085 "trailing_analysis.m"
        break;
#line 1085 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 1085 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "may_modify_trail";
#line 1085 "trailing_analysis.m"
        break;
#line 1085 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1086 "trailing_analysis.m"
        transform_hlds__trailing_analysis__String_5 = (MR_String) "will_not_modify_trail";
#line 1085 "trailing_analysis.m"
        break;
#line 1085 "trailing_analysis.m"
    }
#line 1072 "trailing_analysis.m"
    {
#line 1072 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_6_6, 0) = ((MR_Box) (transform_hlds__trailing_analysis__String_5));
#line 1072 "trailing_analysis.m"
    }
#line 1072 "trailing_analysis.m"
    {
#line 1072 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 1072 "trailing_analysis.m"
    {
#line 1072 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_6_6));
#line 1072 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1072 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__trailing_analysis__V_8_8));
#line 1072 "trailing_analysis.m"
    }
#line 1070 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1070 "trailing_analysis.m"
  }
#line 1064 "trailing_analysis.m"
}

#line 1053 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
#line 1053 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8,
#line 1053 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_3)
#line 1053 "trailing_analysis.m"
{
#line 1030 "trailing_analysis.m"
  {
#line 1030 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1030 "trailing_analysis.m"
    {
#line 1030 "trailing_analysis.m"
      return transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__trailing_analysis__Status_8, transform_hlds__trailing_analysis__Status_3);
    }
#line 1030 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1030 "trailing_analysis.m"
  }
#line 1053 "trailing_analysis.m"
}

#line 1048 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
#line 1048 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer1_4,
#line 1048 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Answer2_5)
#line 1048 "trailing_analysis.m"
{
#line 1048 "trailing_analysis.m"
  {
#line 1048 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1048 "trailing_analysis.m"
    {
#line 1048 "trailing_analysis.m"
      return transform_hlds__trailing_analysis__succeeded = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(transform_hlds__trailing_analysis__Answer1_4, transform_hlds__trailing_analysis__Answer2_5);
    }
#line 1048 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1048 "trailing_analysis.m"
  }
#line 1048 "trailing_analysis.m"
}

#line 1043 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 1043 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_17,
#line 1043 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_18,
#line 1043 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_19)
#line 1043 "trailing_analysis.m"
{
#line 1043 "trailing_analysis.m"
  {
#line 1043 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 1043 "trailing_analysis.m"
    {
#line 1043 "trailing_analysis.m"
      transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0();
#line 1043 "trailing_analysis.m"
      return;
    }
#line 1043 "trailing_analysis.m"
  }
#line 1043 "trailing_analysis.m"
}

#line 1042 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0(void)
#line 1042 "trailing_analysis.m"
{
#line 1042 "trailing_analysis.m"
  {
#line 1042 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1042 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1042 "trailing_analysis.m"
    {
#line 1042 "trailing_analysis.m"
      return transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1042 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1042 "trailing_analysis.m"
  }
#line 1042 "trailing_analysis.m"
}

#line 1041 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0(void)
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
      return transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1041 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1041 "trailing_analysis.m"
  }
#line 1041 "trailing_analysis.m"
}

#line 1040 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
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
      return transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1040 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1040 "trailing_analysis.m"
  }
#line 1040 "trailing_analysis.m"
}

#line 1039 "trailing_analysis.m"
static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
#line 1039 "trailing_analysis.m"
{
#line 1039 "trailing_analysis.m"
  {
#line 1039 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1039 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1039 "trailing_analysis.m"
    {
#line 1039 "trailing_analysis.m"
      return transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1039 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1039 "trailing_analysis.m"
  }
#line 1039 "trailing_analysis.m"
}

#line 1038 "trailing_analysis.m"
static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void)
#line 1038 "trailing_analysis.m"
{
#line 1035 "trailing_analysis.m"
  {
#line 1035 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1035 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1035 "trailing_analysis.m"
    {
#line 1035 "trailing_analysis.m"
      return transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1035 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1035 "trailing_analysis.m"
  }
#line 1038 "trailing_analysis.m"
}

#line 1030 "trailing_analysis.m"
void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(
#line 1030 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1030 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 1030 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3)
#line 1030 "trailing_analysis.m"
{
#line 1030 "trailing_analysis.m"
  {
#line 1030 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1030 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_6 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1030 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_7 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__3_3;

#line 1030 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_6 == transform_hlds__trailing_analysis__CastY_7);
#line 1030 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 2935 "transform_hlds.trailing_analysis.c"
      *transform_hlds__trailing_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 1030 "trailing_analysis.m"
    else
#line 1030 "trailing_analysis.m"
      {
#line 1030 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 1030 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__3_3;
#line 1030 "trailing_analysis.m"
        MR_Integer transform_hlds__trailing_analysis__V_9_9 = (MR_Integer) transform_hlds__trailing_analysis__V_4_4;
#line 1030 "trailing_analysis.m"
        MR_Integer transform_hlds__trailing_analysis__V_10_10 = (MR_Integer) transform_hlds__trailing_analysis__V_5_5;

#line 1030 "trailing_analysis.m"
        {
#line 1030 "trailing_analysis.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__trailing_analysis__HeadVar__1_1, transform_hlds__trailing_analysis__V_9_9, transform_hlds__trailing_analysis__V_10_10);
#line 1030 "trailing_analysis.m"
          return;
        }
#line 1030 "trailing_analysis.m"
      }
#line 1030 "trailing_analysis.m"
  }
#line 1030 "trailing_analysis.m"
}

#line 1030 "trailing_analysis.m"
MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(
#line 1030 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 1030 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2)
#line 1030 "trailing_analysis.m"
{
#line 1030 "trailing_analysis.m"
  {
#line 1030 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1030 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_5 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1030 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_6 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 1030 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_5 == transform_hlds__trailing_analysis__CastY_6);
#line 1030 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 1030 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 1030 "trailing_analysis.m"
    else
#line 1030 "trailing_analysis.m"
      {
#line 1030 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_3_3 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 1030 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = (MR_Word) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 2997 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_3_3 == transform_hlds__trailing_analysis__V_4_4);
#line 1030 "trailing_analysis.m"
      }
#line 1030 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 1030 "trailing_analysis.m"
  }
#line 1030 "trailing_analysis.m"
}

#line 170 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
#line 170 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__1_1,
#line 170 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 170 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__3_3)
#line 170 "trailing_analysis.m"
{
#line 170 "trailing_analysis.m"
  {
#line 170 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 170 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_12 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;
#line 170 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_13 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__3_3;

#line 170 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_12 == transform_hlds__trailing_analysis__CastY_13);
#line 170 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 3032 "transform_hlds.trailing_analysis.c"
      *transform_hlds__trailing_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "trailing_analysis.m"
    else
#line 170 "trailing_analysis.m"
      {
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_10_10;

#line 170 "trailing_analysis.m"
        {
#line 170 "trailing_analysis.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__trailing_analysis__V_10_10, transform_hlds__trailing_analysis__V_4_4, transform_hlds__trailing_analysis__V_7_7);
        }
#line 3058 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_10_10 == (MR_Integer) 0);
#line 170 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 170 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 170 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__HeadVar__1_1 = transform_hlds__trailing_analysis__V_10_10;
#line 170 "trailing_analysis.m"
        else
#line 170 "trailing_analysis.m"
          {
#line 170 "trailing_analysis.m"
            MR_Word transform_hlds__trailing_analysis__V_11_11;
#line 170 "trailing_analysis.m"
            MR_Integer transform_hlds__trailing_analysis__V_17_17 = (MR_Integer) transform_hlds__trailing_analysis__V_5_5;
#line 170 "trailing_analysis.m"
            MR_Integer transform_hlds__trailing_analysis__V_18_18 = (MR_Integer) transform_hlds__trailing_analysis__V_8_8;

#line 170 "trailing_analysis.m"
            {
#line 170 "trailing_analysis.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__trailing_analysis__V_11_11, transform_hlds__trailing_analysis__V_17_17, transform_hlds__trailing_analysis__V_18_18);
            }
#line 3082 "transform_hlds.trailing_analysis.c"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_11_11 == (MR_Integer) 0);
#line 170 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 170 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 170 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__HeadVar__1_1 = transform_hlds__trailing_analysis__V_11_11;
#line 170 "trailing_analysis.m"
            else
#line 170 "trailing_analysis.m"
              {
#line 170 "trailing_analysis.m"
                {
#line 170 "trailing_analysis.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2], transform_hlds__trailing_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__trailing_analysis__V_6_6)), ((MR_Box) (transform_hlds__trailing_analysis__V_9_9)));
#line 170 "trailing_analysis.m"
                  return;
                }
#line 170 "trailing_analysis.m"
              }
#line 170 "trailing_analysis.m"
          }
#line 170 "trailing_analysis.m"
      }
#line 170 "trailing_analysis.m"
  }
#line 170 "trailing_analysis.m"
}

#line 170 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
#line 170 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 170 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2)
#line 170 "trailing_analysis.m"
{
#line 170 "trailing_analysis.m"
  {
#line 170 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 170 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastX_9 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__1_1;
#line 170 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__CastY_10 = (MR_Integer) transform_hlds__trailing_analysis__HeadVar__2_2;

#line 170 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__CastX_9 == transform_hlds__trailing_analysis__CastY_10);
#line 170 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 170 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 170 "trailing_analysis.m"
    else
#line 170 "trailing_analysis.m"
      {
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeInfo_12_12;
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 3155 "transform_hlds.trailing_analysis.c"
        {
#line 3157 "transform_hlds.trailing_analysis.c"
          transform_hlds__trailing_analysis__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__trailing_analysis__V_3_3, transform_hlds__trailing_analysis__V_6_6);
        }
#line 170 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 170 "trailing_analysis.m"
          {
#line 3164 "transform_hlds.trailing_analysis.c"
            transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_4_4 == transform_hlds__trailing_analysis__V_7_7);
#line 170 "trailing_analysis.m"
            if (transform_hlds__trailing_analysis__succeeded)
#line 170 "trailing_analysis.m"
              {
#line 3170 "transform_hlds.trailing_analysis.c"
                transform_hlds__trailing_analysis__TypeInfo_12_12 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 3172 "transform_hlds.trailing_analysis.c"
                {
#line 3174 "transform_hlds.trailing_analysis.c"
                  return transform_hlds__trailing_analysis__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__trailing_analysis__TypeInfo_12_12, ((MR_Box) (transform_hlds__trailing_analysis__V_5_5)), ((MR_Box) (transform_hlds__trailing_analysis__V_8_8)));
                }
#line 170 "trailing_analysis.m"
              }
#line 170 "trailing_analysis.m"
          }
#line 170 "trailing_analysis.m"
      }
#line 170 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 170 "trailing_analysis.m"
  }
#line 170 "trailing_analysis.m"
}

#line 1194 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_4_p_0(
#line 1194 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Moduleinfo_5,
#line 1194 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6)
#line 1194 "trailing_analysis.m"
{
#line 1197 "trailing_analysis.m"
  {
#line 1197 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1197 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Pieces_8;
#line 1197 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__Str_9;
#line 1197 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__V_21_21;

#line 1198 "trailing_analysis.m"
    {
#line 1198 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Pieces_8 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__trailing_analysis__Moduleinfo_5, (MR_Integer) 0, transform_hlds__trailing_analysis__PPId_6);
    }
#line 1199 "trailing_analysis.m"
    {
#line 1199 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Str_9 = parse_tree__error_util__error_pieces_to_string_1_f_0(transform_hlds__trailing_analysis__Pieces_8);
    }
#line 1200 "trailing_analysis.m"
    {
#line 1200 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1200 "trailing_analysis.m"
    {
#line 1200 "trailing_analysis.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_8[1], transform_hlds__trailing_analysis__Str_9, &transform_hlds__trailing_analysis__V_21_21);
    }
#line 1200 "trailing_analysis.m"
    {
#line 1200 "trailing_analysis.m"
      mercury__io__write_string_3_p_0(transform_hlds__trailing_analysis__V_21_21);
    }
#line 1200 "trailing_analysis.m"
    {
#line 1200 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1200 "trailing_analysis.m"
      return;
    }
#line 1197 "trailing_analysis.m"
  }
#line 1194 "trailing_analysis.m"
}

#line 1192 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1(
#line 1192 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1192 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1192 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1192 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1192 "trailing_analysis.m"
{
#line 1192 "trailing_analysis.m"
  {
#line 1192 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;

#line 1192 "trailing_analysis.m"
    {
#line 1192 "trailing_analysis.m"
      transform_hlds__trailing_analysis__output_proc_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
#line 1192 "trailing_analysis.m"
      return;
    }
#line 1192 "trailing_analysis.m"
  }
#line 1192 "trailing_analysis.m"
}

#line 1179 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(
#line 1179 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 1179 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 1179 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Status_8)
#line 1179 "trailing_analysis.m"
{
#line 1182 "trailing_analysis.m"
  {
#line 1182 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1182 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_24_24;
#line 1192 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_IO_16_16;

#line 1183 "trailing_analysis.m"
    {
#line 1183 "trailing_analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "SCC: ");
    }
#line 1184 "trailing_analysis.m"
    {
#line 1184 "trailing_analysis.m"
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, ((MR_Box) (transform_hlds__trailing_analysis__Status_8)));
    }
#line 1185 "trailing_analysis.m"
    {
#line 1185 "trailing_analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1192 "trailing_analysis.m"
    {
#line 1192 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
#line 1192 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 1) = ((MR_Box) (transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1));
#line 1192 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1192 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_24_24, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 1192 "trailing_analysis.m"
    }
#line 1192 "trailing_analysis.m"
    {
#line 1192 "trailing_analysis.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__trailing_analysis__V_24_24, transform_hlds__trailing_analysis__SCC_7, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 1187 "trailing_analysis.m"
    {
#line 1187 "trailing_analysis.m"
      mercury__io__nl_2_p_0();
#line 1187 "trailing_analysis.m"
      return;
    }
#line 1182 "trailing_analysis.m"
  }
#line 1179 "trailing_analysis.m"
}

#line 1133 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
#line 1133 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_7,
#line 1133 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_8,
#line 1133 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_9,
#line 1133 "trailing_analysis.m"
  MR_Integer transform_hlds__trailing_analysis__ProcId_10,
#line 1133 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18,
#line 1133 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19)
#line 1133 "trailing_analysis.m"
{
#line 1137 "trailing_analysis.m"
  {
#line 1137 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1137 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ShouldWrite_12;

#line 1138 "trailing_analysis.m"
    {
#line 1138 "trailing_analysis.m"
      transform_hlds__intermod__should_write_trailing_info_6_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PredId_8, transform_hlds__trailing_analysis__ProcId_10, transform_hlds__trailing_analysis__PredInfo_9, (MR_Integer) 0, &transform_hlds__trailing_analysis__ShouldWrite_12);
    }
#line 1147 "trailing_analysis.m"
#line 1147 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__ShouldWrite_12) {
#line 1147 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1147 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 1148 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18;
#line 1147 "trailing_analysis.m"
        break;
#line 1147 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 1141 "trailing_analysis.m"
        {
#line 1141 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__PPId_13;
#line 1141 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Status_14;
#line 1141 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ResultStatus_15;
#line 1141 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_16;
#line 1141 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__FuncId_17;
#line 1141 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_22_22;
#line 1141 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcInfo_30;
#line 1141 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31;
#line 1155 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___PredInfo_29;

#line 1142 "trailing_analysis.m"
          {
#line 1142 "trailing_analysis.m"
            transform_hlds__trailing_analysis__PPId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__PPId_13, 0) = ((MR_Box) (transform_hlds__trailing_analysis__PredId_8));
#line 1142 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__PPId_13, 1) = ((MR_Box) (transform_hlds__trailing_analysis__ProcId_10));
#line 1142 "trailing_analysis.m"
          }
#line 1155 "trailing_analysis.m"
          {
#line 1155 "trailing_analysis.m"
            hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PPId_13, &transform_hlds__trailing_analysis___PredInfo_29, &transform_hlds__trailing_analysis__ProcInfo_30);
          }
#line 1156 "trailing_analysis.m"
          {
#line 1156 "trailing_analysis.m"
            hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_30, &transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31);
          }
#line 1166 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1167 "trailing_analysis.m"
            {
#line 1170 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_14 = (MR_Integer) 0;
#line 1171 "trailing_analysis.m"
              transform_hlds__trailing_analysis__ResultStatus_15 = (MR_Integer) 2;
#line 1167 "trailing_analysis.m"
            }
#line 1166 "trailing_analysis.m"
          else
#line 1158 "trailing_analysis.m"
            {
#line 1158 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeProcTrailingInfo_31, (MR_Integer) 0)));
#line 1158 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__MaybeResultStatus_33;

#line 1159 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_32, (MR_Integer) 0)));
#line 1159 "trailing_analysis.m"
              transform_hlds__trailing_analysis__MaybeResultStatus_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_32, (MR_Integer) 1)));
#line 1162 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__MaybeResultStatus_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1163 "trailing_analysis.m"
                {
#line 1164 "trailing_analysis.m"
                  {
#line 1164 "trailing_analysis.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.lookup_proc_trailing_info\'/4", (MR_String) "no result status");
#line 1164 "trailing_analysis.m"
                    return;
                  }
#line 1163 "trailing_analysis.m"
                }
#line 1162 "trailing_analysis.m"
              else
#line 1161 "trailing_analysis.m"
                transform_hlds__trailing_analysis__ResultStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResultStatus_33, (MR_Integer) 0)));
#line 1158 "trailing_analysis.m"
            }
#line 1144 "trailing_analysis.m"
          {
#line 1144 "trailing_analysis.m"
            transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_7, transform_hlds__trailing_analysis__PPId_13, &transform_hlds__trailing_analysis__ModuleName_16, &transform_hlds__trailing_analysis__FuncId_17);
          }
#line 1145 "trailing_analysis.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1146 "trailing_analysis.m"
          transform_hlds__trailing_analysis__V_22_22 = (MR_Word) transform_hlds__trailing_analysis__Status_14;
#line 1145 "trailing_analysis.m"
          {
#line 1145 "trailing_analysis.m"
            analysis__record_result_7_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__ModuleName_16, transform_hlds__trailing_analysis__FuncId_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (transform_hlds__trailing_analysis__V_22_22)), transform_hlds__trailing_analysis__ResultStatus_15, transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_18, transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_19);
#line 1145 "trailing_analysis.m"
            return;
          }
#line 1141 "trailing_analysis.m"
        }
#line 1147 "trailing_analysis.m"
        break;
#line 1147 "trailing_analysis.m"
    }
#line 1137 "trailing_analysis.m"
  }
#line 1133 "trailing_analysis.m"
}

#line 1130 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
#line 1130 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1130 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1130 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1130 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1130 "trailing_analysis.m"
{
#line 1130 "trailing_analysis.m"
  {
#line 1130 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1130 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19;

#line 1130 "trailing_analysis.m"
    {
#line 1130 "trailing_analysis.m"
      transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19);
    }
#line 1130 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_AnalysisInfo_19));
#line 1130 "trailing_analysis.m"
  }
#line 1130 "trailing_analysis.m"
}

#line 1124 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
#line 1124 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 1124 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredId_6,
#line 1124 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10,
#line 1124 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11)
#line 1124 "trailing_analysis.m"
{
#line 1127 "trailing_analysis.m"
  {
#line 1127 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1127 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo_8;
#line 1127 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcIds_9;
#line 1127 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_12_12;
#line 1130 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11;

#line 1128 "trailing_analysis.m"
    {
#line 1128 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__PredId_6, &transform_hlds__trailing_analysis__PredInfo_8);
    }
#line 1129 "trailing_analysis.m"
    {
#line 1129 "trailing_analysis.m"
      transform_hlds__trailing_analysis__ProcIds_9 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__trailing_analysis__PredInfo_8);
    }
#line 1130 "trailing_analysis.m"
    {
#line 1130 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[3]));
#line 1130 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 1) = ((MR_Box) (transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1));
#line 1130 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1130 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 1130 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 4) = ((MR_Box) (transform_hlds__trailing_analysis__PredId_6));
#line 1130 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_12_12, 5) = ((MR_Box) (transform_hlds__trailing_analysis__PredInfo_8));
#line 1130 "trailing_analysis.m"
    }
#line 1130 "trailing_analysis.m"
    {
#line 1130 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__trailing_analysis__V_12_12, transform_hlds__trailing_analysis__ProcIds_9, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_0_10)), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11);
    }
#line 1130 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_AnalysisInfo_11 = ((MR_Word) transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_AnalysisInfo_11);
#line 1127 "trailing_analysis.m"
  }
#line 1124 "trailing_analysis.m"
}

#line 1089 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
#line 1089 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 1089 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_7,
#line 1089 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_8,
#line 1089 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12,
#line 1089 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13)
#line 1089 "trailing_analysis.m"
{
#line 1092 "trailing_analysis.m"
  {
#line 1092 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1092 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__AnalysisInfo0_10;
#line 1092 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__AnalysisInfo_11;
#line 1092 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ModuleName_22;
#line 1092 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__FuncId_23;
#line 1092 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeBestStatus_25;

#line 1093 "trailing_analysis.m"
    {
#line 1093 "trailing_analysis.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__trailing_analysis__AnalysisInfo0_10);
    }
#line 1104 "trailing_analysis.m"
    {
#line 1104 "trailing_analysis.m"
      transform_hlds__mmc_analysis__module_name_func_id_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__trailing_analysis__PPId_6, &transform_hlds__trailing_analysis__ModuleName_22, &transform_hlds__trailing_analysis__FuncId_23);
    }
#line 1105 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1107 "trailing_analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1106 "trailing_analysis.m"
    {
#line 1106 "trailing_analysis.m"
      analysis__lookup_best_result_6_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__AnalysisInfo0_10, transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trailing_analysis__MaybeBestStatus_25);
    }
#line 1113 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeBestStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1114 "trailing_analysis.m"
      {
#line 1114 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeClassInfo_for_analysis_40 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0];
#line 1114 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__Answer_28;
#line 3650 "transform_hlds.trailing_analysis.c"
        MR_Box MR_CALL (* transform_hlds__trailing_analysis__func_0)(MR_Box, MR_Box);
#line 3652 "transform_hlds.trailing_analysis.c"
        MR_Box transform_hlds__trailing_analysis__conv1_Answer_28;

#line 1117 "trailing_analysis.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 3657 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__TypeClassInfo_for_analysis_40, (MR_Integer) 0)), (MR_Integer) 9)));
#line 3659 "transform_hlds.trailing_analysis.c"
        {
#line 3661 "transform_hlds.trailing_analysis.c"
          transform_hlds__trailing_analysis__conv1_Answer_28 = transform_hlds__trailing_analysis__func_0(((MR_Box) transform_hlds__trailing_analysis__TypeClassInfo_for_analysis_40), ((MR_Box) ((MR_Integer) 0)));
        }
#line 3664 "transform_hlds.trailing_analysis.c"
        transform_hlds__trailing_analysis__Answer_28 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Answer_28);
#line 1118 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_7 = (MR_Word) transform_hlds__trailing_analysis__Answer_28;
#line 1119 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__AnalysisStatus_8 = (MR_Integer) 2;
#line 1120 "trailing_analysis.m"
        {
#line 1120 "trailing_analysis.m"
          analysis__record_request_6_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_3[0], (MR_String) "trail_usage", transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), transform_hlds__trailing_analysis__AnalysisInfo0_10, &transform_hlds__trailing_analysis__AnalysisInfo_11);
        }
#line 1114 "trailing_analysis.m"
      }
#line 1113 "trailing_analysis.m"
    else
#line 1110 "trailing_analysis.m"
      {
#line 1110 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeBestStatus_25, (MR_Integer) 0)));
#line 1110 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_33_33, (MR_Integer) 1)));
#line 1111 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_36_36;

#line 1109 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__AnalysisStatus_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_33_33, (MR_Integer) 2)));
#line 1110 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_7 = (MR_Word) transform_hlds__trailing_analysis__V_34_34;
#line 1111 "trailing_analysis.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1111 "trailing_analysis.m"
        {
#line 1111 "trailing_analysis.m"
          analysis__record_dependency_7_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], transform_hlds__trailing_analysis__ModuleName_22, transform_hlds__trailing_analysis__FuncId_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__trailing_analysis__AnalysisInfo0_10, &transform_hlds__trailing_analysis__AnalysisInfo_11);
        }
#line 1110 "trailing_analysis.m"
      }
#line 1096 "trailing_analysis.m"
    {
#line 1096 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__trailing_analysis__AnalysisInfo_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_13);
#line 1096 "trailing_analysis.m"
      return;
    }
#line 1092 "trailing_analysis.m"
  }
#line 1089 "trailing_analysis.m"
}

#line 1017 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
#line 1017 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1017 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15,
#line 1017 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16,
#line 1017 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1017 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 1017 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18)
#line 1017 "trailing_analysis.m"
{
#line 1020 "trailing_analysis.m"
  {
#line 1020 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1020 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 0)));
#line 1020 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 1)));
#line 1020 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Case_0_15, (MR_Integer) 2)));
#line 1020 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Goal_14;
#line 1020 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal0_13, (MR_Integer) 0)));
#line 1020 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal0_13, (MR_Integer) 1)));
#line 1020 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_31;
#line 1020 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_32;

#line 831 "trailing_analysis.m"
    {
#line 831 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__GoalInfo0_30, transform_hlds__trailing_analysis__GoalExpr0_29, &transform_hlds__trailing_analysis__GoalExpr_31, transform_hlds__trailing_analysis__Status_9, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);
    }
#line 837 "trailing_analysis.m"
#line 837 "trailing_analysis.m"
    switch (*transform_hlds__trailing_analysis__Status_9) {
#line 837 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 837 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 837 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 841 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_32 = transform_hlds__trailing_analysis__GoalInfo0_30;
#line 837 "trailing_analysis.m"
        break;
#line 837 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 834 "trailing_analysis.m"
        {
#line 835 "trailing_analysis.m"
          {
#line 835 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_30, &transform_hlds__trailing_analysis__GoalInfo_32);
          }
#line 834 "trailing_analysis.m"
        }
#line 837 "trailing_analysis.m"
        break;
#line 837 "trailing_analysis.m"
    }
#line 843 "trailing_analysis.m"
    {
#line 843 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_14, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_31));
#line 843 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_14, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_32));
#line 843 "trailing_analysis.m"
    }
#line 1023 "trailing_analysis.m"
    {
#line 1023 "trailing_analysis.m"
      MR_Word base;
#line 1023 "trailing_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__STATE_VARIABLE_Case_16 = base;
#line 1023 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__MainConsId_11));
#line 1023 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__OtherConsIds_12));
#line 1023 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__Goal_14));
#line 1023 "trailing_analysis.m"
    }
#line 1020 "trailing_analysis.m"
  }
#line 1017 "trailing_analysis.m"
}

#line 1014 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
#line 1014 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1014 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1014 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1014 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1014 "trailing_analysis.m"
{
#line 1014 "trailing_analysis.m"
  {
#line 1014 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1014 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 1014 "trailing_analysis.m"
    {
#line 1014 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 1014 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 1014 "trailing_analysis.m"
  }
#line 1014 "trailing_analysis.m"
}

#line 1012 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
#line 1012 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1012 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1012 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1012 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1012 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1012 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 1012 "trailing_analysis.m"
{
#line 1012 "trailing_analysis.m"
  {
#line 1012 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1012 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16;
#line 1012 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_Status_9;
#line 1012 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 1012 "trailing_analysis.m"
    {
#line 1012 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16, &transform_hlds__trailing_analysis__conv1_Status_9, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 1012 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Case_16));
#line 1012 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_Status_9));
#line 1012 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 1012 "trailing_analysis.m"
  }
#line 1012 "trailing_analysis.m"
}

#line 1008 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
#line 1008 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 1008 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12,
#line 1008 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13,
#line 1008 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 1008 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 1008 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15)
#line 1008 "trailing_analysis.m"
{
#line 1011 "trailing_analysis.m"
  {
#line 1011 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1011 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_26_26;
#line 1011 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 1011 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Statuses_11;
#line 1011 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_16_16;
#line 1012 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15;
#line 1014 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Status_9;

#line 1012 "trailing_analysis.m"
    {
#line 1012 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
#line 1012 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1));
#line 1012 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1012 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 3) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_7));
#line 1012 "trailing_analysis.m"
    }
#line 3939 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 3941 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 1012 "trailing_analysis.m"
    {
#line 1012 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_Cases_13, &transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
    }
#line 1012 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
#line 1014 "trailing_analysis.m"
    {
#line 1014 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[9], transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_9);
    }
#line 1014 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Status_9 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_9);
#line 1011 "trailing_analysis.m"
  }
#line 1008 "trailing_analysis.m"
}

#line 1005 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
#line 1005 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1005 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1005 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1005 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 1005 "trailing_analysis.m"
{
#line 1005 "trailing_analysis.m"
  {
#line 1005 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1005 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 1005 "trailing_analysis.m"
    {
#line 1005 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 1005 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 1005 "trailing_analysis.m"
  }
#line 1005 "trailing_analysis.m"
}

#line 1003 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
#line 1003 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 1003 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 1003 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 1003 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 1003 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 1003 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 1003 "trailing_analysis.m"
{
#line 1003 "trailing_analysis.m"
  {
#line 1003 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 1003 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16;
#line 1003 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_Status_9;
#line 1003 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 1003 "trailing_analysis.m"
    {
#line 1003 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16, &transform_hlds__trailing_analysis__conv1_Status_9, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 1003 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Goal_16));
#line 1003 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_Status_9));
#line 1003 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 1003 "trailing_analysis.m"
  }
#line 1003 "trailing_analysis.m"
}

#line 998 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
#line 998 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 998 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12,
#line 998 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13,
#line 998 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 998 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14,
#line 998 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15)
#line 998 "trailing_analysis.m"
{
#line 1002 "trailing_analysis.m"
  {
#line 1002 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 1002 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_26_26;
#line 1002 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 1002 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Statuses_11;
#line 1002 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_16_16;
#line 1003 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15;
#line 1005 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Status_9;

#line 1003 "trailing_analysis.m"
    {
#line 1003 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[1]));
#line 1003 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1));
#line 1003 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1003 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_16_16, 3) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_7));
#line 1003 "trailing_analysis.m"
    }
#line 4086 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 4088 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 1003 "trailing_analysis.m"
    {
#line 1003 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_26_26, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_0_12, transform_hlds__trailing_analysis__STATE_VARIABLE_Goals_13, &transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
    }
#line 1003 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_15);
#line 1005 "trailing_analysis.m"
    {
#line 1005 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[8], transform_hlds__trailing_analysis__Statuses_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_9);
    }
#line 1005 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Status_9 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_9);
#line 1002 "trailing_analysis.m"
  }
#line 998 "trailing_analysis.m"
}

#line 873 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
#line 873 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 873 "trailing_analysis.m"
{
#line 873 "trailing_analysis.m"
  {
#line 873 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 873 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0, 1);
#line 873 "trailing_analysis.m"
  }
#line 873 "trailing_analysis.m"
}

#line 873 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
#line 873 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 873 "trailing_analysis.m"
{
#line 873 "trailing_analysis.m"
  {
#line 873 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 873 "trailing_analysis.m"
    {
#line 880 "trailing_analysis.m"
      MR_String transform_hlds__trailing_analysis__V_50_50;

#line 880 "trailing_analysis.m"
      {
#line 880 "trailing_analysis.m"
        mdbcomp__prim_data__special_pred_name_arity_4_p_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139, &transform_hlds__trailing_analysis__V_50_50, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140);
      }
#line 880 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (strcmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_139_139) == 0);
#line 873 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 873 "trailing_analysis.m"
        {
#line 880 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48 == (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__V_140_140);
#line 880 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 880 "trailing_analysis.m"
            {
#line 880 "trailing_analysis.m"
              transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(transform_hlds__trailing_analysis__env_ptr);
#line 880 "trailing_analysis.m"
              return;
            }
#line 873 "trailing_analysis.m"
        }
#line 873 "trailing_analysis.m"
    }
#line 873 "trailing_analysis.m"
  }
#line 873 "trailing_analysis.m"
}

#line 873 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
#line 873 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 873 "trailing_analysis.m"
{
#line 873 "trailing_analysis.m"
  {
#line 873 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 873 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0) == 0)
#line 873 "trailing_analysis.m"
      {
#line 873 "trailing_analysis.m"
        {
#line 873 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_46;

#line 873 "trailing_analysis.m"
          {
#line 873 "trailing_analysis.m"
            transform_hlds__trailing_analysis__ModuleName_46 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 874 "trailing_analysis.m"
          {
#line 874 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__trailing_analysis__ModuleName_46);
          }
#line 873 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 873 "trailing_analysis.m"
            {
#line 875 "trailing_analysis.m"
              {
#line 875 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47 = hlds__hlds_pred__pred_info_name_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
              }
#line 876 "trailing_analysis.m"
              {
#line 876 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48 = hlds__hlds_pred__pred_info_orig_arity_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
              }
#line 878 "trailing_analysis.m"
              {
#line 878 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__slot_1 = (MR_Integer) 0;

#line 878 "trailing_analysis.m"
                do
#line 878 "trailing_analysis.m"
                  {
#line 878 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49 = ((&transform_hlds__trailing_analysis_vector_common_9[2 + transform_hlds__trailing_analysis__slot_1]))->transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 878 "trailing_analysis.m"
                    {
#line 878 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(transform_hlds__trailing_analysis__env_ptr);
                    }
#line 878 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__slot_1 = (transform_hlds__trailing_analysis__slot_1 + (MR_Integer) 1);
#line 878 "trailing_analysis.m"
                  }
#line 878 "trailing_analysis.m"
                while ((transform_hlds__trailing_analysis__slot_1 < (MR_Integer) 2));
#line 878 "trailing_analysis.m"
              }
#line 873 "trailing_analysis.m"
            }
#line 873 "trailing_analysis.m"
        }
#line 873 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 873 "trailing_analysis.m"
      }
#line 873 "trailing_analysis.m"
    else
#line 873 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 873 "trailing_analysis.m"
  }
#line 873 "trailing_analysis.m"
}

#line 845 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
#line 845 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_8,
#line 845 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__GoalInfo_9,
#line 845 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109,
#line 845 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110,
#line 845 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_11,
#line 845 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111,
#line 845 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112)
#line 845 "trailing_analysis.m"
{
#line 845 "trailing_analysis.m"
  {
#line 845 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 851 "trailing_analysis.m"
#line 851 "trailing_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109)) {
#line 851 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 851 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 975 "trailing_analysis.m"
        {
#line 975 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SubGoal0_97 = (MR_Word) MR_body(((MR_Word) transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109), (MR_Integer) 0);
#line 975 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SubGoal_98;

#line 976 "trailing_analysis.m"
          {
#line 976 "trailing_analysis.m"
            transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__SubGoal0_97, &transform_hlds__trailing_analysis__SubGoal_98, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
          }
#line 977 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__trailing_analysis__SubGoal_98);
#line 975 "trailing_analysis.m"
        }
#line 851 "trailing_analysis.m"
        break;
#line 851 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 851 "trailing_analysis.m"
        {
#line 851 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 851 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)));
#line 851 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 851 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 851 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));

#line 858 "trailing_analysis.m"
#line 858 "trailing_analysis.m"
          switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Kind_16)) {
#line 858 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 858 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 853 "trailing_analysis.m"
              {
#line 853 "trailing_analysis.m"
              }
#line 858 "trailing_analysis.m"
              break;
#line 858 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 854 "trailing_analysis.m"
              {
#line 854 "trailing_analysis.m"
              }
#line 858 "trailing_analysis.m"
              break;
#line 858 "trailing_analysis.m"
            case (MR_Integer) 2:
#line 855 "trailing_analysis.m"
              {
#line 855 "trailing_analysis.m"
              }
#line 858 "trailing_analysis.m"
              break;
#line 858 "trailing_analysis.m"
            case (MR_Integer) 3:
#line 858 "trailing_analysis.m"
#line 858 "trailing_analysis.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Kind_16, (MR_Integer) 0)))) {
#line 858 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 858 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 856 "trailing_analysis.m"
                  {
#line 856 "trailing_analysis.m"
                  }
#line 858 "trailing_analysis.m"
                  break;
#line 858 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 859 "trailing_analysis.m"
                  {
#line 860 "trailing_analysis.m"
                    {
#line 860 "trailing_analysis.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "complicated unify");
#line 860 "trailing_analysis.m"
                      return;
                    }
#line 859 "trailing_analysis.m"
                  }
#line 858 "trailing_analysis.m"
                  break;
#line 858 "trailing_analysis.m"
              }
#line 858 "trailing_analysis.m"
              break;
#line 858 "trailing_analysis.m"
          }
#line 862 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 851 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 851 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 851 "trailing_analysis.m"
        }
#line 851 "trailing_analysis.m"
        break;
#line 851 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 864 "trailing_analysis.m"
        {
#line 864 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallPredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)));
#line 864 "trailing_analysis.m"
          MR_Integer transform_hlds__trailing_analysis__CallProcId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 864 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 864 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__CallPPId_44;
#line 864 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 864 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 864 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));

#line 865 "trailing_analysis.m"
          {
#line 865 "trailing_analysis.m"
            transform_hlds__trailing_analysis__CallPPId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 865 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_44, 0) = ((MR_Box) (transform_hlds__trailing_analysis__CallPredId_38));
#line 865 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_44, 1) = ((MR_Box) (transform_hlds__trailing_analysis__CallProcId_39));
#line 865 "trailing_analysis.m"
          }
#line 866 "trailing_analysis.m"
          {
#line 866 "trailing_analysis.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__CallPredId_38, &(transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 868 "trailing_analysis.m"
          {
#line 868 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          }
#line 871 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 870 "trailing_analysis.m"
            {
#line 870 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 870 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 870 "trailing_analysis.m"
            }
#line 871 "trailing_analysis.m"
          else
#line 883 "trailing_analysis.m"
            {
#line 873 "trailing_analysis.m"
              {
#line 873 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(&transform_hlds__trailing_analysis__env);
              }
#line 883 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 882 "trailing_analysis.m"
                {
#line 882 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 882 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 882 "trailing_analysis.m"
                }
#line 883 "trailing_analysis.m"
              else
#line 889 "trailing_analysis.m"
                {
#line 889 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Status0_51;

#line 886 "trailing_analysis.m"
                  {
#line 886 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45, &transform_hlds__trailing_analysis__Status0_51);
                  }
#line 889 "trailing_analysis.m"
                  if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 888 "trailing_analysis.m"
                    {
#line 888 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__Status0_51;
#line 888 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 888 "trailing_analysis.m"
                    }
#line 889 "trailing_analysis.m"
                  else
#line 890 "trailing_analysis.m"
                    {
#line 890 "trailing_analysis.m"
                      MR_Word transform_hlds__trailing_analysis__Globals_52;
#line 890 "trailing_analysis.m"
                      MR_Word transform_hlds__trailing_analysis__IntermodAnalysis_53;

#line 890 "trailing_analysis.m"
                      {
#line 890 "trailing_analysis.m"
                        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, &transform_hlds__trailing_analysis__Globals_52);
                      }
#line 891 "trailing_analysis.m"
                      {
#line 891 "trailing_analysis.m"
                        libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_52, (MR_Integer) 326, &transform_hlds__trailing_analysis__IntermodAnalysis_53);
                      }
#line 894 "trailing_analysis.m"
                      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__IntermodAnalysis_53 == (MR_Integer) 1);
#line 894 "trailing_analysis.m"
                      if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 895 "trailing_analysis.m"
                        {
#line 895 "trailing_analysis.m"
                          (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
                        }
#line 920 "trailing_analysis.m"
                      if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 898 "trailing_analysis.m"
                        {
#line 898 "trailing_analysis.m"
                          MR_Word transform_hlds__trailing_analysis__Result_54;
#line 898 "trailing_analysis.m"
                          MR_Word transform_hlds__trailing_analysis__AnalysisStatus_55;

#line 897 "trailing_analysis.m"
                          {
#line 897 "trailing_analysis.m"
                            transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(transform_hlds__trailing_analysis__CallPPId_44, &transform_hlds__trailing_analysis__Result_54, &transform_hlds__trailing_analysis__AnalysisStatus_55, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
                          }
#line 905 "trailing_analysis.m"
#line 905 "trailing_analysis.m"
                          switch (transform_hlds__trailing_analysis__AnalysisStatus_55) {
#line 905 "trailing_analysis.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 905 "trailing_analysis.m"
                            case (MR_Integer) 0:
#line 904 "trailing_analysis.m"
                              *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 905 "trailing_analysis.m"
                              break;
#line 905 "trailing_analysis.m"
                            case (MR_Integer) 2:
#line 905 "trailing_analysis.m"
                            case (MR_Integer) 1:
#line 913 "trailing_analysis.m"
#line 913 "trailing_analysis.m"
                              switch (transform_hlds__trailing_analysis__Result_54) {
#line 913 "trailing_analysis.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 913 "trailing_analysis.m"
                                case (MR_Integer) 2:
#line 911 "trailing_analysis.m"
                                  {
#line 911 "trailing_analysis.m"
                                    *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112, transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__CallArgs_40);
                                  }
#line 913 "trailing_analysis.m"
                                  break;
#line 913 "trailing_analysis.m"
                                case (MR_Integer) 0:
#line 913 "trailing_analysis.m"
                                case (MR_Integer) 1:
#line 917 "trailing_analysis.m"
                                  *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__Result_54;
#line 913 "trailing_analysis.m"
                                  break;
#line 913 "trailing_analysis.m"
                              }
#line 905 "trailing_analysis.m"
                              break;
#line 905 "trailing_analysis.m"
                          }
#line 898 "trailing_analysis.m"
                        }
#line 920 "trailing_analysis.m"
                      else
#line 922 "trailing_analysis.m"
                        {
#line 922 "trailing_analysis.m"
                          {
#line 922 "trailing_analysis.m"
                            transform_hlds__trailing_analysis__trail_check_call_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__CallPPId_44, transform_hlds__trailing_analysis__CallArgs_40, transform_hlds__trailing_analysis__Status_11);
                          }
#line 922 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 922 "trailing_analysis.m"
                        }
#line 890 "trailing_analysis.m"
                    }
#line 889 "trailing_analysis.m"
                }
#line 883 "trailing_analysis.m"
            }
#line 864 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 864 "trailing_analysis.m"
        }
#line 851 "trailing_analysis.m"
        break;
#line 851 "trailing_analysis.m"
      case (MR_Integer) 3:
#line 851 "trailing_analysis.m"
#line 851 "trailing_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)))) {
#line 851 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 851 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 931 "trailing_analysis.m"
            {
#line 931 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__GenericCall_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 931 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 931 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 931 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 931 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));

#line 935 "trailing_analysis.m"
#line 935 "trailing_analysis.m"
              switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__GenericCall_63)) {
#line 935 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 935 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 934 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 935 "trailing_analysis.m"
                  break;
#line 935 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 937 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 935 "trailing_analysis.m"
                  break;
#line 935 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 940 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 935 "trailing_analysis.m"
                  break;
#line 935 "trailing_analysis.m"
                case (MR_Integer) 3:
#line 943 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 935 "trailing_analysis.m"
                  break;
#line 935 "trailing_analysis.m"
              }
#line 931 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 931 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 931 "trailing_analysis.m"
            }
#line 851 "trailing_analysis.m"
            break;
#line 851 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 927 "trailing_analysis.m"
            {
#line 927 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Attributes_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 927 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 927 "trailing_analysis.m"
              MR_Integer transform_hlds__trailing_analysis__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 927 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 927 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));
#line 927 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 6)));
#line 927 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 7)));

#line 928 "trailing_analysis.m"
              {
#line 928 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(transform_hlds__trailing_analysis__Attributes_56);
              }
#line 927 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 927 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 927 "trailing_analysis.m"
            }
#line 851 "trailing_analysis.m"
            break;
#line 851 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 946 "trailing_analysis.m"
            {
#line 946 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ConjType_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 946 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Conjuncts0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 946 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Conjuncts_80;

#line 947 "trailing_analysis.m"
              {
#line 947 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Conjuncts0_79, &transform_hlds__trailing_analysis__Conjuncts_80, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 949 "trailing_analysis.m"
              {
#line 949 "trailing_analysis.m"
                MR_Word base;
#line 949 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 949 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 949 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 949 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__ConjType_78));
#line 949 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__Conjuncts_80));
#line 949 "trailing_analysis.m"
              }
#line 946 "trailing_analysis.m"
            }
#line 851 "trailing_analysis.m"
            break;
#line 851 "trailing_analysis.m"
          case (MR_Integer) 3:
#line 951 "trailing_analysis.m"
            {
#line 951 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Disjuncts0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 951 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Disjuncts_82;

#line 952 "trailing_analysis.m"
              {
#line 952 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Disjuncts0_81, &transform_hlds__trailing_analysis__Disjuncts_82, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 954 "trailing_analysis.m"
              {
#line 954 "trailing_analysis.m"
                MR_Word base;
#line 954 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 954 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 954 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Disjuncts_82));
#line 954 "trailing_analysis.m"
              }
#line 951 "trailing_analysis.m"
            }
#line 851 "trailing_analysis.m"
            break;
#line 851 "trailing_analysis.m"
          case (MR_Integer) 4:
#line 956 "trailing_analysis.m"
            {
#line 956 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 956 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__CanFail_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 956 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Cases0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 956 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Cases_86;

#line 957 "trailing_analysis.m"
              {
#line 957 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Cases0_85, &transform_hlds__trailing_analysis__Cases_86, transform_hlds__trailing_analysis__Status_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 958 "trailing_analysis.m"
              {
#line 958 "trailing_analysis.m"
                MR_Word base;
#line 958 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 958 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 958 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 958 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Var_83));
#line 958 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__CanFail_84));
#line 958 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Cases_86));
#line 958 "trailing_analysis.m"
              }
#line 956 "trailing_analysis.m"
            }
#line 851 "trailing_analysis.m"
            break;
#line 851 "trailing_analysis.m"
          case (MR_Integer) 5:
#line 979 "trailing_analysis.m"
            {
#line 979 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Reason_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 979 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__InnerGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 980 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_116_116;
#line 980 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_101_101;

#line 980 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__trailing_analysis__Reason_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 980 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 980 "trailing_analysis.m"
                {
#line 980 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 1)));
#line 980 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_99, (MR_Integer) 2)));
#line 980 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_116_116 == (MR_Integer) 1);
#line 980 "trailing_analysis.m"
                }
#line 982 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 981 "trailing_analysis.m"
                {
#line 981 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 981 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111;
#line 981 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109;
#line 981 "trailing_analysis.m"
                }
#line 982 "trailing_analysis.m"
              else
#line 983 "trailing_analysis.m"
                {
#line 983 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerGoal_103;
#line 983 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerGoalInfo_105;
#line 983 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_106;
#line 983 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_107;
#line 983 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Status0_136;
#line 986 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__V_104_104;

#line 984 "trailing_analysis.m"
                  {
#line 984 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__InnerGoal0_100, &transform_hlds__trailing_analysis__InnerGoal_103, &transform_hlds__trailing_analysis__Status0_136, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
                  }
#line 986 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_103, (MR_Integer) 0)));
#line 986 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__InnerGoalInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_103, (MR_Integer) 1)));
#line 987 "trailing_analysis.m"
                  {
#line 987 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__InnerCodeModel_106 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__InnerGoalInfo_105);
                  }
#line 988 "trailing_analysis.m"
                  {
#line 988 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__OuterCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__GoalInfo_9);
                  }
#line 989 "trailing_analysis.m"
                  {
#line 989 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__Status_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(transform_hlds__trailing_analysis__InnerCodeModel_106, transform_hlds__trailing_analysis__OuterCodeModel_107, transform_hlds__trailing_analysis__Status0_136);
                  }
#line 991 "trailing_analysis.m"
                  {
#line 991 "trailing_analysis.m"
                    MR_Word base;
#line 991 "trailing_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 991 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 991 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 991 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Reason_99));
#line 991 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__InnerGoal_103));
#line 991 "trailing_analysis.m"
                  }
#line 983 "trailing_analysis.m"
                }
#line 979 "trailing_analysis.m"
            }
#line 851 "trailing_analysis.m"
            break;
#line 851 "trailing_analysis.m"
          case (MR_Integer) 6:
#line 960 "trailing_analysis.m"
            {
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Vars_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__If0_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Then0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Else0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__If_91;
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__IfStatus_92;
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Then_93;
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ThenStatus_94;
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Else_95;
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__ElseStatus_96;
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121;
#line 960 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122;

#line 961 "trailing_analysis.m"
              {
#line 961 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__If0_88, &transform_hlds__trailing_analysis__If_91, &transform_hlds__trailing_analysis__IfStatus_92, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_111, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121);
              }
#line 962 "trailing_analysis.m"
              {
#line 962 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Then0_89, &transform_hlds__trailing_analysis__Then_93, &transform_hlds__trailing_analysis__ThenStatus_94, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_121_121, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122);
              }
#line 963 "trailing_analysis.m"
              {
#line 963 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(transform_hlds__trailing_analysis__VarTypes_8, transform_hlds__trailing_analysis__Else0_90, &transform_hlds__trailing_analysis__Else_95, &transform_hlds__trailing_analysis__ElseStatus_96, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_122_122, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_112);
              }
#line 965 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__IfStatus_92 == (MR_Integer) 1);
#line 965 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 965 "trailing_analysis.m"
                {
#line 966 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__ThenStatus_94 == (MR_Integer) 1);
#line 965 "trailing_analysis.m"
                  if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 967 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__ElseStatus_96 == (MR_Integer) 1);
#line 965 "trailing_analysis.m"
                }
#line 970 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
#line 969 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 1;
#line 970 "trailing_analysis.m"
              else
#line 971 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Status_11 = (MR_Integer) 0;
#line 973 "trailing_analysis.m"
              {
#line 973 "trailing_analysis.m"
                MR_Word base;
#line 973 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 973 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_GoalExpr_110 = base;
#line 973 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 973 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Vars_87));
#line 973 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__trailing_analysis__If_91));
#line 973 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Then_93));
#line 973 "trailing_analysis.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__trailing_analysis__Else_95));
#line 973 "trailing_analysis.m"
              }
#line 960 "trailing_analysis.m"
            }
#line 851 "trailing_analysis.m"
            break;
#line 851 "trailing_analysis.m"
          case (MR_Integer) 7:
#line 994 "trailing_analysis.m"
            {
#line 995 "trailing_analysis.m"
              {
#line 995 "trailing_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "shorthand");
#line 995 "trailing_analysis.m"
                return;
              }
#line 994 "trailing_analysis.m"
            }
#line 851 "trailing_analysis.m"
            break;
#line 851 "trailing_analysis.m"
        }
#line 851 "trailing_analysis.m"
        break;
#line 851 "trailing_analysis.m"
    }
#line 845 "trailing_analysis.m"
  }
#line 845 "trailing_analysis.m"
}

#line 826 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
#line 826 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 826 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15,
#line 826 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16,
#line 826 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_9,
#line 826 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17,
#line 826 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18)
#line 826 "trailing_analysis.m"
{
#line 829 "trailing_analysis.m"
  {
#line 829 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 829 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15, (MR_Integer) 0)));
#line 829 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_0_15, (MR_Integer) 1)));
#line 829 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_13;
#line 829 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_14;

#line 831 "trailing_analysis.m"
    {
#line 831 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__GoalInfo0_12, transform_hlds__trailing_analysis__GoalExpr0_11, &transform_hlds__trailing_analysis__GoalExpr_13, transform_hlds__trailing_analysis__Status_9, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_18);
    }
#line 837 "trailing_analysis.m"
#line 837 "trailing_analysis.m"
    switch (*transform_hlds__trailing_analysis__Status_9) {
#line 837 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 837 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 837 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 841 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_14 = transform_hlds__trailing_analysis__GoalInfo0_12;
#line 837 "trailing_analysis.m"
        break;
#line 837 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 834 "trailing_analysis.m"
        {
#line 835 "trailing_analysis.m"
          {
#line 835 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_12, &transform_hlds__trailing_analysis__GoalInfo_14);
          }
#line 834 "trailing_analysis.m"
        }
#line 837 "trailing_analysis.m"
        break;
#line 837 "trailing_analysis.m"
    }
#line 843 "trailing_analysis.m"
    {
#line 843 "trailing_analysis.m"
      MR_Word base;
#line 843 "trailing_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__STATE_VARIABLE_Goal_16 = base;
#line 843 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_13));
#line 843 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_14));
#line 843 "trailing_analysis.m"
    }
#line 829 "trailing_analysis.m"
  }
#line 826 "trailing_analysis.m"
}

#line 813 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
#line 813 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_4,
#line 813 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 813 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12)
#line 813 "trailing_analysis.m"
{
#line 818 "trailing_analysis.m"
  {
#line 818 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo_8;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__VarTypes_9;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___Status_10;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr0_27;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo0_28;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalExpr_29;
#line 818 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__GoalInfo_30;

#line 818 "trailing_analysis.m"
    {
#line 818 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__PPId_4, &transform_hlds__trailing_analysis__PredInfo_8, &transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13);
    }
#line 819 "trailing_analysis.m"
    {
#line 819 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14);
    }
#line 820 "trailing_analysis.m"
    {
#line 820 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__VarTypes_9);
    }
#line 830 "trailing_analysis.m"
    transform_hlds__trailing_analysis__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14, (MR_Integer) 0)));
#line 830 "trailing_analysis.m"
    transform_hlds__trailing_analysis__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_14_14, (MR_Integer) 1)));
#line 831 "trailing_analysis.m"
    {
#line 831 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__GoalInfo0_28, transform_hlds__trailing_analysis__GoalExpr0_27, &transform_hlds__trailing_analysis__GoalExpr_29, &transform_hlds__trailing_analysis___Status_10, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16);
    }
#line 837 "trailing_analysis.m"
#line 837 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis___Status_10) {
#line 837 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 837 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 837 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 841 "trailing_analysis.m"
        transform_hlds__trailing_analysis__GoalInfo_30 = transform_hlds__trailing_analysis__GoalInfo0_28;
#line 837 "trailing_analysis.m"
        break;
#line 837 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 834 "trailing_analysis.m"
        {
#line 835 "trailing_analysis.m"
          {
#line 835 "trailing_analysis.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 15, transform_hlds__trailing_analysis__GoalInfo0_28, &transform_hlds__trailing_analysis__GoalInfo_30);
          }
#line 834 "trailing_analysis.m"
        }
#line 837 "trailing_analysis.m"
        break;
#line 837 "trailing_analysis.m"
    }
#line 843 "trailing_analysis.m"
    {
#line 843 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, 0) = ((MR_Box) (transform_hlds__trailing_analysis__GoalExpr_29));
#line 843 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, 1) = ((MR_Box) (transform_hlds__trailing_analysis__GoalInfo_30));
#line 843 "trailing_analysis.m"
    }
#line 822 "trailing_analysis.m"
    {
#line 822 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_Body_15_15, transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17);
    }
#line 823 "trailing_analysis.m"
    {
#line 823 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__trailing_analysis__PPId_4, transform_hlds__trailing_analysis__PredInfo_8, transform_hlds__trailing_analysis__STATE_VARIABLE_ProcInfo_17_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16_16, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);
#line 823 "trailing_analysis.m"
      return;
    }
#line 818 "trailing_analysis.m"
  }
#line 813 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 741 "trailing_analysis.m"
{
#line 741 "trailing_analysis.m"
  {
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 741 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9);
    }
#line 741 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv6_STATE_VARIABLE_Status_9));
#line 741 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 741 "trailing_analysis.m"
{
#line 741 "trailing_analysis.m"
  {
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 741 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9);
    }
#line 741 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_STATE_VARIABLE_Status_9));
#line 741 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 741 "trailing_analysis.m"
{
#line 741 "trailing_analysis.m"
  {
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 741 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9);
    }
#line 741 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_Status_9));
#line 741 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 741 "trailing_analysis.m"
{
#line 741 "trailing_analysis.m"
  {
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 741 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 741 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 741 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 768 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(
#line 768 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 768 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 768 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__TypeCtorCat_7)
#line 768 "trailing_analysis.m"
{
#line 779 "trailing_analysis.m"
  {
#line 779 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 779 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_8;

#line 779 "trailing_analysis.m"
#line 779 "trailing_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__TypeCtorCat_7)) {
#line 779 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 779 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 779 "trailing_analysis.m"
#line 779 "trailing_analysis.m"
        switch (MR_unmkbody(transform_hlds__trailing_analysis__TypeCtorCat_7)) {
#line 779 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 779 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 779 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 779 "trailing_analysis.m"
            break;
#line 779 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 789 "trailing_analysis.m"
            {
#line 789 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Args_22;
#line 790 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis___TypeCtor_18;
#line 792 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis___UnifyCompare_19;

#line 790 "trailing_analysis.m"
              {
#line 790 "trailing_analysis.m"
                parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_18, &transform_hlds__trailing_analysis__Args_22);
              }
#line 792 "trailing_analysis.m"
              {
#line 792 "trailing_analysis.m"
                transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_19);
              }
#line 799 "trailing_analysis.m"
              if (transform_hlds__trailing_analysis__succeeded)
#line 798 "trailing_analysis.m"
                transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 799 "trailing_analysis.m"
              else
#line 740 "trailing_analysis.m"
                {
#line 740 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__V_53_53;
#line 741 "trailing_analysis.m"
                  MR_Box transform_hlds__trailing_analysis__conv3_Status_8;

#line 741 "trailing_analysis.m"
                  {
#line 741 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 741 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2));
#line 741 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "trailing_analysis.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_53_53, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 741 "trailing_analysis.m"
                  }
#line 741 "trailing_analysis.m"
                  {
#line 741 "trailing_analysis.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_53_53, transform_hlds__trailing_analysis__Args_22, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv3_Status_8);
                  }
#line 741 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv3_Status_8);
#line 740 "trailing_analysis.m"
                }
#line 789 "trailing_analysis.m"
            }
#line 779 "trailing_analysis.m"
            break;
#line 779 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 779 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 779 "trailing_analysis.m"
            break;
#line 779 "trailing_analysis.m"
          case (MR_Integer) 3:
#line 782 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 2;
#line 779 "trailing_analysis.m"
            break;
#line 779 "trailing_analysis.m"
          case (MR_Integer) 4:
#line 779 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 779 "trailing_analysis.m"
            break;
#line 779 "trailing_analysis.m"
        }
#line 779 "trailing_analysis.m"
        break;
#line 779 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 780 "trailing_analysis.m"
        transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 779 "trailing_analysis.m"
        break;
#line 779 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 789 "trailing_analysis.m"
        {
#line 789 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Args_13;
#line 790 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___TypeCtor_12;
#line 792 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis___UnifyCompare_14;

#line 790 "trailing_analysis.m"
          {
#line 790 "trailing_analysis.m"
            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_12, &transform_hlds__trailing_analysis__Args_13);
          }
#line 792 "trailing_analysis.m"
          {
#line 792 "trailing_analysis.m"
            transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_14);
          }
#line 799 "trailing_analysis.m"
          if (transform_hlds__trailing_analysis__succeeded)
#line 798 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 799 "trailing_analysis.m"
          else
#line 740 "trailing_analysis.m"
            {
#line 740 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_43_43;
#line 741 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_Status_8;

#line 741 "trailing_analysis.m"
              {
#line 741 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_43_43, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 741 "trailing_analysis.m"
              }
#line 741 "trailing_analysis.m"
              {
#line 741 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_43_43, transform_hlds__trailing_analysis__Args_13, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Status_8);
              }
#line 741 "trailing_analysis.m"
              transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Status_8);
#line 740 "trailing_analysis.m"
            }
#line 789 "trailing_analysis.m"
        }
#line 779 "trailing_analysis.m"
        break;
#line 779 "trailing_analysis.m"
      case (MR_Integer) 3:
#line 779 "trailing_analysis.m"
#line 779 "trailing_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__TypeCtorCat_7, (MR_Integer) 0)))) {
#line 779 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 779 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 780 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 779 "trailing_analysis.m"
            break;
#line 779 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 779 "trailing_analysis.m"
            {
#line 779 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__TypeCtorCat_7, (MR_Integer) 1)));

#line 779 "trailing_analysis.m"
#line 779 "trailing_analysis.m"
              switch (transform_hlds__trailing_analysis__V_39_39) {
#line 779 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 779 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 780 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 1;
#line 779 "trailing_analysis.m"
                  break;
#line 779 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 789 "trailing_analysis.m"
                  {
#line 789 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Args_34;
#line 790 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___TypeCtor_30;
#line 792 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___UnifyCompare_31;

#line 790 "trailing_analysis.m"
                    {
#line 790 "trailing_analysis.m"
                      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_30, &transform_hlds__trailing_analysis__Args_34);
                    }
#line 792 "trailing_analysis.m"
                    {
#line 792 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_31);
                    }
#line 799 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 798 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 799 "trailing_analysis.m"
                    else
#line 740 "trailing_analysis.m"
                      {
#line 740 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_63_63;
#line 741 "trailing_analysis.m"
                        MR_Box transform_hlds__trailing_analysis__conv5_Status_8;

#line 741 "trailing_analysis.m"
                        {
#line 741 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 741 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3));
#line 741 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_63_63, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 741 "trailing_analysis.m"
                        }
#line 741 "trailing_analysis.m"
                        {
#line 741 "trailing_analysis.m"
                          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_63_63, transform_hlds__trailing_analysis__Args_34, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Status_8);
                        }
#line 741 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Status_8);
#line 740 "trailing_analysis.m"
                      }
#line 789 "trailing_analysis.m"
                  }
#line 779 "trailing_analysis.m"
                  break;
#line 779 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 789 "trailing_analysis.m"
                  {
#line 789 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Args_28;
#line 790 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___TypeCtor_24;
#line 792 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___UnifyCompare_25;

#line 790 "trailing_analysis.m"
                    {
#line 790 "trailing_analysis.m"
                      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___TypeCtor_24, &transform_hlds__trailing_analysis__Args_28);
                    }
#line 792 "trailing_analysis.m"
                    {
#line 792 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6, &transform_hlds__trailing_analysis___UnifyCompare_25);
                    }
#line 799 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 798 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__Status_8 = (MR_Integer) 0;
#line 799 "trailing_analysis.m"
                    else
#line 740 "trailing_analysis.m"
                      {
#line 740 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_73_73;
#line 741 "trailing_analysis.m"
                        MR_Box transform_hlds__trailing_analysis__conv7_Status_8;

#line 741 "trailing_analysis.m"
                        {
#line 741 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 741 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4));
#line 741 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "trailing_analysis.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_73_73, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 741 "trailing_analysis.m"
                        }
#line 741 "trailing_analysis.m"
                        {
#line 741 "trailing_analysis.m"
                          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_73_73, transform_hlds__trailing_analysis__Args_28, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv7_Status_8);
                        }
#line 741 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__Status_8 = ((MR_Word) transform_hlds__trailing_analysis__conv7_Status_8);
#line 740 "trailing_analysis.m"
                      }
#line 789 "trailing_analysis.m"
                  }
#line 779 "trailing_analysis.m"
                  break;
#line 779 "trailing_analysis.m"
              }
#line 779 "trailing_analysis.m"
            }
#line 779 "trailing_analysis.m"
            break;
#line 779 "trailing_analysis.m"
        }
#line 779 "trailing_analysis.m"
        break;
#line 779 "trailing_analysis.m"
    }
#line 779 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_8;
#line 779 "trailing_analysis.m"
  }
#line 768 "trailing_analysis.m"
}

#line 752 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_f_0(
#line 752 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 752 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_5)
#line 752 "trailing_analysis.m"
{
#line 763 "trailing_analysis.m"
  {
#line 763 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 763 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_6;

#line 756 "trailing_analysis.m"
    {
#line 756 "trailing_analysis.m"
      transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
    }
#line 757 "trailing_analysis.m"
    if (!(transform_hlds__trailing_analysis__succeeded))
#line 757 "trailing_analysis.m"
      {
#line 757 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = check_hlds__type_util__type_is_existq_type_2_p_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
      }
#line 763 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 762 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Status_6 = (MR_Integer) 0;
#line 763 "trailing_analysis.m"
    else
#line 764 "trailing_analysis.m"
      {
#line 764 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__TypeCtorCategory_7;

#line 764 "trailing_analysis.m"
        {
#line 764 "trailing_analysis.m"
          transform_hlds__trailing_analysis__TypeCtorCategory_7 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5);
        }
#line 765 "trailing_analysis.m"
        {
#line 765 "trailing_analysis.m"
          return transform_hlds__trailing_analysis__Status_6 = transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(transform_hlds__trailing_analysis__ModuleInfo_4, transform_hlds__trailing_analysis__Type_5, transform_hlds__trailing_analysis__TypeCtorCategory_7);
        }
#line 764 "trailing_analysis.m"
      }
#line 763 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_6;
#line 763 "trailing_analysis.m"
  }
#line 752 "trailing_analysis.m"
}

#line 744 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_4_p_0(
#line 744 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 744 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Type_6,
#line 744 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8,
#line 744 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9)
#line 744 "trailing_analysis.m"
{
#line 747 "trailing_analysis.m"
  {
#line 747 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 747 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_10_10;

#line 748 "trailing_analysis.m"
    {
#line 748 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_10_10 = transform_hlds__trailing_analysis__trail_check_type_2_f_0(transform_hlds__trailing_analysis__ModuleInfo_5, transform_hlds__trailing_analysis__Type_6);
    }
#line 627 "trailing_analysis.m"
#line 627 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__V_10_10) {
#line 627 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 627 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 627 "trailing_analysis.m"
#line 627 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8) {
#line 627 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 627 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 632 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 2;
#line 627 "trailing_analysis.m"
            break;
#line 627 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 633 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 0;
#line 627 "trailing_analysis.m"
            break;
#line 627 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 630 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 2;
#line 627 "trailing_analysis.m"
            break;
#line 627 "trailing_analysis.m"
        }
#line 627 "trailing_analysis.m"
        break;
#line 627 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 628 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = (MR_Integer) 0;
#line 627 "trailing_analysis.m"
        break;
#line 627 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 627 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_Status_9 = transform_hlds__trailing_analysis__STATE_VARIABLE_Status_0_8;
#line 627 "trailing_analysis.m"
        break;
#line 627 "trailing_analysis.m"
    }
#line 747 "trailing_analysis.m"
  }
#line 744 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 741 "trailing_analysis.m"
{
#line 741 "trailing_analysis.m"
  {
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 741 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 741 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 741 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 738 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0(
#line 738 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_4,
#line 738 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Types_5)
#line 738 "trailing_analysis.m"
{
#line 740 "trailing_analysis.m"
  {
#line 740 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Status_6;
#line 740 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_7_7;
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_Status_6;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 741 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_types_2_f_0_1));
#line 741 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_7_7, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_4));
#line 741 "trailing_analysis.m"
    }
#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_7_7, transform_hlds__trailing_analysis__Types_5, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Status_6);
    }
#line 741 "trailing_analysis.m"
    transform_hlds__trailing_analysis__Status_6 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Status_6);
#line 740 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Status_6;
#line 740 "trailing_analysis.m"
  }
#line 738 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 741 "trailing_analysis.m"
{
#line 741 "trailing_analysis.m"
  {
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 741 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 741 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 741 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 700 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
#line 700 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_5,
#line 700 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_6,
#line 700 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Vars_7)
#line 700 "trailing_analysis.m"
{
#line 702 "trailing_analysis.m"
  {
#line 702 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 702 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Result_8;
#line 702 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Types_9;
#line 702 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_13_13;
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv1_Result_8;

#line 703 "trailing_analysis.m"
    {
#line 703 "trailing_analysis.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_6, transform_hlds__trailing_analysis__Vars_7, &transform_hlds__trailing_analysis__Types_9);
    }
#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 741 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1));
#line 741 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_5));
#line 741 "trailing_analysis.m"
    }
#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_13_13, transform_hlds__trailing_analysis__Types_9, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_Result_8);
    }
#line 741 "trailing_analysis.m"
    transform_hlds__trailing_analysis__Result_8 = ((MR_Word) transform_hlds__trailing_analysis__conv1_Result_8);
#line 702 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__Result_8;
#line 702 "trailing_analysis.m"
  }
#line 700 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 741 "trailing_analysis.m"
{
#line 741 "trailing_analysis.m"
  {
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 741 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 741 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 741 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 669 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
#line 669 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 669 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 669 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 669 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 669 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeResult_10)
#line 669 "trailing_analysis.m"
{
#line 672 "trailing_analysis.m"
  {
#line 672 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 672 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_12;
#line 672 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 673 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___PredInfo_11;

#line 673 "trailing_analysis.m"
    {
#line 673 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_6, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis___PredInfo_11, &transform_hlds__trailing_analysis__ProcInfo_12);
    }
#line 674 "trailing_analysis.m"
    {
#line 674 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13);
    }
#line 695 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__MaybeResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 695 "trailing_analysis.m"
    else
#line 676 "trailing_analysis.m"
      {
#line 676 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13, (MR_Integer) 0)));
#line 676 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_14, (MR_Integer) 0)));
#line 676 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__AnalysisStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_14, (MR_Integer) 1)));

#line 682 "trailing_analysis.m"
#line 682 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__CalleeTrailingStatus_15) {
#line 682 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 682 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 686 "trailing_analysis.m"
            {
#line 686 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__TrailingStatus_17;
#line 686 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_18_18;
#line 686 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Types_23;
#line 686 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_27_27;
#line 741 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_TrailingStatus_17;

#line 703 "trailing_analysis.m"
              {
#line 703 "trailing_analysis.m"
                hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__Args_9, &transform_hlds__trailing_analysis__Types_23);
              }
#line 741 "trailing_analysis.m"
              {
#line 741 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 741 "trailing_analysis.m"
              }
#line 741 "trailing_analysis.m"
              {
#line 741 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_27_27, transform_hlds__trailing_analysis__Types_23, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_TrailingStatus_17);
              }
#line 741 "trailing_analysis.m"
              transform_hlds__trailing_analysis__TrailingStatus_17 = ((MR_Word) transform_hlds__trailing_analysis__conv1_TrailingStatus_17);
#line 691 "trailing_analysis.m"
              {
#line 691 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 691 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_17));
#line 691 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 1) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_16));
#line 691 "trailing_analysis.m"
              }
#line 691 "trailing_analysis.m"
              {
#line 691 "trailing_analysis.m"
                MR_Word base;
#line 691 "trailing_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 691 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__MaybeResult_10 = base;
#line 691 "trailing_analysis.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_18_18));
#line 691 "trailing_analysis.m"
              }
#line 686 "trailing_analysis.m"
            }
#line 682 "trailing_analysis.m"
            break;
#line 682 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 684 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__MaybeResult_10 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 682 "trailing_analysis.m"
            break;
#line 682 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 681 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__MaybeResult_10 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_13;
#line 682 "trailing_analysis.m"
            break;
#line 682 "trailing_analysis.m"
        }
#line 676 "trailing_analysis.m"
      }
#line 672 "trailing_analysis.m"
  }
#line 669 "trailing_analysis.m"
}

#line 741 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 741 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 741 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 741 "trailing_analysis.m"
{
#line 741 "trailing_analysis.m"
  {
#line 741 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 741 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9;

#line 741 "trailing_analysis.m"
    {
#line 741 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9);
    }
#line 741 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_Status_9));
#line 741 "trailing_analysis.m"
  }
#line 741 "trailing_analysis.m"
}

#line 655 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
#line 655 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ModuleInfo_6,
#line 655 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_7,
#line 655 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 655 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Args_9,
#line 655 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_10)
#line 655 "trailing_analysis.m"
{
#line 658 "trailing_analysis.m"
  {
#line 658 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 658 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeResult_11;
#line 658 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_20;
#line 658 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 673 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis___PredInfo_19;

#line 673 "trailing_analysis.m"
    {
#line 673 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__ModuleInfo_6, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis___PredInfo_19, &transform_hlds__trailing_analysis__ProcInfo_20);
    }
#line 674 "trailing_analysis.m"
    {
#line 674 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(transform_hlds__trailing_analysis__ProcInfo_20, &transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21);
    }
#line 695 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "trailing_analysis.m"
      transform_hlds__trailing_analysis__MaybeResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 695 "trailing_analysis.m"
    else
#line 676 "trailing_analysis.m"
      {
#line 676 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21, (MR_Integer) 0)));
#line 676 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__CalleeTrailingStatus_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_22, (MR_Integer) 0)));
#line 676 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__AnalysisStatus_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CalleeTrailingInfo_22, (MR_Integer) 1)));

#line 682 "trailing_analysis.m"
#line 682 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__CalleeTrailingStatus_23) {
#line 682 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 682 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 686 "trailing_analysis.m"
            {
#line 686 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__TrailingStatus_25;
#line 686 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_26_26;
#line 686 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__Types_31;
#line 686 "trailing_analysis.m"
              MR_Word transform_hlds__trailing_analysis__V_35_35;
#line 741 "trailing_analysis.m"
              MR_Box transform_hlds__trailing_analysis__conv1_TrailingStatus_25;

#line 703 "trailing_analysis.m"
              {
#line 703 "trailing_analysis.m"
                hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_7, transform_hlds__trailing_analysis__Args_9, &transform_hlds__trailing_analysis__Types_31);
              }
#line 741 "trailing_analysis.m"
              {
#line 741 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_5_p_0_1));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_35_35, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ModuleInfo_6));
#line 741 "trailing_analysis.m"
              }
#line 741 "trailing_analysis.m"
              {
#line 741 "trailing_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, transform_hlds__trailing_analysis__V_35_35, transform_hlds__trailing_analysis__Types_31, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv1_TrailingStatus_25);
              }
#line 741 "trailing_analysis.m"
              transform_hlds__trailing_analysis__TrailingStatus_25 = ((MR_Word) transform_hlds__trailing_analysis__conv1_TrailingStatus_25);
#line 691 "trailing_analysis.m"
              {
#line 691 "trailing_analysis.m"
                transform_hlds__trailing_analysis__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 691 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_26_26, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_25));
#line 691 "trailing_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_26_26, 1) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_24));
#line 691 "trailing_analysis.m"
              }
#line 691 "trailing_analysis.m"
              {
#line 691 "trailing_analysis.m"
                transform_hlds__trailing_analysis__MaybeResult_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 691 "trailing_analysis.m"
                MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_11, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_26_26));
#line 691 "trailing_analysis.m"
              }
#line 686 "trailing_analysis.m"
            }
#line 682 "trailing_analysis.m"
            break;
#line 682 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 684 "trailing_analysis.m"
            transform_hlds__trailing_analysis__MaybeResult_11 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 682 "trailing_analysis.m"
            break;
#line 682 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 681 "trailing_analysis.m"
            transform_hlds__trailing_analysis__MaybeResult_11 = transform_hlds__trailing_analysis__MaybeCalleeTrailingInfo_21;
#line 682 "trailing_analysis.m"
            break;
#line 682 "trailing_analysis.m"
        }
#line 676 "trailing_analysis.m"
      }
#line 662 "trailing_analysis.m"
    if ((transform_hlds__trailing_analysis__MaybeResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__Result_10 = (MR_Integer) 0;
#line 662 "trailing_analysis.m"
    else
#line 661 "trailing_analysis.m"
      {
#line 661 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_11, (MR_Integer) 0)));
#line 661 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_12_12;

#line 661 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__Result_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, (MR_Integer) 0)));
#line 661 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_13_13, (MR_Integer) 1)));
#line 661 "trailing_analysis.m"
      }
#line 658 "trailing_analysis.m"
  }
#line 655 "trailing_analysis.m"
}

#line 635 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
#line 635 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusA_4,
#line 635 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__MaybeStatusB_5,
#line 635 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeStatus_6)
#line 635 "trailing_analysis.m"
{
#line 644 "trailing_analysis.m"
  {
#line 644 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__MaybeStatusA_4)) == (MR_mktag((MR_Integer) 1)));
#line 644 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__StatusA_7;
#line 644 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__StatusB_8;

#line 640 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 640 "trailing_analysis.m"
      {
#line 640 "trailing_analysis.m"
        transform_hlds__trailing_analysis__StatusA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeStatusA_4, (MR_Integer) 0)));
#line 641 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__MaybeStatusB_5)) == (MR_mktag((MR_Integer) 1)));
#line 641 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 641 "trailing_analysis.m"
          transform_hlds__trailing_analysis__StatusB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeStatusB_5, (MR_Integer) 0)));
#line 640 "trailing_analysis.m"
      }
#line 644 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 643 "trailing_analysis.m"
      {
#line 643 "trailing_analysis.m"
        MR_Word transform_hlds__trailing_analysis__V_9_9;

#line 643 "trailing_analysis.m"
        {
#line 643 "trailing_analysis.m"
          transform_hlds__trailing_analysis__V_9_9 = analysis__lub_2_f_0(transform_hlds__trailing_analysis__StatusA_7, transform_hlds__trailing_analysis__StatusB_8);
        }
#line 643 "trailing_analysis.m"
        {
#line 643 "trailing_analysis.m"
          MR_Word base;
#line 643 "trailing_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 643 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__MaybeStatus_6 = base;
#line 643 "trailing_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__V_9_9));
#line 643 "trailing_analysis.m"
        }
#line 643 "trailing_analysis.m"
      }
#line 644 "trailing_analysis.m"
    else
#line 645 "trailing_analysis.m"
      *transform_hlds__trailing_analysis__MaybeStatus_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "trailing_analysis.m"
  }
#line 635 "trailing_analysis.m"
}

#line 624 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
#line 624 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__1_1,
#line 624 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__HeadVar__2_2,
#line 624 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__HeadVar__3_3)
#line 624 "trailing_analysis.m"
{
#line 627 "trailing_analysis.m"
  {
#line 627 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;

#line 627 "trailing_analysis.m"
#line 627 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__HeadVar__1_1) {
#line 627 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 627 "trailing_analysis.m"
      case (MR_Integer) 2:
#line 627 "trailing_analysis.m"
#line 627 "trailing_analysis.m"
        switch (transform_hlds__trailing_analysis__HeadVar__2_2) {
#line 627 "trailing_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 627 "trailing_analysis.m"
          case (MR_Integer) 2:
#line 632 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 2;
#line 627 "trailing_analysis.m"
            break;
#line 627 "trailing_analysis.m"
          case (MR_Integer) 0:
#line 633 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 0;
#line 627 "trailing_analysis.m"
            break;
#line 627 "trailing_analysis.m"
          case (MR_Integer) 1:
#line 630 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 2;
#line 627 "trailing_analysis.m"
            break;
#line 627 "trailing_analysis.m"
        }
#line 627 "trailing_analysis.m"
        break;
#line 627 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 628 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__HeadVar__3_3 = (MR_Integer) 0;
#line 627 "trailing_analysis.m"
        break;
#line 627 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 627 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__HeadVar__3_3 = transform_hlds__trailing_analysis__HeadVar__2_2;
#line 627 "trailing_analysis.m"
        break;
#line 627 "trailing_analysis.m"
    }
#line 627 "trailing_analysis.m"
  }
#line 624 "trailing_analysis.m"
}

#line 560 "trailing_analysis.m"
static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
#line 560 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PredInfo_3,
#line 560 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Status_4)
#line 560 "trailing_analysis.m"
{
#line 563 "trailing_analysis.m"
  {
#line 563 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 563 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__Name_5;
#line 563 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredOrFunc_6;
#line 563 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ModuleName_7;
#line 563 "trailing_analysis.m"
    MR_String transform_hlds__trailing_analysis__ModuleNameStr_8;
#line 563 "trailing_analysis.m"
    MR_Integer transform_hlds__trailing_analysis__Arity_9;

#line 564 "trailing_analysis.m"
    {
#line 564 "trailing_analysis.m"
      transform_hlds__trailing_analysis__Name_5 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 565 "trailing_analysis.m"
    {
#line 565 "trailing_analysis.m"
      transform_hlds__trailing_analysis__PredOrFunc_6 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 566 "trailing_analysis.m"
    {
#line 566 "trailing_analysis.m"
      transform_hlds__trailing_analysis__ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
    }
#line 567 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__trailing_analysis__ModuleName_7)) == (MR_mktag((MR_Integer) 0)));
#line 567 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 567 "trailing_analysis.m"
      {
#line 567 "trailing_analysis.m"
        transform_hlds__trailing_analysis__ModuleNameStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ModuleName_7, (MR_Integer) 0)));
#line 568 "trailing_analysis.m"
        {
#line 568 "trailing_analysis.m"
          transform_hlds__trailing_analysis__Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__trailing_analysis__PredInfo_3);
        }
#line 584 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__Arity_9 == (MR_Integer) 1);
#line 563 "trailing_analysis.m"
        if (transform_hlds__trailing_analysis__succeeded)
#line 579 "trailing_analysis.m"
          {
#line 579 "trailing_analysis.m"
            if ((strcmp(transform_hlds__trailing_analysis__ModuleNameStr_8, (MR_String) "require") == 0))
#line 579 "trailing_analysis.m"
#line 579 "trailing_analysis.m"
              switch (transform_hlds__trailing_analysis__PredOrFunc_6) {
#line 579 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 579 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 581 "trailing_analysis.m"
                  {
#line 581 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = (strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "func_error") == 0);
#line 581 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 581 "trailing_analysis.m"
                      {
#line 582 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 582 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 581 "trailing_analysis.m"
                      }
#line 581 "trailing_analysis.m"
                  }
#line 579 "trailing_analysis.m"
                  break;
#line 579 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 579 "trailing_analysis.m"
                  {
#line 579 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__succeeded = (strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "error") == 0);
#line 579 "trailing_analysis.m"
                    if (transform_hlds__trailing_analysis__succeeded)
#line 579 "trailing_analysis.m"
                      {
#line 580 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 580 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 579 "trailing_analysis.m"
                      }
#line 579 "trailing_analysis.m"
                  }
#line 579 "trailing_analysis.m"
                  break;
#line 579 "trailing_analysis.m"
              }
#line 579 "trailing_analysis.m"
            else
#line 579 "trailing_analysis.m"
            if ((strcmp(transform_hlds__trailing_analysis__ModuleNameStr_8, (MR_String) "exception") == 0))
#line 579 "trailing_analysis.m"
              if ((strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "throw") == 0))
#line 583 "trailing_analysis.m"
                {
#line 583 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 583 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 583 "trailing_analysis.m"
                }
#line 579 "trailing_analysis.m"
              else
#line 579 "trailing_analysis.m"
              if ((strcmp(transform_hlds__trailing_analysis__Name_5, (MR_String) "rethrow") == 0))
#line 584 "trailing_analysis.m"
                {
#line 584 "trailing_analysis.m"
                  *transform_hlds__trailing_analysis__Status_4 = (MR_Integer) 1;
#line 584 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__succeeded = MR_TRUE;
#line 584 "trailing_analysis.m"
                }
#line 579 "trailing_analysis.m"
              else
#line 579 "trailing_analysis.m"
                transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 579 "trailing_analysis.m"
            else
#line 579 "trailing_analysis.m"
              transform_hlds__trailing_analysis__succeeded = MR_FALSE;
#line 579 "trailing_analysis.m"
          }
#line 567 "trailing_analysis.m"
      }
#line 563 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__succeeded;
#line 563 "trailing_analysis.m"
  }
#line 560 "trailing_analysis.m"
}

#line 535 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
#line 535 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerCodeModel_5,
#line 535 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__OuterCodeModel_6,
#line 535 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__InnerStatus_7)
#line 535 "trailing_analysis.m"
{
#line 538 "trailing_analysis.m"
  {
#line 538 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__InnerCodeModel_5 == (MR_Integer) 2);
#line 538 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__4_4;

#line 542 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 542 "trailing_analysis.m"
      {
#line 543 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__OuterCodeModel_6 == (MR_Integer) 2);
#line 543 "trailing_analysis.m"
        transform_hlds__trailing_analysis__succeeded = !(transform_hlds__trailing_analysis__succeeded);
#line 542 "trailing_analysis.m"
      }
#line 538 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 545 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__4_4 = (MR_Integer) 0;
#line 538 "trailing_analysis.m"
    else
#line 547 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__4_4 = transform_hlds__trailing_analysis__InnerStatus_7;
#line 538 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__4_4;
#line 538 "trailing_analysis.m"
  }
#line 535 "trailing_analysis.m"
}

#line 525 "trailing_analysis.m"
static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
#line 525 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Attributes_3)
#line 525 "trailing_analysis.m"
{
#line 528 "trailing_analysis.m"
  {
#line 528 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 528 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__HeadVar__2_2;
#line 529 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_4_4;

#line 529 "trailing_analysis.m"
    {
#line 529 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_4_4 = parse_tree__prog_data__get_may_modify_trail_1_f_0(transform_hlds__trailing_analysis__Attributes_3);
    }
#line 529 "trailing_analysis.m"
    transform_hlds__trailing_analysis__succeeded = (transform_hlds__trailing_analysis__V_4_4 == (MR_Integer) 0);
#line 528 "trailing_analysis.m"
    if (transform_hlds__trailing_analysis__succeeded)
#line 530 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 528 "trailing_analysis.m"
    else
#line 532 "trailing_analysis.m"
      transform_hlds__trailing_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 528 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__HeadVar__2_2;
#line 528 "trailing_analysis.m"
  }
#line 525 "trailing_analysis.m"
}

#line 517 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
#line 517 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 517 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 517 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 517 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 517 "trailing_analysis.m"
{
#line 517 "trailing_analysis.m"
  {
#line 517 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 517 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv6_MaybeStatus_6;

#line 517 "trailing_analysis.m"
    {
#line 517 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv6_MaybeStatus_6);
    }
#line 517 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv6_MaybeStatus_6));
#line 517 "trailing_analysis.m"
  }
#line 517 "trailing_analysis.m"
}

#line 515 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
#line 515 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 515 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 515 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 515 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 515 "trailing_analysis.m"
{
#line 515 "trailing_analysis.m"
  {
#line 515 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 515 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv4_HeadVar__3_3;

#line 515 "trailing_analysis.m"
    {
#line 515 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv4_HeadVar__3_3);
    }
#line 515 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv4_HeadVar__3_3));
#line 515 "trailing_analysis.m"
  }
#line 515 "trailing_analysis.m"
}

#line 513 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
#line 513 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 513 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 513 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2,
#line 513 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 513 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 513 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 513 "trailing_analysis.m"
{
#line 513 "trailing_analysis.m"
  {
#line 513 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 513 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_Result_11;
#line 513 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12;
#line 513 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110;

#line 513 "trailing_analysis.m"
    {
#line 513 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv2_Result_11, &transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110);
    }
#line 513 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_Result_11));
#line 513 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_MaybeAnalysisStatus_12));
#line 513 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_110));
#line 513 "trailing_analysis.m"
  }
#line 513 "trailing_analysis.m"
}

#line 507 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
#line 507 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 507 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 507 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goals_10,
#line 507 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 507 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 507 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16,
#line 507 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17)
#line 507 "trailing_analysis.m"
{
#line 512 "trailing_analysis.m"
  {
#line 512 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 512 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_31_31;
#line 512 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__TypeInfo_32_32;
#line 512 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Results_14;
#line 512 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15;
#line 512 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_18_18;
#line 513 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17;
#line 515 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv5_Result_11;
#line 517 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12;

#line 513 "trailing_analysis.m"
    {
#line 513 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 513 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_10[0]));
#line 513 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 1) = ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1));
#line 513 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 513 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 3) = ((MR_Box) (transform_hlds__trailing_analysis__SCC_8));
#line 513 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_18_18, 4) = ((MR_Box) (transform_hlds__trailing_analysis__VarTypes_9));
#line 513 "trailing_analysis.m"
    }
#line 6918 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
#line 6920 "transform_hlds.trailing_analysis.c"
    transform_hlds__trailing_analysis__TypeInfo_32_32 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 513 "trailing_analysis.m"
    {
#line 513 "trailing_analysis.m"
      mercury__list__map2_foldl_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__trailing_analysis__TypeCtorInfo_31_31, transform_hlds__trailing_analysis__TypeInfo_32_32, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_18_18, transform_hlds__trailing_analysis__Goals_10, &transform_hlds__trailing_analysis__Results_14, &transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_16)), &transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17);
    }
#line 513 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) transform_hlds__trailing_analysis__conv3_STATE_VARIABLE_ModuleInfo_17);
#line 515 "trailing_analysis.m"
    {
#line 515 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_31_31, transform_hlds__trailing_analysis__TypeCtorInfo_31_31, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[6], transform_hlds__trailing_analysis__Results_14, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__trailing_analysis__conv5_Result_11);
    }
#line 515 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__Result_11 = ((MR_Word) transform_hlds__trailing_analysis__conv5_Result_11);
#line 517 "trailing_analysis.m"
    {
#line 517 "trailing_analysis.m"
      mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeInfo_32_32, transform_hlds__trailing_analysis__TypeInfo_32_32, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[7], transform_hlds__trailing_analysis__MaybeAnalysisStatuses_15, ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]))), &transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12);
    }
#line 517 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) transform_hlds__trailing_analysis__conv7_MaybeAnalysisStatus_12);
#line 512 "trailing_analysis.m"
  }
#line 507 "trailing_analysis.m"
}

#line 443 "trailing_analysis.m"
static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
#line 443 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 443 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1)
#line 443 "trailing_analysis.m"
{
#line 443 "trailing_analysis.m"
  {
#line 443 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__wrapper_arg_2;
#line 443 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 443 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_HeadVar__2_126;

#line 443 "trailing_analysis.m"
    {
#line 443 "trailing_analysis.m"
      transform_hlds__trailing_analysis__conv0_HeadVar__2_126 = transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__443__1_1_f_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1));
    }
#line 443 "trailing_analysis.m"
    transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_HeadVar__2_126));
#line 443 "trailing_analysis.m"
    return transform_hlds__trailing_analysis__wrapper_arg_2;
#line 443 "trailing_analysis.m"
  }
#line 443 "trailing_analysis.m"
}

#line 342 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
#line 342 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 342 "trailing_analysis.m"
{
#line 342 "trailing_analysis.m"
  {
#line 342 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 342 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0, 1);
#line 342 "trailing_analysis.m"
  }
#line 342 "trailing_analysis.m"
}

#line 342 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
#line 342 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 342 "trailing_analysis.m"
{
#line 342 "trailing_analysis.m"
  {
#line 342 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 342 "trailing_analysis.m"
    {
#line 349 "trailing_analysis.m"
      MR_String transform_hlds__trailing_analysis__V_55_55;

#line 349 "trailing_analysis.m"
      {
#line 349 "trailing_analysis.m"
        mdbcomp__prim_data__special_pred_name_arity_4_p_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162, &transform_hlds__trailing_analysis__V_55_55, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163);
      }
#line 349 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (strcmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_162_162) == 0);
#line 342 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 342 "trailing_analysis.m"
        {
#line 349 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53 == (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__V_163_163);
#line 349 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 349 "trailing_analysis.m"
            {
#line 349 "trailing_analysis.m"
              transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(transform_hlds__trailing_analysis__env_ptr);
#line 349 "trailing_analysis.m"
              return;
            }
#line 342 "trailing_analysis.m"
        }
#line 342 "trailing_analysis.m"
    }
#line 342 "trailing_analysis.m"
  }
#line 342 "trailing_analysis.m"
}

#line 342 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
#line 342 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 342 "trailing_analysis.m"
{
#line 342 "trailing_analysis.m"
  {
#line 342 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 342 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0) == 0)
#line 342 "trailing_analysis.m"
      {
#line 342 "trailing_analysis.m"
        {
#line 342 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ModuleName_51;

#line 342 "trailing_analysis.m"
          {
#line 342 "trailing_analysis.m"
            transform_hlds__trailing_analysis__ModuleName_51 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
          }
#line 343 "trailing_analysis.m"
          {
#line 343 "trailing_analysis.m"
            (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__trailing_analysis__ModuleName_51);
          }
#line 342 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 342 "trailing_analysis.m"
            {
#line 344 "trailing_analysis.m"
              {
#line 344 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52 = hlds__hlds_pred__pred_info_name_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
              }
#line 345 "trailing_analysis.m"
              {
#line 345 "trailing_analysis.m"
                (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53 = hlds__hlds_pred__pred_info_orig_arity_1_f_0((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
              }
#line 347 "trailing_analysis.m"
              {
#line 347 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__slot_1 = (MR_Integer) 0;

#line 347 "trailing_analysis.m"
                do
#line 347 "trailing_analysis.m"
                  {
#line 347 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54 = ((&transform_hlds__trailing_analysis_vector_common_9[0 + transform_hlds__trailing_analysis__slot_1]))->transform_hlds__trailing_analysis__vector_common_type_9_0__vct_9_f_0;
#line 347 "trailing_analysis.m"
                    {
#line 347 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(transform_hlds__trailing_analysis__env_ptr);
                    }
#line 347 "trailing_analysis.m"
                    transform_hlds__trailing_analysis__slot_1 = (transform_hlds__trailing_analysis__slot_1 + (MR_Integer) 1);
#line 347 "trailing_analysis.m"
                  }
#line 347 "trailing_analysis.m"
                while ((transform_hlds__trailing_analysis__slot_1 < (MR_Integer) 2));
#line 347 "trailing_analysis.m"
              }
#line 342 "trailing_analysis.m"
            }
#line 342 "trailing_analysis.m"
        }
#line 342 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_FALSE;
#line 342 "trailing_analysis.m"
      }
#line 342 "trailing_analysis.m"
    else
#line 342 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_TRUE;
#line 342 "trailing_analysis.m"
  }
#line 342 "trailing_analysis.m"
}

#line 299 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
#line 299 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 299 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__VarTypes_9,
#line 299 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Goal_10,
#line 299 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__Result_11,
#line 299 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__MaybeAnalysisStatus_12,
#line 299 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109,
#line 299 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110)
#line 299 "trailing_analysis.m"
{
#line 299 "trailing_analysis.m"
  {
#line 299 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 304 "trailing_analysis.m"
    while (MR_TRUE)
#line 304 "trailing_analysis.m"
      {
#line 304 "trailing_analysis.m"
        /* tailcall optimized into a loop */
#line 304 "trailing_analysis.m"
        {
#line 304 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_10, (MR_Integer) 0)));
#line 304 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Goal_10, (MR_Integer) 1)));

#line 320 "trailing_analysis.m"
#line 320 "trailing_analysis.m"
          switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__GoalExpr_14)) {
#line 320 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 320 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 478 "trailing_analysis.m"
              {
#line 478 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__SubGoal_99 = (MR_Word) MR_body(((MR_Word) transform_hlds__trailing_analysis__GoalExpr_14), (MR_Integer) 0);

#line 479 "trailing_analysis.m"
                /* direct tailcall eliminated */
#line 479 "trailing_analysis.m"
                {
#line 479 "trailing_analysis.m"
                  MR_Word transform_hlds__trailing_analysis__Goal__tmp_copy_10 = transform_hlds__trailing_analysis__SubGoal_99;

#line 479 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__Goal_10 = transform_hlds__trailing_analysis__Goal__tmp_copy_10;
#line 479 "trailing_analysis.m"
                }
#line 479 "trailing_analysis.m"
                continue;
#line 478 "trailing_analysis.m"
              }
#line 320 "trailing_analysis.m"
              break;
#line 320 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 307 "trailing_analysis.m"
              {
#line 307 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 307 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)));
#line 307 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 307 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 307 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));

#line 308 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 309 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 316 "trailing_analysis.m"
#line 316 "trailing_analysis.m"
                switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Kind_19)) {
#line 316 "trailing_analysis.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 316 "trailing_analysis.m"
                  case (MR_Integer) 0:
#line 311 "trailing_analysis.m"
                    {
#line 311 "trailing_analysis.m"
                    }
#line 316 "trailing_analysis.m"
                    break;
#line 316 "trailing_analysis.m"
                  case (MR_Integer) 1:
#line 312 "trailing_analysis.m"
                    {
#line 312 "trailing_analysis.m"
                    }
#line 316 "trailing_analysis.m"
                    break;
#line 316 "trailing_analysis.m"
                  case (MR_Integer) 2:
#line 313 "trailing_analysis.m"
                    {
#line 313 "trailing_analysis.m"
                    }
#line 316 "trailing_analysis.m"
                    break;
#line 316 "trailing_analysis.m"
                  case (MR_Integer) 3:
#line 316 "trailing_analysis.m"
#line 316 "trailing_analysis.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Kind_19, (MR_Integer) 0)))) {
#line 316 "trailing_analysis.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "trailing_analysis.m"
                      case (MR_Integer) 0:
#line 314 "trailing_analysis.m"
                        {
#line 314 "trailing_analysis.m"
                        }
#line 316 "trailing_analysis.m"
                        break;
#line 316 "trailing_analysis.m"
                      case (MR_Integer) 1:
#line 317 "trailing_analysis.m"
                        {
#line 318 "trailing_analysis.m"
                          {
#line 318 "trailing_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "complicated unify");
#line 318 "trailing_analysis.m"
                            return;
                          }
#line 317 "trailing_analysis.m"
                        }
#line 316 "trailing_analysis.m"
                        break;
#line 316 "trailing_analysis.m"
                    }
#line 316 "trailing_analysis.m"
                    break;
#line 316 "trailing_analysis.m"
                }
#line 307 "trailing_analysis.m"
                *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 307 "trailing_analysis.m"
              }
#line 320 "trailing_analysis.m"
              break;
#line 320 "trailing_analysis.m"
            case (MR_Integer) 2:
#line 321 "trailing_analysis.m"
              {
#line 321 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallPredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)));
#line 321 "trailing_analysis.m"
                MR_Integer transform_hlds__trailing_analysis__CallProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 321 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 321 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__CallPPId_47;
#line 321 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 321 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 321 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));

#line 322 "trailing_analysis.m"
                {
#line 322 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__CallPPId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_47, 0) = ((MR_Box) (transform_hlds__trailing_analysis__CallPredId_41));
#line 322 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__CallPPId_47, 1) = ((MR_Box) (transform_hlds__trailing_analysis__CallProcId_42));
#line 322 "trailing_analysis.m"
                }
#line 323 "trailing_analysis.m"
                {
#line 323 "trailing_analysis.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__CallPredId_41, &(transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                }
#line 326 "trailing_analysis.m"
                {
#line 326 "trailing_analysis.m"
                  (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__trailing_analysis__CallPPId_47)), transform_hlds__trailing_analysis__SCC_8);
                }
#line 332 "trailing_analysis.m"
                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 328 "trailing_analysis.m"
                  {
#line 328 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Types_49;

#line 328 "trailing_analysis.m"
                    {
#line 328 "trailing_analysis.m"
                      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallArgs_43, &transform_hlds__trailing_analysis__Types_49);
                    }
#line 329 "trailing_analysis.m"
                    {
#line 329 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__trail_check_types_2_f_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__Types_49);
                    }
#line 331 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 328 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 328 "trailing_analysis.m"
                  }
#line 332 "trailing_analysis.m"
                else
#line 338 "trailing_analysis.m"
                  {
#line 333 "trailing_analysis.m"
                    {
#line 333 "trailing_analysis.m"
                      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                    }
#line 338 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 336 "trailing_analysis.m"
                      {
#line 336 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 337 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 336 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 336 "trailing_analysis.m"
                      }
#line 338 "trailing_analysis.m"
                    else
#line 356 "trailing_analysis.m"
                      {
#line 342 "trailing_analysis.m"
                        {
#line 342 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(&transform_hlds__trailing_analysis__env);
                        }
#line 356 "trailing_analysis.m"
                        if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 354 "trailing_analysis.m"
                          {
#line 354 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 355 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 354 "trailing_analysis.m"
                            *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 354 "trailing_analysis.m"
                          }
#line 356 "trailing_analysis.m"
                        else
#line 363 "trailing_analysis.m"
                          {
#line 363 "trailing_analysis.m"
                            MR_Word transform_hlds__trailing_analysis__Result0_56;

#line 359 "trailing_analysis.m"
                            {
#line 359 "trailing_analysis.m"
                              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48, &transform_hlds__trailing_analysis__Result0_56);
                            }
#line 363 "trailing_analysis.m"
                            if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 361 "trailing_analysis.m"
                              {
#line 361 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__Result0_56;
#line 362 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 361 "trailing_analysis.m"
                                *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 361 "trailing_analysis.m"
                              }
#line 363 "trailing_analysis.m"
                            else
#line 364 "trailing_analysis.m"
                              {
#line 364 "trailing_analysis.m"
                                MR_Word transform_hlds__trailing_analysis__Globals_57;
#line 364 "trailing_analysis.m"
                                MR_Word transform_hlds__trailing_analysis__Intermod_58;

#line 364 "trailing_analysis.m"
                                {
#line 364 "trailing_analysis.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, &transform_hlds__trailing_analysis__Globals_57);
                                }
#line 365 "trailing_analysis.m"
                                {
#line 365 "trailing_analysis.m"
                                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_57, (MR_Integer) 326, &transform_hlds__trailing_analysis__Intermod_58);
                                }
#line 368 "trailing_analysis.m"
                                (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__Intermod_58 == (MR_Integer) 1);
#line 368 "trailing_analysis.m"
                                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 369 "trailing_analysis.m"
                                  {
#line 369 "trailing_analysis.m"
                                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                                  }
#line 386 "trailing_analysis.m"
                                if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 375 "trailing_analysis.m"
                                  {
#line 375 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__AnalysisStatus_59;
#line 375 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__Result0_146;

#line 374 "trailing_analysis.m"
                                    {
#line 374 "trailing_analysis.m"
                                      transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(transform_hlds__trailing_analysis__CallPPId_47, &transform_hlds__trailing_analysis__Result0_146, &transform_hlds__trailing_analysis__AnalysisStatus_59, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                                    }
#line 379 "trailing_analysis.m"
#line 379 "trailing_analysis.m"
                                    switch (transform_hlds__trailing_analysis__Result0_146) {
#line 379 "trailing_analysis.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 379 "trailing_analysis.m"
                                      case (MR_Integer) 2:
#line 378 "trailing_analysis.m"
                                        {
#line 378 "trailing_analysis.m"
                                          *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallArgs_43);
                                        }
#line 379 "trailing_analysis.m"
                                        break;
#line 379 "trailing_analysis.m"
                                      case (MR_Integer) 0:
#line 379 "trailing_analysis.m"
                                      case (MR_Integer) 1:
#line 383 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__Result0_146;
#line 379 "trailing_analysis.m"
                                        break;
#line 379 "trailing_analysis.m"
                                    }
#line 385 "trailing_analysis.m"
                                    {
#line 385 "trailing_analysis.m"
                                      MR_Word base;
#line 385 "trailing_analysis.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 385 "trailing_analysis.m"
                                      *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = base;
#line 385 "trailing_analysis.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__trailing_analysis__AnalysisStatus_59));
#line 385 "trailing_analysis.m"
                                    }
#line 375 "trailing_analysis.m"
                                  }
#line 386 "trailing_analysis.m"
                                else
#line 388 "trailing_analysis.m"
                                  {
#line 388 "trailing_analysis.m"
                                    MR_Word transform_hlds__trailing_analysis__MaybeResult_60;

#line 387 "trailing_analysis.m"
                                    {
#line 387 "trailing_analysis.m"
                                      transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CallPPId_47, transform_hlds__trailing_analysis__CallArgs_43, &transform_hlds__trailing_analysis__MaybeResult_60);
                                    }
#line 392 "trailing_analysis.m"
                                    if ((transform_hlds__trailing_analysis__MaybeResult_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "trailing_analysis.m"
                                      {
#line 396 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 400 "trailing_analysis.m"
#line 400 "trailing_analysis.m"
                                        switch (transform_hlds__trailing_analysis__Intermod_58) {
#line 400 "trailing_analysis.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 400 "trailing_analysis.m"
                                          case (MR_Integer) 0:
#line 402 "trailing_analysis.m"
                                            *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "trailing_analysis.m"
                                            break;
#line 400 "trailing_analysis.m"
                                          case (MR_Integer) 1:
#line 398 "trailing_analysis.m"
                                            {
#line 399 "trailing_analysis.m"
                                              *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 398 "trailing_analysis.m"
                                            }
#line 400 "trailing_analysis.m"
                                            break;
#line 400 "trailing_analysis.m"
                                        }
#line 393 "trailing_analysis.m"
                                      }
#line 392 "trailing_analysis.m"
                                    else
#line 390 "trailing_analysis.m"
                                      {
#line 390 "trailing_analysis.m"
                                        MR_Word transform_hlds__trailing_analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__MaybeResult_60, (MR_Integer) 0)));

#line 390 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__Result_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_141_141, (MR_Integer) 0)));
#line 390 "trailing_analysis.m"
                                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_141_141, (MR_Integer) 1)));
#line 390 "trailing_analysis.m"
                                      }
#line 388 "trailing_analysis.m"
                                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 388 "trailing_analysis.m"
                                  }
#line 364 "trailing_analysis.m"
                              }
#line 363 "trailing_analysis.m"
                          }
#line 356 "trailing_analysis.m"
                      }
#line 338 "trailing_analysis.m"
                  }
#line 321 "trailing_analysis.m"
              }
#line 320 "trailing_analysis.m"
              break;
#line 320 "trailing_analysis.m"
            case (MR_Integer) 3:
#line 320 "trailing_analysis.m"
#line 320 "trailing_analysis.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 0)))) {
#line 320 "trailing_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 320 "trailing_analysis.m"
                case (MR_Integer) 0:
#line 408 "trailing_analysis.m"
                  {
#line 408 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Details_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 408 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___Args_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 408 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___ArgModes_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 408 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 408 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));

#line 414 "trailing_analysis.m"
#line 414 "trailing_analysis.m"
                    switch (MR_tag((MR_Word) transform_hlds__trailing_analysis__Details_61)) {
#line 414 "trailing_analysis.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 414 "trailing_analysis.m"
                      case (MR_Integer) 0:
#line 411 "trailing_analysis.m"
                        {
#line 412 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 413 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 411 "trailing_analysis.m"
                        }
#line 414 "trailing_analysis.m"
                        break;
#line 414 "trailing_analysis.m"
                      case (MR_Integer) 1:
#line 416 "trailing_analysis.m"
                        {
#line 417 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 418 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 416 "trailing_analysis.m"
                        }
#line 414 "trailing_analysis.m"
                        break;
#line 414 "trailing_analysis.m"
                      case (MR_Integer) 2:
#line 414 "trailing_analysis.m"
                      case (MR_Integer) 3:
#line 422 "trailing_analysis.m"
                        {
#line 423 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 424 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 422 "trailing_analysis.m"
                        }
#line 414 "trailing_analysis.m"
                        break;
#line 414 "trailing_analysis.m"
                    }
#line 408 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 408 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
                  break;
#line 320 "trailing_analysis.m"
                case (MR_Integer) 1:
#line 427 "trailing_analysis.m"
                  {
#line 427 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Attributes_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 427 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 427 "trailing_analysis.m"
                    MR_Integer transform_hlds__trailing_analysis__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 427 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 427 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 5)));
#line 427 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 6)));
#line 427 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 7)));

#line 428 "trailing_analysis.m"
                    {
#line 428 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(transform_hlds__trailing_analysis__Attributes_76);
                    }
#line 429 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 427 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 427 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
                  break;
#line 320 "trailing_analysis.m"
                case (MR_Integer) 2:
#line 431 "trailing_analysis.m"
                  {
#line 431 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Goals_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 431 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___ConjType_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));

#line 432 "trailing_analysis.m"
                    {
#line 432 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__Goals_84, transform_hlds__trailing_analysis__Result_11, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
#line 432 "trailing_analysis.m"
                      return;
                    }
#line 431 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
                  break;
#line 320 "trailing_analysis.m"
                case (MR_Integer) 3:
#line 435 "trailing_analysis.m"
                  {
#line 435 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Goals_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 436 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___Result0_85;

#line 436 "trailing_analysis.m"
                    {
#line 436 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__Goals_149, &transform_hlds__trailing_analysis___Result0_85, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 440 "trailing_analysis.m"
                    *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 435 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
                  break;
#line 320 "trailing_analysis.m"
                case (MR_Integer) 4:
#line 442 "trailing_analysis.m"
                  {
#line 442 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Cases_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 442 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__CaseGoals_89;
#line 442 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 442 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));

#line 443 "trailing_analysis.m"
                    {
#line 443 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__CaseGoals_89 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[5], transform_hlds__trailing_analysis__Cases_88);
                    }
#line 444 "trailing_analysis.m"
                    {
#line 444 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__CaseGoals_89, transform_hlds__trailing_analysis__Result_11, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
#line 444 "trailing_analysis.m"
                      return;
                    }
#line 442 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
                  break;
#line 320 "trailing_analysis.m"
                case (MR_Integer) 5:
#line 482 "trailing_analysis.m"
                  {
#line 482 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Reason_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 482 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__InnerGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 483 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_114_114;
#line 483 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_102_102;

#line 483 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__trailing_analysis__Reason_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 483 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 483 "trailing_analysis.m"
                      {
#line 483 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 1)));
#line 483 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__Reason_100, (MR_Integer) 2)));
#line 483 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_114_114 == (MR_Integer) 1);
#line 483 "trailing_analysis.m"
                      }
#line 487 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 485 "trailing_analysis.m"
                      {
#line 485 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 486 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
#line 485 "trailing_analysis.m"
                        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109;
#line 485 "trailing_analysis.m"
                      }
#line 487 "trailing_analysis.m"
                    else
#line 488 "trailing_analysis.m"
                      {
#line 488 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__InnerGoalInfo_105;
#line 488 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__InnerCodeModel_106;
#line 488 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__OuterCodeModel_107;
#line 488 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__Result0_156;
#line 491 "trailing_analysis.m"
                        MR_Word transform_hlds__trailing_analysis__V_104_104;

#line 489 "trailing_analysis.m"
                        {
#line 489 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__InnerGoal_101, &transform_hlds__trailing_analysis__Result0_156, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                        }
#line 491 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_101, (MR_Integer) 0)));
#line 491 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__InnerGoalInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__InnerGoal_101, (MR_Integer) 1)));
#line 492 "trailing_analysis.m"
                        {
#line 492 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__InnerCodeModel_106 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__InnerGoalInfo_105);
                        }
#line 493 "trailing_analysis.m"
                        {
#line 493 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__OuterCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__GoalInfo_15);
                        }
#line 499 "trailing_analysis.m"
                        {
#line 499 "trailing_analysis.m"
                          *transform_hlds__trailing_analysis__Result_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(transform_hlds__trailing_analysis__InnerCodeModel_106, transform_hlds__trailing_analysis__OuterCodeModel_107, transform_hlds__trailing_analysis__Result0_156);
                        }
#line 488 "trailing_analysis.m"
                      }
#line 482 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
                  break;
#line 320 "trailing_analysis.m"
                case (MR_Integer) 6:
#line 447 "trailing_analysis.m"
                  {
#line 447 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Cond_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 2)));
#line 447 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Then_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 3)));
#line 447 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Else_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 4)));
#line 447 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_118_118;
#line 447 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_120_120;
#line 447 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_121_121;
#line 447 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__Result0_155;
#line 447 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__trailing_analysis__GoalExpr_14, (MR_Integer) 1)));
#line 458 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__CondGoalInfo_98;
#line 459 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis___CondGoalExpr_97;
#line 460 "trailing_analysis.m"
                    MR_Word transform_hlds__trailing_analysis__V_123_123;

#line 448 "trailing_analysis.m"
                    {
#line 448 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_121_121, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Else_96));
#line 448 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "trailing_analysis.m"
                    }
#line 448 "trailing_analysis.m"
                    {
#line 448 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_120_120, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Then_95));
#line 448 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_120_120, 1) = ((MR_Box) (transform_hlds__trailing_analysis__V_121_121));
#line 448 "trailing_analysis.m"
                    }
#line 448 "trailing_analysis.m"
                    {
#line 448 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_118_118, 0) = ((MR_Box) (transform_hlds__trailing_analysis__Cond_94));
#line 448 "trailing_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_118_118, 1) = ((MR_Box) (transform_hlds__trailing_analysis__V_120_120));
#line 448 "trailing_analysis.m"
                    }
#line 448 "trailing_analysis.m"
                    {
#line 448 "trailing_analysis.m"
                      transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__VarTypes_9, transform_hlds__trailing_analysis__V_118_118, &transform_hlds__trailing_analysis__Result0_155, transform_hlds__trailing_analysis__MaybeAnalysisStatus_12, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_109, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_110);
                    }
#line 458 "trailing_analysis.m"
                    (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__Result0_155 == (MR_Integer) 1);
#line 458 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 458 "trailing_analysis.m"
                      {
#line 459 "trailing_analysis.m"
                        transform_hlds__trailing_analysis___CondGoalExpr_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Cond_94, (MR_Integer) 0)));
#line 459 "trailing_analysis.m"
                        transform_hlds__trailing_analysis__CondGoalInfo_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__Cond_94, (MR_Integer) 1)));
#line 460 "trailing_analysis.m"
                        {
#line 460 "trailing_analysis.m"
                          transform_hlds__trailing_analysis__V_123_123 = hlds__code_model__goal_info_get_code_model_1_f_0(transform_hlds__trailing_analysis__CondGoalInfo_98);
                        }
#line 460 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_123_123 == (MR_Integer) 2);
#line 460 "trailing_analysis.m"
                        (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded);
#line 458 "trailing_analysis.m"
                      }
#line 463 "trailing_analysis.m"
                    if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
#line 462 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 1;
#line 463 "trailing_analysis.m"
                    else
#line 475 "trailing_analysis.m"
                      *transform_hlds__trailing_analysis__Result_11 = (MR_Integer) 0;
#line 447 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
                  break;
#line 320 "trailing_analysis.m"
                case (MR_Integer) 7:
#line 503 "trailing_analysis.m"
                  {
#line 504 "trailing_analysis.m"
                    {
#line 504 "trailing_analysis.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "shorthand");
#line 504 "trailing_analysis.m"
                      return;
                    }
#line 503 "trailing_analysis.m"
                  }
#line 320 "trailing_analysis.m"
                  break;
#line 320 "trailing_analysis.m"
              }
#line 320 "trailing_analysis.m"
              break;
#line 320 "trailing_analysis.m"
          }
#line 304 "trailing_analysis.m"
        }
#line 304 "trailing_analysis.m"
        break;
#line 304 "trailing_analysis.m"
      }
#line 299 "trailing_analysis.m"
  }
#line 299 "trailing_analysis.m"
}

#line 282 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
#line 282 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_7,
#line 282 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_8,
#line 282 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17,
#line 282 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18,
#line 282 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19,
#line 282 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20)
#line 282 "trailing_analysis.m"
{
#line 286 "trailing_analysis.m"
  {
#line 286 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 286 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_12;
#line 286 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Body_13;
#line 286 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__VarTypes_14;
#line 286 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Result_15;
#line 286 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatus_16;
#line 286 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_22_22;
#line 287 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_11_11;

#line 287 "trailing_analysis.m"
    {
#line 287 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__trailing_analysis__PPId_8, &transform_hlds__trailing_analysis__V_11_11, &transform_hlds__trailing_analysis__ProcInfo_12);
    }
#line 288 "trailing_analysis.m"
    {
#line 288 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__Body_13);
    }
#line 289 "trailing_analysis.m"
    {
#line 289 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__trailing_analysis__ProcInfo_12, &transform_hlds__trailing_analysis__VarTypes_14);
    }
#line 290 "trailing_analysis.m"
    {
#line 290 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(transform_hlds__trailing_analysis__SCC_7, transform_hlds__trailing_analysis__VarTypes_14, transform_hlds__trailing_analysis__Body_13, &transform_hlds__trailing_analysis__Result_15, &transform_hlds__trailing_analysis__MaybeAnalysisStatus_16, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_20);
    }
#line 292 "trailing_analysis.m"
    {
#line 292 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 292 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 0) = ((MR_Box) (transform_hlds__trailing_analysis__PPId_8));
#line 292 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 1) = ((MR_Box) (transform_hlds__trailing_analysis__Result_15));
#line 292 "trailing_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_22_22, 2) = ((MR_Box) (transform_hlds__trailing_analysis__MaybeAnalysisStatus_16));
#line 292 "trailing_analysis.m"
    }
#line 292 "trailing_analysis.m"
    {
#line 292 "trailing_analysis.m"
      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, ((MR_Box) (transform_hlds__trailing_analysis__V_22_22)), transform_hlds__trailing_analysis__STATE_VARIABLE_Results_0_17, transform_hlds__trailing_analysis__STATE_VARIABLE_Results_18);
#line 292 "trailing_analysis.m"
      return;
    }
#line 286 "trailing_analysis.m"
  }
#line 282 "trailing_analysis.m"
}

#line 271 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
#line 271 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcResult_3,
#line 271 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__AnalysisStatus_4)
#line 271 "trailing_analysis.m"
{
#line 275 "trailing_analysis.m"
  {
#line 275 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 275 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 0)));
#line 275 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 1)));

#line 275 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__AnalysisStatus_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcResult_3, (MR_Integer) 2)));
#line 275 "trailing_analysis.m"
  }
#line 271 "trailing_analysis.m"
}

#line 207 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
#line 207 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_5,
#line 207 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__PPId_6,
#line 207 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11,
#line 207 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12)
#line 207 "trailing_analysis.m"
{
#line 210 "trailing_analysis.m"
  {
#line 210 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 210 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__PredInfo0_8;
#line 210 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo0_9;
#line 210 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__ProcInfo_10;
#line 210 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__V_13_13;

#line 211 "trailing_analysis.m"
    {
#line 211 "trailing_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__PPId_6, &transform_hlds__trailing_analysis__PredInfo0_8, &transform_hlds__trailing_analysis__ProcInfo0_9);
    }
#line 212 "trailing_analysis.m"
    {
#line 212 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "trailing_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__trailing_analysis__V_13_13, 0) = ((MR_Box) (transform_hlds__trailing_analysis__ProcTrailingInfo_5));
#line 212 "trailing_analysis.m"
    }
#line 212 "trailing_analysis.m"
    {
#line 212 "trailing_analysis.m"
      hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(transform_hlds__trailing_analysis__V_13_13, transform_hlds__trailing_analysis__ProcInfo0_9, &transform_hlds__trailing_analysis__ProcInfo_10);
    }
#line 213 "trailing_analysis.m"
    {
#line 213 "trailing_analysis.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__trailing_analysis__PPId_6, transform_hlds__trailing_analysis__PredInfo0_8, transform_hlds__trailing_analysis__ProcInfo_10, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_12);
#line 213 "trailing_analysis.m"
      return;
    }
#line 210 "trailing_analysis.m"
  }
#line 207 "trailing_analysis.m"
}

#line 202 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
#line 202 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 202 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 202 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 202 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 202 "trailing_analysis.m"
{
#line 202 "trailing_analysis.m"
  {
#line 202 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 202 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12;

#line 202 "trailing_analysis.m"
    {
#line 202 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12);
    }
#line 202 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv12_STATE_VARIABLE_ModuleInfo_12));
#line 202 "trailing_analysis.m"
  }
#line 202 "trailing_analysis.m"
}

#line 198 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
#line 198 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 198 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 198 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 198 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 198 "trailing_analysis.m"
{
#line 198 "trailing_analysis.m"
  {
#line 198 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 198 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12;

#line 198 "trailing_analysis.m"
    {
#line 198 "trailing_analysis.m"
      transform_hlds__trailing_analysis__set_trailing_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12);
    }
#line 198 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv10_STATE_VARIABLE_ModuleInfo_12));
#line 198 "trailing_analysis.m"
  }
#line 198 "trailing_analysis.m"
}

#line 268 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
#line 268 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 268 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 268 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 268 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 268 "trailing_analysis.m"
{
#line 268 "trailing_analysis.m"
  {
#line 268 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 268 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv8_MaybeStatus_6;

#line 268 "trailing_analysis.m"
    {
#line 268 "trailing_analysis.m"
      transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv8_MaybeStatus_6);
    }
#line 268 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv8_MaybeStatus_6));
#line 268 "trailing_analysis.m"
  }
#line 268 "trailing_analysis.m"
}

#line 267 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 267 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 267 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_2)
#line 267 "trailing_analysis.m"
{
#line 267 "trailing_analysis.m"
  {
#line 267 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 267 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv7_AnalysisStatus_4;

#line 267 "trailing_analysis.m"
    {
#line 267 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), &transform_hlds__trailing_analysis__conv7_AnalysisStatus_4);
    }
#line 267 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__trailing_analysis__conv7_AnalysisStatus_4));
#line 267 "trailing_analysis.m"
  }
#line 267 "trailing_analysis.m"
}

#line 221 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
#line 221 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 221 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 221 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 221 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3,
#line 221 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_4,
#line 221 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_5)
#line 221 "trailing_analysis.m"
{
#line 221 "trailing_analysis.m"
  {
#line 221 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 221 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18;
#line 221 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 221 "trailing_analysis.m"
    {
#line 221 "trailing_analysis.m"
      transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18, ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_4), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 221 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_Results_18));
#line 221 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 221 "trailing_analysis.m"
  }
#line 221 "trailing_analysis.m"
}

#line 236 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
#line 236 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 236 "trailing_analysis.m"
{
#line 236 "trailing_analysis.m"
  {
#line 236 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 236 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0, 1);
#line 236 "trailing_analysis.m"
  }
#line 236 "trailing_analysis.m"
}

#line 237 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
#line 237 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 237 "trailing_analysis.m"
{
#line 237 "trailing_analysis.m"
  {
#line 237 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 237 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58);
#line 237 "trailing_analysis.m"
    {
#line 237 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(transform_hlds__trailing_analysis__env_ptr);
#line 237 "trailing_analysis.m"
      return;
    }
#line 237 "trailing_analysis.m"
  }
#line 237 "trailing_analysis.m"
}

#line 236 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
#line 236 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 236 "trailing_analysis.m"
{
#line 236 "trailing_analysis.m"
  {
#line 236 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 236 "trailing_analysis.m"
    {
#line 239 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 1)));
#line 239 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 0)));
#line 239 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 2)));

#line 239 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = (transform_hlds__trailing_analysis__V_61_61 == (MR_Integer) 1);
#line 238 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 238 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 238 "trailing_analysis.m"
        {
#line 238 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(transform_hlds__trailing_analysis__env_ptr);
#line 238 "trailing_analysis.m"
          return;
        }
#line 236 "trailing_analysis.m"
    }
#line 236 "trailing_analysis.m"
  }
#line 236 "trailing_analysis.m"
}

#line 236 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
#line 236 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 236 "trailing_analysis.m"
{
#line 236 "trailing_analysis.m"
  {
#line 236 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 236 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0) == 0)
#line 236 "trailing_analysis.m"
      {
#line 236 "trailing_analysis.m"
        {
#line 237 "trailing_analysis.m"
          {
#line 237 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4, transform_hlds__trailing_analysis__env_ptr);
          }
#line 236 "trailing_analysis.m"
        }
#line 236 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 236 "trailing_analysis.m"
      }
#line 236 "trailing_analysis.m"
    else
#line 236 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 236 "trailing_analysis.m"
  }
#line 236 "trailing_analysis.m"
}

#line 244 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
#line 244 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 244 "trailing_analysis.m"
{
#line 244 "trailing_analysis.m"
  {
#line 244 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 244 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1, 1);
#line 244 "trailing_analysis.m"
  }
#line 244 "trailing_analysis.m"
}

#line 245 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
#line 245 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 245 "trailing_analysis.m"
{
#line 245 "trailing_analysis.m"
  {
#line 245 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 245 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59);
#line 245 "trailing_analysis.m"
    {
#line 245 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(transform_hlds__trailing_analysis__env_ptr);
#line 245 "trailing_analysis.m"
      return;
    }
#line 245 "trailing_analysis.m"
  }
#line 245 "trailing_analysis.m"
}

#line 244 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
#line 244 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 244 "trailing_analysis.m"
{
#line 244 "trailing_analysis.m"
  {
#line 244 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 244 "trailing_analysis.m"
    {
#line 247 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 0)));
#line 247 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_68_68;

#line 247 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 1)));
#line 247 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 2)));
#line 247 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_62_62 == (MR_Integer) 0);
#line 247 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 247 "trailing_analysis.m"
        {
#line 247 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(transform_hlds__trailing_analysis__env_ptr);
#line 247 "trailing_analysis.m"
          return;
        }
#line 244 "trailing_analysis.m"
    }
#line 244 "trailing_analysis.m"
  }
#line 244 "trailing_analysis.m"
}

#line 244 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
#line 244 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 244 "trailing_analysis.m"
{
#line 244 "trailing_analysis.m"
  {
#line 244 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 244 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1) == 0)
#line 244 "trailing_analysis.m"
      {
#line 244 "trailing_analysis.m"
        {
#line 245 "trailing_analysis.m"
          {
#line 245 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8, transform_hlds__trailing_analysis__env_ptr);
          }
#line 244 "trailing_analysis.m"
        }
#line 244 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 244 "trailing_analysis.m"
      }
#line 244 "trailing_analysis.m"
    else
#line 244 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 244 "trailing_analysis.m"
  }
#line 244 "trailing_analysis.m"
}

#line 250 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
#line 250 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 250 "trailing_analysis.m"
{
#line 250 "trailing_analysis.m"
  {
#line 250 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 250 "trailing_analysis.m"
    MR_builtin_longjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2, 1);
#line 250 "trailing_analysis.m"
  }
#line 250 "trailing_analysis.m"
}

#line 250 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
#line 250 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 250 "trailing_analysis.m"
{
#line 250 "trailing_analysis.m"
  {
#line 250 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 250 "trailing_analysis.m"
    (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64 = ((MR_Word) (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64);
#line 250 "trailing_analysis.m"
    {
#line 250 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(transform_hlds__trailing_analysis__env_ptr);
#line 250 "trailing_analysis.m"
      return;
    }
#line 250 "trailing_analysis.m"
  }
#line 250 "trailing_analysis.m"
}

#line 250 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
#line 250 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 250 "trailing_analysis.m"
{
#line 250 "trailing_analysis.m"
  {
#line 250 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 250 "trailing_analysis.m"
    {
#line 251 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 0)));
#line 251 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_70_70;

#line 251 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 1)));
#line 251 "trailing_analysis.m"
      transform_hlds__trailing_analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 2)));
#line 251 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__V_63_63 == (MR_Integer) 2);
#line 251 "trailing_analysis.m"
      if ((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 251 "trailing_analysis.m"
        {
#line 251 "trailing_analysis.m"
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(transform_hlds__trailing_analysis__env_ptr);
#line 251 "trailing_analysis.m"
          return;
        }
#line 250 "trailing_analysis.m"
    }
#line 250 "trailing_analysis.m"
  }
#line 250 "trailing_analysis.m"
}

#line 250 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
#line 250 "trailing_analysis.m"
  void * transform_hlds__trailing_analysis__env_ptr_arg)
#line 250 "trailing_analysis.m"
{
#line 250 "trailing_analysis.m"
  {
#line 250 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * transform_hlds__trailing_analysis__env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) transform_hlds__trailing_analysis__env_ptr_arg;

#line 250 "trailing_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2) == 0)
#line 250 "trailing_analysis.m"
      {
#line 250 "trailing_analysis.m"
        {
#line 250 "trailing_analysis.m"
          {
#line 250 "trailing_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64, (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12, transform_hlds__trailing_analysis__env_ptr);
          }
#line 250 "trailing_analysis.m"
        }
#line 250 "trailing_analysis.m"
        (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 250 "trailing_analysis.m"
      }
#line 250 "trailing_analysis.m"
    else
#line 250 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 250 "trailing_analysis.m"
  }
#line 250 "trailing_analysis.m"
}

#line 177 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
#line 177 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Debug_6,
#line 177 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__Pass1Only_7,
#line 177 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__SCC_8,
#line 177 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 177 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16)
#line 177 "trailing_analysis.m"
{
#line 177 "trailing_analysis.m"
  {
#line 177 "trailing_analysis.m"
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s transform_hlds__trailing_analysis__env;

#line 180 "trailing_analysis.m"
    {
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_27_27;
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TypeCtorInfo_28_28;
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__TrailingStatus_11;
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatus_12;
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__ProcTrailingInfo_14;
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17;
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_20_20;
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21;
#line 180 "trailing_analysis.m"
      MR_Word transform_hlds__trailing_analysis__V_37_37;
#line 221 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv3_ProcResults_10;
#line 221 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17;
#line 198 "trailing_analysis.m"
      MR_Box transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21;

#line 221 "trailing_analysis.m"
      {
#line 221 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 221 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[0]));
#line 221 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1));
#line 221 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_37_37, 3) = ((MR_Box) (transform_hlds__trailing_analysis__SCC_8));
#line 221 "trailing_analysis.m"
      }
#line 221 "trailing_analysis.m"
      {
#line 221 "trailing_analysis.m"
        mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[1], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_37_37, transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__trailing_analysis__conv3_ProcResults_10, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_15)), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17);
      }
#line 221 "trailing_analysis.m"
      (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 = ((MR_Word) transform_hlds__trailing_analysis__conv3_ProcResults_10);
#line 221 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17 = ((MR_Word) transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_ModuleInfo_17_17);
#line 229 "trailing_analysis.m"
      if (((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "trailing_analysis.m"
        {
#line 230 "trailing_analysis.m"
          {
#line 230 "trailing_analysis.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_combine_individual_proc_results\'/3", (MR_String) "empty SCC");
#line 230 "trailing_analysis.m"
            return;
          }
#line 229 "trailing_analysis.m"
        }
#line 229 "trailing_analysis.m"
      else
#line 232 "trailing_analysis.m"
        {
#line 232 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__TypeInfo_13_84;
#line 232 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76;
#line 268 "trailing_analysis.m"
          MR_Box transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12;

#line 236 "trailing_analysis.m"
          {
#line 236 "trailing_analysis.m"
            transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(&transform_hlds__trailing_analysis__env);
          }
#line 236 "trailing_analysis.m"
          (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 243 "trailing_analysis.m"
          if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 242 "trailing_analysis.m"
            transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 1;
#line 243 "trailing_analysis.m"
          else
#line 255 "trailing_analysis.m"
            {
#line 244 "trailing_analysis.m"
              {
#line 244 "trailing_analysis.m"
                transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(&transform_hlds__trailing_analysis__env);
              }
#line 244 "trailing_analysis.m"
              (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
#line 248 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 250 "trailing_analysis.m"
                {
#line 250 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(&transform_hlds__trailing_analysis__env);
                }
#line 255 "trailing_analysis.m"
              if ((transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
#line 254 "trailing_analysis.m"
                transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 2;
#line 255 "trailing_analysis.m"
              else
#line 257 "trailing_analysis.m"
                transform_hlds__trailing_analysis__TrailingStatus_11 = (MR_Integer) 0;
#line 255 "trailing_analysis.m"
            }
#line 8786 "transform_hlds.trailing_analysis.c"
          transform_hlds__trailing_analysis__TypeInfo_13_84 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
#line 267 "trailing_analysis.m"
          {
#line 267 "trailing_analysis.m"
            mercury__list__map_3_p_0((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, transform_hlds__trailing_analysis__TypeInfo_13_84, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[2], (transform_hlds__trailing_analysis__env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, &transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76);
          }
#line 268 "trailing_analysis.m"
          {
#line 268 "trailing_analysis.m"
            mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeInfo_13_84, transform_hlds__trailing_analysis__TypeInfo_13_84, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[3], transform_hlds__trailing_analysis__MaybeAnalysisStatuses_76, ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]))), &transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12);
          }
#line 268 "trailing_analysis.m"
          transform_hlds__trailing_analysis__MaybeAnalysisStatus_12 = ((MR_Word) transform_hlds__trailing_analysis__conv9_MaybeAnalysisStatus_12);
#line 232 "trailing_analysis.m"
        }
#line 193 "trailing_analysis.m"
#line 193 "trailing_analysis.m"
      switch (transform_hlds__trailing_analysis__Debug_6) {
#line 193 "trailing_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 193 "trailing_analysis.m"
        case (MR_Integer) 0:
#line 194 "trailing_analysis.m"
          {
#line 194 "trailing_analysis.m"
          }
#line 193 "trailing_analysis.m"
          break;
#line 193 "trailing_analysis.m"
        case (MR_Integer) 1:
#line 191 "trailing_analysis.m"
          {
#line 191 "trailing_analysis.m"
            transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17, transform_hlds__trailing_analysis__SCC_8, transform_hlds__trailing_analysis__TrailingStatus_11);
          }
#line 193 "trailing_analysis.m"
          break;
#line 193 "trailing_analysis.m"
      }
#line 197 "trailing_analysis.m"
      {
#line 197 "trailing_analysis.m"
        transform_hlds__trailing_analysis__ProcTrailingInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 197 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_14, 0) = ((MR_Box) (transform_hlds__trailing_analysis__TrailingStatus_11));
#line 197 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__ProcTrailingInfo_14, 1) = ((MR_Box) (transform_hlds__trailing_analysis__MaybeAnalysisStatus_12));
#line 197 "trailing_analysis.m"
      }
#line 198 "trailing_analysis.m"
      {
#line 198 "trailing_analysis.m"
        transform_hlds__trailing_analysis__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 198 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[1]));
#line 198 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16));
#line 198 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 198 "trailing_analysis.m"
        MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_20_20, 3) = ((MR_Box) (transform_hlds__trailing_analysis__ProcTrailingInfo_14));
#line 198 "trailing_analysis.m"
      }
#line 8850 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8852 "transform_hlds.trailing_analysis.c"
      transform_hlds__trailing_analysis__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 198 "trailing_analysis.m"
      {
#line 198 "trailing_analysis.m"
        mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_28_28, transform_hlds__trailing_analysis__V_20_20, transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_17_17)), &transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21);
      }
#line 198 "trailing_analysis.m"
      transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) transform_hlds__trailing_analysis__conv11_STATE_VARIABLE_ModuleInfo_21_21);
#line 203 "trailing_analysis.m"
#line 203 "trailing_analysis.m"
      switch (transform_hlds__trailing_analysis__Pass1Only_7) {
#line 203 "trailing_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 203 "trailing_analysis.m"
        case (MR_Integer) 0:
#line 201 "trailing_analysis.m"
          {
#line 202 "trailing_analysis.m"
            MR_Box transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16;

#line 202 "trailing_analysis.m"
            {
#line 202 "trailing_analysis.m"
              mercury__list__foldl_4_p_0(transform_hlds__trailing_analysis__TypeCtorInfo_27_27, transform_hlds__trailing_analysis__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[4], transform_hlds__trailing_analysis__SCC_8, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21)), &transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16);
            }
#line 202 "trailing_analysis.m"
            *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) transform_hlds__trailing_analysis__conv13_STATE_VARIABLE_ModuleInfo_16);
#line 201 "trailing_analysis.m"
          }
#line 203 "trailing_analysis.m"
          break;
#line 203 "trailing_analysis.m"
        case (MR_Integer) 1:
#line 204 "trailing_analysis.m"
          *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_16 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_21_21;
#line 203 "trailing_analysis.m"
          break;
#line 203 "trailing_analysis.m"
      }
#line 180 "trailing_analysis.m"
    }
#line 177 "trailing_analysis.m"
  }
#line 177 "trailing_analysis.m"
}

#line 155 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2(
#line 155 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 155 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 155 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 155 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 155 "trailing_analysis.m"
{
#line 155 "trailing_analysis.m"
  {
#line 155 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 155 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11;

#line 155 "trailing_analysis.m"
    {
#line 155 "trailing_analysis.m"
      transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11);
    }
#line 155 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv2_STATE_VARIABLE_AnalysisInfo_11));
#line 155 "trailing_analysis.m"
  }
#line 155 "trailing_analysis.m"
}

#line 141 "trailing_analysis.m"
static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1(
#line 141 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__closure_arg,
#line 141 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_1,
#line 141 "trailing_analysis.m"
  MR_Box transform_hlds__trailing_analysis__wrapper_arg_2,
#line 141 "trailing_analysis.m"
  MR_Box * transform_hlds__trailing_analysis__wrapper_arg_3)
#line 141 "trailing_analysis.m"
{
#line 141 "trailing_analysis.m"
  {
#line 141 "trailing_analysis.m"
    MR_Box transform_hlds__trailing_analysis__closure = transform_hlds__trailing_analysis__closure_arg;
#line 141 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16;

#line 141 "trailing_analysis.m"
    {
#line 141 "trailing_analysis.m"
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__trailing_analysis__wrapper_arg_2), &transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16);
    }
#line 141 "trailing_analysis.m"
    *transform_hlds__trailing_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__trailing_analysis__conv0_STATE_VARIABLE_ModuleInfo_16));
#line 141 "trailing_analysis.m"
  }
#line 141 "trailing_analysis.m"
}

#line 65 "trailing_analysis.m"
void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0(
#line 65 "trailing_analysis.m"
  MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18,
#line 65 "trailing_analysis.m"
  MR_Word * transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19)
#line 65 "trailing_analysis.m"
{
#line 123 "trailing_analysis.m"
  {
#line 123 "trailing_analysis.m"
    MR_bool transform_hlds__trailing_analysis__succeeded;
#line 123 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__Globals_4;
#line 123 "trailing_analysis.m"
    MR_Word transform_hlds__trailing_analysis__UseTrail_5;

#line 124 "trailing_analysis.m"
    {
#line 124 "trailing_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__trailing_analysis__Globals_4);
    }
#line 125 "trailing_analysis.m"
    {
#line 125 "trailing_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 215, &transform_hlds__trailing_analysis__UseTrail_5);
    }
#line 161 "trailing_analysis.m"
#line 161 "trailing_analysis.m"
    switch (transform_hlds__trailing_analysis__UseTrail_5) {
#line 161 "trailing_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 161 "trailing_analysis.m"
      case (MR_Integer) 0:
#line 162 "trailing_analysis.m"
        *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18;
#line 161 "trailing_analysis.m"
        break;
#line 161 "trailing_analysis.m"
      case (MR_Integer) 1:
#line 128 "trailing_analysis.m"
        {
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeOptInt_6;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeTransOptInt_7;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__MakeAnalysisReg_8;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Pass1Only_9;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__DepInfo_10;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__SCCs_11;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__Debug_12;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcAnalysisKinds0_13;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__ProcAnalysisKinds_14;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_24_24;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__V_27_27;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28;
#line 128 "trailing_analysis.m"
          MR_Word transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30;
#line 141 "trailing_analysis.m"
          MR_Box transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28;

#line 129 "trailing_analysis.m"
          {
#line 129 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 86, &transform_hlds__trailing_analysis__MakeOptInt_6);
          }
#line 131 "trailing_analysis.m"
          {
#line 131 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 87, &transform_hlds__trailing_analysis__MakeTransOptInt_7);
          }
#line 133 "trailing_analysis.m"
          {
#line 133 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 88, &transform_hlds__trailing_analysis__MakeAnalysisReg_8);
          }
#line 135 "trailing_analysis.m"
          {
#line 135 "trailing_analysis.m"
            transform_hlds__trailing_analysis__V_24_24 = mercury__bool__or_2_f_0(transform_hlds__trailing_analysis__MakeOptInt_6, transform_hlds__trailing_analysis__MakeTransOptInt_7);
          }
#line 136 "trailing_analysis.m"
          {
#line 136 "trailing_analysis.m"
            transform_hlds__trailing_analysis__Pass1Only_9 = mercury__bool__or_2_f_0(transform_hlds__trailing_analysis__V_24_24, transform_hlds__trailing_analysis__MakeAnalysisReg_8);
          }
#line 137 "trailing_analysis.m"
          {
#line 137 "trailing_analysis.m"
            transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25);
          }
#line 138 "trailing_analysis.m"
          {
#line 138 "trailing_analysis.m"
            hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25, &transform_hlds__trailing_analysis__DepInfo_10);
          }
#line 139 "trailing_analysis.m"
          {
#line 139 "trailing_analysis.m"
            hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__trailing_analysis__DepInfo_10, &transform_hlds__trailing_analysis__SCCs_11);
          }
#line 140 "trailing_analysis.m"
          {
#line 140 "trailing_analysis.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__trailing_analysis__Globals_4, (MR_Integer) 77, &transform_hlds__trailing_analysis__Debug_12);
          }
#line 141 "trailing_analysis.m"
          {
#line 141 "trailing_analysis.m"
            transform_hlds__trailing_analysis__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 141 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_5[0]));
#line 141 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1));
#line 141 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 141 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 3) = ((MR_Box) (transform_hlds__trailing_analysis__Debug_12));
#line 141 "trailing_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_27_27, 4) = ((MR_Box) (transform_hlds__trailing_analysis__Pass1Only_9));
#line 141 "trailing_analysis.m"
          }
#line 141 "trailing_analysis.m"
          {
#line 141 "trailing_analysis.m"
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__trailing_analysis__V_27_27, transform_hlds__trailing_analysis__SCCs_11, ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_25_25)), &transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28);
          }
#line 141 "trailing_analysis.m"
          transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) transform_hlds__trailing_analysis__conv1_STATE_VARIABLE_ModuleInfo_28_28);
#line 143 "trailing_analysis.m"
          {
#line 143 "trailing_analysis.m"
            hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__trailing_analysis__ProcAnalysisKinds0_13);
          }
#line 144 "trailing_analysis.m"
          {
#line 144 "trailing_analysis.m"
            mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 1)), transform_hlds__trailing_analysis__ProcAnalysisKinds0_13, &transform_hlds__trailing_analysis__ProcAnalysisKinds_14);
          }
#line 145 "trailing_analysis.m"
          {
#line 145 "trailing_analysis.m"
            hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(transform_hlds__trailing_analysis__ProcAnalysisKinds_14, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30);
          }
#line 158 "trailing_analysis.m"
#line 158 "trailing_analysis.m"
          switch (transform_hlds__trailing_analysis__MakeAnalysisReg_8) {
#line 158 "trailing_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 158 "trailing_analysis.m"
            case (MR_Integer) 0:
#line 159 "trailing_analysis.m"
              *transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30;
#line 158 "trailing_analysis.m"
              break;
#line 158 "trailing_analysis.m"
            case (MR_Integer) 1:
#line 152 "trailing_analysis.m"
              {
#line 152 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__AnalysisInfo0_15;
#line 152 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__PredIds_16;
#line 152 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__AnalysisInfo_17;
#line 152 "trailing_analysis.m"
                MR_Word transform_hlds__trailing_analysis__V_31_31;
#line 155 "trailing_analysis.m"
                MR_Box transform_hlds__trailing_analysis__conv3_AnalysisInfo_17;

#line 153 "trailing_analysis.m"
                {
#line 153 "trailing_analysis.m"
                  hlds__hlds_module__module_info_get_analysis_info_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__trailing_analysis__AnalysisInfo0_15);
                }
#line 154 "trailing_analysis.m"
                {
#line 154 "trailing_analysis.m"
                  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__trailing_analysis__PredIds_16);
                }
#line 155 "trailing_analysis.m"
                {
#line 155 "trailing_analysis.m"
                  transform_hlds__trailing_analysis__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 155 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[0]));
#line 155 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2));
#line 155 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 155 "trailing_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__trailing_analysis__V_31_31, 3) = ((MR_Box) (transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30));
#line 155 "trailing_analysis.m"
                }
#line 155 "trailing_analysis.m"
                {
#line 155 "trailing_analysis.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, transform_hlds__trailing_analysis__V_31_31, transform_hlds__trailing_analysis__PredIds_16, ((MR_Box) (transform_hlds__trailing_analysis__AnalysisInfo0_15)), &transform_hlds__trailing_analysis__conv3_AnalysisInfo_17);
                }
#line 155 "trailing_analysis.m"
                transform_hlds__trailing_analysis__AnalysisInfo_17 = ((MR_Word) transform_hlds__trailing_analysis__conv3_AnalysisInfo_17);
#line 157 "trailing_analysis.m"
                {
#line 157 "trailing_analysis.m"
                  hlds__hlds_module__module_info_set_analysis_info_3_p_0(transform_hlds__trailing_analysis__AnalysisInfo_17, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__trailing_analysis__STATE_VARIABLE_ModuleInfo_19);
#line 157 "trailing_analysis.m"
                  return;
                }
#line 152 "trailing_analysis.m"
              }
#line 158 "trailing_analysis.m"
              break;
#line 158 "trailing_analysis.m"
          }
#line 128 "trailing_analysis.m"
        }
#line 161 "trailing_analysis.m"
        break;
#line 161 "trailing_analysis.m"
    }
#line 123 "trailing_analysis.m"
  }
#line 65 "trailing_analysis.m"
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
