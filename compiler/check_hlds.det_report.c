/*
** Automatically generated from `det_report.m'
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


/* :- module check_hlds.det_report. */
/* :- implementation. */

/*
INIT mercury__check_hlds__det_report__init
ENDINIT
*/

#include "check_hlds.det_report.mih"


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
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 401 "det_report.m"
struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s {
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12;
#line 406 "det_report.m"
  MR_bool check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 415 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_62_62;
#line 415 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18;
#line 425 "det_report.m"
  jmp_buf check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 425 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20;
#line 424 "det_report.m"
  MR_Box check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20;
#line 401 "det_report.m"
};

#line 352 "det_report.m"
struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s {
#line 352 "det_report.m"
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3;
#line 352 "det_report.m"
  MR_Word * check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4;
#line 352 "det_report.m"
  MR_Cont check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont;
#line 352 "det_report.m"
  void * check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr;
#line 354 "det_report.m"
  MR_bool check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded;
#line 354 "det_report.m"
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5;
#line 352 "det_report.m"
};

#line 298 "det_report.m"
struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s {
#line 298 "det_report.m"
  MR_Box * check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1;
#line 298 "det_report.m"
  MR_Cont check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont;
#line 298 "det_report.m"
  void * check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr;
#line 298 "det_report.m"
  MR_Word check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4;
#line 298 "det_report.m"
};


#line 194 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 197 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 200 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1];

#line 203 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0;

#line 206 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1;

#line 209 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1];

#line 212 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1];

#line 215 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[2];

#line 218 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2];

#line 221 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2];

#line 224 "check_hlds.det_report.c"
static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_0;

#line 227 "check_hlds.det_report.c"
static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_1;

#line 230 "check_hlds.det_report.c"
static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_2;

#line 233 "check_hlds.det_report.c"
static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_value_ordered_det_comparison_0[3];

#line 236 "check_hlds.det_report.c"
static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_name_ordered_det_comparison_0[3];

#line 239 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_det_comparison_0[3];

#line 242 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2];

#line 245 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0;

#line 248 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1];

#line 251 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1];

#line 254 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1];

#line 257 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1];

#line 260 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 263 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1];

#line 266 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0;

#line 269 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1;

#line 272 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2];

#line 275 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2;

#line 278 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2];

#line 281 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3;

#line 284 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2];

#line 287 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4;

#line 290 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1];

#line 293 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5;

#line 296 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6;

#line 299 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2];

#line 302 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1];

#line 305 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1];

#line 308 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3];

#line 311 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0[4];

#line 314 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7];

#line 317 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7];

#line 320 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 323 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 326 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2];

#line 329 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0;

#line 332 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1;

#line 335 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1];

#line 338 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1];

#line 341 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0[2];

#line 344 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2];

#line 347 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2];

#line 350 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0;

#line 353 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3];

#line 356 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0;

#line 359 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1];

#line 362 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1];

#line 365 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1];

#line 368 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1];

#line 371 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 374 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 377 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2];

#line 380 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0;

#line 383 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1];

#line 386 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1];

#line 389 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1];

#line 392 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1];

#line 395 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
#line 398 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 400 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 403 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
#line 406 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 408 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 410 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 413 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____det_comparison_0_0_10001(
#line 416 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 418 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 421 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____det_comparison_0_0_10001(
#line 424 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 426 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 428 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 431 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
#line 434 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 436 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 439 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
#line 442 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 444 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 446 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 449 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
#line 452 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 454 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 457 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
#line 460 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 462 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 464 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 467 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
#line 470 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 472 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 475 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
#line 478 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 480 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 482 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 485 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
#line 488 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 490 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 493 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
#line 496 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 498 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 500 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 503 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
#line 506 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 508 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 511 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
#line 514 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 516 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 518 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 521 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
#line 524 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 526 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 529 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
#line 532 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 534 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 536 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 1451 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_First_0_26,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__Last_10,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__UnifyContext_12,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_13,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__LHS_14,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__RHS_15,
#line 1451 "det_report.m"
  MR_Word * check_hlds__det_report__AllPieces_16);

#line 425 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(
#line 425 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 424 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3(
#line 424 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 425 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(
#line 425 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 425 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(
#line 425 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 401 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_10,
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_11,
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_12,
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_27,
#line 401 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_28);

#line 1359 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
#line 1359 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3);

#line 1359 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2);

#line 1616 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
#line 1616 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1616 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_7,
#line 1616 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_8);

#line 1517 "det_report.m"
static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
#line 1517 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_5,
#line 1517 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_6,
#line 1517 "det_report.m"
  MR_Word check_hlds__det_report__FailingContext_7);

#line 1391 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
#line 1391 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 1391 "det_report.m"
  MR_Word check_hlds__det_report__CallUnifyContext_9,
#line 1391 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_10,
#line 1391 "det_report.m"
  MR_Word check_hlds__det_report__PredId_11,
#line 1391 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_12,
#line 1391 "det_report.m"
  MR_Word * check_hlds__det_report__InitMsgs_13,
#line 1391 "det_report.m"
  MR_Word * check_hlds__det_report__StartingPieces_14);

#line 1383 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
#line 1383 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_4,
#line 1383 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2);

#line 1372 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
#line 1372 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1372 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);

#line 1362 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
#line 1362 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_1,
#line 1362 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1362 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__3_3);

#line 1312 "det_report.m"
static void MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_2_p_0(
#line 1312 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1312 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__2_2);

#line 1302 "det_report.m"
static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
#line 1302 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1302 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2,
#line 1302 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3);

#line 1289 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_uncovered_consids_4_p_0(
#line 1289 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1289 "det_report.m"
  MR_Word check_hlds__det_report__CoveredConsIds_2,
#line 1289 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3,
#line 1289 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4);

#line 1265 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0_1(
#line 1265 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1265 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1265 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2);

#line 1248 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0(
#line 1248 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_7,
#line 1248 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_8,
#line 1248 "det_report.m"
  MR_Word check_hlds__det_report__Var_9,
#line 1248 "det_report.m"
  MR_Word check_hlds__det_report__Cases_10,
#line 1248 "det_report.m"
  MR_String * check_hlds__det_report__VarStr_11,
#line 1248 "det_report.m"
  MR_Word * check_hlds__det_report__MaybeMissingPieces_12);

#line 1237 "det_report.m"
static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
#line 1237 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1237 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1237 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0_3,
#line 1237 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_InstMap_4);

#line 1222 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_switch_6_p_0(
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 1222 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6);

#line 1214 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_4_p_0(
#line 1214 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1214 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1214 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1214 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4);

#line 1205 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_4_p_0(
#line 1205 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1205 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1205 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1205 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4);

#line 1082 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_6_p_0(
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__Reason_7,
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__SubGoal_8,
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_9,
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58,
#line 1082 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_59);

#line 1017 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_4_p_0(
#line 1017 "det_report.m"
  MR_Word check_hlds__det_report__Goal_5,
#line 1017 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_6,
#line 1017 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75,
#line 1017 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_76);

#line 997 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_2,
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 997 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
#line 997 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__7_7);

#line 992 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
#line 992 "det_report.m"
  MR_Word check_hlds__det_report__ConsId_3,
#line 992 "det_report.m"
  MR_Word * check_hlds__det_report__Match_4);

#line 954 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
#line 954 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 954 "det_report.m"
  MR_Word check_hlds__det_report__SwitchVarSynonyms_2,
#line 954 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 954 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 954 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__5_5,
#line 954 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__6_6);

#line 900 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
#line 900 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 900 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 900 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2);

#line 893 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
#line 893 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 893 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2,
#line 893 "det_report.m"
  MR_Word check_hlds__det_report__MainConsId_3,
#line 893 "det_report.m"
  MR_Word check_hlds__det_report__OtherConsIds_4,
#line 893 "det_report.m"
  MR_Word * check_hlds__det_report__MainMatch_5,
#line 893 "det_report.m"
  MR_Word * check_hlds__det_report__OtherMatches_6);

#line 859 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_4,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 859 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8,
#line 859 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__9_9);

#line 818 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
#line 818 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7,
#line 818 "det_report.m"
  MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8,
#line 818 "det_report.m"
  MR_Integer * check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9,
#line 818 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__10_10);

#line 751 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
#line 751 "det_report.m"
  MR_Word check_hlds__det_report__Desired_6,
#line 751 "det_report.m"
  MR_Word check_hlds__det_report__Actual_7,
#line 751 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 751 "det_report.m"
  MR_Word check_hlds__det_report__StartingPieces_9,
#line 751 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_10);

#line 580 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__GoalExpr_10,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__GoalInfo_11,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_12,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__Desired_13,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__Actual_14,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_15,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109,
#line 580 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_110,
#line 580 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_17);

#line 564 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_9,
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__Desired_10,
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_11,
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_17,
#line 564 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_18,
#line 564 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_13);

#line 490 "det_report.m"
static void MR_CALL 
check_hlds__det_report__report_determinism_problem_7_p_0(
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 490 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_9,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_10,
#line 490 "det_report.m"
  MR_String check_hlds__det_report__Message_11,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__DeclaredDetism_12,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__InferredDetism_13,
#line 490 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_14);

#line 354 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
#line 354 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 352 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
#line 352 "det_report.m"
  MR_Word check_hlds__det_report__EvalMethod_3,
#line 352 "det_report.m"
  MR_Word * check_hlds__det_report__Detism_4,
#line 352 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 352 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr);

#line 334 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
#line 334 "det_report.m"
  MR_Word check_hlds__det_report__DetismDecl_3);

#line 314 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_8,
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 314 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_21,
#line 314 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_22);

#line 299 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_3(
#line 299 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 299 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);

#line 298 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_1(
#line 298 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 298 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_2(
#line 298 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 298 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 298 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 298 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr);

#line 186 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0(
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 186 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45,
#line 186 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46,
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_47,
#line 186 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_48);

#line 1614 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
#line 1614 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1614 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1614 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 1614 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_3);

#line 1515 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
#line 1515 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1515 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[102][2];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[6][1];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_6[3][5];


#line 364 "det_report.m"
/* sealed */ struct check_hlds__det_report__vector_common_type_7_0_s {
#line 364 "det_report.m"
  const MR_Word check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
#line 364 "det_report.m"
};

static /* final */ const struct check_hlds__det_report__vector_common_type_7_0_s check_hlds__det_report_vector_common_7[8];



static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[0])),
    ((MR_Box) (check_hlds__det_report__restore_det_warnings_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_6[1])),
    ((MR_Box) (check_hlds__det_report__check_determinism_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_6[2])),
    ((MR_Box) (check_hlds__det_report__find_switch_var_matches_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[102][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Most likely, this procedure should be a predicate, not a function."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "arguments would break referential transparency.)"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(Allowing functions to have more than one result for the same"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "result should be determined only by the values of its arguments."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "function of its arguments; that is, the value of the function\'s"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In Mercury, a function is supposed to be a true mathematical"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but it is not."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but it does not occur in the sub-goal."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is the subject of a require_complete_switch scope"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: main/2 must be \140det\' or \140cc_multi\'."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Determinism error in lambda expression."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Declared"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "inferred"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "\'."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "higher-order call"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration not allowed for procedure"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The pragma requested is only valid"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for the following"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Negated goal can succeed."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Determinism declaration not satisfied."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Disjunction has multiple clauses with solutions."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "can fail"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "can succeed"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "can succeed more than once"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has unknown determinism problem;"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "desired determinism is"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "while actual determinism is"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the switch on"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but it does not cover"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: variable "))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: required determinism is"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but actual determinism is"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Inside the case"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of the switch on"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Some weird unification(or explicit call to a type-specific unify predicate\?)"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Fail goal can fail."))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Switch on"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is incomplete."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Unification of"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Call to"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid determinism for"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the primary mode of a function cannot be"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_report_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of"))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[32])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[53])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[56])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[19])))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_eval_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
};


static /* final */ const struct check_hlds__det_report__vector_common_type_7_0_s check_hlds__det_report_vector_common_7[8] = {
  /* row 0 */
  {
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_Integer) 5
  },
  /* row 6 */
  {
    (MR_Integer) 6
  },
  /* row 7 */
  {
    (MR_Integer) 7
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



#line 1823 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1831 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1840 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 1845 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0 = {
  (MR_String) "ccuc_unify",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 1860 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1 = {
  (MR_String) "ccuc_switch",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1875 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1
};

#line 1880 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

#line 1885 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1
  }
};

#line 1899 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

#line 1905 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1911 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_cc_unify_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____cc_unify_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____cc_unify_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "cc_unify_context",
  {
    check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0
  },
  {
    check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0
};

#line 1932 "check_hlds.det_report.c"
static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_0 = {
  (MR_String) "tighter",
  (MR_Integer) 0
};

#line 1938 "check_hlds.det_report.c"
static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_1 = {
  (MR_String) "sameas",
  (MR_Integer) 1
};

#line 1944 "check_hlds.det_report.c"
static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_2 = {
  (MR_String) "looser",
  (MR_Integer) 2
};

#line 1950 "check_hlds.det_report.c"
static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_value_ordered_det_comparison_0[3] = {
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_0,
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_1,
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_2
};

#line 1957 "check_hlds.det_report.c"
static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_name_ordered_det_comparison_0[3] = {
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_2,
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_1,
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_det_comparison_0_0
};

#line 1964 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_det_comparison_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1971 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_det_comparison_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_report____Unify____det_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____det_comparison_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "det_comparison",
  {
    check_hlds__det_report__check_hlds__det_report__enum_name_ordered_det_comparison_0
  },
  {
    check_hlds__det_report__check_hlds__det_report__enum_value_ordered_det_comparison_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_det_comparison_0
};

#line 1992 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0
};

#line 1998 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0 = {
  (MR_String) "failing_context",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 2013 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

#line 2018 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0
  }
};

#line 2027 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

#line 2032 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1] = {
  (MR_Integer) 0
};

#line 2037 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____failing_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____failing_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "failing_context",
  {
    check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0
  },
  {
    check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0
};

#line 2058 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2066 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2071 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0 = {
  (MR_String) "incomplete_switch",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0,
  NULL,
  NULL,
  NULL
};

#line 2086 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1 = {
  (MR_String) "fail_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2101 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2107 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2 = {
  (MR_String) "test_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2,
  NULL,
  NULL,
  NULL
};

#line 2122 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 2128 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3 = {
  (MR_String) "deconstruct_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3,
  NULL,
  NULL,
  NULL
};

#line 2143 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2149 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4 = {
  (MR_String) "call_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4,
  NULL,
  NULL,
  NULL
};

#line 2164 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0
};

#line 2169 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5 = {
  (MR_String) "generic_call_goal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5,
  NULL,
  NULL,
  NULL
};

#line 2184 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6 = {
  (MR_String) "negated_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2199 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6
};

#line 2205 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0
};

#line 2210 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

#line 2215 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5
};

#line 2222 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3
  }
};

#line 2246 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

#line 2257 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5
};

#line 2268 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____failing_goal_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____failing_goal_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "failing_goal",
  {
    check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0
  },
  {
    check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0
  },
  (MR_Integer) 7,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0
};

#line 2289 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2298 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0
  }
};

#line 2306 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_options_to_restore_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__det_report____Unify____options_to_restore_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____options_to_restore_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "options_to_restore",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2327 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2333 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0 = {
  (MR_String) "seen_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 2348 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1 = {
  (MR_String) "higher_order_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2363 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1
};

#line 2368 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

#line 2373 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1
  }
};

#line 2387 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

#line 2393 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2399 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____seen_call_id_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____seen_call_id_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "seen_call_id",
  {
    check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0
  },
  {
    check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0
};

#line 2420 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0
  }
};

#line 2428 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0
};

#line 2435 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0 = {
  (MR_String) "switch_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 2450 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

#line 2455 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0
  }
};

#line 2464 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

#line 2469 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1] = {
  (MR_Integer) 0
};

#line 2474 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____switch_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____switch_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "switch_context",
  {
    check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0
  },
  {
    check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0
};

#line 2495 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2503 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2511 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2517 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0 = {
  (MR_String) "switch_match",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0,
  NULL,
  NULL,
  NULL
};

#line 2532 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

#line 2537 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0
  }
};

#line 2546 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

#line 2551 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1] = {
  (MR_Integer) 0
};

#line 2556 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____switch_match_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____switch_match_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "switch_match",
  {
    check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0
  },
  {
    check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0
};

#line 2577 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
#line 2580 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2582 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2584 "check_hlds.det_report.c"
{
#line 2586 "check_hlds.det_report.c"
  {
#line 2588 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2591 "check_hlds.det_report.c"
    {
#line 2593 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____cc_unify_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2596 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2598 "check_hlds.det_report.c"
  }
#line 2600 "check_hlds.det_report.c"
}

#line 2603 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
#line 2606 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2608 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2610 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2612 "check_hlds.det_report.c"
{
#line 2614 "check_hlds.det_report.c"
  {
#line 2616 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2619 "check_hlds.det_report.c"
    {
#line 2621 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____cc_unify_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2624 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2626 "check_hlds.det_report.c"
  }
#line 2628 "check_hlds.det_report.c"
}

#line 2631 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____det_comparison_0_0_10001(
#line 2634 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2636 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2638 "check_hlds.det_report.c"
{
#line 2640 "check_hlds.det_report.c"
  {
#line 2642 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2645 "check_hlds.det_report.c"
    {
#line 2647 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____det_comparison_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2650 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2652 "check_hlds.det_report.c"
  }
#line 2654 "check_hlds.det_report.c"
}

#line 2657 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____det_comparison_0_0_10001(
#line 2660 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2662 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2664 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2666 "check_hlds.det_report.c"
{
#line 2668 "check_hlds.det_report.c"
  {
#line 2670 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2673 "check_hlds.det_report.c"
    {
#line 2675 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____det_comparison_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2678 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2680 "check_hlds.det_report.c"
  }
#line 2682 "check_hlds.det_report.c"
}

#line 2685 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
#line 2688 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2690 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2692 "check_hlds.det_report.c"
{
#line 2694 "check_hlds.det_report.c"
  {
#line 2696 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2699 "check_hlds.det_report.c"
    {
#line 2701 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2704 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2706 "check_hlds.det_report.c"
  }
#line 2708 "check_hlds.det_report.c"
}

#line 2711 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
#line 2714 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2716 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2718 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2720 "check_hlds.det_report.c"
{
#line 2722 "check_hlds.det_report.c"
  {
#line 2724 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2727 "check_hlds.det_report.c"
    {
#line 2729 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____failing_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2732 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2734 "check_hlds.det_report.c"
  }
#line 2736 "check_hlds.det_report.c"
}

#line 2739 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
#line 2742 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2744 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2746 "check_hlds.det_report.c"
{
#line 2748 "check_hlds.det_report.c"
  {
#line 2750 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2753 "check_hlds.det_report.c"
    {
#line 2755 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_goal_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2758 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2760 "check_hlds.det_report.c"
  }
#line 2762 "check_hlds.det_report.c"
}

#line 2765 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
#line 2768 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2770 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2772 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2774 "check_hlds.det_report.c"
{
#line 2776 "check_hlds.det_report.c"
  {
#line 2778 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2781 "check_hlds.det_report.c"
    {
#line 2783 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____failing_goal_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2786 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2788 "check_hlds.det_report.c"
  }
#line 2790 "check_hlds.det_report.c"
}

#line 2793 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
#line 2796 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2798 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2800 "check_hlds.det_report.c"
{
#line 2802 "check_hlds.det_report.c"
  {
#line 2804 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2807 "check_hlds.det_report.c"
    {
#line 2809 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____options_to_restore_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2812 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2814 "check_hlds.det_report.c"
  }
#line 2816 "check_hlds.det_report.c"
}

#line 2819 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
#line 2822 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2824 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2826 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2828 "check_hlds.det_report.c"
{
#line 2830 "check_hlds.det_report.c"
  {
#line 2832 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2835 "check_hlds.det_report.c"
    {
#line 2837 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____options_to_restore_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2840 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2842 "check_hlds.det_report.c"
  }
#line 2844 "check_hlds.det_report.c"
}

#line 2847 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
#line 2850 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2852 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2854 "check_hlds.det_report.c"
{
#line 2856 "check_hlds.det_report.c"
  {
#line 2858 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2861 "check_hlds.det_report.c"
    {
#line 2863 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____seen_call_id_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2866 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2868 "check_hlds.det_report.c"
  }
#line 2870 "check_hlds.det_report.c"
}

#line 2873 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
#line 2876 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2878 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2880 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2882 "check_hlds.det_report.c"
{
#line 2884 "check_hlds.det_report.c"
  {
#line 2886 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2889 "check_hlds.det_report.c"
    {
#line 2891 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____seen_call_id_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2894 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2896 "check_hlds.det_report.c"
  }
#line 2898 "check_hlds.det_report.c"
}

#line 2901 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
#line 2904 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2906 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2908 "check_hlds.det_report.c"
{
#line 2910 "check_hlds.det_report.c"
  {
#line 2912 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2915 "check_hlds.det_report.c"
    {
#line 2917 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____switch_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2920 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2922 "check_hlds.det_report.c"
  }
#line 2924 "check_hlds.det_report.c"
}

#line 2927 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
#line 2930 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2932 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2934 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2936 "check_hlds.det_report.c"
{
#line 2938 "check_hlds.det_report.c"
  {
#line 2940 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2943 "check_hlds.det_report.c"
    {
#line 2945 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____switch_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2948 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2950 "check_hlds.det_report.c"
  }
#line 2952 "check_hlds.det_report.c"
}

#line 2955 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
#line 2958 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2960 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2962 "check_hlds.det_report.c"
{
#line 2964 "check_hlds.det_report.c"
  {
#line 2966 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2969 "check_hlds.det_report.c"
    {
#line 2971 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____switch_match_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2974 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2976 "check_hlds.det_report.c"
  }
#line 2978 "check_hlds.det_report.c"
}

#line 2981 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
#line 2984 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2986 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2988 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2990 "check_hlds.det_report.c"
{
#line 2992 "check_hlds.det_report.c"
  {
#line 2994 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2997 "check_hlds.det_report.c"
    {
#line 2999 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____switch_match_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3002 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3004 "check_hlds.det_report.c"
  }
#line 3006 "check_hlds.det_report.c"
}

#line 1451 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_First_0_26,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__Last_10,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__UnifyContext_12,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_13,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__LHS_14,
#line 1451 "det_report.m"
  MR_Word check_hlds__det_report__RHS_15,
#line 1451 "det_report.m"
  MR_Word * check_hlds__det_report__AllPieces_16)
#line 1451 "det_report.m"
{
#line 1456 "det_report.m"
  {
#line 1456 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1456 "det_report.m"
    MR_Word check_hlds__det_report__UnifyContextPieces_17;
#line 1456 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_18;
#line 1456 "det_report.m"
    MR_Word check_hlds__det_report__VarSet_19;
#line 1456 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_20;
#line 1456 "det_report.m"
    MR_String check_hlds__det_report__StartWords_21;
#line 1456 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_25;
#line 1456 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_First_27_27;
#line 1481 "det_report.m"
    MR_String check_hlds__det_report__V_22_22;

#line 1457 "det_report.m"
    {
#line 1457 "det_report.m"
      hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(check_hlds__det_report__STATE_VARIABLE_First_0_26, &check_hlds__det_report__STATE_VARIABLE_First_27_27, check_hlds__det_report__UnifyContext_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__UnifyContextPieces_17);
    }
#line 1459 "det_report.m"
    {
#line 1459 "det_report.m"
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_13, &check_hlds__det_report__ProcInfo_18);
    }
#line 1460 "det_report.m"
    {
#line 1460 "det_report.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_18, &check_hlds__det_report__VarSet_19);
    }
#line 1461 "det_report.m"
    {
#line 1461 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_13, &check_hlds__det_report__ModuleInfo_20);
    }
#line 1471 "det_report.m"
    if ((check_hlds__det_report__Last_10 == (MR_Integer) 0))
#line 1471 "det_report.m"
      if ((check_hlds__det_report__STATE_VARIABLE_First_27_27 == (MR_Integer) 0))
#line 1466 "det_report.m"
        check_hlds__det_report__StartWords_21 = (MR_String) "Unification";
#line 1471 "det_report.m"
      else
#line 1475 "det_report.m"
        check_hlds__det_report__StartWords_21 = (MR_String) "unification";
#line 1471 "det_report.m"
    else
#line 1471 "det_report.m"
      if ((check_hlds__det_report__STATE_VARIABLE_First_27_27 == (MR_Integer) 0))
#line 1469 "det_report.m"
        check_hlds__det_report__StartWords_21 = (MR_String) "In unification";
#line 1471 "det_report.m"
      else
#line 1478 "det_report.m"
        check_hlds__det_report__StartWords_21 = (MR_String) "in unification";
#line 1481 "det_report.m"
    {
#line 1481 "det_report.m"
      check_hlds__det_report__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_19, check_hlds__det_report__LHS_14, &check_hlds__det_report__V_22_22);
    }
#line 1495 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1488 "det_report.m"
      {
#line 1483 "det_report.m"
        MR_Word check_hlds__det_report__RV_23;
#line 1484 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_68_68;
#line 1484 "det_report.m"
        MR_String check_hlds__det_report__V_24_24;

#line 1483 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__RHS_15)) == (MR_mktag((MR_Integer) 0)));
#line 1483 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1483 "det_report.m"
          {
#line 1483 "det_report.m"
            check_hlds__det_report__RV_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__RHS_15, (MR_Integer) 0)));
#line 3113 "check_hlds.det_report.c"
            check_hlds__det_report__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1484 "det_report.m"
            {
#line 1484 "det_report.m"
              check_hlds__det_report__succeeded = mercury__varset__search_name_3_p_0(check_hlds__det_report__TypeCtorInfo_68_68, check_hlds__det_report__VarSet_19, check_hlds__det_report__RV_23, &check_hlds__det_report__V_24_24);
            }
#line 1484 "det_report.m"
            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1483 "det_report.m"
          }
#line 1488 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1486 "det_report.m"
          {
#line 1486 "det_report.m"
            MR_Word check_hlds__det_report__V_29_29;
#line 1486 "det_report.m"
            MR_Word check_hlds__det_report__V_30_30;
#line 1486 "det_report.m"
            MR_Word check_hlds__det_report__V_33_33;
#line 1486 "det_report.m"
            MR_Word check_hlds__det_report__V_34_34;
#line 1486 "det_report.m"
            MR_String check_hlds__det_report__V_35_35;
#line 1486 "det_report.m"
            MR_String check_hlds__det_report__V_36_36;

#line 1486 "det_report.m"
            {
#line 1486 "det_report.m"
              check_hlds__det_report__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1486 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_29_29, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1486 "det_report.m"
            }
#line 1487 "det_report.m"
            {
#line 1487 "det_report.m"
              check_hlds__det_report__V_36_36 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_19, (MR_Integer) 0, check_hlds__det_report__LHS_14);
            }
#line 1487 "det_report.m"
            {
#line 1487 "det_report.m"
              check_hlds__det_report__V_35_35 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_36_36);
            }
#line 1487 "det_report.m"
            {
#line 1487 "det_report.m"
              check_hlds__det_report__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1487 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_34_34, 1) = ((MR_Box) (check_hlds__det_report__V_35_35));
#line 1487 "det_report.m"
            }
#line 1486 "det_report.m"
            {
#line 1486 "det_report.m"
              check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (check_hlds__det_report__V_34_34));
#line 1486 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1486 "det_report.m"
            }
#line 1486 "det_report.m"
            {
#line 1486 "det_report.m"
              check_hlds__det_report__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[96])));
#line 1486 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 1) = ((MR_Box) (check_hlds__det_report__V_33_33));
#line 1486 "det_report.m"
            }
#line 1486 "det_report.m"
            {
#line 1486 "det_report.m"
              check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (check_hlds__det_report__V_29_29));
#line 1486 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_30_30));
#line 1486 "det_report.m"
            }
#line 1486 "det_report.m"
          }
#line 1488 "det_report.m"
        else
#line 1489 "det_report.m"
          {
#line 1489 "det_report.m"
            MR_Word check_hlds__det_report__V_39_39;
#line 1489 "det_report.m"
            MR_Word check_hlds__det_report__V_40_40;
#line 1489 "det_report.m"
            MR_Word check_hlds__det_report__V_43_43;
#line 1489 "det_report.m"
            MR_Word check_hlds__det_report__V_44_44;
#line 1489 "det_report.m"
            MR_String check_hlds__det_report__V_45_45;
#line 1489 "det_report.m"
            MR_String check_hlds__det_report__V_46_46;
#line 1489 "det_report.m"
            MR_Word check_hlds__det_report__V_48_48;
#line 1489 "det_report.m"
            MR_Word check_hlds__det_report__V_51_51;
#line 1489 "det_report.m"
            MR_Word check_hlds__det_report__V_52_52;
#line 1489 "det_report.m"
            MR_String check_hlds__det_report__V_53_53;
#line 1489 "det_report.m"
            MR_String check_hlds__det_report__V_54_54;

#line 1489 "det_report.m"
            {
#line 1489 "det_report.m"
              check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1489 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1489 "det_report.m"
            }
#line 1490 "det_report.m"
            {
#line 1490 "det_report.m"
              check_hlds__det_report__V_46_46 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_19, (MR_Integer) 0, check_hlds__det_report__LHS_14);
            }
#line 1490 "det_report.m"
            {
#line 1490 "det_report.m"
              check_hlds__det_report__V_45_45 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_46_46);
            }
#line 1490 "det_report.m"
            {
#line 1490 "det_report.m"
              check_hlds__det_report__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1490 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_44_44, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 1490 "det_report.m"
            }
#line 1492 "det_report.m"
            {
#line 1492 "det_report.m"
              check_hlds__det_report__V_54_54 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(check_hlds__det_report__RHS_15, check_hlds__det_report__ModuleInfo_20, check_hlds__det_report__VarSet_19, (MR_Integer) 0);
            }
#line 1492 "det_report.m"
            {
#line 1492 "det_report.m"
              check_hlds__det_report__V_53_53 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_54_54);
            }
#line 1493 "det_report.m"
            {
#line 1493 "det_report.m"
              check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1493 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_53_53));
#line 1493 "det_report.m"
            }
#line 1491 "det_report.m"
            {
#line 1491 "det_report.m"
              check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 1491 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1491 "det_report.m"
            }
#line 1490 "det_report.m"
            {
#line 1490 "det_report.m"
              check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68])));
#line 1490 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (check_hlds__det_report__V_51_51));
#line 1490 "det_report.m"
            }
#line 1489 "det_report.m"
            {
#line 1489 "det_report.m"
              check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (check_hlds__det_report__V_44_44));
#line 1489 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1489 "det_report.m"
            }
#line 1489 "det_report.m"
            {
#line 1489 "det_report.m"
              check_hlds__det_report__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[101])));
#line 1489 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_40_40, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 1489 "det_report.m"
            }
#line 1489 "det_report.m"
            {
#line 1489 "det_report.m"
              check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 1489 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_40_40));
#line 1489 "det_report.m"
            }
#line 1489 "det_report.m"
          }
#line 1488 "det_report.m"
      }
#line 1495 "det_report.m"
    else
#line 1496 "det_report.m"
      {
#line 1496 "det_report.m"
        MR_Word check_hlds__det_report__V_57_57;
#line 1496 "det_report.m"
        MR_Word check_hlds__det_report__V_58_58;
#line 1496 "det_report.m"
        MR_Word check_hlds__det_report__V_61_61;
#line 1496 "det_report.m"
        MR_Word check_hlds__det_report__V_62_62;
#line 1496 "det_report.m"
        MR_String check_hlds__det_report__V_63_63;
#line 1496 "det_report.m"
        MR_String check_hlds__det_report__V_64_64;

#line 1496 "det_report.m"
        {
#line 1496 "det_report.m"
          check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1496 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1496 "det_report.m"
        }
#line 1497 "det_report.m"
        {
#line 1497 "det_report.m"
          check_hlds__det_report__V_64_64 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(check_hlds__det_report__RHS_15, check_hlds__det_report__ModuleInfo_20, check_hlds__det_report__VarSet_19, (MR_Integer) 0);
        }
#line 1497 "det_report.m"
        {
#line 1497 "det_report.m"
          check_hlds__det_report__V_63_63 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_64_64);
        }
#line 1498 "det_report.m"
        {
#line 1498 "det_report.m"
          check_hlds__det_report__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1498 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_62_62, 1) = ((MR_Box) (check_hlds__det_report__V_63_63));
#line 1498 "det_report.m"
        }
#line 1496 "det_report.m"
        {
#line 1496 "det_report.m"
          check_hlds__det_report__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 0) = ((MR_Box) (check_hlds__det_report__V_62_62));
#line 1496 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1496 "det_report.m"
        }
#line 1496 "det_report.m"
        {
#line 1496 "det_report.m"
          check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[96])));
#line 1496 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 1) = ((MR_Box) (check_hlds__det_report__V_61_61));
#line 1496 "det_report.m"
        }
#line 1496 "det_report.m"
        {
#line 1496 "det_report.m"
          check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 1496 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 1496 "det_report.m"
        }
#line 1496 "det_report.m"
      }
#line 1500 "det_report.m"
    {
#line 1500 "det_report.m"
      *check_hlds__det_report__AllPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__UnifyContextPieces_17, check_hlds__det_report__Pieces_25);
    }
#line 1456 "det_report.m"
  }
#line 1451 "det_report.m"
}

#line 425 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(
#line 425 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 425 "det_report.m"
{
#line 425 "det_report.m"
  {
#line 425 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 425 "det_report.m"
    MR_builtin_longjmp((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 425 "det_report.m"
  }
#line 425 "det_report.m"
}

#line 424 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3(
#line 424 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 424 "det_report.m"
{
#line 424 "det_report.m"
  {
#line 424 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 424 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20 = ((MR_Word) (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20);
#line 424 "det_report.m"
    {
#line 424 "det_report.m"
      check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(check_hlds__det_report__env_ptr);
#line 424 "det_report.m"
      return;
    }
#line 424 "det_report.m"
  }
#line 424 "det_report.m"
}

#line 425 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(
#line 425 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 425 "det_report.m"
{
#line 425 "det_report.m"
  {
#line 425 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 426 "det_report.m"
    {
#line 426 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12, (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20);
    }
#line 425 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 425 "det_report.m"
    if ((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 425 "det_report.m"
      {
#line 425 "det_report.m"
        check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(check_hlds__det_report__env_ptr);
#line 425 "det_report.m"
        return;
      }
#line 425 "det_report.m"
  }
#line 425 "det_report.m"
}

#line 425 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(
#line 425 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 425 "det_report.m"
{
#line 425 "det_report.m"
  {
#line 425 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 425 "det_report.m"
    if (MR_builtin_setjmp((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 425 "det_report.m"
      {
#line 424 "det_report.m"
        {
#line 424 "det_report.m"
          mercury__list__member_2_p_1((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_62_62, &(check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20, (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18, check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3, check_hlds__det_report__env_ptr);
        }
#line 425 "det_report.m"
        (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 425 "det_report.m"
      }
#line 425 "det_report.m"
    else
#line 425 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 425 "det_report.m"
  }
#line 425 "det_report.m"
}

#line 401 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_10,
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_11,
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_12,
#line 401 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_27,
#line 401 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_28)
#line 401 "det_report.m"
{
#line 401 "det_report.m"
  {
#line 401 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s check_hlds__det_report__env;

#line 401 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12 = check_hlds__det_report__ModuleInfo_12;
#line 406 "det_report.m"
    {
#line 406 "det_report.m"
      MR_Word check_hlds__det_report__InferredDetism_14;
#line 443 "det_report.m"
      MR_Word check_hlds__det_report__PredArgModes_17;
#line 415 "det_report.m"
      MR_Word check_hlds__det_report__NumSolns_16;
#line 415 "det_report.m"
      MR_Word check_hlds__det_report__V_29_29;
#line 417 "det_report.m"
      MR_Word check_hlds__det_report___CanFail_15;
#line 422 "det_report.m"
      MR_Word check_hlds__det_report___FuncResultMode_19;
#line 422 "det_report.m"
      MR_Box check_hlds__det_report__conv0__FuncResultMode_19;

#line 407 "det_report.m"
      {
#line 407 "det_report.m"
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__InferredDetism_14);
      }
#line 415 "det_report.m"
      {
#line 415 "det_report.m"
        check_hlds__det_report__V_29_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__det_report__PredInfo_10);
      }
#line 415 "det_report.m"
      (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__V_29_29 == (MR_Integer) 1);
#line 415 "det_report.m"
      if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 415 "det_report.m"
        {
#line 417 "det_report.m"
          {
#line 417 "det_report.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__InferredDetism_14, &check_hlds__det_report___CanFail_15, &check_hlds__det_report__NumSolns_16);
          }
#line 418 "det_report.m"
          (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__NumSolns_16 == (MR_Integer) 0);
#line 418 "det_report.m"
          (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 415 "det_report.m"
          if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 415 "det_report.m"
            {
#line 419 "det_report.m"
              (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__NumSolns_16 == (MR_Integer) 1);
#line 419 "det_report.m"
              (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 415 "det_report.m"
              if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 415 "det_report.m"
                {
#line 421 "det_report.m"
                  {
#line 421 "det_report.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__PredArgModes_17);
                  }
#line 3618 "check_hlds.det_report.c"
                  (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 422 "det_report.m"
                  {
#line 422 "det_report.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_62_62, check_hlds__det_report__PredArgModes_17, &(check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18, &check_hlds__det_report__conv0__FuncResultMode_19);
                  }
#line 422 "det_report.m"
                  check_hlds__det_report___FuncResultMode_19 = ((MR_Word) check_hlds__det_report__conv0__FuncResultMode_19);
#line 425 "det_report.m"
                  {
#line 425 "det_report.m"
                    check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(&check_hlds__det_report__env);
                  }
#line 425 "det_report.m"
                  (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 415 "det_report.m"
                }
#line 415 "det_report.m"
            }
#line 415 "det_report.m"
        }
#line 443 "det_report.m"
      if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 430 "det_report.m"
        {
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__TypeCtorInfo_63_63;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__FuncContext_21;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__InstVarSet_22;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__PredModePieces_23;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__MainPieces_24;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__Spec_26;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_35_35;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_36_36;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_39_39;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_41_41;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_44_44;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_45_45;
#line 430 "det_report.m"
          MR_String check_hlds__det_report__V_46_46;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_53_53;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_54_54;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_55_55;
#line 430 "det_report.m"
          MR_Word check_hlds__det_report__V_56_56;

#line 430 "det_report.m"
          {
#line 430 "det_report.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__FuncContext_21);
          }
#line 431 "det_report.m"
          {
#line 431 "det_report.m"
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__InstVarSet_22);
          }
#line 432 "det_report.m"
          {
#line 432 "det_report.m"
            check_hlds__det_report__PredModePieces_23 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12, (MR_Integer) 1, check_hlds__det_report__PredId_8, check_hlds__det_report__InstVarSet_22, check_hlds__det_report__PredArgModes_17);
          }
#line 3694 "check_hlds.det_report.c"
          check_hlds__det_report__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 437 "det_report.m"
          {
#line 437 "det_report.m"
            check_hlds__det_report__V_46_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_report__InferredDetism_14);
          }
#line 437 "det_report.m"
          {
#line 437 "det_report.m"
            check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 437 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 437 "det_report.m"
          }
#line 436 "det_report.m"
          {
#line 436 "det_report.m"
            check_hlds__det_report__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_44_44, 0) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 436 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[49])));
#line 436 "det_report.m"
          }
#line 435 "det_report.m"
          {
#line 435 "det_report.m"
            check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[99])));
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_44_44));
#line 435 "det_report.m"
          }
#line 435 "det_report.m"
          {
#line 435 "det_report.m"
            check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 435 "det_report.m"
          }
#line 435 "det_report.m"
          {
#line 435 "det_report.m"
            check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[36])));
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 435 "det_report.m"
          }
#line 435 "det_report.m"
          {
#line 435 "det_report.m"
            check_hlds__det_report__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_63_63, check_hlds__det_report__PredModePieces_23, check_hlds__det_report__V_36_36);
          }
#line 434 "det_report.m"
          {
#line 434 "det_report.m"
            check_hlds__det_report__MainPieces_24 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_63_63, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[98]), check_hlds__det_report__V_35_35);
          }
