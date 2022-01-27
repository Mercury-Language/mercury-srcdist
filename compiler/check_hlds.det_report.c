/*
** Automatically generated from `det_report.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
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
#include "mdbcomp.sym_name.mih"
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



#line 398 "det_report.m"
struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s {
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12;
#line 403 "det_report.m"
  MR_bool check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 412 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_63_63;
#line 412 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18;
#line 422 "det_report.m"
  jmp_buf check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 422 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20;
#line 421 "det_report.m"
  MR_Box check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20;
#line 398 "det_report.m"
};

#line 347 "det_report.m"
struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s {
#line 347 "det_report.m"
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3;
#line 347 "det_report.m"
  MR_Word * check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4;
#line 347 "det_report.m"
  MR_Cont check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont;
#line 347 "det_report.m"
  void * check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr;
#line 349 "det_report.m"
  MR_bool check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded;
#line 349 "det_report.m"
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5;
#line 347 "det_report.m"
};

#line 292 "det_report.m"
struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s {
#line 292 "det_report.m"
  MR_Box * check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1;
#line 292 "det_report.m"
  MR_Cont check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont;
#line 292 "det_report.m"
  void * check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr;
#line 292 "det_report.m"
  MR_Word check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4;
#line 292 "det_report.m"
};


#line 197 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 203 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1];

#line 206 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0;

#line 209 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1;

#line 212 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1];

#line 215 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1];

#line 218 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[2];

#line 221 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2];

#line 224 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2];

#line 227 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1];

#line 230 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0;

#line 233 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1;

#line 236 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1];

#line 239 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1];

#line 242 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0[2];

#line 245 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0[2];

#line 248 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0[2];

#line 251 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2];

#line 254 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0;

#line 257 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1];

#line 260 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1];

#line 263 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1];

#line 266 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1];

#line 269 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 272 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1];

#line 275 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0;

#line 278 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1;

#line 281 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2];

#line 284 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2;

#line 287 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2];

#line 290 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3;

#line 293 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2];

#line 296 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4;

#line 299 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1];

#line 302 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5;

#line 305 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6;

#line 308 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2];

#line 311 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1];

#line 314 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1];

#line 317 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3];

#line 320 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0[4];

#line 323 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7];

#line 326 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7];

#line 329 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 332 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 335 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2];

#line 338 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0;

#line 341 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1;

#line 344 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1];

#line 347 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1];

#line 350 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0[2];

#line 353 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2];

#line 356 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2];

#line 359 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0;

#line 362 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3];

#line 365 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0;

#line 368 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1];

#line 371 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1];

#line 374 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1];

#line 377 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1];

#line 380 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 383 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 386 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2];

#line 389 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0;

#line 392 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1];

#line 395 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1];

#line 398 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1];

#line 401 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1];

#line 404 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
#line 407 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 409 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 412 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
#line 415 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 417 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 419 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 422 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
#line 425 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 427 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 430 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
#line 433 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 435 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 437 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 440 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
#line 443 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 445 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 448 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
#line 451 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 453 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 455 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 458 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
#line 461 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 463 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 466 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
#line 469 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 471 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 473 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 476 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
#line 479 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 481 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 484 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
#line 487 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 489 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 491 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 494 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
#line 497 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 499 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 502 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
#line 505 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 507 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 509 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 512 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
#line 515 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 517 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 520 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
#line 523 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 525 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 527 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 530 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
#line 533 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 535 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 538 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
#line 541 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 543 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 545 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 1498 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_First_0_26,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__Last_10,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__UnifyContext_12,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_13,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__LHS_14,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__RHS_15,
#line 1498 "det_report.m"
  MR_Word * check_hlds__det_report__AllPieces_16);

#line 422 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(
#line 422 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 421 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3(
#line 421 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 422 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(
#line 422 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 422 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(
#line 422 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 398 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_10,
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_11,
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_12,
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_27,
#line 398 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_28);

#line 1406 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
#line 1406 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1406 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1406 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3);

#line 1406 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
#line 1406 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1406 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2);

#line 1144 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
#line 1144 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1144 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1144 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3);

#line 1144 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
#line 1144 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1144 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2);

#line 1662 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
#line 1662 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1662 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_7,
#line 1662 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_8);

#line 1564 "det_report.m"
static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
#line 1564 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_5,
#line 1564 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_6,
#line 1564 "det_report.m"
  MR_Word check_hlds__det_report__FailingContext_7);

#line 1438 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
#line 1438 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 1438 "det_report.m"
  MR_Word check_hlds__det_report__CallUnifyContext_9,
#line 1438 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_10,
#line 1438 "det_report.m"
  MR_Word check_hlds__det_report__PredId_11,
#line 1438 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_12,
#line 1438 "det_report.m"
  MR_Word * check_hlds__det_report__InitMsgs_13,
#line 1438 "det_report.m"
  MR_Word * check_hlds__det_report__StartingPieces_14);

#line 1430 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
#line 1430 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_4,
#line 1430 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2);

#line 1419 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
#line 1419 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1419 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);

#line 1409 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
#line 1409 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_1,
#line 1409 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1409 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__3_3);

#line 1359 "det_report.m"
static void MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_2_p_0(
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1359 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__2_2);

#line 1349 "det_report.m"
static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
#line 1349 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1349 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2,
#line 1349 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3);

#line 1336 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_uncovered_consids_4_p_0(
#line 1336 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1336 "det_report.m"
  MR_Word check_hlds__det_report__CoveredConsIds_2,
#line 1336 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3,
#line 1336 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4);

#line 1312 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0_1(
#line 1312 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1312 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1312 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2);

#line 1295 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0(
#line 1295 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_7,
#line 1295 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_8,
#line 1295 "det_report.m"
  MR_Word check_hlds__det_report__Var_9,
#line 1295 "det_report.m"
  MR_Word check_hlds__det_report__Cases_10,
#line 1295 "det_report.m"
  MR_String * check_hlds__det_report__VarStr_11,
#line 1295 "det_report.m"
  MR_Word * check_hlds__det_report__MaybeMissingPieces_12);

#line 1284 "det_report.m"
static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
#line 1284 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1284 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1284 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0_3,
#line 1284 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_InstMap_4);

#line 1271 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_switch_6_p_0(
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 1271 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6);

#line 1263 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_4_p_0(
#line 1263 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1263 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1263 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1263 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4);

#line 1254 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_4_p_0(
#line 1254 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1254 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1254 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1254 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4);

#line 1227 "det_report.m"
static void MR_CALL 
check_hlds__det_report__generate_warning_for_switch_var_if_missing_5_p_0(
#line 1227 "det_report.m"
  MR_Word check_hlds__det_report__RequiredVar_6,
#line 1227 "det_report.m"
  MR_Word check_hlds__det_report__Goal_7,
#line 1227 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_8,
#line 1227 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
#line 1227 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19);

#line 1201 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_for_cases_8_p_0(
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 1201 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8);

#line 1148 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__RequiredDetism_7,
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__CheckKind_9,
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25,
#line 1148 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_26);

#line 1041 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_6_p_0(
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__Reason_7,
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__SubGoal_8,
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_9,
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49,
#line 1041 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_50);

#line 976 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_4_p_0(
#line 976 "det_report.m"
  MR_Word check_hlds__det_report__Goal_5,
#line 976 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_6,
#line 976 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75,
#line 976 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_76);

#line 956 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_2,
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 956 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
#line 956 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__7_7);

#line 951 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
#line 951 "det_report.m"
  MR_Word check_hlds__det_report__ConsId_3,
#line 951 "det_report.m"
  MR_Word * check_hlds__det_report__Match_4);

#line 913 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
#line 913 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 913 "det_report.m"
  MR_Word check_hlds__det_report__SwitchVarSynonyms_2,
#line 913 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 913 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 913 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__5_5,
#line 913 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__6_6);

#line 859 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
#line 859 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 859 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 859 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2);

#line 852 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
#line 852 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 852 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2,
#line 852 "det_report.m"
  MR_Word check_hlds__det_report__MainConsId_3,
#line 852 "det_report.m"
  MR_Word check_hlds__det_report__OtherConsIds_4,
#line 852 "det_report.m"
  MR_Word * check_hlds__det_report__MainMatch_5,
#line 852 "det_report.m"
  MR_Word * check_hlds__det_report__OtherMatches_6);

#line 818 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_4,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 818 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8,
#line 818 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__9_9);

#line 777 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
#line 777 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7,
#line 777 "det_report.m"
  MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8,
#line 777 "det_report.m"
  MR_Integer * check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9,
#line 777 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__10_10);

#line 710 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
#line 710 "det_report.m"
  MR_Word check_hlds__det_report__Desired_6,
#line 710 "det_report.m"
  MR_Word check_hlds__det_report__Actual_7,
#line 710 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 710 "det_report.m"
  MR_Word check_hlds__det_report__StartingPieces_9,
#line 710 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_10);

#line 539 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__GoalExpr_10,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__GoalInfo_11,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_12,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__Desired_13,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__Actual_14,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_15,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109,
#line 539 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_110,
#line 539 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_17);

#line 516 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_9,
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__Desired_10,
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_11,
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
#line 516 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19,
#line 516 "det_report.m"
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
  MR_Word check_hlds__det_report__MessagePieces_11,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__DeclaredDetism_12,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__InferredDetism_13,
#line 490 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_14);

#line 349 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
#line 349 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 347 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
#line 347 "det_report.m"
  MR_Word check_hlds__det_report__EvalMethod_3,
#line 347 "det_report.m"
  MR_Word * check_hlds__det_report__Detism_4,
#line 347 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 347 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr);

#line 329 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
#line 329 "det_report.m"
  MR_Word check_hlds__det_report__DetismDecl_3);

#line 309 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_8,
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 309 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_21,
#line 309 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_22);

#line 293 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_3(
#line 293 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 293 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);

#line 292 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_1(
#line 292 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 292 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_2(
#line 292 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 292 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 292 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 292 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr);

#line 176 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0(
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 176 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45,
#line 176 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46,
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_47,
#line 176 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_48);

#line 1660 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
#line 1660 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1660 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1660 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 1660 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_3);

#line 1562 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
#line 1562 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1562 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[122][2];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[7][1];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_6[3][5];


#line 359 "det_report.m"
/* sealed */ struct check_hlds__det_report__vector_common_type_7_0_s {
#line 359 "det_report.m"
  const MR_Word check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
#line 359 "det_report.m"
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

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[122][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not satisfied."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "could be tighter."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_report_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_report_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[2])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[19]))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[18])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Most likely, this procedure should be a predicate, not a function."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "arguments would break referential transparency.)"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(Allowing functions to have more than one result for the same"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "result should be determined only by the values of its arguments."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "function of its arguments; that is, the value of the function\'s"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In Mercury, a function is supposed to be a true mathematical"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 38 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but it is not."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but it does not occur in the sub-goal."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is the subject of a require_complete_switch scope"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Determinism error in lambda expression."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Declared"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "inferred"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "\'."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "higher-order call"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration not allowed for procedure"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The pragma requested is only valid"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for the following"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Negated goal can succeed."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Determinism declaration not satisfied."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Disjunction has multiple clauses with solutions."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "can fail"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "can succeed more than once"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "can succeed"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has unknown determinism problem;"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "desired determinism is"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "while actual determinism is"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the switch on"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but it does not cover"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: required determinism is"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but actual determinism is"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: variable "))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Inside the case"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of the switch on"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Some weird unification(or explicit call to a type-specific unify predicate\?)"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Call to"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Fail goal can fail."))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Switch on"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is incomplete."))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Unification of"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid determinism for"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the primary mode of a function cannot be"))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[35])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_report_scalar_common_2[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of"))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "main"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[23])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[70])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[73])))
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
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
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



#line 1980 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1988 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1997 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 2002 "check_hlds.det_report.c"
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

#line 2017 "check_hlds.det_report.c"
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

#line 2032 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1
};

#line 2037 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

#line 2042 "check_hlds.det_report.c"
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

#line 2056 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

#line 2062 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2068 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_cc_unify_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____cc_unify_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____cc_unify_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "cc_unify_context",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0
};

#line 2085 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0
};

#line 2090 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0 = {
  (MR_String) "check_require_detism",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0,
  NULL,
  NULL,
  NULL
};

#line 2105 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1 = {
  (MR_String) "check_require_switch_arms_detism",
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

#line 2120 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1
};

#line 2125 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0
};

#line 2130 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1
  }
};

#line 2144 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1
};

#line 2150 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2156 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_detism_check_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____detism_check_kind_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____detism_check_kind_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "detism_check_kind",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0
};

#line 2173 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0
};

#line 2179 "check_hlds.det_report.c"
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

#line 2194 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

#line 2199 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0
  }
};

#line 2208 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

#line 2213 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1] = {
  (MR_Integer) 0
};

#line 2218 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____failing_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____failing_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "failing_context",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0
};

#line 2235 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2243 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2248 "check_hlds.det_report.c"
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

#line 2263 "check_hlds.det_report.c"
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

#line 2278 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2284 "check_hlds.det_report.c"
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

#line 2299 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 2305 "check_hlds.det_report.c"
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

#line 2320 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2326 "check_hlds.det_report.c"
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

#line 2341 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0
};

#line 2346 "check_hlds.det_report.c"
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

#line 2361 "check_hlds.det_report.c"
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

#line 2376 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6
};

#line 2382 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0
};

#line 2387 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

#line 2392 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5
};

#line 2399 "check_hlds.det_report.c"
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

#line 2423 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

#line 2434 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5
};

#line 2445 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____failing_goal_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____failing_goal_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "failing_goal",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0
};

#line 2462 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2471 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0
  }
};

#line 2479 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_options_to_restore_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__det_report____Unify____options_to_restore_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____options_to_restore_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "options_to_restore",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2496 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2502 "check_hlds.det_report.c"
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

#line 2517 "check_hlds.det_report.c"
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

#line 2532 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1
};

#line 2537 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

#line 2542 "check_hlds.det_report.c"
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

#line 2556 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

#line 2562 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2568 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____seen_call_id_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____seen_call_id_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "seen_call_id",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0
};

#line 2585 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0
  }
};

#line 2593 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0
};

#line 2600 "check_hlds.det_report.c"
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

#line 2615 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

#line 2620 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0
  }
};

#line 2629 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

#line 2634 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1] = {
  (MR_Integer) 0
};

#line 2639 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____switch_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____switch_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "switch_context",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0
};

#line 2656 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2664 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2672 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2678 "check_hlds.det_report.c"
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

#line 2693 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

#line 2698 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0
  }
};

#line 2707 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

#line 2712 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1] = {
  (MR_Integer) 0
};

#line 2717 "check_hlds.det_report.c"
const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____switch_match_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____switch_match_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "switch_match",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0
};

#line 2734 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
#line 2737 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2739 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2741 "check_hlds.det_report.c"
{
#line 2743 "check_hlds.det_report.c"
  {
#line 2745 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2748 "check_hlds.det_report.c"
    {
#line 2750 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____cc_unify_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2753 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2755 "check_hlds.det_report.c"
  }
#line 2757 "check_hlds.det_report.c"
}

#line 2760 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
#line 2763 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2765 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2767 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2769 "check_hlds.det_report.c"
{
#line 2771 "check_hlds.det_report.c"
  {
#line 2773 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2776 "check_hlds.det_report.c"
    {
#line 2778 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____cc_unify_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2781 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2783 "check_hlds.det_report.c"
  }
#line 2785 "check_hlds.det_report.c"
}

#line 2788 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
#line 2791 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2793 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2795 "check_hlds.det_report.c"
{
#line 2797 "check_hlds.det_report.c"
  {
#line 2799 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2802 "check_hlds.det_report.c"
    {
#line 2804 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____detism_check_kind_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2807 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2809 "check_hlds.det_report.c"
  }
#line 2811 "check_hlds.det_report.c"
}

#line 2814 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
#line 2817 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2819 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2821 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2823 "check_hlds.det_report.c"
{
#line 2825 "check_hlds.det_report.c"
  {
#line 2827 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2830 "check_hlds.det_report.c"
    {
#line 2832 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____detism_check_kind_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2835 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2837 "check_hlds.det_report.c"
  }
#line 2839 "check_hlds.det_report.c"
}

#line 2842 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
#line 2845 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2847 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2849 "check_hlds.det_report.c"
{
#line 2851 "check_hlds.det_report.c"
  {
#line 2853 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2856 "check_hlds.det_report.c"
    {
#line 2858 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2861 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2863 "check_hlds.det_report.c"
  }
#line 2865 "check_hlds.det_report.c"
}

#line 2868 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
#line 2871 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2873 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2875 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2877 "check_hlds.det_report.c"
{
#line 2879 "check_hlds.det_report.c"
  {
#line 2881 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2884 "check_hlds.det_report.c"
    {
#line 2886 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____failing_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2889 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2891 "check_hlds.det_report.c"
  }
#line 2893 "check_hlds.det_report.c"
}

#line 2896 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
#line 2899 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2901 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2903 "check_hlds.det_report.c"
{
#line 2905 "check_hlds.det_report.c"
  {
#line 2907 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2910 "check_hlds.det_report.c"
    {
#line 2912 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_goal_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2915 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2917 "check_hlds.det_report.c"
  }
#line 2919 "check_hlds.det_report.c"
}

#line 2922 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
#line 2925 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2927 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2929 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2931 "check_hlds.det_report.c"
{
#line 2933 "check_hlds.det_report.c"
  {
#line 2935 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2938 "check_hlds.det_report.c"
    {
#line 2940 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____failing_goal_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2943 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2945 "check_hlds.det_report.c"
  }
#line 2947 "check_hlds.det_report.c"
}

#line 2950 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
#line 2953 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2955 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2957 "check_hlds.det_report.c"
{
#line 2959 "check_hlds.det_report.c"
  {
#line 2961 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2964 "check_hlds.det_report.c"
    {
#line 2966 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____options_to_restore_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2969 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2971 "check_hlds.det_report.c"
  }
#line 2973 "check_hlds.det_report.c"
}

#line 2976 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
#line 2979 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2981 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2983 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2985 "check_hlds.det_report.c"
{
#line 2987 "check_hlds.det_report.c"
  {
#line 2989 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2992 "check_hlds.det_report.c"
    {
#line 2994 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____options_to_restore_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2997 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2999 "check_hlds.det_report.c"
  }
#line 3001 "check_hlds.det_report.c"
}

#line 3004 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
#line 3007 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 3009 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 3011 "check_hlds.det_report.c"
{
#line 3013 "check_hlds.det_report.c"
  {
#line 3015 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 3018 "check_hlds.det_report.c"
    {
#line 3020 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____seen_call_id_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 3023 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 3025 "check_hlds.det_report.c"
  }
#line 3027 "check_hlds.det_report.c"
}

#line 3030 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
#line 3033 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 3035 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 3037 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 3039 "check_hlds.det_report.c"
{
#line 3041 "check_hlds.det_report.c"
  {
#line 3043 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 3046 "check_hlds.det_report.c"
    {
#line 3048 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____seen_call_id_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3051 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3053 "check_hlds.det_report.c"
  }
#line 3055 "check_hlds.det_report.c"
}

#line 3058 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
#line 3061 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 3063 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 3065 "check_hlds.det_report.c"
{
#line 3067 "check_hlds.det_report.c"
  {
#line 3069 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 3072 "check_hlds.det_report.c"
    {
#line 3074 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____switch_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 3077 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 3079 "check_hlds.det_report.c"
  }
#line 3081 "check_hlds.det_report.c"
}

#line 3084 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
#line 3087 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 3089 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 3091 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 3093 "check_hlds.det_report.c"
{
#line 3095 "check_hlds.det_report.c"
  {
#line 3097 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 3100 "check_hlds.det_report.c"
    {
#line 3102 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____switch_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3105 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3107 "check_hlds.det_report.c"
  }
#line 3109 "check_hlds.det_report.c"
}

#line 3112 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
#line 3115 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 3117 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 3119 "check_hlds.det_report.c"
{
#line 3121 "check_hlds.det_report.c"
  {
#line 3123 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 3126 "check_hlds.det_report.c"
    {
#line 3128 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____switch_match_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 3131 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 3133 "check_hlds.det_report.c"
  }
#line 3135 "check_hlds.det_report.c"
}

#line 3138 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
#line 3141 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 3143 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 3145 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 3147 "check_hlds.det_report.c"
{
#line 3149 "check_hlds.det_report.c"
  {
#line 3151 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 3154 "check_hlds.det_report.c"
    {
#line 3156 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____switch_match_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3159 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3161 "check_hlds.det_report.c"
  }
#line 3163 "check_hlds.det_report.c"
}

#line 1498 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_First_0_26,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__Last_10,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__UnifyContext_12,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_13,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__LHS_14,
#line 1498 "det_report.m"
  MR_Word check_hlds__det_report__RHS_15,
#line 1498 "det_report.m"
  MR_Word * check_hlds__det_report__AllPieces_16)
#line 1498 "det_report.m"
{
#line 1503 "det_report.m"
  {
#line 1503 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1503 "det_report.m"
    MR_Word check_hlds__det_report__UnifyContextPieces_17;
#line 1503 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_18;
#line 1503 "det_report.m"
    MR_Word check_hlds__det_report__VarSet_19;
#line 1503 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_20;
#line 1503 "det_report.m"
    MR_String check_hlds__det_report__StartWords_21;
#line 1503 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_25;
#line 1503 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_First_27_27;
#line 1528 "det_report.m"
    MR_String check_hlds__det_report__V_22_22;

#line 1504 "det_report.m"
    {
#line 1504 "det_report.m"
      hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(check_hlds__det_report__STATE_VARIABLE_First_0_26, &check_hlds__det_report__STATE_VARIABLE_First_27_27, check_hlds__det_report__UnifyContext_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__UnifyContextPieces_17);
    }
#line 1506 "det_report.m"
    {
#line 1506 "det_report.m"
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_13, &check_hlds__det_report__ProcInfo_18);
    }
#line 1507 "det_report.m"
    {
#line 1507 "det_report.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_18, &check_hlds__det_report__VarSet_19);
    }
#line 1508 "det_report.m"
    {
#line 1508 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_13, &check_hlds__det_report__ModuleInfo_20);
    }
#line 1518 "det_report.m"
    if ((check_hlds__det_report__Last_10 == (MR_Integer) 0))
#line 1518 "det_report.m"
      if ((check_hlds__det_report__STATE_VARIABLE_First_27_27 == (MR_Integer) 0))
#line 1513 "det_report.m"
        check_hlds__det_report__StartWords_21 = (MR_String) "Unification";
#line 1518 "det_report.m"
      else
#line 1522 "det_report.m"
        check_hlds__det_report__StartWords_21 = (MR_String) "unification";
#line 1518 "det_report.m"
    else
#line 1518 "det_report.m"
    if ((check_hlds__det_report__STATE_VARIABLE_First_27_27 == (MR_Integer) 0))
#line 1516 "det_report.m"
      check_hlds__det_report__StartWords_21 = (MR_String) "In unification";
#line 1518 "det_report.m"
    else
#line 1525 "det_report.m"
      check_hlds__det_report__StartWords_21 = (MR_String) "in unification";
#line 1528 "det_report.m"
    {
#line 1528 "det_report.m"
      check_hlds__det_report__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_19, check_hlds__det_report__LHS_14, &check_hlds__det_report__V_22_22);
    }
#line 1542 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1535 "det_report.m"
      {
#line 1530 "det_report.m"
        MR_Word check_hlds__det_report__RV_23;
#line 1531 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_68_68;
#line 1531 "det_report.m"
        MR_String check_hlds__det_report__V_24_24;

#line 1530 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__RHS_15)) == (MR_mktag((MR_Integer) 0)));
#line 1530 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1530 "det_report.m"
          {
#line 1530 "det_report.m"
            check_hlds__det_report__RV_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__RHS_15, (MR_Integer) 0)));
#line 3270 "check_hlds.det_report.c"
            check_hlds__det_report__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1531 "det_report.m"
            {
#line 1531 "det_report.m"
              check_hlds__det_report__succeeded = mercury__varset__search_name_3_p_0(check_hlds__det_report__TypeCtorInfo_68_68, check_hlds__det_report__VarSet_19, check_hlds__det_report__RV_23, &check_hlds__det_report__V_24_24);
            }
#line 1531 "det_report.m"
            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1530 "det_report.m"
          }
#line 1535 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1533 "det_report.m"
          {
#line 1533 "det_report.m"
            MR_Word check_hlds__det_report__V_29_29;
#line 1533 "det_report.m"
            MR_Word check_hlds__det_report__V_30_30;
#line 1533 "det_report.m"
            MR_Word check_hlds__det_report__V_33_33;
#line 1533 "det_report.m"
            MR_Word check_hlds__det_report__V_34_34;
#line 1533 "det_report.m"
            MR_String check_hlds__det_report__V_35_35;
#line 1533 "det_report.m"
            MR_String check_hlds__det_report__V_36_36;

#line 1533 "det_report.m"
            {
#line 1533 "det_report.m"
              check_hlds__det_report__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_29_29, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1533 "det_report.m"
            }
#line 1534 "det_report.m"
            {
#line 1534 "det_report.m"
              check_hlds__det_report__V_36_36 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_19, (MR_Integer) 0, check_hlds__det_report__LHS_14);
            }
#line 1534 "det_report.m"
            {
#line 1534 "det_report.m"
              check_hlds__det_report__V_35_35 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_36_36);
            }
#line 1534 "det_report.m"
            {
#line 1534 "det_report.m"
              check_hlds__det_report__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1534 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_34_34, 1) = ((MR_Box) (check_hlds__det_report__V_35_35));
#line 1534 "det_report.m"
            }
#line 1534 "det_report.m"
            {
#line 1534 "det_report.m"
              check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (check_hlds__det_report__V_34_34));
#line 1534 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1534 "det_report.m"
            }
#line 1533 "det_report.m"
            {
#line 1533 "det_report.m"
              check_hlds__det_report__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[115])));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 1) = ((MR_Box) (check_hlds__det_report__V_33_33));
#line 1533 "det_report.m"
            }
#line 1533 "det_report.m"
            {
#line 1533 "det_report.m"
              check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (check_hlds__det_report__V_29_29));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_30_30));
#line 1533 "det_report.m"
            }
#line 1533 "det_report.m"
          }
#line 1535 "det_report.m"
        else
#line 1536 "det_report.m"
          {
#line 1536 "det_report.m"
            MR_Word check_hlds__det_report__V_39_39;
#line 1536 "det_report.m"
            MR_Word check_hlds__det_report__V_40_40;
#line 1536 "det_report.m"
            MR_Word check_hlds__det_report__V_43_43;
#line 1536 "det_report.m"
            MR_Word check_hlds__det_report__V_44_44;
#line 1536 "det_report.m"
            MR_String check_hlds__det_report__V_45_45;
#line 1536 "det_report.m"
            MR_String check_hlds__det_report__V_46_46;
#line 1536 "det_report.m"
            MR_Word check_hlds__det_report__V_48_48;
#line 1536 "det_report.m"
            MR_Word check_hlds__det_report__V_51_51;
#line 1536 "det_report.m"
            MR_Word check_hlds__det_report__V_52_52;
#line 1536 "det_report.m"
            MR_String check_hlds__det_report__V_53_53;
#line 1536 "det_report.m"
            MR_String check_hlds__det_report__V_54_54;

#line 1536 "det_report.m"
            {
#line 1536 "det_report.m"
              check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1536 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1536 "det_report.m"
            }
#line 1537 "det_report.m"
            {
#line 1537 "det_report.m"
              check_hlds__det_report__V_46_46 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_19, (MR_Integer) 0, check_hlds__det_report__LHS_14);
            }
#line 1537 "det_report.m"
            {
#line 1537 "det_report.m"
              check_hlds__det_report__V_45_45 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_46_46);
            }
#line 1537 "det_report.m"
            {
#line 1537 "det_report.m"
              check_hlds__det_report__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1537 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_44_44, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 1537 "det_report.m"
            }
#line 1540 "det_report.m"
            {
#line 1540 "det_report.m"
              check_hlds__det_report__V_54_54 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(check_hlds__det_report__RHS_15, check_hlds__det_report__ModuleInfo_20, check_hlds__det_report__VarSet_19, (MR_Integer) 0);
            }
#line 1539 "det_report.m"
            {
#line 1539 "det_report.m"
              check_hlds__det_report__V_53_53 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_54_54);
            }
#line 1539 "det_report.m"
            {
#line 1539 "det_report.m"
              check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1539 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_53_53));
#line 1539 "det_report.m"
            }
#line 1540 "det_report.m"
            {
#line 1540 "det_report.m"
              check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 1540 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1540 "det_report.m"
            }
#line 1538 "det_report.m"
            {
#line 1538 "det_report.m"
              check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[85])));
#line 1538 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (check_hlds__det_report__V_51_51));
#line 1538 "det_report.m"
            }
#line 1537 "det_report.m"
            {
#line 1537 "det_report.m"
              check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (check_hlds__det_report__V_44_44));
#line 1537 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1537 "det_report.m"
            }
#line 1536 "det_report.m"
            {
#line 1536 "det_report.m"
              check_hlds__det_report__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[121])));
#line 1536 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_40_40, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 1536 "det_report.m"
            }
#line 1536 "det_report.m"
            {
#line 1536 "det_report.m"
              check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 1536 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_40_40));
#line 1536 "det_report.m"
            }
#line 1536 "det_report.m"
          }
#line 1535 "det_report.m"
      }
#line 1542 "det_report.m"
    else
#line 1543 "det_report.m"
      {
#line 1543 "det_report.m"
        MR_Word check_hlds__det_report__V_57_57;
#line 1543 "det_report.m"
        MR_Word check_hlds__det_report__V_58_58;
#line 1543 "det_report.m"
        MR_Word check_hlds__det_report__V_61_61;
#line 1543 "det_report.m"
        MR_Word check_hlds__det_report__V_62_62;
#line 1543 "det_report.m"
        MR_String check_hlds__det_report__V_63_63;
#line 1543 "det_report.m"
        MR_String check_hlds__det_report__V_64_64;

#line 1543 "det_report.m"
        {
#line 1543 "det_report.m"
          check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1543 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1543 "det_report.m"
        }
#line 1545 "det_report.m"
        {
#line 1545 "det_report.m"
          check_hlds__det_report__V_64_64 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(check_hlds__det_report__RHS_15, check_hlds__det_report__ModuleInfo_20, check_hlds__det_report__VarSet_19, (MR_Integer) 0);
        }
#line 1544 "det_report.m"
        {
#line 1544 "det_report.m"
          check_hlds__det_report__V_63_63 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_64_64);
        }
#line 1544 "det_report.m"
        {
#line 1544 "det_report.m"
          check_hlds__det_report__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1544 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1544 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_62_62, 1) = ((MR_Box) (check_hlds__det_report__V_63_63));
#line 1544 "det_report.m"
        }
#line 1545 "det_report.m"
        {
#line 1545 "det_report.m"
          check_hlds__det_report__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1545 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 0) = ((MR_Box) (check_hlds__det_report__V_62_62));
#line 1545 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1545 "det_report.m"
        }
#line 1543 "det_report.m"
        {
#line 1543 "det_report.m"
          check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[115])));
#line 1543 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 1) = ((MR_Box) (check_hlds__det_report__V_61_61));
#line 1543 "det_report.m"
        }
#line 1543 "det_report.m"
        {
#line 1543 "det_report.m"
          check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 1543 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 1543 "det_report.m"
        }
#line 1543 "det_report.m"
      }
#line 1547 "det_report.m"
    {
#line 1547 "det_report.m"
      *check_hlds__det_report__AllPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__UnifyContextPieces_17, check_hlds__det_report__Pieces_25);
    }
#line 1503 "det_report.m"
  }
#line 1498 "det_report.m"
}