#line 441 "det_report.m"
          {
#line 441 "det_report.m"
            check_hlds__det_report__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (check_hlds__det_report__MainPieces_24));
#line 441 "det_report.m"
          }
#line 440 "det_report.m"
          {
#line 440 "det_report.m"
            check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
#line 440 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[100])));
#line 440 "det_report.m"
          }
#line 441 "det_report.m"
          {
#line 441 "det_report.m"
            check_hlds__det_report__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_54_54, 0) = ((MR_Box) (check_hlds__det_report__FuncContext_21));
#line 441 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_54_54, 1) = ((MR_Box) (check_hlds__det_report__V_55_55));
#line 441 "det_report.m"
          }
#line 439 "det_report.m"
          {
#line 439 "det_report.m"
            check_hlds__det_report__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_53_53, 0) = ((MR_Box) (check_hlds__det_report__V_54_54));
#line 439 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "det_report.m"
          }
#line 439 "det_report.m"
          {
#line 439 "det_report.m"
            check_hlds__det_report__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 439 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 439 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 2) = ((MR_Box) (check_hlds__det_report__V_53_53));
#line 439 "det_report.m"
          }
#line 442 "det_report.m"
          {
#line 442 "det_report.m"
            MR_Word base;
#line 442 "det_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_Specs_28 = base;
#line 442 "det_report.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__Spec_26));
#line 442 "det_report.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_27));
#line 442 "det_report.m"
          }
#line 430 "det_report.m"
        }
#line 443 "det_report.m"
      else
#line 442 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_Specs_28 = check_hlds__det_report__STATE_VARIABLE_Specs_0_27;
#line 406 "det_report.m"
    }
#line 401 "det_report.m"
  }
#line 401 "det_report.m"
}

#line 1359 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
#line 1359 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1359 "det_report.m"
{
#line 1359 "det_report.m"
  {
#line 1359 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1359 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 1359 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 1359 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
#line 1359 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 3860 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1359 "det_report.m"
    else
#line 1359 "det_report.m"
      {
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8;

#line 1359 "det_report.m"
        {
#line 1359 "det_report.m"
          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_8_8, check_hlds__det_report__V_4_4, check_hlds__det_report__V_6_6);
        }
#line 3882 "check_hlds.det_report.c"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_8_8 == (MR_Integer) 0);
#line 1359 "det_report.m"
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1359 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1359 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_8_8;
#line 1359 "det_report.m"
        else
#line 1359 "det_report.m"
          {
#line 1359 "det_report.m"
            {
#line 1359 "det_report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[4], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_7_7)));
#line 1359 "det_report.m"
              return;
            }
#line 1359 "det_report.m"
          }
#line 1359 "det_report.m"
      }
#line 1359 "det_report.m"
  }
#line 1359 "det_report.m"
}

#line 1359 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1359 "det_report.m"
{
#line 1359 "det_report.m"
  {
#line 1359 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1359 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1359 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1359 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
#line 1359 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1359 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 1359 "det_report.m"
    else
#line 1359 "det_report.m"
      {
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_10_10;
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1359 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 3949 "check_hlds.det_report.c"
        {
#line 3951 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
        }
#line 1359 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1359 "det_report.m"
          {
#line 3958 "check_hlds.det_report.c"
            check_hlds__det_report__TypeInfo_10_10 = (MR_Word) &check_hlds__det_report_scalar_common_2[4];
#line 3960 "check_hlds.det_report.c"
            {
#line 3962 "check_hlds.det_report.c"
              return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_10_10, ((MR_Box) (check_hlds__det_report__V_4_4)), ((MR_Box) (check_hlds__det_report__V_6_6)));
            }
#line 1359 "det_report.m"
          }
#line 1359 "det_report.m"
      }
#line 1359 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1359 "det_report.m"
  }
#line 1359 "det_report.m"
}

#line 1333 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0(
#line 1333 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1333 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1333 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1333 "det_report.m"
{
#line 1333 "det_report.m"
  {
#line 1333 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1333 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_12 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 1333 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_13 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 1333 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_12 == check_hlds__det_report__CastY_13);
#line 1333 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 4000 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1333 "det_report.m"
    else
#line 1333 "det_report.m"
      {
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_10_10;

#line 1333 "det_report.m"
        {
#line 1333 "det_report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_10_10, ((MR_Box) (check_hlds__det_report__V_4_4)), ((MR_Box) (check_hlds__det_report__V_7_7)));
        }
#line 4026 "check_hlds.det_report.c"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_10_10 == (MR_Integer) 0);
#line 1333 "det_report.m"
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1333 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1333 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_10_10;
#line 1333 "det_report.m"
        else
#line 1333 "det_report.m"
          {
#line 1333 "det_report.m"
            MR_Word check_hlds__det_report__V_11_11;
#line 1359 "det_report.m"
            MR_Integer check_hlds__det_report__CastX_22 = (MR_Integer) check_hlds__det_report__V_5_5;
#line 1359 "det_report.m"
            MR_Integer check_hlds__det_report__CastY_23 = (MR_Integer) check_hlds__det_report__V_8_8;

#line 1359 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_22 == check_hlds__det_report__CastY_23);
#line 1359 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 4049 "check_hlds.det_report.c"
              {
#line 4051 "check_hlds.det_report.c"
                check_hlds__det_report__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 1333 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 4055 "check_hlds.det_report.c"
                if (check_hlds__det_report__succeeded)
#line 4057 "check_hlds.det_report.c"
                  {
#line 4059 "check_hlds.det_report.c"
                    check_hlds__det_report__V_11_11 = (MR_Integer) 0;
#line 4061 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = MR_TRUE;
#line 4063 "check_hlds.det_report.c"
                  }
#line 4065 "check_hlds.det_report.c"
              }
#line 1359 "det_report.m"
            else
#line 1359 "det_report.m"
              {
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_5_5, (MR_Integer) 0)));
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_5_5, (MR_Integer) 1)));
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, (MR_Integer) 0)));
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, (MR_Integer) 1)));
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_21_21;

#line 1359 "det_report.m"
                {
#line 1359 "det_report.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_21_21, check_hlds__det_report__V_17_17, check_hlds__det_report__V_19_19);
                }
#line 4087 "check_hlds.det_report.c"
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_21_21 == (MR_Integer) 0);
#line 1359 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1359 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 1359 "det_report.m"
                  {
#line 1359 "det_report.m"
                    check_hlds__det_report__V_11_11 = check_hlds__det_report__V_21_21;
#line 4097 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_11_11 == (MR_Integer) 0);
#line 1333 "det_report.m"
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1359 "det_report.m"
                  }
#line 1359 "det_report.m"
                else
#line 1359 "det_report.m"
                  {
#line 1359 "det_report.m"
                    {
#line 1359 "det_report.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[4], &check_hlds__det_report__V_11_11, ((MR_Box) (check_hlds__det_report__V_18_18)), ((MR_Box) (check_hlds__det_report__V_20_20)));
                    }
#line 4112 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_11_11 == (MR_Integer) 0);
#line 1333 "det_report.m"
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1359 "det_report.m"
                  }
#line 1359 "det_report.m"
              }
#line 1333 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1333 "det_report.m"
              *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_11_11;
#line 1333 "det_report.m"
            else
#line 1333 "det_report.m"
              {
#line 1333 "det_report.m"
                {
#line 1333 "det_report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[2], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_6_6)), ((MR_Box) (check_hlds__det_report__V_9_9)));
#line 1333 "det_report.m"
                  return;
                }
#line 1333 "det_report.m"
              }
#line 1333 "det_report.m"
          }
#line 1333 "det_report.m"
      }
#line 1333 "det_report.m"
  }
#line 1333 "det_report.m"
}

#line 1333 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0(
#line 1333 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1333 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1333 "det_report.m"
{
#line 1333 "det_report.m"
  {
#line 1333 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1333 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1333 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1333 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
#line 1333 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1333 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 1333 "det_report.m"
    else
#line 1333 "det_report.m"
      {
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_12_12;
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1333 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 1359 "det_report.m"
        MR_Integer check_hlds__det_report__CastX_17;
#line 1359 "det_report.m"
        MR_Integer check_hlds__det_report__CastY_18;

#line 4193 "check_hlds.det_report.c"
        {
#line 4195 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], ((MR_Box) (check_hlds__det_report__V_3_3)), ((MR_Box) (check_hlds__det_report__V_6_6)));
        }
#line 1333 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1333 "det_report.m"
          {
#line 1359 "det_report.m"
            check_hlds__det_report__CastX_17 = (MR_Integer) check_hlds__det_report__V_4_4;
#line 1359 "det_report.m"
            check_hlds__det_report__CastY_18 = (MR_Integer) check_hlds__det_report__V_7_7;
#line 1359 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_17 == check_hlds__det_report__CastY_18);
#line 1359 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1359 "det_report.m"
              check_hlds__det_report__succeeded = MR_TRUE;
#line 1359 "det_report.m"
            else
#line 1359 "det_report.m"
              {
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__TypeInfo_10_20;
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_4_4, (MR_Integer) 0)));
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_4_4, (MR_Integer) 1)));
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_7_7, (MR_Integer) 0)));
#line 1359 "det_report.m"
                MR_Word check_hlds__det_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_7_7, (MR_Integer) 1)));

#line 4227 "check_hlds.det_report.c"
                {
#line 4229 "check_hlds.det_report.c"
                  check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_13_13, check_hlds__det_report__V_15_15);
                }
#line 1359 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 1359 "det_report.m"
                  {
#line 4236 "check_hlds.det_report.c"
                    check_hlds__det_report__TypeInfo_10_20 = (MR_Word) &check_hlds__det_report_scalar_common_2[4];
#line 4238 "check_hlds.det_report.c"
                    {
#line 4240 "check_hlds.det_report.c"
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_10_20, ((MR_Box) (check_hlds__det_report__V_14_14)), ((MR_Box) (check_hlds__det_report__V_16_16)));
                    }
#line 1359 "det_report.m"
                  }
#line 1359 "det_report.m"
              }
#line 1333 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1333 "det_report.m"
              {
#line 4251 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_12_12 = (MR_Word) &check_hlds__det_report_scalar_common_2[2];
#line 4253 "check_hlds.det_report.c"
                {
#line 4255 "check_hlds.det_report.c"
                  return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_12_12, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_8_8)));
                }
#line 1333 "det_report.m"
              }
#line 1333 "det_report.m"
          }
#line 1333 "det_report.m"
      }
#line 1333 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1333 "det_report.m"
  }
#line 1333 "det_report.m"
}

#line 36 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0(
#line 36 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 36 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 36 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 36 "det_report.m"
{
#line 36 "det_report.m"
  {
#line 36 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 36 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_13 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 36 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_14 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 36 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_13 == check_hlds__det_report__CastY_14);
#line 36 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 4295 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "det_report.m"
    else
#line 36 "det_report.m"
      if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "det_report.m"
        else
#line 4307 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "det_report.m"
      else
#line 36 "det_report.m"
        {
#line 36 "det_report.m"
          MR_Integer check_hlds__det_report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "det_report.m"
          MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "det_report.m"
          if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4320 "check_hlds.det_report.c"
            *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "det_report.m"
          else
#line 36 "det_report.m"
            {
#line 36 "det_report.m"
              MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 36 "det_report.m"
              MR_Integer check_hlds__det_report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 36 "det_report.m"
              MR_Word check_hlds__det_report__V_8_8;

#line 36 "det_report.m"
              {
#line 36 "det_report.m"
                hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__det_report__V_8_8, check_hlds__det_report__V_18_18, check_hlds__det_report__V_6_6);
              }
#line 4338 "check_hlds.det_report.c"
              check_hlds__det_report__succeeded = (check_hlds__det_report__V_8_8 == (MR_Integer) 0);
#line 36 "det_report.m"
              check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 36 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 36 "det_report.m"
                *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_8_8;
#line 36 "det_report.m"
              else
#line 36 "det_report.m"
                {
#line 36 "det_report.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_17_17, check_hlds__det_report__V_7_7);
#line 36 "det_report.m"
                  return;
                }
#line 36 "det_report.m"
            }
#line 36 "det_report.m"
        }
#line 36 "det_report.m"
  }
#line 36 "det_report.m"
}

#line 36 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0(
#line 36 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 36 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 36 "det_report.m"
{
#line 36 "det_report.m"
  {
#line 36 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 36 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 36 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 36 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
#line 36 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 36 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 36 "det_report.m"
    else
#line 36 "det_report.m"
      if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "det_report.m"
        {
#line 36 "det_report.m"
          MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 36 "det_report.m"
          MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 36 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_8 == check_hlds__det_report__CastX_7);
#line 36 "det_report.m"
        }
#line 36 "det_report.m"
      else
#line 36 "det_report.m"
        {
#line 36 "det_report.m"
          MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "det_report.m"
          MR_Integer check_hlds__det_report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "det_report.m"
          MR_Word check_hlds__det_report__V_5_5;
#line 36 "det_report.m"
          MR_Integer check_hlds__det_report__V_6_6;

#line 36 "det_report.m"
          check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 36 "det_report.m"
          if (check_hlds__det_report__succeeded)
#line 36 "det_report.m"
            {
#line 36 "det_report.m"
              check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "det_report.m"
              check_hlds__det_report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 4426 "check_hlds.det_report.c"
              {
#line 4428 "check_hlds.det_report.c"
                check_hlds__det_report__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
              }
#line 36 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 4433 "check_hlds.det_report.c"
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_4_4 == check_hlds__det_report__V_6_6);
#line 36 "det_report.m"
            }
#line 36 "det_report.m"
        }
#line 36 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 36 "det_report.m"
  }
#line 36 "det_report.m"
}

#line 1601 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0(
#line 1601 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1601 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1601 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1601 "det_report.m"
{
#line 1601 "det_report.m"
  {
#line 1601 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1601 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar1_4 = check_hlds__det_report__HeadVar__2_2;
#line 1601 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar2_5 = check_hlds__det_report__HeadVar__3_3;

#line 1601 "det_report.m"
    {
#line 1601 "det_report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[1], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__det_report__Cast_HeadVar2_5)));
#line 1601 "det_report.m"
      return;
    }
#line 1601 "det_report.m"
  }
#line 1601 "det_report.m"
}

#line 1601 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0(
#line 1601 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1601 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1601 "det_report.m"
{
#line 1601 "det_report.m"
  {
#line 1601 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1601 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar1_3 = check_hlds__det_report__HeadVar__1_1;
#line 1601 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar2_4 = check_hlds__det_report__HeadVar__2_2;

#line 1601 "det_report.m"
    {
#line 1601 "det_report.m"
      return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[1], ((MR_Box) (check_hlds__det_report__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__det_report__Cast_HeadVar2_4)));
    }
#line 1601 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1601 "det_report.m"
  }
#line 1601 "det_report.m"
}

#line 50 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0(
#line 50 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 50 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 50 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 50 "det_report.m"
{
#line 50 "det_report.m"
  {
#line 50 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 50 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_119 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 50 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_120 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 50 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_119 == check_hlds__det_report__CastY_120);
#line 50 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 4532 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "det_report.m"
    else
#line 50 "det_report.m"
      if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 50 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 50 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
          if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 50 "det_report.m"
            *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
          else
#line 50 "det_report.m"
            if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4552 "check_hlds.det_report.c"
              *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
            else
#line 50 "det_report.m"
              if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4558 "check_hlds.det_report.c"
                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
              else
#line 50 "det_report.m"
                if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4564 "check_hlds.det_report.c"
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                else
#line 50 "det_report.m"
                  if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4570 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                  else
#line 4574 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
      else
#line 50 "det_report.m"
        if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 50 "det_report.m"
          if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 50 "det_report.m"
            *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
          else
#line 50 "det_report.m"
            if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 50 "det_report.m"
              *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "det_report.m"
            else
#line 50 "det_report.m"
              if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4594 "check_hlds.det_report.c"
                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
              else
#line 50 "det_report.m"
                if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4600 "check_hlds.det_report.c"
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                else
#line 50 "det_report.m"
                  if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4606 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                  else
#line 50 "det_report.m"
                    if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4612 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    else
#line 4616 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
          if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 50 "det_report.m"
            {
#line 50 "det_report.m"
              MR_Word check_hlds__det_report__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 50 "det_report.m"
              if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4629 "check_hlds.det_report.c"
                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
              else
#line 50 "det_report.m"
                if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4635 "check_hlds.det_report.c"
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                else
#line 50 "det_report.m"
                  if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 50 "det_report.m"
                    {
#line 50 "det_report.m"
                      MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));

#line 50 "det_report.m"
                      {
#line 50 "det_report.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_134_134)), ((MR_Box) (check_hlds__det_report__V_5_5)));
#line 50 "det_report.m"
                        return;
                      }
#line 50 "det_report.m"
                    }
#line 50 "det_report.m"
                  else
#line 50 "det_report.m"
                    if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4659 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    else
#line 50 "det_report.m"
                      if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4665 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                      else
#line 50 "det_report.m"
                        if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4671 "check_hlds.det_report.c"
                          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                        else
#line 4675 "check_hlds.det_report.c"
                          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
            }
#line 50 "det_report.m"
          else
#line 50 "det_report.m"
            if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 50 "det_report.m"
              {
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 50 "det_report.m"
                if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4692 "check_hlds.det_report.c"
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                else
#line 50 "det_report.m"
                  if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4698 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                  else
#line 50 "det_report.m"
                    if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4704 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    else
#line 50 "det_report.m"
                      if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 50 "det_report.m"
                        {
#line 50 "det_report.m"
                          MR_Word check_hlds__det_report__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 50 "det_report.m"
                          MR_Word check_hlds__det_report__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "det_report.m"
                          MR_Word check_hlds__det_report__V_36_36;

#line 50 "det_report.m"
                          {
#line 50 "det_report.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_36_36, ((MR_Box) (check_hlds__det_report__V_136_136)), ((MR_Box) (check_hlds__det_report__V_34_34)));
                          }
#line 4724 "check_hlds.det_report.c"
                          check_hlds__det_report__succeeded = (check_hlds__det_report__V_36_36 == (MR_Integer) 0);
#line 50 "det_report.m"
                          check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 50 "det_report.m"
                          if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                            *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_36_36;
#line 50 "det_report.m"
                          else
#line 50 "det_report.m"
                            {
#line 50 "det_report.m"
                              {
#line 50 "det_report.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_135_135)), ((MR_Box) (check_hlds__det_report__V_35_35)));
#line 50 "det_report.m"
                                return;
                              }
#line 50 "det_report.m"
                            }
#line 50 "det_report.m"
                        }
#line 50 "det_report.m"
                      else
#line 50 "det_report.m"
                        if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4751 "check_hlds.det_report.c"
                          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                        else
#line 50 "det_report.m"
                          if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4757 "check_hlds.det_report.c"
                            *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                          else
#line 4761 "check_hlds.det_report.c"
                            *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
            else
#line 50 "det_report.m"
              if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 50 "det_report.m"
                {
#line 50 "det_report.m"
                  MR_Integer check_hlds__det_report__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "det_report.m"
                  MR_Word check_hlds__det_report__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "det_report.m"
                  if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4778 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                  else
#line 50 "det_report.m"
                    if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4784 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    else
#line 50 "det_report.m"
                      if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4790 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                      else
#line 50 "det_report.m"
                        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4796 "check_hlds.det_report.c"
                          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        else
#line 50 "det_report.m"
                          if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 50 "det_report.m"
                            {
#line 50 "det_report.m"
                              MR_Word check_hlds__det_report__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "det_report.m"
                              MR_Integer check_hlds__det_report__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "det_report.m"
                              MR_Word check_hlds__det_report__V_90_90;

#line 50 "det_report.m"
                              {
#line 50 "det_report.m"
                                hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__det_report__V_90_90, check_hlds__det_report__V_130_130, check_hlds__det_report__V_88_88);
                              }
#line 4816 "check_hlds.det_report.c"
                              check_hlds__det_report__succeeded = (check_hlds__det_report__V_90_90 == (MR_Integer) 0);
#line 50 "det_report.m"
                              check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 50 "det_report.m"
                              if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                                *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_90_90;
#line 50 "det_report.m"
                              else
#line 50 "det_report.m"
                                {
#line 50 "det_report.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_129_129, check_hlds__det_report__V_89_89);
#line 50 "det_report.m"
                                  return;
                                }
#line 50 "det_report.m"
                            }
#line 50 "det_report.m"
                          else
#line 50 "det_report.m"
                            if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4839 "check_hlds.det_report.c"
                              *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                            else
#line 4843 "check_hlds.det_report.c"
                              *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
              else
#line 50 "det_report.m"
                if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 50 "det_report.m"
                  {
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "det_report.m"
                    if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4860 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    else
#line 50 "det_report.m"
                      if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4866 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                      else
#line 50 "det_report.m"
                        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4872 "check_hlds.det_report.c"
                          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        else
#line 50 "det_report.m"
                          if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4878 "check_hlds.det_report.c"
                            *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                          else
#line 50 "det_report.m"
                            if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4884 "check_hlds.det_report.c"
                              *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                            else
#line 50 "det_report.m"
                              if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 50 "det_report.m"
                                {
#line 50 "det_report.m"
                                  MR_Word check_hlds__det_report__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "det_report.m"
                                  MR_Word check_hlds__det_report__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "det_report.m"
                                  MR_Word check_hlds__det_report__V_63_63;

#line 50 "det_report.m"
                                  {
#line 50 "det_report.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_63_63, ((MR_Box) (check_hlds__det_report__V_132_132)), ((MR_Box) (check_hlds__det_report__V_61_61)));
                                  }
#line 4904 "check_hlds.det_report.c"
                                  check_hlds__det_report__succeeded = (check_hlds__det_report__V_63_63 == (MR_Integer) 0);
#line 50 "det_report.m"
                                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 50 "det_report.m"
                                  if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                                    *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_63_63;
#line 50 "det_report.m"
                                  else
#line 50 "det_report.m"
                                    {
#line 50 "det_report.m"
                                      parse_tree__prog_data____Compare____cons_id_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_131_131, check_hlds__det_report__V_62_62);
#line 50 "det_report.m"
                                      return;
                                    }
#line 50 "det_report.m"
                                }
#line 50 "det_report.m"
                              else
#line 4925 "check_hlds.det_report.c"
                                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
                else
#line 50 "det_report.m"
                  {
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "det_report.m"
                    if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4938 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    else
#line 50 "det_report.m"
                      if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4944 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                      else
#line 50 "det_report.m"
                        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4950 "check_hlds.det_report.c"
                          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        else
#line 50 "det_report.m"
                          if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4956 "check_hlds.det_report.c"
                            *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                          else
#line 50 "det_report.m"
                            if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4962 "check_hlds.det_report.c"
                              *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                            else
#line 50 "det_report.m"
                              if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4968 "check_hlds.det_report.c"
                                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                              else
#line 50 "det_report.m"
                                {
#line 50 "det_report.m"
                                  MR_Word check_hlds__det_report__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));

#line 50 "det_report.m"
                                  {
#line 50 "det_report.m"
                                    hlds__hlds_goal____Compare____generic_call_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_133_133, check_hlds__det_report__V_109_109);
#line 50 "det_report.m"
                                    return;
                                  }
#line 50 "det_report.m"
                                }
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
  }
#line 50 "det_report.m"
}

#line 50 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0(
#line 50 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 50 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 50 "det_report.m"
{
#line 50 "det_report.m"
  {
#line 50 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 50 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_23 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 50 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_24 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 50 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_23 == check_hlds__det_report__CastY_24);
#line 50 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 50 "det_report.m"
    else
#line 50 "det_report.m"
      if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 50 "det_report.m"
        {
#line 50 "det_report.m"
          MR_Integer check_hlds__det_report__CastX_5 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 50 "det_report.m"
          MR_Integer check_hlds__det_report__CastY_6 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 50 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_6 == check_hlds__det_report__CastX_5);
#line 50 "det_report.m"
        }
#line 50 "det_report.m"
      else
#line 50 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 50 "det_report.m"
          {
#line 50 "det_report.m"
            MR_Integer check_hlds__det_report__CastX_21 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 50 "det_report.m"
            MR_Integer check_hlds__det_report__CastY_22 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 50 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_22 == check_hlds__det_report__CastX_21);
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
          if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 50 "det_report.m"
            {
#line 50 "det_report.m"
              MR_Word check_hlds__det_report__TypeInfo_30_30;
#line 50 "det_report.m"
              MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "det_report.m"
              MR_Word check_hlds__det_report__V_4_4;

#line 50 "det_report.m"
              check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 50 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                {
#line 50 "det_report.m"
                  check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 5068 "check_hlds.det_report.c"
                  check_hlds__det_report__TypeInfo_30_30 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5070 "check_hlds.det_report.c"
                  {
#line 5072 "check_hlds.det_report.c"
                    return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_30_30, ((MR_Box) (check_hlds__det_report__V_3_3)), ((MR_Box) (check_hlds__det_report__V_4_4)));
                  }
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
            }
#line 50 "det_report.m"
          else
#line 50 "det_report.m"
            if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 50 "det_report.m"
              {
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__TypeInfo_31_31;
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__TypeInfo_32_32;
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_9_9;
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_10_10;

#line 50 "det_report.m"
                check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 50 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                  {
#line 50 "det_report.m"
                    check_hlds__det_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "det_report.m"
                    check_hlds__det_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 5108 "check_hlds.det_report.c"
                    check_hlds__det_report__TypeInfo_31_31 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5110 "check_hlds.det_report.c"
                    {
#line 5112 "check_hlds.det_report.c"
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_31_31, ((MR_Box) (check_hlds__det_report__V_7_7)), ((MR_Box) (check_hlds__det_report__V_9_9)));
                    }
#line 50 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                      {
#line 5119 "check_hlds.det_report.c"
                        check_hlds__det_report__TypeInfo_32_32 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5121 "check_hlds.det_report.c"
                        {
#line 5123 "check_hlds.det_report.c"
                          return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_32_32, ((MR_Box) (check_hlds__det_report__V_8_8)), ((MR_Box) (check_hlds__det_report__V_10_10)));
                        }
#line 50 "det_report.m"
                      }
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
            else
#line 50 "det_report.m"
              if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 50 "det_report.m"
                {
#line 50 "det_report.m"
                  MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "det_report.m"
                  MR_Integer check_hlds__det_report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "det_report.m"
                  MR_Word check_hlds__det_report__V_17_17;
#line 50 "det_report.m"
                  MR_Integer check_hlds__det_report__V_18_18;

#line 50 "det_report.m"
                  check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 50 "det_report.m"
                  if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                    {
#line 50 "det_report.m"
                      check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "det_report.m"
                      check_hlds__det_report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 5157 "check_hlds.det_report.c"
                      {
#line 5159 "check_hlds.det_report.c"
                        check_hlds__det_report__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_report__V_15_15, check_hlds__det_report__V_17_17);
                      }
#line 50 "det_report.m"
                      if (check_hlds__det_report__succeeded)
#line 5164 "check_hlds.det_report.c"
                        check_hlds__det_report__succeeded = (check_hlds__det_report__V_16_16 == check_hlds__det_report__V_18_18);
#line 50 "det_report.m"
                    }
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
              else
#line 50 "det_report.m"
                if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 50 "det_report.m"
                  {
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__TypeInfo_27_27;
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_13_13;
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_14_14;

#line 50 "det_report.m"
                    check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 50 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                      {
#line 50 "det_report.m"
                        check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "det_report.m"
                        check_hlds__det_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 5197 "check_hlds.det_report.c"
                        check_hlds__det_report__TypeInfo_27_27 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5199 "check_hlds.det_report.c"
                        {
#line 5201 "check_hlds.det_report.c"
                          check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_27_27, ((MR_Box) (check_hlds__det_report__V_11_11)), ((MR_Box) (check_hlds__det_report__V_13_13)));
                        }
#line 50 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 5206 "check_hlds.det_report.c"
                          {
#line 5208 "check_hlds.det_report.c"
                            return check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_12_12, check_hlds__det_report__V_14_14);
                          }
#line 50 "det_report.m"
                      }
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
                else
#line 50 "det_report.m"
                  {
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "det_report.m"
                    MR_Word check_hlds__det_report__V_20_20;

#line 50 "det_report.m"
                    check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 50 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                      {
#line 50 "det_report.m"
                        check_hlds__det_report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 5232 "check_hlds.det_report.c"
                        {
#line 5234 "check_hlds.det_report.c"
                          return check_hlds__det_report__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(check_hlds__det_report__V_19_19, check_hlds__det_report__V_20_20);
                        }
#line 50 "det_report.m"
                      }
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 50 "det_report.m"
  }
#line 50 "det_report.m"
}

#line 44 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0(
#line 44 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 44 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 44 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 44 "det_report.m"
{
#line 44 "det_report.m"
  {
#line 44 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 44 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 44 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 44 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
#line 44 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 5272 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 44 "det_report.m"
    else
#line 44 "det_report.m"
      {
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8;

#line 44 "det_report.m"
        {
#line 44 "det_report.m"
          mercury__term____Compare____context_0_0(&check_hlds__det_report__V_8_8, check_hlds__det_report__V_4_4, check_hlds__det_report__V_6_6);
        }
#line 5294 "check_hlds.det_report.c"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_8_8 == (MR_Integer) 0);
#line 44 "det_report.m"
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 44 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 44 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_8_8;
#line 44 "det_report.m"
        else
#line 44 "det_report.m"
          {
#line 44 "det_report.m"
            check_hlds__det_report____Compare____failing_goal_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_5_5, check_hlds__det_report__V_7_7);
#line 44 "det_report.m"
            return;
          }
#line 44 "det_report.m"
      }
#line 44 "det_report.m"
  }
#line 44 "det_report.m"
}

#line 44 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0(
#line 44 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 44 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 44 "det_report.m"
{
#line 44 "det_report.m"
  {
#line 44 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 44 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 44 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 44 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
#line 44 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 44 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 44 "det_report.m"
    else
#line 44 "det_report.m"
      {
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 5355 "check_hlds.det_report.c"
        {
#line 5357 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = mercury__term____Unify____context_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
        }
#line 44 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 5362 "check_hlds.det_report.c"
          {
#line 5364 "check_hlds.det_report.c"
            return check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_goal_0_0(check_hlds__det_report__V_4_4, check_hlds__det_report__V_6_6);
          }
#line 44 "det_report.m"
      }
#line 44 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 44 "det_report.m"
  }
#line 44 "det_report.m"
}

#line 126 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____det_comparison_0_0(
#line 126 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 126 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 126 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 126 "det_report.m"
{
#line 126 "det_report.m"
  {
#line 126 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 126 "det_report.m"
    MR_Integer check_hlds__det_report__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 126 "det_report.m"
    MR_Integer check_hlds__det_report__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 126 "det_report.m"
    {
#line 126 "det_report.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__Cast_HeadVar1_4, check_hlds__det_report__Cast_HeadVar2_5);
#line 126 "det_report.m"
      return;
    }
#line 126 "det_report.m"
  }
#line 126 "det_report.m"
}

#line 126 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____det_comparison_0_0(
#line 126 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_1,
#line 126 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 126 "det_report.m"
{
#line 5417 "check_hlds.det_report.c"
  {
#line 5419 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__2_1 == check_hlds__det_report__HeadVar__2_2);

#line 5422 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 5424 "check_hlds.det_report.c"
  }
#line 126 "det_report.m"
}

#line 40 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0(
#line 40 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 40 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 40 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 40 "det_report.m"
{
#line 40 "det_report.m"
  {
#line 40 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 40 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 40 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_9 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 40 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_8 == check_hlds__det_report__CastY_9);
#line 40 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 5453 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "det_report.m"
    else
#line 40 "det_report.m"
      if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "det_report.m"
        else
#line 5465 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "det_report.m"
      else
#line 40 "det_report.m"
        {
#line 40 "det_report.m"
          MR_Word check_hlds__det_report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "det_report.m"
          if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5476 "check_hlds.det_report.c"
            *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "det_report.m"
          else
#line 40 "det_report.m"
            {
#line 40 "det_report.m"
              MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));

#line 40 "det_report.m"
              {
#line 40 "det_report.m"
                hlds__hlds_goal____Compare____unify_context_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_11_11, check_hlds__det_report__V_5_5);
#line 40 "det_report.m"
                return;
              }
#line 40 "det_report.m"
            }
#line 40 "det_report.m"
        }
#line 40 "det_report.m"
  }
#line 40 "det_report.m"
}

#line 40 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0(
#line 40 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 40 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 40 "det_report.m"
{
#line 40 "det_report.m"
  {
#line 40 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 40 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 40 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 40 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
#line 40 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 40 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 40 "det_report.m"
    else
#line 40 "det_report.m"
      if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "det_report.m"
        {
#line 40 "det_report.m"
          MR_Integer check_hlds__det_report__CastX_5 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 40 "det_report.m"
          MR_Integer check_hlds__det_report__CastY_6 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 40 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_6 == check_hlds__det_report__CastX_5);
#line 40 "det_report.m"
        }
#line 40 "det_report.m"
      else
#line 40 "det_report.m"
        {
#line 40 "det_report.m"
          MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "det_report.m"
          MR_Word check_hlds__det_report__V_4_4;

#line 40 "det_report.m"
          check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 40 "det_report.m"
          if (check_hlds__det_report__succeeded)
#line 40 "det_report.m"
            {
#line 40 "det_report.m"
              check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 5557 "check_hlds.det_report.c"
              {
#line 5559 "check_hlds.det_report.c"
                return check_hlds__det_report__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_4_4);
              }
#line 40 "det_report.m"
            }
#line 40 "det_report.m"
        }
#line 40 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 40 "det_report.m"
  }
#line 40 "det_report.m"
}

#line 1616 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
#line 1616 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1616 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_7,
#line 1616 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_8)
#line 1616 "det_report.m"
{
#line 1619 "det_report.m"
  {
#line 1619 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1619 "det_report.m"
    MR_Word check_hlds__det_report__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1619 "det_report.m"
    MR_Word check_hlds__det_report__Value_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));

#line 1620 "det_report.m"
    {
#line 1620 "det_report.m"
      libs__globals__set_option_4_p_0(check_hlds__det_report__Option_4, check_hlds__det_report__Value_5, check_hlds__det_report__STATE_VARIABLE_Globals_0_7, check_hlds__det_report__STATE_VARIABLE_Globals_8);
#line 1620 "det_report.m"
      return;
    }
#line 1619 "det_report.m"
  }
#line 1616 "det_report.m"
}

#line 1517 "det_report.m"
static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
#line 1517 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_5,
#line 1517 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_6,
#line 1517 "det_report.m"
  MR_Word check_hlds__det_report__FailingContext_7)
#line 1517 "det_report.m"
{
#line 1520 "det_report.m"
  {
#line 1520 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1520 "det_report.m"
    MR_Word check_hlds__det_report__Msg_8;
#line 1520 "det_report.m"
    MR_Word check_hlds__det_report__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__FailingContext_7, (MR_Integer) 0)));
#line 1520 "det_report.m"
    MR_Word check_hlds__det_report__FailingGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__FailingContext_7, (MR_Integer) 1)));
#line 1520 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_13;
#line 1520 "det_report.m"
    MR_Word check_hlds__det_report__V_85_85;
#line 1520 "det_report.m"
    MR_Word check_hlds__det_report__V_86_86;
#line 1520 "det_report.m"
    MR_Word check_hlds__det_report__V_87_87;

#line 1526 "det_report.m"
    if ((check_hlds__det_report__FailingGoal_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "det_report.m"
      {
#line 1528 "det_report.m"
        check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[90]);
#line 1527 "det_report.m"
      }
#line 1526 "det_report.m"
    else
#line 1526 "det_report.m"
      if ((check_hlds__det_report__FailingGoal_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1552 "det_report.m"
        {
#line 1553 "det_report.m"
          check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[56]);
#line 1552 "det_report.m"
        }
#line 1526 "det_report.m"
      else
#line 1526 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) == (MR_mktag((MR_Integer) 1))))
#line 1523 "det_report.m"
          {
#line 1523 "det_report.m"
            MR_Word check_hlds__det_report__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)));
#line 1523 "det_report.m"
            MR_String check_hlds__det_report__VarStr_12;
#line 1523 "det_report.m"
            MR_Word check_hlds__det_report__V_79_79;
#line 1523 "det_report.m"
            MR_Word check_hlds__det_report__V_80_80;

#line 1524 "det_report.m"
            {
#line 1524 "det_report.m"
              check_hlds__det_report__VarStr_12 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_6, (MR_Integer) 0, check_hlds__det_report__Var_11);
            }
#line 1525 "det_report.m"
            {
#line 1525 "det_report.m"
              check_hlds__det_report__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 0) = ((MR_Box) (check_hlds__det_report__VarStr_12));
#line 1525 "det_report.m"
            }
#line 1525 "det_report.m"
            {
#line 1525 "det_report.m"
              check_hlds__det_report__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_79_79, 0) = ((MR_Box) (check_hlds__det_report__V_80_80));
#line 1525 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[93])));
#line 1525 "det_report.m"
            }
#line 1525 "det_report.m"
            {
#line 1525 "det_report.m"
              check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[91])));
#line 1525 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_79_79));
#line 1525 "det_report.m"
            }
#line 1523 "det_report.m"
          }
#line 1526 "det_report.m"
        else
#line 1526 "det_report.m"
          if (((MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) == (MR_mktag((MR_Integer) 2))))
#line 1530 "det_report.m"
            {
#line 1530 "det_report.m"
              MR_Word check_hlds__det_report__TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1530 "det_report.m"
              MR_Word check_hlds__det_report__Var1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)));
#line 1530 "det_report.m"
              MR_Word check_hlds__det_report__Var2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1530 "det_report.m"
              MR_String check_hlds__det_report__Var1Str_16;
#line 1530 "det_report.m"
              MR_String check_hlds__det_report__Var2Str_17;
#line 1530 "det_report.m"
              MR_Word check_hlds__det_report__V_62_62;
#line 1530 "det_report.m"
              MR_Word check_hlds__det_report__V_63_63;
#line 1530 "det_report.m"
              MR_Word check_hlds__det_report__V_64_64;
#line 1530 "det_report.m"
              MR_Word check_hlds__det_report__V_67_67;
#line 1530 "det_report.m"
              MR_Word check_hlds__det_report__V_68_68;

#line 1531 "det_report.m"
              {
#line 1531 "det_report.m"
                check_hlds__det_report__Var1Str_16 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0(check_hlds__det_report__TypeCtorInfo_95_95, check_hlds__det_report__VarSet_6, (MR_Integer) 0, check_hlds__det_report__Var1_14);
              }
#line 1532 "det_report.m"
              {
#line 1532 "det_report.m"
                check_hlds__det_report__Var2Str_17 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0(check_hlds__det_report__TypeCtorInfo_95_95, check_hlds__det_report__VarSet_6, (MR_Integer) 0, check_hlds__det_report__Var2_15);
              }
#line 1533 "det_report.m"
              {
#line 1533 "det_report.m"
                check_hlds__det_report__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_63_63, 0) = ((MR_Box) (check_hlds__det_report__Var1Str_16));
#line 1533 "det_report.m"
              }
#line 1534 "det_report.m"
              {
#line 1534 "det_report.m"
                check_hlds__det_report__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_68_68, 0) = ((MR_Box) (check_hlds__det_report__Var2Str_17));
#line 1534 "det_report.m"
              }
#line 1534 "det_report.m"
              {
#line 1534 "det_report.m"
                check_hlds__det_report__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_67_67, 0) = ((MR_Box) (check_hlds__det_report__V_68_68));
#line 1534 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[64])));
#line 1534 "det_report.m"
              }
#line 1533 "det_report.m"
              {
#line 1533 "det_report.m"
                check_hlds__det_report__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68])));
#line 1533 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_64_64, 1) = ((MR_Box) (check_hlds__det_report__V_67_67));
#line 1533 "det_report.m"
              }
#line 1533 "det_report.m"
              {
#line 1533 "det_report.m"
                check_hlds__det_report__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_62_62, 0) = ((MR_Box) (check_hlds__det_report__V_63_63));
#line 1533 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_62_62, 1) = ((MR_Box) (check_hlds__det_report__V_64_64));
#line 1533 "det_report.m"
              }
#line 1533 "det_report.m"
              {
#line 1533 "det_report.m"
                check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[94])));
#line 1533 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_62_62));
#line 1533 "det_report.m"
              }
#line 1530 "det_report.m"
            }
#line 1526 "det_report.m"
          else
#line 1526 "det_report.m"
            if (((((MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1542 "det_report.m"
              {
#line 1542 "det_report.m"
                MR_Word check_hlds__det_report__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1542 "det_report.m"
                MR_Word check_hlds__det_report__PredInfo_22;
#line 1542 "det_report.m"
                MR_String check_hlds__det_report__Name_23;
#line 1542 "det_report.m"
                MR_Word check_hlds__det_report__V_38_38;
#line 1542 "det_report.m"
                MR_Word check_hlds__det_report__V_39_39;
#line 1542 "det_report.m"
                MR_Integer check_hlds__det_report___ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 2)));

#line 1543 "det_report.m"
                {
#line 1543 "det_report.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_report__ModuleInfo_5, check_hlds__det_report__PredId_20, &check_hlds__det_report__PredInfo_22);
                }
#line 1544 "det_report.m"
                {
#line 1544 "det_report.m"
                  check_hlds__det_report__Name_23 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_report__PredInfo_22);
                }
#line 1545 "det_report.m"
                {
#line 1545 "det_report.m"
                  check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1545 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__Name_23));
#line 1545 "det_report.m"
                }
#line 1545 "det_report.m"
                {
#line 1545 "det_report.m"
                  check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1545 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 1545 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[64])));
#line 1545 "det_report.m"
                }
#line 1545 "det_report.m"
                {
#line 1545 "det_report.m"
                  check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1545 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[95])));
#line 1545 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 1545 "det_report.m"
                }
#line 1542 "det_report.m"
              }
#line 1526 "det_report.m"
            else
#line 1526 "det_report.m"
              if (((((MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1536 "det_report.m"
                {
#line 1536 "det_report.m"
                  MR_Word check_hlds__det_report__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 2)));
#line 1536 "det_report.m"
                  MR_String check_hlds__det_report__ConsIdStr_19;
#line 1536 "det_report.m"
                  MR_Word check_hlds__det_report__V_47_47;
#line 1536 "det_report.m"
                  MR_Word check_hlds__det_report__V_48_48;
#line 1536 "det_report.m"
                  MR_Word check_hlds__det_report__V_49_49;
#line 1536 "det_report.m"
                  MR_Word check_hlds__det_report__V_52_52;
#line 1536 "det_report.m"
                  MR_Word check_hlds__det_report__V_53_53;
#line 1536 "det_report.m"
                  MR_Word check_hlds__det_report__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1536 "det_report.m"
                  MR_String check_hlds__det_report__VarStr_93;

#line 1537 "det_report.m"
                  {
#line 1537 "det_report.m"
                    check_hlds__det_report__VarStr_93 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_6, (MR_Integer) 0, check_hlds__det_report__Var_92);
                  }
#line 1538 "det_report.m"
                  {
#line 1538 "det_report.m"
                    check_hlds__det_report__ConsIdStr_19 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(check_hlds__det_report__ConsId_18);
                  }
#line 1539 "det_report.m"
                  {
#line 1539 "det_report.m"
                    check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__VarStr_93));
#line 1539 "det_report.m"
                  }
#line 1540 "det_report.m"
                  {
#line 1540 "det_report.m"
                    check_hlds__det_report__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_53_53, 0) = ((MR_Box) (check_hlds__det_report__ConsIdStr_19));
#line 1540 "det_report.m"
                  }
#line 1540 "det_report.m"
                  {
#line 1540 "det_report.m"
                    check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (check_hlds__det_report__V_53_53));
#line 1540 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[64])));
#line 1540 "det_report.m"
                  }
#line 1539 "det_report.m"
                  {
#line 1539 "det_report.m"
                    check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[96])));
#line 1539 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 1539 "det_report.m"
                  }
#line 1539 "det_report.m"
                  {
#line 1539 "det_report.m"
                    check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1539 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 1539 "det_report.m"
                  }
#line 1539 "det_report.m"
                  {
#line 1539 "det_report.m"
                    check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[94])));
#line 1539 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 1539 "det_report.m"
                  }
#line 1536 "det_report.m"
                }
#line 1526 "det_report.m"
              else
#line 1547 "det_report.m"
                {
#line 1547 "det_report.m"
                  MR_Word check_hlds__det_report__GenericCall_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1547 "det_report.m"
                  MR_Word check_hlds__det_report__CallId_25;
#line 1547 "det_report.m"
                  MR_Word check_hlds__det_report__V_29_29;
#line 1547 "det_report.m"
                  MR_String check_hlds__det_report__V_30_30;
#line 1547 "det_report.m"
                  MR_String check_hlds__det_report__V_31_31;

#line 1548 "det_report.m"
                  {
#line 1548 "det_report.m"
                    hlds__hlds_goal__generic_call_id_2_p_0(check_hlds__det_report__GenericCall_24, &check_hlds__det_report__CallId_25);
                  }
#line 1549 "det_report.m"
                  {
#line 1549 "det_report.m"
                    check_hlds__det_report__V_31_31 = hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(check_hlds__det_report__CallId_25);
                  }
#line 1549 "det_report.m"
                  {
#line 1549 "det_report.m"
                    check_hlds__det_report__V_30_30 = parse_tree__error_util__capitalize_1_f_0(check_hlds__det_report__V_31_31);
                  }
#line 1549 "det_report.m"
                  {
#line 1549 "det_report.m"
                    check_hlds__det_report__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "det_report.m"
                    MR_hl_field(MR_mktag(3), check_hlds__det_report__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1549 "det_report.m"
                    MR_hl_field(MR_mktag(3), check_hlds__det_report__V_29_29, 1) = ((MR_Box) (check_hlds__det_report__V_30_30));
#line 1549 "det_report.m"
                  }
#line 1549 "det_report.m"
                  {
#line 1549 "det_report.m"
                    check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (check_hlds__det_report__V_29_29));
#line 1549 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[64])));
#line 1549 "det_report.m"
                  }
#line 1547 "det_report.m"
                }
#line 1555 "det_report.m"
    {
#line 1555 "det_report.m"
      check_hlds__det_report__V_87_87 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__Pieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5]));
    }
#line 1555 "det_report.m"
    {
#line 1555 "det_report.m"
      check_hlds__det_report__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1555 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_86_86, 0) = ((MR_Box) (check_hlds__det_report__V_87_87));
#line 1555 "det_report.m"
    }
#line 1555 "det_report.m"
    {
#line 1555 "det_report.m"
      check_hlds__det_report__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1555 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_85_85, 0) = ((MR_Box) (check_hlds__det_report__V_86_86));
#line 1555 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1555 "det_report.m"
    }
#line 1555 "det_report.m"
    {
#line 1555 "det_report.m"
      check_hlds__det_report__Msg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1555 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_8, 0) = ((MR_Box) (check_hlds__det_report__Context_9));
#line 1555 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_8, 1) = ((MR_Box) (check_hlds__det_report__V_85_85));
#line 1555 "det_report.m"
    }
#line 1520 "det_report.m"
    return check_hlds__det_report__Msg_8;
#line 1520 "det_report.m"
  }
#line 1517 "det_report.m"
}

#line 1391 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
#line 1391 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 1391 "det_report.m"
  MR_Word check_hlds__det_report__CallUnifyContext_9,
#line 1391 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_10,
#line 1391 "det_report.m"
  MR_Word check_hlds__det_report__PredId_11,
#line 1391 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_12,
#line 1391 "det_report.m"
  MR_Word * check_hlds__det_report__InitMsgs_13,
#line 1391 "det_report.m"
  MR_Word * check_hlds__det_report__StartingPieces_14)
#line 1391 "det_report.m"
{
#line 1396 "det_report.m"
  {
#line 1396 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1396 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_15;
#line 1396 "det_report.m"
    MR_Word check_hlds__det_report__PredInfo_16;
#line 1396 "det_report.m"
    MR_Word check_hlds__det_report__Origin_17;
#line 1407 "det_report.m"
    MR_Word check_hlds__det_report__V_30_30;
#line 1407 "det_report.m"
    MR_Word check_hlds__det_report__V_31_31;
#line 1407 "det_report.m"
    MR_Word check_hlds__det_report__V_18_18;

#line 1397 "det_report.m"
    {
#line 1397 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_10, &check_hlds__det_report__ModuleInfo_15);
    }
#line 1398 "det_report.m"
    {
#line 1398 "det_report.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__PredId_11, &check_hlds__det_report__PredInfo_16);
    }
#line 1399 "det_report.m"
    {
#line 1399 "det_report.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__det_report__PredInfo_16, &check_hlds__det_report__Origin_17);
    }
#line 1407 "det_report.m"
    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Origin_17)) == (MR_mktag((MR_Integer) 0)));
#line 1407 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1407 "det_report.m"
      {
#line 1407 "det_report.m"
        check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Origin_17, (MR_Integer) 0)));
#line 1407 "det_report.m"
        check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_30_30, (MR_Integer) 0)));
#line 1407 "det_report.m"
        check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_30_30, (MR_Integer) 1)));
#line 1407 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_31_31 == (MR_Integer) 0);
#line 1407 "det_report.m"
      }
#line 1420 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1408 "det_report.m"
      {
#line 1408 "det_report.m"
        *check_hlds__det_report__InitMsgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1413 "det_report.m"
        if ((check_hlds__det_report__CallUnifyContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1416 "det_report.m"
          {
#line 1417 "det_report.m"
            *check_hlds__det_report__StartingPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[87]);
#line 1416 "det_report.m"
          }
#line 1413 "det_report.m"
        else
#line 1410 "det_report.m"
          {
#line 1410 "det_report.m"
            MR_Word check_hlds__det_report__LHS_19;
#line 1410 "det_report.m"
            MR_Word check_hlds__det_report__RHS_20;
#line 1410 "det_report.m"
            MR_Word check_hlds__det_report__UC_21;
#line 1410 "det_report.m"
            MR_Word check_hlds__det_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CallUnifyContext_9, (MR_Integer) 0)));

#line 1410 "det_report.m"
            check_hlds__det_report__LHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, (MR_Integer) 0)));
#line 1410 "det_report.m"
            check_hlds__det_report__RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, (MR_Integer) 1)));
#line 1410 "det_report.m"
            check_hlds__det_report__UC_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, (MR_Integer) 2)));
#line 1411 "det_report.m"
            {
#line 1411 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__det_report__UC_21, check_hlds__det_report__DetInfo_10, check_hlds__det_report__LHS_19, check_hlds__det_report__RHS_20, check_hlds__det_report__StartingPieces_14);
#line 1411 "det_report.m"
              return;
            }
#line 1410 "det_report.m"
          }
#line 1408 "det_report.m"
      }
#line 1420 "det_report.m"
    else
#line 1431 "det_report.m"
      {
#line 1431 "det_report.m"
        MR_Word check_hlds__det_report__ProcTable_25;
#line 1431 "det_report.m"
        MR_Word check_hlds__det_report__ProcInfo_26;
#line 1431 "det_report.m"
        MR_Word check_hlds__det_report__ArgModes_27;
#line 1431 "det_report.m"
        MR_Word check_hlds__det_report__InstVarSet_28;
#line 1431 "det_report.m"
        MR_Word check_hlds__det_report__PredPieces_29;
#line 1433 "det_report.m"
        MR_Box check_hlds__det_report__conv0_ProcInfo_26;

#line 1428 "det_report.m"
        if ((check_hlds__det_report__CallUnifyContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1430 "det_report.m"
          *check_hlds__det_report__InitMsgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1428 "det_report.m"
        else
#line 1422 "det_report.m"
          {
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__UnifyPieces0_22;
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__UnifyPieces_23;
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__UnifyMsg_24;
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CallUnifyContext_9, (MR_Integer) 0)));
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__V_47_47;
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__V_48_48;
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__LHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_40_40, (MR_Integer) 0)));
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__RHS_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_40_40, (MR_Integer) 1)));
#line 1422 "det_report.m"
            MR_Word check_hlds__det_report__UC_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_40_40, (MR_Integer) 2)));

#line 1423 "det_report.m"
            {
#line 1423 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 1, check_hlds__det_report__UC_56, check_hlds__det_report__DetInfo_10, check_hlds__det_report__LHS_54, check_hlds__det_report__RHS_55, &check_hlds__det_report__UnifyPieces0_22);
            }
#line 1425 "det_report.m"
            {
#line 1425 "det_report.m"
              check_hlds__det_report__UnifyPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__UnifyPieces0_22, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[88]));
            }
#line 1426 "det_report.m"
            {
#line 1426 "det_report.m"
              check_hlds__det_report__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__UnifyPieces_23));
#line 1426 "det_report.m"
            }
#line 1426 "det_report.m"
            {
#line 1426 "det_report.m"
              check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1426 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1426 "det_report.m"
            }
#line 1426 "det_report.m"
            {
#line 1426 "det_report.m"
              check_hlds__det_report__UnifyMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__UnifyMsg_24, 0) = ((MR_Box) (check_hlds__det_report__Context_8));
#line 1426 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__UnifyMsg_24, 1) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 1426 "det_report.m"
            }
#line 1427 "det_report.m"
            {
#line 1427 "det_report.m"
              MR_Word base;
#line 1427 "det_report.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "det_report.m"
              *check_hlds__det_report__InitMsgs_13 = base;
#line 1427 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__UnifyMsg_24));
#line 1427 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1427 "det_report.m"
            }
#line 1422 "det_report.m"
          }
#line 1432 "det_report.m"
        {
#line 1432 "det_report.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_report__PredInfo_16, &check_hlds__det_report__ProcTable_25);
        }
#line 1433 "det_report.m"
        {
#line 1433 "det_report.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_report__ProcTable_25, ((MR_Box) (check_hlds__det_report__ProcId_12)), &check_hlds__det_report__conv0_ProcInfo_26);
        }
#line 1433 "det_report.m"
        check_hlds__det_report__ProcInfo_26 = ((MR_Word) check_hlds__det_report__conv0_ProcInfo_26);
#line 1434 "det_report.m"
        {
#line 1434 "det_report.m"
          hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(check_hlds__det_report__ProcInfo_26, &check_hlds__det_report__ArgModes_27);
        }
#line 1435 "det_report.m"
        {
#line 1435 "det_report.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__det_report__ProcInfo_26, &check_hlds__det_report__InstVarSet_28);
        }
#line 1436 "det_report.m"
        {
#line 1436 "det_report.m"
          check_hlds__det_report__PredPieces_29 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(check_hlds__det_report__ModuleInfo_15, (MR_Integer) 0, check_hlds__det_report__PredId_11, check_hlds__det_report__InstVarSet_28, check_hlds__det_report__ArgModes_27);
        }
#line 1438 "det_report.m"
        {
#line 1438 "det_report.m"
          MR_Word base;
#line 1438 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "det_report.m"
          *check_hlds__det_report__StartingPieces_14 = base;
#line 1438 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[45])));
#line 1438 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__PredPieces_29));
#line 1438 "det_report.m"
        }
#line 1431 "det_report.m"
      }
#line 1396 "det_report.m"
  }
#line 1391 "det_report.m"
}

#line 1383 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
#line 1383 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_4,
#line 1383 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1383 "det_report.m"
{
#line 1385 "det_report.m"
  {
#line 1385 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1385 "det_report.m"
    MR_String check_hlds__det_report__HeadVar__3_3;
#line 1385 "det_report.m"
    MR_Word check_hlds__det_report__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1385 "det_report.m"
    MR_Word check_hlds__det_report__MaybeArgVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 1385 "det_report.m"
    {
#line 1385 "det_report.m"
      return check_hlds__det_report__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0((MR_Integer) 1, check_hlds__det_report__VarSet_4, check_hlds__det_report__ConsId_5, check_hlds__det_report__MaybeArgVars_6);
    }
#line 1385 "det_report.m"
    return check_hlds__det_report__HeadVar__3_3;
#line 1385 "det_report.m"
  }
#line 1383 "det_report.m"
}

#line 1372 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
#line 1372 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1372 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 1372 "det_report.m"
{
#line 1372 "det_report.m"
  {
#line 1372 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 1372 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1372 "det_report.m"
    MR_String check_hlds__det_report__conv0_HeadVar__3_3;

#line 1372 "det_report.m"
    {
#line 1372 "det_report.m"
      check_hlds__det_report__conv0_HeadVar__3_3 = check_hlds__det_report__switch_match_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 1372 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__3_3));
#line 1372 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 1372 "det_report.m"
  }
#line 1372 "det_report.m"
}

#line 1362 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
#line 1362 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_1,
#line 1362 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1362 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__3_3)
#line 1362 "det_report.m"
{
#line 1365 "det_report.m"
  {
#line 1365 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1365 "det_report.m"
    if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1365 "det_report.m"
      *check_hlds__det_report__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1365 "det_report.m"
    else
#line 1367 "det_report.m"
      {
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_48_48;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContexts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__ProcInfo_9;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__VarSet_10;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__Var_11;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__MainMatch_12;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatches_13;
#line 1367 "det_report.m"
        MR_String check_hlds__det_report__MainMatchStr_14;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatchStrs_15;
#line 1367 "det_report.m"
        MR_String check_hlds__det_report__MatchsStr_16;
#line 1367 "det_report.m"
        MR_String check_hlds__det_report__VarStr_17;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__InnerPieces_18;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__OuterPieces_19;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__V_20_20;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__V_22_22;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__V_26_26;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__V_27_27;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__V_28_28;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__V_39_39;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_50;
#line 1367 "det_report.m"
        MR_Word check_hlds__det_report__MaybeArgVars_51;

#line 1368 "det_report.m"
        {
#line 1368 "det_report.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_1, &check_hlds__det_report__ProcInfo_9);
        }
#line 1369 "det_report.m"
        {
#line 1369 "det_report.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_9, &check_hlds__det_report__VarSet_10);
        }
#line 1370 "det_report.m"
        check_hlds__det_report__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 0)));
#line 1370 "det_report.m"
        check_hlds__det_report__MainMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 1)));
#line 1370 "det_report.m"
        check_hlds__det_report__OtherMatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 2)));
#line 1385 "det_report.m"
        check_hlds__det_report__ConsId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__MainMatch_12, (MR_Integer) 0)));
#line 1385 "det_report.m"
        check_hlds__det_report__MaybeArgVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__MainMatch_12, (MR_Integer) 1)));
#line 1385 "det_report.m"
        {
#line 1385 "det_report.m"
          check_hlds__det_report__MainMatchStr_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0((MR_Integer) 1, check_hlds__det_report__VarSet_10, check_hlds__det_report__ConsId_50, check_hlds__det_report__MaybeArgVars_51);
        }
#line 1372 "det_report.m"
        {
#line 1372 "det_report.m"
          check_hlds__det_report__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[2]));
#line 1372 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 1) = ((MR_Box) (check_hlds__det_report__det_diagnose_switch_context_3_p_0_1));
#line 1372 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1372 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 3) = ((MR_Box) (check_hlds__det_report__VarSet_10));
#line 1372 "det_report.m"
        }
#line 1372 "det_report.m"
        {
#line 1372 "det_report.m"
          check_hlds__det_report__OtherMatchStrs_15 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_report__V_20_20, check_hlds__det_report__OtherMatches_13);
        }
#line 1373 "det_report.m"
        {
#line 1373 "det_report.m"
          check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__MainMatchStr_14));
#line 1373 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (check_hlds__det_report__OtherMatchStrs_15));
#line 1373 "det_report.m"
        }
#line 1373 "det_report.m"
        {
#line 1373 "det_report.m"
          check_hlds__det_report__MatchsStr_16 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__det_report__V_22_22);
        }
#line 1374 "det_report.m"
        {
#line 1374 "det_report.m"
          check_hlds__det_report__VarStr_17 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_10, (MR_Integer) 0, check_hlds__det_report__Var_11);
        }
#line 1375 "det_report.m"
        {
#line 1375 "det_report.m"
          check_hlds__det_report__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1375 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__MatchsStr_16));
#line 1375 "det_report.m"
        }
#line 1376 "det_report.m"
        {
#line 1376 "det_report.m"
          check_hlds__det_report__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_32_32, 0) = ((MR_Box) (check_hlds__det_report__VarStr_17));
#line 1376 "det_report.m"
        }
#line 1376 "det_report.m"
        {
#line 1376 "det_report.m"
          check_hlds__det_report__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 0) = ((MR_Box) (check_hlds__det_report__V_32_32));
#line 1376 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[30])));
#line 1376 "det_report.m"
        }
#line 1375 "det_report.m"
        {
#line 1375 "det_report.m"
          check_hlds__det_report__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[85])));
#line 1375 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_28_28, 1) = ((MR_Box) (check_hlds__det_report__V_31_31));
#line 1375 "det_report.m"
        }
#line 1375 "det_report.m"
        {
#line 1375 "det_report.m"
          check_hlds__det_report__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_26_26, 0) = ((MR_Box) (check_hlds__det_report__V_27_27));
#line 1375 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_26_26, 1) = ((MR_Box) (check_hlds__det_report__V_28_28));
#line 1375 "det_report.m"
        }
#line 1375 "det_report.m"
        {
#line 1375 "det_report.m"
          check_hlds__det_report__InnerPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__InnerPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[84])));
#line 1375 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__InnerPieces_18, 1) = ((MR_Box) (check_hlds__det_report__V_26_26));
#line 1375 "det_report.m"
        }
#line 1377 "det_report.m"
        {
#line 1377 "det_report.m"
          check_hlds__det_report__det_diagnose_switch_context_3_p_0(check_hlds__det_report__DetInfo_1, check_hlds__det_report__SwitchContexts_7, &check_hlds__det_report__OuterPieces_19);
        }
#line 6563 "check_hlds.det_report.c"
        check_hlds__det_report__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1381 "det_report.m"
        {
#line 1381 "det_report.m"
          check_hlds__det_report__V_39_39 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_48_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[61]), check_hlds__det_report__InnerPieces_18);
        }
#line 1381 "det_report.m"
        {
#line 1381 "det_report.m"
          *check_hlds__det_report__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_48_48, check_hlds__det_report__OuterPieces_19, check_hlds__det_report__V_39_39);
        }
#line 1367 "det_report.m"
      }
#line 1365 "det_report.m"
  }
#line 1362 "det_report.m"
}

#line 1312 "det_report.m"
static void MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_2_p_0(
#line 1312 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1312 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__2_2)
#line 1312 "det_report.m"
{
#line 1315 "det_report.m"
  {
#line 1315 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1315 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1315 "det_report.m"
      *check_hlds__det_report__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1315 "det_report.m"
    else
#line 1316 "det_report.m"
      {
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__ConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1316 "det_report.m"
        MR_String check_hlds__det_report__ConsIdStr_6;
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__PiecesHead_7;
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__PiecesTail_12;

#line 1317 "det_report.m"
        {
#line 1317 "det_report.m"
          check_hlds__det_report__ConsIdStr_6 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(check_hlds__det_report__ConsId_3);
        }
#line 1321 "det_report.m"
        if ((check_hlds__det_report__ConsIds_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "det_report.m"
          {
#line 1319 "det_report.m"
            MR_Word check_hlds__det_report__V_24_24;
#line 1319 "det_report.m"
            MR_String check_hlds__det_report__V_25_25;

#line 1320 "det_report.m"
            {
#line 1320 "det_report.m"
              check_hlds__det_report__V_25_25 = mercury__string__f_43_43_2_f_0(check_hlds__det_report__ConsIdStr_6, (MR_String) ".");
            }
#line 1320 "det_report.m"
            {
#line 1320 "det_report.m"
              check_hlds__det_report__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_24_24, 0) = ((MR_Box) (check_hlds__det_report__V_25_25));
#line 1320 "det_report.m"
            }
#line 1320 "det_report.m"
            {
#line 1320 "det_report.m"
              check_hlds__det_report__PiecesHead_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_7, 0) = ((MR_Box) (check_hlds__det_report__V_24_24));
#line 1320 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "det_report.m"
            }
#line 1319 "det_report.m"
          }
#line 1321 "det_report.m"
        else
#line 1321 "det_report.m"
          {
#line 1321 "det_report.m"
            MR_Word check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ConsIds_4, (MR_Integer) 1)));
#line 1322 "det_report.m"
            MR_Word check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ConsIds_4, (MR_Integer) 0)));

#line 1321 "det_report.m"
            if ((check_hlds__det_report__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1322 "det_report.m"
              {
#line 1322 "det_report.m"
                MR_Word check_hlds__det_report__V_19_19;

#line 1323 "det_report.m"
                {
#line 1323 "det_report.m"
                  check_hlds__det_report__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_19_19, 0) = ((MR_Box) (check_hlds__det_report__ConsIdStr_6));
#line 1323 "det_report.m"
                }
#line 1323 "det_report.m"
                {
#line 1323 "det_report.m"
                  check_hlds__det_report__PiecesHead_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_7, 0) = ((MR_Box) (check_hlds__det_report__V_19_19));
#line 1323 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[83])));
#line 1323 "det_report.m"
                }
#line 1322 "det_report.m"
              }
#line 1321 "det_report.m"
            else
#line 1325 "det_report.m"
              {
#line 1325 "det_report.m"
                MR_Word check_hlds__det_report__V_14_14;
#line 1325 "det_report.m"
                MR_String check_hlds__det_report__V_15_15;

#line 1326 "det_report.m"
                {
#line 1326 "det_report.m"
                  check_hlds__det_report__V_15_15 = mercury__string__f_43_43_2_f_0(check_hlds__det_report__ConsIdStr_6, (MR_String) ",");
                }
#line 1326 "det_report.m"
                {
#line 1326 "det_report.m"
                  check_hlds__det_report__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_14_14, 0) = ((MR_Box) (check_hlds__det_report__V_15_15));
#line 1326 "det_report.m"
                }
#line 1326 "det_report.m"
                {
#line 1326 "det_report.m"
                  check_hlds__det_report__PiecesHead_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_7, 0) = ((MR_Box) (check_hlds__det_report__V_14_14));
#line 1326 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1326 "det_report.m"
                }
#line 1325 "det_report.m"
              }
#line 1321 "det_report.m"
          }
#line 1328 "det_report.m"
        {
#line 1328 "det_report.m"
          check_hlds__det_report__cons_id_list_to_pieces_2_p_0(check_hlds__det_report__ConsIds_4, &check_hlds__det_report__PiecesTail_12);
        }
#line 1329 "det_report.m"
        {
#line 1329 "det_report.m"
          *check_hlds__det_report__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__PiecesHead_7, check_hlds__det_report__PiecesTail_12);
        }
#line 1316 "det_report.m"
      }
#line 1315 "det_report.m"
  }
#line 1312 "det_report.m"
}

#line 1302 "det_report.m"
static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
#line 1302 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1302 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2,
#line 1302 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3)
#line 1302 "det_report.m"
{
#line 1305 "det_report.m"
  while (MR_TRUE)
#line 1305 "det_report.m"
    {
#line 1305 "det_report.m"
      /* tailcall optimized into a loop */
#line 1305 "det_report.m"
      {
#line 1305 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1305 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1305 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2;
#line 1305 "det_report.m"
        else
#line 1306 "det_report.m"
          {
#line 1306 "det_report.m"
            MR_Word check_hlds__det_report__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1306 "det_report.m"
            MR_Word check_hlds__det_report__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1306 "det_report.m"
            MR_Word check_hlds__det_report__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1306 "det_report.m"
            MR_Word check_hlds__det_report__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 0)));
#line 1306 "det_report.m"
            MR_Word check_hlds__det_report__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 1)));
#line 1306 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15;
#line 1306 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16;
#line 1307 "det_report.m"
            MR_Word check_hlds__det_report___Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 2)));

#line 1308 "det_report.m"
            {
#line 1308 "det_report.m"
              mercury__set_tree234__insert_3_p_0(check_hlds__det_report__TypeCtorInfo_18_18, ((MR_Box) (check_hlds__det_report__MainConsId_10)), check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2, &check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15);
            }
#line 1309 "det_report.m"
            {
#line 1309 "det_report.m"
              mercury__set_tree234__insert_list_3_p_0(check_hlds__det_report__TypeCtorInfo_18_18, check_hlds__det_report__OtherConsIds_11, check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15, &check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16);
            }
#line 1310 "det_report.m"
            /* direct tailcall eliminated */
#line 1310 "det_report.m"
            {
#line 1310 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Cases_8;
#line 1310 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16;

#line 1310 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0__tmp_copy_2;
#line 1310 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1310 "det_report.m"
            }
#line 1310 "det_report.m"
            continue;
#line 1306 "det_report.m"
          }
#line 1305 "det_report.m"
      }
#line 1305 "det_report.m"
      break;
#line 1305 "det_report.m"
    }
#line 1302 "det_report.m"
}

#line 1289 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_uncovered_consids_4_p_0(
#line 1289 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1289 "det_report.m"
  MR_Word check_hlds__det_report__CoveredConsIds_2,
#line 1289 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3,
#line 1289 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4)
#line 1289 "det_report.m"
{
#line 1292 "det_report.m"
  while (MR_TRUE)
#line 1292 "det_report.m"
    {
#line 1292 "det_report.m"
      /* tailcall optimized into a loop */
#line 1292 "det_report.m"
      {
#line 1292 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1292 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1292 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3;
#line 1292 "det_report.m"
        else
#line 1294 "det_report.m"
          {
#line 1294 "det_report.m"
            MR_Word check_hlds__det_report__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1294 "det_report.m"
            MR_Word check_hlds__det_report__ConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1294 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15;

#line 1295 "det_report.m"
            {
#line 1295 "det_report.m"
              check_hlds__det_report__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__CoveredConsIds_2, ((MR_Box) (check_hlds__det_report__ConsId_9)));
            }
#line 1297 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1295 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3;
#line 1297 "det_report.m"
            else
#line 1298 "det_report.m"
              {
#line 1298 "det_report.m"
                check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15, 0) = ((MR_Box) (check_hlds__det_report__ConsId_9));
#line 1298 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3));
#line 1298 "det_report.m"
              }
#line 1300 "det_report.m"
            /* direct tailcall eliminated */
#line 1300 "det_report.m"
            {
#line 1300 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__ConsIds_10;
#line 1300 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15;

#line 1300 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0__tmp_copy_3;
#line 1300 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1300 "det_report.m"
            }
#line 1300 "det_report.m"
            continue;
#line 1294 "det_report.m"
          }
#line 1292 "det_report.m"
      }
#line 1292 "det_report.m"
      break;
#line 1292 "det_report.m"
    }
#line 1289 "det_report.m"
}

#line 1265 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0_1(
#line 1265 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1265 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1265 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2)
#line 1265 "det_report.m"
{
#line 1265 "det_report.m"
  {
#line 1265 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1265 "det_report.m"
    MR_Word check_hlds__det_report__conv0_HeadVar__3_3;

#line 1265 "det_report.m"
    {
#line 1265 "det_report.m"
      parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_report__wrapper_arg_1), &check_hlds__det_report__conv0_HeadVar__3_3);
    }
#line 1265 "det_report.m"
    *check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__3_3));
#line 1265 "det_report.m"
  }
#line 1265 "det_report.m"
}

#line 1248 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0(
#line 1248 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_7,
#line 1248 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_8,
#line 1248 "det_report.m"
  MR_Word check_hlds__det_report__Var_9,
#line 1248 "det_report.m"
  MR_Word check_hlds__det_report__Cases_10,
#line 1248 "det_report.m"
  MR_String * check_hlds__det_report__VarStr_11,
#line 1248 "det_report.m"
  MR_Word * check_hlds__det_report__MaybeMissingPieces_12)
#line 1248 "det_report.m"
{
#line 1252 "det_report.m"
  {
#line 1252 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1252 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_13;
#line 1252 "det_report.m"
    MR_Word check_hlds__det_report__VarSet_14;
#line 1252 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_15;
#line 1277 "det_report.m"
    MR_Word check_hlds__det_report__ConsIds_21;
#line 1267 "det_report.m"
    MR_Word check_hlds__det_report__BoundInsts_17;
#line 1259 "det_report.m"
    MR_Word check_hlds__det_report__VarInst_16;

#line 1253 "det_report.m"
    {
#line 1253 "det_report.m"
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__ProcInfo_13);
    }
#line 1254 "det_report.m"
    {
#line 1254 "det_report.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_13, &check_hlds__det_report__VarSet_14);
    }
#line 1255 "det_report.m"
    {
#line 1255 "det_report.m"
      *check_hlds__det_report__VarStr_11 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_14, (MR_Integer) 0, check_hlds__det_report__Var_9);
    }
#line 1256 "det_report.m"
    {
#line 1256 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__ModuleInfo_15);
    }
#line 1259 "det_report.m"
    {
#line 1259 "det_report.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__det_report__InstMap0_8, check_hlds__det_report__Var_9, &check_hlds__det_report__VarInst_16);
    }
#line 1260 "det_report.m"
    {
#line 1260 "det_report.m"
      check_hlds__det_report__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__VarInst_16, &check_hlds__det_report__BoundInsts_17);
    }
#line 1267 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1262 "det_report.m"
      {
#line 1262 "det_report.m"
        MR_Word check_hlds__det_report__VarTypes_18;
#line 1262 "det_report.m"
        MR_Word check_hlds__det_report__VarType_19;
#line 1262 "det_report.m"
        MR_Word check_hlds__det_report__VarTypeCtor_20;
#line 1262 "det_report.m"
        MR_Word check_hlds__det_report__V_28_28;

#line 1262 "det_report.m"
        {
#line 1262 "det_report.m"
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__VarTypes_18);
        }
#line 1263 "det_report.m"
        {
#line 1263 "det_report.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_18, check_hlds__det_report__Var_9, &check_hlds__det_report__VarType_19);
        }
#line 1264 "det_report.m"
        {
#line 1264 "det_report.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__det_report__VarType_19, &check_hlds__det_report__VarTypeCtor_20);
        }
#line 1265 "det_report.m"
        {
#line 1265 "det_report.m"
          check_hlds__det_report__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[1]));
#line 1265 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 1) = ((MR_Box) (check_hlds__det_report__find_missing_cons_ids_6_p_0_1));
#line 1265 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1265 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 3) = ((MR_Box) (check_hlds__det_report__VarTypeCtor_20));
#line 1265 "det_report.m"
        }
#line 1265 "det_report.m"
        {
#line 1265 "det_report.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__V_28_28, check_hlds__det_report__BoundInsts_17, &check_hlds__det_report__ConsIds_21);
        }
#line 1262 "det_report.m"
        check_hlds__det_report__succeeded = MR_TRUE;
#line 1262 "det_report.m"
      }
#line 1267 "det_report.m"
    else
#line 1268 "det_report.m"
      {
#line 1268 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_42_42;
#line 1268 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_43_43;
#line 1268 "det_report.m"
        MR_Word check_hlds__det_report__TypeDefn_22;
#line 1268 "det_report.m"
        MR_Word check_hlds__det_report__TypeBody_23;
#line 1268 "det_report.m"
        MR_Word check_hlds__det_report__ConsTable_24;
#line 1270 "det_report.m"
        MR_Word check_hlds__det_report__V_29_29;
#line 1270 "det_report.m"
        MR_Word check_hlds__det_report__V_30_30;
#line 1270 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 1270 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;
#line 1270 "det_report.m"
        MR_Word check_hlds__det_report__V_33_33;
#line 1270 "det_report.m"
        MR_Word check_hlds__det_report__V_34_34;
#line 1270 "det_report.m"
        MR_Word check_hlds__det_report__V_35_35;
#line 1270 "det_report.m"
        MR_Word check_hlds__det_report__V_36_36;

#line 1268 "det_report.m"
        {
#line 1268 "det_report.m"
          check_hlds__det_report__succeeded = check_hlds__det_util__det_lookup_var_type_4_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__ProcInfo_13, check_hlds__det_report__Var_9, &check_hlds__det_report__TypeDefn_22);
        }