#line 422 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(
#line 422 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 422 "det_report.m"
{
#line 422 "det_report.m"
  {
#line 422 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 422 "det_report.m"
    MR_builtin_longjmp((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 422 "det_report.m"
  }
#line 422 "det_report.m"
}

#line 421 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3(
#line 421 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 421 "det_report.m"
{
#line 421 "det_report.m"
  {
#line 421 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 421 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20 = ((MR_Word) (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20);
#line 421 "det_report.m"
    {
#line 421 "det_report.m"
      check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(check_hlds__det_report__env_ptr);
#line 421 "det_report.m"
      return;
    }
#line 421 "det_report.m"
  }
#line 421 "det_report.m"
}

#line 422 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(
#line 422 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 422 "det_report.m"
{
#line 422 "det_report.m"
  {
#line 422 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 423 "det_report.m"
    {
#line 423 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12, (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20);
    }
#line 422 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 422 "det_report.m"
    if ((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 422 "det_report.m"
      {
#line 422 "det_report.m"
        check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(check_hlds__det_report__env_ptr);
#line 422 "det_report.m"
        return;
      }
#line 422 "det_report.m"
  }
#line 422 "det_report.m"
}

#line 422 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(
#line 422 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 422 "det_report.m"
{
#line 422 "det_report.m"
  {
#line 422 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 422 "det_report.m"
    if (MR_builtin_setjmp((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 422 "det_report.m"
      {
#line 421 "det_report.m"
        {
#line 421 "det_report.m"
          mercury__list__member_2_p_1((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_63_63, &(check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20, (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18, check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3, check_hlds__det_report__env_ptr);
        }
#line 422 "det_report.m"
        (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 422 "det_report.m"
      }
#line 422 "det_report.m"
    else
#line 422 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 422 "det_report.m"
  }
#line 422 "det_report.m"
}

#line 398 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_10,
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_11,
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_12,
#line 398 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_27,
#line 398 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_28)
#line 398 "det_report.m"
{
#line 398 "det_report.m"
  {
#line 398 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s check_hlds__det_report__env;

#line 398 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12 = check_hlds__det_report__ModuleInfo_12;
#line 403 "det_report.m"
    {
#line 403 "det_report.m"
      MR_Word check_hlds__det_report__InferredDetism_14;
#line 441 "det_report.m"
      MR_Word check_hlds__det_report__PredArgModes_17;
#line 412 "det_report.m"
      MR_Word check_hlds__det_report__NumSolns_16;
#line 412 "det_report.m"
      MR_Word check_hlds__det_report__V_29_29;
#line 414 "det_report.m"
      MR_Word check_hlds__det_report___CanFail_15;
#line 419 "det_report.m"
      MR_Word check_hlds__det_report___FuncResultMode_19;
#line 419 "det_report.m"
      MR_Box check_hlds__det_report__conv0__FuncResultMode_19;

#line 404 "det_report.m"
      {
#line 404 "det_report.m"
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__InferredDetism_14);
      }
#line 412 "det_report.m"
      {
#line 412 "det_report.m"
        check_hlds__det_report__V_29_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__det_report__PredInfo_10);
      }
#line 412 "det_report.m"
      (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__V_29_29 == (MR_Integer) 1);
#line 412 "det_report.m"
      if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 412 "det_report.m"
        {
#line 414 "det_report.m"
          {
#line 414 "det_report.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__InferredDetism_14, &check_hlds__det_report___CanFail_15, &check_hlds__det_report__NumSolns_16);
          }
#line 415 "det_report.m"
          (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__NumSolns_16 == (MR_Integer) 0);
#line 415 "det_report.m"
          (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 412 "det_report.m"
          if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 412 "det_report.m"
            {
#line 416 "det_report.m"
              (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__NumSolns_16 == (MR_Integer) 1);
#line 416 "det_report.m"
              (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 412 "det_report.m"
              if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 412 "det_report.m"
                {
#line 418 "det_report.m"
                  {
#line 418 "det_report.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__PredArgModes_17);
                  }
#line 3775 "check_hlds.det_report.c"
                  (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 419 "det_report.m"
                  {
#line 419 "det_report.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_63_63, check_hlds__det_report__PredArgModes_17, &(check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18, &check_hlds__det_report__conv0__FuncResultMode_19);
                  }
#line 419 "det_report.m"
                  check_hlds__det_report___FuncResultMode_19 = ((MR_Word) check_hlds__det_report__conv0__FuncResultMode_19);
#line 422 "det_report.m"
                  {
#line 422 "det_report.m"
                    check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(&check_hlds__det_report__env);
                  }
#line 422 "det_report.m"
                  (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 412 "det_report.m"
                }
#line 412 "det_report.m"
            }
#line 412 "det_report.m"
        }
#line 441 "det_report.m"
      if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 427 "det_report.m"
        {
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__TypeCtorInfo_64_64;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__FuncContext_21;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__InstVarSet_22;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__PredModePieces_23;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__MainPieces_24;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__Spec_26;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_35_35;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_36_36;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_39_39;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_41_41;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_44_44;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_45_45;
#line 427 "det_report.m"
          MR_String check_hlds__det_report__V_46_46;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_53_53;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_54_54;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_55_55;
#line 427 "det_report.m"
          MR_Word check_hlds__det_report__V_56_56;

#line 427 "det_report.m"
          {
#line 427 "det_report.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__FuncContext_21);
          }
#line 428 "det_report.m"
          {
#line 428 "det_report.m"
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__InstVarSet_22);
          }
#line 429 "det_report.m"
          {
#line 429 "det_report.m"
            check_hlds__det_report__PredModePieces_23 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12, (MR_Integer) 1, check_hlds__det_report__PredId_8, check_hlds__det_report__InstVarSet_22, check_hlds__det_report__PredArgModes_17);
          }
#line 3851 "check_hlds.det_report.c"
          check_hlds__det_report__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 434 "det_report.m"
          {
#line 434 "det_report.m"
            check_hlds__det_report__V_46_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_report__InferredDetism_14);
          }
#line 434 "det_report.m"
          {
#line 434 "det_report.m"
            check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 434 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 434 "det_report.m"
          }
#line 434 "det_report.m"
          {
#line 434 "det_report.m"
            check_hlds__det_report__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_44_44, 0) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 434 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[66])));
#line 434 "det_report.m"
          }
#line 433 "det_report.m"
          {
#line 433 "det_report.m"
            check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[118])));
#line 433 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_44_44));
#line 433 "det_report.m"
          }
#line 432 "det_report.m"
          {
#line 432 "det_report.m"
            check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 432 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 432 "det_report.m"
          }
#line 432 "det_report.m"
          {
#line 432 "det_report.m"
            check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[50])));
#line 432 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 432 "det_report.m"
          }
#line 432 "det_report.m"
          {
#line 432 "det_report.m"
            check_hlds__det_report__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_64_64, check_hlds__det_report__PredModePieces_23, check_hlds__det_report__V_36_36);
          }
#line 432 "det_report.m"
          {
#line 432 "det_report.m"
            check_hlds__det_report__MainPieces_24 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_64_64, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[117]), check_hlds__det_report__V_35_35);
          }
#line 438 "det_report.m"
          {
#line 438 "det_report.m"
            check_hlds__det_report__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 438 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (check_hlds__det_report__MainPieces_24));
#line 438 "det_report.m"
          }
#line 438 "det_report.m"
          {
#line 438 "det_report.m"
            check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
#line 438 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[120])));
#line 438 "det_report.m"
          }
#line 437 "det_report.m"
          {
#line 437 "det_report.m"
            check_hlds__det_report__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_54_54, 0) = ((MR_Box) (check_hlds__det_report__FuncContext_21));
#line 437 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_54_54, 1) = ((MR_Box) (check_hlds__det_report__V_55_55));
#line 437 "det_report.m"
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
#line 436 "det_report.m"
          {
#line 436 "det_report.m"
            check_hlds__det_report__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 436 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 436 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 2) = ((MR_Box) (check_hlds__det_report__V_53_53));
#line 436 "det_report.m"
          }
#line 440 "det_report.m"
          {
#line 440 "det_report.m"
            MR_Word base;
#line 440 "det_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_Specs_28 = base;
#line 440 "det_report.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__Spec_26));
#line 440 "det_report.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_27));
#line 440 "det_report.m"
          }
#line 427 "det_report.m"
        }
#line 441 "det_report.m"
      else
#line 441 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_Specs_28 = check_hlds__det_report__STATE_VARIABLE_Specs_0_27;
#line 403 "det_report.m"
    }
#line 398 "det_report.m"
  }
#line 398 "det_report.m"
}

#line 1406 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
#line 1406 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1406 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1406 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1406 "det_report.m"
{
#line 1406 "det_report.m"
  {
#line 1406 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1406 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 1406 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 1406 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
#line 1406 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 4017 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1406 "det_report.m"
    else
#line 1406 "det_report.m"
      {
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8;

#line 1406 "det_report.m"
        {
#line 1406 "det_report.m"
          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_8_8, check_hlds__det_report__V_4_4, check_hlds__det_report__V_6_6);
        }
#line 4039 "check_hlds.det_report.c"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_8_8 == (MR_Integer) 0);
#line 1406 "det_report.m"
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1406 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1406 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_8_8;
#line 1406 "det_report.m"
        else
#line 1406 "det_report.m"
          {
#line 1406 "det_report.m"
            {
#line 1406 "det_report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[4], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_7_7)));
#line 1406 "det_report.m"
              return;
            }
#line 1406 "det_report.m"
          }
#line 1406 "det_report.m"
      }
#line 1406 "det_report.m"
  }
#line 1406 "det_report.m"
}

#line 1406 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
#line 1406 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1406 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1406 "det_report.m"
{
#line 1406 "det_report.m"
  {
#line 1406 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1406 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1406 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1406 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
#line 1406 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1406 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 1406 "det_report.m"
    else
#line 1406 "det_report.m"
      {
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_10_10;
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1406 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 4106 "check_hlds.det_report.c"
        {
#line 4108 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
        }
#line 1406 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1406 "det_report.m"
          {
#line 4115 "check_hlds.det_report.c"
            check_hlds__det_report__TypeInfo_10_10 = (MR_Word) &check_hlds__det_report_scalar_common_2[4];
#line 4117 "check_hlds.det_report.c"
            {
#line 4119 "check_hlds.det_report.c"
              return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_10_10, ((MR_Box) (check_hlds__det_report__V_4_4)), ((MR_Box) (check_hlds__det_report__V_6_6)));
            }
#line 1406 "det_report.m"
          }
#line 1406 "det_report.m"
      }
#line 1406 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1406 "det_report.m"
  }
#line 1406 "det_report.m"
}

#line 1380 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0(
#line 1380 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1380 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1380 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1380 "det_report.m"
{
#line 1380 "det_report.m"
  {
#line 1380 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1380 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_12 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 1380 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_13 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 1380 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_12 == check_hlds__det_report__CastY_13);
#line 1380 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 4157 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1380 "det_report.m"
    else
#line 1380 "det_report.m"
      {
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_10_10;

#line 1380 "det_report.m"
        {
#line 1380 "det_report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_10_10, ((MR_Box) (check_hlds__det_report__V_4_4)), ((MR_Box) (check_hlds__det_report__V_7_7)));
        }
#line 4183 "check_hlds.det_report.c"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_10_10 == (MR_Integer) 0);
#line 1380 "det_report.m"
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1380 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1380 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_10_10;
#line 1380 "det_report.m"
        else
#line 1380 "det_report.m"
          {
#line 1380 "det_report.m"
            MR_Word check_hlds__det_report__V_11_11;
#line 1406 "det_report.m"
            MR_Integer check_hlds__det_report__CastX_22 = (MR_Integer) check_hlds__det_report__V_5_5;
#line 1406 "det_report.m"
            MR_Integer check_hlds__det_report__CastY_23 = (MR_Integer) check_hlds__det_report__V_8_8;

#line 1406 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_22 == check_hlds__det_report__CastY_23);
#line 1406 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 4206 "check_hlds.det_report.c"
              {
#line 4208 "check_hlds.det_report.c"
                check_hlds__det_report__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 1380 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 4212 "check_hlds.det_report.c"
                if (check_hlds__det_report__succeeded)
#line 4214 "check_hlds.det_report.c"
                  {
#line 4216 "check_hlds.det_report.c"
                    check_hlds__det_report__V_11_11 = (MR_Integer) 0;
#line 4218 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = MR_TRUE;
#line 4220 "check_hlds.det_report.c"
                  }
#line 4222 "check_hlds.det_report.c"
              }
#line 1406 "det_report.m"
            else
#line 1406 "det_report.m"
              {
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_5_5, (MR_Integer) 0)));
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_5_5, (MR_Integer) 1)));
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, (MR_Integer) 0)));
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, (MR_Integer) 1)));
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_21_21;

#line 1406 "det_report.m"
                {
#line 1406 "det_report.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_21_21, check_hlds__det_report__V_17_17, check_hlds__det_report__V_19_19);
                }
#line 4244 "check_hlds.det_report.c"
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_21_21 == (MR_Integer) 0);
#line 1406 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1406 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 1406 "det_report.m"
                  {
#line 1406 "det_report.m"
                    check_hlds__det_report__V_11_11 = check_hlds__det_report__V_21_21;
#line 4254 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_11_11 == (MR_Integer) 0);
#line 1380 "det_report.m"
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1406 "det_report.m"
                  }
#line 1406 "det_report.m"
                else
#line 1406 "det_report.m"
                  {
#line 1406 "det_report.m"
                    {
#line 1406 "det_report.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[4], &check_hlds__det_report__V_11_11, ((MR_Box) (check_hlds__det_report__V_18_18)), ((MR_Box) (check_hlds__det_report__V_20_20)));
                    }
#line 4269 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_11_11 == (MR_Integer) 0);
#line 1380 "det_report.m"
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1406 "det_report.m"
                  }
#line 1406 "det_report.m"
              }
#line 1380 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1380 "det_report.m"
              *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_11_11;
#line 1380 "det_report.m"
            else
#line 1380 "det_report.m"
              {
#line 1380 "det_report.m"
                {
#line 1380 "det_report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[2], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_6_6)), ((MR_Box) (check_hlds__det_report__V_9_9)));
#line 1380 "det_report.m"
                  return;
                }
#line 1380 "det_report.m"
              }
#line 1380 "det_report.m"
          }
#line 1380 "det_report.m"
      }
#line 1380 "det_report.m"
  }
#line 1380 "det_report.m"
}

#line 1380 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0(
#line 1380 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1380 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1380 "det_report.m"
{
#line 1380 "det_report.m"
  {
#line 1380 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1380 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1380 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1380 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
#line 1380 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1380 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 1380 "det_report.m"
    else
#line 1380 "det_report.m"
      {
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_12_12;
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1380 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 1406 "det_report.m"
        MR_Integer check_hlds__det_report__CastX_17;
#line 1406 "det_report.m"
        MR_Integer check_hlds__det_report__CastY_18;

#line 4350 "check_hlds.det_report.c"
        {
#line 4352 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], ((MR_Box) (check_hlds__det_report__V_3_3)), ((MR_Box) (check_hlds__det_report__V_6_6)));
        }
#line 1380 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1380 "det_report.m"
          {
#line 1406 "det_report.m"
            check_hlds__det_report__CastX_17 = (MR_Integer) check_hlds__det_report__V_4_4;
#line 1406 "det_report.m"
            check_hlds__det_report__CastY_18 = (MR_Integer) check_hlds__det_report__V_7_7;
#line 1406 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_17 == check_hlds__det_report__CastY_18);
#line 1406 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1406 "det_report.m"
              check_hlds__det_report__succeeded = MR_TRUE;
#line 1406 "det_report.m"
            else
#line 1406 "det_report.m"
              {
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__TypeInfo_10_20;
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_4_4, (MR_Integer) 0)));
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_4_4, (MR_Integer) 1)));
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_7_7, (MR_Integer) 0)));
#line 1406 "det_report.m"
                MR_Word check_hlds__det_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_7_7, (MR_Integer) 1)));

#line 4384 "check_hlds.det_report.c"
                {
#line 4386 "check_hlds.det_report.c"
                  check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_13_13, check_hlds__det_report__V_15_15);
                }
#line 1406 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 1406 "det_report.m"
                  {
#line 4393 "check_hlds.det_report.c"
                    check_hlds__det_report__TypeInfo_10_20 = (MR_Word) &check_hlds__det_report_scalar_common_2[4];
#line 4395 "check_hlds.det_report.c"
                    {
#line 4397 "check_hlds.det_report.c"
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_10_20, ((MR_Box) (check_hlds__det_report__V_14_14)), ((MR_Box) (check_hlds__det_report__V_16_16)));
                    }
#line 1406 "det_report.m"
                  }
#line 1406 "det_report.m"
              }
#line 1380 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1380 "det_report.m"
              {
#line 4408 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_12_12 = (MR_Word) &check_hlds__det_report_scalar_common_2[2];
#line 4410 "check_hlds.det_report.c"
                {
#line 4412 "check_hlds.det_report.c"
                  return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_12_12, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_8_8)));
                }
#line 1380 "det_report.m"
              }
#line 1380 "det_report.m"
          }
#line 1380 "det_report.m"
      }
#line 1380 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1380 "det_report.m"
  }
#line 1380 "det_report.m"
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
#line 4452 "check_hlds.det_report.c"
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
#line 4464 "check_hlds.det_report.c"
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
#line 4477 "check_hlds.det_report.c"
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
#line 4495 "check_hlds.det_report.c"
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
#line 4583 "check_hlds.det_report.c"
            {
#line 4585 "check_hlds.det_report.c"
              check_hlds__det_report__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
            }
#line 36 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 4590 "check_hlds.det_report.c"
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

#line 1647 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0(
#line 1647 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1647 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1647 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1647 "det_report.m"
{
#line 1647 "det_report.m"
  {
#line 1647 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1647 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar1_4 = check_hlds__det_report__HeadVar__2_2;
#line 1647 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar2_5 = check_hlds__det_report__HeadVar__3_3;

#line 1647 "det_report.m"
    {
#line 1647 "det_report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[1], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__det_report__Cast_HeadVar2_5)));
#line 1647 "det_report.m"
      return;
    }
#line 1647 "det_report.m"
  }
#line 1647 "det_report.m"
}

#line 1647 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0(
#line 1647 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1647 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1647 "det_report.m"
{
#line 1647 "det_report.m"
  {
#line 1647 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1647 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar1_3 = check_hlds__det_report__HeadVar__1_1;
#line 1647 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar2_4 = check_hlds__det_report__HeadVar__2_2;

#line 1647 "det_report.m"
    {
#line 1647 "det_report.m"
      return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[1], ((MR_Box) (check_hlds__det_report__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__det_report__Cast_HeadVar2_4)));
    }
#line 1647 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1647 "det_report.m"
  }
#line 1647 "det_report.m"
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
#line 4689 "check_hlds.det_report.c"
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
#line 4709 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
      else
#line 50 "det_report.m"
      if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4715 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
      else
#line 50 "det_report.m"
      if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4721 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
      else
#line 50 "det_report.m"
      if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4727 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
      else
#line 4731 "check_hlds.det_report.c"
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
#line 4751 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
      else
#line 50 "det_report.m"
      if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4757 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
      else
#line 50 "det_report.m"
      if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4763 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
      else
#line 50 "det_report.m"
      if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4769 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
      else
#line 4773 "check_hlds.det_report.c"
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
#line 4786 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4792 "check_hlds.det_report.c"
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
#line 4816 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4822 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4828 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 4832 "check_hlds.det_report.c"
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
#line 4849 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4855 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4861 "check_hlds.det_report.c"
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
#line 4881 "check_hlds.det_report.c"
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
#line 4908 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4914 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 4918 "check_hlds.det_report.c"
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
#line 4935 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4941 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4947 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4953 "check_hlds.det_report.c"
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
#line 4973 "check_hlds.det_report.c"
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
#line 4996 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 5000 "check_hlds.det_report.c"
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
#line 5017 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5023 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5029 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5035 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5041 "check_hlds.det_report.c"
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
#line 5061 "check_hlds.det_report.c"
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
#line 5082 "check_hlds.det_report.c"
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
#line 5095 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5101 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5107 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5113 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5119 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
        else
#line 50 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5125 "check_hlds.det_report.c"
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
#line 5225 "check_hlds.det_report.c"
            check_hlds__det_report__TypeInfo_30_30 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5227 "check_hlds.det_report.c"
            {
#line 5229 "check_hlds.det_report.c"
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
#line 5265 "check_hlds.det_report.c"
            check_hlds__det_report__TypeInfo_31_31 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5267 "check_hlds.det_report.c"
            {
#line 5269 "check_hlds.det_report.c"
              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_31_31, ((MR_Box) (check_hlds__det_report__V_7_7)), ((MR_Box) (check_hlds__det_report__V_9_9)));
            }
#line 50 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
              {
#line 5276 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_32_32 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5278 "check_hlds.det_report.c"
                {
#line 5280 "check_hlds.det_report.c"
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
#line 5314 "check_hlds.det_report.c"
            {
#line 5316 "check_hlds.det_report.c"
              check_hlds__det_report__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_report__V_15_15, check_hlds__det_report__V_17_17);
            }
#line 50 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 5321 "check_hlds.det_report.c"
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
#line 5354 "check_hlds.det_report.c"
            check_hlds__det_report__TypeInfo_27_27 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5356 "check_hlds.det_report.c"
            {
#line 5358 "check_hlds.det_report.c"
              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_27_27, ((MR_Box) (check_hlds__det_report__V_11_11)), ((MR_Box) (check_hlds__det_report__V_13_13)));
            }
#line 50 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 5363 "check_hlds.det_report.c"
              {
#line 5365 "check_hlds.det_report.c"
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
#line 5389 "check_hlds.det_report.c"
            {
#line 5391 "check_hlds.det_report.c"
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
#line 5429 "check_hlds.det_report.c"
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
#line 5451 "check_hlds.det_report.c"
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

#line 5512 "check_hlds.det_report.c"
        {
#line 5514 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = mercury__term____Unify____context_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
        }
#line 44 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 5519 "check_hlds.det_report.c"
          {
#line 5521 "check_hlds.det_report.c"
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

#line 1144 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
#line 1144 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1144 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1144 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1144 "det_report.m"
{
#line 1144 "det_report.m"
  {
#line 1144 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1144 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 1144 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_9 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 1144 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_8 == check_hlds__det_report__CastY_9);
#line 1144 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 5557 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1144 "det_report.m"
    else
#line 1144 "det_report.m"
    if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1144 "det_report.m"
      if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1144 "det_report.m"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1144 "det_report.m"
      else
#line 5569 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 1144 "det_report.m"
    else
#line 1144 "det_report.m"
      {
#line 1144 "det_report.m"
        MR_Word check_hlds__det_report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 1144 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5580 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 1144 "det_report.m"
        else
#line 1144 "det_report.m"
          {
#line 1144 "det_report.m"
            MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));

#line 1144 "det_report.m"
            {
#line 1144 "det_report.m"
              hlds__hlds_goal____Compare____hlds_goal_info_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_11_11, check_hlds__det_report__V_5_5);
#line 1144 "det_report.m"
              return;
            }
#line 1144 "det_report.m"
          }
#line 1144 "det_report.m"
      }
#line 1144 "det_report.m"
  }
#line 1144 "det_report.m"
}

#line 1144 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
#line 1144 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1144 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1144 "det_report.m"
{
#line 1144 "det_report.m"
  {
#line 1144 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1144 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1144 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1144 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
#line 1144 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1144 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 1144 "det_report.m"
    else
#line 1144 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1144 "det_report.m"
      {
#line 1144 "det_report.m"
        MR_Integer check_hlds__det_report__CastX_5 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1144 "det_report.m"
        MR_Integer check_hlds__det_report__CastY_6 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1144 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_6 == check_hlds__det_report__CastX_5);
#line 1144 "det_report.m"
      }
#line 1144 "det_report.m"
    else
#line 1144 "det_report.m"
      {
#line 1144 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1144 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4;

#line 1144 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1144 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1144 "det_report.m"
          {
#line 1144 "det_report.m"
            check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 5661 "check_hlds.det_report.c"
            {
#line 5663 "check_hlds.det_report.c"
              return check_hlds__det_report__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_4_4);
            }
#line 1144 "det_report.m"
          }
#line 1144 "det_report.m"
      }
#line 1144 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1144 "det_report.m"
  }
#line 1144 "det_report.m"
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
#line 5701 "check_hlds.det_report.c"
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
#line 5713 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "det_report.m"
    else
#line 40 "det_report.m"
      {
#line 40 "det_report.m"
        MR_Word check_hlds__det_report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5724 "check_hlds.det_report.c"
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
#line 5805 "check_hlds.det_report.c"
            {
#line 5807 "check_hlds.det_report.c"
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

#line 1662 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
#line 1662 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1662 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_7,
#line 1662 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_8)
#line 1662 "det_report.m"
{
#line 1665 "det_report.m"
  {
#line 1665 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1665 "det_report.m"
    MR_Word check_hlds__det_report__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1665 "det_report.m"
    MR_Word check_hlds__det_report__Value_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));

#line 1666 "det_report.m"
    {
#line 1666 "det_report.m"
      libs__globals__set_option_4_p_0(check_hlds__det_report__Option_4, check_hlds__det_report__Value_5, check_hlds__det_report__STATE_VARIABLE_Globals_0_7, check_hlds__det_report__STATE_VARIABLE_Globals_8);
#line 1666 "det_report.m"
      return;
    }
#line 1665 "det_report.m"
  }
#line 1662 "det_report.m"
}

#line 1564 "det_report.m"
static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
#line 1564 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_5,
#line 1564 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_6,
#line 1564 "det_report.m"
  MR_Word check_hlds__det_report__FailingContext_7)
#line 1564 "det_report.m"
{
#line 1567 "det_report.m"
  {
#line 1567 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1567 "det_report.m"
    MR_Word check_hlds__det_report__Msg_8;
#line 1567 "det_report.m"
    MR_Word check_hlds__det_report__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__FailingContext_7, (MR_Integer) 0)));
#line 1567 "det_report.m"
    MR_Word check_hlds__det_report__FailingGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__FailingContext_7, (MR_Integer) 1)));
#line 1567 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_13;
#line 1567 "det_report.m"
    MR_Word check_hlds__det_report__V_84_84;
#line 1567 "det_report.m"
    MR_Word check_hlds__det_report__V_85_85;
#line 1567 "det_report.m"
    MR_Word check_hlds__det_report__V_86_86;

#line 1573 "det_report.m"
    if ((check_hlds__det_report__FailingGoal_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1574 "det_report.m"
      {
#line 1575 "det_report.m"
        check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[110]);
#line 1574 "det_report.m"
      }
#line 1573 "det_report.m"
    else
#line 1573 "det_report.m"
    if ((check_hlds__det_report__FailingGoal_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1598 "det_report.m"
      {
#line 1599 "det_report.m"
        check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[73]);
#line 1598 "det_report.m"
      }
#line 1573 "det_report.m"
    else
#line 1573 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) == (MR_mktag((MR_Integer) 1))))
#line 1570 "det_report.m"
      {
#line 1570 "det_report.m"
        MR_Word check_hlds__det_report__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)));
#line 1570 "det_report.m"
        MR_String check_hlds__det_report__VarStr_12;
#line 1570 "det_report.m"
        MR_Word check_hlds__det_report__V_78_78;
#line 1570 "det_report.m"
        MR_Word check_hlds__det_report__V_79_79;

#line 1571 "det_report.m"
        {
#line 1571 "det_report.m"
          check_hlds__det_report__VarStr_12 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_6, (MR_Integer) 0, check_hlds__det_report__Var_11);
        }
#line 1572 "det_report.m"
        {
#line 1572 "det_report.m"
          check_hlds__det_report__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_79_79, 0) = ((MR_Box) (check_hlds__det_report__VarStr_12));
#line 1572 "det_report.m"
        }
#line 1572 "det_report.m"
        {
#line 1572 "det_report.m"
          check_hlds__det_report__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 0) = ((MR_Box) (check_hlds__det_report__V_79_79));
#line 1572 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[113])));
#line 1572 "det_report.m"
        }
#line 1572 "det_report.m"
        {
#line 1572 "det_report.m"
          check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[111])));
#line 1572 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_78_78));
#line 1572 "det_report.m"
        }
#line 1570 "det_report.m"
      }
#line 1573 "det_report.m"
    else
#line 1573 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) == (MR_mktag((MR_Integer) 2))))
#line 1577 "det_report.m"
      {
#line 1577 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_94_94 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1577 "det_report.m"
        MR_Word check_hlds__det_report__Var1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)));
#line 1577 "det_report.m"
        MR_Word check_hlds__det_report__Var2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1577 "det_report.m"
        MR_String check_hlds__det_report__Var1Str_16;
#line 1577 "det_report.m"
        MR_String check_hlds__det_report__Var2Str_17;
#line 1577 "det_report.m"
        MR_Word check_hlds__det_report__V_61_61;
#line 1577 "det_report.m"
        MR_Word check_hlds__det_report__V_62_62;
#line 1577 "det_report.m"
        MR_Word check_hlds__det_report__V_63_63;
#line 1577 "det_report.m"
        MR_Word check_hlds__det_report__V_66_66;
#line 1577 "det_report.m"
        MR_Word check_hlds__det_report__V_67_67;

#line 1578 "det_report.m"
        {
#line 1578 "det_report.m"
          check_hlds__det_report__Var1Str_16 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0(check_hlds__det_report__TypeCtorInfo_94_94, check_hlds__det_report__VarSet_6, (MR_Integer) 0, check_hlds__det_report__Var1_14);
        }
#line 1579 "det_report.m"
        {
#line 1579 "det_report.m"
          check_hlds__det_report__Var2Str_17 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0(check_hlds__det_report__TypeCtorInfo_94_94, check_hlds__det_report__VarSet_6, (MR_Integer) 0, check_hlds__det_report__Var2_15);
        }
#line 1580 "det_report.m"
        {
#line 1580 "det_report.m"
          check_hlds__det_report__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_62_62, 0) = ((MR_Box) (check_hlds__det_report__Var1Str_16));
#line 1580 "det_report.m"
        }
#line 1581 "det_report.m"
        {
#line 1581 "det_report.m"
          check_hlds__det_report__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_67_67, 0) = ((MR_Box) (check_hlds__det_report__Var2Str_17));
#line 1581 "det_report.m"
        }
#line 1581 "det_report.m"
        {
#line 1581 "det_report.m"
          check_hlds__det_report__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_66_66, 0) = ((MR_Box) (check_hlds__det_report__V_67_67));
#line 1581 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[81])));
#line 1581 "det_report.m"
        }
#line 1581 "det_report.m"
        {
#line 1581 "det_report.m"
          check_hlds__det_report__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[85])));
#line 1581 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_63_63, 1) = ((MR_Box) (check_hlds__det_report__V_66_66));
#line 1581 "det_report.m"
        }
#line 1580 "det_report.m"
        {
#line 1580 "det_report.m"
          check_hlds__det_report__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 0) = ((MR_Box) (check_hlds__det_report__V_62_62));
#line 1580 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 1) = ((MR_Box) (check_hlds__det_report__V_63_63));
#line 1580 "det_report.m"
        }
#line 1580 "det_report.m"
        {
#line 1580 "det_report.m"
          check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[114])));
#line 1580 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_61_61));
#line 1580 "det_report.m"
        }
#line 1577 "det_report.m"
      }
#line 1573 "det_report.m"
    else
#line 1573 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1588 "det_report.m"
      {
#line 1588 "det_report.m"
        MR_Word check_hlds__det_report__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1588 "det_report.m"
        MR_Word check_hlds__det_report__PredInfo_21;
#line 1588 "det_report.m"
        MR_String check_hlds__det_report__Name_22;
#line 1588 "det_report.m"
        MR_Word check_hlds__det_report__V_37_37;
#line 1588 "det_report.m"
        MR_Word check_hlds__det_report__V_38_38;
#line 1588 "det_report.m"
        MR_Integer check_hlds__det_report___ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 2)));

#line 1589 "det_report.m"
        {
#line 1589 "det_report.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_report__ModuleInfo_5, check_hlds__det_report__PredId_19, &check_hlds__det_report__PredInfo_21);
        }
#line 1590 "det_report.m"
        {
#line 1590 "det_report.m"
          check_hlds__det_report__Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_report__PredInfo_21);
        }
#line 1591 "det_report.m"
        {
#line 1591 "det_report.m"
          check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1591 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__Name_22));
#line 1591 "det_report.m"
        }
#line 1591 "det_report.m"
        {
#line 1591 "det_report.m"
          check_hlds__det_report__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1591 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 1591 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[81])));
#line 1591 "det_report.m"
        }
#line 1591 "det_report.m"
        {
#line 1591 "det_report.m"
          check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1591 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[108])));
#line 1591 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_37_37));
#line 1591 "det_report.m"
        }
#line 1588 "det_report.m"
      }
#line 1573 "det_report.m"
    else
#line 1573 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1583 "det_report.m"
      {
#line 1583 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 2)));
#line 1583 "det_report.m"
        MR_Word check_hlds__det_report__V_46_46;
#line 1583 "det_report.m"
        MR_Word check_hlds__det_report__V_47_47;
#line 1583 "det_report.m"
        MR_Word check_hlds__det_report__V_48_48;
#line 1583 "det_report.m"
        MR_Word check_hlds__det_report__V_51_51;
#line 1583 "det_report.m"
        MR_Word check_hlds__det_report__V_52_52;
#line 1583 "det_report.m"
        MR_Word check_hlds__det_report__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1583 "det_report.m"
        MR_String check_hlds__det_report__VarStr_92;

#line 1584 "det_report.m"
        {
#line 1584 "det_report.m"
          check_hlds__det_report__VarStr_92 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_6, (MR_Integer) 0, check_hlds__det_report__Var_91);
        }
#line 1585 "det_report.m"
        {
#line 1585 "det_report.m"
          check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__VarStr_92));
#line 1585 "det_report.m"
        }
#line 1586 "det_report.m"
        {
#line 1586 "det_report.m"
          check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1586 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1586 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__ConsId_18));
#line 1586 "det_report.m"
        }
#line 1586 "det_report.m"
        {
#line 1586 "det_report.m"
          check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1586 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 1586 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[81])));
#line 1586 "det_report.m"
        }
#line 1585 "det_report.m"
        {
#line 1585 "det_report.m"
          check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[115])));
#line 1585 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (check_hlds__det_report__V_51_51));
#line 1585 "det_report.m"
        }
#line 1585 "det_report.m"
        {
#line 1585 "det_report.m"
          check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 1585 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1585 "det_report.m"
        }
#line 1585 "det_report.m"
        {
#line 1585 "det_report.m"
          check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[114])));
#line 1585 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 1585 "det_report.m"
        }
#line 1583 "det_report.m"
      }
#line 1573 "det_report.m"
    else
#line 1593 "det_report.m"
      {
#line 1593 "det_report.m"
        MR_Word check_hlds__det_report__GenericCall_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1593 "det_report.m"
        MR_Word check_hlds__det_report__GenericCallId_24;
#line 1593 "det_report.m"
        MR_Word check_hlds__det_report__V_28_28;
#line 1593 "det_report.m"
        MR_String check_hlds__det_report__V_29_29;
#line 1593 "det_report.m"
        MR_String check_hlds__det_report__V_30_30;

#line 1594 "det_report.m"
        {
#line 1594 "det_report.m"
          hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__det_report__GenericCall_23, &check_hlds__det_report__GenericCallId_24);
        }
#line 1595 "det_report.m"
        {
#line 1595 "det_report.m"
          check_hlds__det_report__V_30_30 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(check_hlds__det_report__GenericCallId_24);
        }
#line 1595 "det_report.m"
        {
#line 1595 "det_report.m"
          check_hlds__det_report__V_29_29 = parse_tree__error_util__capitalize_1_f_0(check_hlds__det_report__V_30_30);
        }
#line 1595 "det_report.m"
        {
#line 1595 "det_report.m"
          check_hlds__det_report__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1595 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_28_28, 1) = ((MR_Box) (check_hlds__det_report__V_29_29));
#line 1595 "det_report.m"
        }
#line 1595 "det_report.m"
        {
#line 1595 "det_report.m"
          check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (check_hlds__det_report__V_28_28));
#line 1595 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[81])));
#line 1595 "det_report.m"
        }
#line 1593 "det_report.m"
      }
#line 1601 "det_report.m"
    {
#line 1601 "det_report.m"
      check_hlds__det_report__V_86_86 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__Pieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5]));
    }
#line 1601 "det_report.m"
    {
#line 1601 "det_report.m"
      check_hlds__det_report__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_85_85, 0) = ((MR_Box) (check_hlds__det_report__V_86_86));
#line 1601 "det_report.m"
    }
#line 1601 "det_report.m"
    {
#line 1601 "det_report.m"
      check_hlds__det_report__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1601 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_84_84, 0) = ((MR_Box) (check_hlds__det_report__V_85_85));
#line 1601 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1601 "det_report.m"
    }
#line 1601 "det_report.m"
    {
#line 1601 "det_report.m"
      check_hlds__det_report__Msg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_8, 0) = ((MR_Box) (check_hlds__det_report__Context_9));
#line 1601 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_8, 1) = ((MR_Box) (check_hlds__det_report__V_84_84));
#line 1601 "det_report.m"
    }
#line 1567 "det_report.m"
    return check_hlds__det_report__Msg_8;
#line 1567 "det_report.m"
  }
#line 1564 "det_report.m"
}

#line 1438 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
#line 1438 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 1438 "det_report.m"
  MR_Word check_hlds__det_report__CallUnifyContext_9,
#line 1438 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_10,
#line 1438 "det_report.m"
  MR_Word check_hlds__det_report__PredId_11,
#line 1438 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_12,
#line 1438 "det_report.m"
  MR_Word * check_hlds__det_report__InitMsgs_13,
#line 1438 "det_report.m"
  MR_Word * check_hlds__det_report__StartingPieces_14)
#line 1438 "det_report.m"
{
#line 1443 "det_report.m"
  {
#line 1443 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1443 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_15;
#line 1443 "det_report.m"
    MR_Word check_hlds__det_report__PredInfo_16;
#line 1443 "det_report.m"
    MR_Word check_hlds__det_report__Origin_17;
#line 1454 "det_report.m"
    MR_Word check_hlds__det_report__V_30_30;
#line 1454 "det_report.m"
    MR_Word check_hlds__det_report__V_31_31;
#line 1454 "det_report.m"
    MR_Word check_hlds__det_report__V_18_18;

#line 1444 "det_report.m"
    {
#line 1444 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_10, &check_hlds__det_report__ModuleInfo_15);
    }
#line 1445 "det_report.m"
    {
#line 1445 "det_report.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__PredId_11, &check_hlds__det_report__PredInfo_16);
    }
#line 1446 "det_report.m"
    {
#line 1446 "det_report.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__det_report__PredInfo_16, &check_hlds__det_report__Origin_17);
    }
#line 1454 "det_report.m"
    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Origin_17)) == (MR_mktag((MR_Integer) 0)));
#line 1454 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1454 "det_report.m"
      {
#line 1454 "det_report.m"
        check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Origin_17, (MR_Integer) 0)));
#line 1454 "det_report.m"
        check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_30_30, (MR_Integer) 0)));
#line 1454 "det_report.m"
        check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_30_30, (MR_Integer) 1)));
#line 1454 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_31_31 == (MR_Integer) 0);
#line 1454 "det_report.m"
      }
#line 1467 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1455 "det_report.m"
      {
#line 1455 "det_report.m"
        *check_hlds__det_report__InitMsgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1460 "det_report.m"
        if ((check_hlds__det_report__CallUnifyContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1463 "det_report.m"
          {
#line 1465 "det_report.m"
            *check_hlds__det_report__StartingPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[106]);
#line 1463 "det_report.m"
          }
#line 1460 "det_report.m"
        else
#line 1457 "det_report.m"
          {
#line 1457 "det_report.m"
            MR_Word check_hlds__det_report__LHS_19;
#line 1457 "det_report.m"
            MR_Word check_hlds__det_report__RHS_20;
#line 1457 "det_report.m"
            MR_Word check_hlds__det_report__UC_21;
#line 1457 "det_report.m"
            MR_Word check_hlds__det_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CallUnifyContext_9, (MR_Integer) 0)));

#line 1457 "det_report.m"
            check_hlds__det_report__LHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, (MR_Integer) 0)));
#line 1457 "det_report.m"
            check_hlds__det_report__RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, (MR_Integer) 1)));
#line 1457 "det_report.m"
            check_hlds__det_report__UC_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, (MR_Integer) 2)));
#line 1458 "det_report.m"
            {
#line 1458 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__det_report__UC_21, check_hlds__det_report__DetInfo_10, check_hlds__det_report__LHS_19, check_hlds__det_report__RHS_20, check_hlds__det_report__StartingPieces_14);
#line 1458 "det_report.m"
              return;
            }
#line 1457 "det_report.m"
          }
#line 1455 "det_report.m"
      }
#line 1467 "det_report.m"
    else
#line 1478 "det_report.m"
      {
#line 1478 "det_report.m"
        MR_Word check_hlds__det_report__ProcTable_25;
#line 1478 "det_report.m"
        MR_Word check_hlds__det_report__ProcInfo_26;
#line 1478 "det_report.m"
        MR_Word check_hlds__det_report__ArgModes_27;
#line 1478 "det_report.m"
        MR_Word check_hlds__det_report__InstVarSet_28;
#line 1478 "det_report.m"
        MR_Word check_hlds__det_report__PredPieces_29;
#line 1480 "det_report.m"
        MR_Box check_hlds__det_report__conv0_ProcInfo_26;

#line 1475 "det_report.m"
        if ((check_hlds__det_report__CallUnifyContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1477 "det_report.m"
          *check_hlds__det_report__InitMsgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1475 "det_report.m"
        else
#line 1469 "det_report.m"
          {
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__UnifyPieces0_22;
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__UnifyPieces_23;
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__UnifyMsg_24;
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CallUnifyContext_9, (MR_Integer) 0)));
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__V_47_47;
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__V_48_48;
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__LHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_40_40, (MR_Integer) 0)));
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__RHS_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_40_40, (MR_Integer) 1)));
#line 1469 "det_report.m"
            MR_Word check_hlds__det_report__UC_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_40_40, (MR_Integer) 2)));

#line 1470 "det_report.m"
            {
#line 1470 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 1, check_hlds__det_report__UC_56, check_hlds__det_report__DetInfo_10, check_hlds__det_report__LHS_54, check_hlds__det_report__RHS_55, &check_hlds__det_report__UnifyPieces0_22);
            }
#line 1472 "det_report.m"
            {
#line 1472 "det_report.m"
              check_hlds__det_report__UnifyPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__UnifyPieces0_22, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[107]));
            }
#line 1473 "det_report.m"
            {
#line 1473 "det_report.m"
              check_hlds__det_report__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__UnifyPieces_23));
#line 1473 "det_report.m"
            }
#line 1473 "det_report.m"
            {
#line 1473 "det_report.m"
              check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1473 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1473 "det_report.m"
            }
#line 1473 "det_report.m"
            {
#line 1473 "det_report.m"
              check_hlds__det_report__UnifyMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__UnifyMsg_24, 0) = ((MR_Box) (check_hlds__det_report__Context_8));
#line 1473 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__UnifyMsg_24, 1) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 1473 "det_report.m"
            }
#line 1474 "det_report.m"
            {
#line 1474 "det_report.m"
              MR_Word base;
#line 1474 "det_report.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "det_report.m"
              *check_hlds__det_report__InitMsgs_13 = base;
#line 1474 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__UnifyMsg_24));
#line 1474 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1474 "det_report.m"
            }
#line 1469 "det_report.m"
          }
#line 1479 "det_report.m"
        {
#line 1479 "det_report.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_report__PredInfo_16, &check_hlds__det_report__ProcTable_25);
        }
#line 1480 "det_report.m"
        {
#line 1480 "det_report.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_report__ProcTable_25, ((MR_Box) (check_hlds__det_report__ProcId_12)), &check_hlds__det_report__conv0_ProcInfo_26);
        }
#line 1480 "det_report.m"
        check_hlds__det_report__ProcInfo_26 = ((MR_Word) check_hlds__det_report__conv0_ProcInfo_26);
#line 1481 "det_report.m"
        {
#line 1481 "det_report.m"
          hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(check_hlds__det_report__ProcInfo_26, &check_hlds__det_report__ArgModes_27);
        }
#line 1482 "det_report.m"
        {
#line 1482 "det_report.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__det_report__ProcInfo_26, &check_hlds__det_report__InstVarSet_28);
        }
#line 1483 "det_report.m"
        {
#line 1483 "det_report.m"
          check_hlds__det_report__PredPieces_29 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(check_hlds__det_report__ModuleInfo_15, (MR_Integer) 0, check_hlds__det_report__PredId_11, check_hlds__det_report__InstVarSet_28, check_hlds__det_report__ArgModes_27);
        }
#line 1485 "det_report.m"
        {
#line 1485 "det_report.m"
          MR_Word base;
#line 1485 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "det_report.m"
          *check_hlds__det_report__StartingPieces_14 = base;
#line 1485 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[108])));
#line 1485 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__PredPieces_29));
#line 1485 "det_report.m"
        }
#line 1478 "det_report.m"
      }
#line 1443 "det_report.m"
  }
#line 1438 "det_report.m"
}

#line 1430 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
#line 1430 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_4,
#line 1430 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1430 "det_report.m"
{
#line 1432 "det_report.m"
  {
#line 1432 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1432 "det_report.m"
    MR_String check_hlds__det_report__HeadVar__3_3;
#line 1432 "det_report.m"
    MR_Word check_hlds__det_report__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1432 "det_report.m"
    MR_Word check_hlds__det_report__MaybeArgVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 1433 "det_report.m"
    {
#line 1433 "det_report.m"
      return check_hlds__det_report__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0((MR_Integer) 1, check_hlds__det_report__VarSet_4, check_hlds__det_report__ConsId_5, check_hlds__det_report__MaybeArgVars_6);
    }
#line 1432 "det_report.m"
    return check_hlds__det_report__HeadVar__3_3;
#line 1432 "det_report.m"
  }
#line 1430 "det_report.m"
}

#line 1419 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
#line 1419 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1419 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 1419 "det_report.m"
{
#line 1419 "det_report.m"
  {
#line 1419 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 1419 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1419 "det_report.m"
    MR_String check_hlds__det_report__conv0_HeadVar__3_3;

#line 1419 "det_report.m"
    {
#line 1419 "det_report.m"
      check_hlds__det_report__conv0_HeadVar__3_3 = check_hlds__det_report__switch_match_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 1419 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__3_3));
#line 1419 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 1419 "det_report.m"
  }
#line 1419 "det_report.m"
}

#line 1409 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
#line 1409 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_1,
#line 1409 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1409 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__3_3)
#line 1409 "det_report.m"
{
#line 1412 "det_report.m"
  {
#line 1412 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1412 "det_report.m"
    if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1412 "det_report.m"
      *check_hlds__det_report__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1412 "det_report.m"
    else
#line 1414 "det_report.m"
      {
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_48_48;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContexts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__ProcInfo_9;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__VarSet_10;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__Var_11;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__MainMatch_12;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatches_13;
#line 1414 "det_report.m"
        MR_String check_hlds__det_report__MainMatchStr_14;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatchStrs_15;
#line 1414 "det_report.m"
        MR_String check_hlds__det_report__MatchsStr_16;
#line 1414 "det_report.m"
        MR_String check_hlds__det_report__VarStr_17;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__InnerPieces_18;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__OuterPieces_19;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__V_20_20;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__V_22_22;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__V_26_26;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__V_27_27;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__V_28_28;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__V_39_39;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_50;
#line 1414 "det_report.m"
        MR_Word check_hlds__det_report__MaybeArgVars_51;

#line 1415 "det_report.m"
        {
#line 1415 "det_report.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_1, &check_hlds__det_report__ProcInfo_9);
        }
#line 1416 "det_report.m"
        {
#line 1416 "det_report.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_9, &check_hlds__det_report__VarSet_10);
        }
#line 1417 "det_report.m"
        check_hlds__det_report__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 0)));
#line 1417 "det_report.m"
        check_hlds__det_report__MainMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 1)));
#line 1417 "det_report.m"
        check_hlds__det_report__OtherMatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 2)));
#line 1432 "det_report.m"
        check_hlds__det_report__ConsId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__MainMatch_12, (MR_Integer) 0)));
#line 1432 "det_report.m"
        check_hlds__det_report__MaybeArgVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__MainMatch_12, (MR_Integer) 1)));
#line 1433 "det_report.m"
        {
#line 1433 "det_report.m"
          check_hlds__det_report__MainMatchStr_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0((MR_Integer) 1, check_hlds__det_report__VarSet_10, check_hlds__det_report__ConsId_50, check_hlds__det_report__MaybeArgVars_51);
        }
#line 1419 "det_report.m"
        {
#line 1419 "det_report.m"
          check_hlds__det_report__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[2]));
#line 1419 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 1) = ((MR_Box) (check_hlds__det_report__det_diagnose_switch_context_3_p_0_1));
#line 1419 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1419 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 3) = ((MR_Box) (check_hlds__det_report__VarSet_10));
#line 1419 "det_report.m"
        }
#line 1419 "det_report.m"
        {
#line 1419 "det_report.m"
          check_hlds__det_report__OtherMatchStrs_15 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_report__V_20_20, check_hlds__det_report__OtherMatches_13);
        }
#line 1420 "det_report.m"
        {
#line 1420 "det_report.m"
          check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1420 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__MainMatchStr_14));
#line 1420 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (check_hlds__det_report__OtherMatchStrs_15));
#line 1420 "det_report.m"
        }
#line 1420 "det_report.m"
        {
#line 1420 "det_report.m"
          check_hlds__det_report__MatchsStr_16 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__det_report__V_22_22);
        }
#line 1421 "det_report.m"
        {
#line 1421 "det_report.m"
          check_hlds__det_report__VarStr_17 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_10, (MR_Integer) 0, check_hlds__det_report__Var_11);
        }
#line 1422 "det_report.m"
        {
#line 1422 "det_report.m"
          check_hlds__det_report__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1422 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__MatchsStr_16));
#line 1422 "det_report.m"
        }
#line 1423 "det_report.m"
        {
#line 1423 "det_report.m"
          check_hlds__det_report__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_32_32, 0) = ((MR_Box) (check_hlds__det_report__VarStr_17));
#line 1423 "det_report.m"
        }
#line 1423 "det_report.m"
        {
#line 1423 "det_report.m"
          check_hlds__det_report__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 0) = ((MR_Box) (check_hlds__det_report__V_32_32));
#line 1423 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[37])));
#line 1423 "det_report.m"
        }
#line 1423 "det_report.m"
        {
#line 1423 "det_report.m"
          check_hlds__det_report__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[104])));
#line 1423 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_28_28, 1) = ((MR_Box) (check_hlds__det_report__V_31_31));
#line 1423 "det_report.m"
        }
#line 1422 "det_report.m"
        {
#line 1422 "det_report.m"
          check_hlds__det_report__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_26_26, 0) = ((MR_Box) (check_hlds__det_report__V_27_27));
#line 1422 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_26_26, 1) = ((MR_Box) (check_hlds__det_report__V_28_28));
#line 1422 "det_report.m"
        }
#line 1422 "det_report.m"
        {
#line 1422 "det_report.m"
          check_hlds__det_report__InnerPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__InnerPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[103])));
#line 1422 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__InnerPieces_18, 1) = ((MR_Box) (check_hlds__det_report__V_26_26));
#line 1422 "det_report.m"
        }
#line 1424 "det_report.m"
        {
#line 1424 "det_report.m"
          check_hlds__det_report__det_diagnose_switch_context_3_p_0(check_hlds__det_report__DetInfo_1, check_hlds__det_report__SwitchContexts_7, &check_hlds__det_report__OuterPieces_19);
        }
#line 6806 "check_hlds.det_report.c"
        check_hlds__det_report__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1428 "det_report.m"
        {
#line 1428 "det_report.m"
          check_hlds__det_report__V_39_39 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_48_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[78]), check_hlds__det_report__InnerPieces_18);
        }
#line 1428 "det_report.m"
        {
#line 1428 "det_report.m"
          *check_hlds__det_report__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_48_48, check_hlds__det_report__OuterPieces_19, check_hlds__det_report__V_39_39);
        }
#line 1414 "det_report.m"
      }
#line 1412 "det_report.m"
  }
#line 1409 "det_report.m"
}

#line 1359 "det_report.m"
static void MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_2_p_0(
#line 1359 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1359 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__2_2)
#line 1359 "det_report.m"
{
#line 1362 "det_report.m"
  {
#line 1362 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1362 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1362 "det_report.m"
      *check_hlds__det_report__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1362 "det_report.m"
    else
#line 1363 "det_report.m"
      {
#line 1363 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1363 "det_report.m"
        MR_Word check_hlds__det_report__ConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1363 "det_report.m"
        MR_Word check_hlds__det_report__ConsIdPiece_6;
#line 1363 "det_report.m"
        MR_Word check_hlds__det_report__PiecesHead_10;
#line 1363 "det_report.m"
        MR_Word check_hlds__det_report__PiecesTail_12;

#line 1364 "det_report.m"
        {
#line 1364 "det_report.m"
          check_hlds__det_report__ConsIdPiece_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdPiece_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1364 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdPiece_6, 1) = ((MR_Box) (check_hlds__det_report__ConsId_3));
#line 1364 "det_report.m"
        }
#line 1368 "det_report.m"
        if ((check_hlds__det_report__ConsIds_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1372 "det_report.m"
          {
#line 1373 "det_report.m"
            {
#line 1373 "det_report.m"
              check_hlds__det_report__PiecesHead_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_6));
#line 1373 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[66])));
#line 1373 "det_report.m"
            }
#line 1372 "det_report.m"
          }
#line 1368 "det_report.m"
        else
#line 1368 "det_report.m"
          {
#line 1368 "det_report.m"
            MR_Word check_hlds__det_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ConsIds_4, (MR_Integer) 1)));
#line 1366 "det_report.m"
            MR_Word check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ConsIds_4, (MR_Integer) 0)));

#line 1368 "det_report.m"
            if ((check_hlds__det_report__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1369 "det_report.m"
              {
#line 1370 "det_report.m"
                {
#line 1370 "det_report.m"
                  check_hlds__det_report__PiecesHead_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_6));
#line 1370 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[101])));
#line 1370 "det_report.m"
                }
#line 1369 "det_report.m"
              }
#line 1368 "det_report.m"
            else
#line 1366 "det_report.m"
              {
#line 1367 "det_report.m"
                {
#line 1367 "det_report.m"
                  check_hlds__det_report__PiecesHead_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_6));
#line 1367 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[102])));
#line 1367 "det_report.m"
                }
#line 1366 "det_report.m"
              }
#line 1368 "det_report.m"
          }
#line 1375 "det_report.m"
        {
#line 1375 "det_report.m"
          check_hlds__det_report__cons_id_list_to_pieces_2_p_0(check_hlds__det_report__ConsIds_4, &check_hlds__det_report__PiecesTail_12);
        }
#line 1376 "det_report.m"
        {
#line 1376 "det_report.m"
          *check_hlds__det_report__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__PiecesHead_10, check_hlds__det_report__PiecesTail_12);
        }
#line 1363 "det_report.m"
      }
#line 1362 "det_report.m"
  }
#line 1359 "det_report.m"
}

#line 1349 "det_report.m"
static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
#line 1349 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1349 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2,
#line 1349 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3)
#line 1349 "det_report.m"
{
#line 1352 "det_report.m"
  while (MR_TRUE)
#line 1352 "det_report.m"
    {
#line 1352 "det_report.m"
      /* tailcall optimized into a loop */
#line 1352 "det_report.m"
      {
#line 1352 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1352 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1352 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2;
#line 1352 "det_report.m"
        else
#line 1353 "det_report.m"
          {
#line 1353 "det_report.m"
            MR_Word check_hlds__det_report__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1353 "det_report.m"
            MR_Word check_hlds__det_report__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1353 "det_report.m"
            MR_Word check_hlds__det_report__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1353 "det_report.m"
            MR_Word check_hlds__det_report__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 0)));
#line 1353 "det_report.m"
            MR_Word check_hlds__det_report__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 1)));
#line 1353 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15;
#line 1353 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16;
#line 1354 "det_report.m"
            MR_Word check_hlds__det_report___Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 2)));

#line 1355 "det_report.m"
            {
#line 1355 "det_report.m"
              mercury__set_tree234__insert_3_p_0(check_hlds__det_report__TypeCtorInfo_18_18, ((MR_Box) (check_hlds__det_report__MainConsId_10)), check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2, &check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15);
            }
#line 1356 "det_report.m"
            {
#line 1356 "det_report.m"
              mercury__set_tree234__insert_list_3_p_0(check_hlds__det_report__TypeCtorInfo_18_18, check_hlds__det_report__OtherConsIds_11, check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15, &check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16);
            }
#line 1357 "det_report.m"
            /* direct tailcall eliminated */
#line 1357 "det_report.m"
            {
#line 1357 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Cases_8;
#line 1357 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16;

#line 1357 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0__tmp_copy_2;
#line 1357 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1357 "det_report.m"
            }
#line 1357 "det_report.m"
            continue;
#line 1353 "det_report.m"
          }
#line 1352 "det_report.m"
      }
#line 1352 "det_report.m"
      break;
#line 1352 "det_report.m"
    }
#line 1349 "det_report.m"
}

#line 1336 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_uncovered_consids_4_p_0(
#line 1336 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1336 "det_report.m"
  MR_Word check_hlds__det_report__CoveredConsIds_2,
#line 1336 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3,
#line 1336 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4)
#line 1336 "det_report.m"
{
#line 1339 "det_report.m"
  while (MR_TRUE)
#line 1339 "det_report.m"
    {
#line 1339 "det_report.m"
      /* tailcall optimized into a loop */
#line 1339 "det_report.m"
      {
#line 1339 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1339 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1339 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3;
#line 1339 "det_report.m"
        else
#line 1341 "det_report.m"
          {
#line 1341 "det_report.m"
            MR_Word check_hlds__det_report__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1341 "det_report.m"
            MR_Word check_hlds__det_report__ConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1341 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15;

#line 1342 "det_report.m"
            {
#line 1342 "det_report.m"
              check_hlds__det_report__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__CoveredConsIds_2, ((MR_Box) (check_hlds__det_report__ConsId_9)));
            }
#line 1344 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1344 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3;
#line 1344 "det_report.m"
            else
#line 1345 "det_report.m"
              {
#line 1345 "det_report.m"
                check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15, 0) = ((MR_Box) (check_hlds__det_report__ConsId_9));
#line 1345 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3));
#line 1345 "det_report.m"
              }
#line 1347 "det_report.m"
            /* direct tailcall eliminated */
#line 1347 "det_report.m"
            {
#line 1347 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__ConsIds_10;
#line 1347 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15;

#line 1347 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0__tmp_copy_3;
#line 1347 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1347 "det_report.m"
            }
#line 1347 "det_report.m"
            continue;
#line 1341 "det_report.m"
          }
#line 1339 "det_report.m"
      }
#line 1339 "det_report.m"
      break;
#line 1339 "det_report.m"
    }
#line 1336 "det_report.m"
}

#line 1312 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0_1(
#line 1312 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1312 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1312 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2)
#line 1312 "det_report.m"
{
#line 1312 "det_report.m"
  {
#line 1312 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1312 "det_report.m"
    MR_Word check_hlds__det_report__conv0_HeadVar__3_3;

#line 1312 "det_report.m"
    {
#line 1312 "det_report.m"
      parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_report__wrapper_arg_1), &check_hlds__det_report__conv0_HeadVar__3_3);
    }
#line 1312 "det_report.m"
    *check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__3_3));
#line 1312 "det_report.m"
  }
#line 1312 "det_report.m"
}

#line 1295 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0(
#line 1295 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_7,
#line 1295 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_8,
#line 1295 "det_report.m"
  MR_Word check_hlds__det_report__Var_9,
#line 1295 "det_report.m"
  MR_Word check_hlds__det_report__Cases_10,
#line 1295 "det_report.m"
  MR_String * check_hlds__det_report__VarStr_11,
#line 1295 "det_report.m"
  MR_Word * check_hlds__det_report__MaybeMissingPieces_12)
#line 1295 "det_report.m"
{
#line 1299 "det_report.m"
  {
#line 1299 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1299 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_13;
#line 1299 "det_report.m"
    MR_Word check_hlds__det_report__VarSet_14;
#line 1299 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_15;
#line 1324 "det_report.m"
    MR_Word check_hlds__det_report__ConsIds_21;
#line 1314 "det_report.m"
    MR_Word check_hlds__det_report__BoundInsts_17;
#line 1306 "det_report.m"
    MR_Word check_hlds__det_report__VarInst_16;

#line 1300 "det_report.m"
    {
#line 1300 "det_report.m"
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__ProcInfo_13);
    }
#line 1301 "det_report.m"
    {
#line 1301 "det_report.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_13, &check_hlds__det_report__VarSet_14);
    }
#line 1302 "det_report.m"
    {
#line 1302 "det_report.m"
      *check_hlds__det_report__VarStr_11 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_14, (MR_Integer) 0, check_hlds__det_report__Var_9);
    }
#line 1303 "det_report.m"
    {
#line 1303 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__ModuleInfo_15);
    }
#line 1306 "det_report.m"
    {
#line 1306 "det_report.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__det_report__InstMap0_8, check_hlds__det_report__Var_9, &check_hlds__det_report__VarInst_16);
    }
#line 1307 "det_report.m"
    {
#line 1307 "det_report.m"
      check_hlds__det_report__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__VarInst_16, &check_hlds__det_report__BoundInsts_17);
    }
#line 1314 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1309 "det_report.m"
      {
#line 1309 "det_report.m"
        MR_Word check_hlds__det_report__VarTypes_18;
#line 1309 "det_report.m"
        MR_Word check_hlds__det_report__VarType_19;
#line 1309 "det_report.m"
        MR_Word check_hlds__det_report__VarTypeCtor_20;
#line 1309 "det_report.m"
        MR_Word check_hlds__det_report__V_28_28;

#line 1309 "det_report.m"
        {
#line 1309 "det_report.m"
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__VarTypes_18);
        }
#line 1310 "det_report.m"
        {
#line 1310 "det_report.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_18, check_hlds__det_report__Var_9, &check_hlds__det_report__VarType_19);
        }
#line 1311 "det_report.m"
        {
#line 1311 "det_report.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__det_report__VarType_19, &check_hlds__det_report__VarTypeCtor_20);
        }
#line 1312 "det_report.m"
        {
#line 1312 "det_report.m"
          check_hlds__det_report__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[1]));
#line 1312 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 1) = ((MR_Box) (check_hlds__det_report__find_missing_cons_ids_6_p_0_1));
#line 1312 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1312 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 3) = ((MR_Box) (check_hlds__det_report__VarTypeCtor_20));
#line 1312 "det_report.m"
        }
#line 1312 "det_report.m"
        {
#line 1312 "det_report.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__V_28_28, check_hlds__det_report__BoundInsts_17, &check_hlds__det_report__ConsIds_21);
        }
#line 1309 "det_report.m"
        check_hlds__det_report__succeeded = MR_TRUE;
#line 1309 "det_report.m"
      }
#line 1314 "det_report.m"
    else
#line 1315 "det_report.m"
      {
#line 1315 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_42_42;
#line 1315 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_43_43;
#line 1315 "det_report.m"
        MR_Word check_hlds__det_report__TypeDefn_22;
#line 1315 "det_report.m"
        MR_Word check_hlds__det_report__TypeBody_23;
#line 1315 "det_report.m"
        MR_Word check_hlds__det_report__ConsTable_24;
#line 1317 "det_report.m"
        MR_Word check_hlds__det_report__V_29_29;
#line 1317 "det_report.m"
        MR_Word check_hlds__det_report__V_30_30;
#line 1317 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 1317 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;
#line 1317 "det_report.m"
        MR_Word check_hlds__det_report__V_33_33;
#line 1317 "det_report.m"
        MR_Word check_hlds__det_report__V_34_34;
#line 1317 "det_report.m"
        MR_Word check_hlds__det_report__V_35_35;
#line 1317 "det_report.m"
        MR_Word check_hlds__det_report__V_36_36;

#line 1315 "det_report.m"
        {
#line 1315 "det_report.m"
          check_hlds__det_report__succeeded = check_hlds__det_util__det_lookup_var_type_4_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__ProcInfo_13, check_hlds__det_report__Var_9, &check_hlds__det_report__TypeDefn_22);
        }
#line 1315 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1315 "det_report.m"
          {
#line 1316 "det_report.m"
            {
#line 1316 "det_report.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__det_report__TypeDefn_22, &check_hlds__det_report__TypeBody_23);
            }
#line 1317 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__TypeBody_23)) == (MR_mktag((MR_Integer) 1)));
#line 1317 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1317 "det_report.m"
              {
#line 1317 "det_report.m"
                check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 0)));
#line 1317 "det_report.m"
                check_hlds__det_report__ConsTable_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 1)));
#line 1317 "det_report.m"
                check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 2)));
#line 1317 "det_report.m"
                check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 3)));
#line 1317 "det_report.m"
                check_hlds__det_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 4)));
#line 1317 "det_report.m"
                check_hlds__det_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 5)));
#line 1317 "det_report.m"
                check_hlds__det_report__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1317 "det_report.m"
                check_hlds__det_report__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1317 "det_report.m"
                check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 7)));
#line 7331 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7333 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1318 "det_report.m"
                {
#line 1318 "det_report.m"
                  mercury__map__keys_2_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__TypeCtorInfo_43_43, check_hlds__det_report__ConsTable_24, &check_hlds__det_report__ConsIds_21);
                }
#line 1318 "det_report.m"
                check_hlds__det_report__succeeded = MR_TRUE;
#line 1317 "det_report.m"
              }
#line 1315 "det_report.m"
          }
#line 1315 "det_report.m"
      }
#line 1324 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1321 "det_report.m"
      {
#line 1321 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_11_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1321 "det_report.m"
        MR_Word check_hlds__det_report__MissingConsIds_25;
#line 1321 "det_report.m"
        MR_Word check_hlds__det_report__MissingPieces_26;
#line 1321 "det_report.m"
        MR_Word check_hlds__det_report__CoveredConsIds_47;
#line 1321 "det_report.m"
        MR_Word check_hlds__det_report__RevMissingConsIds_48;
#line 1321 "det_report.m"
        MR_Word check_hlds__det_report__V_49_49;

#line 1332 "det_report.m"
        {
#line 1332 "det_report.m"
          check_hlds__det_report__V_49_49 = mercury__set_tree234__init_0_f_0(check_hlds__det_report__TypeCtorInfo_11_51);
        }
#line 1332 "det_report.m"
        {
#line 1332 "det_report.m"
          check_hlds__det_report__compute_covered_cons_ids_3_p_0(check_hlds__det_report__Cases_10, check_hlds__det_report__V_49_49, &check_hlds__det_report__CoveredConsIds_47);
        }
#line 1333 "det_report.m"
        {
#line 1333 "det_report.m"
          check_hlds__det_report__find_uncovered_consids_4_p_0(check_hlds__det_report__ConsIds_21, check_hlds__det_report__CoveredConsIds_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__RevMissingConsIds_48);
        }
#line 1334 "det_report.m"
        {
#line 1334 "det_report.m"
          mercury__list__reverse_2_p_0(check_hlds__det_report__TypeCtorInfo_11_51, check_hlds__det_report__RevMissingConsIds_48, &check_hlds__det_report__MissingConsIds_25);
        }
#line 1322 "det_report.m"
        {
#line 1322 "det_report.m"
          check_hlds__det_report__cons_id_list_to_pieces_2_p_0(check_hlds__det_report__MissingConsIds_25, &check_hlds__det_report__MissingPieces_26);
        }
#line 1323 "det_report.m"
        {
#line 1323 "det_report.m"
          MR_Word base;
#line 1323 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "det_report.m"
          *check_hlds__det_report__MaybeMissingPieces_12 = base;
#line 1323 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__MissingPieces_26));
#line 1323 "det_report.m"
        }
#line 1321 "det_report.m"
      }
#line 1324 "det_report.m"
    else
#line 1325 "det_report.m"
      *check_hlds__det_report__MaybeMissingPieces_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1299 "det_report.m"
  }
#line 1295 "det_report.m"
}

#line 1284 "det_report.m"
static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
#line 1284 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1284 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1284 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0_3,
#line 1284 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_InstMap_4)
#line 1284 "det_report.m"
{
#line 1287 "det_report.m"
  while (MR_TRUE)
#line 1287 "det_report.m"
    {
#line 1287 "det_report.m"
      /* tailcall optimized into a loop */
#line 1287 "det_report.m"
      {
#line 1287 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1287 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_InstMap_4 = check_hlds__det_report__STATE_VARIABLE_InstMap_0_3;
#line 1287 "det_report.m"
        else
#line 1288 "det_report.m"
          {
#line 1288 "det_report.m"
            MR_Word check_hlds__det_report__Var_9;
#line 1288 "det_report.m"
            MR_Word check_hlds__det_report__Mode_10;
#line 1288 "det_report.m"
            MR_Word check_hlds__det_report__VarsModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1288 "det_report.m"
            MR_Word check_hlds__det_report__InitInst_14;
#line 1288 "det_report.m"
            MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1288 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_19_19;
#line 1289 "det_report.m"
            MR_Word check_hlds__det_report___FinalInst_15;

#line 1288 "det_report.m"
            check_hlds__det_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_18_18, (MR_Integer) 0)));
#line 1288 "det_report.m"
            check_hlds__det_report__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_18_18, (MR_Integer) 1)));
#line 1289 "det_report.m"
            {
#line 1289 "det_report.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__Mode_10, &check_hlds__det_report__InitInst_14, &check_hlds__det_report___FinalInst_15);
            }
#line 1290 "det_report.m"
            {
#line 1290 "det_report.m"
              hlds__instmap__instmap_set_var_4_p_0(check_hlds__det_report__Var_9, check_hlds__det_report__InitInst_14, check_hlds__det_report__STATE_VARIABLE_InstMap_0_3, &check_hlds__det_report__STATE_VARIABLE_InstMap_19_19);
            }
#line 1291 "det_report.m"
            /* direct tailcall eliminated */
#line 1291 "det_report.m"
            {
#line 1291 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__VarsModes_11;
#line 1291 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_InstMap_19_19;

#line 1291 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_InstMap_0_3 = check_hlds__det_report__STATE_VARIABLE_InstMap_0__tmp_copy_3;
#line 1291 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1291 "det_report.m"
            }
#line 1291 "det_report.m"
            continue;
#line 1288 "det_report.m"
          }
#line 1287 "det_report.m"
      }
#line 1287 "det_report.m"
      break;
#line 1287 "det_report.m"
    }
#line 1284 "det_report.m"
}