#line 1268 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1268 "det_report.m"
          {
#line 1269 "det_report.m"
            {
#line 1269 "det_report.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__det_report__TypeDefn_22, &check_hlds__det_report__TypeBody_23);
            }
#line 1270 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__TypeBody_23)) == (MR_mktag((MR_Integer) 1)));
#line 1270 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1270 "det_report.m"
              {
#line 1270 "det_report.m"
                check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 0)));
#line 1270 "det_report.m"
                check_hlds__det_report__ConsTable_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 1)));
#line 1270 "det_report.m"
                check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 2)));
#line 1270 "det_report.m"
                check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 3)));
#line 1270 "det_report.m"
                check_hlds__det_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 4)));
#line 1270 "det_report.m"
                check_hlds__det_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 5)));
#line 1270 "det_report.m"
                check_hlds__det_report__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1270 "det_report.m"
                check_hlds__det_report__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1270 "det_report.m"
                check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 7)));
#line 7130 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7132 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1271 "det_report.m"
                {
#line 1271 "det_report.m"
                  mercury__map__keys_2_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__TypeCtorInfo_43_43, check_hlds__det_report__ConsTable_24, &check_hlds__det_report__ConsIds_21);
                }
#line 1271 "det_report.m"
                check_hlds__det_report__succeeded = MR_TRUE;
#line 1270 "det_report.m"
              }
#line 1268 "det_report.m"
          }
#line 1268 "det_report.m"
      }
#line 1277 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1274 "det_report.m"
      {
#line 1274 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_11_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1274 "det_report.m"
        MR_Word check_hlds__det_report__MissingConsIds_25;
#line 1274 "det_report.m"
        MR_Word check_hlds__det_report__MissingPieces_26;
#line 1274 "det_report.m"
        MR_Word check_hlds__det_report__CoveredConsIds_47;
#line 1274 "det_report.m"
        MR_Word check_hlds__det_report__RevMissingConsIds_48;
#line 1274 "det_report.m"
        MR_Word check_hlds__det_report__V_49_49;

#line 1285 "det_report.m"
        {
#line 1285 "det_report.m"
          check_hlds__det_report__V_49_49 = mercury__set_tree234__init_0_f_0(check_hlds__det_report__TypeCtorInfo_11_51);
        }
#line 1285 "det_report.m"
        {
#line 1285 "det_report.m"
          check_hlds__det_report__compute_covered_cons_ids_3_p_0(check_hlds__det_report__Cases_10, check_hlds__det_report__V_49_49, &check_hlds__det_report__CoveredConsIds_47);
        }
#line 1286 "det_report.m"
        {
#line 1286 "det_report.m"
          check_hlds__det_report__find_uncovered_consids_4_p_0(check_hlds__det_report__ConsIds_21, check_hlds__det_report__CoveredConsIds_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__RevMissingConsIds_48);
        }
#line 1287 "det_report.m"
        {
#line 1287 "det_report.m"
          mercury__list__reverse_2_p_0(check_hlds__det_report__TypeCtorInfo_11_51, check_hlds__det_report__RevMissingConsIds_48, &check_hlds__det_report__MissingConsIds_25);
        }
#line 1275 "det_report.m"
        {
#line 1275 "det_report.m"
          check_hlds__det_report__cons_id_list_to_pieces_2_p_0(check_hlds__det_report__MissingConsIds_25, &check_hlds__det_report__MissingPieces_26);
        }
#line 1276 "det_report.m"
        {
#line 1276 "det_report.m"
          MR_Word base;
#line 1276 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "det_report.m"
          *check_hlds__det_report__MaybeMissingPieces_12 = base;
#line 1276 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__MissingPieces_26));
#line 1276 "det_report.m"
        }
#line 1274 "det_report.m"
      }
#line 1277 "det_report.m"
    else
#line 1278 "det_report.m"
      *check_hlds__det_report__MaybeMissingPieces_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1252 "det_report.m"
  }
#line 1248 "det_report.m"
}

#line 1237 "det_report.m"
static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
#line 1237 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1237 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1237 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0_3,
#line 1237 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_InstMap_4)
#line 1237 "det_report.m"
{
#line 1240 "det_report.m"
  while (MR_TRUE)
#line 1240 "det_report.m"
    {
#line 1240 "det_report.m"
      /* tailcall optimized into a loop */
#line 1240 "det_report.m"
      {
#line 1240 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1240 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1240 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_InstMap_4 = check_hlds__det_report__STATE_VARIABLE_InstMap_0_3;
#line 1240 "det_report.m"
        else
#line 1241 "det_report.m"
          {
#line 1241 "det_report.m"
            MR_Word check_hlds__det_report__Var_9;
#line 1241 "det_report.m"
            MR_Word check_hlds__det_report__Mode_10;
#line 1241 "det_report.m"
            MR_Word check_hlds__det_report__VarsModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1241 "det_report.m"
            MR_Word check_hlds__det_report__InitInst_14;
#line 1241 "det_report.m"
            MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1241 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_19_19;
#line 1242 "det_report.m"
            MR_Word check_hlds__det_report___FinalInst_15;

#line 1241 "det_report.m"
            check_hlds__det_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_18_18, (MR_Integer) 0)));
#line 1241 "det_report.m"
            check_hlds__det_report__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_18_18, (MR_Integer) 1)));
#line 1242 "det_report.m"
            {
#line 1242 "det_report.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__Mode_10, &check_hlds__det_report__InitInst_14, &check_hlds__det_report___FinalInst_15);
            }
#line 1243 "det_report.m"
            {
#line 1243 "det_report.m"
              hlds__instmap__instmap_set_var_4_p_0(check_hlds__det_report__Var_9, check_hlds__det_report__InitInst_14, check_hlds__det_report__STATE_VARIABLE_InstMap_0_3, &check_hlds__det_report__STATE_VARIABLE_InstMap_19_19);
            }
#line 1244 "det_report.m"
            /* direct tailcall eliminated */
#line 1244 "det_report.m"
            {
#line 1244 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__VarsModes_11;
#line 1244 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_InstMap_19_19;

#line 1244 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_InstMap_0_3 = check_hlds__det_report__STATE_VARIABLE_InstMap_0__tmp_copy_3;
#line 1244 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1244 "det_report.m"
            }
#line 1244 "det_report.m"
            continue;
#line 1241 "det_report.m"
          }
#line 1240 "det_report.m"
      }
#line 1240 "det_report.m"
      break;
#line 1240 "det_report.m"
    }
#line 1237 "det_report.m"
}

#line 1222 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_switch_6_p_0(
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1222 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 1222 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6)
#line 1222 "det_report.m"
{
#line 1225 "det_report.m"
  while (MR_TRUE)
#line 1225 "det_report.m"
    {
#line 1225 "det_report.m"
      /* tailcall optimized into a loop */
#line 1225 "det_report.m"
      {
#line 1225 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1225 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1225 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 1225 "det_report.m"
        else
#line 1226 "det_report.m"
          {
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 0)));
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 1)));
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 2)));
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo0_22;
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_23;
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo_24;
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27;
#line 1226 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;

#line 1228 "det_report.m"
            {
#line 1228 "det_report.m"
              check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__ModuleInfo0_22);
            }
#line 1229 "det_report.m"
            {
#line 1229 "det_report.m"
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__MainConsId_19, check_hlds__det_report__OtherConsIds_20, check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__InstMap1_23, check_hlds__det_report__ModuleInfo0_22, &check_hlds__det_report__ModuleInfo_24);
            }
#line 1231 "det_report.m"
            {
#line 1231 "det_report.m"
              check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_24, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27);
            }
#line 1232 "det_report.m"
            {
#line 1232 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_21, check_hlds__det_report__InstMap1_23, check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27, &check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28);
            }
#line 1233 "det_report.m"
            /* direct tailcall eliminated */
#line 1233 "det_report.m"
            {
#line 1233 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__3__tmp_copy_3 = check_hlds__det_report__Cases_16;
#line 1233 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_5 = check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;

#line 1233 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_5;
#line 1233 "det_report.m"
              check_hlds__det_report__HeadVar__3_3 = check_hlds__det_report__HeadVar__3__tmp_copy_3;
#line 1233 "det_report.m"
            }
#line 1233 "det_report.m"
            continue;
#line 1226 "det_report.m"
          }
#line 1225 "det_report.m"
      }
#line 1225 "det_report.m"
      break;
#line 1225 "det_report.m"
    }
#line 1222 "det_report.m"
}

#line 1214 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_4_p_0(
#line 1214 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1214 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1214 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1214 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4)
#line 1214 "det_report.m"
{
#line 1217 "det_report.m"
  while (MR_TRUE)
#line 1217 "det_report.m"
    {
#line 1217 "det_report.m"
      /* tailcall optimized into a loop */
#line 1217 "det_report.m"
      {
#line 1217 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1217 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_4 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3;
#line 1217 "det_report.m"
        else
#line 1218 "det_report.m"
          {
#line 1218 "det_report.m"
            MR_Word check_hlds__det_report__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1218 "det_report.m"
            MR_Word check_hlds__det_report__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1218 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15;

#line 1219 "det_report.m"
            {
#line 1219 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3, &check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15);
            }
#line 1220 "det_report.m"
            /* direct tailcall eliminated */
#line 1220 "det_report.m"
            {
#line 1220 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Goals_10;
#line 1220 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15;

#line 1220 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3;
#line 1220 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1220 "det_report.m"
            }
#line 1220 "det_report.m"
            continue;
#line 1218 "det_report.m"
          }
#line 1217 "det_report.m"
      }
#line 1217 "det_report.m"
      break;
#line 1217 "det_report.m"
    }
#line 1214 "det_report.m"
}

#line 1205 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_4_p_0(
#line 1205 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1205 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1205 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1205 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4)
#line 1205 "det_report.m"
{
#line 1208 "det_report.m"
  while (MR_TRUE)
#line 1208 "det_report.m"
    {
#line 1208 "det_report.m"
      /* tailcall optimized into a loop */
#line 1208 "det_report.m"
      {
#line 1208 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1208 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1208 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_4 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3;
#line 1208 "det_report.m"
        else
#line 1209 "det_report.m"
          {
#line 1209 "det_report.m"
            MR_Word check_hlds__det_report__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1209 "det_report.m"
            MR_Word check_hlds__det_report__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1209 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_13;
#line 1209 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16;

#line 1210 "det_report.m"
            {
#line 1210 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3, &check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16);
            }
#line 1211 "det_report.m"
            {
#line 1211 "det_report.m"
              hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, &check_hlds__det_report__InstMap1_13);
            }
#line 1212 "det_report.m"
            /* direct tailcall eliminated */
#line 1212 "det_report.m"
            {
#line 1212 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Goals_10;
#line 1212 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__2__tmp_copy_2 = check_hlds__det_report__InstMap1_13;
#line 1212 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16;

#line 1212 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3;
#line 1212 "det_report.m"
              check_hlds__det_report__HeadVar__2_2 = check_hlds__det_report__HeadVar__2__tmp_copy_2;
#line 1212 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1212 "det_report.m"
            }
#line 1212 "det_report.m"
            continue;
#line 1209 "det_report.m"
          }
#line 1208 "det_report.m"
      }
#line 1208 "det_report.m"
      break;
#line 1208 "det_report.m"
    }
#line 1205 "det_report.m"
}

#line 1082 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_6_p_0(
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__Reason_7,
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__SubGoal_8,
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_9,
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1082 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58,
#line 1082 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_59)
#line 1082 "det_report.m"
{
#line 1087 "det_report.m"
  {
#line 1087 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1087 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 0))))
#line 1195 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1087 "det_report.m"
    else
#line 1087 "det_report.m"
      if (((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 2))))
#line 1198 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1087 "det_report.m"
      else
#line 1087 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 1))))
#line 1199 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1087 "det_report.m"
        else
#line 1087 "det_report.m"
          if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1197 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1087 "det_report.m"
          else
#line 1087 "det_report.m"
            if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1196 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1087 "det_report.m"
            else
#line 1087 "det_report.m"
              if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1200 "det_report.m"
                *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1087 "det_report.m"
              else
#line 1087 "det_report.m"
                if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1171 "det_report.m"
                  {
#line 1171 "det_report.m"
                    MR_Word check_hlds__det_report__Detism_44;
#line 1171 "det_report.m"
                    MR_Word check_hlds__det_report__SubGoalInfo_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1172 "det_report.m"
                    MR_Word check_hlds__det_report__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));

#line 1173 "det_report.m"
                    {
#line 1173 "det_report.m"
                      check_hlds__det_report__Detism_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_148);
                    }
#line 1178 "det_report.m"
                    if ((check_hlds__det_report__Detism_44 == (MR_Integer) 4))
#line 1176 "det_report.m"
                      {
#line 1176 "det_report.m"
                      }
#line 1178 "det_report.m"
                    else
#line 1178 "det_report.m"
                      if ((check_hlds__det_report__Detism_44 == (MR_Integer) 0))
#line 1175 "det_report.m"
                        {
#line 1175 "det_report.m"
                        }
#line 1178 "det_report.m"
                      else
#line 1187 "det_report.m"
                        {
#line 1191 "det_report.m"
                          {
#line 1191 "det_report.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.reqscope_check_scope\'/6", (MR_String) "Loop control scope with strange determinism");
#line 1191 "det_report.m"
                            return;
                          }
#line 1187 "det_report.m"
                        }
#line 1191 "det_report.m"
                    *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1171 "det_report.m"
                  }
#line 1087 "det_report.m"
                else
#line 1087 "det_report.m"
                  if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1106 "det_report.m"
                    {
#line 1106 "det_report.m"
                      MR_Word check_hlds__det_report__RequiredVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
#line 1106 "det_report.m"
                      MR_Word check_hlds__det_report__SubGoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));
#line 1111 "det_report.m"
                      MR_Word check_hlds__det_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1142 "det_report.m"
                      MR_Word check_hlds__det_report__SwitchVar_25;
#line 1142 "det_report.m"
                      MR_Word check_hlds__det_report__CanFail_26;
#line 1142 "det_report.m"
                      MR_Word check_hlds__det_report__Cases_27;
#line 1113 "det_report.m"
                      MR_Word check_hlds__det_report__TypeInfo_151_151;

#line 1113 "det_report.m"
                      check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__SubGoalExpr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_23, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1113 "det_report.m"
                      if (check_hlds__det_report__succeeded)
#line 1113 "det_report.m"
                        {
#line 1113 "det_report.m"
                          check_hlds__det_report__SwitchVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_23, (MR_Integer) 1)));
#line 1113 "det_report.m"
                          check_hlds__det_report__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_23, (MR_Integer) 2)));
#line 1113 "det_report.m"
                          check_hlds__det_report__Cases_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_23, (MR_Integer) 3)));
#line 7699 "check_hlds.det_report.c"
                          check_hlds__det_report__TypeInfo_151_151 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 1114 "det_report.m"
                          {
#line 1114 "det_report.m"
                            check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_151_151, ((MR_Box) (check_hlds__det_report__SwitchVar_25)), ((MR_Box) (check_hlds__det_report__RequiredVar_22)));
                          }
#line 1113 "det_report.m"
                        }
#line 1142 "det_report.m"
                      if (check_hlds__det_report__succeeded)
#line 1118 "det_report.m"
                        if ((check_hlds__det_report__CanFail_26 == (MR_Integer) 0))
#line 1119 "det_report.m"
                          {
#line 1119 "det_report.m"
                            MR_String check_hlds__det_report__VarStr_28;
#line 1119 "det_report.m"
                            MR_Word check_hlds__det_report__MaybeMissingPieces_29;
#line 1119 "det_report.m"
                            MR_Word check_hlds__det_report__SwitchPieces_31;
#line 1119 "det_report.m"
                            MR_Word check_hlds__det_report__SwitchMsg_32;
#line 1119 "det_report.m"
                            MR_Word check_hlds__det_report__SwitchSpec_33;
#line 1119 "det_report.m"
                            MR_Word check_hlds__det_report__V_84_84;
#line 1119 "det_report.m"
                            MR_Word check_hlds__det_report__V_85_85;
#line 1119 "det_report.m"
                            MR_Word check_hlds__det_report__V_89_89;
#line 1119 "det_report.m"
                            MR_Word check_hlds__det_report__Context_138;

#line 1120 "det_report.m"
                            {
#line 1120 "det_report.m"
                              check_hlds__det_report__find_missing_cons_ids_6_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58, check_hlds__det_report__InstMap0_10, check_hlds__det_report__SwitchVar_25, check_hlds__det_report__Cases_27, &check_hlds__det_report__VarStr_28, &check_hlds__det_report__MaybeMissingPieces_29);
                            }
#line 1128 "det_report.m"
                            if ((check_hlds__det_report__MaybeMissingPieces_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1129 "det_report.m"
                              {
#line 1129 "det_report.m"
                                MR_Word check_hlds__det_report__V_65_65;
#line 1129 "det_report.m"
                                MR_Word check_hlds__det_report__V_66_66;

#line 1131 "det_report.m"
                                {
#line 1131 "det_report.m"
                                  check_hlds__det_report__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "det_report.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_report__V_66_66, 0) = ((MR_Box) (check_hlds__det_report__VarStr_28));
#line 1131 "det_report.m"
                                }
#line 1130 "det_report.m"
                                {
#line 1130 "det_report.m"
                                  check_hlds__det_report__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_65_65, 0) = ((MR_Box) (check_hlds__det_report__V_66_66));
#line 1130 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[24])));
#line 1130 "det_report.m"
                                }
#line 1130 "det_report.m"
                                {
#line 1130 "det_report.m"
                                  check_hlds__det_report__SwitchPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[77])));
#line 1130 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_31, 1) = ((MR_Box) (check_hlds__det_report__V_65_65));
#line 1130 "det_report.m"
                                }
#line 1129 "det_report.m"
                              }
#line 1128 "det_report.m"
                            else
#line 1123 "det_report.m"
                              {
#line 1123 "det_report.m"
                                MR_Word check_hlds__det_report__MissingPieces_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeMissingPieces_29, (MR_Integer) 0)));
#line 1123 "det_report.m"
                                MR_Word check_hlds__det_report__V_76_76;
#line 1123 "det_report.m"
                                MR_Word check_hlds__det_report__V_77_77;
#line 1123 "det_report.m"
                                MR_Word check_hlds__det_report__V_78_78;
#line 1123 "det_report.m"
                                MR_Word check_hlds__det_report__V_81_81;

#line 1125 "det_report.m"
                                {
#line 1125 "det_report.m"
                                  check_hlds__det_report__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "det_report.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_report__V_77_77, 0) = ((MR_Box) (check_hlds__det_report__VarStr_28));
#line 1125 "det_report.m"
                                }
#line 1126 "det_report.m"
                                {
#line 1126 "det_report.m"
                                  check_hlds__det_report__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[79])));
#line 1126 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_81_81, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces_30));
#line 1126 "det_report.m"
                                }
#line 1125 "det_report.m"
                                {
#line 1125 "det_report.m"
                                  check_hlds__det_report__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[78])));
#line 1125 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 1) = ((MR_Box) (check_hlds__det_report__V_81_81));
#line 1125 "det_report.m"
                                }
#line 1124 "det_report.m"
                                {
#line 1124 "det_report.m"
                                  check_hlds__det_report__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_76_76, 0) = ((MR_Box) (check_hlds__det_report__V_77_77));
#line 1124 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_76_76, 1) = ((MR_Box) (check_hlds__det_report__V_78_78));
#line 1124 "det_report.m"
                                }
#line 1124 "det_report.m"
                                {
#line 1124 "det_report.m"
                                  check_hlds__det_report__SwitchPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[77])));
#line 1124 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_31, 1) = ((MR_Box) (check_hlds__det_report__V_76_76));
#line 1124 "det_report.m"
                                }
#line 1123 "det_report.m"
                              }
#line 1135 "det_report.m"
                            {
#line 1135 "det_report.m"
                              check_hlds__det_report__Context_138 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_9);
                            }
#line 1137 "det_report.m"
                            {
#line 1137 "det_report.m"
                              check_hlds__det_report__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_85_85, 0) = ((MR_Box) (check_hlds__det_report__SwitchPieces_31));
#line 1137 "det_report.m"
                            }
#line 1136 "det_report.m"
                            {
#line 1136 "det_report.m"
                              check_hlds__det_report__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_84_84, 0) = ((MR_Box) (check_hlds__det_report__V_85_85));
#line 1136 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1136 "det_report.m"
                            }
#line 1136 "det_report.m"
                            {
#line 1136 "det_report.m"
                              check_hlds__det_report__SwitchMsg_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchMsg_32, 0) = ((MR_Box) (check_hlds__det_report__Context_138));
#line 1136 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchMsg_32, 1) = ((MR_Box) (check_hlds__det_report__V_84_84));
#line 1136 "det_report.m"
                            }
#line 1138 "det_report.m"
                            {
#line 1138 "det_report.m"
                              check_hlds__det_report__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_89_89, 0) = ((MR_Box) (check_hlds__det_report__SwitchMsg_32));
#line 1138 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "det_report.m"
                            }
#line 1138 "det_report.m"
                            {
#line 1138 "det_report.m"
                              check_hlds__det_report__SwitchSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1138 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_33, 2) = ((MR_Box) (check_hlds__det_report__V_89_89));
#line 1138 "det_report.m"
                            }
#line 1140 "det_report.m"
                            {
#line 1140 "det_report.m"
                              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__SwitchSpec_33, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58, check_hlds__det_report__STATE_VARIABLE_DetInfo_59);
#line 1140 "det_report.m"
                              return;
                            }
#line 1119 "det_report.m"
                          }
#line 1118 "det_report.m"
                        else
#line 1117 "det_report.m"
                          *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1142 "det_report.m"
                      else
#line 1150 "det_report.m"
                        {
#line 1150 "det_report.m"
                          MR_Word check_hlds__det_report__SubGoalVars_34;

#line 1150 "det_report.m"
                          {
#line 1150 "det_report.m"
                            hlds__goal_util__goal_vars_2_p_0(check_hlds__det_report__SubGoal_8, &check_hlds__det_report__SubGoalVars_34);
                          }
#line 1151 "det_report.m"
                          {
#line 1151 "det_report.m"
                            check_hlds__det_report__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__SubGoalVars_34, check_hlds__det_report__RequiredVar_22);
                          }
#line 1153 "det_report.m"
                          if (check_hlds__det_report__succeeded)
#line 1151 "det_report.m"
                            *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1153 "det_report.m"
                          else
#line 1154 "det_report.m"
                            {
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__ProcInfo_35;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__VarSet_36;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__MissingRequiredPieces_37;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__MissingRequiredMsg_38;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__MissingRequiredSpec_39;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__V_95_95;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__V_96_96;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__V_104_104;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__V_105_105;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__V_109_109;
#line 1154 "det_report.m"
                              MR_Word check_hlds__det_report__Context_140;
#line 1154 "det_report.m"
                              MR_String check_hlds__det_report__VarStr_141;

#line 1154 "det_report.m"
                              {
#line 1154 "det_report.m"
                                check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58, &check_hlds__det_report__ProcInfo_35);
                              }
#line 1155 "det_report.m"
                              {
#line 1155 "det_report.m"
                                hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_35, &check_hlds__det_report__VarSet_36);
                              }
#line 1156 "det_report.m"
                              {
#line 1156 "det_report.m"
                                check_hlds__det_report__VarStr_141 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_36, (MR_Integer) 0, check_hlds__det_report__RequiredVar_22);
                              }
#line 1158 "det_report.m"
                              {
#line 1158 "det_report.m"
                                check_hlds__det_report__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "det_report.m"
                                MR_hl_field(MR_mktag(2), check_hlds__det_report__V_96_96, 0) = ((MR_Box) (check_hlds__det_report__VarStr_141));
#line 1158 "det_report.m"
                              }
#line 1158 "det_report.m"
                              {
#line 1158 "det_report.m"
                                check_hlds__det_report__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_95_95, 0) = ((MR_Box) (check_hlds__det_report__V_96_96));
#line 1158 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[28])));
#line 1158 "det_report.m"
                              }
#line 1157 "det_report.m"
                              {
#line 1157 "det_report.m"
                                check_hlds__det_report__MissingRequiredPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__MissingRequiredPieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[80])));
#line 1157 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__MissingRequiredPieces_37, 1) = ((MR_Box) (check_hlds__det_report__V_95_95));
#line 1157 "det_report.m"
                              }
#line 1162 "det_report.m"
                              {
#line 1162 "det_report.m"
                                check_hlds__det_report__Context_140 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_9);
                              }
#line 1164 "det_report.m"
                              {
#line 1164 "det_report.m"
                                check_hlds__det_report__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_105_105, 0) = ((MR_Box) (check_hlds__det_report__MissingRequiredPieces_37));
#line 1164 "det_report.m"
                              }
#line 1163 "det_report.m"
                              {
#line 1163 "det_report.m"
                                check_hlds__det_report__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_104_104, 0) = ((MR_Box) (check_hlds__det_report__V_105_105));
#line 1163 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "det_report.m"
                              }
#line 1163 "det_report.m"
                              {
#line 1163 "det_report.m"
                                check_hlds__det_report__MissingRequiredMsg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredMsg_38, 0) = ((MR_Box) (check_hlds__det_report__Context_140));
#line 1163 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredMsg_38, 1) = ((MR_Box) (check_hlds__det_report__V_104_104));
#line 1163 "det_report.m"
                              }
#line 1165 "det_report.m"
                              {
#line 1165 "det_report.m"
                                check_hlds__det_report__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_109_109, 0) = ((MR_Box) (check_hlds__det_report__MissingRequiredMsg_38));
#line 1165 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1165 "det_report.m"
                              }
#line 1165 "det_report.m"
                              {
#line 1165 "det_report.m"
                                check_hlds__det_report__MissingRequiredSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1165 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1165 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_39, 2) = ((MR_Box) (check_hlds__det_report__V_109_109));
#line 1165 "det_report.m"
                              }
#line 1167 "det_report.m"
                              {
#line 1167 "det_report.m"
                                check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__MissingRequiredSpec_39, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58, check_hlds__det_report__STATE_VARIABLE_DetInfo_59);
#line 1167 "det_report.m"
                                return;
                              }
#line 1154 "det_report.m"
                            }
#line 1150 "det_report.m"
                        }
#line 1106 "det_report.m"
                    }
#line 1087 "det_report.m"
                  else
#line 1087 "det_report.m"
                    if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1087 "det_report.m"
                      {
#line 1087 "det_report.m"
                        MR_Word check_hlds__det_report__RequiredDetism_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
#line 1087 "det_report.m"
                        MR_Word check_hlds__det_report__SubGoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1087 "det_report.m"
                        MR_Word check_hlds__det_report__ActualDetism_15;
#line 1088 "det_report.m"
                        MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));

#line 1089 "det_report.m"
                        {
#line 1089 "det_report.m"
                          check_hlds__det_report__ActualDetism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_14);
                        }
#line 1090 "det_report.m"
                        check_hlds__det_report__succeeded = (check_hlds__det_report__ActualDetism_15 == check_hlds__det_report__RequiredDetism_12);
#line 1092 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 1090 "det_report.m"
                          *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1092 "det_report.m"
                        else
#line 1093 "det_report.m"
                          {
#line 1093 "det_report.m"
                            MR_String check_hlds__det_report__RequiredDetismStr_16;
#line 1093 "det_report.m"
                            MR_String check_hlds__det_report__ActualDetismStr_17;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__DetismPieces_18;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__Context_19;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__DetismMsg_20;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__DetismSpec_21;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_114_114;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_115_115;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_116_116;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_119_119;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_122_122;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_123_123;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_130_130;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_131_131;
#line 1093 "det_report.m"
                            MR_Word check_hlds__det_report__V_135_135;

#line 1093 "det_report.m"
                            {
#line 1093 "det_report.m"
                              check_hlds__det_report__RequiredDetismStr_16 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__RequiredDetism_12);
                            }
#line 1094 "det_report.m"
                            {
#line 1094 "det_report.m"
                              check_hlds__det_report__ActualDetismStr_17 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__ActualDetism_15);
                            }
#line 1096 "det_report.m"
                            {
#line 1096 "det_report.m"
                              check_hlds__det_report__V_115_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "det_report.m"
                              MR_hl_field(MR_mktag(2), check_hlds__det_report__V_115_115, 0) = ((MR_Box) (check_hlds__det_report__RequiredDetismStr_16));
#line 1096 "det_report.m"
                            }
#line 1098 "det_report.m"
                            {
#line 1098 "det_report.m"
                              check_hlds__det_report__V_123_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "det_report.m"
                              MR_hl_field(MR_mktag(2), check_hlds__det_report__V_123_123, 0) = ((MR_Box) (check_hlds__det_report__ActualDetismStr_17));
#line 1098 "det_report.m"
                            }
#line 1097 "det_report.m"
                            {
#line 1097 "det_report.m"
                              check_hlds__det_report__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_122_122, 0) = ((MR_Box) (check_hlds__det_report__V_123_123));
#line 1097 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[7])));
#line 1097 "det_report.m"
                            }
#line 1096 "det_report.m"
                            {
#line 1096 "det_report.m"
                              check_hlds__det_report__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_119_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[82])));
#line 1096 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_119_119, 1) = ((MR_Box) (check_hlds__det_report__V_122_122));
#line 1096 "det_report.m"
                            }
#line 1096 "det_report.m"
                            {
#line 1096 "det_report.m"
                              check_hlds__det_report__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[39])));
#line 1096 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_116_116, 1) = ((MR_Box) (check_hlds__det_report__V_119_119));
#line 1096 "det_report.m"
                            }
#line 1095 "det_report.m"
                            {
#line 1095 "det_report.m"
                              check_hlds__det_report__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_114_114, 0) = ((MR_Box) (check_hlds__det_report__V_115_115));
#line 1095 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_114_114, 1) = ((MR_Box) (check_hlds__det_report__V_116_116));
#line 1095 "det_report.m"
                            }
#line 1095 "det_report.m"
                            {
#line 1095 "det_report.m"
                              check_hlds__det_report__DetismPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__DetismPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[81])));
#line 1095 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__DetismPieces_18, 1) = ((MR_Box) (check_hlds__det_report__V_114_114));
#line 1095 "det_report.m"
                            }
#line 1099 "det_report.m"
                            {
#line 1099 "det_report.m"
                              check_hlds__det_report__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_9);
                            }
#line 1100 "det_report.m"
                            {
#line 1100 "det_report.m"
                              check_hlds__det_report__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_131_131, 0) = ((MR_Box) (check_hlds__det_report__DetismPieces_18));
#line 1100 "det_report.m"
                            }
#line 1100 "det_report.m"
                            {
#line 1100 "det_report.m"
                              check_hlds__det_report__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_130_130, 0) = ((MR_Box) (check_hlds__det_report__V_131_131));
#line 1100 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "det_report.m"
                            }
#line 1100 "det_report.m"
                            {
#line 1100 "det_report.m"
                              check_hlds__det_report__DetismMsg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__DetismMsg_20, 0) = ((MR_Box) (check_hlds__det_report__Context_19));
#line 1100 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__DetismMsg_20, 1) = ((MR_Box) (check_hlds__det_report__V_130_130));
#line 1100 "det_report.m"
                            }
#line 1101 "det_report.m"
                            {
#line 1101 "det_report.m"
                              check_hlds__det_report__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_135_135, 0) = ((MR_Box) (check_hlds__det_report__DetismMsg_20));
#line 1101 "det_report.m"
                              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1101 "det_report.m"
                            }
#line 1101 "det_report.m"
                            {
#line 1101 "det_report.m"
                              check_hlds__det_report__DetismSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__DetismSpec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1101 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__DetismSpec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1101 "det_report.m"
                              MR_hl_field(MR_mktag(0), check_hlds__det_report__DetismSpec_21, 2) = ((MR_Box) (check_hlds__det_report__V_135_135));
#line 1101 "det_report.m"
                            }
#line 1103 "det_report.m"
                            {
#line 1103 "det_report.m"
                              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__DetismSpec_21, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58, check_hlds__det_report__STATE_VARIABLE_DetInfo_59);
#line 1103 "det_report.m"
                              return;
                            }
#line 1093 "det_report.m"
                          }
#line 1087 "det_report.m"
                      }
#line 1087 "det_report.m"
                    else
#line 1201 "det_report.m"
                      *check_hlds__det_report__STATE_VARIABLE_DetInfo_59 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_58;
#line 1087 "det_report.m"
  }
#line 1082 "det_report.m"
}

#line 1017 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_4_p_0(
#line 1017 "det_report.m"
  MR_Word check_hlds__det_report__Goal_5,
#line 1017 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_6,
#line 1017 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75,
#line 1017 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_76)
#line 1017 "det_report.m"
{
#line 1020 "det_report.m"
  while (MR_TRUE)
#line 1020 "det_report.m"
    {
#line 1020 "det_report.m"
      /* tailcall optimized into a loop */
#line 1020 "det_report.m"
      {
#line 1020 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;
#line 1020 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_5, (MR_Integer) 0)));
#line 1020 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_5, (MR_Integer) 1)));

#line 1025 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 0))))
#line 1040 "det_report.m"
          {
#line 1040 "det_report.m"
            MR_Word check_hlds__det_report__SubGoal_22 = (MR_Word) MR_body(((MR_Word) check_hlds__det_report__GoalExpr_8), (MR_Integer) 0);

#line 1041 "det_report.m"
            /* direct tailcall eliminated */
#line 1041 "det_report.m"
            {
#line 1041 "det_report.m"
              MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_22;

#line 1041 "det_report.m"
              check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1041 "det_report.m"
            }
#line 1041 "det_report.m"
            continue;
#line 1040 "det_report.m"
          }
#line 1025 "det_report.m"
        else
#line 1025 "det_report.m"
          if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 2))))
#line 1076 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1025 "det_report.m"
          else
#line 1025 "det_report.m"
            if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 1))))
#line 1061 "det_report.m"
              {
#line 1061 "det_report.m"
                MR_Word check_hlds__det_report__RHS_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 1061 "det_report.m"
                MR_Word check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)));
#line 1061 "det_report.m"
                MR_Word check_hlds__det_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 1061 "det_report.m"
                MR_Word check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 1061 "det_report.m"
                MR_Word check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 4)));

#line 1066 "det_report.m"
                if (((MR_tag((MR_Word) check_hlds__det_report__RHS_37)) == (MR_mktag((MR_Integer) 1))))
#line 1064 "det_report.m"
                  *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1066 "det_report.m"
                else
#line 1066 "det_report.m"
                  if (((MR_tag((MR_Word) check_hlds__det_report__RHS_37)) == (MR_mktag((MR_Integer) 2))))
#line 1068 "det_report.m"
                    {
#line 1068 "det_report.m"
                      MR_Word check_hlds__det_report__Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 3)));
#line 1068 "det_report.m"
                      MR_Word check_hlds__det_report__Modes_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 4)));
#line 1068 "det_report.m"
                      MR_Word check_hlds__det_report__LambdaGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 6)));
#line 1068 "det_report.m"
                      MR_Word check_hlds__det_report__VarsModes_54;
#line 1068 "det_report.m"
                      MR_Word check_hlds__det_report__ModuleInfo_55;
#line 1068 "det_report.m"
                      MR_Word check_hlds__det_report__LambdaInstMap0_56;
#line 1067 "det_report.m"
                      MR_Word check_hlds__det_report___Purity_45 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1067 "det_report.m"
                      MR_Word check_hlds__det_report___Groundness_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1067 "det_report.m"
                      MR_Word check_hlds__det_report___PorF_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1067 "det_report.m"
                      MR_Word check_hlds__det_report___LambdaNonLocals_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 2)));
#line 1067 "det_report.m"
                      MR_Word check_hlds__det_report___Detism_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 5)));

#line 1069 "det_report.m"
                      {
#line 1069 "det_report.m"
                        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__det_report__Vars_50, check_hlds__det_report__Modes_51, &check_hlds__det_report__VarsModes_54);
                      }
#line 1070 "det_report.m"
                      {
#line 1070 "det_report.m"
                        check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__ModuleInfo_55);
                      }
#line 1071 "det_report.m"
                      {
#line 1071 "det_report.m"
                        check_hlds__det_report__lambda_update_instmap_4_p_0(check_hlds__det_report__VarsModes_54, check_hlds__det_report__ModuleInfo_55, check_hlds__det_report__InstMap0_6, &check_hlds__det_report__LambdaInstMap0_56);
                      }
#line 1073 "det_report.m"
                      /* direct tailcall eliminated */
#line 1073 "det_report.m"
                      {
#line 1073 "det_report.m"
                        MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__LambdaGoal_53;
#line 1073 "det_report.m"
                        MR_Word check_hlds__det_report__InstMap0__tmp_copy_6 = check_hlds__det_report__LambdaInstMap0_56;

#line 1073 "det_report.m"
                        check_hlds__det_report__InstMap0_6 = check_hlds__det_report__InstMap0__tmp_copy_6;
#line 1073 "det_report.m"
                        check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1073 "det_report.m"
                      }
#line 1073 "det_report.m"
                      continue;
#line 1068 "det_report.m"
                    }
#line 1066 "det_report.m"
                  else
#line 1063 "det_report.m"
                    *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1061 "det_report.m"
              }
#line 1025 "det_report.m"
            else
#line 1025 "det_report.m"
              if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1078 "det_report.m"
                *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1025 "det_report.m"
              else
#line 1025 "det_report.m"
                if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1023 "det_report.m"
                  {
#line 1023 "det_report.m"
                    MR_Word check_hlds__det_report__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 1023 "det_report.m"
                    MR_Word check_hlds__det_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 1024 "det_report.m"
                    {
#line 1024 "det_report.m"
                      check_hlds__det_report__reqscope_check_conj_4_p_0(check_hlds__det_report__Goals_11, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 1024 "det_report.m"
                      return;
                    }
#line 1023 "det_report.m"
                  }
#line 1025 "det_report.m"
                else
#line 1025 "det_report.m"
                  if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1026 "det_report.m"
                    {
#line 1026 "det_report.m"
                      MR_Word check_hlds__det_report__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 1027 "det_report.m"
                      {
#line 1027 "det_report.m"
                        check_hlds__det_report__reqscope_check_disj_4_p_0(check_hlds__det_report__Goals_93, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 1027 "det_report.m"
                        return;
                      }
#line 1026 "det_report.m"
                    }
#line 1025 "det_report.m"
                  else
#line 1025 "det_report.m"
                    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1077 "det_report.m"
                      *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1025 "det_report.m"
                    else
#line 1025 "det_report.m"
                      if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1034 "det_report.m"
                        {
#line 1034 "det_report.m"
                          MR_Word check_hlds__det_report__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 1034 "det_report.m"
                          MR_Word check_hlds__det_report__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 1034 "det_report.m"
                          MR_Word check_hlds__det_report__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 4)));
#line 1034 "det_report.m"
                          MR_Word check_hlds__det_report__InstMap1_21;
#line 1034 "det_report.m"
                          MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87;
#line 1034 "det_report.m"
                          MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88;
#line 1034 "det_report.m"
                          MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 1035 "det_report.m"
                          {
#line 1035 "det_report.m"
                            check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Cond_18, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87);
                          }
#line 1036 "det_report.m"
                          {
#line 1036 "det_report.m"
                            hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Cond_18, check_hlds__det_report__InstMap0_6, &check_hlds__det_report__InstMap1_21);
                          }
#line 1037 "det_report.m"
                          {
#line 1037 "det_report.m"
                            check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Then_19, check_hlds__det_report__InstMap1_21, check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87, &check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88);
                          }
#line 1038 "det_report.m"
                          /* direct tailcall eliminated */
#line 1038 "det_report.m"
                          {
#line 1038 "det_report.m"
                            MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__Else_20;
#line 1038 "det_report.m"
                            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88;

#line 1038 "det_report.m"
                            check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75;
#line 1038 "det_report.m"
                            check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1038 "det_report.m"
                          }
#line 1038 "det_report.m"
                          continue;
#line 1034 "det_report.m"
                        }
#line 1025 "det_report.m"
                      else
#line 1025 "det_report.m"
                        if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1043 "det_report.m"
                          {
#line 1043 "det_report.m"
                            MR_Word check_hlds__det_report__Reason_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 1043 "det_report.m"
                            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84;
#line 1043 "det_report.m"
                            MR_Word check_hlds__det_report__SubGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));

#line 1044 "det_report.m"
                            {
#line 1044 "det_report.m"
                              check_hlds__det_report__reqscope_check_scope_6_p_0(check_hlds__det_report__Reason_23, check_hlds__det_report__SubGoal_94, check_hlds__det_report__GoalInfo_9, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84);
                            }
#line 1045 "det_report.m"
                            /* direct tailcall eliminated */
#line 1045 "det_report.m"
                            {
#line 1045 "det_report.m"
                              MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_94;
#line 1045 "det_report.m"
                              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84;

#line 1045 "det_report.m"
                              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75;
#line 1045 "det_report.m"
                              check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1045 "det_report.m"
                            }
#line 1045 "det_report.m"
                            continue;
#line 1043 "det_report.m"
                          }
#line 1025 "det_report.m"
                        else
#line 1025 "det_report.m"
                          if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1047 "det_report.m"
                            {
#line 1047 "det_report.m"
                              MR_Word check_hlds__det_report__ShortHand_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 1052 "det_report.m"
                              if (((MR_tag((MR_Word) check_hlds__det_report__ShortHand_24)) == (MR_mktag((MR_Integer) 1))))
#line 1049 "det_report.m"
                                {
#line 1049 "det_report.m"
                                  MR_Word check_hlds__det_report__MainGoal_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 4)));
#line 1049 "det_report.m"
                                  MR_Word check_hlds__det_report__OrElseGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 5)));
#line 1049 "det_report.m"
                                  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82;
#line 1049 "det_report.m"
                                  MR_Word check_hlds__det_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 0)));
#line 1049 "det_report.m"
                                  MR_Word check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 1)));
#line 1049 "det_report.m"
                                  MR_Word check_hlds__det_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 2)));
#line 1049 "det_report.m"
                                  MR_Word check_hlds__det_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 3)));
#line 1049 "det_report.m"
                                  MR_Word check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 6)));

#line 1050 "det_report.m"
                                  {
#line 1050 "det_report.m"
                                    check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__MainGoal_29, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82);
                                  }
#line 1051 "det_report.m"
                                  {
#line 1051 "det_report.m"
                                    check_hlds__det_report__reqscope_check_disj_4_p_0(check_hlds__det_report__OrElseGoals_30, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 1051 "det_report.m"
                                    return;
                                  }
#line 1049 "det_report.m"
                                }
#line 1052 "det_report.m"
                              else
#line 1052 "det_report.m"
                                if (((MR_tag((MR_Word) check_hlds__det_report__ShortHand_24)) == (MR_mktag((MR_Integer) 0))))
#line 1056 "det_report.m"
                                  {
#line 1058 "det_report.m"
                                    {
#line 1058 "det_report.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.reqscope_check_goal\'/4", (MR_String) "bi_implication");
#line 1058 "det_report.m"
                                      return;
                                    }
#line 1056 "det_report.m"
                                  }
#line 1052 "det_report.m"
                                else
#line 1053 "det_report.m"
                                  {
#line 1053 "det_report.m"
                                    MR_Word check_hlds__det_report__SubGoal_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 2)));
#line 1053 "det_report.m"
                                    MR_Word check_hlds__det_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 0)));
#line 1053 "det_report.m"
                                    MR_Word check_hlds__det_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 1)));

#line 1054 "det_report.m"
                                    /* direct tailcall eliminated */
#line 1054 "det_report.m"
                                    {
#line 1054 "det_report.m"
                                      MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_95;

#line 1054 "det_report.m"
                                      check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1054 "det_report.m"
                                    }
#line 1054 "det_report.m"
                                    continue;
#line 1053 "det_report.m"
                                  }
#line 1047 "det_report.m"
                            }
#line 1025 "det_report.m"
                          else
#line 1029 "det_report.m"
                            {
#line 1029 "det_report.m"
                              MR_Word check_hlds__det_report__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 1029 "det_report.m"
                              MR_Word check_hlds__det_report__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 1029 "det_report.m"
                              MR_Word check_hlds__det_report__VarTypes_15;
#line 1029 "det_report.m"
                              MR_Word check_hlds__det_report__VarType_16;
#line 1029 "det_report.m"
                              MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));

#line 1030 "det_report.m"
                              {
#line 1030 "det_report.m"
                                check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__VarTypes_15);
                              }
#line 1031 "det_report.m"
                              {
#line 1031 "det_report.m"
                                parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_15, check_hlds__det_report__Var_12, &check_hlds__det_report__VarType_16);
                              }
#line 1032 "det_report.m"
                              {
#line 1032 "det_report.m"
                                check_hlds__det_report__reqscope_check_switch_6_p_0(check_hlds__det_report__Var_12, check_hlds__det_report__VarType_16, check_hlds__det_report__Cases_14, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 1032 "det_report.m"
                                return;
                              }
#line 1029 "det_report.m"
                            }
#line 1020 "det_report.m"
      }
#line 1020 "det_report.m"
      break;
#line 1020 "det_report.m"
    }
#line 1017 "det_report.m"
}

#line 997 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_2,
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 997 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 997 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
#line 997 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__7_7)
#line 997 "det_report.m"
{
#line 1001 "det_report.m"
  {
#line 1001 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1001 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "det_report.m"
      {
#line 1001 "det_report.m"
        *check_hlds__det_report__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 1001 "det_report.m"
      }
#line 1001 "det_report.m"
    else
#line 1003 "det_report.m"
      {
#line 1003 "det_report.m"
        MR_Word check_hlds__det_report__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1003 "det_report.m"
        MR_Word check_hlds__det_report__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1003 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_21;
#line 1003 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_22;
#line 1003 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25;

#line 1006 "det_report.m"
        {
#line 1006 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__InstMap0_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25, &check_hlds__det_report__Msgs1_21);
        }
#line 1008 "det_report.m"
        {
#line 1008 "det_report.m"
          check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(check_hlds__det_report__Goals_15, check_hlds__det_report__InstMap0_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25, check_hlds__det_report__STATE_VARIABLE_DetInfo_6, &check_hlds__det_report__Msgs2_22);
        }
#line 1010 "det_report.m"
        {
#line 1010 "det_report.m"
          *check_hlds__det_report__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_21, check_hlds__det_report__Msgs2_22);
        }
#line 1003 "det_report.m"
      }
#line 1001 "det_report.m"
  }
#line 997 "det_report.m"
}

#line 992 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
#line 992 "det_report.m"
  MR_Word check_hlds__det_report__ConsId_3,
#line 992 "det_report.m"
  MR_Word * check_hlds__det_report__Match_4)
#line 992 "det_report.m"
{
#line 994 "det_report.m"
  {
#line 994 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 995 "det_report.m"
    {
#line 995 "det_report.m"
      MR_Word base;
#line 995 "det_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "det_report.m"
      *check_hlds__det_report__Match_4 = base;
#line 995 "det_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__ConsId_3));
#line 995 "det_report.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "det_report.m"
    }
#line 994 "det_report.m"
  }
#line 992 "det_report.m"
}

#line 954 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
#line 954 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 954 "det_report.m"
  MR_Word check_hlds__det_report__SwitchVarSynonyms_2,
#line 954 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 954 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 954 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__5_5,
#line 954 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__6_6)
#line 954 "det_report.m"
{
#line 958 "det_report.m"
  {
#line 958 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 958 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "det_report.m"
      {
#line 958 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 958 "det_report.m"
          {
#line 958 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 958 "det_report.m"
              {
#line 958 "det_report.m"
                *check_hlds__det_report__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "det_report.m"
                *check_hlds__det_report__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "det_report.m"
                check_hlds__det_report__succeeded = MR_TRUE;
#line 958 "det_report.m"
              }
#line 958 "det_report.m"
          }
#line 958 "det_report.m"
      }
#line 958 "det_report.m"
    else
#line 960 "det_report.m"
      {
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_40_40;
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__Disjunct_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__Disjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Disjunct_8, (MR_Integer) 0)));
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Disjunct_8, (MR_Integer) 1)));
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__Unification_20;
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__Var_22;
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_23;
#line 960 "det_report.m"
        MR_Word check_hlds__det_report__ArgVars_24;
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__V_17_17;
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__V_18_18;
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__V_19_19;
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__V_21_21;
#line 963 "det_report.m"
        MR_Word check_hlds__det_report__V_25_25;
#line 963 "det_report.m"
        MR_Word check_hlds__det_report__V_26_26;
#line 963 "det_report.m"
        MR_Word check_hlds__det_report__V_27_27;
#line 966 "det_report.m"
        MR_Word check_hlds__det_report__MainConsId_28;

#line 962 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
#line 962 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 962 "det_report.m"
          {
#line 962 "det_report.m"
            check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 0)));
#line 962 "det_report.m"
            check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 1)));
#line 962 "det_report.m"
            check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 2)));
#line 962 "det_report.m"
            check_hlds__det_report__Unification_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 3)));
#line 962 "det_report.m"
            check_hlds__det_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 4)));
#line 963 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_20)) == (MR_mktag((MR_Integer) 1)));
#line 963 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 963 "det_report.m"
              {
#line 963 "det_report.m"
                check_hlds__det_report__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 0)));
#line 963 "det_report.m"
                check_hlds__det_report__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 1)));
#line 963 "det_report.m"
                check_hlds__det_report__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 2)));
#line 963 "det_report.m"
                check_hlds__det_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 3)));
#line 963 "det_report.m"
                check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 4)));
#line 963 "det_report.m"
                check_hlds__det_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 5)));
#line 8928 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_40_40 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 964 "det_report.m"
                {
#line 964 "det_report.m"
                  check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_40_40, ((MR_Box) (check_hlds__det_report__Var_22)), check_hlds__det_report__SwitchVarSynonyms_2);
                }
#line 960 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 960 "det_report.m"
                  {
#line 966 "det_report.m"
                    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 966 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 966 "det_report.m"
                      {
#line 966 "det_report.m"
                        check_hlds__det_report__MainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 967 "det_report.m"
                        {
#line 967 "det_report.m"
                          check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__ConsId_23, check_hlds__det_report__MainConsId_28);
                        }
#line 966 "det_report.m"
                      }
#line 972 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 970 "det_report.m"
                      {
#line 970 "det_report.m"
                        MR_Word check_hlds__det_report__TypeInfo_45_45;
#line 970 "det_report.m"
                        MR_Word check_hlds__det_report__V_37_37;
#line 970 "det_report.m"
                        MR_Word check_hlds__det_report__V_38_38;
#line 970 "det_report.m"
                        MR_Word check_hlds__det_report__V_43_43;

#line 969 "det_report.m"
                        {
#line 969 "det_report.m"
                          check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_9, check_hlds__det_report__SwitchVarSynonyms_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__V_43_43, check_hlds__det_report__HeadVar__6_6);
                        }
#line 970 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 970 "det_report.m"
                          {
#line 8976 "check_hlds.det_report.c"
                            check_hlds__det_report__TypeInfo_45_45 = (MR_Word) &check_hlds__det_report_scalar_common_2[20];
#line 969 "det_report.m"
                            {
#line 969 "det_report.m"
                              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_45_45, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (check_hlds__det_report__V_43_43)));
                            }
#line 970 "det_report.m"
                            if (check_hlds__det_report__succeeded)
#line 970 "det_report.m"
                              {
#line 971 "det_report.m"
                                {
#line 971 "det_report.m"
                                  check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 971 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_24));
#line 971 "det_report.m"
                                }
#line 971 "det_report.m"
                                {
#line 971 "det_report.m"
                                  check_hlds__det_report__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 971 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (check_hlds__det_report__ConsId_23));
#line 971 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 971 "det_report.m"
                                }
#line 971 "det_report.m"
                                {
#line 971 "det_report.m"
                                  MR_Word base;
#line 971 "det_report.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 971 "det_report.m"
                                  *check_hlds__det_report__HeadVar__5_5 = base;
#line 971 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_37_37));
#line 971 "det_report.m"
                                }
#line 971 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 970 "det_report.m"
                              }
#line 970 "det_report.m"
                          }
#line 970 "det_report.m"
                      }
#line 972 "det_report.m"
                    else
#line 988 "det_report.m"
                      {
#line 988 "det_report.m"
                        MR_Word check_hlds__det_report__TypeCtorInfo_42_42;
#line 988 "det_report.m"
                        MR_Word check_hlds__det_report__LeftOverConsIds_29;
#line 988 "det_report.m"
                        MR_Word check_hlds__det_report__LeftOverMatches_30;
#line 988 "det_report.m"
                        MR_Word check_hlds__det_report__NonLocals_31;
#line 988 "det_report.m"
                        MR_Word check_hlds__det_report__ArgVarsSet_32;
#line 988 "det_report.m"
                        MR_Word check_hlds__det_report__MaybeArgVars_34;
#line 988 "det_report.m"
                        MR_Word check_hlds__det_report__V_39_39;
#line 980 "det_report.m"
                        MR_Word check_hlds__det_report__NonLocalArgVarsSet_33;

#line 973 "det_report.m"
                        {
#line 973 "det_report.m"
                          check_hlds__det_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__HeadVar__4_4, ((MR_Box) (check_hlds__det_report__ConsId_23)), &check_hlds__det_report__LeftOverConsIds_29);
                        }
#line 988 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 988 "det_report.m"
                          {
#line 975 "det_report.m"
                            {
#line 975 "det_report.m"
                              check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_9, check_hlds__det_report__SwitchVarSynonyms_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__LeftOverConsIds_29, check_hlds__det_report__HeadVar__5_5, &check_hlds__det_report__LeftOverMatches_30);
                            }
#line 988 "det_report.m"
                            if (check_hlds__det_report__succeeded)
#line 988 "det_report.m"
                              {
#line 977 "det_report.m"
                                {
#line 977 "det_report.m"
                                  check_hlds__det_report__NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_report__GoalInfo_16);
                                }
#line 9069 "check_hlds.det_report.c"
                                check_hlds__det_report__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 978 "det_report.m"
                                {
#line 978 "det_report.m"
                                  parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__ArgVars_24, &check_hlds__det_report__ArgVarsSet_32);
                                }
#line 980 "det_report.m"
                                {
#line 980 "det_report.m"
                                  parse_tree__set_of_var__intersect_3_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__NonLocals_31, check_hlds__det_report__ArgVarsSet_32, &check_hlds__det_report__NonLocalArgVarsSet_33);
                                }
#line 981 "det_report.m"
                                {
#line 981 "det_report.m"
                                  check_hlds__det_report__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__NonLocalArgVarsSet_33);
                                }
#line 984 "det_report.m"
                                if (check_hlds__det_report__succeeded)
#line 983 "det_report.m"
                                  {
#line 983 "det_report.m"
                                    check_hlds__det_report__MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 983 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeArgVars_34, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_24));
#line 983 "det_report.m"
                                  }
#line 984 "det_report.m"
                                else
#line 985 "det_report.m"
                                  check_hlds__det_report__MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 987 "det_report.m"
                                {
#line 987 "det_report.m"
                                  check_hlds__det_report__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 987 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__ConsId_23));
#line 987 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__MaybeArgVars_34));
#line 987 "det_report.m"
                                }
#line 987 "det_report.m"
                                {
#line 987 "det_report.m"
                                  MR_Word base;
#line 987 "det_report.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "det_report.m"
                                  *check_hlds__det_report__HeadVar__6_6 = base;
#line 987 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 987 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__LeftOverMatches_30));
#line 987 "det_report.m"
                                }
#line 987 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 988 "det_report.m"
                              }
#line 988 "det_report.m"
                          }
#line 988 "det_report.m"
                      }
#line 960 "det_report.m"
                  }
#line 963 "det_report.m"
              }
#line 962 "det_report.m"
          }
#line 960 "det_report.m"
      }
#line 958 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 958 "det_report.m"
  }
#line 954 "det_report.m"
}

#line 900 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
#line 900 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 900 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 900 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2)
#line 900 "det_report.m"
{
#line 900 "det_report.m"
  {
#line 900 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 900 "det_report.m"
    MR_Word check_hlds__det_report__conv0_Match_4;

#line 900 "det_report.m"
    {
#line 900 "det_report.m"
      check_hlds__det_report__make_switch_match_no_args_2_p_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), &check_hlds__det_report__conv0_Match_4);
    }
#line 900 "det_report.m"
    *check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_Match_4));
#line 900 "det_report.m"
  }
#line 900 "det_report.m"
}

#line 893 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
#line 893 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 893 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2,
#line 893 "det_report.m"
  MR_Word check_hlds__det_report__MainConsId_3,
#line 893 "det_report.m"
  MR_Word check_hlds__det_report__OtherConsIds_4,
#line 893 "det_report.m"
  MR_Word * check_hlds__det_report__MainMatch_5,
#line 893 "det_report.m"
  MR_Word * check_hlds__det_report__OtherMatches_6)
#line 893 "det_report.m"
{
#line 898 "det_report.m"
  while (MR_TRUE)
#line 898 "det_report.m"
    {
#line 898 "det_report.m"
      /* tailcall optimized into a loop */
#line 898 "det_report.m"
      {
#line 898 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 898 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "det_report.m"
          {
#line 995 "det_report.m"
            {
#line 995 "det_report.m"
              MR_Word base;
#line 995 "det_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "det_report.m"
              *check_hlds__det_report__MainMatch_5 = base;
#line 995 "det_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 995 "det_report.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "det_report.m"
            }
#line 900 "det_report.m"
            {
#line 900 "det_report.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0, (MR_Word) &check_hlds__det_report_scalar_common_1[3], check_hlds__det_report__OtherConsIds_4, check_hlds__det_report__OtherMatches_6);
#line 900 "det_report.m"
              return;
            }
#line 898 "det_report.m"
          }
#line 898 "det_report.m"
        else
#line 902 "det_report.m"
          {
#line 902 "det_report.m"
            MR_Word check_hlds__det_report__Conjunct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 902 "det_report.m"
            MR_Word check_hlds__det_report__Conjuncts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 902 "det_report.m"
            MR_Word check_hlds__det_report__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Conjunct_13, (MR_Integer) 0)));
#line 902 "det_report.m"
            MR_Word check_hlds__det_report__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Conjunct_13, (MR_Integer) 1)));
#line 922 "det_report.m"
            MR_Word check_hlds__det_report__ArgVars_28;
#line 905 "det_report.m"
            MR_Word check_hlds__det_report__TypeInfo_61_61;
#line 905 "det_report.m"
            MR_Word check_hlds__det_report__Unification_25;
#line 905 "det_report.m"
            MR_Word check_hlds__det_report__Var_27;
#line 905 "det_report.m"
            MR_Word check_hlds__det_report__V_64_64;
#line 905 "det_report.m"
            MR_Word check_hlds__det_report__V_22_22;
#line 905 "det_report.m"
            MR_Word check_hlds__det_report__V_23_23;
#line 905 "det_report.m"
            MR_Word check_hlds__det_report__V_24_24;
#line 905 "det_report.m"
            MR_Word check_hlds__det_report__V_26_26;
#line 906 "det_report.m"
            MR_Word check_hlds__det_report__V_29_29;
#line 906 "det_report.m"
            MR_Word check_hlds__det_report__V_30_30;
#line 906 "det_report.m"
            MR_Word check_hlds__det_report__V_31_31;

#line 905 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 1)));
#line 905 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 905 "det_report.m"
              {
#line 905 "det_report.m"
                check_hlds__det_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)));
#line 905 "det_report.m"
                check_hlds__det_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 905 "det_report.m"
                check_hlds__det_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 2)));
#line 905 "det_report.m"
                check_hlds__det_report__Unification_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 3)));
#line 905 "det_report.m"
                check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 4)));
#line 906 "det_report.m"
                check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_25)) == (MR_mktag((MR_Integer) 1)));
#line 906 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 906 "det_report.m"
                  {
#line 906 "det_report.m"
                    check_hlds__det_report__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 0)));
#line 906 "det_report.m"
                    check_hlds__det_report__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 1)));
#line 906 "det_report.m"
                    check_hlds__det_report__ArgVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 2)));
#line 906 "det_report.m"
                    check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 3)));
#line 906 "det_report.m"
                    check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 4)));
#line 906 "det_report.m"
                    check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 5)));
#line 906 "det_report.m"
                    {
#line 906 "det_report.m"
                      check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__MainConsId_3, check_hlds__det_report__V_64_64);
                    }
#line 905 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 905 "det_report.m"
                      {
#line 9312 "check_hlds.det_report.c"
                        check_hlds__det_report__TypeInfo_61_61 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 907 "det_report.m"
                        {
#line 907 "det_report.m"
                          check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_61_61, ((MR_Box) (check_hlds__det_report__Var_27)), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2);
                        }
#line 905 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 908 "det_report.m"
                          check_hlds__det_report__succeeded = (check_hlds__det_report__OtherConsIds_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "det_report.m"
                      }
#line 906 "det_report.m"
                  }
#line 905 "det_report.m"
              }
#line 922 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 910 "det_report.m"
              {
#line 910 "det_report.m"
                MR_Word check_hlds__det_report__TypeCtorInfo_62_62;
#line 910 "det_report.m"
                MR_Word check_hlds__det_report__NonLocals_32;
#line 910 "det_report.m"
                MR_Word check_hlds__det_report__ArgVarsSet_33;
#line 910 "det_report.m"
                MR_Word check_hlds__det_report__MaybeArgVars_35;
#line 913 "det_report.m"
                MR_Word check_hlds__det_report__NonLocalArgVarsSet_34;

#line 910 "det_report.m"
                {
#line 910 "det_report.m"
                  check_hlds__det_report__NonLocals_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_report__GoalInfo_21);
                }
#line 9349 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 911 "det_report.m"
                {
#line 911 "det_report.m"
                  check_hlds__det_report__ArgVarsSet_33 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__ArgVars_28);
                }
#line 913 "det_report.m"
                {
#line 913 "det_report.m"
                  parse_tree__set_of_var__intersect_3_p_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__NonLocals_32, check_hlds__det_report__ArgVarsSet_33, &check_hlds__det_report__NonLocalArgVarsSet_34);
                }
#line 914 "det_report.m"
                {
#line 914 "det_report.m"
                  check_hlds__det_report__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__NonLocalArgVarsSet_34);
                }
#line 917 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 916 "det_report.m"
                  {
#line 916 "det_report.m"
                    check_hlds__det_report__MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 916 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeArgVars_35, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_28));
#line 916 "det_report.m"
                  }
#line 917 "det_report.m"
                else
#line 918 "det_report.m"
                  check_hlds__det_report__MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 920 "det_report.m"
                {
#line 920 "det_report.m"
                  MR_Word base;
#line 920 "det_report.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "det_report.m"
                  *check_hlds__det_report__MainMatch_5 = base;
#line 920 "det_report.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 920 "det_report.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_report__MaybeArgVars_35));
#line 920 "det_report.m"
                }
#line 921 "det_report.m"
                *check_hlds__det_report__OtherMatches_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 910 "det_report.m"
              }
#line 922 "det_report.m"
            else
#line 929 "det_report.m"
              {
#line 929 "det_report.m"
                MR_Word check_hlds__det_report__MainMatch0_37;
#line 929 "det_report.m"
                MR_Word check_hlds__det_report__OtherMatches0_38;
#line 923 "det_report.m"
                MR_Word check_hlds__det_report__Disjuncts_36;
#line 923 "det_report.m"
                MR_Word check_hlds__det_report__V_46_46;
#line 923 "det_report.m"
                MR_Word check_hlds__det_report__V_47_47;

#line 923 "det_report.m"
                check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 923 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 923 "det_report.m"
                  {
#line 923 "det_report.m"
                    check_hlds__det_report__Disjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 924 "det_report.m"
                    {
#line 924 "det_report.m"
                      check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 924 "det_report.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 924 "det_report.m"
                    }
#line 924 "det_report.m"
                    {
#line 924 "det_report.m"
                      check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_36, check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2, check_hlds__det_report__V_46_46, check_hlds__det_report__OtherConsIds_4, &check_hlds__det_report__V_47_47, &check_hlds__det_report__OtherMatches0_38);
                    }
#line 923 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 923 "det_report.m"
                      {
#line 924 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 924 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 924 "det_report.m"
                          check_hlds__det_report__MainMatch0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, (MR_Integer) 0)));
#line 923 "det_report.m"
                      }
#line 923 "det_report.m"
                  }
#line 929 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 927 "det_report.m"
                  {
#line 927 "det_report.m"
                    *check_hlds__det_report__MainMatch_5 = check_hlds__det_report__MainMatch0_37;
#line 928 "det_report.m"
                    *check_hlds__det_report__OtherMatches_6 = check_hlds__det_report__OtherMatches0_38;
#line 927 "det_report.m"
                  }
#line 929 "det_report.m"
                else
#line 938 "det_report.m"
                  {
#line 938 "det_report.m"
                    MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54;
#line 936 "det_report.m"
                    MR_Word check_hlds__det_report__ToVar_43;
#line 931 "det_report.m"
                    MR_Word check_hlds__det_report__TypeInfo_63_63;
#line 931 "det_report.m"
                    MR_Word check_hlds__det_report__FromVar_44;
#line 931 "det_report.m"
                    MR_Word check_hlds__det_report__Unification_51;
#line 931 "det_report.m"
                    MR_Word check_hlds__det_report__V_39_39;
#line 931 "det_report.m"
                    MR_Word check_hlds__det_report__V_40_40;
#line 931 "det_report.m"
                    MR_Word check_hlds__det_report__V_41_41;
#line 931 "det_report.m"
                    MR_Word check_hlds__det_report__V_42_42;

#line 931 "det_report.m"
                    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 1)));
#line 931 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 931 "det_report.m"
                      {
#line 931 "det_report.m"
                        check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)));
#line 931 "det_report.m"
                        check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 931 "det_report.m"
                        check_hlds__det_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 2)));
#line 931 "det_report.m"
                        check_hlds__det_report__Unification_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 3)));
#line 931 "det_report.m"
                        check_hlds__det_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 4)));
#line 932 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_51)) == (MR_mktag((MR_Integer) 2)));
#line 932 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 932 "det_report.m"
                          {
#line 932 "det_report.m"
                            check_hlds__det_report__ToVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__Unification_51, (MR_Integer) 0)));
#line 932 "det_report.m"
                            check_hlds__det_report__FromVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__Unification_51, (MR_Integer) 1)));
#line 9507 "check_hlds.det_report.c"
                            check_hlds__det_report__TypeInfo_63_63 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 933 "det_report.m"
                            {
#line 933 "det_report.m"
                              check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_63_63, ((MR_Box) (check_hlds__det_report__FromVar_44)), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2);
                            }
#line 932 "det_report.m"
                          }
#line 931 "det_report.m"
                      }
#line 936 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 935 "det_report.m"
                      {
#line 935 "det_report.m"
                        check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54, 0) = ((MR_Box) (check_hlds__det_report__ToVar_43));
#line 935 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2));
#line 935 "det_report.m"
                      }
#line 936 "det_report.m"
                    else
#line 935 "det_report.m"
                      check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2;
#line 939 "det_report.m"
                    /* direct tailcall eliminated */
#line 939 "det_report.m"
                    {
#line 939 "det_report.m"
                      MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Conjuncts_14;
#line 939 "det_report.m"
                      MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54;

#line 939 "det_report.m"
                      check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0__tmp_copy_2;
#line 939 "det_report.m"
                      check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 939 "det_report.m"
                    }
#line 939 "det_report.m"
                    continue;
#line 938 "det_report.m"
                  }
#line 929 "det_report.m"
              }
#line 902 "det_report.m"
          }
#line 898 "det_report.m"
      }
#line 898 "det_report.m"
      break;
#line 898 "det_report.m"
    }
#line 893 "det_report.m"
}

#line 859 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_4,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 859 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 859 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8,
#line 859 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__9_9)
#line 859 "det_report.m"
{
#line 863 "det_report.m"
  {
#line 863 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 863 "det_report.m"
    if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 863 "det_report.m"
      {
#line 863 "det_report.m"
        *check_hlds__det_report__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 863 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_8 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7;
#line 863 "det_report.m"
      }
#line 863 "det_report.m"
    else
#line 866 "det_report.m"
      {
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__MainConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 0)));
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__OtherConsIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 1)));
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 2)));
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__GoalSeq_30;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__MainMatch_31;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatches_32;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__NewSwitchContext_33;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContexts1_34;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__ModuleInfo0_35;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__InstMap1_36;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__ModuleInfo_37;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_38;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_39;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__V_42_42;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44;
#line 866 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45;

#line 868 "det_report.m"
        {
#line 868 "det_report.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__det_report__Goal_29, &check_hlds__det_report__GoalSeq_30);
        }
#line 869 "det_report.m"
        {
#line 869 "det_report.m"
          check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__1_1));
#line 869 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "det_report.m"
        }
#line 869 "det_report.m"
        {
#line 869 "det_report.m"
          check_hlds__det_report__find_switch_var_matches_6_p_0(check_hlds__det_report__GoalSeq_30, check_hlds__det_report__V_42_42, check_hlds__det_report__MainConsId_27, check_hlds__det_report__OtherConsIds_28, &check_hlds__det_report__MainMatch_31, &check_hlds__det_report__OtherMatches_32);
        }
#line 871 "det_report.m"
        {
#line 871 "det_report.m"
          check_hlds__det_report__NewSwitchContext_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 871 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__1_1));
#line 871 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 1) = ((MR_Box) (check_hlds__det_report__MainMatch_31));
#line 871 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 2) = ((MR_Box) (check_hlds__det_report__OtherMatches_32));
#line 871 "det_report.m"
        }
#line 872 "det_report.m"
        {
#line 872 "det_report.m"
          check_hlds__det_report__SwitchContexts1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchContexts1_34, 0) = ((MR_Box) (check_hlds__det_report__NewSwitchContext_33));
#line 872 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchContexts1_34, 1) = ((MR_Box) (check_hlds__det_report__HeadVar__6_6));
#line 872 "det_report.m"
        }
#line 873 "det_report.m"
        {
#line 873 "det_report.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__ModuleInfo0_35);
        }
#line 874 "det_report.m"
        {
#line 874 "det_report.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__MainConsId_27, check_hlds__det_report__OtherConsIds_28, check_hlds__det_report__InstMap0_4, &check_hlds__det_report__InstMap1_36, check_hlds__det_report__ModuleInfo0_35, &check_hlds__det_report__ModuleInfo_37);
        }
#line 876 "det_report.m"
        {
#line 876 "det_report.m"
          check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_37, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44);
        }
#line 877 "det_report.m"
        {
#line 877 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_29, check_hlds__det_report__InstMap1_36, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__SwitchContexts1_34, check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44, &check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45, &check_hlds__det_report__Msgs1_38);
        }
#line 879 "det_report.m"
        {
#line 879 "det_report.m"
          check_hlds__det_report__det_diagnose_switch_arms_9_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__Cases_21, check_hlds__det_report__InstMap0_4, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__HeadVar__6_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45, check_hlds__det_report__STATE_VARIABLE_DetInfo_8, &check_hlds__det_report__Msgs2_39);
        }
#line 881 "det_report.m"
        {
#line 881 "det_report.m"
          *check_hlds__det_report__HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_38, check_hlds__det_report__Msgs2_39);
        }
#line 866 "det_report.m"
      }
#line 863 "det_report.m"
  }
#line 859 "det_report.m"
}

#line 818 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
#line 818 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7,
#line 818 "det_report.m"
  MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8,
#line 818 "det_report.m"
  MR_Integer * check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9,
#line 818 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__10_10)
#line 818 "det_report.m"
{
#line 823 "det_report.m"
  {
#line 823 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 823 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 823 "det_report.m"
      {
#line 823 "det_report.m"
        *check_hlds__det_report__HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 823 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9 = check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8;
#line 823 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6;
#line 823 "det_report.m"
      }
#line 823 "det_report.m"
    else
#line 826 "det_report.m"
      {
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__ActualCanFail_30;
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__DesiredCanFail_32;
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__DesiredSolns_33;
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__ClauseCanFail_34;
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__ClauseDesired_35;
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_36;
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_41;
#line 826 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46;
#line 826 "det_report.m"
        MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48;
#line 827 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 847 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_38;
#line 847 "det_report.m"
        MR_Word check_hlds__det_report__GoalDetism_39;
#line 847 "det_report.m"
        MR_Word check_hlds__det_report__V_53_53;
#line 847 "det_report.m"
        MR_Word check_hlds__det_report__V_37_37;
#line 849 "det_report.m"
        MR_Word check_hlds__det_report__V_40_40;

#line 827 "det_report.m"
        {
#line 827 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__ActualCanFail_30, &check_hlds__det_report__V_31_31);
        }
#line 828 "det_report.m"
        {
#line 828 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__HeadVar__3_3, &check_hlds__det_report__DesiredCanFail_32, &check_hlds__det_report__DesiredSolns_33);
        }
#line 830 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredCanFail_32 == (MR_Integer) 1);
#line 830 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 831 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__ActualCanFail_30 == (MR_Integer) 0);
#line 837 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 836 "det_report.m"
          check_hlds__det_report__ClauseCanFail_34 = (MR_Integer) 1;
#line 837 "det_report.m"
        else
#line 841 "det_report.m"
          check_hlds__det_report__ClauseCanFail_34 = (MR_Integer) 0;
#line 843 "det_report.m"
        {
#line 843 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__ClauseCanFail_34, check_hlds__det_report__DesiredSolns_33);
        }
#line 844 "det_report.m"
        {
#line 844 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_21, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6, &check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46, &check_hlds__det_report__Msgs1_36);
        }
#line 847 "det_report.m"
        check_hlds__det_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 0)));
#line 847 "det_report.m"
        check_hlds__det_report__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 1)));
#line 848 "det_report.m"
        {
#line 848 "det_report.m"
          check_hlds__det_report__GoalDetism_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_38);
        }
#line 849 "det_report.m"
        {
#line 849 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__GoalDetism_39, &check_hlds__det_report__V_40_40, &check_hlds__det_report__V_53_53);
        }
#line 849 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_Integer) 0 == check_hlds__det_report__V_53_53);
#line 852 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 849 "det_report.m"
          check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48 = check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8;
#line 852 "det_report.m"
        else
#line 853 "det_report.m"
          {
#line 853 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48 = (check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8 + (MR_Integer) 1);
#line 853 "det_report.m"
          }
#line 855 "det_report.m"
        {
#line 855 "det_report.m"
          check_hlds__det_report__det_diagnose_disj_10_p_0(check_hlds__det_report__Goals_22, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_report__STATE_VARIABLE_DetInfo_7, check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48, check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9, &check_hlds__det_report__Msgs2_41);
        }
#line 857 "det_report.m"
        {
#line 857 "det_report.m"
          *check_hlds__det_report__HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_36, check_hlds__det_report__Msgs2_41);
        }
#line 826 "det_report.m"
      }
#line 823 "det_report.m"
  }
#line 818 "det_report.m"
}

#line 751 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
#line 751 "det_report.m"
  MR_Word check_hlds__det_report__Desired_6,
#line 751 "det_report.m"
  MR_Word check_hlds__det_report__Actual_7,
#line 751 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 751 "det_report.m"
  MR_Word check_hlds__det_report__StartingPieces_9,
#line 751 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_10)
#line 751 "det_report.m"
{
#line 754 "det_report.m"
  {
#line 754 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__TypeCtorInfo_78_78;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__DesiredCanFail_11;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__DesiredSolns_12;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__ActualCanFail_13;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__ActualSolns_14;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__CanFailPieces_16;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__ConnectPieces_20;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__SolnsPieces_21;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__RawPieces_22;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_25;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__V_38_38;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__V_72_72;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__V_73_73;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__V_74_74;
#line 754 "det_report.m"
    MR_Word check_hlds__det_report__V_75_75;

#line 755 "det_report.m"
    {
#line 755 "det_report.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_6, &check_hlds__det_report__DesiredCanFail_11, &check_hlds__det_report__DesiredSolns_12);
    }
#line 756 "det_report.m"
    {
#line 756 "det_report.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Actual_7, &check_hlds__det_report__ActualCanFail_13, &check_hlds__det_report__ActualSolns_14);
    }
#line 9944 "check_hlds.det_report.c"
    if ((check_hlds__det_report__DesiredCanFail_11 == (MR_Integer) 0))
#line 9946 "check_hlds.det_report.c"
      if ((check_hlds__det_report__ActualCanFail_13 == (MR_Integer) 0))
#line 765 "det_report.m"
        check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9950 "check_hlds.det_report.c"
      else
#line 765 "det_report.m"
        check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9954 "check_hlds.det_report.c"
    else
#line 9956 "check_hlds.det_report.c"
      if ((check_hlds__det_report__ActualCanFail_13 == (MR_Integer) 0))
#line 9958 "check_hlds.det_report.c"
        {
#line 760 "det_report.m"
          check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[67]);
#line 9962 "check_hlds.det_report.c"
        }
#line 9964 "check_hlds.det_report.c"
      else
#line 765 "det_report.m"
        check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9968 "check_hlds.det_report.c"
    if ((check_hlds__det_report__DesiredSolns_12 == (MR_Integer) 3))
#line 9970 "check_hlds.det_report.c"
      if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 3))