#line 1271 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_switch_6_p_0(
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1271 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 1271 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6)
#line 1271 "det_report.m"
{
#line 1274 "det_report.m"
  while (MR_TRUE)
#line 1274 "det_report.m"
    {
#line 1274 "det_report.m"
      /* tailcall optimized into a loop */
#line 1274 "det_report.m"
      {
#line 1274 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1274 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1274 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 1274 "det_report.m"
        else
#line 1275 "det_report.m"
          {
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 0)));
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 1)));
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 2)));
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo0_22;
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_23;
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo_24;
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27;
#line 1275 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;

#line 1277 "det_report.m"
            {
#line 1277 "det_report.m"
              check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__ModuleInfo0_22);
            }
#line 1278 "det_report.m"
            {
#line 1278 "det_report.m"
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__MainConsId_19, check_hlds__det_report__OtherConsIds_20, check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__InstMap1_23, check_hlds__det_report__ModuleInfo0_22, &check_hlds__det_report__ModuleInfo_24);
            }
#line 1280 "det_report.m"
            {
#line 1280 "det_report.m"
              check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_24, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27);
            }
#line 1281 "det_report.m"
            {
#line 1281 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_21, check_hlds__det_report__InstMap1_23, check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27, &check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28);
            }
#line 1282 "det_report.m"
            /* direct tailcall eliminated */
#line 1282 "det_report.m"
            {
#line 1282 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__3__tmp_copy_3 = check_hlds__det_report__Cases_16;
#line 1282 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_5 = check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;

#line 1282 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_5;
#line 1282 "det_report.m"
              check_hlds__det_report__HeadVar__3_3 = check_hlds__det_report__HeadVar__3__tmp_copy_3;
#line 1282 "det_report.m"
            }
#line 1282 "det_report.m"
            continue;
#line 1275 "det_report.m"
          }
#line 1274 "det_report.m"
      }
#line 1274 "det_report.m"
      break;
#line 1274 "det_report.m"
    }
#line 1271 "det_report.m"
}

#line 1263 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_4_p_0(
#line 1263 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1263 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1263 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1263 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4)
#line 1263 "det_report.m"
{
#line 1266 "det_report.m"
  while (MR_TRUE)
#line 1266 "det_report.m"
    {
#line 1266 "det_report.m"
      /* tailcall optimized into a loop */
#line 1266 "det_report.m"
      {
#line 1266 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1266 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1266 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_4 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3;
#line 1266 "det_report.m"
        else
#line 1267 "det_report.m"
          {
#line 1267 "det_report.m"
            MR_Word check_hlds__det_report__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1267 "det_report.m"
            MR_Word check_hlds__det_report__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1267 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15;

#line 1268 "det_report.m"
            {
#line 1268 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3, &check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15);
            }
#line 1269 "det_report.m"
            /* direct tailcall eliminated */
#line 1269 "det_report.m"
            {
#line 1269 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Goals_10;
#line 1269 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15;

#line 1269 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3;
#line 1269 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1269 "det_report.m"
            }
#line 1269 "det_report.m"
            continue;
#line 1267 "det_report.m"
          }
#line 1266 "det_report.m"
      }
#line 1266 "det_report.m"
      break;
#line 1266 "det_report.m"
    }
#line 1263 "det_report.m"
}

#line 1254 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_4_p_0(
#line 1254 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1254 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1254 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1254 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4)
#line 1254 "det_report.m"
{
#line 1257 "det_report.m"
  while (MR_TRUE)
#line 1257 "det_report.m"
    {
#line 1257 "det_report.m"
      /* tailcall optimized into a loop */
#line 1257 "det_report.m"
      {
#line 1257 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1257 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_4 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3;
#line 1257 "det_report.m"
        else
#line 1258 "det_report.m"
          {
#line 1258 "det_report.m"
            MR_Word check_hlds__det_report__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1258 "det_report.m"
            MR_Word check_hlds__det_report__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1258 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_13;
#line 1258 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16;

#line 1259 "det_report.m"
            {
#line 1259 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3, &check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16);
            }
#line 1260 "det_report.m"
            {
#line 1260 "det_report.m"
              hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, &check_hlds__det_report__InstMap1_13);
            }
#line 1261 "det_report.m"
            /* direct tailcall eliminated */
#line 1261 "det_report.m"
            {
#line 1261 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Goals_10;
#line 1261 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__2__tmp_copy_2 = check_hlds__det_report__InstMap1_13;
#line 1261 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16;

#line 1261 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3;
#line 1261 "det_report.m"
              check_hlds__det_report__HeadVar__2_2 = check_hlds__det_report__HeadVar__2__tmp_copy_2;
#line 1261 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1261 "det_report.m"
            }
#line 1261 "det_report.m"
            continue;
#line 1258 "det_report.m"
          }
#line 1257 "det_report.m"
      }
#line 1257 "det_report.m"
      break;
#line 1257 "det_report.m"
    }
#line 1254 "det_report.m"
}

#line 1227 "det_report.m"
static void MR_CALL 
check_hlds__det_report__generate_warning_for_switch_var_if_missing_5_p_0(
#line 1227 "det_report.m"
  MR_Word check_hlds__det_report__RequiredVar_6,
#line 1227 "det_report.m"
  MR_Word check_hlds__det_report__Goal_7,
#line 1227 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_8,
#line 1227 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
#line 1227 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19)
#line 1227 "det_report.m"
{
#line 1231 "det_report.m"
  {
#line 1231 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1231 "det_report.m"
    MR_Word check_hlds__det_report__GoalVars_10;

#line 1232 "det_report.m"
    {
#line 1232 "det_report.m"
      hlds__goal_util__goal_vars_2_p_0(check_hlds__det_report__Goal_7, &check_hlds__det_report__GoalVars_10);
    }
#line 1233 "det_report.m"
    {
#line 1233 "det_report.m"
      check_hlds__det_report__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__GoalVars_10, check_hlds__det_report__RequiredVar_6);
    }
#line 1235 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1235 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_19 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18;
#line 1235 "det_report.m"
    else
#line 1236 "det_report.m"
      {
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__ProcInfo_11;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__VarSet_12;
#line 1236 "det_report.m"
        MR_String check_hlds__det_report__VarStr_13;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__MissingRequiredPieces_14;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__Context_15;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__MissingRequiredMsg_16;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__MissingRequiredSpec_17;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__V_23_23;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__V_24_24;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__V_33_33;
#line 1236 "det_report.m"
        MR_Word check_hlds__det_report__V_37_37;

#line 1236 "det_report.m"
        {
#line 1236 "det_report.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18, &check_hlds__det_report__ProcInfo_11);
        }
#line 1237 "det_report.m"
        {
#line 1237 "det_report.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__VarSet_12);
        }
#line 1238 "det_report.m"
        {
#line 1238 "det_report.m"
          check_hlds__det_report__VarStr_13 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_12, (MR_Integer) 0, check_hlds__det_report__RequiredVar_6);
        }
#line 1240 "det_report.m"
        {
#line 1240 "det_report.m"
          check_hlds__det_report__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_24_24, 0) = ((MR_Box) (check_hlds__det_report__VarStr_13));
#line 1240 "det_report.m"
        }
#line 1240 "det_report.m"
        {
#line 1240 "det_report.m"
          check_hlds__det_report__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_23_23, 0) = ((MR_Box) (check_hlds__det_report__V_24_24));
#line 1240 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[46])));
#line 1240 "det_report.m"
        }
#line 1240 "det_report.m"
        {
#line 1240 "det_report.m"
          check_hlds__det_report__MissingRequiredPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__MissingRequiredPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[99])));
#line 1240 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__MissingRequiredPieces_14, 1) = ((MR_Box) (check_hlds__det_report__V_23_23));
#line 1240 "det_report.m"
        }
#line 1244 "det_report.m"
        {
#line 1244 "det_report.m"
          check_hlds__det_report__Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_8);
        }
#line 1246 "det_report.m"
        {
#line 1246 "det_report.m"
          check_hlds__det_report__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (check_hlds__det_report__MissingRequiredPieces_14));
#line 1246 "det_report.m"
        }
#line 1246 "det_report.m"
        {
#line 1246 "det_report.m"
          check_hlds__det_report__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_32_32, 0) = ((MR_Box) (check_hlds__det_report__V_33_33));
#line 1246 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "det_report.m"
        }
#line 1245 "det_report.m"
        {
#line 1245 "det_report.m"
          check_hlds__det_report__MissingRequiredMsg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredMsg_16, 0) = ((MR_Box) (check_hlds__det_report__Context_15));
#line 1245 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredMsg_16, 1) = ((MR_Box) (check_hlds__det_report__V_32_32));
#line 1245 "det_report.m"
        }
#line 1248 "det_report.m"
        {
#line 1248 "det_report.m"
          check_hlds__det_report__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (check_hlds__det_report__MissingRequiredMsg_16));
#line 1248 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "det_report.m"
        }
#line 1247 "det_report.m"
        {
#line 1247 "det_report.m"
          check_hlds__det_report__MissingRequiredSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1247 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1247 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_17, 2) = ((MR_Box) (check_hlds__det_report__V_37_37));
#line 1247 "det_report.m"
        }
#line 1249 "det_report.m"
        {
#line 1249 "det_report.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__MissingRequiredSpec_17, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18, check_hlds__det_report__STATE_VARIABLE_DetInfo_19);
#line 1249 "det_report.m"
          return;
        }
#line 1236 "det_report.m"
      }
#line 1231 "det_report.m"
  }
#line 1227 "det_report.m"
}

#line 1201 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_for_cases_8_p_0(
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 1201 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 1201 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8)
#line 1201 "det_report.m"
{
#line 1205 "det_report.m"
  while (MR_TRUE)
#line 1205 "det_report.m"
    {
#line 1205 "det_report.m"
      /* tailcall optimized into a loop */
#line 1205 "det_report.m"
      {
#line 1205 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1205 "det_report.m"
        if ((check_hlds__det_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1206 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_8 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7;
#line 1205 "det_report.m"
        else
#line 1208 "det_report.m"
          {
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__4_4, (MR_Integer) 0)));
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__4_4, (MR_Integer) 1)));
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 0)));
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 1)));
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 2)));
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo0_28;
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_29;
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo_30;
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_33_33;
#line 1208 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_34_34;

#line 1210 "det_report.m"
            {
#line 1210 "det_report.m"
              check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__ModuleInfo0_28);
            }
#line 1211 "det_report.m"
            {
#line 1211 "det_report.m"
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__MainConsId_25, check_hlds__det_report__OtherConsIds_26, check_hlds__det_report__HeadVar__6_6, &check_hlds__det_report__InstMap1_29, check_hlds__det_report__ModuleInfo0_28, &check_hlds__det_report__ModuleInfo_30);
            }
#line 1213 "det_report.m"
            {
#line 1213 "det_report.m"
              check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_30, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__STATE_VARIABLE_DetInfo_33_33);
            }
#line 1215 "det_report.m"
            {
#line 1215 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_detism_6_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__Goal_27, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__InstMap1_29, check_hlds__det_report__STATE_VARIABLE_DetInfo_33_33, &check_hlds__det_report__STATE_VARIABLE_DetInfo_34_34);
            }
#line 1217 "det_report.m"
            /* direct tailcall eliminated */
#line 1217 "det_report.m"
            {
#line 1217 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__4__tmp_copy_4 = check_hlds__det_report__Cases_21;
#line 1217 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_34_34;

#line 1217 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_7;
#line 1217 "det_report.m"
              check_hlds__det_report__HeadVar__4_4 = check_hlds__det_report__HeadVar__4__tmp_copy_4;
#line 1217 "det_report.m"
            }
#line 1217 "det_report.m"
            continue;
#line 1208 "det_report.m"
          }
#line 1205 "det_report.m"
      }
#line 1205 "det_report.m"
      break;
#line 1205 "det_report.m"
    }
#line 1201 "det_report.m"
}

#line 1148 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__RequiredDetism_7,
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__CheckKind_9,
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1148 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25,
#line 1148 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_26)
#line 1148 "det_report.m"
{
#line 1152 "det_report.m"
  {
#line 1152 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1152 "det_report.m"
    MR_Word check_hlds__det_report__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
#line 1152 "det_report.m"
    MR_Word check_hlds__det_report__ActualDetism_14;
#line 1152 "det_report.m"
    MR_Word check_hlds__det_report__CompareResult_15;
#line 1153 "det_report.m"
    MR_Word check_hlds__det_report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));

#line 1154 "det_report.m"
    {
#line 1154 "det_report.m"
      check_hlds__det_report__ActualDetism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_13);
    }
#line 1155 "det_report.m"
    {
#line 1155 "det_report.m"
      parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__ActualDetism_14, check_hlds__det_report__RequiredDetism_7, &check_hlds__det_report__CompareResult_15);
    }
#line 1163 "det_report.m"
    if ((check_hlds__det_report__CheckKind_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1169 "det_report.m"
      if ((check_hlds__det_report__CompareResult_15 == (MR_Integer) 1))
#line 1169 "det_report.m"
        check_hlds__det_report__succeeded = MR_TRUE;
#line 1169 "det_report.m"
      else
#line 1169 "det_report.m"
      if ((check_hlds__det_report__CompareResult_15 == (MR_Integer) 0))
#line 1168 "det_report.m"
        check_hlds__det_report__succeeded = MR_TRUE;
#line 1169 "det_report.m"
      else
#line 1169 "det_report.m"
        check_hlds__det_report__succeeded = MR_FALSE;
#line 1163 "det_report.m"
    else
#line 1162 "det_report.m"
      check_hlds__det_report__succeeded = (check_hlds__det_report__CompareResult_15 == (MR_Integer) 1);
#line 1174 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1174 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_26 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25;
#line 1174 "det_report.m"
    else
#line 1187 "det_report.m"
      {
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__Context_18;
#line 1187 "det_report.m"
        MR_String check_hlds__det_report__RequiredDetismStr_19;
#line 1187 "det_report.m"
        MR_String check_hlds__det_report__ActualDetismStr_20;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__SubMsgs_21;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__Pieces_22;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__Msg_23;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__Spec_24;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_33_33;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_36_36;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_39_39;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_40_40;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_47_47;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_48_48;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__V_52_52;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_62;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_63;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__Actual_64;
#line 1187 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_65;

#line 1180 "det_report.m"
        if ((check_hlds__det_report__CheckKind_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "det_report.m"
          {
#line 1186 "det_report.m"
            check_hlds__det_report__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_13);
          }
#line 1180 "det_report.m"
        else
#line 1176 "det_report.m"
          {
#line 1176 "det_report.m"
            MR_Word check_hlds__det_report__ScopeGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CheckKind_9, (MR_Integer) 0)));

#line 1179 "det_report.m"
            {
#line 1179 "det_report.m"
              check_hlds__det_report__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_17);
            }
#line 1176 "det_report.m"
          }
#line 1188 "det_report.m"
        {
#line 1188 "det_report.m"
          check_hlds__det_report__RequiredDetismStr_19 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__RequiredDetism_7);
        }
#line 1189 "det_report.m"
        {
#line 1189 "det_report.m"
          check_hlds__det_report__ActualDetismStr_20 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__ActualDetism_14);
        }
#line 521 "det_report.m"
        check_hlds__det_report__GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));
#line 521 "det_report.m"
        check_hlds__det_report__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
#line 522 "det_report.m"
        {
#line 522 "det_report.m"
          check_hlds__det_report__Actual_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_63);
        }
#line 523 "det_report.m"
        {
#line 523 "det_report.m"
          parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__RequiredDetism_7, check_hlds__det_report__Actual_64, &check_hlds__det_report__CompareResult_65);
        }
#line 530 "det_report.m"
        if ((((check_hlds__det_report__CompareResult_65 == (MR_Integer) 3)) || ((check_hlds__det_report__CompareResult_65 == (MR_Integer) 0))))
#line 528 "det_report.m"
          {
#line 528 "det_report.m"
            check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_62, check_hlds__det_report__GoalInfo_63, check_hlds__det_report__InstMap0_10, check_hlds__det_report__RequiredDetism_7, check_hlds__det_report__Actual_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25, &check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28, &check_hlds__det_report__SubMsgs_21);
          }
#line 530 "det_report.m"
        else
#line 533 "det_report.m"
          {
#line 534 "det_report.m"
            check_hlds__det_report__SubMsgs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25;
#line 533 "det_report.m"
          }
#line 1193 "det_report.m"
        {
#line 1193 "det_report.m"
          check_hlds__det_report__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_32_32, 0) = ((MR_Box) (check_hlds__det_report__RequiredDetismStr_19));
#line 1193 "det_report.m"
        }
#line 1195 "det_report.m"
        {
#line 1195 "det_report.m"
          check_hlds__det_report__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_40_40, 0) = ((MR_Box) (check_hlds__det_report__ActualDetismStr_20));
#line 1195 "det_report.m"
        }
#line 1195 "det_report.m"
        {
#line 1195 "det_report.m"
          check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__V_40_40));
#line 1195 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[11])));
#line 1195 "det_report.m"
        }
#line 1194 "det_report.m"
        {
#line 1194 "det_report.m"
          check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[98])));
#line 1194 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 1194 "det_report.m"
        }
#line 1193 "det_report.m"
        {
#line 1193 "det_report.m"
          check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[53])));
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
#line 1193 "det_report.m"
        }
#line 1193 "det_report.m"
        {
#line 1193 "det_report.m"
          check_hlds__det_report__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 0) = ((MR_Box) (check_hlds__det_report__V_32_32));
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 1) = ((MR_Box) (check_hlds__det_report__V_33_33));
#line 1193 "det_report.m"
        }
#line 1192 "det_report.m"
        {
#line 1192 "det_report.m"
          check_hlds__det_report__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[97])));
#line 1192 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_22, 1) = ((MR_Box) (check_hlds__det_report__V_31_31));
#line 1192 "det_report.m"
        }
#line 1196 "det_report.m"
        {
#line 1196 "det_report.m"
          check_hlds__det_report__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__Pieces_22));
#line 1196 "det_report.m"
        }
#line 1196 "det_report.m"
        {
#line 1196 "det_report.m"
          check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1196 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "det_report.m"
        }
#line 1196 "det_report.m"
        {
#line 1196 "det_report.m"
          check_hlds__det_report__Msg_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_23, 0) = ((MR_Box) (check_hlds__det_report__Context_18));
#line 1196 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_23, 1) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 1196 "det_report.m"
        }
#line 1197 "det_report.m"
        {
#line 1197 "det_report.m"
          check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (check_hlds__det_report__Msg_23));
#line 1197 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__SubMsgs_21));
#line 1197 "det_report.m"
        }
#line 1197 "det_report.m"
        {
#line 1197 "det_report.m"
          check_hlds__det_report__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1197 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_24, 2) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 1197 "det_report.m"
        }
#line 1198 "det_report.m"
        {
#line 1198 "det_report.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__Spec_24, check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28, check_hlds__det_report__STATE_VARIABLE_DetInfo_26);
#line 1198 "det_report.m"
          return;
        }
#line 1187 "det_report.m"
      }
#line 1152 "det_report.m"
  }
#line 1148 "det_report.m"
}

#line 1041 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_6_p_0(
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__Reason_7,
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__SubGoal_8,
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_9,
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1041 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49,
#line 1041 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_50)
#line 1041 "det_report.m"
{
#line 1046 "det_report.m"
  {
#line 1046 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1046 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 0))))
#line 1131 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 2))))
#line 1134 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 1))))
#line 1135 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1133 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1132 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1136 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1107 "det_report.m"
      {
#line 1107 "det_report.m"
        MR_Word check_hlds__det_report__SubGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1107 "det_report.m"
        MR_Word check_hlds__det_report__Detism_35;
#line 1108 "det_report.m"
        MR_Word check_hlds__det_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));

#line 1109 "det_report.m"
        {
#line 1109 "det_report.m"
          check_hlds__det_report__Detism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_34);
        }
#line 1114 "det_report.m"
        if ((check_hlds__det_report__Detism_35 == (MR_Integer) 4))
#line 1112 "det_report.m"
          {
#line 1112 "det_report.m"
          }
#line 1114 "det_report.m"
        else
#line 1114 "det_report.m"
        if ((check_hlds__det_report__Detism_35 == (MR_Integer) 0))
#line 1111 "det_report.m"
          {
#line 1111 "det_report.m"
          }
#line 1114 "det_report.m"
        else
#line 1123 "det_report.m"
          {
#line 1127 "det_report.m"
            {
#line 1127 "det_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.reqscope_check_scope\'/6", (MR_String) "Loop control scope with strange determinism");
#line 1127 "det_report.m"
              return;
            }
#line 1123 "det_report.m"
          }
#line 1107 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1107 "det_report.m"
      }
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1050 "det_report.m"
      {
#line 1050 "det_report.m"
        MR_Word check_hlds__det_report__RequiredVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
#line 1050 "det_report.m"
        MR_Word check_hlds__det_report__SubGoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));
#line 1055 "det_report.m"
        MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1086 "det_report.m"
        MR_Word check_hlds__det_report__SwitchVar_16;
#line 1086 "det_report.m"
        MR_Word check_hlds__det_report__CanFail_17;
#line 1086 "det_report.m"
        MR_Word check_hlds__det_report__Cases_18;
#line 1057 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_96_96;

#line 1057 "det_report.m"
        check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__SubGoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1057 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1057 "det_report.m"
          {
#line 1057 "det_report.m"
            check_hlds__det_report__SwitchVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 1)));
#line 1057 "det_report.m"
            check_hlds__det_report__CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 2)));
#line 1057 "det_report.m"
            check_hlds__det_report__Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 3)));
#line 8489 "check_hlds.det_report.c"
            check_hlds__det_report__TypeInfo_96_96 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 1058 "det_report.m"
            {
#line 1058 "det_report.m"
              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_96_96, ((MR_Box) (check_hlds__det_report__SwitchVar_16)), ((MR_Box) (check_hlds__det_report__RequiredVar_13)));
            }
#line 1057 "det_report.m"
          }
#line 1086 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1062 "det_report.m"
          if ((check_hlds__det_report__CanFail_17 == (MR_Integer) 0))
#line 1063 "det_report.m"
            {
#line 1063 "det_report.m"
              MR_String check_hlds__det_report__VarStr_19;
#line 1063 "det_report.m"
              MR_Word check_hlds__det_report__MaybeMissingPieces_20;
#line 1063 "det_report.m"
              MR_Word check_hlds__det_report__SwitchPieces_22;
#line 1063 "det_report.m"
              MR_Word check_hlds__det_report__Context_23;
#line 1063 "det_report.m"
              MR_Word check_hlds__det_report__SwitchMsg_24;
#line 1063 "det_report.m"
              MR_Word check_hlds__det_report__SwitchSpec_25;
#line 1063 "det_report.m"
              MR_Word check_hlds__det_report__V_78_78;
#line 1063 "det_report.m"
              MR_Word check_hlds__det_report__V_79_79;
#line 1063 "det_report.m"
              MR_Word check_hlds__det_report__V_83_83;

#line 1064 "det_report.m"
              {
#line 1064 "det_report.m"
                check_hlds__det_report__find_missing_cons_ids_6_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__InstMap0_10, check_hlds__det_report__SwitchVar_16, check_hlds__det_report__Cases_18, &check_hlds__det_report__VarStr_19, &check_hlds__det_report__MaybeMissingPieces_20);
              }
#line 1072 "det_report.m"
              if ((check_hlds__det_report__MaybeMissingPieces_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1073 "det_report.m"
                {
#line 1073 "det_report.m"
                  MR_Word check_hlds__det_report__V_59_59;
#line 1073 "det_report.m"
                  MR_Word check_hlds__det_report__V_60_60;

#line 1075 "det_report.m"
                  {
#line 1075 "det_report.m"
                    check_hlds__det_report__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "det_report.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_report__V_60_60, 0) = ((MR_Box) (check_hlds__det_report__VarStr_19));
#line 1075 "det_report.m"
                  }
#line 1075 "det_report.m"
                  {
#line 1075 "det_report.m"
                    check_hlds__det_report__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_59_59, 0) = ((MR_Box) (check_hlds__det_report__V_60_60));
#line 1075 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[42])));
#line 1075 "det_report.m"
                  }
#line 1074 "det_report.m"
                  {
#line 1074 "det_report.m"
                    check_hlds__det_report__SwitchPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[94])));
#line 1074 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_22, 1) = ((MR_Box) (check_hlds__det_report__V_59_59));
#line 1074 "det_report.m"
                  }
#line 1073 "det_report.m"
                }
#line 1072 "det_report.m"
              else
#line 1067 "det_report.m"
                {
#line 1067 "det_report.m"
                  MR_Word check_hlds__det_report__MissingPieces_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeMissingPieces_20, (MR_Integer) 0)));
#line 1067 "det_report.m"
                  MR_Word check_hlds__det_report__V_70_70;
#line 1067 "det_report.m"
                  MR_Word check_hlds__det_report__V_71_71;
#line 1067 "det_report.m"
                  MR_Word check_hlds__det_report__V_72_72;
#line 1067 "det_report.m"
                  MR_Word check_hlds__det_report__V_75_75;

#line 1069 "det_report.m"
                  {
#line 1069 "det_report.m"
                    check_hlds__det_report__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "det_report.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_report__V_71_71, 0) = ((MR_Box) (check_hlds__det_report__VarStr_19));
#line 1069 "det_report.m"
                  }
#line 1071 "det_report.m"
                  {
#line 1071 "det_report.m"
                    check_hlds__det_report__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[96])));
#line 1071 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_75_75, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces_21));
#line 1071 "det_report.m"
                  }
#line 1070 "det_report.m"
                  {
#line 1070 "det_report.m"
                    check_hlds__det_report__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[95])));
#line 1070 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_72_72, 1) = ((MR_Box) (check_hlds__det_report__V_75_75));
#line 1070 "det_report.m"
                  }
#line 1069 "det_report.m"
                  {
#line 1069 "det_report.m"
                    check_hlds__det_report__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_70_70, 0) = ((MR_Box) (check_hlds__det_report__V_71_71));
#line 1069 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_70_70, 1) = ((MR_Box) (check_hlds__det_report__V_72_72));
#line 1069 "det_report.m"
                  }
#line 1068 "det_report.m"
                  {
#line 1068 "det_report.m"
                    check_hlds__det_report__SwitchPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[94])));
#line 1068 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_22, 1) = ((MR_Box) (check_hlds__det_report__V_70_70));
#line 1068 "det_report.m"
                  }
#line 1067 "det_report.m"
                }
#line 1079 "det_report.m"
              {
#line 1079 "det_report.m"
                check_hlds__det_report__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_9);
              }
#line 1081 "det_report.m"
              {
#line 1081 "det_report.m"
                check_hlds__det_report__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_79_79, 0) = ((MR_Box) (check_hlds__det_report__SwitchPieces_22));
#line 1081 "det_report.m"
              }
#line 1081 "det_report.m"
              {
#line 1081 "det_report.m"
                check_hlds__det_report__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 0) = ((MR_Box) (check_hlds__det_report__V_79_79));
#line 1081 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1081 "det_report.m"
              }
#line 1080 "det_report.m"
              {
#line 1080 "det_report.m"
                check_hlds__det_report__SwitchMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchMsg_24, 0) = ((MR_Box) (check_hlds__det_report__Context_23));
#line 1080 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchMsg_24, 1) = ((MR_Box) (check_hlds__det_report__V_78_78));
#line 1080 "det_report.m"
              }
#line 1083 "det_report.m"
              {
#line 1083 "det_report.m"
                check_hlds__det_report__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_83_83, 0) = ((MR_Box) (check_hlds__det_report__SwitchMsg_24));
#line 1083 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1083 "det_report.m"
              }
#line 1082 "det_report.m"
              {
#line 1082 "det_report.m"
                check_hlds__det_report__SwitchSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1082 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 2) = ((MR_Box) (check_hlds__det_report__V_83_83));
#line 1082 "det_report.m"
              }
#line 1084 "det_report.m"
              {
#line 1084 "det_report.m"
                check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__SwitchSpec_25, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1084 "det_report.m"
                return;
              }
#line 1063 "det_report.m"
            }
#line 1062 "det_report.m"
          else
#line 1061 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1086 "det_report.m"
        else
#line 1087 "det_report.m"
          {
#line 1087 "det_report.m"
            check_hlds__det_report__generate_warning_for_switch_var_if_missing_5_p_0(check_hlds__det_report__RequiredVar_13, check_hlds__det_report__SubGoal_8, check_hlds__det_report__ScopeGoalInfo_9, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1087 "det_report.m"
            return;
          }
#line 1050 "det_report.m"
      }
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1046 "det_report.m"
      {
#line 1046 "det_report.m"
        MR_Word check_hlds__det_report__RequiredDetism_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
#line 1046 "det_report.m"
        MR_Word check_hlds__det_report__V_87_87;

#line 1048 "det_report.m"
        {
#line 1048 "det_report.m"
          check_hlds__det_report__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_87_87, 0) = ((MR_Box) (check_hlds__det_report__ScopeGoalInfo_9));
#line 1048 "det_report.m"
        }
#line 1047 "det_report.m"
        {
#line 1047 "det_report.m"
          check_hlds__det_report__reqscope_check_goal_detism_6_p_0(check_hlds__det_report__RequiredDetism_12, check_hlds__det_report__SubGoal_8, check_hlds__det_report__V_87_87, check_hlds__det_report__InstMap0_10, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1047 "det_report.m"
          return;
        }
#line 1046 "det_report.m"
      }
#line 1046 "det_report.m"
    else
#line 1046 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1091 "det_report.m"
      {
#line 1091 "det_report.m"
        MR_Word check_hlds__det_report__RequiredDetism_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 2)));
#line 1091 "det_report.m"
        MR_Word check_hlds__det_report__RequiredVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
#line 1091 "det_report.m"
        MR_Word check_hlds__det_report__SubGoalExpr_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));
#line 1092 "det_report.m"
        MR_Word check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1102 "det_report.m"
        MR_Word check_hlds__det_report__SwitchVar_89;
#line 1102 "det_report.m"
        MR_Word check_hlds__det_report__Cases_90;
#line 1094 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_97_97;
#line 1094 "det_report.m"
        MR_Word check_hlds__det_report___CanFail_27;

#line 1094 "det_report.m"
        check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__SubGoalExpr_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_93, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1094 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1094 "det_report.m"
          {
#line 1094 "det_report.m"
            check_hlds__det_report__SwitchVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_93, (MR_Integer) 1)));
#line 1094 "det_report.m"
            check_hlds__det_report___CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_93, (MR_Integer) 2)));
#line 1094 "det_report.m"
            check_hlds__det_report__Cases_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_93, (MR_Integer) 3)));
#line 8774 "check_hlds.det_report.c"
            check_hlds__det_report__TypeInfo_97_97 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 1095 "det_report.m"
            {
#line 1095 "det_report.m"
              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_97_97, ((MR_Box) (check_hlds__det_report__SwitchVar_89)), ((MR_Box) (check_hlds__det_report__RequiredVar_92)));
            }
#line 1094 "det_report.m"
          }
#line 1102 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1097 "det_report.m"
          {
#line 1097 "det_report.m"
            MR_Word check_hlds__det_report__VarTypes_28;
#line 1097 "det_report.m"
            MR_Word check_hlds__det_report__SwitchVarType_29;

#line 1097 "det_report.m"
            {
#line 1097 "det_report.m"
              check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, &check_hlds__det_report__VarTypes_28);
            }
#line 1098 "det_report.m"
            {
#line 1098 "det_report.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_28, check_hlds__det_report__SwitchVar_89, &check_hlds__det_report__SwitchVarType_29);
            }
#line 1099 "det_report.m"
            {
#line 1099 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_detism_for_cases_8_p_0(check_hlds__det_report__RequiredDetism_91, check_hlds__det_report__SwitchVar_89, check_hlds__det_report__SwitchVarType_29, check_hlds__det_report__Cases_90, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__InstMap0_10, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1099 "det_report.m"
              return;
            }
#line 1097 "det_report.m"
          }
#line 1102 "det_report.m"
        else
#line 1103 "det_report.m"
          {
#line 1103 "det_report.m"
            check_hlds__det_report__generate_warning_for_switch_var_if_missing_5_p_0(check_hlds__det_report__RequiredVar_92, check_hlds__det_report__SubGoal_8, check_hlds__det_report__ScopeGoalInfo_9, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1103 "det_report.m"
            return;
          }
#line 1091 "det_report.m"
      }
#line 1046 "det_report.m"
    else
#line 1137 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1046 "det_report.m"
  }
#line 1041 "det_report.m"
}

#line 976 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_4_p_0(
#line 976 "det_report.m"
  MR_Word check_hlds__det_report__Goal_5,
#line 976 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_6,
#line 976 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75,
#line 976 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_76)
#line 976 "det_report.m"
{
#line 979 "det_report.m"
  while (MR_TRUE)
#line 979 "det_report.m"
    {
#line 979 "det_report.m"
      /* tailcall optimized into a loop */
#line 979 "det_report.m"
      {
#line 979 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;
#line 979 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_5, (MR_Integer) 0)));
#line 979 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_5, (MR_Integer) 1)));

#line 984 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 0))))
#line 999 "det_report.m"
          {
#line 999 "det_report.m"
            MR_Word check_hlds__det_report__SubGoal_22 = (MR_Word) MR_body(((MR_Word) check_hlds__det_report__GoalExpr_8), (MR_Integer) 0);

#line 1000 "det_report.m"
            /* direct tailcall eliminated */
#line 1000 "det_report.m"
            {
#line 1000 "det_report.m"
              MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_22;

#line 1000 "det_report.m"
              check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1000 "det_report.m"
            }
#line 1000 "det_report.m"
            continue;
#line 999 "det_report.m"
          }
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 2))))
#line 1035 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 1))))
#line 1020 "det_report.m"
          {
#line 1020 "det_report.m"
            MR_Word check_hlds__det_report__RHS_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 1020 "det_report.m"
            MR_Word check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)));
#line 1020 "det_report.m"
            MR_Word check_hlds__det_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 1020 "det_report.m"
            MR_Word check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 1020 "det_report.m"
            MR_Word check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 4)));

#line 1025 "det_report.m"
            if (((MR_tag((MR_Word) check_hlds__det_report__RHS_37)) == (MR_mktag((MR_Integer) 1))))
#line 1023 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1025 "det_report.m"
            else