#line 9972 "check_hlds.det_report.c"
        {
#line 791 "det_report.m"
          check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
          check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9978 "check_hlds.det_report.c"
        }
#line 9980 "check_hlds.det_report.c"
      else
#line 9982 "check_hlds.det_report.c"
        if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 2))
#line 9984 "check_hlds.det_report.c"
          {
#line 791 "det_report.m"
            check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
            check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9990 "check_hlds.det_report.c"
          }
#line 9992 "check_hlds.det_report.c"
        else
#line 9994 "check_hlds.det_report.c"
          if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 1))
#line 9996 "check_hlds.det_report.c"
            {
#line 791 "det_report.m"
              check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
              check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10002 "check_hlds.det_report.c"
            }
#line 10004 "check_hlds.det_report.c"
          else
#line 10006 "check_hlds.det_report.c"
            {
#line 791 "det_report.m"
              check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
              check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10012 "check_hlds.det_report.c"
            }
#line 10014 "check_hlds.det_report.c"
    else
#line 10016 "check_hlds.det_report.c"
      if ((check_hlds__det_report__DesiredSolns_12 == (MR_Integer) 2))
#line 10018 "check_hlds.det_report.c"
        if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 3))
#line 10020 "check_hlds.det_report.c"
          {
#line 773 "det_report.m"
            if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "det_report.m"
              check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "det_report.m"
            else
#line 771 "det_report.m"
              {
#line 772 "det_report.m"
                check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[69]);
#line 771 "det_report.m"
              }
#line 785 "det_report.m"
            check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[71]);
#line 10036 "check_hlds.det_report.c"
          }
#line 10038 "check_hlds.det_report.c"
        else
#line 10040 "check_hlds.det_report.c"
          if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 2))
#line 10042 "check_hlds.det_report.c"
            {
#line 791 "det_report.m"
              check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
              check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10048 "check_hlds.det_report.c"
            }
#line 10050 "check_hlds.det_report.c"
          else
#line 10052 "check_hlds.det_report.c"
            if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 1))
#line 10054 "check_hlds.det_report.c"
              {
#line 791 "det_report.m"
                check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
                check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10060 "check_hlds.det_report.c"
              }
#line 10062 "check_hlds.det_report.c"
            else
#line 10064 "check_hlds.det_report.c"
              {
#line 791 "det_report.m"
                check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
                check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10070 "check_hlds.det_report.c"
              }
#line 10072 "check_hlds.det_report.c"
      else
#line 10074 "check_hlds.det_report.c"
        if ((check_hlds__det_report__DesiredSolns_12 == (MR_Integer) 1))
#line 10076 "check_hlds.det_report.c"
          if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 3))
#line 10078 "check_hlds.det_report.c"
            {
#line 773 "det_report.m"
              if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "det_report.m"
                check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "det_report.m"
              else
#line 771 "det_report.m"
                {
#line 772 "det_report.m"
                  check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[69]);
#line 771 "det_report.m"
                }
#line 779 "det_report.m"
              check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[73]);
#line 10094 "check_hlds.det_report.c"
            }
#line 10096 "check_hlds.det_report.c"
          else
#line 10098 "check_hlds.det_report.c"
            if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 2))
#line 10100 "check_hlds.det_report.c"
              {
#line 773 "det_report.m"
                if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "det_report.m"
                  check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "det_report.m"
                else
#line 771 "det_report.m"
                  {
#line 772 "det_report.m"
                    check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[69]);
#line 771 "det_report.m"
                  }
#line 779 "det_report.m"
                check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[73]);
#line 10116 "check_hlds.det_report.c"
              }
#line 10118 "check_hlds.det_report.c"
            else
#line 10120 "check_hlds.det_report.c"
              if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 1))
#line 10122 "check_hlds.det_report.c"
                {
#line 791 "det_report.m"
                  check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
                  check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10128 "check_hlds.det_report.c"
                }
#line 10130 "check_hlds.det_report.c"
              else
#line 10132 "check_hlds.det_report.c"
                {
#line 791 "det_report.m"
                  check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
                  check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10138 "check_hlds.det_report.c"
                }
#line 10140 "check_hlds.det_report.c"
        else
#line 10142 "check_hlds.det_report.c"
          if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 3))
#line 10144 "check_hlds.det_report.c"
            {
#line 773 "det_report.m"
              if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "det_report.m"
                check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "det_report.m"
              else
#line 771 "det_report.m"
                {
#line 772 "det_report.m"
                  check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[69]);
#line 771 "det_report.m"
                }
#line 785 "det_report.m"
              check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[71]);
#line 10160 "check_hlds.det_report.c"
            }
#line 10162 "check_hlds.det_report.c"
          else
#line 10164 "check_hlds.det_report.c"
            if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 2))
#line 10166 "check_hlds.det_report.c"
              {
#line 773 "det_report.m"
                if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "det_report.m"
                  check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "det_report.m"
                else
#line 771 "det_report.m"
                  {
#line 772 "det_report.m"
                    check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[69]);
#line 771 "det_report.m"
                  }
#line 785 "det_report.m"
                check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[71]);
#line 10182 "check_hlds.det_report.c"
              }
#line 10184 "check_hlds.det_report.c"
            else
#line 10186 "check_hlds.det_report.c"
              if ((check_hlds__det_report__ActualSolns_14 == (MR_Integer) 1))
#line 10188 "check_hlds.det_report.c"
                {
#line 773 "det_report.m"
                  if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "det_report.m"
                    check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "det_report.m"
                  else
#line 771 "det_report.m"
                    {
#line 772 "det_report.m"
                      check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[69]);
#line 771 "det_report.m"
                    }
#line 785 "det_report.m"
                  check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[71]);
#line 10204 "check_hlds.det_report.c"
                }
#line 10206 "check_hlds.det_report.c"
              else
#line 10208 "check_hlds.det_report.c"
                {
#line 791 "det_report.m"
                  check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "det_report.m"
                  check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10214 "check_hlds.det_report.c"
                }
#line 10216 "check_hlds.det_report.c"
    check_hlds__det_report__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 794 "det_report.m"
    {
#line 794 "det_report.m"
      check_hlds__det_report__V_38_38 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__ConnectPieces_20, check_hlds__det_report__SolnsPieces_21);
    }
#line 794 "det_report.m"
    {
#line 794 "det_report.m"
      check_hlds__det_report__RawPieces_22 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__CanFailPieces_16, check_hlds__det_report__V_38_38);
    }
#line 798 "det_report.m"
    if ((check_hlds__det_report__RawPieces_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "det_report.m"
      {
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_41_41;
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_43_43;
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_46_46;
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_47_47;
#line 799 "det_report.m"
        MR_String check_hlds__det_report__V_48_48;
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_49_49;
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_52_52;
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_54_54;
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_57_57;
#line 799 "det_report.m"
        MR_Word check_hlds__det_report__V_58_58;
#line 799 "det_report.m"
        MR_String check_hlds__det_report__V_59_59;

#line 802 "det_report.m"
        {
#line 802 "det_report.m"
          check_hlds__det_report__V_48_48 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Desired_6);
        }
#line 802 "det_report.m"
        {
#line 802 "det_report.m"
          check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 802 "det_report.m"
        }
#line 804 "det_report.m"
        {
#line 804 "det_report.m"
          check_hlds__det_report__V_59_59 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Actual_7);
        }
#line 804 "det_report.m"
        {
#line 804 "det_report.m"
          check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 804 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__V_59_59));
#line 804 "det_report.m"
        }
#line 803 "det_report.m"
        {
#line 803 "det_report.m"
          check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 803 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[7])));
#line 803 "det_report.m"
        }
#line 802 "det_report.m"
        {
#line 802 "det_report.m"
          check_hlds__det_report__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[76])));
#line 802 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_54_54, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 802 "det_report.m"
        }
#line 802 "det_report.m"
        {
#line 802 "det_report.m"
          check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 802 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_54_54));
#line 802 "det_report.m"
        }
#line 802 "det_report.m"
        {
#line 802 "det_report.m"
          check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[39])));
#line 802 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 802 "det_report.m"
        }
#line 801 "det_report.m"
        {
#line 801 "det_report.m"
          check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 801 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 801 "det_report.m"
        }
#line 800 "det_report.m"
        {
#line 800 "det_report.m"
          check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[75])));
#line 800 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 800 "det_report.m"
        }
#line 800 "det_report.m"
        {
#line 800 "det_report.m"
          check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 800 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 800 "det_report.m"
        }
#line 800 "det_report.m"
        {
#line 800 "det_report.m"
          check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[74])));
#line 800 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 800 "det_report.m"
        }
#line 799 "det_report.m"
      }
#line 798 "det_report.m"
    else
#line 796 "det_report.m"
      {
#line 797 "det_report.m"
        {
#line 797 "det_report.m"
          check_hlds__det_report__Pieces_25 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__RawPieces_22, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[7]));
        }
#line 796 "det_report.m"
      }
#line 806 "det_report.m"
    {
#line 806 "det_report.m"
      check_hlds__det_report__V_75_75 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__StartingPieces_9, check_hlds__det_report__Pieces_25);
    }
#line 806 "det_report.m"
    {
#line 806 "det_report.m"
      check_hlds__det_report__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 806 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_74_74, 0) = ((MR_Box) (check_hlds__det_report__V_75_75));
#line 806 "det_report.m"
    }
#line 806 "det_report.m"
    {
#line 806 "det_report.m"
      check_hlds__det_report__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 0) = ((MR_Box) (check_hlds__det_report__V_74_74));
#line 806 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "det_report.m"
    }
#line 806 "det_report.m"
    {
#line 806 "det_report.m"
      check_hlds__det_report__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (check_hlds__det_report__Context_8));
#line 806 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 1) = ((MR_Box) (check_hlds__det_report__V_73_73));
#line 806 "det_report.m"
    }
#line 806 "det_report.m"
    {
#line 806 "det_report.m"
      MR_Word base;
#line 806 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "det_report.m"
      *check_hlds__det_report__Msgs_10 = base;
#line 806 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_72_72));
#line 806 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "det_report.m"
    }
#line 754 "det_report.m"
  }
#line 751 "det_report.m"
}

#line 580 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__GoalExpr_10,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__GoalInfo_11,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_12,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__Desired_13,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__Actual_14,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_15,
#line 580 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109,
#line 580 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_110,
#line 580 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_17)
#line 580 "det_report.m"
{
#line 587 "det_report.m"
  {
#line 587 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 587 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 0))))
#line 697 "det_report.m"
      {
#line 697 "det_report.m"
        MR_Word check_hlds__det_report__DesiredCanFail_84;
#line 697 "det_report.m"
        MR_Word check_hlds__det_report__ActualCanFail_85;
#line 697 "det_report.m"
        MR_Word check_hlds__det_report__ActualSolns_86;
#line 697 "det_report.m"
        MR_Word check_hlds__det_report__DesiredSolns_226;

#line 698 "det_report.m"
        {
#line 698 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__DesiredCanFail_84, &check_hlds__det_report__DesiredSolns_226);
        }
#line 699 "det_report.m"
        {
#line 699 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Actual_14, &check_hlds__det_report__ActualCanFail_85, &check_hlds__det_report__ActualSolns_86);
        }
#line 701 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredCanFail_84 == (MR_Integer) 1);
#line 701 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 702 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__ActualCanFail_85 == (MR_Integer) 0);
#line 707 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 704 "det_report.m"
          {
#line 704 "det_report.m"
            MR_Word check_hlds__det_report__V_122_122;
#line 704 "det_report.m"
            MR_Word check_hlds__det_report__Context_216;

#line 704 "det_report.m"
            {
#line 704 "det_report.m"
              check_hlds__det_report__Context_216 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
            }
#line 706 "det_report.m"
            {
#line 706 "det_report.m"
              check_hlds__det_report__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_122_122, 0) = ((MR_Box) (check_hlds__det_report__Context_216));
#line 706 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[54])));
#line 706 "det_report.m"
            }
#line 706 "det_report.m"
            {
#line 706 "det_report.m"
              MR_Word base;
#line 706 "det_report.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "det_report.m"
              *check_hlds__det_report__Msgs_17 = base;
#line 706 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_122_122));
#line 706 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "det_report.m"
            }
#line 704 "det_report.m"
          }
#line 707 "det_report.m"
        else
#line 714 "det_report.m"
          {
#line 708 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredSolns_226 == (MR_Integer) 0);
#line 708 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 708 "det_report.m"
              {
#line 709 "det_report.m"
                check_hlds__det_report__succeeded = (check_hlds__det_report__ActualSolns_86 == (MR_Integer) 0);
#line 709 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 708 "det_report.m"
              }
#line 714 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 711 "det_report.m"
              {
#line 711 "det_report.m"
                MR_Word check_hlds__det_report__V_130_130;
#line 711 "det_report.m"
                MR_Word check_hlds__det_report__Context_218;

#line 711 "det_report.m"
                {
#line 711 "det_report.m"
                  check_hlds__det_report__Context_218 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                }
#line 713 "det_report.m"
                {
#line 713 "det_report.m"
                  check_hlds__det_report__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_130_130, 0) = ((MR_Box) (check_hlds__det_report__Context_218));
#line 713 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[57])));
#line 713 "det_report.m"
                }
#line 713 "det_report.m"
                {
#line 713 "det_report.m"
                  MR_Word base;
#line 713 "det_report.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "det_report.m"
                  *check_hlds__det_report__Msgs_17 = base;
#line 713 "det_report.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_130_130));
#line 713 "det_report.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "det_report.m"
                }
#line 711 "det_report.m"
              }
#line 714 "det_report.m"
            else
#line 715 "det_report.m"
              *check_hlds__det_report__Msgs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "det_report.m"
          }
#line 715 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 697 "det_report.m"
      }
#line 587 "det_report.m"
    else
#line 587 "det_report.m"
      if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 2))))
#line 646 "det_report.m"
        {
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__PredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)));
#line 646 "det_report.m"
          MR_Integer check_hlds__det_report__ProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__CallContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__InitMsgs_45;
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__StartingPieces_46;
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__AtomicMsgs_47;
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__Context_209;
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 646 "det_report.m"
          MR_Word check_hlds__det_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 5)));

#line 647 "det_report.m"
          {
#line 647 "det_report.m"
            check_hlds__det_report__Context_209 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
          }
#line 648 "det_report.m"
          {
#line 648 "det_report.m"
            check_hlds__det_report__det_report_call_context_7_p_0(check_hlds__det_report__Context_209, check_hlds__det_report__CallContext_43, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__PredId_39, check_hlds__det_report__ProcId_40, &check_hlds__det_report__InitMsgs_45, &check_hlds__det_report__StartingPieces_46);
          }
#line 650 "det_report.m"
          {
#line 650 "det_report.m"
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_209, check_hlds__det_report__StartingPieces_46, &check_hlds__det_report__AtomicMsgs_47);
          }
#line 652 "det_report.m"
          {
#line 652 "det_report.m"
            *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__InitMsgs_45, check_hlds__det_report__AtomicMsgs_47);
          }
#line 652 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 646 "det_report.m"
        }
#line 587 "det_report.m"
      else
#line 587 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 661 "det_report.m"
          {
#line 661 "det_report.m"
            MR_Word check_hlds__det_report__LHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)));
#line 661 "det_report.m"
            MR_Word check_hlds__det_report__RHS_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 661 "det_report.m"
            MR_Word check_hlds__det_report__UnifyContext_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 661 "det_report.m"
            MR_Word check_hlds__det_report__Context_212;
#line 661 "det_report.m"
            MR_Word check_hlds__det_report__StartingPieces_213;
#line 661 "det_report.m"
            MR_Word check_hlds__det_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 661 "det_report.m"
            MR_Word check_hlds__det_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));

#line 662 "det_report.m"
            {
#line 662 "det_report.m"
              check_hlds__det_report__Context_212 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
            }
#line 663 "det_report.m"
            {
#line 663 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__det_report__UnifyContext_58, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__LHS_54, check_hlds__det_report__RHS_55, &check_hlds__det_report__StartingPieces_213);
            }
#line 665 "det_report.m"
            {
#line 665 "det_report.m"
              check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_212, check_hlds__det_report__StartingPieces_213, check_hlds__det_report__Msgs_17);
            }
#line 665 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 661 "det_report.m"
          }
#line 587 "det_report.m"
        else
#line 587 "det_report.m"
          if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 668 "det_report.m"
            {
#line 668 "det_report.m"
              MR_String check_hlds__det_report__DesiredStr_66;
#line 668 "det_report.m"
              MR_Word check_hlds__det_report__V_142_142;
#line 668 "det_report.m"
              MR_Word check_hlds__det_report__V_143_143;
#line 668 "det_report.m"
              MR_String check_hlds__det_report__V_144_144;
#line 668 "det_report.m"
              MR_String check_hlds__det_report__V_146_146;
#line 668 "det_report.m"
              MR_Word check_hlds__det_report__V_149_149;
#line 668 "det_report.m"
              MR_Word check_hlds__det_report__V_150_150;
#line 668 "det_report.m"
              MR_Word check_hlds__det_report__V_151_151;
#line 668 "det_report.m"
              MR_Word check_hlds__det_report__Context_214;
#line 668 "det_report.m"
              MR_Word check_hlds__det_report__Pieces_215;

#line 669 "det_report.m"
              {
#line 669 "det_report.m"
                check_hlds__det_report__Context_214 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
              }
#line 670 "det_report.m"
              {
#line 670 "det_report.m"
                check_hlds__det_report__DesiredStr_66 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Desired_13);
              }
#line 672 "det_report.m"
              {
#line 672 "det_report.m"
                check_hlds__det_report__V_146_146 = mercury__string__f_43_43_2_f_0(check_hlds__det_report__DesiredStr_66, (MR_String) ".");
              }
#line 672 "det_report.m"
              {
#line 672 "det_report.m"
                check_hlds__det_report__V_144_144 = mercury__string__f_43_43_2_f_0((MR_String) "Desired determinism is ", check_hlds__det_report__V_146_146);
              }
#line 672 "det_report.m"
              {
#line 672 "det_report.m"
                check_hlds__det_report__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 672 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_143_143, 1) = ((MR_Box) (check_hlds__det_report__V_144_144));
#line 672 "det_report.m"
              }
#line 671 "det_report.m"
              {
#line 671 "det_report.m"
                check_hlds__det_report__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_142_142, 0) = ((MR_Box) (check_hlds__det_report__V_143_143));
#line 671 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "det_report.m"
              }
#line 671 "det_report.m"
              {
#line 671 "det_report.m"
                check_hlds__det_report__Pieces_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_215, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[58])));
#line 671 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_215, 1) = ((MR_Box) (check_hlds__det_report__V_142_142));
#line 671 "det_report.m"
              }
#line 673 "det_report.m"
              {
#line 673 "det_report.m"
                check_hlds__det_report__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 673 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_151_151, 0) = ((MR_Box) (check_hlds__det_report__Pieces_215));
#line 673 "det_report.m"
              }
#line 673 "det_report.m"
              {
#line 673 "det_report.m"
                check_hlds__det_report__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_150_150, 0) = ((MR_Box) (check_hlds__det_report__V_151_151));
#line 673 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "det_report.m"
              }
#line 673 "det_report.m"
              {
#line 673 "det_report.m"
                check_hlds__det_report__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_149_149, 0) = ((MR_Box) (check_hlds__det_report__Context_214));
#line 673 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_149_149, 1) = ((MR_Box) (check_hlds__det_report__V_150_150));
#line 673 "det_report.m"
              }
#line 673 "det_report.m"
              {
#line 673 "det_report.m"
                MR_Word base;
#line 673 "det_report.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "det_report.m"
                *check_hlds__det_report__Msgs_17 = base;
#line 673 "det_report.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_149_149));
#line 673 "det_report.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "det_report.m"
              }
#line 673 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 668 "det_report.m"
            }
#line 587 "det_report.m"
          else
#line 587 "det_report.m"
            if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 587 "det_report.m"
              {
#line 587 "det_report.m"
                MR_Word check_hlds__det_report__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 587 "det_report.m"
                MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));

#line 588 "det_report.m"
                {
#line 588 "det_report.m"
                  check_hlds__det_report__det_diagnose_conj_7_p_0(check_hlds__det_report__Goals_19, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 588 "det_report.m"
                  return;
                }
#line 587 "det_report.m"
              }
#line 587 "det_report.m"
            else
#line 587 "det_report.m"
              if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 591 "det_report.m"
                {
#line 591 "det_report.m"
                  MR_Integer check_hlds__det_report__DisjunctsWithSoln_20;
#line 591 "det_report.m"
                  MR_Word check_hlds__det_report__Msgs1_21;
#line 591 "det_report.m"
                  MR_Word check_hlds__det_report__DesSolns_23;
#line 591 "det_report.m"
                  MR_Word check_hlds__det_report__Goals_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 594 "det_report.m"
                  MR_Word check_hlds__det_report__V_22_22;
#line 596 "det_report.m"
                  MR_Integer check_hlds__det_report__V_184_184;

#line 592 "det_report.m"
                  {
#line 592 "det_report.m"
                    check_hlds__det_report__det_diagnose_disj_10_p_0(check_hlds__det_report__Goals_198, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, (MR_Integer) 0, &check_hlds__det_report__DisjunctsWithSoln_20, &check_hlds__det_report__Msgs1_21);
                  }
#line 594 "det_report.m"
                  {
#line 594 "det_report.m"
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__V_22_22, &check_hlds__det_report__DesSolns_23);
                  }
#line 596 "det_report.m"
                  check_hlds__det_report__succeeded = (check_hlds__det_report__DesSolns_23 == (MR_Integer) 3);
#line 596 "det_report.m"
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 596 "det_report.m"
                  if (check_hlds__det_report__succeeded)
#line 596 "det_report.m"
                    {
#line 597 "det_report.m"
                      check_hlds__det_report__succeeded = (check_hlds__det_report__DesSolns_23 == (MR_Integer) 2);
#line 597 "det_report.m"
                      check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 596 "det_report.m"
                      if (check_hlds__det_report__succeeded)
#line 596 "det_report.m"
                        {
#line 598 "det_report.m"
                          check_hlds__det_report__V_184_184 = (MR_Integer) 1;
#line 598 "det_report.m"
                          check_hlds__det_report__succeeded = (check_hlds__det_report__DisjunctsWithSoln_20 > check_hlds__det_report__V_184_184);
#line 596 "det_report.m"
                        }
#line 596 "det_report.m"
                    }
#line 609 "det_report.m"
                  if (check_hlds__det_report__succeeded)
#line 600 "det_report.m"
                    {
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__TypeCtorInfo_230_230;
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__Context_24;
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__NestingPieces_25;
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__Pieces_27;
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__Msg_28;
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__V_188_188;
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__V_192_192;
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__V_193_193;
#line 600 "det_report.m"
                      MR_Word check_hlds__det_report__V_195_195;

#line 600 "det_report.m"
                      {
#line 600 "det_report.m"
                        check_hlds__det_report__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                      }
#line 601 "det_report.m"
                      {
#line 601 "det_report.m"
                        check_hlds__det_report__det_diagnose_switch_context_3_p_0(*check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__SwitchContexts_15, &check_hlds__det_report__NestingPieces_25);
                      }
#line 10909 "check_hlds.det_report.c"
                      check_hlds__det_report__TypeCtorInfo_230_230 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 605 "det_report.m"
                      {
#line 605 "det_report.m"
                        check_hlds__det_report__V_188_188 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_230_230, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[61]), (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[60]));
                      }
#line 605 "det_report.m"
                      {
#line 605 "det_report.m"
                        check_hlds__det_report__Pieces_27 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_230_230, check_hlds__det_report__NestingPieces_25, check_hlds__det_report__V_188_188);
                      }
#line 607 "det_report.m"
                      {
#line 607 "det_report.m"
                        check_hlds__det_report__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 607 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__V_193_193, 0) = ((MR_Box) (check_hlds__det_report__Pieces_27));
#line 607 "det_report.m"
                      }
#line 607 "det_report.m"
                      {
#line 607 "det_report.m"
                        check_hlds__det_report__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_192_192, 0) = ((MR_Box) (check_hlds__det_report__V_193_193));
#line 607 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 607 "det_report.m"
                      }
#line 607 "det_report.m"
                      {
#line 607 "det_report.m"
                        check_hlds__det_report__Msg_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 607 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_28, 0) = ((MR_Box) (check_hlds__det_report__Context_24));
#line 607 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_28, 1) = ((MR_Box) (check_hlds__det_report__V_192_192));
#line 607 "det_report.m"
                      }
#line 608 "det_report.m"
                      {
#line 608 "det_report.m"
                        check_hlds__det_report__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_195_195, 0) = ((MR_Box) (check_hlds__det_report__Msg_28));
#line 608 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "det_report.m"
                      }
#line 608 "det_report.m"
                      {
#line 608 "det_report.m"
                        *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_195_195, check_hlds__det_report__Msgs1_21);
                      }
#line 600 "det_report.m"
                    }
#line 609 "det_report.m"
                  else
#line 610 "det_report.m"
                    *check_hlds__det_report__Msgs_17 = check_hlds__det_report__Msgs1_21;
#line 591 "det_report.m"
                }
#line 587 "det_report.m"
              else
#line 587 "det_report.m"
                if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 654 "det_report.m"
                  {
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__GenericCall_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__CallId_53;
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__V_156_156;
#line 654 "det_report.m"
                    MR_String check_hlds__det_report__V_157_157;
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__Context_210;
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__StartingPieces_211;
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 654 "det_report.m"
                    MR_Word check_hlds__det_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 5)));

#line 655 "det_report.m"
                    {
#line 655 "det_report.m"
                      check_hlds__det_report__Context_210 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                    }
#line 656 "det_report.m"
                    {
#line 656 "det_report.m"
                      hlds__hlds_goal__generic_call_id_2_p_0(check_hlds__det_report__GenericCall_48, &check_hlds__det_report__CallId_53);
                    }
#line 657 "det_report.m"
                    {
#line 657 "det_report.m"
                      check_hlds__det_report__V_157_157 = hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(check_hlds__det_report__CallId_53);
                    }
#line 657 "det_report.m"
                    {
#line 657 "det_report.m"
                      check_hlds__det_report__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "det_report.m"
                      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 657 "det_report.m"
                      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_156_156, 1) = ((MR_Box) (check_hlds__det_report__V_157_157));
#line 657 "det_report.m"
                    }
#line 657 "det_report.m"
                    {
#line 657 "det_report.m"
                      check_hlds__det_report__StartingPieces_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "det_report.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_report__StartingPieces_211, 0) = ((MR_Box) (check_hlds__det_report__V_156_156));
#line 657 "det_report.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_report__StartingPieces_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "det_report.m"
                    }
#line 658 "det_report.m"
                    {
#line 658 "det_report.m"
                      check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_210, check_hlds__det_report__StartingPieces_211, check_hlds__det_report__Msgs_17);
                    }
#line 658 "det_report.m"
                    *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 654 "det_report.m"
                  }
#line 587 "det_report.m"
                else
#line 587 "det_report.m"
                  if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 675 "det_report.m"
                    {
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__TypeCtorInfo_235_235;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__Else_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__DesiredSolns_72;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__CondInfo_74;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__CondDetism_75;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__CondSolns_77;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__MsgsCond_79;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__InstMap1_80;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__MsgsThen_81;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__MsgsElse_82;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_136_136;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_137_137;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report__V_139_139;
#line 675 "det_report.m"
                      MR_Word check_hlds__det_report___Vars_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 676 "det_report.m"
                      MR_Word check_hlds__det_report___DesiredCanFail_71;
#line 677 "det_report.m"
                      MR_Word check_hlds__det_report___CondGoal_73;
#line 679 "det_report.m"
                      MR_Word check_hlds__det_report___CondCanFail_76;

#line 676 "det_report.m"
                      {
#line 676 "det_report.m"
                        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report___DesiredCanFail_71, &check_hlds__det_report__DesiredSolns_72);
                      }
#line 677 "det_report.m"
                      check_hlds__det_report___CondGoal_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Cond_68, (MR_Integer) 0)));
#line 677 "det_report.m"
                      check_hlds__det_report__CondInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Cond_68, (MR_Integer) 1)));
#line 678 "det_report.m"
                      {
#line 678 "det_report.m"
                        check_hlds__det_report__CondDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__CondInfo_74);
                      }
#line 679 "det_report.m"
                      {
#line 679 "det_report.m"
                        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__CondDetism_75, &check_hlds__det_report___CondCanFail_76, &check_hlds__det_report__CondSolns_77);
                      }
#line 681 "det_report.m"
                      check_hlds__det_report__succeeded = (check_hlds__det_report__CondSolns_77 == (MR_Integer) 3);
#line 681 "det_report.m"
                      if (check_hlds__det_report__succeeded)
#line 681 "det_report.m"
                        {
#line 682 "det_report.m"
                          check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredSolns_72 == (MR_Integer) 3);
#line 682 "det_report.m"
                          check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 681 "det_report.m"
                        }
#line 687 "det_report.m"
                      if (check_hlds__det_report__succeeded)
#line 684 "det_report.m"
                        {
#line 684 "det_report.m"
                          MR_Word check_hlds__det_report__DesiredCond_78;

#line 684 "det_report.m"
                          {
#line 684 "det_report.m"
                            parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__DesiredCond_78, (MR_Integer) 0, check_hlds__det_report__DesiredSolns_72);
                          }
#line 685 "det_report.m"
                          {
#line 685 "det_report.m"
                            check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Cond_68, check_hlds__det_report__InstMap0_12, check_hlds__det_report__DesiredCond_78, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__STATE_VARIABLE_DetInfo_136_136, &check_hlds__det_report__MsgsCond_79);
                          }
#line 684 "det_report.m"
                        }
#line 687 "det_report.m"
                      else
#line 688 "det_report.m"
                        {
#line 688 "det_report.m"
                          check_hlds__det_report__MsgsCond_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 688 "det_report.m"
                          check_hlds__det_report__STATE_VARIABLE_DetInfo_136_136 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 688 "det_report.m"
                        }
#line 690 "det_report.m"
                      {
#line 690 "det_report.m"
                        hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Cond_68, check_hlds__det_report__InstMap0_12, &check_hlds__det_report__InstMap1_80);
                      }
#line 691 "det_report.m"
                      {
#line 691 "det_report.m"
                        check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Then_69, check_hlds__det_report__InstMap1_80, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_136_136, &check_hlds__det_report__STATE_VARIABLE_DetInfo_137_137, &check_hlds__det_report__MsgsThen_81);
                      }
#line 693 "det_report.m"
                      {
#line 693 "det_report.m"
                        check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Else_70, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_137_137, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__MsgsElse_82);
                      }
#line 11163 "check_hlds.det_report.c"
                      check_hlds__det_report__TypeCtorInfo_235_235 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0;
#line 695 "det_report.m"
                      {
#line 695 "det_report.m"
                        check_hlds__det_report__V_139_139 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_235_235, check_hlds__det_report__MsgsThen_81, check_hlds__det_report__MsgsElse_82);
                      }
#line 695 "det_report.m"
                      {
#line 695 "det_report.m"
                        *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_235_235, check_hlds__det_report__MsgsCond_79, check_hlds__det_report__V_139_139);
                      }
#line 675 "det_report.m"
                    }
#line 587 "det_report.m"
                  else
#line 587 "det_report.m"
                    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 718 "det_report.m"
                      {
#line 718 "det_report.m"
                        MR_Word check_hlds__det_report__SubGoal_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 718 "det_report.m"
                        MR_Word check_hlds__det_report__SubGoalInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_88, (MR_Integer) 1)));
#line 718 "det_report.m"
                        MR_Word check_hlds__det_report__Internal_91;
#line 718 "det_report.m"
                        MR_Word check_hlds__det_report__InternalDesired_92;
#line 718 "det_report.m"
                        MR_Word check_hlds__det_report__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 719 "det_report.m"
                        MR_Word check_hlds__det_report__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_88, (MR_Integer) 0)));

#line 720 "det_report.m"
                        {
#line 720 "det_report.m"
                          check_hlds__det_report__Internal_91 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_90);
                        }
#line 721 "det_report.m"
                        check_hlds__det_report__succeeded = (check_hlds__det_report__Actual_14 == check_hlds__det_report__Internal_91);
#line 723 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 722 "det_report.m"
                          check_hlds__det_report__InternalDesired_92 = check_hlds__det_report__Desired_13;
#line 723 "det_report.m"
                        else
#line 724 "det_report.m"
                          {
#line 724 "det_report.m"
                            MR_Word check_hlds__det_report__CanFail_93;
#line 724 "det_report.m"
                            MR_Word check_hlds__det_report__V_94_94;

#line 724 "det_report.m"
                            {
#line 724 "det_report.m"
                              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__CanFail_93, &check_hlds__det_report__V_94_94);
                            }
#line 725 "det_report.m"
                            {
#line 725 "det_report.m"
                              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__InternalDesired_92, check_hlds__det_report__CanFail_93, (MR_Integer) 3);
                            }
#line 724 "det_report.m"
                          }
#line 727 "det_report.m"
                        {
#line 727 "det_report.m"
                          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__SubGoal_88, check_hlds__det_report__InstMap0_12, check_hlds__det_report__InternalDesired_92, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 727 "det_report.m"
                          return;
                        }
#line 718 "det_report.m"
                      }
#line 587 "det_report.m"
                    else
#line 587 "det_report.m"
                      if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 730 "det_report.m"
                        {
#line 730 "det_report.m"
                          MR_Word check_hlds__det_report__ShortHand_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));

#line 738 "det_report.m"
                          if (((MR_tag((MR_Word) check_hlds__det_report__ShortHand_95)) == (MR_mktag((MR_Integer) 1))))
#line 732 "det_report.m"
                            {
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__MainGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 4)));
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__OrElseGoals_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 5)));
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__MainMsgs_103;
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__OrElseMsgs_104;
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115;
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 0)));
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 1)));
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 2)));
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 3)));
#line 732 "det_report.m"
                              MR_Word check_hlds__det_report__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 6)));

#line 733 "det_report.m"
                              {
#line 733 "det_report.m"
                                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__MainGoal_100, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115, &check_hlds__det_report__MainMsgs_103);
                              }
#line 735 "det_report.m"
                              {
#line 735 "det_report.m"
                                check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(check_hlds__det_report__OrElseGoals_101, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__OrElseMsgs_104);
                              }
#line 737 "det_report.m"
                              {
#line 737 "det_report.m"
                                *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__MainMsgs_103, check_hlds__det_report__OrElseMsgs_104);
                              }
#line 732 "det_report.m"
                            }
#line 738 "det_report.m"
                          else
#line 738 "det_report.m"
                            if (((MR_tag((MR_Word) check_hlds__det_report__ShortHand_95)) == (MR_mktag((MR_Integer) 0))))
#line 743 "det_report.m"
                              {
#line 745 "det_report.m"
                                {
#line 745 "det_report.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
#line 745 "det_report.m"
                                  return;
                                }
#line 743 "det_report.m"
                              }
#line 738 "det_report.m"
                            else
#line 739 "det_report.m"
                              {
#line 739 "det_report.m"
                                MR_Word check_hlds__det_report__SubGoal_227 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 2)));
#line 739 "det_report.m"
                                MR_Word check_hlds__det_report__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 0)));
#line 739 "det_report.m"
                                MR_Word check_hlds__det_report__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 1)));

#line 740 "det_report.m"
                                {
#line 740 "det_report.m"
                                  check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__SubGoal_227, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 740 "det_report.m"
                                  return;
                                }
#line 739 "det_report.m"
                              }
#line 730 "det_report.m"
                        }
#line 587 "det_report.m"
                      else
#line 613 "det_report.m"
                        {
#line 613 "det_report.m"
                          MR_Word check_hlds__det_report__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 613 "det_report.m"
                          MR_Word check_hlds__det_report__SwitchCanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 613 "det_report.m"
                          MR_Word check_hlds__det_report__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 613 "det_report.m"
                          MR_Word check_hlds__det_report__VarTypes_36;
#line 613 "det_report.m"
                          MR_Word check_hlds__det_report__VarType_37;
#line 613 "det_report.m"
                          MR_Word check_hlds__det_report__Msgs2_38;
#line 613 "det_report.m"
                          MR_Word check_hlds__det_report__Msgs1_205;
#line 619 "det_report.m"
                          MR_Word check_hlds__det_report__V_159_159;
#line 619 "det_report.m"
                          MR_Word check_hlds__det_report__V_237_237;
#line 620 "det_report.m"
                          MR_Word check_hlds__det_report__V_32_32;

#line 619 "det_report.m"
                          check_hlds__det_report__succeeded = (check_hlds__det_report__SwitchCanFail_30 == (MR_Integer) 0);
#line 619 "det_report.m"
                          if (check_hlds__det_report__succeeded)
#line 619 "det_report.m"
                            {
#line 620 "det_report.m"
                              check_hlds__det_report__V_159_159 = (MR_Integer) 1;
#line 620 "det_report.m"
                              {
#line 620 "det_report.m"
                                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__V_237_237, &check_hlds__det_report__V_32_32);
                              }
#line 620 "det_report.m"
                              check_hlds__det_report__succeeded = (check_hlds__det_report__V_159_159 == check_hlds__det_report__V_237_237);
#line 619 "det_report.m"
                            }
#line 637 "det_report.m"
                          if (check_hlds__det_report__succeeded)
#line 622 "det_report.m"
                            {
#line 622 "det_report.m"
                              MR_String check_hlds__det_report__VarStr_33;
#line 622 "det_report.m"
                              MR_Word check_hlds__det_report__MaybeMissingPieces_34;
#line 622 "det_report.m"
                              MR_Word check_hlds__det_report__V_175_175;
#line 622 "det_report.m"
                              MR_Word check_hlds__det_report__V_176_176;
#line 622 "det_report.m"
                              MR_Word check_hlds__det_report__V_177_177;
#line 622 "det_report.m"
                              MR_Word check_hlds__det_report__V_178_178;
#line 622 "det_report.m"
                              MR_Word check_hlds__det_report__Context_199;
#line 622 "det_report.m"
                              MR_Word check_hlds__det_report__NestingPieces_200;
#line 622 "det_report.m"
                              MR_Word check_hlds__det_report__Pieces_201;

#line 622 "det_report.m"
                              {
#line 622 "det_report.m"
                                check_hlds__det_report__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                              }
#line 623 "det_report.m"
                              {
#line 623 "det_report.m"
                                check_hlds__det_report__det_diagnose_switch_context_3_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__SwitchContexts_15, &check_hlds__det_report__NestingPieces_200);
                              }
#line 625 "det_report.m"
                              {
#line 625 "det_report.m"
                                check_hlds__det_report__find_missing_cons_ids_6_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Var_29, check_hlds__det_report__Cases_31, &check_hlds__det_report__VarStr_33, &check_hlds__det_report__MaybeMissingPieces_34);
                              }
#line 631 "det_report.m"
                              if ((check_hlds__det_report__MaybeMissingPieces_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 632 "det_report.m"
                                {
#line 632 "det_report.m"
                                  MR_Word check_hlds__det_report__V_162_162;
#line 632 "det_report.m"
                                  MR_Word check_hlds__det_report__V_163_163;

#line 633 "det_report.m"
                                  {
#line 633 "det_report.m"
                                    check_hlds__det_report__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 633 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_163_163, 0) = ((MR_Box) (check_hlds__det_report__VarStr_33));
#line 633 "det_report.m"
                                  }
#line 633 "det_report.m"
                                  {
#line 633 "det_report.m"
                                    check_hlds__det_report__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_162_162, 0) = ((MR_Box) (check_hlds__det_report__V_163_163));
#line 633 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[64])));
#line 633 "det_report.m"
                                  }
#line 633 "det_report.m"
                                  {
#line 633 "det_report.m"
                                    check_hlds__det_report__Pieces_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[62])));
#line 633 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_201, 1) = ((MR_Box) (check_hlds__det_report__V_162_162));
#line 633 "det_report.m"
                                  }
#line 632 "det_report.m"
                                }
#line 631 "det_report.m"
                              else
#line 628 "det_report.m"
                                {
#line 628 "det_report.m"
                                  MR_Word check_hlds__det_report__MissingPieces_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeMissingPieces_34, (MR_Integer) 0)));
#line 628 "det_report.m"
                                  MR_Word check_hlds__det_report__V_170_170;
#line 628 "det_report.m"
                                  MR_Word check_hlds__det_report__V_171_171;
#line 628 "det_report.m"
                                  MR_Word check_hlds__det_report__V_172_172;

#line 629 "det_report.m"
                                  {
#line 629 "det_report.m"
                                    check_hlds__det_report__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_171_171, 0) = ((MR_Box) (check_hlds__det_report__VarStr_33));
#line 629 "det_report.m"
                                  }
#line 629 "det_report.m"
                                  {
#line 629 "det_report.m"
                                    check_hlds__det_report__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[65])));
#line 629 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_172_172, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces_35));
#line 629 "det_report.m"
                                  }
#line 629 "det_report.m"
                                  {
#line 629 "det_report.m"
                                    check_hlds__det_report__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_170_170, 0) = ((MR_Box) (check_hlds__det_report__V_171_171));
#line 629 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_170_170, 1) = ((MR_Box) (check_hlds__det_report__V_172_172));
#line 629 "det_report.m"
                                  }
#line 629 "det_report.m"
                                  {
#line 629 "det_report.m"
                                    check_hlds__det_report__Pieces_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[62])));
#line 629 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_201, 1) = ((MR_Box) (check_hlds__det_report__V_170_170));
#line 629 "det_report.m"
                                  }
#line 628 "det_report.m"
                                }
#line 636 "det_report.m"
                              {
#line 636 "det_report.m"
                                check_hlds__det_report__V_178_178 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__NestingPieces_200, check_hlds__det_report__Pieces_201);
                              }
#line 636 "det_report.m"
                              {
#line 636 "det_report.m"
                                check_hlds__det_report__V_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 636 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_177_177, 0) = ((MR_Box) (check_hlds__det_report__V_178_178));
#line 636 "det_report.m"
                              }
#line 636 "det_report.m"
                              {
#line 636 "det_report.m"
                                check_hlds__det_report__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_176_176, 0) = ((MR_Box) (check_hlds__det_report__V_177_177));
#line 636 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "det_report.m"
                              }
#line 636 "det_report.m"
                              {
#line 636 "det_report.m"
                                check_hlds__det_report__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 636 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_175_175, 0) = ((MR_Box) (check_hlds__det_report__Context_199));
#line 636 "det_report.m"
                                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_175_175, 1) = ((MR_Box) (check_hlds__det_report__V_176_176));
#line 636 "det_report.m"
                              }
#line 636 "det_report.m"
                              {
#line 636 "det_report.m"
                                check_hlds__det_report__Msgs1_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__Msgs1_205, 0) = ((MR_Box) (check_hlds__det_report__V_175_175));
#line 636 "det_report.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_report__Msgs1_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "det_report.m"
                              }
#line 622 "det_report.m"
                            }
#line 637 "det_report.m"
                          else
#line 638 "det_report.m"
                            check_hlds__det_report__Msgs1_205 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "det_report.m"
                          {
#line 640 "det_report.m"
                            check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__VarTypes_36);
                          }
#line 641 "det_report.m"
                          {
#line 641 "det_report.m"
                            parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_36, check_hlds__det_report__Var_29, &check_hlds__det_report__VarType_37);
                          }
#line 642 "det_report.m"
                          {
#line 642 "det_report.m"
                            check_hlds__det_report__det_diagnose_switch_arms_9_p_0(check_hlds__det_report__Var_29, check_hlds__det_report__VarType_37, check_hlds__det_report__Cases_31, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__Msgs2_38);
                          }
#line 644 "det_report.m"
                          {
#line 644 "det_report.m"
                            *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_205, check_hlds__det_report__Msgs2_38);
                          }
#line 613 "det_report.m"
                        }
#line 587 "det_report.m"
  }
#line 580 "det_report.m"
}

#line 564 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_9,
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__Desired_10,
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_11,
#line 564 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_17,
#line 564 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_18,
#line 564 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_13)
#line 564 "det_report.m"
{
#line 568 "det_report.m"
  {
#line 568 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 568 "det_report.m"
    MR_Word check_hlds__det_report__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));
#line 568 "det_report.m"
    MR_Word check_hlds__det_report__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
#line 568 "det_report.m"
    MR_Word check_hlds__det_report__Actual_16;
#line 571 "det_report.m"
    MR_Word check_hlds__det_report__V_21_21;

#line 570 "det_report.m"
    {
#line 570 "det_report.m"
      check_hlds__det_report__Actual_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_15);
    }
#line 571 "det_report.m"
    {
#line 571 "det_report.m"
      check_hlds__det_report__compare_determinisms_3_p_0(check_hlds__det_report__Desired_10, check_hlds__det_report__Actual_16, &check_hlds__det_report__V_21_21);
    }
#line 571 "det_report.m"
    check_hlds__det_report__succeeded = ((MR_Integer) 0 == check_hlds__det_report__V_21_21);
#line 574 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 572 "det_report.m"
      {
#line 572 "det_report.m"
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_14, check_hlds__det_report__GoalInfo_15, check_hlds__det_report__InstMap0_9, check_hlds__det_report__Desired_10, check_hlds__det_report__Actual_16, check_hlds__det_report__SwitchContexts_11, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_17, check_hlds__det_report__STATE_VARIABLE_DetInfo_18, check_hlds__det_report__Msgs_13);
#line 572 "det_report.m"
        return;
      }
#line 574 "det_report.m"
    else
#line 575 "det_report.m"
      {
#line 575 "det_report.m"
        *check_hlds__det_report__Msgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_18 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_17;
#line 575 "det_report.m"
      }
#line 568 "det_report.m"
  }
#line 564 "det_report.m"
}

#line 490 "det_report.m"
static void MR_CALL 
check_hlds__det_report__report_determinism_problem_7_p_0(
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 490 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_9,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_10,
#line 490 "det_report.m"
  MR_String check_hlds__det_report__Message_11,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__DeclaredDetism_12,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__InferredDetism_13,
#line 490 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_14)
#line 490 "det_report.m"
{
#line 494 "det_report.m"
  {
#line 494 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__TypeCtorInfo_60_60;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_16;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__Context_17;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__ProcPieces_18;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_19;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_21_21;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_26_26;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_27_27;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_30_30;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_32_32;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_33_33;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_34_34;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_36_36;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_39_39;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_40_40;
#line 494 "det_report.m"
    MR_String check_hlds__det_report__V_41_41;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_42_42;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_45_45;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_48_48;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_49_49;
#line 494 "det_report.m"
    MR_String check_hlds__det_report__V_50_50;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_55_55;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_56_56;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_57_57;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_15_15;

#line 495 "det_report.m"
    {
#line 495 "det_report.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_report__ModuleInfo_10, check_hlds__det_report__PredId_8, check_hlds__det_report__ProcId_9, &check_hlds__det_report__V_15_15, &check_hlds__det_report__ProcInfo_16);
    }
#line 496 "det_report.m"
    {
#line 496 "det_report.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_16, &check_hlds__det_report__Context_17);
    }
#line 497 "det_report.m"
    {
#line 497 "det_report.m"
      check_hlds__det_report__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_21_21, 0) = ((MR_Box) (check_hlds__det_report__PredId_8));
#line 497 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_21_21, 1) = ((MR_Box) (check_hlds__det_report__ProcId_9));
#line 497 "det_report.m"
    }
#line 497 "det_report.m"
    {
#line 497 "det_report.m"
      check_hlds__det_report__ProcPieces_18 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_report__ModuleInfo_10, (MR_Integer) 1, check_hlds__det_report__V_21_21);
    }
#line 11740 "check_hlds.det_report.c"
    check_hlds__det_report__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 500 "det_report.m"
    {
#line 500 "det_report.m"
      check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "det_report.m"
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 500 "det_report.m"
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (check_hlds__det_report__Message_11));
#line 500 "det_report.m"
    }
#line 502 "det_report.m"
    {
#line 502 "det_report.m"
      check_hlds__det_report__V_41_41 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__DeclaredDetism_12);
    }
#line 502 "det_report.m"
    {
#line 502 "det_report.m"
      check_hlds__det_report__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "det_report.m"
      MR_hl_field(MR_mktag(2), check_hlds__det_report__V_40_40, 0) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 502 "det_report.m"
    }
#line 504 "det_report.m"
    {
#line 504 "det_report.m"
      check_hlds__det_report__V_50_50 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_13);
    }
#line 504 "det_report.m"
    {
#line 504 "det_report.m"
      check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(2), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (check_hlds__det_report__V_50_50));
#line 504 "det_report.m"
    }
#line 503 "det_report.m"
    {
#line 503 "det_report.m"
      check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 503 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[49])));
#line 503 "det_report.m"
    }
#line 502 "det_report.m"
    {
#line 502 "det_report.m"
      check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[40])));
#line 502 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 502 "det_report.m"
    }
#line 502 "det_report.m"
    {
#line 502 "det_report.m"
      check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[39])));
#line 502 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 502 "det_report.m"
    }
#line 501 "det_report.m"
    {
#line 501 "det_report.m"
      check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__V_40_40));
#line 501 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_42_42));
#line 501 "det_report.m"
    }
#line 500 "det_report.m"
    {
#line 500 "det_report.m"
      check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[38])));
#line 500 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 500 "det_report.m"
    }
#line 500 "det_report.m"
    {
#line 500 "det_report.m"
      check_hlds__det_report__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 500 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_34_34, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
#line 500 "det_report.m"
    }
#line 499 "det_report.m"
    {
#line 499 "det_report.m"
      check_hlds__det_report__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_32_32, 0) = ((MR_Box) (check_hlds__det_report__V_33_33));
#line 499 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_32_32, 1) = ((MR_Box) (check_hlds__det_report__V_34_34));
#line 499 "det_report.m"
    }
#line 499 "det_report.m"
    {
#line 499 "det_report.m"
      check_hlds__det_report__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 499 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 1) = ((MR_Box) (check_hlds__det_report__V_32_32));
#line 499 "det_report.m"
    }
#line 499 "det_report.m"
    {
#line 499 "det_report.m"
      check_hlds__det_report__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[36])));
#line 499 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__V_30_30));
#line 499 "det_report.m"
    }
#line 499 "det_report.m"
    {
#line 499 "det_report.m"
      check_hlds__det_report__V_26_26 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_60_60, check_hlds__det_report__ProcPieces_18, check_hlds__det_report__V_27_27);
    }
#line 499 "det_report.m"
    {
#line 499 "det_report.m"
      check_hlds__det_report__Pieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_60_60, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[35]), check_hlds__det_report__V_26_26);
    }
#line 505 "det_report.m"
    {
#line 505 "det_report.m"
      check_hlds__det_report__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (check_hlds__det_report__Pieces_19));
#line 505 "det_report.m"
    }
#line 505 "det_report.m"
    {
#line 505 "det_report.m"
      check_hlds__det_report__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "det_report.m"
    }
#line 505 "det_report.m"
    {
#line 505 "det_report.m"
      check_hlds__det_report__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__Context_17));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (check_hlds__det_report__V_56_56));
#line 505 "det_report.m"
    }
#line 505 "det_report.m"
    {
#line 505 "det_report.m"
      MR_Word base;
#line 505 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "det_report.m"
      *check_hlds__det_report__Msgs_14 = base;
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_55_55));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "det_report.m"
    }
#line 494 "det_report.m"
  }
#line 490 "det_report.m"
}

#line 354 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
#line 354 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 354 "det_report.m"
{
#line 354 "det_report.m"
  {
#line 354 "det_report.m"
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s *) check_hlds__det_report__env_ptr_arg;

#line 356 "det_report.m"
    {
#line 356 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3, *((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4));
    }
#line 356 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded = ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5 == (MR_Integer) 1);
#line 356 "det_report.m"
    if ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded)
#line 356 "det_report.m"
      {
#line 356 "det_report.m"
        ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont)((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr);
#line 356 "det_report.m"
        return;
      }
#line 354 "det_report.m"
  }
#line 354 "det_report.m"
}

#line 352 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
#line 352 "det_report.m"
  MR_Word check_hlds__det_report__EvalMethod_3,
#line 352 "det_report.m"
  MR_Word * check_hlds__det_report__Detism_4,
#line 352 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 352 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr)
#line 352 "det_report.m"
{
#line 352 "det_report.m"
  {
#line 352 "det_report.m"
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s check_hlds__det_report__env;

#line 352 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3 = check_hlds__det_report__EvalMethod_3;
#line 352 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4 = check_hlds__det_report__Detism_4;
#line 352 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont = check_hlds__det_report__cont;
#line 352 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr = check_hlds__det_report__cont_env_ptr;
#line 364 "det_report.m"
    {
#line 364 "det_report.m"
      MR_Integer check_hlds__det_report__slot_0 = (MR_Integer) 0;

#line 364 "det_report.m"
      do
#line 364 "det_report.m"
        {
#line 364 "det_report.m"
          *((check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4) = ((&check_hlds__det_report_vector_common_7[0 + check_hlds__det_report__slot_0]))->check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
#line 364 "det_report.m"
          {
#line 364 "det_report.m"
            check_hlds__det_report__get_valid_dets_2_p_0_1(&check_hlds__det_report__env);
          }
#line 364 "det_report.m"
          check_hlds__det_report__slot_0 = (check_hlds__det_report__slot_0 + (MR_Integer) 1);
#line 364 "det_report.m"
        }
#line 364 "det_report.m"
      while ((check_hlds__det_report__slot_0 < (MR_Integer) 8));
#line 364 "det_report.m"
    }
#line 352 "det_report.m"
  }
#line 352 "det_report.m"
}

#line 334 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
#line 334 "det_report.m"
  MR_Word check_hlds__det_report__DetismDecl_3)
#line 334 "det_report.m"
{
#line 338 "det_report.m"
  {
#line 338 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 338 "det_report.m"
    MR_String check_hlds__det_report__Name_4;

#line 338 "det_report.m"
    if ((check_hlds__det_report__DetismDecl_3 == (MR_Integer) 0))
#line 339 "det_report.m"
      check_hlds__det_report__Name_4 = (MR_String) "determinism declaration";
#line 338 "det_report.m"
    else
#line 338 "det_report.m"
      if ((check_hlds__det_report__DetismDecl_3 == (MR_Integer) 1))
#line 342 "det_report.m"
        check_hlds__det_report__Name_4 = (MR_String) "implicit determinism declaration";
#line 338 "det_report.m"
      else
#line 345 "det_report.m"
        check_hlds__det_report__Name_4 = (MR_String) "nonexistent determinism declaration";
#line 338 "det_report.m"
    return check_hlds__det_report__Name_4;
#line 338 "det_report.m"
  }
#line 334 "det_report.m"
}

#line 314 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_8,
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 314 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 314 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_21,
#line 314 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_22)
#line 314 "det_report.m"
{
#line 319 "det_report.m"
  {
#line 319 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 319 "det_report.m"
    MR_Word check_hlds__det_report__Markers_14;

#line 320 "det_report.m"
    {
#line 320 "det_report.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Markers_14);
    }
#line 321 "det_report.m"
    {
#line 321 "det_report.m"
      check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_14, (MR_Integer) 23);
    }
#line 330 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 322 "det_report.m"
      {
#line 322 "det_report.m"
        MR_Word check_hlds__det_report__Goal_15;
#line 322 "det_report.m"
        MR_Word check_hlds__det_report__VarTypes_16;
#line 322 "det_report.m"
        MR_Word check_hlds__det_report__InstMap0_17;
#line 322 "det_report.m"
        MR_Word check_hlds__det_report__DetInfo0_18;
#line 322 "det_report.m"
        MR_Word check_hlds__det_report__DetInfo_19;
#line 322 "det_report.m"
        MR_Word check_hlds__det_report__RCSSpecs_20;

#line 322 "det_report.m"
        {
#line 322 "det_report.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Goal_15);
        }
#line 323 "det_report.m"
        {
#line 323 "det_report.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarTypes_16);
        }
#line 324 "det_report.m"
        {
#line 324 "det_report.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_report__ProcInfo_12, check_hlds__det_report__ModuleInfo_8, &check_hlds__det_report__InstMap0_17);
        }
#line 325 "det_report.m"
        {
#line 325 "det_report.m"
          check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_report__ModuleInfo_8, check_hlds__det_report__VarTypes_16, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__DetInfo0_18);
        }
#line 327 "det_report.m"
        {
#line 327 "det_report.m"
          check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_15, check_hlds__det_report__InstMap0_17, check_hlds__det_report__DetInfo0_18, &check_hlds__det_report__DetInfo_19);
        }
#line 328 "det_report.m"
        {
#line 328 "det_report.m"
          check_hlds__det_util__det_info_get_error_specs_2_p_0(check_hlds__det_report__DetInfo_19, &check_hlds__det_report__RCSSpecs_20);
        }
#line 329 "det_report.m"
        {
#line 329 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__det_report__RCSSpecs_20, check_hlds__det_report__STATE_VARIABLE_Specs_0_21);
        }
#line 322 "det_report.m"
      }
#line 330 "det_report.m"
    else
#line 329 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_Specs_22 = check_hlds__det_report__STATE_VARIABLE_Specs_0_21;
#line 319 "det_report.m"
  }
#line 314 "det_report.m"
}

#line 299 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_3(
#line 299 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 299 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 299 "det_report.m"
{
#line 299 "det_report.m"
  {
#line 299 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 299 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 299 "det_report.m"
    MR_String check_hlds__det_report__conv1_HeadVar__2_2;

#line 299 "det_report.m"
    {
#line 299 "det_report.m"
      check_hlds__det_report__conv1_HeadVar__2_2 = parse_tree__prog_out__determinism_to_string_1_f_0(((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 299 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv1_HeadVar__2_2));
#line 299 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 299 "det_report.m"
  }
#line 299 "det_report.m"
}

#line 298 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_1(
#line 298 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 298 "det_report.m"
{
#line 298 "det_report.m"
  {
#line 298 "det_report.m"
    struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s *) check_hlds__det_report__env_ptr_arg;

#line 298 "det_report.m"
    *((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4));
#line 298 "det_report.m"
    {
#line 298 "det_report.m"
      ((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont)((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr);
#line 298 "det_report.m"
      return;
    }
#line 298 "det_report.m"
  }
#line 298 "det_report.m"
}

#line 298 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_2(
#line 298 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 298 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 298 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 298 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr)
#line 298 "det_report.m"
{
#line 298 "det_report.m"
  {
#line 298 "det_report.m"
    struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s check_hlds__det_report__env;

#line 298 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1 = check_hlds__det_report__wrapper_arg_1;
#line 298 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont = check_hlds__det_report__cont;
#line 298 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr = check_hlds__det_report__cont_env_ptr;
#line 298 "det_report.m"
    {
#line 298 "det_report.m"
      MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;

#line 298 "det_report.m"
      {
#line 298 "det_report.m"
        check_hlds__det_report__get_valid_dets_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), &(check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4, check_hlds__det_report__check_determinism_8_p_0_1, &check_hlds__det_report__env);
      }
#line 298 "det_report.m"
    }
#line 298 "det_report.m"
  }
#line 298 "det_report.m"
}

#line 186 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0(
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 186 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45,
#line 186 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46,
#line 186 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_47,
#line 186 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_48)
#line 186 "det_report.m"
{
#line 190 "det_report.m"
  {
#line 190 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 190 "det_report.m"
    MR_Word check_hlds__det_report__MaybeDetism_15;
#line 190 "det_report.m"
    MR_Word check_hlds__det_report__InferredDetism_16;
#line 190 "det_report.m"
    MR_Word check_hlds__det_report__EvalMethod_35;
#line 190 "det_report.m"
    MR_Word check_hlds__det_report__Valid_36;
#line 190 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_73_73;
#line 190 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_74_74;

#line 191 "det_report.m"
    {
#line 191 "det_report.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__MaybeDetism_15);
    }
#line 192 "det_report.m"
    {
#line 192 "det_report.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__InferredDetism_16);
    }
#line 195 "det_report.m"
    if ((check_hlds__det_report__MaybeDetism_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "det_report.m"
      {
#line 194 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45;
#line 194 "det_report.m"
        check_hlds__det_report__STATE_VARIABLE_Specs_73_73 = check_hlds__det_report__STATE_VARIABLE_Specs_0_47;
#line 194 "det_report.m"
      }
#line 195 "det_report.m"
    else
#line 196 "det_report.m"
      {
#line 196 "det_report.m"
        MR_Word check_hlds__det_report__DeclaredDetism_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeDetism_15, (MR_Integer) 0)));
#line 196 "det_report.m"
        MR_Word check_hlds__det_report__Cmp_18;

#line 197 "det_report.m"
        {
#line 197 "det_report.m"
          check_hlds__det_report__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__Cmp_18);
        }
#line 200 "det_report.m"
        if ((check_hlds__det_report__Cmp_18 == (MR_Integer) 2))
#line 201 "det_report.m"
          {
#line 201 "det_report.m"
            MR_Word check_hlds__det_report__Globals_19;
#line 201 "det_report.m"
            MR_Word check_hlds__det_report__ShouldIssueWarning_20;
#line 201 "det_report.m"
            MR_Word check_hlds__det_report__WarnAboutInferredErroneous_21;
#line 201 "det_report.m"
            MR_Word check_hlds__det_report__Markers_22;
#line 209 "det_report.m"
            MR_Word check_hlds__det_report__ImportStatus_23;
#line 209 "det_report.m"
            MR_Word check_hlds__det_report__V_66_66;
#line 215 "det_report.m"
            MR_Word check_hlds__det_report__V_63_63;
#line 218 "det_report.m"
            MR_Word check_hlds__det_report__V_64_64;
#line 222 "det_report.m"
            MR_Word check_hlds__det_report__V_65_65;

#line 202 "det_report.m"
            {
#line 202 "det_report.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, &check_hlds__det_report__Globals_19);
            }
#line 203 "det_report.m"
            {
#line 203 "det_report.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__det_report__Globals_19, (MR_Integer) 7, &check_hlds__det_report__ShouldIssueWarning_20);
            }
#line 205 "det_report.m"
            {
#line 205 "det_report.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__det_report__Globals_19, (MR_Integer) 8, &check_hlds__det_report__WarnAboutInferredErroneous_21);
            }
#line 207 "det_report.m"
            {
#line 207 "det_report.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Markers_22);
            }
#line 209 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__ShouldIssueWarning_20 == (MR_Integer) 1);
#line 209 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 209 "det_report.m"
              {
#line 215 "det_report.m"
                check_hlds__det_report__V_63_63 = (MR_Integer) 10;
#line 215 "det_report.m"
                {
#line 215 "det_report.m"
                  check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_63_63);
                }
#line 215 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 209 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 209 "det_report.m"
                  {
#line 218 "det_report.m"
                    check_hlds__det_report__V_64_64 = (MR_Integer) 0;
#line 218 "det_report.m"
                    {
#line 218 "det_report.m"
                      check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_64_64);
                    }
#line 218 "det_report.m"
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 209 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 209 "det_report.m"
                      {
#line 222 "det_report.m"
                        check_hlds__det_report__V_65_65 = (MR_Integer) 5;
#line 222 "det_report.m"
                        {
#line 222 "det_report.m"
                          check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_65_65);
                        }
#line 222 "det_report.m"
                        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 209 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 209 "det_report.m"
                          {
#line 229 "det_report.m"
                            {
#line 229 "det_report.m"
                              check_hlds__det_report__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__det_report__PredInfo_11);
                            }
#line 229 "det_report.m"
                            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 209 "det_report.m"
                            if (check_hlds__det_report__succeeded)
#line 209 "det_report.m"
                              {
#line 236 "det_report.m"
                                if ((check_hlds__det_report__WarnAboutInferredErroneous_21 == (MR_Integer) 0))
#line 238 "det_report.m"
                                  {
#line 238 "det_report.m"
                                    check_hlds__det_report__succeeded = (check_hlds__det_report__InferredDetism_16 == (MR_Integer) 6);
#line 238 "det_report.m"
                                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 238 "det_report.m"
                                  }
#line 236 "det_report.m"
                                else
#line 235 "det_report.m"
                                  check_hlds__det_report__succeeded = MR_TRUE;
#line 209 "det_report.m"
                                if (check_hlds__det_report__succeeded)
#line 209 "det_report.m"
                                  {
#line 244 "det_report.m"
                                    {
#line 244 "det_report.m"
                                      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__ImportStatus_23);
                                    }
#line 245 "det_report.m"
                                    {
#line 245 "det_report.m"
                                      check_hlds__det_report__V_66_66 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__det_report__ImportStatus_23);
                                    }
#line 245 "det_report.m"
                                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_66_66 == (MR_Integer) 1);
#line 209 "det_report.m"
                                  }
#line 209 "det_report.m"
                              }
#line 209 "det_report.m"
                          }
#line 209 "det_report.m"
                      }
#line 209 "det_report.m"
                  }
#line 209 "det_report.m"
              }
#line 255 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 247 "det_report.m"
              {
#line 247 "det_report.m"
                MR_Word check_hlds__det_report__DetismDecl_24;
#line 247 "det_report.m"
                MR_String check_hlds__det_report__Message_25;
#line 247 "det_report.m"
                MR_Word check_hlds__det_report__ReportMsgs_26;
#line 247 "det_report.m"
                MR_Word check_hlds__det_report__ReportSpec_27;
#line 247 "det_report.m"
                MR_String check_hlds__det_report__V_68_68;
#line 247 "det_report.m"
                MR_String check_hlds__det_report__V_69_69;

#line 247 "det_report.m"
                {
#line 247 "det_report.m"
                  hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__DetismDecl_24);
                }
#line 248 "det_report.m"
                {
#line 248 "det_report.m"
                  check_hlds__det_report__V_69_69 = check_hlds__det_report__detism_decl_name_1_f_0(check_hlds__det_report__DetismDecl_24);
                }
#line 248 "det_report.m"
                {
#line 248 "det_report.m"
                  check_hlds__det_report__V_68_68 = mercury__string__f_43_43_2_f_0(check_hlds__det_report__V_69_69, (MR_String) " could be tighter.\n");
                }
#line 248 "det_report.m"
                {
#line 248 "det_report.m"
                  check_hlds__det_report__Message_25 = mercury__string__f_43_43_2_f_0((MR_String) "warning: ", check_hlds__det_report__V_68_68);
                }
#line 250 "det_report.m"
                {
#line 250 "det_report.m"
                  check_hlds__det_report__report_determinism_problem_7_p_0(check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__Message_25, check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__ReportMsgs_26);
                }
#line 252 "det_report.m"
                {
#line 252 "det_report.m"
                  check_hlds__det_report__ReportSpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 252 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 252 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 252 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 2) = ((MR_Box) (check_hlds__det_report__ReportMsgs_26));
#line 252 "det_report.m"
                }
#line 254 "det_report.m"
                {
#line 254 "det_report.m"
                  check_hlds__det_report__STATE_VARIABLE_Specs_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_73_73, 0) = ((MR_Box) (check_hlds__det_report__ReportSpec_27));
#line 254 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_73_73, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_47));
#line 254 "det_report.m"
                }
#line 247 "det_report.m"
              }
#line 255 "det_report.m"
            else
#line 254 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_73_73 = check_hlds__det_report__STATE_VARIABLE_Specs_0_47;
#line 254 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45;
#line 201 "det_report.m"
          }
#line 200 "det_report.m"
        else
#line 200 "det_report.m"
          if ((check_hlds__det_report__Cmp_18 == (MR_Integer) 1))
#line 199 "det_report.m"
            {
#line 199 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45;
#line 199 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_73_73 = check_hlds__det_report__STATE_VARIABLE_Specs_0_47;
#line 199 "det_report.m"
            }
#line 200 "det_report.m"
          else
#line 259 "det_report.m"
            {
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__Goal_28;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__VarTypes_29;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__InstMap0_30;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__DetInfo0_31;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__DetInfo_32;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__GoalMsgs_33;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__SortedGoalMsgs_34;
#line 259 "det_report.m"
              MR_String check_hlds__det_report__V_50_50;
#line 259 "det_report.m"
              MR_String check_hlds__det_report__V_51_51;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__V_59_59;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__DetismDecl_127;
#line 259 "det_report.m"
              MR_String check_hlds__det_report__Message_128;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__ReportMsgs_129;
#line 259 "det_report.m"
              MR_Word check_hlds__det_report__ReportSpec_130;

#line 260 "det_report.m"
              {
#line 260 "det_report.m"
                hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__DetismDecl_127);
              }
#line 261 "det_report.m"
              {
#line 261 "det_report.m"
                check_hlds__det_report__V_51_51 = check_hlds__det_report__detism_decl_name_1_f_0(check_hlds__det_report__DetismDecl_127);
              }
#line 261 "det_report.m"
              {
#line 261 "det_report.m"
                check_hlds__det_report__V_50_50 = mercury__string__f_43_43_2_f_0(check_hlds__det_report__V_51_51, (MR_String) " not satisfied.\n");
              }
#line 261 "det_report.m"
              {
#line 261 "det_report.m"
                check_hlds__det_report__Message_128 = mercury__string__f_43_43_2_f_0((MR_String) "error: ", check_hlds__det_report__V_50_50);
              }
#line 263 "det_report.m"
              {
#line 263 "det_report.m"
                check_hlds__det_report__report_determinism_problem_7_p_0(check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__Message_128, check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__ReportMsgs_129);
              }
#line 265 "det_report.m"
              {
#line 265 "det_report.m"
                hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Goal_28);
              }
#line 266 "det_report.m"
              {
#line 266 "det_report.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarTypes_29);
              }
#line 267 "det_report.m"
              {
#line 267 "det_report.m"
                hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_report__ProcInfo_12, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, &check_hlds__det_report__InstMap0_30);
              }
#line 268 "det_report.m"
              {
#line 268 "det_report.m"
                check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__VarTypes_29, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__DetInfo0_31);
              }
#line 270 "det_report.m"
              {
#line 270 "det_report.m"
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_28, check_hlds__det_report__InstMap0_30, check_hlds__det_report__DeclaredDetism_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__DetInfo0_31, &check_hlds__det_report__DetInfo_32, &check_hlds__det_report__GoalMsgs_33);
              }
#line 272 "det_report.m"
              {
#line 272 "det_report.m"
                check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_32, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46);
              }
#line 273 "det_report.m"
              {
#line 273 "det_report.m"
                parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_report__GoalMsgs_33, &check_hlds__det_report__SortedGoalMsgs_34);
              }
#line 274 "det_report.m"
              {
#line 274 "det_report.m"
                check_hlds__det_report__V_59_59 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__ReportMsgs_129, check_hlds__det_report__SortedGoalMsgs_34);
              }
#line 274 "det_report.m"
              {
#line 274 "det_report.m"
                check_hlds__det_report__ReportSpec_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 274 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 274 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_130, 2) = ((MR_Box) (check_hlds__det_report__V_59_59));
#line 274 "det_report.m"
              }
#line 276 "det_report.m"
              {
#line 276 "det_report.m"
                check_hlds__det_report__STATE_VARIABLE_Specs_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_73_73, 0) = ((MR_Box) (check_hlds__det_report__ReportSpec_130));
#line 276 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_73_73, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_47));
#line 276 "det_report.m"
              }
#line 259 "det_report.m"
            }
#line 196 "det_report.m"
      }
#line 280 "det_report.m"
    {
#line 280 "det_report.m"
      check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(*check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__PredInfo_11, check_hlds__det_report__ProcInfo_12, check_hlds__det_report__STATE_VARIABLE_Specs_73_73, &check_hlds__det_report__STATE_VARIABLE_Specs_74_74);
    }
#line 284 "det_report.m"
    {
#line 284 "det_report.m"
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__EvalMethod_35);
    }
#line 285 "det_report.m"
    {
#line 285 "det_report.m"
      check_hlds__det_report__Valid_36 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0(check_hlds__det_report__EvalMethod_35, check_hlds__det_report__InferredDetism_16);
    }
#line 288 "det_report.m"
    if ((check_hlds__det_report__Valid_36 == (MR_Integer) 0))
#line 289 "det_report.m"
      {
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_133_133;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_134_134;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__Context_37;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__MainPieces_38;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__Detisms_39;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__DetismStrs_40;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__SortedDetismStrs_41;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__DetismPieces_42;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__VerbosePieces_43;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__ValidSpec_44;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_75_75;
#line 289 "det_report.m"
        MR_String check_hlds__det_report__V_76_76;
#line 289 "det_report.m"
        MR_String check_hlds__det_report__V_78_78;
#line 289 "det_report.m"
        MR_String check_hlds__det_report__V_79_79;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_81_81;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_84_84;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_87_87;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_88_88;
#line 289 "det_report.m"
        MR_String check_hlds__det_report__V_89_89;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_94_94;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_96_96;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_99_99;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_102_102;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_103_103;
#line 289 "det_report.m"
        MR_String check_hlds__det_report__V_104_104;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_107_107;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_118_118;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_119_119;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_120_120;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_121_121;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_122_122;
#line 289 "det_report.m"
        MR_Word check_hlds__det_report__V_123_123;
#line 305 "det_report.m"
        MR_Box check_hlds__det_report__conv2_V_104_104;

#line 290 "det_report.m"
        {
#line 290 "det_report.m"
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Context_37);
        }
#line 293 "det_report.m"
        {
#line 293 "det_report.m"
          check_hlds__det_report__V_79_79 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(check_hlds__det_report__EvalMethod_35);
        }
#line 293 "det_report.m"
        {
#line 293 "det_report.m"
          check_hlds__det_report__V_78_78 = mercury__string__f_43_43_2_f_0(check_hlds__det_report__V_79_79, (MR_String) "\'");
        }
#line 292 "det_report.m"
        {
#line 292 "det_report.m"
          check_hlds__det_report__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) "Error: \140pragma ", check_hlds__det_report__V_78_78);
        }
#line 293 "det_report.m"
        {
#line 293 "det_report.m"
          check_hlds__det_report__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 293 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_75_75, 1) = ((MR_Box) (check_hlds__det_report__V_76_76));
#line 293 "det_report.m"
        }
#line 296 "det_report.m"
        {
#line 296 "det_report.m"
          check_hlds__det_report__V_89_89 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_16);
        }
#line 296 "det_report.m"
        {
#line 296 "det_report.m"
          check_hlds__det_report__V_88_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_88_88, 0) = ((MR_Box) (check_hlds__det_report__V_89_89));
#line 296 "det_report.m"
        }
#line 295 "det_report.m"
        {
#line 295 "det_report.m"
          check_hlds__det_report__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_87_87, 0) = ((MR_Box) (check_hlds__det_report__V_88_88));
#line 295 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[49])));
#line 295 "det_report.m"
        }
#line 294 "det_report.m"
        {
#line 294 "det_report.m"
          check_hlds__det_report__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[47])));
#line 294 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_84_84, 1) = ((MR_Box) (check_hlds__det_report__V_87_87));
#line 294 "det_report.m"
        }
#line 293 "det_report.m"
        {
#line 293 "det_report.m"
          check_hlds__det_report__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[46])));
#line 293 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_81_81, 1) = ((MR_Box) (check_hlds__det_report__V_84_84));
#line 293 "det_report.m"
        }
#line 291 "det_report.m"
        {
#line 291 "det_report.m"
          check_hlds__det_report__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__MainPieces_38, 0) = ((MR_Box) (check_hlds__det_report__V_75_75));
#line 291 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__MainPieces_38, 1) = ((MR_Box) (check_hlds__det_report__V_81_81));
#line 291 "det_report.m"
        }
#line 298 "det_report.m"
        {
#line 298 "det_report.m"
          check_hlds__det_report__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 298 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_94_94, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_6[0]));
#line 298 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_94_94, 1) = ((MR_Box) (check_hlds__det_report__check_determinism_8_p_0_2));
#line 298 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 298 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_94_94, 3) = ((MR_Box) (check_hlds__det_report__EvalMethod_35));
#line 298 "det_report.m"
        }
#line 12852 "check_hlds.det_report.c"
        check_hlds__det_report__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0;
#line 298 "det_report.m"
        {
#line 298 "det_report.m"
          mercury__solutions__solutions_2_p_1(check_hlds__det_report__TypeCtorInfo_133_133, check_hlds__det_report__V_94_94, &check_hlds__det_report__Detisms_39);
        }
#line 12859 "check_hlds.det_report.c"
        check_hlds__det_report__TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 299 "det_report.m"
        {
#line 299 "det_report.m"
          check_hlds__det_report__DetismStrs_40 = mercury__list__map_2_f_0(check_hlds__det_report__TypeCtorInfo_133_133, check_hlds__det_report__TypeCtorInfo_134_134, (MR_Word) &check_hlds__det_report_scalar_common_1[2], check_hlds__det_report__Detisms_39);
        }