#line 1025 "det_report.m"
            if (((MR_tag((MR_Word) check_hlds__det_report__RHS_37)) == (MR_mktag((MR_Integer) 2))))
#line 1027 "det_report.m"
              {
#line 1027 "det_report.m"
                MR_Word check_hlds__det_report__Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 3)));
#line 1027 "det_report.m"
                MR_Word check_hlds__det_report__Modes_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 4)));
#line 1027 "det_report.m"
                MR_Word check_hlds__det_report__LambdaGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 6)));
#line 1027 "det_report.m"
                MR_Word check_hlds__det_report__VarsModes_54;
#line 1027 "det_report.m"
                MR_Word check_hlds__det_report__ModuleInfo_55;
#line 1027 "det_report.m"
                MR_Word check_hlds__det_report__LambdaInstMap0_56;
#line 1026 "det_report.m"
                MR_Word check_hlds__det_report___Purity_45 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1026 "det_report.m"
                MR_Word check_hlds__det_report___Groundness_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1026 "det_report.m"
                MR_Word check_hlds__det_report___PorF_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1026 "det_report.m"
                MR_Word check_hlds__det_report___LambdaNonLocals_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 2)));
#line 1026 "det_report.m"
                MR_Word check_hlds__det_report___Detism_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 5)));

#line 1028 "det_report.m"
                {
#line 1028 "det_report.m"
                  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__det_report__Vars_50, check_hlds__det_report__Modes_51, &check_hlds__det_report__VarsModes_54);
                }
#line 1029 "det_report.m"
                {
#line 1029 "det_report.m"
                  check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__ModuleInfo_55);
                }
#line 1030 "det_report.m"
                {
#line 1030 "det_report.m"
                  check_hlds__det_report__lambda_update_instmap_4_p_0(check_hlds__det_report__VarsModes_54, check_hlds__det_report__ModuleInfo_55, check_hlds__det_report__InstMap0_6, &check_hlds__det_report__LambdaInstMap0_56);
                }
#line 1032 "det_report.m"
                /* direct tailcall eliminated */
#line 1032 "det_report.m"
                {
#line 1032 "det_report.m"
                  MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__LambdaGoal_53;
#line 1032 "det_report.m"
                  MR_Word check_hlds__det_report__InstMap0__tmp_copy_6 = check_hlds__det_report__LambdaInstMap0_56;

#line 1032 "det_report.m"
                  check_hlds__det_report__InstMap0_6 = check_hlds__det_report__InstMap0__tmp_copy_6;
#line 1032 "det_report.m"
                  check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1032 "det_report.m"
                }
#line 1032 "det_report.m"
                continue;
#line 1027 "det_report.m"
              }
#line 1025 "det_report.m"
            else
#line 1022 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1020 "det_report.m"
          }
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1037 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 982 "det_report.m"
          {
#line 982 "det_report.m"
            MR_Word check_hlds__det_report__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 982 "det_report.m"
            MR_Word check_hlds__det_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 983 "det_report.m"
            {
#line 983 "det_report.m"
              check_hlds__det_report__reqscope_check_conj_4_p_0(check_hlds__det_report__Goals_11, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 983 "det_report.m"
              return;
            }
#line 982 "det_report.m"
          }
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 985 "det_report.m"
          {
#line 985 "det_report.m"
            MR_Word check_hlds__det_report__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 986 "det_report.m"
            {
#line 986 "det_report.m"
              check_hlds__det_report__reqscope_check_disj_4_p_0(check_hlds__det_report__Goals_93, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 986 "det_report.m"
              return;
            }
#line 985 "det_report.m"
          }
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1036 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 993 "det_report.m"
          {
#line 993 "det_report.m"
            MR_Word check_hlds__det_report__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 993 "det_report.m"
            MR_Word check_hlds__det_report__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 993 "det_report.m"
            MR_Word check_hlds__det_report__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 4)));
#line 993 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_21;
#line 993 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87;
#line 993 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88;
#line 993 "det_report.m"
            MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 994 "det_report.m"
            {
#line 994 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Cond_18, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87);
            }
#line 995 "det_report.m"
            {
#line 995 "det_report.m"
              hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Cond_18, check_hlds__det_report__InstMap0_6, &check_hlds__det_report__InstMap1_21);
            }
#line 996 "det_report.m"
            {
#line 996 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Then_19, check_hlds__det_report__InstMap1_21, check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87, &check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88);
            }
#line 997 "det_report.m"
            /* direct tailcall eliminated */
#line 997 "det_report.m"
            {
#line 997 "det_report.m"
              MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__Else_20;
#line 997 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88;

#line 997 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75;
#line 997 "det_report.m"
              check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 997 "det_report.m"
            }
#line 997 "det_report.m"
            continue;
#line 993 "det_report.m"
          }
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1002 "det_report.m"
          {
#line 1002 "det_report.m"
            MR_Word check_hlds__det_report__Reason_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 1002 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84;
#line 1002 "det_report.m"
            MR_Word check_hlds__det_report__SubGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));

#line 1003 "det_report.m"
            {
#line 1003 "det_report.m"
              check_hlds__det_report__reqscope_check_scope_6_p_0(check_hlds__det_report__Reason_23, check_hlds__det_report__SubGoal_94, check_hlds__det_report__GoalInfo_9, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84);
            }
#line 1004 "det_report.m"
            /* direct tailcall eliminated */
#line 1004 "det_report.m"
            {
#line 1004 "det_report.m"
              MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_94;
#line 1004 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84;

#line 1004 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75;
#line 1004 "det_report.m"
              check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1004 "det_report.m"
            }
#line 1004 "det_report.m"
            continue;
#line 1002 "det_report.m"
          }
#line 984 "det_report.m"
        else
#line 984 "det_report.m"
        if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1006 "det_report.m"
          {
#line 1006 "det_report.m"
            MR_Word check_hlds__det_report__ShortHand_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 1011 "det_report.m"
            if (((MR_tag((MR_Word) check_hlds__det_report__ShortHand_24)) == (MR_mktag((MR_Integer) 1))))
#line 1008 "det_report.m"
              {
#line 1008 "det_report.m"
                MR_Word check_hlds__det_report__MainGoal_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 4)));
#line 1008 "det_report.m"
                MR_Word check_hlds__det_report__OrElseGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 5)));
#line 1008 "det_report.m"
                MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82;
#line 1008 "det_report.m"
                MR_Word check_hlds__det_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 0)));
#line 1008 "det_report.m"
                MR_Word check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 1)));
#line 1008 "det_report.m"
                MR_Word check_hlds__det_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 2)));
#line 1008 "det_report.m"
                MR_Word check_hlds__det_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 3)));
#line 1008 "det_report.m"
                MR_Word check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 6)));

#line 1009 "det_report.m"
                {
#line 1009 "det_report.m"
                  check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__MainGoal_29, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82);
                }
#line 1010 "det_report.m"
                {
#line 1010 "det_report.m"
                  check_hlds__det_report__reqscope_check_disj_4_p_0(check_hlds__det_report__OrElseGoals_30, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 1010 "det_report.m"
                  return;
                }
#line 1008 "det_report.m"
              }
#line 1011 "det_report.m"
            else
#line 1011 "det_report.m"
            if (((MR_tag((MR_Word) check_hlds__det_report__ShortHand_24)) == (MR_mktag((MR_Integer) 0))))
#line 1015 "det_report.m"
              {
#line 1017 "det_report.m"
                {
#line 1017 "det_report.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.reqscope_check_goal\'/4", (MR_String) "bi_implication");
#line 1017 "det_report.m"
                  return;
                }
#line 1015 "det_report.m"
              }
#line 1011 "det_report.m"
            else
#line 1012 "det_report.m"
              {
#line 1012 "det_report.m"
                MR_Word check_hlds__det_report__SubGoal_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 2)));
#line 1012 "det_report.m"
                MR_Word check_hlds__det_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 0)));
#line 1012 "det_report.m"
                MR_Word check_hlds__det_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 1)));

#line 1013 "det_report.m"
                /* direct tailcall eliminated */
#line 1013 "det_report.m"
                {
#line 1013 "det_report.m"
                  MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_95;

#line 1013 "det_report.m"
                  check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1013 "det_report.m"
                }
#line 1013 "det_report.m"
                continue;
#line 1012 "det_report.m"
              }
#line 1006 "det_report.m"
          }
#line 984 "det_report.m"
        else
#line 988 "det_report.m"
          {
#line 988 "det_report.m"
            MR_Word check_hlds__det_report__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 988 "det_report.m"
            MR_Word check_hlds__det_report__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 988 "det_report.m"
            MR_Word check_hlds__det_report__VarTypes_15;
#line 988 "det_report.m"
            MR_Word check_hlds__det_report__VarType_16;
#line 988 "det_report.m"
            MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));

#line 989 "det_report.m"
            {
#line 989 "det_report.m"
              check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__VarTypes_15);
            }
#line 990 "det_report.m"
            {
#line 990 "det_report.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_15, check_hlds__det_report__Var_12, &check_hlds__det_report__VarType_16);
            }
#line 991 "det_report.m"
            {
#line 991 "det_report.m"
              check_hlds__det_report__reqscope_check_switch_6_p_0(check_hlds__det_report__Var_12, check_hlds__det_report__VarType_16, check_hlds__det_report__Cases_14, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 991 "det_report.m"
              return;
            }
#line 988 "det_report.m"
          }
#line 979 "det_report.m"
      }
#line 979 "det_report.m"
      break;
#line 979 "det_report.m"
    }
#line 976 "det_report.m"
}

#line 956 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_2,
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 956 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 956 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
#line 956 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__7_7)
#line 956 "det_report.m"
{
#line 960 "det_report.m"
  {
#line 960 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 960 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "det_report.m"
      {
#line 960 "det_report.m"
        *check_hlds__det_report__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 960 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 960 "det_report.m"
      }
#line 960 "det_report.m"
    else
#line 962 "det_report.m"
      {
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_21;
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_22;
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25;
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_14, (MR_Integer) 0)));
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_14, (MR_Integer) 1)));
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__Actual_38;
#line 962 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_39;

#line 522 "det_report.m"
        {
#line 522 "det_report.m"
          check_hlds__det_report__Actual_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_37);
        }
#line 523 "det_report.m"
        {
#line 523 "det_report.m"
          parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__Actual_38, &check_hlds__det_report__CompareResult_39);
        }
#line 530 "det_report.m"
        if ((((check_hlds__det_report__CompareResult_39 == (MR_Integer) 3)) || ((check_hlds__det_report__CompareResult_39 == (MR_Integer) 0))))
#line 528 "det_report.m"
          {
#line 528 "det_report.m"
            check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_36, check_hlds__det_report__GoalInfo_37, check_hlds__det_report__InstMap0_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__Actual_38, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25, &check_hlds__det_report__Msgs1_21);
          }
#line 530 "det_report.m"
        else
#line 533 "det_report.m"
          {
#line 534 "det_report.m"
            check_hlds__det_report__Msgs1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 533 "det_report.m"
          }
#line 967 "det_report.m"
        {
#line 967 "det_report.m"
          check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(check_hlds__det_report__Goals_15, check_hlds__det_report__InstMap0_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25, check_hlds__det_report__STATE_VARIABLE_DetInfo_6, &check_hlds__det_report__Msgs2_22);
        }
#line 969 "det_report.m"
        {
#line 969 "det_report.m"
          *check_hlds__det_report__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_21, check_hlds__det_report__Msgs2_22);
        }
#line 962 "det_report.m"
      }
#line 960 "det_report.m"
  }
#line 956 "det_report.m"
}

#line 951 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
#line 951 "det_report.m"
  MR_Word check_hlds__det_report__ConsId_3,
#line 951 "det_report.m"
  MR_Word * check_hlds__det_report__Match_4)
#line 951 "det_report.m"
{
#line 953 "det_report.m"
  {
#line 953 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 954 "det_report.m"
    {
#line 954 "det_report.m"
      MR_Word base;
#line 954 "det_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 954 "det_report.m"
      *check_hlds__det_report__Match_4 = base;
#line 954 "det_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__ConsId_3));
#line 954 "det_report.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "det_report.m"
    }
#line 953 "det_report.m"
  }
#line 951 "det_report.m"
}

#line 913 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
#line 913 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 913 "det_report.m"
  MR_Word check_hlds__det_report__SwitchVarSynonyms_2,
#line 913 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 913 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 913 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__5_5,
#line 913 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__6_6)
#line 913 "det_report.m"
{
#line 917 "det_report.m"
  {
#line 917 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 917 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "det_report.m"
      {
#line 917 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 917 "det_report.m"
          {
#line 917 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 917 "det_report.m"
              {
#line 917 "det_report.m"
                *check_hlds__det_report__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 917 "det_report.m"
                *check_hlds__det_report__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 917 "det_report.m"
                check_hlds__det_report__succeeded = MR_TRUE;
#line 917 "det_report.m"
              }
#line 917 "det_report.m"
          }
#line 917 "det_report.m"
      }
#line 917 "det_report.m"
    else
#line 919 "det_report.m"
      {
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_40_40;
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__Disjunct_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__Disjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Disjunct_8, (MR_Integer) 0)));
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Disjunct_8, (MR_Integer) 1)));
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__Unification_20;
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__Var_22;
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_23;
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__ArgVars_24;
#line 921 "det_report.m"
        MR_Word check_hlds__det_report__V_17_17;
#line 921 "det_report.m"
        MR_Word check_hlds__det_report__V_18_18;
#line 921 "det_report.m"
        MR_Word check_hlds__det_report__V_19_19;
#line 921 "det_report.m"
        MR_Word check_hlds__det_report__V_21_21;
#line 922 "det_report.m"
        MR_Word check_hlds__det_report__V_25_25;
#line 922 "det_report.m"
        MR_Word check_hlds__det_report__V_26_26;
#line 922 "det_report.m"
        MR_Word check_hlds__det_report__V_27_27;
#line 925 "det_report.m"
        MR_Word check_hlds__det_report__MainConsId_28;

#line 921 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
#line 921 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 921 "det_report.m"
          {
#line 921 "det_report.m"
            check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 0)));
#line 921 "det_report.m"
            check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 1)));
#line 921 "det_report.m"
            check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 2)));
#line 921 "det_report.m"
            check_hlds__det_report__Unification_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 3)));
#line 921 "det_report.m"
            check_hlds__det_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 4)));
#line 922 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_20)) == (MR_mktag((MR_Integer) 1)));
#line 922 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 922 "det_report.m"
              {
#line 922 "det_report.m"
                check_hlds__det_report__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 0)));
#line 922 "det_report.m"
                check_hlds__det_report__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 1)));
#line 922 "det_report.m"
                check_hlds__det_report__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 2)));
#line 922 "det_report.m"
                check_hlds__det_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 3)));
#line 922 "det_report.m"
                check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 4)));
#line 922 "det_report.m"
                check_hlds__det_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 5)));
#line 9506 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_40_40 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 923 "det_report.m"
                {
#line 923 "det_report.m"
                  check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_40_40, ((MR_Box) (check_hlds__det_report__Var_22)), check_hlds__det_report__SwitchVarSynonyms_2);
                }
#line 919 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 919 "det_report.m"
                  {
#line 925 "det_report.m"
                    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 925 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 925 "det_report.m"
                      {
#line 925 "det_report.m"
                        check_hlds__det_report__MainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 926 "det_report.m"
                        {
#line 926 "det_report.m"
                          check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__ConsId_23, check_hlds__det_report__MainConsId_28);
                        }
#line 925 "det_report.m"
                      }
#line 931 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 929 "det_report.m"
                      {
#line 929 "det_report.m"
                        MR_Word check_hlds__det_report__TypeInfo_45_45;
#line 929 "det_report.m"
                        MR_Word check_hlds__det_report__V_37_37;
#line 929 "det_report.m"
                        MR_Word check_hlds__det_report__V_38_38;
#line 929 "det_report.m"
                        MR_Word check_hlds__det_report__V_43_43;

#line 928 "det_report.m"
                        {
#line 928 "det_report.m"
                          check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_9, check_hlds__det_report__SwitchVarSynonyms_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__V_43_43, check_hlds__det_report__HeadVar__6_6);
                        }
#line 929 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 929 "det_report.m"
                          {
#line 9554 "check_hlds.det_report.c"
                            check_hlds__det_report__TypeInfo_45_45 = (MR_Word) &check_hlds__det_report_scalar_common_2[38];
#line 928 "det_report.m"
                            {
#line 928 "det_report.m"
                              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_45_45, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (check_hlds__det_report__V_43_43)));
                            }
#line 929 "det_report.m"
                            if (check_hlds__det_report__succeeded)
#line 929 "det_report.m"
                              {
#line 930 "det_report.m"
                                {
#line 930 "det_report.m"
                                  check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 930 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_24));
#line 930 "det_report.m"
                                }
#line 930 "det_report.m"
                                {
#line 930 "det_report.m"
                                  check_hlds__det_report__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 930 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (check_hlds__det_report__ConsId_23));
#line 930 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 930 "det_report.m"
                                }
#line 930 "det_report.m"
                                {
#line 930 "det_report.m"
                                  MR_Word base;
#line 930 "det_report.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 930 "det_report.m"
                                  *check_hlds__det_report__HeadVar__5_5 = base;
#line 930 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_37_37));
#line 930 "det_report.m"
                                }
#line 930 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 929 "det_report.m"
                              }
#line 929 "det_report.m"
                          }
#line 929 "det_report.m"
                      }
#line 931 "det_report.m"
                    else
#line 947 "det_report.m"
                      {
#line 947 "det_report.m"
                        MR_Word check_hlds__det_report__TypeCtorInfo_42_42;
#line 947 "det_report.m"
                        MR_Word check_hlds__det_report__LeftOverConsIds_29;
#line 947 "det_report.m"
                        MR_Word check_hlds__det_report__LeftOverMatches_30;
#line 947 "det_report.m"
                        MR_Word check_hlds__det_report__NonLocals_31;
#line 947 "det_report.m"
                        MR_Word check_hlds__det_report__ArgVarsSet_32;
#line 947 "det_report.m"
                        MR_Word check_hlds__det_report__MaybeArgVars_34;
#line 947 "det_report.m"
                        MR_Word check_hlds__det_report__V_39_39;
#line 939 "det_report.m"
                        MR_Word check_hlds__det_report__NonLocalArgVarsSet_33;

#line 932 "det_report.m"
                        {
#line 932 "det_report.m"
                          check_hlds__det_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__HeadVar__4_4, ((MR_Box) (check_hlds__det_report__ConsId_23)), &check_hlds__det_report__LeftOverConsIds_29);
                        }
#line 947 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 947 "det_report.m"
                          {
#line 934 "det_report.m"
                            {
#line 934 "det_report.m"
                              check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_9, check_hlds__det_report__SwitchVarSynonyms_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__LeftOverConsIds_29, check_hlds__det_report__HeadVar__5_5, &check_hlds__det_report__LeftOverMatches_30);
                            }
#line 947 "det_report.m"
                            if (check_hlds__det_report__succeeded)
#line 947 "det_report.m"
                              {
#line 936 "det_report.m"
                                {
#line 936 "det_report.m"
                                  check_hlds__det_report__NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_report__GoalInfo_16);
                                }
#line 9647 "check_hlds.det_report.c"
                                check_hlds__det_report__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 937 "det_report.m"
                                {
#line 937 "det_report.m"
                                  parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__ArgVars_24, &check_hlds__det_report__ArgVarsSet_32);
                                }
#line 939 "det_report.m"
                                {
#line 939 "det_report.m"
                                  parse_tree__set_of_var__intersect_3_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__NonLocals_31, check_hlds__det_report__ArgVarsSet_32, &check_hlds__det_report__NonLocalArgVarsSet_33);
                                }
#line 940 "det_report.m"
                                {
#line 940 "det_report.m"
                                  check_hlds__det_report__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__NonLocalArgVarsSet_33);
                                }
#line 943 "det_report.m"
                                if (check_hlds__det_report__succeeded)
#line 942 "det_report.m"
                                  {
#line 942 "det_report.m"
                                    check_hlds__det_report__MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 942 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeArgVars_34, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_24));
#line 942 "det_report.m"
                                  }
#line 943 "det_report.m"
                                else
#line 944 "det_report.m"
                                  check_hlds__det_report__MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 946 "det_report.m"
                                {
#line 946 "det_report.m"
                                  check_hlds__det_report__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 946 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__ConsId_23));
#line 946 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__MaybeArgVars_34));
#line 946 "det_report.m"
                                }
#line 946 "det_report.m"
                                {
#line 946 "det_report.m"
                                  MR_Word base;
#line 946 "det_report.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "det_report.m"
                                  *check_hlds__det_report__HeadVar__6_6 = base;
#line 946 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 946 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__LeftOverMatches_30));
#line 946 "det_report.m"
                                }
#line 946 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 947 "det_report.m"
                              }
#line 947 "det_report.m"
                          }
#line 947 "det_report.m"
                      }
#line 919 "det_report.m"
                  }
#line 922 "det_report.m"
              }
#line 921 "det_report.m"
          }
#line 919 "det_report.m"
      }
#line 917 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 917 "det_report.m"
  }
#line 913 "det_report.m"
}

#line 859 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
#line 859 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 859 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 859 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2)
#line 859 "det_report.m"
{
#line 859 "det_report.m"
  {
#line 859 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 859 "det_report.m"
    MR_Word check_hlds__det_report__conv0_Match_4;

#line 859 "det_report.m"
    {
#line 859 "det_report.m"
      check_hlds__det_report__make_switch_match_no_args_2_p_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), &check_hlds__det_report__conv0_Match_4);
    }
#line 859 "det_report.m"
    *check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_Match_4));
#line 859 "det_report.m"
  }
#line 859 "det_report.m"
}

#line 852 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
#line 852 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 852 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2,
#line 852 "det_report.m"
  MR_Word check_hlds__det_report__MainConsId_3,
#line 852 "det_report.m"
  MR_Word check_hlds__det_report__OtherConsIds_4,
#line 852 "det_report.m"
  MR_Word * check_hlds__det_report__MainMatch_5,
#line 852 "det_report.m"
  MR_Word * check_hlds__det_report__OtherMatches_6)
#line 852 "det_report.m"
{
#line 857 "det_report.m"
  while (MR_TRUE)
#line 857 "det_report.m"
    {
#line 857 "det_report.m"
      /* tailcall optimized into a loop */
#line 857 "det_report.m"
      {
#line 857 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 857 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 857 "det_report.m"
          {
#line 954 "det_report.m"
            {
#line 954 "det_report.m"
              MR_Word base;
#line 954 "det_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 954 "det_report.m"
              *check_hlds__det_report__MainMatch_5 = base;
#line 954 "det_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 954 "det_report.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "det_report.m"
            }
#line 859 "det_report.m"
            {
#line 859 "det_report.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0, (MR_Word) &check_hlds__det_report_scalar_common_1[3], check_hlds__det_report__OtherConsIds_4, check_hlds__det_report__OtherMatches_6);
#line 859 "det_report.m"
              return;
            }
#line 857 "det_report.m"
          }
#line 857 "det_report.m"
        else
#line 861 "det_report.m"
          {
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__Conjunct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__Conjuncts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Conjunct_13, (MR_Integer) 0)));
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Conjunct_13, (MR_Integer) 1)));
#line 881 "det_report.m"
            MR_Word check_hlds__det_report__ArgVars_28;
#line 864 "det_report.m"
            MR_Word check_hlds__det_report__TypeInfo_61_61;
#line 864 "det_report.m"
            MR_Word check_hlds__det_report__Unification_25;
#line 864 "det_report.m"
            MR_Word check_hlds__det_report__Var_27;
#line 864 "det_report.m"
            MR_Word check_hlds__det_report__V_64_64;
#line 864 "det_report.m"
            MR_Word check_hlds__det_report__V_22_22;
#line 864 "det_report.m"
            MR_Word check_hlds__det_report__V_23_23;
#line 864 "det_report.m"
            MR_Word check_hlds__det_report__V_24_24;
#line 864 "det_report.m"
            MR_Word check_hlds__det_report__V_26_26;
#line 865 "det_report.m"
            MR_Word check_hlds__det_report__V_29_29;
#line 865 "det_report.m"
            MR_Word check_hlds__det_report__V_30_30;
#line 865 "det_report.m"
            MR_Word check_hlds__det_report__V_31_31;

#line 864 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 1)));
#line 864 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 864 "det_report.m"
              {
#line 864 "det_report.m"
                check_hlds__det_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)));
#line 864 "det_report.m"
                check_hlds__det_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 864 "det_report.m"
                check_hlds__det_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 2)));
#line 864 "det_report.m"
                check_hlds__det_report__Unification_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 3)));
#line 864 "det_report.m"
                check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 4)));
#line 865 "det_report.m"
                check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_25)) == (MR_mktag((MR_Integer) 1)));
#line 865 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 865 "det_report.m"
                  {
#line 865 "det_report.m"
                    check_hlds__det_report__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 0)));
#line 865 "det_report.m"
                    check_hlds__det_report__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 1)));
#line 865 "det_report.m"
                    check_hlds__det_report__ArgVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 2)));
#line 865 "det_report.m"
                    check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 3)));
#line 865 "det_report.m"
                    check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 4)));
#line 865 "det_report.m"
                    check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 5)));
#line 865 "det_report.m"
                    {
#line 865 "det_report.m"
                      check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__MainConsId_3, check_hlds__det_report__V_64_64);
                    }
#line 864 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 864 "det_report.m"
                      {
#line 9890 "check_hlds.det_report.c"
                        check_hlds__det_report__TypeInfo_61_61 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 866 "det_report.m"
                        {
#line 866 "det_report.m"
                          check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_61_61, ((MR_Box) (check_hlds__det_report__Var_27)), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2);
                        }
#line 864 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 867 "det_report.m"
                          check_hlds__det_report__succeeded = (check_hlds__det_report__OtherConsIds_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "det_report.m"
                      }
#line 865 "det_report.m"
                  }
#line 864 "det_report.m"
              }
#line 881 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 869 "det_report.m"
              {
#line 869 "det_report.m"
                MR_Word check_hlds__det_report__TypeCtorInfo_62_62;
#line 869 "det_report.m"
                MR_Word check_hlds__det_report__NonLocals_32;
#line 869 "det_report.m"
                MR_Word check_hlds__det_report__ArgVarsSet_33;
#line 869 "det_report.m"
                MR_Word check_hlds__det_report__MaybeArgVars_35;
#line 872 "det_report.m"
                MR_Word check_hlds__det_report__NonLocalArgVarsSet_34;

#line 869 "det_report.m"
                {
#line 869 "det_report.m"
                  check_hlds__det_report__NonLocals_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_report__GoalInfo_21);
                }
#line 9927 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 870 "det_report.m"
                {
#line 870 "det_report.m"
                  check_hlds__det_report__ArgVarsSet_33 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__ArgVars_28);
                }
#line 872 "det_report.m"
                {
#line 872 "det_report.m"
                  parse_tree__set_of_var__intersect_3_p_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__NonLocals_32, check_hlds__det_report__ArgVarsSet_33, &check_hlds__det_report__NonLocalArgVarsSet_34);
                }
#line 873 "det_report.m"
                {
#line 873 "det_report.m"
                  check_hlds__det_report__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__NonLocalArgVarsSet_34);
                }
#line 876 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 875 "det_report.m"
                  {
#line 875 "det_report.m"
                    check_hlds__det_report__MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 875 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeArgVars_35, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_28));
#line 875 "det_report.m"
                  }
#line 876 "det_report.m"
                else
#line 877 "det_report.m"
                  check_hlds__det_report__MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "det_report.m"
                {
#line 879 "det_report.m"
                  MR_Word base;
#line 879 "det_report.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "det_report.m"
                  *check_hlds__det_report__MainMatch_5 = base;
#line 879 "det_report.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 879 "det_report.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_report__MaybeArgVars_35));
#line 879 "det_report.m"
                }
#line 880 "det_report.m"
                *check_hlds__det_report__OtherMatches_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 869 "det_report.m"
              }
#line 881 "det_report.m"
            else
#line 888 "det_report.m"
              {
#line 888 "det_report.m"
                MR_Word check_hlds__det_report__MainMatch0_37;
#line 888 "det_report.m"
                MR_Word check_hlds__det_report__OtherMatches0_38;
#line 882 "det_report.m"
                MR_Word check_hlds__det_report__Disjuncts_36;
#line 882 "det_report.m"
                MR_Word check_hlds__det_report__V_46_46;
#line 882 "det_report.m"
                MR_Word check_hlds__det_report__V_47_47;

#line 882 "det_report.m"
                check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 882 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 882 "det_report.m"
                  {
#line 882 "det_report.m"
                    check_hlds__det_report__Disjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 884 "det_report.m"
                    {
#line 884 "det_report.m"
                      check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 884 "det_report.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 884 "det_report.m"
                    }
#line 883 "det_report.m"
                    {
#line 883 "det_report.m"
                      check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_36, check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2, check_hlds__det_report__V_46_46, check_hlds__det_report__OtherConsIds_4, &check_hlds__det_report__V_47_47, &check_hlds__det_report__OtherMatches0_38);
                    }
#line 882 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 882 "det_report.m"
                      {
#line 884 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 884 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 884 "det_report.m"
                          check_hlds__det_report__MainMatch0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, (MR_Integer) 0)));
#line 882 "det_report.m"
                      }
#line 882 "det_report.m"
                  }
#line 888 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 886 "det_report.m"
                  {
#line 886 "det_report.m"
                    *check_hlds__det_report__MainMatch_5 = check_hlds__det_report__MainMatch0_37;
#line 887 "det_report.m"
                    *check_hlds__det_report__OtherMatches_6 = check_hlds__det_report__OtherMatches0_38;
#line 886 "det_report.m"
                  }
#line 888 "det_report.m"
                else
#line 897 "det_report.m"
                  {
#line 897 "det_report.m"
                    MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54;
#line 895 "det_report.m"
                    MR_Word check_hlds__det_report__ToVar_43;
#line 890 "det_report.m"
                    MR_Word check_hlds__det_report__TypeInfo_63_63;
#line 890 "det_report.m"
                    MR_Word check_hlds__det_report__FromVar_44;
#line 890 "det_report.m"
                    MR_Word check_hlds__det_report__Unification_51;
#line 890 "det_report.m"
                    MR_Word check_hlds__det_report__V_39_39;
#line 890 "det_report.m"
                    MR_Word check_hlds__det_report__V_40_40;
#line 890 "det_report.m"
                    MR_Word check_hlds__det_report__V_41_41;
#line 890 "det_report.m"
                    MR_Word check_hlds__det_report__V_42_42;

#line 890 "det_report.m"
                    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 1)));
#line 890 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 890 "det_report.m"
                      {
#line 890 "det_report.m"
                        check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)));
#line 890 "det_report.m"
                        check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 890 "det_report.m"
                        check_hlds__det_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 2)));
#line 890 "det_report.m"
                        check_hlds__det_report__Unification_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 3)));
#line 890 "det_report.m"
                        check_hlds__det_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 4)));
#line 891 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_51)) == (MR_mktag((MR_Integer) 2)));
#line 891 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 891 "det_report.m"
                          {
#line 891 "det_report.m"
                            check_hlds__det_report__ToVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__Unification_51, (MR_Integer) 0)));
#line 891 "det_report.m"
                            check_hlds__det_report__FromVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__Unification_51, (MR_Integer) 1)));
#line 10085 "check_hlds.det_report.c"
                            check_hlds__det_report__TypeInfo_63_63 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 892 "det_report.m"
                            {
#line 892 "det_report.m"
                              check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_63_63, ((MR_Box) (check_hlds__det_report__FromVar_44)), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2);
                            }
#line 891 "det_report.m"
                          }
#line 890 "det_report.m"
                      }
#line 895 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 894 "det_report.m"
                      {
#line 894 "det_report.m"
                        check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54, 0) = ((MR_Box) (check_hlds__det_report__ToVar_43));
#line 894 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2));
#line 894 "det_report.m"
                      }
#line 895 "det_report.m"
                    else
#line 895 "det_report.m"
                      check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2;
#line 898 "det_report.m"
                    /* direct tailcall eliminated */
#line 898 "det_report.m"
                    {
#line 898 "det_report.m"
                      MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Conjuncts_14;
#line 898 "det_report.m"
                      MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54;

#line 898 "det_report.m"
                      check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0__tmp_copy_2;
#line 898 "det_report.m"
                      check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 898 "det_report.m"
                    }
#line 898 "det_report.m"
                    continue;
#line 897 "det_report.m"
                  }
#line 888 "det_report.m"
              }
#line 861 "det_report.m"
          }
#line 857 "det_report.m"
      }
#line 857 "det_report.m"
      break;
#line 857 "det_report.m"
    }
#line 852 "det_report.m"
}

#line 818 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_4,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 818 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 818 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8,
#line 818 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__9_9)
#line 818 "det_report.m"
{
#line 822 "det_report.m"
  {
#line 822 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 822 "det_report.m"
    if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "det_report.m"
      {
#line 823 "det_report.m"
        *check_hlds__det_report__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 823 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_8 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7;
#line 822 "det_report.m"
      }
#line 822 "det_report.m"
    else
#line 825 "det_report.m"
      {
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__MainConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 0)));
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__OtherConsIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 1)));
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 2)));
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__GoalSeq_30;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__MainMatch_31;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatches_32;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__NewSwitchContext_33;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContexts1_34;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__ModuleInfo0_35;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__InstMap1_36;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__ModuleInfo_37;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_38;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_39;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__V_42_42;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_56;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_57;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__Actual_58;
#line 825 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_59;

#line 827 "det_report.m"
        {
#line 827 "det_report.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__det_report__Goal_29, &check_hlds__det_report__GoalSeq_30);
        }
#line 828 "det_report.m"
        {
#line 828 "det_report.m"
          check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__1_1));
#line 828 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "det_report.m"
        }
#line 828 "det_report.m"
        {
#line 828 "det_report.m"
          check_hlds__det_report__find_switch_var_matches_6_p_0(check_hlds__det_report__GoalSeq_30, check_hlds__det_report__V_42_42, check_hlds__det_report__MainConsId_27, check_hlds__det_report__OtherConsIds_28, &check_hlds__det_report__MainMatch_31, &check_hlds__det_report__OtherMatches_32);
        }
#line 830 "det_report.m"
        {
#line 830 "det_report.m"
          check_hlds__det_report__NewSwitchContext_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 830 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__1_1));
#line 830 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 1) = ((MR_Box) (check_hlds__det_report__MainMatch_31));
#line 830 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 2) = ((MR_Box) (check_hlds__det_report__OtherMatches_32));
#line 830 "det_report.m"
        }
#line 831 "det_report.m"
        {
#line 831 "det_report.m"
          check_hlds__det_report__SwitchContexts1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchContexts1_34, 0) = ((MR_Box) (check_hlds__det_report__NewSwitchContext_33));
#line 831 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchContexts1_34, 1) = ((MR_Box) (check_hlds__det_report__HeadVar__6_6));
#line 831 "det_report.m"
        }
#line 832 "det_report.m"
        {
#line 832 "det_report.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__ModuleInfo0_35);
        }
#line 833 "det_report.m"
        {
#line 833 "det_report.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__MainConsId_27, check_hlds__det_report__OtherConsIds_28, check_hlds__det_report__InstMap0_4, &check_hlds__det_report__InstMap1_36, check_hlds__det_report__ModuleInfo0_35, &check_hlds__det_report__ModuleInfo_37);
        }
#line 835 "det_report.m"
        {
#line 835 "det_report.m"
          check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_37, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44);
        }
#line 521 "det_report.m"
        check_hlds__det_report__GoalExpr_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_29, (MR_Integer) 0)));
#line 521 "det_report.m"
        check_hlds__det_report__GoalInfo_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_29, (MR_Integer) 1)));
#line 522 "det_report.m"
        {
#line 522 "det_report.m"
          check_hlds__det_report__Actual_58 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_57);
        }
#line 523 "det_report.m"
        {
#line 523 "det_report.m"
          parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__Actual_58, &check_hlds__det_report__CompareResult_59);
        }
#line 530 "det_report.m"
        if ((((check_hlds__det_report__CompareResult_59 == (MR_Integer) 3)) || ((check_hlds__det_report__CompareResult_59 == (MR_Integer) 0))))
#line 528 "det_report.m"
          {
#line 528 "det_report.m"
            check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_56, check_hlds__det_report__GoalInfo_57, check_hlds__det_report__InstMap1_36, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__Actual_58, check_hlds__det_report__SwitchContexts1_34, check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44, &check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45, &check_hlds__det_report__Msgs1_38);
          }
#line 530 "det_report.m"
        else
#line 533 "det_report.m"
          {
#line 534 "det_report.m"
            check_hlds__det_report__Msgs1_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45 = check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44;
#line 533 "det_report.m"
          }
#line 838 "det_report.m"
        {
#line 838 "det_report.m"
          check_hlds__det_report__det_diagnose_switch_arms_9_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__Cases_21, check_hlds__det_report__InstMap0_4, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__HeadVar__6_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45, check_hlds__det_report__STATE_VARIABLE_DetInfo_8, &check_hlds__det_report__Msgs2_39);
        }
#line 840 "det_report.m"
        {
#line 840 "det_report.m"
          *check_hlds__det_report__HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_38, check_hlds__det_report__Msgs2_39);
        }
#line 825 "det_report.m"
      }
#line 822 "det_report.m"
  }
#line 818 "det_report.m"
}

#line 777 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 777 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
#line 777 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7,
#line 777 "det_report.m"
  MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8,
#line 777 "det_report.m"
  MR_Integer * check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9,
#line 777 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__10_10)
#line 777 "det_report.m"
{
#line 782 "det_report.m"
  {
#line 782 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 782 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "det_report.m"
      {
#line 783 "det_report.m"
        *check_hlds__det_report__HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 783 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9 = check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8;
#line 783 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6;
#line 782 "det_report.m"
      }
#line 782 "det_report.m"
    else
#line 785 "det_report.m"
      {
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__ActualCanFail_30;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__DesiredCanFail_32;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__DesiredSolns_33;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__ClauseCanFail_34;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__ClauseDesired_35;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_36;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_41;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46;
#line 785 "det_report.m"
        MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_62;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_63;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__Actual_64;
#line 785 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_65;
#line 786 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 806 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_38;
#line 806 "det_report.m"
        MR_Word check_hlds__det_report__GoalDetism_39;
#line 806 "det_report.m"
        MR_Word check_hlds__det_report__V_53_53;
#line 806 "det_report.m"
        MR_Word check_hlds__det_report__V_37_37;
#line 808 "det_report.m"
        MR_Word check_hlds__det_report__V_40_40;

#line 786 "det_report.m"
        {
#line 786 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__ActualCanFail_30, &check_hlds__det_report__V_31_31);
        }
#line 787 "det_report.m"
        {
#line 787 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__HeadVar__3_3, &check_hlds__det_report__DesiredCanFail_32, &check_hlds__det_report__DesiredSolns_33);
        }
#line 789 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredCanFail_32 == (MR_Integer) 1);
#line 789 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 790 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__ActualCanFail_30 == (MR_Integer) 0);
#line 796 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 795 "det_report.m"
          check_hlds__det_report__ClauseCanFail_34 = (MR_Integer) 1;
#line 796 "det_report.m"
        else
#line 800 "det_report.m"
          check_hlds__det_report__ClauseCanFail_34 = (MR_Integer) 0;
#line 802 "det_report.m"
        {
#line 802 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__ClauseCanFail_34, check_hlds__det_report__DesiredSolns_33);
        }
#line 521 "det_report.m"
        check_hlds__det_report__GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 0)));
#line 521 "det_report.m"
        check_hlds__det_report__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 1)));
#line 522 "det_report.m"
        {
#line 522 "det_report.m"
          check_hlds__det_report__Actual_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_63);
        }
#line 523 "det_report.m"
        {
#line 523 "det_report.m"
          parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__Actual_64, &check_hlds__det_report__CompareResult_65);
        }
#line 530 "det_report.m"
        if ((((check_hlds__det_report__CompareResult_65 == (MR_Integer) 3)) || ((check_hlds__det_report__CompareResult_65 == (MR_Integer) 0))))
#line 528 "det_report.m"
          {
#line 528 "det_report.m"
            check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_62, check_hlds__det_report__GoalInfo_63, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__Actual_64, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6, &check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46, &check_hlds__det_report__Msgs1_36);
          }
#line 530 "det_report.m"
        else
#line 533 "det_report.m"
          {
#line 534 "det_report.m"
            check_hlds__det_report__Msgs1_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6;
#line 533 "det_report.m"
          }
#line 806 "det_report.m"
        check_hlds__det_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 0)));
#line 806 "det_report.m"
        check_hlds__det_report__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 1)));
#line 807 "det_report.m"
        {
#line 807 "det_report.m"
          check_hlds__det_report__GoalDetism_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_38);
        }
#line 808 "det_report.m"
        {
#line 808 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__GoalDetism_39, &check_hlds__det_report__V_40_40, &check_hlds__det_report__V_53_53);
        }
#line 808 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_Integer) 0 == check_hlds__det_report__V_53_53);
#line 811 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 811 "det_report.m"
          check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48 = check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8;
#line 811 "det_report.m"
        else
#line 812 "det_report.m"
          {
#line 812 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48 = (check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8 + (MR_Integer) 1);
#line 812 "det_report.m"
          }
#line 814 "det_report.m"
        {
#line 814 "det_report.m"
          check_hlds__det_report__det_diagnose_disj_10_p_0(check_hlds__det_report__Goals_22, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_report__STATE_VARIABLE_DetInfo_7, check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48, check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9, &check_hlds__det_report__Msgs2_41);
        }
#line 816 "det_report.m"
        {
#line 816 "det_report.m"
          *check_hlds__det_report__HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_36, check_hlds__det_report__Msgs2_41);
        }
#line 785 "det_report.m"
      }
#line 782 "det_report.m"
  }
#line 777 "det_report.m"
}

#line 710 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
#line 710 "det_report.m"
  MR_Word check_hlds__det_report__Desired_6,
#line 710 "det_report.m"
  MR_Word check_hlds__det_report__Actual_7,
#line 710 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 710 "det_report.m"
  MR_Word check_hlds__det_report__StartingPieces_9,
#line 710 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_10)
#line 710 "det_report.m"
{
#line 713 "det_report.m"
  {
#line 713 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__TypeCtorInfo_78_78;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__DesiredCanFail_11;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__DesiredSolns_12;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__ActualCanFail_13;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__ActualSolns_14;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__CmpCanFail_15;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__CanFailPieces_16;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__CmpSolns_17;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__ConnectPieces_20;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__SolnsPieces_21;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__RawPieces_22;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_25;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__V_38_38;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__V_72_72;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__V_73_73;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__V_74_74;
#line 713 "det_report.m"
    MR_Word check_hlds__det_report__V_75_75;

#line 714 "det_report.m"
    {
#line 714 "det_report.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_6, &check_hlds__det_report__DesiredCanFail_11, &check_hlds__det_report__DesiredSolns_12);
    }
#line 715 "det_report.m"
    {
#line 715 "det_report.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Actual_7, &check_hlds__det_report__ActualCanFail_13, &check_hlds__det_report__ActualSolns_14);
    }
#line 716 "det_report.m"
    {
#line 716 "det_report.m"
      parse_tree__prog_data__compare_canfails_3_p_0(check_hlds__det_report__DesiredCanFail_11, check_hlds__det_report__ActualCanFail_13, &check_hlds__det_report__CmpCanFail_15);
    }
#line 720 "det_report.m"
    if ((check_hlds__det_report__CmpCanFail_15 == (MR_Integer) 0))
#line 718 "det_report.m"
      {
#line 719 "det_report.m"
        check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[84]);
#line 718 "det_report.m"
      }
#line 720 "det_report.m"
    else
#line 724 "det_report.m"
      check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "det_report.m"
    {
#line 726 "det_report.m"
      parse_tree__prog_data__compare_solncounts_3_p_0(check_hlds__det_report__DesiredSolns_12, check_hlds__det_report__ActualSolns_14, &check_hlds__det_report__CmpSolns_17);
    }
#line 746 "det_report.m"
    if ((check_hlds__det_report__CmpSolns_17 == (MR_Integer) 0))
#line 728 "det_report.m"
      {
#line 732 "det_report.m"
        if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 734 "det_report.m"
          check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 732 "det_report.m"
        else
#line 730 "det_report.m"
          {
#line 731 "det_report.m"
            check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[86]);
#line 730 "det_report.m"
          }
#line 739 "det_report.m"
        if ((check_hlds__det_report__DesiredSolns_12 == (MR_Integer) 1))
#line 737 "det_report.m"
          {
#line 738 "det_report.m"
            check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[88]);
#line 737 "det_report.m"
          }
#line 739 "det_report.m"
        else
#line 743 "det_report.m"
          {
#line 744 "det_report.m"
            check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[90]);
#line 743 "det_report.m"
          }
#line 728 "det_report.m"
      }
#line 746 "det_report.m"
    else
#line 749 "det_report.m"
      {
#line 750 "det_report.m"
        check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 751 "det_report.m"
        check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 749 "det_report.m"
      }
#line 10660 "check_hlds.det_report.c"
    check_hlds__det_report__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 753 "det_report.m"
    {
#line 753 "det_report.m"
      check_hlds__det_report__V_38_38 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__ConnectPieces_20, check_hlds__det_report__SolnsPieces_21);
    }
#line 753 "det_report.m"
    {
#line 753 "det_report.m"
      check_hlds__det_report__RawPieces_22 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__CanFailPieces_16, check_hlds__det_report__V_38_38);
    }
#line 757 "det_report.m"
    if ((check_hlds__det_report__RawPieces_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "det_report.m"
      {
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_41_41;
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_43_43;
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_46_46;
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_47_47;
#line 758 "det_report.m"
        MR_String check_hlds__det_report__V_48_48;
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_49_49;
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_52_52;
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_54_54;
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_57_57;
#line 758 "det_report.m"
        MR_Word check_hlds__det_report__V_58_58;
#line 758 "det_report.m"
        MR_String check_hlds__det_report__V_59_59;

#line 761 "det_report.m"
        {
#line 761 "det_report.m"
          check_hlds__det_report__V_48_48 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Desired_6);
        }
#line 761 "det_report.m"
        {
#line 761 "det_report.m"
          check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 761 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 761 "det_report.m"
        }
#line 763 "det_report.m"
        {
#line 763 "det_report.m"
          check_hlds__det_report__V_59_59 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Actual_7);
        }
#line 763 "det_report.m"
        {
#line 763 "det_report.m"
          check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__V_59_59));
#line 763 "det_report.m"
        }
#line 763 "det_report.m"
        {
#line 763 "det_report.m"
          check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 763 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[11])));
#line 763 "det_report.m"
        }
#line 762 "det_report.m"
        {
#line 762 "det_report.m"
          check_hlds__det_report__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93])));
#line 762 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_54_54, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 762 "det_report.m"
        }
#line 761 "det_report.m"
        {
#line 761 "det_report.m"
          check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 761 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_54_54));
#line 761 "det_report.m"
        }
#line 761 "det_report.m"
        {
#line 761 "det_report.m"
          check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[53])));
#line 761 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 761 "det_report.m"
        }
#line 761 "det_report.m"
        {
#line 761 "det_report.m"
          check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 761 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 761 "det_report.m"
        }
#line 760 "det_report.m"
        {
#line 760 "det_report.m"
          check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[92])));
#line 760 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 760 "det_report.m"
        }
#line 759 "det_report.m"
        {
#line 759 "det_report.m"
          check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 759 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 759 "det_report.m"
        }
#line 759 "det_report.m"
        {
#line 759 "det_report.m"
          check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[91])));
#line 759 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 759 "det_report.m"
        }
#line 758 "det_report.m"
      }
#line 757 "det_report.m"
    else
#line 755 "det_report.m"
      {
#line 756 "det_report.m"
        {
#line 756 "det_report.m"
          check_hlds__det_report__Pieces_25 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__RawPieces_22, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[11]));
        }
#line 755 "det_report.m"
      }
#line 765 "det_report.m"
    {
#line 765 "det_report.m"
      check_hlds__det_report__V_75_75 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__StartingPieces_9, check_hlds__det_report__Pieces_25);
    }
#line 765 "det_report.m"
    {
#line 765 "det_report.m"
      check_hlds__det_report__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 765 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_74_74, 0) = ((MR_Box) (check_hlds__det_report__V_75_75));
#line 765 "det_report.m"
    }
#line 765 "det_report.m"
    {
#line 765 "det_report.m"
      check_hlds__det_report__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 0) = ((MR_Box) (check_hlds__det_report__V_74_74));
#line 765 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "det_report.m"
    }
#line 765 "det_report.m"
    {
#line 765 "det_report.m"
      check_hlds__det_report__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (check_hlds__det_report__Context_8));
#line 765 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 1) = ((MR_Box) (check_hlds__det_report__V_73_73));
#line 765 "det_report.m"
    }
#line 765 "det_report.m"
    {
#line 765 "det_report.m"
      MR_Word base;
#line 765 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "det_report.m"
      *check_hlds__det_report__Msgs_10 = base;
#line 765 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_72_72));
#line 765 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "det_report.m"
    }
#line 713 "det_report.m"
  }
#line 710 "det_report.m"
}

#line 539 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__GoalExpr_10,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__GoalInfo_11,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_12,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__Desired_13,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__Actual_14,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_15,
#line 539 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109,
#line 539 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_110,
#line 539 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_17)
#line 539 "det_report.m"
{
#line 546 "det_report.m"
  {
#line 546 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 546 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 0))))
#line 656 "det_report.m"
      {
#line 656 "det_report.m"
        MR_Word check_hlds__det_report__DesiredCanFail_84;
#line 656 "det_report.m"
        MR_Word check_hlds__det_report__ActualCanFail_85;
#line 656 "det_report.m"
        MR_Word check_hlds__det_report__ActualSolns_86;
#line 656 "det_report.m"
        MR_Word check_hlds__det_report__DesiredSolns_226;

#line 657 "det_report.m"
        {
#line 657 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__DesiredCanFail_84, &check_hlds__det_report__DesiredSolns_226);
        }
#line 658 "det_report.m"
        {
#line 658 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Actual_14, &check_hlds__det_report__ActualCanFail_85, &check_hlds__det_report__ActualSolns_86);
        }
#line 660 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredCanFail_84 == (MR_Integer) 1);
#line 660 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 661 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__ActualCanFail_85 == (MR_Integer) 0);
#line 666 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 663 "det_report.m"
          {
#line 663 "det_report.m"
            MR_Word check_hlds__det_report__V_122_122;
#line 663 "det_report.m"
            MR_Word check_hlds__det_report__Context_216;

#line 663 "det_report.m"
            {
#line 663 "det_report.m"
              check_hlds__det_report__Context_216 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
            }
#line 665 "det_report.m"
            {
#line 665 "det_report.m"
              check_hlds__det_report__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_122_122, 0) = ((MR_Box) (check_hlds__det_report__Context_216));
#line 665 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[71])));
#line 665 "det_report.m"
            }
#line 665 "det_report.m"
            {
#line 665 "det_report.m"
              MR_Word base;
#line 665 "det_report.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "det_report.m"
              *check_hlds__det_report__Msgs_17 = base;
#line 665 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_122_122));
#line 665 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "det_report.m"
            }
#line 663 "det_report.m"
          }
#line 666 "det_report.m"
        else
#line 673 "det_report.m"
          {
#line 667 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredSolns_226 == (MR_Integer) 0);
#line 667 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 667 "det_report.m"
              {
#line 668 "det_report.m"
                check_hlds__det_report__succeeded = (check_hlds__det_report__ActualSolns_86 == (MR_Integer) 0);
#line 668 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 667 "det_report.m"
              }
#line 673 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 670 "det_report.m"
              {
#line 670 "det_report.m"
                MR_Word check_hlds__det_report__V_130_130;
#line 670 "det_report.m"
                MR_Word check_hlds__det_report__Context_218;

#line 670 "det_report.m"
                {
#line 670 "det_report.m"
                  check_hlds__det_report__Context_218 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                }
#line 672 "det_report.m"
                {
#line 672 "det_report.m"
                  check_hlds__det_report__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_130_130, 0) = ((MR_Box) (check_hlds__det_report__Context_218));
#line 672 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[74])));
#line 672 "det_report.m"
                }
#line 672 "det_report.m"
                {
#line 672 "det_report.m"
                  MR_Word base;
#line 672 "det_report.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "det_report.m"
                  *check_hlds__det_report__Msgs_17 = base;
#line 672 "det_report.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_130_130));
#line 672 "det_report.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "det_report.m"
                }
#line 670 "det_report.m"
              }
#line 673 "det_report.m"
            else
#line 674 "det_report.m"
              *check_hlds__det_report__Msgs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "det_report.m"
          }
#line 656 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 656 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 2))))
#line 605 "det_report.m"
      {
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__PredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)));
#line 605 "det_report.m"
        MR_Integer check_hlds__det_report__ProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__CallContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__InitMsgs_45;
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__StartingPieces_46;
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__AtomicMsgs_47;
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__Context_209;
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 605 "det_report.m"
        MR_Word check_hlds__det_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 5)));

#line 606 "det_report.m"
        {
#line 606 "det_report.m"
          check_hlds__det_report__Context_209 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
        }
#line 607 "det_report.m"
        {
#line 607 "det_report.m"
          check_hlds__det_report__det_report_call_context_7_p_0(check_hlds__det_report__Context_209, check_hlds__det_report__CallContext_43, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__PredId_39, check_hlds__det_report__ProcId_40, &check_hlds__det_report__InitMsgs_45, &check_hlds__det_report__StartingPieces_46);
        }
#line 609 "det_report.m"
        {
#line 609 "det_report.m"
          check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_209, check_hlds__det_report__StartingPieces_46, &check_hlds__det_report__AtomicMsgs_47);
        }
#line 611 "det_report.m"
        {
#line 611 "det_report.m"
          *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__InitMsgs_45, check_hlds__det_report__AtomicMsgs_47);
        }
#line 605 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 605 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 620 "det_report.m"
      {
#line 620 "det_report.m"
        MR_Word check_hlds__det_report__LHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)));
#line 620 "det_report.m"
        MR_Word check_hlds__det_report__RHS_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 620 "det_report.m"
        MR_Word check_hlds__det_report__UnifyContext_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 620 "det_report.m"
        MR_Word check_hlds__det_report__Context_212;
#line 620 "det_report.m"
        MR_Word check_hlds__det_report__StartingPieces_213;
#line 620 "det_report.m"
        MR_Word check_hlds__det_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 620 "det_report.m"
        MR_Word check_hlds__det_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));

#line 621 "det_report.m"
        {
#line 621 "det_report.m"
          check_hlds__det_report__Context_212 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
        }
#line 622 "det_report.m"
        {
#line 622 "det_report.m"
          check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__det_report__UnifyContext_58, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__LHS_54, check_hlds__det_report__RHS_55, &check_hlds__det_report__StartingPieces_213);
        }
#line 624 "det_report.m"
        {
#line 624 "det_report.m"
          check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_212, check_hlds__det_report__StartingPieces_213, check_hlds__det_report__Msgs_17);
        }
#line 620 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 620 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 627 "det_report.m"
      {
#line 627 "det_report.m"
        MR_String check_hlds__det_report__DesiredStr_66;
#line 627 "det_report.m"
        MR_Word check_hlds__det_report__V_142_142;
#line 627 "det_report.m"
        MR_Word check_hlds__det_report__V_143_143;
#line 627 "det_report.m"
        MR_String check_hlds__det_report__V_144_144;
#line 627 "det_report.m"
        MR_String check_hlds__det_report__V_146_146;
#line 627 "det_report.m"
        MR_Word check_hlds__det_report__V_149_149;
#line 627 "det_report.m"
        MR_Word check_hlds__det_report__V_150_150;
#line 627 "det_report.m"
        MR_Word check_hlds__det_report__V_151_151;
#line 627 "det_report.m"
        MR_Word check_hlds__det_report__Context_214;
#line 627 "det_report.m"
        MR_Word check_hlds__det_report__Pieces_215;

#line 628 "det_report.m"
        {
#line 628 "det_report.m"
          check_hlds__det_report__Context_214 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
        }
#line 629 "det_report.m"
        {
#line 629 "det_report.m"
          check_hlds__det_report__DesiredStr_66 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Desired_13);
        }
#line 631 "det_report.m"
        {
#line 631 "det_report.m"
          check_hlds__det_report__V_146_146 = mercury__string__f_43_43_2_f_0(check_hlds__det_report__DesiredStr_66, (MR_String) ".");
        }
#line 631 "det_report.m"
        {
#line 631 "det_report.m"
          check_hlds__det_report__V_144_144 = mercury__string__f_43_43_2_f_0((MR_String) "Desired determinism is ", check_hlds__det_report__V_146_146);
        }
#line 631 "det_report.m"
        {
#line 631 "det_report.m"
          check_hlds__det_report__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 631 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_143_143, 1) = ((MR_Box) (check_hlds__det_report__V_144_144));
#line 631 "det_report.m"
        }
#line 631 "det_report.m"
        {
#line 631 "det_report.m"
          check_hlds__det_report__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_142_142, 0) = ((MR_Box) (check_hlds__det_report__V_143_143));
#line 631 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "det_report.m"
        }
#line 630 "det_report.m"
        {
#line 630 "det_report.m"
          check_hlds__det_report__Pieces_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_215, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[75])));
#line 630 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_215, 1) = ((MR_Box) (check_hlds__det_report__V_142_142));
#line 630 "det_report.m"
        }
#line 632 "det_report.m"
        {
#line 632 "det_report.m"
          check_hlds__det_report__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 632 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_151_151, 0) = ((MR_Box) (check_hlds__det_report__Pieces_215));
#line 632 "det_report.m"
        }
#line 632 "det_report.m"
        {
#line 632 "det_report.m"
          check_hlds__det_report__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_150_150, 0) = ((MR_Box) (check_hlds__det_report__V_151_151));
#line 632 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "det_report.m"
        }
#line 632 "det_report.m"
        {
#line 632 "det_report.m"
          check_hlds__det_report__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_149_149, 0) = ((MR_Box) (check_hlds__det_report__Context_214));
#line 632 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_149_149, 1) = ((MR_Box) (check_hlds__det_report__V_150_150));
#line 632 "det_report.m"
        }
#line 632 "det_report.m"
        {
#line 632 "det_report.m"
          MR_Word base;
#line 632 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "det_report.m"
          *check_hlds__det_report__Msgs_17 = base;
#line 632 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_149_149));
#line 632 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "det_report.m"
        }
#line 627 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 627 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 546 "det_report.m"
      {
#line 546 "det_report.m"
        MR_Word check_hlds__det_report__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 546 "det_report.m"
        MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));

#line 547 "det_report.m"
        {
#line 547 "det_report.m"
          check_hlds__det_report__det_diagnose_conj_7_p_0(check_hlds__det_report__Goals_19, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 547 "det_report.m"
          return;
        }
#line 546 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 550 "det_report.m"
      {
#line 550 "det_report.m"
        MR_Integer check_hlds__det_report__DisjunctsWithSoln_20;
#line 550 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_21;
#line 550 "det_report.m"
        MR_Word check_hlds__det_report__DesSolns_23;
#line 550 "det_report.m"
        MR_Word check_hlds__det_report__Goals_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 553 "det_report.m"
        MR_Word check_hlds__det_report__V_22_22;
#line 555 "det_report.m"
        MR_Integer check_hlds__det_report__V_184_184;

#line 551 "det_report.m"
        {
#line 551 "det_report.m"
          check_hlds__det_report__det_diagnose_disj_10_p_0(check_hlds__det_report__Goals_198, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, (MR_Integer) 0, &check_hlds__det_report__DisjunctsWithSoln_20, &check_hlds__det_report__Msgs1_21);
        }
#line 553 "det_report.m"
        {
#line 553 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__V_22_22, &check_hlds__det_report__DesSolns_23);
        }
#line 555 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__DesSolns_23 == (MR_Integer) 3);
#line 555 "det_report.m"
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 555 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 555 "det_report.m"
          {
#line 556 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__DesSolns_23 == (MR_Integer) 2);
#line 556 "det_report.m"
            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 555 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 555 "det_report.m"
              {
#line 557 "det_report.m"
                check_hlds__det_report__V_184_184 = (MR_Integer) 1;
#line 557 "det_report.m"
                check_hlds__det_report__succeeded = (check_hlds__det_report__DisjunctsWithSoln_20 > check_hlds__det_report__V_184_184);
#line 555 "det_report.m"
              }
#line 555 "det_report.m"
          }
#line 568 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 559 "det_report.m"
          {
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__TypeCtorInfo_230_230;
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__Context_24;
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__NestingPieces_25;
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__Pieces_27;
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__Msg_28;
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__V_188_188;
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__V_192_192;
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__V_193_193;
#line 559 "det_report.m"
            MR_Word check_hlds__det_report__V_195_195;

#line 559 "det_report.m"
            {
#line 559 "det_report.m"
              check_hlds__det_report__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
            }
#line 560 "det_report.m"
            {
#line 560 "det_report.m"
              check_hlds__det_report__det_diagnose_switch_context_3_p_0(*check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__SwitchContexts_15, &check_hlds__det_report__NestingPieces_25);
            }
#line 11353 "check_hlds.det_report.c"
            check_hlds__det_report__TypeCtorInfo_230_230 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 565 "det_report.m"
            {
#line 565 "det_report.m"
              check_hlds__det_report__V_188_188 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_230_230, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[78]), (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[77]));
            }
#line 564 "det_report.m"
            {
#line 564 "det_report.m"
              check_hlds__det_report__Pieces_27 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_230_230, check_hlds__det_report__NestingPieces_25, check_hlds__det_report__V_188_188);
            }
#line 566 "det_report.m"
            {
#line 566 "det_report.m"
              check_hlds__det_report__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 566 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_193_193, 0) = ((MR_Box) (check_hlds__det_report__Pieces_27));
#line 566 "det_report.m"
            }
#line 566 "det_report.m"
            {
#line 566 "det_report.m"
              check_hlds__det_report__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_192_192, 0) = ((MR_Box) (check_hlds__det_report__V_193_193));
#line 566 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "det_report.m"
            }
#line 566 "det_report.m"
            {
#line 566 "det_report.m"
              check_hlds__det_report__Msg_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 566 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_28, 0) = ((MR_Box) (check_hlds__det_report__Context_24));
#line 566 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_28, 1) = ((MR_Box) (check_hlds__det_report__V_192_192));
#line 566 "det_report.m"
            }
#line 567 "det_report.m"
            {
#line 567 "det_report.m"
              check_hlds__det_report__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_195_195, 0) = ((MR_Box) (check_hlds__det_report__Msg_28));
#line 567 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "det_report.m"
            }
#line 567 "det_report.m"
            {
#line 567 "det_report.m"
              *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_195_195, check_hlds__det_report__Msgs1_21);
            }
#line 559 "det_report.m"
          }
#line 568 "det_report.m"
        else
#line 569 "det_report.m"
          *check_hlds__det_report__Msgs_17 = check_hlds__det_report__Msgs1_21;
#line 550 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 613 "det_report.m"
      {
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__GenericCall_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__GenericCallId_53;
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__V_156_156;
#line 613 "det_report.m"
        MR_String check_hlds__det_report__V_157_157;
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__Context_210;
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__StartingPieces_211;
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 613 "det_report.m"
        MR_Word check_hlds__det_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 5)));

#line 614 "det_report.m"
        {
#line 614 "det_report.m"
          check_hlds__det_report__Context_210 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
        }
#line 615 "det_report.m"
        {
#line 615 "det_report.m"
          hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__det_report__GenericCall_48, &check_hlds__det_report__GenericCallId_53);
        }
#line 616 "det_report.m"
        {
#line 616 "det_report.m"
          check_hlds__det_report__V_157_157 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(check_hlds__det_report__GenericCallId_53);
        }
#line 616 "det_report.m"
        {
#line 616 "det_report.m"
          check_hlds__det_report__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 616 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_156_156, 1) = ((MR_Box) (check_hlds__det_report__V_157_157));
#line 616 "det_report.m"
        }
#line 616 "det_report.m"
        {
#line 616 "det_report.m"
          check_hlds__det_report__StartingPieces_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__StartingPieces_211, 0) = ((MR_Box) (check_hlds__det_report__V_156_156));
#line 616 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__StartingPieces_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 616 "det_report.m"
        }
#line 617 "det_report.m"
        {
#line 617 "det_report.m"
          check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_210, check_hlds__det_report__StartingPieces_211, check_hlds__det_report__Msgs_17);
        }
#line 613 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 613 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 634 "det_report.m"
      {
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_235_235;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__Else_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__DesiredSolns_72;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__CondInfo_74;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__CondDetism_75;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__CondSolns_77;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__MsgsCond_79;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__InstMap1_80;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__MsgsThen_81;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__MsgsElse_82;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_136_136;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_137_137;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report__V_139_139;
#line 634 "det_report.m"
        MR_Word check_hlds__det_report___Vars_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 635 "det_report.m"
        MR_Word check_hlds__det_report___DesiredCanFail_71;
#line 636 "det_report.m"
        MR_Word check_hlds__det_report___CondGoal_73;
#line 638 "det_report.m"
        MR_Word check_hlds__det_report___CondCanFail_76;

#line 635 "det_report.m"
        {
#line 635 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report___DesiredCanFail_71, &check_hlds__det_report__DesiredSolns_72);
        }
#line 636 "det_report.m"
        check_hlds__det_report___CondGoal_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Cond_68, (MR_Integer) 0)));
#line 636 "det_report.m"
        check_hlds__det_report__CondInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Cond_68, (MR_Integer) 1)));
#line 637 "det_report.m"
        {
#line 637 "det_report.m"
          check_hlds__det_report__CondDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__CondInfo_74);
        }
#line 638 "det_report.m"
        {
#line 638 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__CondDetism_75, &check_hlds__det_report___CondCanFail_76, &check_hlds__det_report__CondSolns_77);
        }
#line 640 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__CondSolns_77 == (MR_Integer) 3);
#line 640 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 640 "det_report.m"
          {
#line 641 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredSolns_72 == (MR_Integer) 3);
#line 641 "det_report.m"
            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 640 "det_report.m"
          }
#line 646 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 643 "det_report.m"
          {
#line 643 "det_report.m"
            MR_Word check_hlds__det_report__DesiredCond_78;

#line 643 "det_report.m"
            {
#line 643 "det_report.m"
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__DesiredCond_78, (MR_Integer) 0, check_hlds__det_report__DesiredSolns_72);
            }
#line 644 "det_report.m"
            {
#line 644 "det_report.m"
              check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Cond_68, check_hlds__det_report__InstMap0_12, check_hlds__det_report__DesiredCond_78, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__STATE_VARIABLE_DetInfo_136_136, &check_hlds__det_report__MsgsCond_79);
            }
#line 643 "det_report.m"
          }
#line 646 "det_report.m"
        else
#line 647 "det_report.m"
          {
#line 647 "det_report.m"
            check_hlds__det_report__MsgsCond_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DetInfo_136_136 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 647 "det_report.m"
          }
#line 649 "det_report.m"
        {
#line 649 "det_report.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Cond_68, check_hlds__det_report__InstMap0_12, &check_hlds__det_report__InstMap1_80);
        }
#line 650 "det_report.m"
        {
#line 650 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Then_69, check_hlds__det_report__InstMap1_80, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_136_136, &check_hlds__det_report__STATE_VARIABLE_DetInfo_137_137, &check_hlds__det_report__MsgsThen_81);
        }
#line 652 "det_report.m"
        {
#line 652 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Else_70, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_137_137, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__MsgsElse_82);
        }
#line 11607 "check_hlds.det_report.c"
        check_hlds__det_report__TypeCtorInfo_235_235 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0;
#line 654 "det_report.m"
        {
#line 654 "det_report.m"
          check_hlds__det_report__V_139_139 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_235_235, check_hlds__det_report__MsgsThen_81, check_hlds__det_report__MsgsElse_82);
        }
#line 654 "det_report.m"
        {
#line 654 "det_report.m"
          *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_235_235, check_hlds__det_report__MsgsCond_79, check_hlds__det_report__V_139_139);
        }
#line 634 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 677 "det_report.m"
      {
#line 677 "det_report.m"
        MR_Word check_hlds__det_report__SubGoal_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 677 "det_report.m"
        MR_Word check_hlds__det_report__SubGoalInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_88, (MR_Integer) 1)));