#line 300 "det_report.m"
        {
#line 300 "det_report.m"
          mercury__list__sort_2_p_0(check_hlds__det_report__TypeCtorInfo_134_134, check_hlds__det_report__DetismStrs_40, &check_hlds__det_report__SortedDetismStrs_41);
        }
#line 301 "det_report.m"
        {
#line 301 "det_report.m"
          check_hlds__det_report__DetismPieces_42 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_report__SortedDetismStrs_41);
        }
#line 305 "det_report.m"
        {
#line 305 "det_report.m"
          check_hlds__det_report__conv2_V_104_104 = parse_tree__error_util__choose_number_3_f_0(check_hlds__det_report__TypeCtorInfo_133_133, check_hlds__det_report__TypeCtorInfo_134_134, check_hlds__det_report__Detisms_39, ((MR_Box) ((MR_String) "determinism")), ((MR_Box) ((MR_String) "determinisms")));
        }
#line 305 "det_report.m"
        check_hlds__det_report__V_104_104 = ((MR_String) check_hlds__det_report__conv2_V_104_104);
#line 305 "det_report.m"
        {
#line 305 "det_report.m"
          check_hlds__det_report__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_103_103, 1) = ((MR_Box) (check_hlds__det_report__V_104_104));
#line 305 "det_report.m"
        }
#line 305 "det_report.m"
        {
#line 305 "det_report.m"
          check_hlds__det_report__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_107_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[36])));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_107_107, 1) = ((MR_Box) (check_hlds__det_report__DetismPieces_42));
#line 305 "det_report.m"
        }
#line 304 "det_report.m"
        {
#line 304 "det_report.m"
          check_hlds__det_report__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_102_102, 0) = ((MR_Box) (check_hlds__det_report__V_103_103));
#line 304 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_102_102, 1) = ((MR_Box) (check_hlds__det_report__V_107_107));
#line 304 "det_report.m"
        }
#line 303 "det_report.m"
        {
#line 303 "det_report.m"
          check_hlds__det_report__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_99_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[51])));
#line 303 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_99_99, 1) = ((MR_Box) (check_hlds__det_report__V_102_102));
#line 303 "det_report.m"
        }
#line 307 "det_report.m"
        {
#line 307 "det_report.m"
          check_hlds__det_report__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_96_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[50])));
#line 307 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_96_96, 1) = ((MR_Box) (check_hlds__det_report__V_99_99));
#line 307 "det_report.m"
        }
#line 302 "det_report.m"
        {
#line 302 "det_report.m"
          check_hlds__det_report__VerbosePieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_96_96, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[7]));
        }
#line 310 "det_report.m"
        {
#line 310 "det_report.m"
          check_hlds__det_report__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 310 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_121_121, 0) = ((MR_Box) (check_hlds__det_report__MainPieces_38));
#line 310 "det_report.m"
        }
#line 310 "det_report.m"
        {
#line 310 "det_report.m"
          check_hlds__det_report__V_123_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 310 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_123_123, 0) = ((MR_Box) (check_hlds__det_report__VerbosePieces_43));
#line 310 "det_report.m"
        }
#line 310 "det_report.m"
        {
#line 310 "det_report.m"
          check_hlds__det_report__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_122_122, 0) = ((MR_Box) (check_hlds__det_report__V_123_123));
#line 310 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "det_report.m"
        }
#line 309 "det_report.m"
        {
#line 309 "det_report.m"
          check_hlds__det_report__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_120_120, 0) = ((MR_Box) (check_hlds__det_report__V_121_121));
#line 309 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_120_120, 1) = ((MR_Box) (check_hlds__det_report__V_122_122));
#line 309 "det_report.m"
        }
#line 310 "det_report.m"
        {
#line 310 "det_report.m"
          check_hlds__det_report__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_119_119, 0) = ((MR_Box) (check_hlds__det_report__Context_37));
#line 310 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_119_119, 1) = ((MR_Box) (check_hlds__det_report__V_120_120));
#line 310 "det_report.m"
        }
#line 308 "det_report.m"
        {
#line 308 "det_report.m"
          check_hlds__det_report__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_118_118, 0) = ((MR_Box) (check_hlds__det_report__V_119_119));
#line 308 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "det_report.m"
        }
#line 308 "det_report.m"
        {
#line 308 "det_report.m"
          check_hlds__det_report__ValidSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 308 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 308 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 2) = ((MR_Box) (check_hlds__det_report__V_118_118));
#line 308 "det_report.m"
        }
#line 311 "det_report.m"
        {
#line 311 "det_report.m"
          MR_Word base;
#line 311 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_Specs_48 = base;
#line 311 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__ValidSpec_44));
#line 311 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_74_74));
#line 311 "det_report.m"
        }
#line 289 "det_report.m"
      }
#line 288 "det_report.m"
    else
#line 287 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_Specs_48 = check_hlds__det_report__STATE_VARIABLE_Specs_74_74;
#line 190 "det_report.m"
  }
#line 186 "det_report.m"
}

#line 131 "det_report.m"
void MR_CALL 
check_hlds__det_report__compare_determinisms_3_p_0(
#line 131 "det_report.m"
  MR_Word check_hlds__det_report__DeclaredDetism_4,
#line 131 "det_report.m"
  MR_Word check_hlds__det_report__InferredDetism_5,
#line 131 "det_report.m"
  MR_Word * check_hlds__det_report__CmpDetism_6)
#line 131 "det_report.m"
{
#line 509 "det_report.m"
  {
#line 509 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 509 "det_report.m"
    MR_Word check_hlds__det_report__DeclaredCanFail_7;
#line 509 "det_report.m"
    MR_Word check_hlds__det_report__DeclaredSolns_8;
#line 509 "det_report.m"
    MR_Word check_hlds__det_report__InferredCanFail_9;
#line 509 "det_report.m"
    MR_Word check_hlds__det_report__InferredSolns_10;
#line 509 "det_report.m"
    MR_Word check_hlds__det_report__CmpCanFail_11;
#line 509 "det_report.m"
    MR_Word check_hlds__det_report__CmpSolns_12;

#line 510 "det_report.m"
    {
#line 510 "det_report.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__DeclaredDetism_4, &check_hlds__det_report__DeclaredCanFail_7, &check_hlds__det_report__DeclaredSolns_8);
    }
#line 511 "det_report.m"
    {
#line 511 "det_report.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__InferredDetism_5, &check_hlds__det_report__InferredCanFail_9, &check_hlds__det_report__InferredSolns_10);
    }
#line 531 "det_report.m"
    if ((check_hlds__det_report__DeclaredCanFail_7 == (MR_Integer) 0))
#line 531 "det_report.m"
      if ((check_hlds__det_report__InferredCanFail_9 == (MR_Integer) 0))
#line 534 "det_report.m"
        check_hlds__det_report__CmpCanFail_11 = (MR_Integer) 1;
#line 531 "det_report.m"
      else
#line 533 "det_report.m"
        check_hlds__det_report__CmpCanFail_11 = (MR_Integer) 2;
#line 531 "det_report.m"
    else
#line 531 "det_report.m"
      if ((check_hlds__det_report__InferredCanFail_9 == (MR_Integer) 0))
#line 532 "det_report.m"
        check_hlds__det_report__CmpCanFail_11 = (MR_Integer) 0;
#line 531 "det_report.m"
      else
#line 531 "det_report.m"
        check_hlds__det_report__CmpCanFail_11 = (MR_Integer) 1;
#line 539 "det_report.m"
    if ((check_hlds__det_report__DeclaredSolns_8 == (MR_Integer) 3))
#line 539 "det_report.m"
      if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 3))
#line 557 "det_report.m"
        check_hlds__det_report__CmpSolns_12 = (MR_Integer) 1;
#line 539 "det_report.m"
      else
#line 539 "det_report.m"
        if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 2))
#line 556 "det_report.m"
          check_hlds__det_report__CmpSolns_12 = (MR_Integer) 2;
#line 539 "det_report.m"
        else
#line 539 "det_report.m"
          if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 1))
#line 555 "det_report.m"
            check_hlds__det_report__CmpSolns_12 = (MR_Integer) 2;
#line 539 "det_report.m"
          else
#line 554 "det_report.m"
            check_hlds__det_report__CmpSolns_12 = (MR_Integer) 2;
#line 539 "det_report.m"
    else
#line 539 "det_report.m"
      if ((check_hlds__det_report__DeclaredSolns_8 == (MR_Integer) 2))
#line 539 "det_report.m"
        if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 3))
#line 552 "det_report.m"
          check_hlds__det_report__CmpSolns_12 = (MR_Integer) 0;
#line 539 "det_report.m"
        else
#line 539 "det_report.m"
          if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 2))
#line 551 "det_report.m"
            check_hlds__det_report__CmpSolns_12 = (MR_Integer) 1;
#line 539 "det_report.m"
          else
#line 539 "det_report.m"
            if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 1))
#line 550 "det_report.m"
              check_hlds__det_report__CmpSolns_12 = (MR_Integer) 2;
#line 539 "det_report.m"
            else
#line 549 "det_report.m"
              check_hlds__det_report__CmpSolns_12 = (MR_Integer) 2;
#line 539 "det_report.m"
      else
#line 539 "det_report.m"
        if ((check_hlds__det_report__DeclaredSolns_8 == (MR_Integer) 1))
#line 539 "det_report.m"
          if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 3))
#line 547 "det_report.m"
            check_hlds__det_report__CmpSolns_12 = (MR_Integer) 0;
#line 539 "det_report.m"
          else
#line 539 "det_report.m"
            if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 2))
#line 546 "det_report.m"
              check_hlds__det_report__CmpSolns_12 = (MR_Integer) 0;
#line 539 "det_report.m"
            else
#line 539 "det_report.m"
              if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 1))
#line 545 "det_report.m"
                check_hlds__det_report__CmpSolns_12 = (MR_Integer) 1;
#line 539 "det_report.m"
              else
#line 544 "det_report.m"
                check_hlds__det_report__CmpSolns_12 = (MR_Integer) 2;
#line 539 "det_report.m"
        else
#line 539 "det_report.m"
          if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 3))
#line 542 "det_report.m"
            check_hlds__det_report__CmpSolns_12 = (MR_Integer) 0;
#line 539 "det_report.m"
          else
#line 539 "det_report.m"
            if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 2))
#line 541 "det_report.m"
              check_hlds__det_report__CmpSolns_12 = (MR_Integer) 0;
#line 539 "det_report.m"
            else
#line 539 "det_report.m"
              if ((check_hlds__det_report__InferredSolns_10 == (MR_Integer) 1))
#line 540 "det_report.m"
                check_hlds__det_report__CmpSolns_12 = (MR_Integer) 0;
#line 539 "det_report.m"
              else
#line 539 "det_report.m"
                check_hlds__det_report__CmpSolns_12 = (MR_Integer) 1;
#line 520 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CmpCanFail_11 == (MR_Integer) 0);
#line 520 "det_report.m"
    if (!(check_hlds__det_report__succeeded))
#line 520 "det_report.m"
      check_hlds__det_report__succeeded = (check_hlds__det_report__CmpSolns_12 == (MR_Integer) 0);
#line 522 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 521 "det_report.m"
      *check_hlds__det_report__CmpDetism_6 = (MR_Integer) 0;
#line 522 "det_report.m"
    else
#line 524 "det_report.m"
      {
#line 522 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__CmpCanFail_11 == (MR_Integer) 2);
#line 522 "det_report.m"
        if (!(check_hlds__det_report__succeeded))
#line 522 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__CmpSolns_12 == (MR_Integer) 2);
#line 524 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 523 "det_report.m"
          *check_hlds__det_report__CmpDetism_6 = (MR_Integer) 2;
#line 524 "det_report.m"
        else
#line 525 "det_report.m"
          *check_hlds__det_report__CmpDetism_6 = (MR_Integer) 1;
#line 524 "det_report.m"
      }
#line 509 "det_report.m"
  }
#line 131 "det_report.m"
}

#line 1614 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
#line 1614 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1614 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1614 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 1614 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_3)
#line 1614 "det_report.m"
{
#line 1614 "det_report.m"
  {
#line 1614 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1614 "det_report.m"
    MR_Word check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8;

#line 1614 "det_report.m"
    {
#line 1614 "det_report.m"
      check_hlds__det_report__restore_option_3_p_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2), &check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8);
    }
#line 1614 "det_report.m"
    *check_hlds__det_report__wrapper_arg_3 = ((MR_Box) (check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8));
#line 1614 "det_report.m"
  }
#line 1614 "det_report.m"
}

#line 121 "det_report.m"
void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0(
#line 121 "det_report.m"
  MR_Word check_hlds__det_report__OptionsToRestore_4,
#line 121 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_6,
#line 121 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_7)
#line 121 "det_report.m"
{
#line 1613 "det_report.m"
  {
#line 1613 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1614 "det_report.m"
    MR_Box check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7;

#line 1614 "det_report.m"
    {
#line 1614 "det_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__det_report_scalar_common_1[0], (MR_Word) &libs__globals__libs__globals__type_ctor_info_globals_0, (MR_Word) &check_hlds__det_report_scalar_common_1[1], check_hlds__det_report__OptionsToRestore_4, ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Globals_0_6)), &check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7);
    }
#line 1614 "det_report.m"
    *check_hlds__det_report__STATE_VARIABLE_Globals_7 = ((MR_Word) check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7);
#line 1613 "det_report.m"
  }
#line 121 "det_report.m"
}

#line 118 "det_report.m"
void MR_CALL 
check_hlds__det_report__disable_det_warnings_3_p_0(
#line 118 "det_report.m"
  MR_Word * check_hlds__det_report__OptionsToRestore_4,
#line 118 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_8,
#line 118 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_9)
#line 118 "det_report.m"
{
#line 1603 "det_report.m"
  {
#line 1603 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1603 "det_report.m"
    MR_Word check_hlds__det_report__WarnSimple_6;
#line 1603 "det_report.m"
    MR_Word check_hlds__det_report__WarnDeclsTooLax_7;
#line 1603 "det_report.m"
    MR_Word check_hlds__det_report__V_13_13;
#line 1603 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_14_14;
#line 1603 "det_report.m"
    MR_Word check_hlds__det_report__V_20_20;
#line 1603 "det_report.m"
    MR_Word check_hlds__det_report__V_22_22;
#line 1603 "det_report.m"
    MR_Word check_hlds__det_report__V_23_23;

#line 1604 "det_report.m"
    {
#line 1604 "det_report.m"
      libs__globals__lookup_option_3_p_0(check_hlds__det_report__STATE_VARIABLE_Globals_0_8, (MR_Integer) 19, &check_hlds__det_report__WarnSimple_6);
    }
#line 1605 "det_report.m"
    {
#line 1605 "det_report.m"
      libs__globals__lookup_option_3_p_0(check_hlds__det_report__STATE_VARIABLE_Globals_0_8, (MR_Integer) 7, &check_hlds__det_report__WarnDeclsTooLax_7);
    }
#line 1606 "det_report.m"
    check_hlds__det_report__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[1]);
#line 1606 "det_report.m"
    {
#line 1606 "det_report.m"
      libs__globals__set_option_4_p_0((MR_Integer) 19, check_hlds__det_report__V_13_13, check_hlds__det_report__STATE_VARIABLE_Globals_0_8, &check_hlds__det_report__STATE_VARIABLE_Globals_14_14);
    }
#line 1607 "det_report.m"
    {
#line 1607 "det_report.m"
      libs__globals__set_option_4_p_0((MR_Integer) 7, check_hlds__det_report__V_13_13, check_hlds__det_report__STATE_VARIABLE_Globals_14_14, check_hlds__det_report__STATE_VARIABLE_Globals_9);
    }
#line 1609 "det_report.m"
    {
#line 1609 "det_report.m"
      check_hlds__det_report__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1609 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 0) = ((MR_Box) ((MR_Integer) 19));
#line 1609 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 1) = ((MR_Box) (check_hlds__det_report__WarnSimple_6));
#line 1609 "det_report.m"
    }
#line 1611 "det_report.m"
    {
#line 1611 "det_report.m"
      check_hlds__det_report__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_23_23, 0) = ((MR_Box) ((MR_Integer) 7));
#line 1611 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_23_23, 1) = ((MR_Box) (check_hlds__det_report__WarnDeclsTooLax_7));
#line 1611 "det_report.m"
    }
#line 1609 "det_report.m"
    {
#line 1609 "det_report.m"
      check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__V_23_23));
#line 1609 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1609 "det_report.m"
    }
#line 1608 "det_report.m"
    {
#line 1608 "det_report.m"
      MR_Word base;
#line 1608 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "det_report.m"
      *check_hlds__det_report__OptionsToRestore_4 = base;
#line 1608 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_20_20));
#line 1608 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__V_22_22));
#line 1608 "det_report.m"
    }
#line 1603 "det_report.m"
  }
#line 118 "det_report.m"
}

#line 108 "det_report.m"
MR_Word MR_CALL 
check_hlds__det_report__det_report_seen_call_id_2_f_0(
#line 108 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_4,
#line 108 "det_report.m"
  MR_Word check_hlds__det_report__SeenCall_5)
#line 108 "det_report.m"
{
#line 1561 "det_report.m"
  {
#line 1561 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_6;

#line 1561 "det_report.m"
    if ((check_hlds__det_report__SeenCall_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1566 "det_report.m"
      {
#line 1567 "det_report.m"
        check_hlds__det_report__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[44]);
#line 1566 "det_report.m"
      }
#line 1561 "det_report.m"
    else
#line 1561 "det_report.m"
      {
#line 1561 "det_report.m"
        MR_Word check_hlds__det_report__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__SeenCall_5, (MR_Integer) 0)));
#line 1561 "det_report.m"
        MR_Word check_hlds__det_report__PredPieces_9;
#line 1561 "det_report.m"
        MR_Integer check_hlds__det_report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__SeenCall_5, (MR_Integer) 1)));

#line 1562 "det_report.m"
        {
#line 1562 "det_report.m"
          check_hlds__det_report__PredPieces_9 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_report__ModuleInfo_4, (MR_Integer) 0, check_hlds__det_report__PredId_7);
        }
#line 1564 "det_report.m"
        {
#line 1564 "det_report.m"
          check_hlds__det_report__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1564 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[45])));
#line 1564 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_6, 1) = ((MR_Box) (check_hlds__det_report__PredPieces_9));
#line 1564 "det_report.m"
        }
#line 1561 "det_report.m"
      }
#line 1561 "det_report.m"
    return check_hlds__det_report__Pieces_6;
#line 1561 "det_report.m"
  }
#line 108 "det_report.m"
}

#line 1515 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
#line 1515 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1515 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 1515 "det_report.m"
{
#line 1515 "det_report.m"
  {
#line 1515 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 1515 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1515 "det_report.m"
    MR_Word check_hlds__det_report__conv0_Msg_8;

#line 1515 "det_report.m"
    {
#line 1515 "det_report.m"
      check_hlds__det_report__conv0_Msg_8 = check_hlds__det_report__failing_context_description_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 1515 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_Msg_8));
#line 1515 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 1515 "det_report.m"
  }
#line 1515 "det_report.m"
}

#line 103 "det_report.m"
MR_Word MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0(
#line 103 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_5,
#line 103 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_6,
#line 103 "det_report.m"
  MR_Word check_hlds__det_report__FailingContexts_7)
#line 103 "det_report.m"
{
#line 1514 "det_report.m"
  {
#line 1514 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1514 "det_report.m"
    MR_Word check_hlds__det_report__HeadVar__4_4;
#line 1514 "det_report.m"
    MR_Word check_hlds__det_report__V_8_8;

#line 1515 "det_report.m"
    {
#line 1515 "det_report.m"
      check_hlds__det_report__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_4[0]));
#line 1515 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 1) = ((MR_Box) (check_hlds__det_report__failing_contexts_description_3_f_0_1));
#line 1515 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1515 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 3) = ((MR_Box) (check_hlds__det_report__ModuleInfo_5));
#line 1515 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 4) = ((MR_Box) (check_hlds__det_report__VarSet_6));
#line 1515 "det_report.m"
    }
#line 1514 "det_report.m"
    {
#line 1514 "det_report.m"
      check_hlds__det_report__HeadVar__4_4 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_8_8, check_hlds__det_report__FailingContexts_7);
    }
#line 1514 "det_report.m"
    return check_hlds__det_report__HeadVar__4_4;
#line 1514 "det_report.m"
  }
#line 103 "det_report.m"
}

#line 99 "det_report.m"
MR_String MR_CALL 
check_hlds__det_report__lookup_var_name_in_varset_2_f_0(
#line 99 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_4,
#line 99 "det_report.m"
  MR_Word check_hlds__det_report__Var_5)
#line 99 "det_report.m"
{
#line 1511 "det_report.m"
  {
#line 1511 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1511 "det_report.m"
    MR_String check_hlds__det_report__HeadVar__3_3;

#line 1511 "det_report.m"
    {
#line 1511 "det_report.m"
      return check_hlds__det_report__HeadVar__3_3 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_4, (MR_Integer) 0, check_hlds__det_report__Var_5);
    }
#line 1511 "det_report.m"
    return check_hlds__det_report__HeadVar__3_3;
#line 1511 "det_report.m"
  }
#line 99 "det_report.m"
}

#line 95 "det_report.m"
MR_String MR_CALL 
check_hlds__det_report__promise_solutions_kind_str_1_f_0(
#line 95 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1)
#line 95 "det_report.m"
{
#line 1505 "det_report.m"
  {
#line 1505 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1505 "det_report.m"
    MR_String check_hlds__det_report__HeadVar__2_2;

#line 1505 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == (MR_Integer) 1))
#line 1507 "det_report.m"
      check_hlds__det_report__HeadVar__2_2 = (MR_String) "promise_equivalent_solution_sets";
#line 1505 "det_report.m"
    else
#line 1505 "det_report.m"
      if ((check_hlds__det_report__HeadVar__1_1 == (MR_Integer) 2))
#line 1509 "det_report.m"
        check_hlds__det_report__HeadVar__2_2 = (MR_String) "arbitrary";
#line 1505 "det_report.m"
      else
#line 1505 "det_report.m"
        check_hlds__det_report__HeadVar__2_2 = (MR_String) "promise_equivalent_solutions";
#line 1505 "det_report.m"
    return check_hlds__det_report__HeadVar__2_2;
#line 1505 "det_report.m"
  }
#line 95 "det_report.m"
}

#line 89 "det_report.m"
void MR_CALL 
check_hlds__det_report__det_diagnose_conj_7_p_0(
#line 89 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 89 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 89 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 89 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 89 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 89 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
#line 89 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__7_7)
#line 89 "det_report.m"
{
#line 808 "det_report.m"
  {
#line 808 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 808 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "det_report.m"
      {
#line 808 "det_report.m"
        *check_hlds__det_report__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 808 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 808 "det_report.m"
      }
#line 808 "det_report.m"
    else
#line 810 "det_report.m"
      {
#line 810 "det_report.m"
        MR_Word check_hlds__det_report__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 810 "det_report.m"
        MR_Word check_hlds__det_report__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 810 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_21;
#line 810 "det_report.m"
        MR_Word check_hlds__det_report__InstMap1_22;
#line 810 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_23;
#line 810 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26;

#line 811 "det_report.m"
        {
#line 811 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26, &check_hlds__det_report__Msgs1_21);
        }
#line 813 "det_report.m"
        {
#line 813 "det_report.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__HeadVar__2_2, &check_hlds__det_report__InstMap1_22);
        }
#line 814 "det_report.m"
        {
#line 814 "det_report.m"
          check_hlds__det_report__det_diagnose_conj_7_p_0(check_hlds__det_report__Goals_15, check_hlds__det_report__InstMap1_22, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26, check_hlds__det_report__STATE_VARIABLE_DetInfo_6, &check_hlds__det_report__Msgs2_23);
        }
#line 816 "det_report.m"
        {
#line 816 "det_report.m"
          *check_hlds__det_report__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_21, check_hlds__det_report__Msgs2_23);
        }
#line 810 "det_report.m"
      }
#line 808 "det_report.m"
  }
#line 89 "det_report.m"
}

#line 76 "det_report.m"
void MR_CALL 
check_hlds__det_report__det_check_lambda_7_p_0(
#line 76 "det_report.m"
  MR_Word check_hlds__det_report__DeclaredDetism_8,
#line 76 "det_report.m"
  MR_Word check_hlds__det_report__InferredDetism_9,
#line 76 "det_report.m"
  MR_Word check_hlds__det_report__Goal_10,
#line 76 "det_report.m"
  MR_Word check_hlds__det_report__GoalInfo_11,
#line 76 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_12,
#line 76 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24,
#line 76 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_25)
#line 76 "det_report.m"
{
#line 459 "det_report.m"
  {
#line 459 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 459 "det_report.m"
    MR_Word check_hlds__det_report__Cmp_14;

#line 460 "det_report.m"
    {
#line 460 "det_report.m"
      check_hlds__det_report__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__InferredDetism_9, &check_hlds__det_report__Cmp_14);
    }
#line 482 "det_report.m"
    if ((check_hlds__det_report__Cmp_14 == (MR_Integer) 2))
#line 484 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
#line 482 "det_report.m"
    else
#line 482 "det_report.m"
      if ((check_hlds__det_report__Cmp_14 == (MR_Integer) 1))
#line 483 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
#line 482 "det_report.m"
      else
#line 462 "det_report.m"
        {
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__TypeCtorInfo_74_74;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__PredId_15;
#line 462 "det_report.m"
          MR_Integer check_hlds__det_report__ProcId_16;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__Context_17;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__ModuleInfo_18;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__PredPieces_19;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__Pieces_20;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__GoalMsgs_21;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__SortedGoalMsgs_22;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__Spec_23;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_27_27;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_32_32;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_33_33;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_36_36;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_38_38;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_41_41;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_43_43;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_46_46;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_47_47;
#line 462 "det_report.m"
          MR_String check_hlds__det_report__V_48_48;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_49_49;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_52_52;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_55_55;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_56_56;
#line 462 "det_report.m"
          MR_String check_hlds__det_report__V_57_57;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_63_63;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_66_66;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_67_67;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_68_68;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_69_69;
#line 462 "det_report.m"
          MR_Word check_hlds__det_report__V_70_70;

#line 463 "det_report.m"
          {
#line 463 "det_report.m"
            check_hlds__det_util__det_info_get_pred_id_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__PredId_15);
          }
#line 464 "det_report.m"
          {
#line 464 "det_report.m"
            check_hlds__det_util__det_info_get_proc_id_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__ProcId_16);
          }
#line 465 "det_report.m"
          {
#line 465 "det_report.m"
            check_hlds__det_report__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
          }
#line 466 "det_report.m"
          {
#line 466 "det_report.m"
            check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__ModuleInfo_18);
          }
#line 467 "det_report.m"
          {
#line 467 "det_report.m"
            check_hlds__det_report__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (check_hlds__det_report__PredId_15));
#line 467 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__ProcId_16));
#line 467 "det_report.m"
          }
#line 467 "det_report.m"
          {
#line 467 "det_report.m"
            check_hlds__det_report__PredPieces_19 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_report__ModuleInfo_18, (MR_Integer) 1, check_hlds__det_report__V_27_27);
          }
#line 13802 "check_hlds.det_report.c"
          check_hlds__det_report__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 473 "det_report.m"
          {
#line 473 "det_report.m"
            check_hlds__det_report__V_48_48 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__DeclaredDetism_8);
          }
#line 473 "det_report.m"
          {
#line 473 "det_report.m"
            check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 473 "det_report.m"
          }
#line 475 "det_report.m"
          {
#line 475 "det_report.m"
            check_hlds__det_report__V_57_57 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_9);
          }
#line 475 "det_report.m"
          {
#line 475 "det_report.m"
            check_hlds__det_report__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 475 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 475 "det_report.m"
          }
#line 474 "det_report.m"
          {
#line 474 "det_report.m"
            check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
#line 474 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[42])));
#line 474 "det_report.m"
          }
#line 473 "det_report.m"
          {
#line 473 "det_report.m"
            check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[40])));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_55_55));
#line 473 "det_report.m"
          }
#line 473 "det_report.m"
          {
#line 473 "det_report.m"
            check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[39])));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 473 "det_report.m"
          }
#line 472 "det_report.m"
          {
#line 472 "det_report.m"
            check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 472 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 472 "det_report.m"
          }
#line 471 "det_report.m"
          {
#line 471 "det_report.m"
            check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[38])));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 471 "det_report.m"
          }
#line 471 "det_report.m"
          {
#line 471 "det_report.m"
            check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 471 "det_report.m"
          }
#line 470 "det_report.m"
          {
#line 470 "det_report.m"
            check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[37])));
#line 470 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 470 "det_report.m"
          }
#line 470 "det_report.m"
          {
#line 470 "det_report.m"
            check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 470 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 470 "det_report.m"
          }
#line 470 "det_report.m"
          {
#line 470 "det_report.m"
            check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[36])));
#line 470 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
#line 470 "det_report.m"
          }
#line 470 "det_report.m"
          {
#line 470 "det_report.m"
            check_hlds__det_report__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_74_74, check_hlds__det_report__PredPieces_19, check_hlds__det_report__V_33_33);
          }
#line 469 "det_report.m"
          {
#line 469 "det_report.m"
            check_hlds__det_report__Pieces_20 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_74_74, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[35]), check_hlds__det_report__V_32_32);
          }
#line 476 "det_report.m"
          {
#line 476 "det_report.m"
            check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_10, check_hlds__det_report__InstMap0_12, check_hlds__det_report__DeclaredDetism_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__STATE_VARIABLE_DetInfo_63_63, &check_hlds__det_report__GoalMsgs_21);
          }
#line 478 "det_report.m"
          {
#line 478 "det_report.m"
            parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_report__GoalMsgs_21, &check_hlds__det_report__SortedGoalMsgs_22);
          }
#line 480 "det_report.m"
          {
#line 480 "det_report.m"
            check_hlds__det_report__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 480 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_70_70, 0) = ((MR_Box) (check_hlds__det_report__Pieces_20));
#line 480 "det_report.m"
          }
#line 480 "det_report.m"
          {
#line 480 "det_report.m"
            check_hlds__det_report__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_69_69, 0) = ((MR_Box) (check_hlds__det_report__V_70_70));
#line 480 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "det_report.m"
          }
#line 480 "det_report.m"
          {
#line 480 "det_report.m"
            check_hlds__det_report__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_68_68, 0) = ((MR_Box) (check_hlds__det_report__Context_17));
#line 480 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_68_68, 1) = ((MR_Box) (check_hlds__det_report__V_69_69));
#line 480 "det_report.m"
          }
#line 480 "det_report.m"
          {
#line 480 "det_report.m"
            check_hlds__det_report__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_67_67, 0) = ((MR_Box) (check_hlds__det_report__V_68_68));
#line 480 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "det_report.m"
          }
#line 479 "det_report.m"
          {
#line 479 "det_report.m"
            check_hlds__det_report__V_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_67_67, check_hlds__det_report__SortedGoalMsgs_22);
          }
#line 479 "det_report.m"
          {
#line 479 "det_report.m"
            check_hlds__det_report__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 479 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 479 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 2) = ((MR_Box) (check_hlds__det_report__V_66_66));
#line 479 "det_report.m"
          }
#line 481 "det_report.m"
          {
#line 481 "det_report.m"
            check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__Spec_23, check_hlds__det_report__STATE_VARIABLE_DetInfo_63_63, check_hlds__det_report__STATE_VARIABLE_DetInfo_25);
#line 481 "det_report.m"
            return;
          }
#line 462 "det_report.m"
        }
#line 459 "det_report.m"
  }
#line 76 "det_report.m"
}

#line 69 "det_report.m"
void MR_CALL 
check_hlds__det_report__global_checking_pass_5_p_0(
#line 69 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 69 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2,
#line 69 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_ModuleInfo_3,
#line 69 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_4,
#line 69 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_5)
#line 69 "det_report.m"
{
#line 175 "det_report.m"
  while (MR_TRUE)
#line 175 "det_report.m"
    {
#line 175 "det_report.m"
      /* tailcall optimized into a loop */
#line 175 "det_report.m"
      {
#line 175 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 175 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "det_report.m"
          {
#line 175 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_Specs_5 = check_hlds__det_report__STATE_VARIABLE_Specs_0_4;
#line 175 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_3 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2;
#line 175 "det_report.m"
          }
#line 175 "det_report.m"
        else
#line 176 "det_report.m"
          {
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__Proc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__Procs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Proc_12, (MR_Integer) 0)));
#line 176 "det_report.m"
            MR_Integer check_hlds__det_report__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Proc_12, (MR_Integer) 1)));
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__PredInfo_18;
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__ProcInfo_19;
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24;
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_25_25;
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_26_26;
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_27_27;
#line 176 "det_report.m"
            MR_Word check_hlds__det_report__MaybeDetism_37;
#line 382 "det_report.m"
            MR_Word check_hlds__det_report__DeclaredDetism_38;
#line 382 "det_report.m"
            MR_String check_hlds__det_report__V_42_42;
#line 382 "det_report.m"
            MR_Integer check_hlds__det_report__V_43_43;

#line 178 "det_report.m"
            {
#line 178 "det_report.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__det_report__PredId_16, check_hlds__det_report__ProcId_17, &check_hlds__det_report__PredInfo_18, &check_hlds__det_report__ProcInfo_19);
            }
#line 180 "det_report.m"
            {
#line 180 "det_report.m"
              check_hlds__det_report__check_determinism_8_p_0(check_hlds__det_report__PredId_16, check_hlds__det_report__ProcId_17, check_hlds__det_report__PredInfo_18, check_hlds__det_report__ProcInfo_19, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24, check_hlds__det_report__STATE_VARIABLE_Specs_0_4, &check_hlds__det_report__STATE_VARIABLE_Specs_25_25);
            }
#line 380 "det_report.m"
            {
#line 380 "det_report.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_report__ProcInfo_19, &check_hlds__det_report__MaybeDetism_37);
            }
#line 382 "det_report.m"
            {
#line 382 "det_report.m"
              check_hlds__det_report__V_42_42 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_report__PredInfo_18);
            }
#line 382 "det_report.m"
            check_hlds__det_report__succeeded = (strcmp(check_hlds__det_report__V_42_42, (MR_String) "main") == 0);
#line 382 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 382 "det_report.m"
              {
#line 383 "det_report.m"
                {
#line 383 "det_report.m"
                  check_hlds__det_report__V_43_43 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__det_report__PredInfo_18);
                }
#line 383 "det_report.m"
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_43_43 == (MR_Integer) 2);
#line 382 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 382 "det_report.m"
                  {
#line 384 "det_report.m"
                    {
#line 384 "det_report.m"
                      check_hlds__det_report__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__det_report__PredInfo_18);
                    }
#line 382 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 382 "det_report.m"
                      {
#line 385 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__MaybeDetism_37)) == (MR_mktag((MR_Integer) 1)));
#line 385 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 385 "det_report.m"
                          {
#line 385 "det_report.m"
                            check_hlds__det_report__DeclaredDetism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeDetism_37, (MR_Integer) 0)));
#line 388 "det_report.m"
                            if ((check_hlds__det_report__DeclaredDetism_38 == (MR_Integer) 4))
#line 389 "det_report.m"
                              check_hlds__det_report__succeeded = MR_TRUE;
#line 388 "det_report.m"
                            else
#line 388 "det_report.m"
                              if ((check_hlds__det_report__DeclaredDetism_38 == (MR_Integer) 0))
#line 387 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 388 "det_report.m"
                              else
#line 388 "det_report.m"
                                check_hlds__det_report__succeeded = MR_FALSE;
#line 386 "det_report.m"
                            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 385 "det_report.m"
                          }
#line 382 "det_report.m"
                      }
#line 382 "det_report.m"
                  }
#line 382 "det_report.m"
              }
#line 397 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 392 "det_report.m"
              {
#line 392 "det_report.m"
                MR_Word check_hlds__det_report__ProcContext_39;
#line 392 "det_report.m"
                MR_Word check_hlds__det_report__Spec_41;
#line 392 "det_report.m"
                MR_Word check_hlds__det_report__V_49_49;
#line 392 "det_report.m"
                MR_Word check_hlds__det_report__V_50_50;

#line 392 "det_report.m"
                {
#line 392 "det_report.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_19, &check_hlds__det_report__ProcContext_39);
                }
#line 395 "det_report.m"
                {
#line 395 "det_report.m"
                  check_hlds__det_report__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_50_50, 0) = ((MR_Box) (check_hlds__det_report__ProcContext_39));
#line 395 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[33])));
#line 395 "det_report.m"
                }
#line 394 "det_report.m"
                {
#line 394 "det_report.m"
                  check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (check_hlds__det_report__V_50_50));
#line 394 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "det_report.m"
                }
#line 394 "det_report.m"
                {
#line 394 "det_report.m"
                  check_hlds__det_report__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 394 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 394 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 2) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 394 "det_report.m"
                }
#line 396 "det_report.m"
                {
#line 396 "det_report.m"
                  check_hlds__det_report__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__det_report__Spec_41));
#line 396 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_25_25));
#line 396 "det_report.m"
                }
#line 392 "det_report.m"
              }
#line 397 "det_report.m"
            else
#line 396 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_26_26 = check_hlds__det_report__STATE_VARIABLE_Specs_25_25;
#line 182 "det_report.m"
            {
#line 182 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(check_hlds__det_report__PredId_16, check_hlds__det_report__PredInfo_18, check_hlds__det_report__ProcInfo_19, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24, check_hlds__det_report__STATE_VARIABLE_Specs_26_26, &check_hlds__det_report__STATE_VARIABLE_Specs_27_27);
            }
#line 184 "det_report.m"
            /* direct tailcall eliminated */
#line 184 "det_report.m"
            {
#line 184 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Procs_13;
#line 184 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24;
#line 184 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__det_report__STATE_VARIABLE_Specs_27_27;

#line 184 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_0_4 = check_hlds__det_report__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 184 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 184 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 184 "det_report.m"
            }
#line 184 "det_report.m"
            continue;
#line 176 "det_report.m"
          }
#line 175 "det_report.m"
      }
#line 175 "det_report.m"
      break;
#line 175 "det_report.m"
    }
#line 69 "det_report.m"
}

void mercury__check_hlds__det_report__init(void)
{
}

void mercury__check_hlds__det_report__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_cc_unify_context_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_det_comparison_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_options_to_restore_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_context_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0);
}

void mercury__check_hlds__det_report__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.det_report. */