#line 677 "det_report.m"
        MR_Word check_hlds__det_report__Internal_91;
#line 677 "det_report.m"
        MR_Word check_hlds__det_report__InternalDesired_92;
#line 677 "det_report.m"
        MR_Word check_hlds__det_report__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 678 "det_report.m"
        MR_Word check_hlds__det_report__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_88, (MR_Integer) 0)));

#line 679 "det_report.m"
        {
#line 679 "det_report.m"
          check_hlds__det_report__Internal_91 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_90);
        }
#line 680 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__Actual_14 == check_hlds__det_report__Internal_91);
#line 682 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 681 "det_report.m"
          check_hlds__det_report__InternalDesired_92 = check_hlds__det_report__Desired_13;
#line 682 "det_report.m"
        else
#line 683 "det_report.m"
          {
#line 683 "det_report.m"
            MR_Word check_hlds__det_report__CanFail_93;
#line 683 "det_report.m"
            MR_Word check_hlds__det_report__V_94_94;

#line 683 "det_report.m"
            {
#line 683 "det_report.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__CanFail_93, &check_hlds__det_report__V_94_94);
            }
#line 684 "det_report.m"
            {
#line 684 "det_report.m"
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__InternalDesired_92, check_hlds__det_report__CanFail_93, (MR_Integer) 3);
            }
#line 683 "det_report.m"
          }
#line 686 "det_report.m"
        {
#line 686 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__SubGoal_88, check_hlds__det_report__InstMap0_12, check_hlds__det_report__InternalDesired_92, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 686 "det_report.m"
          return;
        }
#line 677 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 546 "det_report.m"
    if (((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 689 "det_report.m"
      {
#line 689 "det_report.m"
        MR_Word check_hlds__det_report__ShortHand_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));

#line 697 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__ShortHand_95)) == (MR_mktag((MR_Integer) 1))))
#line 691 "det_report.m"
          {
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__MainGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 4)));
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__OrElseGoals_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 5)));
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__MainMsgs_103;
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__OrElseMsgs_104;
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115;
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 0)));
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 1)));
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 2)));
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 3)));
#line 691 "det_report.m"
            MR_Word check_hlds__det_report__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 6)));

#line 692 "det_report.m"
            {
#line 692 "det_report.m"
              check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__MainGoal_100, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115, &check_hlds__det_report__MainMsgs_103);
            }
#line 694 "det_report.m"
            {
#line 694 "det_report.m"
              check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(check_hlds__det_report__OrElseGoals_101, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__OrElseMsgs_104);
            }
#line 696 "det_report.m"
            {
#line 696 "det_report.m"
              *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__MainMsgs_103, check_hlds__det_report__OrElseMsgs_104);
            }
#line 691 "det_report.m"
          }
#line 697 "det_report.m"
        else
#line 697 "det_report.m"
        if (((MR_tag((MR_Word) check_hlds__det_report__ShortHand_95)) == (MR_mktag((MR_Integer) 0))))
#line 702 "det_report.m"
          {
#line 704 "det_report.m"
            {
#line 704 "det_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
#line 704 "det_report.m"
              return;
            }
#line 702 "det_report.m"
          }
#line 697 "det_report.m"
        else
#line 698 "det_report.m"
          {
#line 698 "det_report.m"
            MR_Word check_hlds__det_report__SubGoal_227 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 2)));
#line 698 "det_report.m"
            MR_Word check_hlds__det_report__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 0)));
#line 698 "det_report.m"
            MR_Word check_hlds__det_report__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 1)));

#line 699 "det_report.m"
            {
#line 699 "det_report.m"
              check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__SubGoal_227, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 699 "det_report.m"
              return;
            }
#line 698 "det_report.m"
          }
#line 689 "det_report.m"
      }
#line 546 "det_report.m"
    else
#line 572 "det_report.m"
      {
#line 572 "det_report.m"
        MR_Word check_hlds__det_report__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 572 "det_report.m"
        MR_Word check_hlds__det_report__SwitchCanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 572 "det_report.m"
        MR_Word check_hlds__det_report__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 572 "det_report.m"
        MR_Word check_hlds__det_report__VarTypes_36;
#line 572 "det_report.m"
        MR_Word check_hlds__det_report__VarType_37;
#line 572 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_38;
#line 572 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_205;
#line 578 "det_report.m"
        MR_Word check_hlds__det_report__V_159_159;
#line 578 "det_report.m"
        MR_Word check_hlds__det_report__V_237_237;
#line 579 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;

#line 578 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__SwitchCanFail_30 == (MR_Integer) 0);
#line 578 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 578 "det_report.m"
          {
#line 579 "det_report.m"
            check_hlds__det_report__V_159_159 = (MR_Integer) 1;
#line 579 "det_report.m"
            {
#line 579 "det_report.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__V_237_237, &check_hlds__det_report__V_32_32);
            }
#line 579 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__V_159_159 == check_hlds__det_report__V_237_237);
#line 578 "det_report.m"
          }
#line 596 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 581 "det_report.m"
          {
#line 581 "det_report.m"
            MR_String check_hlds__det_report__VarStr_33;
#line 581 "det_report.m"
            MR_Word check_hlds__det_report__MaybeMissingPieces_34;
#line 581 "det_report.m"
            MR_Word check_hlds__det_report__V_175_175;
#line 581 "det_report.m"
            MR_Word check_hlds__det_report__V_176_176;
#line 581 "det_report.m"
            MR_Word check_hlds__det_report__V_177_177;
#line 581 "det_report.m"
            MR_Word check_hlds__det_report__V_178_178;
#line 581 "det_report.m"
            MR_Word check_hlds__det_report__Context_199;
#line 581 "det_report.m"
            MR_Word check_hlds__det_report__NestingPieces_200;
#line 581 "det_report.m"
            MR_Word check_hlds__det_report__Pieces_201;

#line 581 "det_report.m"
            {
#line 581 "det_report.m"
              check_hlds__det_report__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
            }
#line 582 "det_report.m"
            {
#line 582 "det_report.m"
              check_hlds__det_report__det_diagnose_switch_context_3_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__SwitchContexts_15, &check_hlds__det_report__NestingPieces_200);
            }
#line 584 "det_report.m"
            {
#line 584 "det_report.m"
              check_hlds__det_report__find_missing_cons_ids_6_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Var_29, check_hlds__det_report__Cases_31, &check_hlds__det_report__VarStr_33, &check_hlds__det_report__MaybeMissingPieces_34);
            }
#line 590 "det_report.m"
            if ((check_hlds__det_report__MaybeMissingPieces_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "det_report.m"
              {
#line 591 "det_report.m"
                MR_Word check_hlds__det_report__V_162_162;
#line 591 "det_report.m"
                MR_Word check_hlds__det_report__V_163_163;

#line 592 "det_report.m"
                {
#line 592 "det_report.m"
                  check_hlds__det_report__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 592 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_163_163, 0) = ((MR_Box) (check_hlds__det_report__VarStr_33));
#line 592 "det_report.m"
                }
#line 592 "det_report.m"
                {
#line 592 "det_report.m"
                  check_hlds__det_report__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_162_162, 0) = ((MR_Box) (check_hlds__det_report__V_163_163));
#line 592 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[81])));
#line 592 "det_report.m"
                }
#line 592 "det_report.m"
                {
#line 592 "det_report.m"
                  check_hlds__det_report__Pieces_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[79])));
#line 592 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_201, 1) = ((MR_Box) (check_hlds__det_report__V_162_162));
#line 592 "det_report.m"
                }
#line 591 "det_report.m"
              }
#line 590 "det_report.m"
            else
#line 587 "det_report.m"
              {
#line 587 "det_report.m"
                MR_Word check_hlds__det_report__MissingPieces_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeMissingPieces_34, (MR_Integer) 0)));
#line 587 "det_report.m"
                MR_Word check_hlds__det_report__V_170_170;
#line 587 "det_report.m"
                MR_Word check_hlds__det_report__V_171_171;
#line 587 "det_report.m"
                MR_Word check_hlds__det_report__V_172_172;

#line 588 "det_report.m"
                {
#line 588 "det_report.m"
                  check_hlds__det_report__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 588 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_171_171, 0) = ((MR_Box) (check_hlds__det_report__VarStr_33));
#line 588 "det_report.m"
                }
#line 589 "det_report.m"
                {
#line 589 "det_report.m"
                  check_hlds__det_report__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[82])));
#line 589 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_172_172, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces_35));
#line 589 "det_report.m"
                }
#line 588 "det_report.m"
                {
#line 588 "det_report.m"
                  check_hlds__det_report__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_170_170, 0) = ((MR_Box) (check_hlds__det_report__V_171_171));
#line 588 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_170_170, 1) = ((MR_Box) (check_hlds__det_report__V_172_172));
#line 588 "det_report.m"
                }
#line 588 "det_report.m"
                {
#line 588 "det_report.m"
                  check_hlds__det_report__Pieces_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[79])));
#line 588 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_201, 1) = ((MR_Box) (check_hlds__det_report__V_170_170));
#line 588 "det_report.m"
                }
#line 587 "det_report.m"
              }
#line 595 "det_report.m"
            {
#line 595 "det_report.m"
              check_hlds__det_report__V_178_178 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__NestingPieces_200, check_hlds__det_report__Pieces_201);
            }
#line 595 "det_report.m"
            {
#line 595 "det_report.m"
              check_hlds__det_report__V_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 595 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_177_177, 0) = ((MR_Box) (check_hlds__det_report__V_178_178));
#line 595 "det_report.m"
            }
#line 595 "det_report.m"
            {
#line 595 "det_report.m"
              check_hlds__det_report__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_176_176, 0) = ((MR_Box) (check_hlds__det_report__V_177_177));
#line 595 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "det_report.m"
            }
#line 595 "det_report.m"
            {
#line 595 "det_report.m"
              check_hlds__det_report__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_175_175, 0) = ((MR_Box) (check_hlds__det_report__Context_199));
#line 595 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_175_175, 1) = ((MR_Box) (check_hlds__det_report__V_176_176));
#line 595 "det_report.m"
            }
#line 595 "det_report.m"
            {
#line 595 "det_report.m"
              check_hlds__det_report__Msgs1_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Msgs1_205, 0) = ((MR_Box) (check_hlds__det_report__V_175_175));
#line 595 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Msgs1_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "det_report.m"
            }
#line 581 "det_report.m"
          }
#line 596 "det_report.m"
        else
#line 597 "det_report.m"
          check_hlds__det_report__Msgs1_205 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "det_report.m"
        {
#line 599 "det_report.m"
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__VarTypes_36);
        }
#line 600 "det_report.m"
        {
#line 600 "det_report.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_36, check_hlds__det_report__Var_29, &check_hlds__det_report__VarType_37);
        }
#line 601 "det_report.m"
        {
#line 601 "det_report.m"
          check_hlds__det_report__det_diagnose_switch_arms_9_p_0(check_hlds__det_report__Var_29, check_hlds__det_report__VarType_37, check_hlds__det_report__Cases_31, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__Msgs2_38);
        }
#line 603 "det_report.m"
        {
#line 603 "det_report.m"
          *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_205, check_hlds__det_report__Msgs2_38);
        }
#line 572 "det_report.m"
      }
#line 546 "det_report.m"
  }
#line 539 "det_report.m"
}

#line 516 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_9,
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__Desired_10,
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_11,
#line 516 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
#line 516 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19,
#line 516 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_13)
#line 516 "det_report.m"
{
#line 520 "det_report.m"
  {
#line 520 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 520 "det_report.m"
    MR_Word check_hlds__det_report__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));
#line 520 "det_report.m"
    MR_Word check_hlds__det_report__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
#line 520 "det_report.m"
    MR_Word check_hlds__det_report__Actual_16;
#line 520 "det_report.m"
    MR_Word check_hlds__det_report__CompareResult_17;

#line 522 "det_report.m"
    {
#line 522 "det_report.m"
      check_hlds__det_report__Actual_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_15);
    }
#line 523 "det_report.m"
    {
#line 523 "det_report.m"
      parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__Desired_10, check_hlds__det_report__Actual_16, &check_hlds__det_report__CompareResult_17);
    }
#line 530 "det_report.m"
    if ((((check_hlds__det_report__CompareResult_17 == (MR_Integer) 3)) || ((check_hlds__det_report__CompareResult_17 == (MR_Integer) 0))))
#line 528 "det_report.m"
      {
#line 528 "det_report.m"
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_14, check_hlds__det_report__GoalInfo_15, check_hlds__det_report__InstMap0_9, check_hlds__det_report__Desired_10, check_hlds__det_report__Actual_16, check_hlds__det_report__SwitchContexts_11, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18, check_hlds__det_report__STATE_VARIABLE_DetInfo_19, check_hlds__det_report__Msgs_13);
#line 528 "det_report.m"
        return;
      }
#line 530 "det_report.m"
    else
#line 533 "det_report.m"
      {
#line 534 "det_report.m"
        *check_hlds__det_report__Msgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_19 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18;
#line 533 "det_report.m"
      }
#line 520 "det_report.m"
  }
#line 516 "det_report.m"
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
  MR_Word check_hlds__det_report__MessagePieces_11,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__DeclaredDetism_12,
#line 490 "det_report.m"
  MR_Word check_hlds__det_report__InferredDetism_13,
#line 490 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_14)
#line 490 "det_report.m"
{
#line 495 "det_report.m"
  {
#line 495 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__TypeCtorInfo_61_61;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_16;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__Context_17;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__ProcPieces_18;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_19;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_21_21;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_26_26;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_27_27;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_34_34;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_35_35;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_37_37;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_40_40;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_41_41;
#line 495 "det_report.m"
    MR_String check_hlds__det_report__V_42_42;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_43_43;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_46_46;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_49_49;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_50_50;
#line 495 "det_report.m"
    MR_String check_hlds__det_report__V_51_51;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_56_56;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_57_57;
#line 495 "det_report.m"
    MR_Word check_hlds__det_report__V_58_58;
#line 496 "det_report.m"
    MR_Word check_hlds__det_report__V_15_15;

#line 496 "det_report.m"
    {
#line 496 "det_report.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_report__ModuleInfo_10, check_hlds__det_report__PredId_8, check_hlds__det_report__ProcId_9, &check_hlds__det_report__V_15_15, &check_hlds__det_report__ProcInfo_16);
    }
#line 497 "det_report.m"
    {
#line 497 "det_report.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_16, &check_hlds__det_report__Context_17);
    }
#line 499 "det_report.m"
    {
#line 499 "det_report.m"
      check_hlds__det_report__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_21_21, 0) = ((MR_Box) (check_hlds__det_report__PredId_8));
#line 499 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_21_21, 1) = ((MR_Box) (check_hlds__det_report__ProcId_9));
#line 499 "det_report.m"
    }
#line 498 "det_report.m"
    {
#line 498 "det_report.m"
      check_hlds__det_report__ProcPieces_18 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_report__ModuleInfo_10, (MR_Integer) 1, check_hlds__det_report__V_21_21);
    }
#line 12178 "check_hlds.det_report.c"
    check_hlds__det_report__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 505 "det_report.m"
    {
#line 505 "det_report.m"
      check_hlds__det_report__V_42_42 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__DeclaredDetism_12);
    }
#line 505 "det_report.m"
    {
#line 505 "det_report.m"
      check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(2), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (check_hlds__det_report__V_42_42));
#line 505 "det_report.m"
    }
#line 507 "det_report.m"
    {
#line 507 "det_report.m"
      check_hlds__det_report__V_51_51 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_13);
    }
#line 507 "det_report.m"
    {
#line 507 "det_report.m"
      check_hlds__det_report__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "det_report.m"
      MR_hl_field(MR_mktag(2), check_hlds__det_report__V_50_50, 0) = ((MR_Box) (check_hlds__det_report__V_51_51));
#line 507 "det_report.m"
    }
#line 507 "det_report.m"
    {
#line 507 "det_report.m"
      check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (check_hlds__det_report__V_50_50));
#line 507 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[66])));
#line 507 "det_report.m"
    }
#line 506 "det_report.m"
    {
#line 506 "det_report.m"
      check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[54])));
#line 506 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 506 "det_report.m"
    }
#line 505 "det_report.m"
    {
#line 505 "det_report.m"
      check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[53])));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 505 "det_report.m"
    }
#line 505 "det_report.m"
    {
#line 505 "det_report.m"
      check_hlds__det_report__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_40_40, 0) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 505 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_40_40, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 505 "det_report.m"
    }
#line 504 "det_report.m"
    {
#line 504 "det_report.m"
      check_hlds__det_report__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[52])));
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (check_hlds__det_report__V_40_40));
#line 504 "det_report.m"
    }
#line 503 "det_report.m"
    {
#line 503 "det_report.m"
      check_hlds__det_report__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 503 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_35_35, 1) = ((MR_Box) (check_hlds__det_report__V_37_37));
#line 503 "det_report.m"
    }
#line 501 "det_report.m"
    {
#line 501 "det_report.m"
      check_hlds__det_report__V_34_34 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_61_61, check_hlds__det_report__MessagePieces_11, check_hlds__det_report__V_35_35);
    }
#line 500 "det_report.m"
    {
#line 500 "det_report.m"
      check_hlds__det_report__V_27_27 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_61_61, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[37]), check_hlds__det_report__V_34_34);
    }
#line 500 "det_report.m"
    {
#line 500 "det_report.m"
      check_hlds__det_report__V_26_26 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_61_61, check_hlds__det_report__ProcPieces_18, check_hlds__det_report__V_27_27);
    }
#line 500 "det_report.m"
    {
#line 500 "det_report.m"
      check_hlds__det_report__Pieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_61_61, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[49]), check_hlds__det_report__V_26_26);
    }
#line 509 "det_report.m"
    {
#line 509 "det_report.m"
      check_hlds__det_report__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 509 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__Pieces_19));
#line 509 "det_report.m"
    }
#line 509 "det_report.m"
    {
#line 509 "det_report.m"
      check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 509 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "det_report.m"
    }
#line 509 "det_report.m"
    {
#line 509 "det_report.m"
      check_hlds__det_report__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 509 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (check_hlds__det_report__Context_17));
#line 509 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_56_56, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 509 "det_report.m"
    }
#line 509 "det_report.m"
    {
#line 509 "det_report.m"
      MR_Word base;
#line 509 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "det_report.m"
      *check_hlds__det_report__Msgs_14 = base;
#line 509 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
#line 509 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "det_report.m"
    }
#line 495 "det_report.m"
  }
#line 490 "det_report.m"
}

#line 349 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
#line 349 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 349 "det_report.m"
{
#line 349 "det_report.m"
  {
#line 349 "det_report.m"
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s *) check_hlds__det_report__env_ptr_arg;

#line 351 "det_report.m"
    {
#line 351 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3, *((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4));
    }
#line 351 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded = ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5 == (MR_Integer) 1);
#line 351 "det_report.m"
    if ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded)
#line 351 "det_report.m"
      {
#line 351 "det_report.m"
        ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont)((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr);
#line 351 "det_report.m"
        return;
      }
#line 349 "det_report.m"
  }
#line 349 "det_report.m"
}

#line 347 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
#line 347 "det_report.m"
  MR_Word check_hlds__det_report__EvalMethod_3,
#line 347 "det_report.m"
  MR_Word * check_hlds__det_report__Detism_4,
#line 347 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 347 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr)
#line 347 "det_report.m"
{
#line 347 "det_report.m"
  {
#line 347 "det_report.m"
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s check_hlds__det_report__env;

#line 347 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3 = check_hlds__det_report__EvalMethod_3;
#line 347 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4 = check_hlds__det_report__Detism_4;
#line 347 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont = check_hlds__det_report__cont;
#line 347 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr = check_hlds__det_report__cont_env_ptr;
#line 359 "det_report.m"
    {
#line 359 "det_report.m"
      MR_Integer check_hlds__det_report__slot_0 = (MR_Integer) 0;

#line 359 "det_report.m"
      do
#line 359 "det_report.m"
        {
#line 359 "det_report.m"
          *((check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4) = ((&check_hlds__det_report_vector_common_7[0 + check_hlds__det_report__slot_0]))->check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
#line 359 "det_report.m"
          {
#line 359 "det_report.m"
            check_hlds__det_report__get_valid_dets_2_p_0_1(&check_hlds__det_report__env);
          }
#line 359 "det_report.m"
          check_hlds__det_report__slot_0 = (check_hlds__det_report__slot_0 + (MR_Integer) 1);
#line 359 "det_report.m"
        }
#line 359 "det_report.m"
      while ((check_hlds__det_report__slot_0 < (MR_Integer) 8));
#line 359 "det_report.m"
    }
#line 347 "det_report.m"
  }
#line 347 "det_report.m"
}

#line 329 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
#line 329 "det_report.m"
  MR_Word check_hlds__det_report__DetismDecl_3)
#line 329 "det_report.m"
{
#line 333 "det_report.m"
  {
#line 333 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 333 "det_report.m"
    MR_String check_hlds__det_report__Name_4;

#line 333 "det_report.m"
    if ((check_hlds__det_report__DetismDecl_3 == (MR_Integer) 0))
#line 334 "det_report.m"
      check_hlds__det_report__Name_4 = (MR_String) "determinism declaration";
#line 333 "det_report.m"
    else
#line 333 "det_report.m"
    if ((check_hlds__det_report__DetismDecl_3 == (MR_Integer) 1))
#line 337 "det_report.m"
      check_hlds__det_report__Name_4 = (MR_String) "implicit determinism declaration";
#line 333 "det_report.m"
    else
#line 340 "det_report.m"
      check_hlds__det_report__Name_4 = (MR_String) "nonexistent determinism declaration";
#line 333 "det_report.m"
    return check_hlds__det_report__Name_4;
#line 333 "det_report.m"
  }
#line 329 "det_report.m"
}

#line 309 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_8,
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 309 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 309 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_21,
#line 309 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_22)
#line 309 "det_report.m"
{
#line 314 "det_report.m"
  {
#line 314 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 314 "det_report.m"
    MR_Word check_hlds__det_report__Markers_14;

#line 315 "det_report.m"
    {
#line 315 "det_report.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Markers_14);
    }
#line 316 "det_report.m"
    {
#line 316 "det_report.m"
      check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_14, (MR_Integer) 23);
    }
#line 325 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 317 "det_report.m"
      {
#line 317 "det_report.m"
        MR_Word check_hlds__det_report__Goal_15;
#line 317 "det_report.m"
        MR_Word check_hlds__det_report__VarTypes_16;
#line 317 "det_report.m"
        MR_Word check_hlds__det_report__InstMap0_17;
#line 317 "det_report.m"
        MR_Word check_hlds__det_report__DetInfo0_18;
#line 317 "det_report.m"
        MR_Word check_hlds__det_report__DetInfo_19;
#line 317 "det_report.m"
        MR_Word check_hlds__det_report__RCSSpecs_20;

#line 317 "det_report.m"
        {
#line 317 "det_report.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Goal_15);
        }
#line 318 "det_report.m"
        {
#line 318 "det_report.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarTypes_16);
        }
#line 319 "det_report.m"
        {
#line 319 "det_report.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_report__ProcInfo_12, check_hlds__det_report__ModuleInfo_8, &check_hlds__det_report__InstMap0_17);
        }
#line 320 "det_report.m"
        {
#line 320 "det_report.m"
          check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_report__ModuleInfo_8, check_hlds__det_report__VarTypes_16, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__DetInfo0_18);
        }
#line 322 "det_report.m"
        {
#line 322 "det_report.m"
          check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_15, check_hlds__det_report__InstMap0_17, check_hlds__det_report__DetInfo0_18, &check_hlds__det_report__DetInfo_19);
        }
#line 323 "det_report.m"
        {
#line 323 "det_report.m"
          check_hlds__det_util__det_info_get_error_specs_2_p_0(check_hlds__det_report__DetInfo_19, &check_hlds__det_report__RCSSpecs_20);
        }
#line 324 "det_report.m"
        {
#line 324 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__det_report__RCSSpecs_20, check_hlds__det_report__STATE_VARIABLE_Specs_0_21);
        }
#line 317 "det_report.m"
      }
#line 325 "det_report.m"
    else
#line 325 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_Specs_22 = check_hlds__det_report__STATE_VARIABLE_Specs_0_21;
#line 314 "det_report.m"
  }
#line 309 "det_report.m"
}

#line 293 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_3(
#line 293 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 293 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 293 "det_report.m"
{
#line 293 "det_report.m"
  {
#line 293 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 293 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 293 "det_report.m"
    MR_String check_hlds__det_report__conv1_HeadVar__2_2;

#line 293 "det_report.m"
    {
#line 293 "det_report.m"
      check_hlds__det_report__conv1_HeadVar__2_2 = parse_tree__prog_out__determinism_to_string_1_f_0(((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 293 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv1_HeadVar__2_2));
#line 293 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 293 "det_report.m"
  }
#line 293 "det_report.m"
}

#line 292 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_1(
#line 292 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 292 "det_report.m"
{
#line 292 "det_report.m"
  {
#line 292 "det_report.m"
    struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s *) check_hlds__det_report__env_ptr_arg;

#line 292 "det_report.m"
    *((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4));
#line 292 "det_report.m"
    {
#line 292 "det_report.m"
      ((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont)((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr);
#line 292 "det_report.m"
      return;
    }
#line 292 "det_report.m"
  }
#line 292 "det_report.m"
}

#line 292 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_2(
#line 292 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 292 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 292 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 292 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr)
#line 292 "det_report.m"
{
#line 292 "det_report.m"
  {
#line 292 "det_report.m"
    struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s check_hlds__det_report__env;

#line 292 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1 = check_hlds__det_report__wrapper_arg_1;
#line 292 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont = check_hlds__det_report__cont;
#line 292 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr = check_hlds__det_report__cont_env_ptr;
#line 292 "det_report.m"
    {
#line 292 "det_report.m"
      MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;

#line 292 "det_report.m"
      {
#line 292 "det_report.m"
        check_hlds__det_report__get_valid_dets_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), &(check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4, check_hlds__det_report__check_determinism_8_p_0_1, &check_hlds__det_report__env);
      }
#line 292 "det_report.m"
    }
#line 292 "det_report.m"
  }
#line 292 "det_report.m"
}

#line 176 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0(
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 176 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45,
#line 176 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46,
#line 176 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_47,
#line 176 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_48)
#line 176 "det_report.m"
{
#line 180 "det_report.m"
  {
#line 180 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 180 "det_report.m"
    MR_Word check_hlds__det_report__MaybeDetism_15;
#line 180 "det_report.m"
    MR_Word check_hlds__det_report__InferredDetism_16;
#line 180 "det_report.m"
    MR_Word check_hlds__det_report__EvalMethod_35;
#line 180 "det_report.m"
    MR_Word check_hlds__det_report__Valid_36;
#line 180 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_87_87;
#line 180 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_88_88;

#line 181 "det_report.m"
    {
#line 181 "det_report.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__MaybeDetism_15);
    }
#line 182 "det_report.m"
    {
#line 182 "det_report.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__InferredDetism_16);
    }
#line 185 "det_report.m"
    if ((check_hlds__det_report__MaybeDetism_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "det_report.m"
      {
#line 184 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45;
#line 184 "det_report.m"
        check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = check_hlds__det_report__STATE_VARIABLE_Specs_0_47;
#line 184 "det_report.m"
      }
#line 185 "det_report.m"
    else
#line 186 "det_report.m"
      {
#line 186 "det_report.m"
        MR_Word check_hlds__det_report__DeclaredDetism_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeDetism_15, (MR_Integer) 0)));
#line 186 "det_report.m"
        MR_Word check_hlds__det_report__Cmp_18;

#line 187 "det_report.m"
        {
#line 187 "det_report.m"
          parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__Cmp_18);
        }
#line 190 "det_report.m"
        if ((check_hlds__det_report__Cmp_18 == (MR_Integer) 2))
#line 191 "det_report.m"
          {
#line 191 "det_report.m"
            MR_Word check_hlds__det_report__Globals_19;
#line 191 "det_report.m"
            MR_Word check_hlds__det_report__ShouldIssueWarning_20;
#line 191 "det_report.m"
            MR_Word check_hlds__det_report__WarnAboutInferredErroneous_21;
#line 191 "det_report.m"
            MR_Word check_hlds__det_report__Markers_22;
#line 199 "det_report.m"
            MR_Word check_hlds__det_report__ImportStatus_23;
#line 199 "det_report.m"
            MR_Word check_hlds__det_report__V_73_73;
#line 205 "det_report.m"
            MR_Word check_hlds__det_report__V_70_70;
#line 208 "det_report.m"
            MR_Word check_hlds__det_report__V_71_71;
#line 212 "det_report.m"
            MR_Word check_hlds__det_report__V_72_72;

#line 192 "det_report.m"
            {
#line 192 "det_report.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, &check_hlds__det_report__Globals_19);
            }
#line 193 "det_report.m"
            {
#line 193 "det_report.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__det_report__Globals_19, (MR_Integer) 7, &check_hlds__det_report__ShouldIssueWarning_20);
            }
#line 195 "det_report.m"
            {
#line 195 "det_report.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__det_report__Globals_19, (MR_Integer) 8, &check_hlds__det_report__WarnAboutInferredErroneous_21);
            }
#line 197 "det_report.m"
            {
#line 197 "det_report.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Markers_22);
            }
#line 199 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__ShouldIssueWarning_20 == (MR_Integer) 1);
#line 199 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 199 "det_report.m"
              {
#line 205 "det_report.m"
                check_hlds__det_report__V_70_70 = (MR_Integer) 10;
#line 205 "det_report.m"
                {
#line 205 "det_report.m"
                  check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_70_70);
                }
#line 205 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 199 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 199 "det_report.m"
                  {
#line 208 "det_report.m"
                    check_hlds__det_report__V_71_71 = (MR_Integer) 0;
#line 208 "det_report.m"
                    {
#line 208 "det_report.m"
                      check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_71_71);
                    }
#line 208 "det_report.m"
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 199 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 199 "det_report.m"
                      {
#line 212 "det_report.m"
                        check_hlds__det_report__V_72_72 = (MR_Integer) 5;
#line 212 "det_report.m"
                        {
#line 212 "det_report.m"
                          check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_72_72);
                        }
#line 212 "det_report.m"
                        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 199 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 199 "det_report.m"
                          {
#line 219 "det_report.m"
                            {
#line 219 "det_report.m"
                              check_hlds__det_report__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__det_report__PredInfo_11);
                            }
#line 219 "det_report.m"
                            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 199 "det_report.m"
                            if (check_hlds__det_report__succeeded)
#line 199 "det_report.m"
                              {
#line 226 "det_report.m"
                                if ((check_hlds__det_report__WarnAboutInferredErroneous_21 == (MR_Integer) 0))
#line 228 "det_report.m"
                                  {
#line 228 "det_report.m"
                                    check_hlds__det_report__succeeded = (check_hlds__det_report__InferredDetism_16 == (MR_Integer) 6);
#line 228 "det_report.m"
                                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 228 "det_report.m"
                                  }
#line 226 "det_report.m"
                                else
#line 225 "det_report.m"
                                  check_hlds__det_report__succeeded = MR_TRUE;
#line 199 "det_report.m"
                                if (check_hlds__det_report__succeeded)
#line 199 "det_report.m"
                                  {
#line 234 "det_report.m"
                                    {
#line 234 "det_report.m"
                                      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__ImportStatus_23);
                                    }
#line 235 "det_report.m"
                                    {
#line 235 "det_report.m"
                                      check_hlds__det_report__V_73_73 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__det_report__ImportStatus_23);
                                    }
#line 235 "det_report.m"
                                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_73_73 == (MR_Integer) 1);
#line 199 "det_report.m"
                                  }
#line 199 "det_report.m"
                              }
#line 199 "det_report.m"
                          }
#line 199 "det_report.m"
                      }
#line 199 "det_report.m"
                  }
#line 199 "det_report.m"
              }
#line 247 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 237 "det_report.m"
              {
#line 237 "det_report.m"
                MR_Word check_hlds__det_report__DetismDecl_24;
#line 237 "det_report.m"
                MR_Word check_hlds__det_report__MessagePieces_25;
#line 237 "det_report.m"
                MR_Word check_hlds__det_report__ReportMsgs_26;
#line 237 "det_report.m"
                MR_Word check_hlds__det_report__ReportSpec_27;
#line 237 "det_report.m"
                MR_Word check_hlds__det_report__V_76_76;
#line 237 "det_report.m"
                MR_Word check_hlds__det_report__V_77_77;
#line 237 "det_report.m"
                MR_String check_hlds__det_report__V_78_78;

#line 237 "det_report.m"
                {
#line 237 "det_report.m"
                  hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__DetismDecl_24);
                }
#line 239 "det_report.m"
                {
#line 239 "det_report.m"
                  check_hlds__det_report__V_78_78 = check_hlds__det_report__detism_decl_name_1_f_0(check_hlds__det_report__DetismDecl_24);
                }
#line 239 "det_report.m"
                {
#line 239 "det_report.m"
                  check_hlds__det_report__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "det_report.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_report__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 239 "det_report.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_report__V_77_77, 1) = ((MR_Box) (check_hlds__det_report__V_78_78));
#line 239 "det_report.m"
                }
#line 239 "det_report.m"
                {
#line 239 "det_report.m"
                  check_hlds__det_report__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_76_76, 0) = ((MR_Box) (check_hlds__det_report__V_77_77));
#line 239 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[9])));
#line 239 "det_report.m"
                }
#line 238 "det_report.m"
                {
#line 238 "det_report.m"
                  check_hlds__det_report__MessagePieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[60])));
#line 238 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_76_76));
#line 238 "det_report.m"
                }
#line 242 "det_report.m"
                {
#line 242 "det_report.m"
                  check_hlds__det_report__report_determinism_problem_7_p_0(check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__MessagePieces_25, check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__ReportMsgs_26);
                }
#line 244 "det_report.m"
                {
#line 244 "det_report.m"
                  check_hlds__det_report__ReportSpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 244 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 244 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 244 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 2) = ((MR_Box) (check_hlds__det_report__ReportMsgs_26));
#line 244 "det_report.m"
                }
#line 246 "det_report.m"
                {
#line 246 "det_report.m"
                  check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (check_hlds__det_report__ReportSpec_27));
#line 246 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_47));
#line 246 "det_report.m"
                }
#line 237 "det_report.m"
              }
#line 247 "det_report.m"
            else
#line 247 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = check_hlds__det_report__STATE_VARIABLE_Specs_0_47;
#line 191 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45;
#line 191 "det_report.m"
          }
#line 190 "det_report.m"
        else
#line 190 "det_report.m"
        if ((check_hlds__det_report__Cmp_18 == (MR_Integer) 1))
#line 189 "det_report.m"
          {
#line 189 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45;
#line 189 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = check_hlds__det_report__STATE_VARIABLE_Specs_0_47;
#line 189 "det_report.m"
          }
#line 190 "det_report.m"
        else
#line 253 "det_report.m"
          {
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__Goal_28;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__VarTypes_29;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__InstMap0_30;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__DetInfo0_31;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__DetInfo_32;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__GoalMsgs_33;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__SortedGoalMsgs_34;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__V_51_51;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__V_52_52;
#line 253 "det_report.m"
            MR_String check_hlds__det_report__V_53_53;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__V_66_66;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__DetismDecl_141;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__MessagePieces_142;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__ReportMsgs_143;
#line 253 "det_report.m"
            MR_Word check_hlds__det_report__ReportSpec_144;

#line 254 "det_report.m"
            {
#line 254 "det_report.m"
              hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__DetismDecl_141);
            }
#line 256 "det_report.m"
            {
#line 256 "det_report.m"
              check_hlds__det_report__V_53_53 = check_hlds__det_report__detism_decl_name_1_f_0(check_hlds__det_report__DetismDecl_141);
            }
#line 256 "det_report.m"
            {
#line 256 "det_report.m"
              check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 256 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_53_53));
#line 256 "det_report.m"
            }
#line 256 "det_report.m"
            {
#line 256 "det_report.m"
              check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 256 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[7])));
#line 256 "det_report.m"
            }
#line 255 "det_report.m"
            {
#line 255 "det_report.m"
              check_hlds__det_report__MessagePieces_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[61])));
#line 255 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_142, 1) = ((MR_Box) (check_hlds__det_report__V_51_51));
#line 255 "det_report.m"
            }
#line 258 "det_report.m"
            {
#line 258 "det_report.m"
              check_hlds__det_report__report_determinism_problem_7_p_0(check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__MessagePieces_142, check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__ReportMsgs_143);
            }
#line 260 "det_report.m"
            {
#line 260 "det_report.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Goal_28);
            }
#line 261 "det_report.m"
            {
#line 261 "det_report.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarTypes_29);
            }
#line 262 "det_report.m"
            {
#line 262 "det_report.m"
              hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_report__ProcInfo_12, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, &check_hlds__det_report__InstMap0_30);
            }
#line 263 "det_report.m"
            {
#line 263 "det_report.m"
              check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__VarTypes_29, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__DetInfo0_31);
            }
#line 265 "det_report.m"
            {
#line 265 "det_report.m"
              check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_28, check_hlds__det_report__InstMap0_30, check_hlds__det_report__DeclaredDetism_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__DetInfo0_31, &check_hlds__det_report__DetInfo_32, &check_hlds__det_report__GoalMsgs_33);
            }
#line 267 "det_report.m"
            {
#line 267 "det_report.m"
              check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_32, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46);
            }
#line 268 "det_report.m"
            {
#line 268 "det_report.m"
              parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_report__GoalMsgs_33, &check_hlds__det_report__SortedGoalMsgs_34);
            }
#line 270 "det_report.m"
            {
#line 270 "det_report.m"
              check_hlds__det_report__V_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__ReportMsgs_143, check_hlds__det_report__SortedGoalMsgs_34);
            }
#line 269 "det_report.m"
            {
#line 269 "det_report.m"
              check_hlds__det_report__ReportSpec_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 269 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 269 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_144, 2) = ((MR_Box) (check_hlds__det_report__V_66_66));
#line 269 "det_report.m"
            }
#line 271 "det_report.m"
            {
#line 271 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (check_hlds__det_report__ReportSpec_144));
#line 271 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_47));
#line 271 "det_report.m"
            }
#line 253 "det_report.m"
          }
#line 186 "det_report.m"
      }
#line 275 "det_report.m"
    {
#line 275 "det_report.m"
      check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(*check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__PredInfo_11, check_hlds__det_report__ProcInfo_12, check_hlds__det_report__STATE_VARIABLE_Specs_87_87, &check_hlds__det_report__STATE_VARIABLE_Specs_88_88);
    }
#line 279 "det_report.m"
    {
#line 279 "det_report.m"
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__EvalMethod_35);
    }
#line 280 "det_report.m"
    {
#line 280 "det_report.m"
      check_hlds__det_report__Valid_36 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0(check_hlds__det_report__EvalMethod_35, check_hlds__det_report__InferredDetism_16);
    }
#line 283 "det_report.m"
    if ((check_hlds__det_report__Valid_36 == (MR_Integer) 0))
#line 284 "det_report.m"
      {
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_147_147;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_148_148;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__Context_37;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__MainPieces_38;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__Detisms_39;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__DetismStrs_40;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__SortedDetismStrs_41;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__DetismPieces_42;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__VerbosePieces_43;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__ValidSpec_44;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_91_91;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_92_92;
#line 284 "det_report.m"
        MR_String check_hlds__det_report__V_93_93;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_94_94;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_97_97;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_100_100;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_101_101;
#line 284 "det_report.m"
        MR_String check_hlds__det_report__V_102_102;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_107_107;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_109_109;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_112_112;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_115_115;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_116_116;
#line 284 "det_report.m"
        MR_String check_hlds__det_report__V_117_117;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_120_120;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_131_131;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_132_132;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_133_133;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_134_134;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_135_135;
#line 284 "det_report.m"
        MR_Word check_hlds__det_report__V_136_136;
#line 299 "det_report.m"
        MR_Box check_hlds__det_report__conv2_V_117_117;

#line 285 "det_report.m"
        {
#line 285 "det_report.m"
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Context_37);
        }
#line 287 "det_report.m"
        {
#line 287 "det_report.m"
          check_hlds__det_report__V_93_93 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(check_hlds__det_report__EvalMethod_35);
        }
#line 287 "det_report.m"
        {
#line 287 "det_report.m"
          check_hlds__det_report__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 287 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_92_92, 1) = ((MR_Box) (check_hlds__det_report__V_93_93));
#line 287 "det_report.m"
        }
#line 290 "det_report.m"
        {
#line 290 "det_report.m"
          check_hlds__det_report__V_102_102 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_16);
        }
#line 290 "det_report.m"
        {
#line 290 "det_report.m"
          check_hlds__det_report__V_101_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 290 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_101_101, 0) = ((MR_Box) (check_hlds__det_report__V_102_102));
#line 290 "det_report.m"
        }
#line 290 "det_report.m"
        {
#line 290 "det_report.m"
          check_hlds__det_report__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_100_100, 0) = ((MR_Box) (check_hlds__det_report__V_101_101));
#line 290 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[66])));
#line 290 "det_report.m"
        }
#line 289 "det_report.m"
        {
#line 289 "det_report.m"
          check_hlds__det_report__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_97_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[64])));
#line 289 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_97_97, 1) = ((MR_Box) (check_hlds__det_report__V_100_100));
#line 289 "det_report.m"
        }
#line 288 "det_report.m"
        {
#line 288 "det_report.m"
          check_hlds__det_report__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[63])));
#line 288 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_94_94, 1) = ((MR_Box) (check_hlds__det_report__V_97_97));
#line 288 "det_report.m"
        }
#line 287 "det_report.m"
        {
#line 287 "det_report.m"
          check_hlds__det_report__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_91_91, 0) = ((MR_Box) (check_hlds__det_report__V_92_92));
#line 287 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_91_91, 1) = ((MR_Box) (check_hlds__det_report__V_94_94));
#line 287 "det_report.m"
        }
#line 286 "det_report.m"
        {
#line 286 "det_report.m"
          check_hlds__det_report__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[62])));
#line 286 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__MainPieces_38, 1) = ((MR_Box) (check_hlds__det_report__V_91_91));
#line 286 "det_report.m"
        }
#line 292 "det_report.m"
        {
#line 292 "det_report.m"
          check_hlds__det_report__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 292 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_107_107, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_6[0]));
#line 292 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_107_107, 1) = ((MR_Box) (check_hlds__det_report__check_determinism_8_p_0_2));
#line 292 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_107_107, 3) = ((MR_Box) (check_hlds__det_report__EvalMethod_35));
#line 292 "det_report.m"
        }
#line 13302 "check_hlds.det_report.c"
        check_hlds__det_report__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0;
#line 292 "det_report.m"
        {
#line 292 "det_report.m"
          mercury__solutions__solutions_2_p_1(check_hlds__det_report__TypeCtorInfo_147_147, check_hlds__det_report__V_107_107, &check_hlds__det_report__Detisms_39);
        }
#line 13309 "check_hlds.det_report.c"
        check_hlds__det_report__TypeCtorInfo_148_148 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 293 "det_report.m"
        {
#line 293 "det_report.m"
          check_hlds__det_report__DetismStrs_40 = mercury__list__map_2_f_0(check_hlds__det_report__TypeCtorInfo_147_147, check_hlds__det_report__TypeCtorInfo_148_148, (MR_Word) &check_hlds__det_report_scalar_common_1[2], check_hlds__det_report__Detisms_39);
        }
#line 294 "det_report.m"
        {
#line 294 "det_report.m"
          mercury__list__sort_2_p_0(check_hlds__det_report__TypeCtorInfo_148_148, check_hlds__det_report__DetismStrs_40, &check_hlds__det_report__SortedDetismStrs_41);
        }
#line 295 "det_report.m"
        {
#line 295 "det_report.m"
          check_hlds__det_report__DetismPieces_42 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_report__SortedDetismStrs_41);
        }
#line 299 "det_report.m"
        {
#line 299 "det_report.m"
          check_hlds__det_report__conv2_V_117_117 = parse_tree__error_util__choose_number_3_f_0(check_hlds__det_report__TypeCtorInfo_147_147, check_hlds__det_report__TypeCtorInfo_148_148, check_hlds__det_report__Detisms_39, ((MR_Box) ((MR_String) "determinism")), ((MR_Box) ((MR_String) "determinisms")));
        }
#line 299 "det_report.m"
        check_hlds__det_report__V_117_117 = ((MR_String) check_hlds__det_report__conv2_V_117_117);
#line 299 "det_report.m"
        {
#line 299 "det_report.m"
          check_hlds__det_report__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 299 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_116_116, 1) = ((MR_Box) (check_hlds__det_report__V_117_117));
#line 299 "det_report.m"
        }
#line 300 "det_report.m"
        {
#line 300 "det_report.m"
          check_hlds__det_report__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[50])));
#line 300 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_120_120, 1) = ((MR_Box) (check_hlds__det_report__DetismPieces_42));
#line 300 "det_report.m"
        }
#line 299 "det_report.m"
        {
#line 299 "det_report.m"
          check_hlds__det_report__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_115_115, 0) = ((MR_Box) (check_hlds__det_report__V_116_116));
#line 299 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_115_115, 1) = ((MR_Box) (check_hlds__det_report__V_120_120));
#line 299 "det_report.m"
        }
#line 298 "det_report.m"
        {
#line 298 "det_report.m"
          check_hlds__det_report__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_112_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68])));
#line 298 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_112_112, 1) = ((MR_Box) (check_hlds__det_report__V_115_115));
#line 298 "det_report.m"
        }
#line 297 "det_report.m"
        {
#line 297 "det_report.m"
          check_hlds__det_report__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[67])));
#line 297 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_109_109, 1) = ((MR_Box) (check_hlds__det_report__V_112_112));
#line 297 "det_report.m"
        }
#line 301 "det_report.m"
        {
#line 301 "det_report.m"
          check_hlds__det_report__VerbosePieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_109_109, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[11]));
        }
#line 304 "det_report.m"
        {
#line 304 "det_report.m"
          check_hlds__det_report__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 304 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_134_134, 0) = ((MR_Box) (check_hlds__det_report__MainPieces_38));
#line 304 "det_report.m"
        }
#line 305 "det_report.m"
        {
#line 305 "det_report.m"
          check_hlds__det_report__V_136_136 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_136_136, 0) = ((MR_Box) ((MR_Integer) 0));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_136_136, 1) = ((MR_Box) (check_hlds__det_report__VerbosePieces_43));
#line 305 "det_report.m"
        }
#line 305 "det_report.m"
        {
#line 305 "det_report.m"
          check_hlds__det_report__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_135_135, 0) = ((MR_Box) (check_hlds__det_report__V_136_136));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "det_report.m"
        }
#line 304 "det_report.m"
        {
#line 304 "det_report.m"
          check_hlds__det_report__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_133_133, 0) = ((MR_Box) (check_hlds__det_report__V_134_134));
#line 304 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_133_133, 1) = ((MR_Box) (check_hlds__det_report__V_135_135));
#line 304 "det_report.m"
        }
#line 303 "det_report.m"
        {
#line 303 "det_report.m"
          check_hlds__det_report__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_132_132, 0) = ((MR_Box) (check_hlds__det_report__Context_37));
#line 303 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_132_132, 1) = ((MR_Box) (check_hlds__det_report__V_133_133));
#line 303 "det_report.m"
        }
#line 305 "det_report.m"
        {
#line 305 "det_report.m"
          check_hlds__det_report__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_131_131, 0) = ((MR_Box) (check_hlds__det_report__V_132_132));
#line 305 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "det_report.m"
        }
#line 302 "det_report.m"
        {
#line 302 "det_report.m"
          check_hlds__det_report__ValidSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 302 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 302 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 2) = ((MR_Box) (check_hlds__det_report__V_131_131));
#line 302 "det_report.m"
        }
#line 306 "det_report.m"
        {
#line 306 "det_report.m"
          MR_Word base;
#line 306 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_Specs_48 = base;
#line 306 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__ValidSpec_44));
#line 306 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_88_88));
#line 306 "det_report.m"
        }
#line 284 "det_report.m"
      }
#line 283 "det_report.m"
    else
#line 282 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_Specs_48 = check_hlds__det_report__STATE_VARIABLE_Specs_88_88;
#line 180 "det_report.m"
  }
#line 176 "det_report.m"
}

#line 1660 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
#line 1660 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1660 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1660 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 1660 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_3)
#line 1660 "det_report.m"
{
#line 1660 "det_report.m"
  {
#line 1660 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1660 "det_report.m"
    MR_Word check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8;

#line 1660 "det_report.m"
    {
#line 1660 "det_report.m"
      check_hlds__det_report__restore_option_3_p_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2), &check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8);
    }
#line 1660 "det_report.m"
    *check_hlds__det_report__wrapper_arg_3 = ((MR_Box) (check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8));
#line 1660 "det_report.m"
  }
#line 1660 "det_report.m"
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
#line 1659 "det_report.m"
  {
#line 1659 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1660 "det_report.m"
    MR_Box check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7;

#line 1660 "det_report.m"
    {
#line 1660 "det_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__det_report_scalar_common_1[0], (MR_Word) &libs__globals__libs__globals__type_ctor_info_globals_0, (MR_Word) &check_hlds__det_report_scalar_common_1[1], check_hlds__det_report__OptionsToRestore_4, ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Globals_0_6)), &check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7);
    }
#line 1660 "det_report.m"
    *check_hlds__det_report__STATE_VARIABLE_Globals_7 = ((MR_Word) check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7);
#line 1659 "det_report.m"
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
#line 1649 "det_report.m"
  {
#line 1649 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1649 "det_report.m"
    MR_Word check_hlds__det_report__WarnSimple_6;
#line 1649 "det_report.m"
    MR_Word check_hlds__det_report__WarnDeclsTooLax_7;
#line 1649 "det_report.m"
    MR_Word check_hlds__det_report__V_13_13;
#line 1649 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_14_14;
#line 1649 "det_report.m"
    MR_Word check_hlds__det_report__V_20_20;
#line 1649 "det_report.m"
    MR_Word check_hlds__det_report__V_22_22;
#line 1649 "det_report.m"
    MR_Word check_hlds__det_report__V_23_23;

#line 1650 "det_report.m"
    {
#line 1650 "det_report.m"
      libs__globals__lookup_option_3_p_0(check_hlds__det_report__STATE_VARIABLE_Globals_0_8, (MR_Integer) 19, &check_hlds__det_report__WarnSimple_6);
    }
#line 1651 "det_report.m"
    {
#line 1651 "det_report.m"
      libs__globals__lookup_option_3_p_0(check_hlds__det_report__STATE_VARIABLE_Globals_0_8, (MR_Integer) 7, &check_hlds__det_report__WarnDeclsTooLax_7);
    }
#line 1652 "det_report.m"
    check_hlds__det_report__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[4]);
#line 1652 "det_report.m"
    {
#line 1652 "det_report.m"
      libs__globals__set_option_4_p_0((MR_Integer) 19, check_hlds__det_report__V_13_13, check_hlds__det_report__STATE_VARIABLE_Globals_0_8, &check_hlds__det_report__STATE_VARIABLE_Globals_14_14);
    }
#line 1653 "det_report.m"
    {
#line 1653 "det_report.m"
      libs__globals__set_option_4_p_0((MR_Integer) 7, check_hlds__det_report__V_13_13, check_hlds__det_report__STATE_VARIABLE_Globals_14_14, check_hlds__det_report__STATE_VARIABLE_Globals_9);
    }
#line 1655 "det_report.m"
    {
#line 1655 "det_report.m"
      check_hlds__det_report__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1655 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 0) = ((MR_Box) ((MR_Integer) 19));
#line 1655 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 1) = ((MR_Box) (check_hlds__det_report__WarnSimple_6));
#line 1655 "det_report.m"
    }
#line 1656 "det_report.m"
    {
#line 1656 "det_report.m"
      check_hlds__det_report__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_23_23, 0) = ((MR_Box) ((MR_Integer) 7));
#line 1656 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_23_23, 1) = ((MR_Box) (check_hlds__det_report__WarnDeclsTooLax_7));
#line 1656 "det_report.m"
    }
#line 1657 "det_report.m"
    {
#line 1657 "det_report.m"
      check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1657 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__V_23_23));
#line 1657 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1657 "det_report.m"
    }
#line 1655 "det_report.m"
    {
#line 1655 "det_report.m"
      MR_Word base;
#line 1655 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1655 "det_report.m"
      *check_hlds__det_report__OptionsToRestore_4 = base;
#line 1655 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_20_20));
#line 1655 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__V_22_22));
#line 1655 "det_report.m"
    }
#line 1649 "det_report.m"
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
#line 1607 "det_report.m"
  {
#line 1607 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1607 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_6;

#line 1607 "det_report.m"
    if ((check_hlds__det_report__SeenCall_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1612 "det_report.m"
      {
#line 1613 "det_report.m"
        check_hlds__det_report__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[58]);
#line 1612 "det_report.m"
      }
#line 1607 "det_report.m"
    else
#line 1607 "det_report.m"
      {
#line 1607 "det_report.m"
        MR_Word check_hlds__det_report__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__SeenCall_5, (MR_Integer) 0)));
#line 1607 "det_report.m"
        MR_Word check_hlds__det_report__PredPieces_9;
#line 1607 "det_report.m"
        MR_Integer check_hlds__det_report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__SeenCall_5, (MR_Integer) 1)));

#line 1608 "det_report.m"
        {
#line 1608 "det_report.m"
          check_hlds__det_report__PredPieces_9 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_report__ModuleInfo_4, (MR_Integer) 0, check_hlds__det_report__PredId_7);
        }
#line 1610 "det_report.m"
        {
#line 1610 "det_report.m"
          check_hlds__det_report__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[59])));
#line 1610 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_6, 1) = ((MR_Box) (check_hlds__det_report__PredPieces_9));
#line 1610 "det_report.m"
        }
#line 1607 "det_report.m"
      }
#line 1607 "det_report.m"
    return check_hlds__det_report__Pieces_6;
#line 1607 "det_report.m"
  }
#line 108 "det_report.m"
}

#line 1562 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
#line 1562 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1562 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 1562 "det_report.m"
{
#line 1562 "det_report.m"
  {
#line 1562 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 1562 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1562 "det_report.m"
    MR_Word check_hlds__det_report__conv0_Msg_8;

#line 1562 "det_report.m"
    {
#line 1562 "det_report.m"
      check_hlds__det_report__conv0_Msg_8 = check_hlds__det_report__failing_context_description_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 1562 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_Msg_8));
#line 1562 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 1562 "det_report.m"
  }
#line 1562 "det_report.m"
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
#line 1561 "det_report.m"
  {
#line 1561 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__HeadVar__4_4;
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__V_8_8;

#line 1562 "det_report.m"
    {
#line 1562 "det_report.m"
      check_hlds__det_report__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1562 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_4[0]));
#line 1562 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 1) = ((MR_Box) (check_hlds__det_report__failing_contexts_description_3_f_0_1));
#line 1562 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1562 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 3) = ((MR_Box) (check_hlds__det_report__ModuleInfo_5));
#line 1562 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 4) = ((MR_Box) (check_hlds__det_report__VarSet_6));
#line 1562 "det_report.m"
    }
#line 1562 "det_report.m"
    {
#line 1562 "det_report.m"
      check_hlds__det_report__HeadVar__4_4 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_8_8, check_hlds__det_report__FailingContexts_7);
    }
#line 1561 "det_report.m"
    return check_hlds__det_report__HeadVar__4_4;
#line 1561 "det_report.m"
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
#line 1558 "det_report.m"
  {
#line 1558 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1558 "det_report.m"
    MR_String check_hlds__det_report__HeadVar__3_3;

#line 1559 "det_report.m"
    {
#line 1559 "det_report.m"
      return check_hlds__det_report__HeadVar__3_3 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_4, (MR_Integer) 0, check_hlds__det_report__Var_5);
    }
#line 1558 "det_report.m"
    return check_hlds__det_report__HeadVar__3_3;
#line 1558 "det_report.m"
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
#line 1552 "det_report.m"
  {
#line 1552 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1552 "det_report.m"
    MR_String check_hlds__det_report__HeadVar__2_2;

#line 1552 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == (MR_Integer) 1))
#line 1554 "det_report.m"
      check_hlds__det_report__HeadVar__2_2 = (MR_String) "promise_equivalent_solution_sets";
#line 1552 "det_report.m"
    else
#line 1552 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == (MR_Integer) 2))
#line 1556 "det_report.m"
      check_hlds__det_report__HeadVar__2_2 = (MR_String) "arbitrary";
#line 1552 "det_report.m"
    else
#line 1552 "det_report.m"
      check_hlds__det_report__HeadVar__2_2 = (MR_String) "promise_equivalent_solutions";
#line 1552 "det_report.m"
    return check_hlds__det_report__HeadVar__2_2;
#line 1552 "det_report.m"
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
#line 767 "det_report.m"
  {
#line 767 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 767 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "det_report.m"
      {
#line 767 "det_report.m"
        *check_hlds__det_report__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 767 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 767 "det_report.m"
      }
#line 767 "det_report.m"
    else
#line 769 "det_report.m"
      {
#line 769 "det_report.m"
        MR_Word check_hlds__det_report__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 769 "det_report.m"
        MR_Word check_hlds__det_report__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_21;
#line 769 "det_report.m"
        MR_Word check_hlds__det_report__InstMap1_22;
#line 769 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_23;
#line 769 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26;

#line 770 "det_report.m"
        {
#line 770 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26, &check_hlds__det_report__Msgs1_21);
        }
#line 772 "det_report.m"
        {
#line 772 "det_report.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__HeadVar__2_2, &check_hlds__det_report__InstMap1_22);
        }
#line 773 "det_report.m"
        {
#line 773 "det_report.m"
          check_hlds__det_report__det_diagnose_conj_7_p_0(check_hlds__det_report__Goals_15, check_hlds__det_report__InstMap1_22, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26, check_hlds__det_report__STATE_VARIABLE_DetInfo_6, &check_hlds__det_report__Msgs2_23);
        }
#line 775 "det_report.m"
        {
#line 775 "det_report.m"
          *check_hlds__det_report__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_21, check_hlds__det_report__Msgs2_23);
        }
#line 769 "det_report.m"
      }
#line 767 "det_report.m"
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
#line 457 "det_report.m"
  {
#line 457 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 457 "det_report.m"
    MR_Word check_hlds__det_report__Cmp_14;

#line 458 "det_report.m"
    {
#line 458 "det_report.m"
      parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__InferredDetism_9, &check_hlds__det_report__Cmp_14);
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
#line 462 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_84;
#line 462 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_85;
#line 462 "det_report.m"
        MR_Word check_hlds__det_report__Actual_86;
#line 462 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_87;

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
#line 468 "det_report.m"
        {
#line 468 "det_report.m"
          check_hlds__det_report__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (check_hlds__det_report__PredId_15));
#line 468 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__ProcId_16));
#line 468 "det_report.m"
        }
#line 467 "det_report.m"
        {
#line 467 "det_report.m"
          check_hlds__det_report__PredPieces_19 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_report__ModuleInfo_18, (MR_Integer) 1, check_hlds__det_report__V_27_27);
        }
#line 14077 "check_hlds.det_report.c"
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
#line 475 "det_report.m"
        {
#line 475 "det_report.m"
          check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
#line 475 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[56])));
#line 475 "det_report.m"
        }
#line 474 "det_report.m"
        {
#line 474 "det_report.m"
          check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[54])));
#line 474 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_55_55));
#line 474 "det_report.m"
        }
#line 473 "det_report.m"
        {
#line 473 "det_report.m"
          check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[53])));
#line 473 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 473 "det_report.m"
        }
#line 473 "det_report.m"
        {
#line 473 "det_report.m"
          check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 473 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 473 "det_report.m"
        }
#line 472 "det_report.m"
        {
#line 472 "det_report.m"
          check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[52])));
#line 472 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 472 "det_report.m"
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
#line 471 "det_report.m"
        {
#line 471 "det_report.m"
          check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[51])));
#line 471 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 471 "det_report.m"
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
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[50])));
#line 470 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
#line 470 "det_report.m"
        }
#line 470 "det_report.m"
        {
#line 470 "det_report.m"
          check_hlds__det_report__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_74_74, check_hlds__det_report__PredPieces_19, check_hlds__det_report__V_33_33);
        }
#line 470 "det_report.m"
        {
#line 470 "det_report.m"
          check_hlds__det_report__Pieces_20 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_74_74, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[49]), check_hlds__det_report__V_32_32);
        }
#line 521 "det_report.m"
        check_hlds__det_report__GoalExpr_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_10, (MR_Integer) 0)));
#line 521 "det_report.m"
        check_hlds__det_report__GoalInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_10, (MR_Integer) 1)));
#line 522 "det_report.m"
        {
#line 522 "det_report.m"
          check_hlds__det_report__Actual_86 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_85);
        }
#line 523 "det_report.m"
        {
#line 523 "det_report.m"
          parse_tree__prog_data__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__Actual_86, &check_hlds__det_report__CompareResult_87);
        }
#line 530 "det_report.m"
        if ((((check_hlds__det_report__CompareResult_87 == (MR_Integer) 3)) || ((check_hlds__det_report__CompareResult_87 == (MR_Integer) 0))))
#line 528 "det_report.m"
          {
#line 528 "det_report.m"
            check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_84, check_hlds__det_report__GoalInfo_85, check_hlds__det_report__InstMap0_12, check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__Actual_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__STATE_VARIABLE_DetInfo_63_63, &check_hlds__det_report__GoalMsgs_21);
          }
#line 530 "det_report.m"
        else
#line 533 "det_report.m"
          {
#line 534 "det_report.m"
            check_hlds__det_report__GoalMsgs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DetInfo_63_63 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
#line 533 "det_report.m"
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
#line 480 "det_report.m"
        {
#line 480 "det_report.m"
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
#line 457 "det_report.m"
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
#line 165 "det_report.m"
  while (MR_TRUE)
#line 165 "det_report.m"
    {
#line 165 "det_report.m"
      /* tailcall optimized into a loop */
#line 165 "det_report.m"
      {
#line 165 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 165 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "det_report.m"
          {
#line 165 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_Specs_5 = check_hlds__det_report__STATE_VARIABLE_Specs_0_4;
#line 165 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_3 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2;
#line 165 "det_report.m"
          }
#line 165 "det_report.m"
        else
#line 166 "det_report.m"
          {
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__Proc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__Procs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Proc_12, (MR_Integer) 0)));
#line 166 "det_report.m"
            MR_Integer check_hlds__det_report__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Proc_12, (MR_Integer) 1)));
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__PredInfo_18;
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__ProcInfo_19;
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24;
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_25_25;
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_26_26;
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_27_27;
#line 166 "det_report.m"
            MR_Word check_hlds__det_report__MaybeDetism_37;
#line 377 "det_report.m"
            MR_Word check_hlds__det_report__DeclaredDetism_38;
#line 377 "det_report.m"
            MR_String check_hlds__det_report__V_42_42;
#line 377 "det_report.m"
            MR_Integer check_hlds__det_report__V_43_43;

#line 168 "det_report.m"
            {
#line 168 "det_report.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__det_report__PredId_16, check_hlds__det_report__ProcId_17, &check_hlds__det_report__PredInfo_18, &check_hlds__det_report__ProcInfo_19);
            }
#line 170 "det_report.m"
            {
#line 170 "det_report.m"
              check_hlds__det_report__check_determinism_8_p_0(check_hlds__det_report__PredId_16, check_hlds__det_report__ProcId_17, check_hlds__det_report__PredInfo_18, check_hlds__det_report__ProcInfo_19, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24, check_hlds__det_report__STATE_VARIABLE_Specs_0_4, &check_hlds__det_report__STATE_VARIABLE_Specs_25_25);
            }
#line 375 "det_report.m"
            {
#line 375 "det_report.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_report__ProcInfo_19, &check_hlds__det_report__MaybeDetism_37);
            }
#line 377 "det_report.m"
            {
#line 377 "det_report.m"
              check_hlds__det_report__V_42_42 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_report__PredInfo_18);
            }
#line 377 "det_report.m"
            check_hlds__det_report__succeeded = (strcmp(check_hlds__det_report__V_42_42, (MR_String) "main") == 0);
#line 377 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 377 "det_report.m"
              {
#line 378 "det_report.m"
                {
#line 378 "det_report.m"
                  check_hlds__det_report__V_43_43 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__det_report__PredInfo_18);
                }
#line 378 "det_report.m"
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_43_43 == (MR_Integer) 2);
#line 377 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 377 "det_report.m"
                  {
#line 379 "det_report.m"
                    {
#line 379 "det_report.m"
                      check_hlds__det_report__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__det_report__PredInfo_18);
                    }
#line 377 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 377 "det_report.m"
                      {
#line 380 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__MaybeDetism_37)) == (MR_mktag((MR_Integer) 1)));
#line 380 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 380 "det_report.m"
                          {
#line 380 "det_report.m"
                            check_hlds__det_report__DeclaredDetism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeDetism_37, (MR_Integer) 0)));
#line 383 "det_report.m"
                            if ((check_hlds__det_report__DeclaredDetism_38 == (MR_Integer) 4))
#line 384 "det_report.m"
                              check_hlds__det_report__succeeded = MR_TRUE;
#line 383 "det_report.m"
                            else
#line 383 "det_report.m"
                            if ((check_hlds__det_report__DeclaredDetism_38 == (MR_Integer) 0))
#line 382 "det_report.m"
                              check_hlds__det_report__succeeded = MR_TRUE;
#line 383 "det_report.m"
                            else
#line 383 "det_report.m"
                              check_hlds__det_report__succeeded = MR_FALSE;
#line 381 "det_report.m"
                            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 380 "det_report.m"
                          }
#line 377 "det_report.m"
                      }
#line 377 "det_report.m"
                  }
#line 377 "det_report.m"
              }
#line 394 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 387 "det_report.m"
              {
#line 387 "det_report.m"
                MR_Word check_hlds__det_report__ProcContext_39;
#line 387 "det_report.m"
                MR_Word check_hlds__det_report__Spec_41;
#line 387 "det_report.m"
                MR_Word check_hlds__det_report__V_70_70;
#line 387 "det_report.m"
                MR_Word check_hlds__det_report__V_71_71;

#line 387 "det_report.m"
                {
#line 387 "det_report.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_19, &check_hlds__det_report__ProcContext_39);
                }
#line 392 "det_report.m"
                {
#line 392 "det_report.m"
                  check_hlds__det_report__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_71_71, 0) = ((MR_Box) (check_hlds__det_report__ProcContext_39));
#line 392 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[47])));
#line 392 "det_report.m"
                }
#line 392 "det_report.m"
                {
#line 392 "det_report.m"
                  check_hlds__det_report__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_70_70, 0) = ((MR_Box) (check_hlds__det_report__V_71_71));
#line 392 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "det_report.m"
                }
#line 391 "det_report.m"
                {
#line 391 "det_report.m"
                  check_hlds__det_report__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 391 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 391 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 2) = ((MR_Box) (check_hlds__det_report__V_70_70));
#line 391 "det_report.m"
                }
#line 393 "det_report.m"
                {
#line 393 "det_report.m"
                  check_hlds__det_report__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__det_report__Spec_41));
#line 393 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_25_25));
#line 393 "det_report.m"
                }
#line 387 "det_report.m"
              }
#line 394 "det_report.m"
            else
#line 394 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_26_26 = check_hlds__det_report__STATE_VARIABLE_Specs_25_25;
#line 172 "det_report.m"
            {
#line 172 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(check_hlds__det_report__PredId_16, check_hlds__det_report__PredInfo_18, check_hlds__det_report__ProcInfo_19, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24, check_hlds__det_report__STATE_VARIABLE_Specs_26_26, &check_hlds__det_report__STATE_VARIABLE_Specs_27_27);
            }
#line 174 "det_report.m"
            /* direct tailcall eliminated */
#line 174 "det_report.m"
            {
#line 174 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Procs_13;
#line 174 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24;
#line 174 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__det_report__STATE_VARIABLE_Specs_27_27;

#line 174 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_0_4 = check_hlds__det_report__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 174 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 174 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 174 "det_report.m"
            }
#line 174 "det_report.m"
            continue;
#line 166 "det_report.m"
          }
#line 165 "det_report.m"
      }
#line 165 "det_report.m"
      break;
#line 165 "det_report.m"
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
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_detism_check_kind_0);
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
