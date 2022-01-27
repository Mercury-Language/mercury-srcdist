/*
** Automatically generated from `det_report.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 397 "det_report.m"
struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s {
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12;
#line 402 "det_report.m"
  MR_bool check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 411 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_65_65;
#line 411 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18;
#line 421 "det_report.m"
  jmp_buf check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 421 "det_report.m"
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20;
#line 420 "det_report.m"
  MR_Box check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20;
#line 397 "det_report.m"
};

#line 346 "det_report.m"
struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s {
#line 346 "det_report.m"
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3;
#line 346 "det_report.m"
  MR_Word * check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4;
#line 346 "det_report.m"
  MR_Cont check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont;
#line 346 "det_report.m"
  void * check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr;
#line 348 "det_report.m"
  MR_bool check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded;
#line 348 "det_report.m"
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5;
#line 346 "det_report.m"
};

#line 291 "det_report.m"
struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s {
#line 291 "det_report.m"
  MR_Box * check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1;
#line 291 "det_report.m"
  MR_Cont check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont;
#line 291 "det_report.m"
  void * check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr;
#line 291 "det_report.m"
  MR_Word check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4;
#line 291 "det_report.m"
};


#line 205 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 211 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1];

#line 214 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0;

#line 217 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1;

#line 220 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1];

#line 223 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1];

#line 226 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[2];

#line 229 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2];

#line 232 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2];

#line 235 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1];

#line 238 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0;

#line 241 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1;

#line 244 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1];

#line 247 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1];

#line 250 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0[2];

#line 253 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0[2];

#line 256 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0[2];

#line 259 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2];

#line 262 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0;

#line 265 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1];

#line 268 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1];

#line 271 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1];

#line 274 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1];

#line 277 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 280 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1];

#line 283 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0;

#line 286 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1;

#line 289 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2];

#line 292 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2;

#line 295 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2];

#line 298 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3;

#line 301 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2];

#line 304 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4;

#line 307 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1];

#line 310 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5;

#line 313 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6;

#line 316 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2];

#line 319 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1];

#line 322 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1];

#line 325 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3];

#line 328 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0[4];

#line 331 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7];

#line 334 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7];

#line 337 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 340 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 343 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2];

#line 346 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0;

#line 349 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1;

#line 352 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1];

#line 355 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1];

#line 358 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0[2];

#line 361 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2];

#line 364 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2];

#line 367 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0;

#line 370 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3];

#line 373 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0;

#line 376 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1];

#line 379 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1];

#line 382 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1];

#line 385 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1];

#line 388 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 391 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 394 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2];

#line 397 "check_hlds.det_report.c"
static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0;

#line 400 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1];

#line 403 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1];

#line 406 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1];

#line 409 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1];

#line 412 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
#line 415 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 417 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 420 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
#line 423 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 425 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 427 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 430 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
#line 433 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 435 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 438 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
#line 441 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 443 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 445 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 448 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
#line 451 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 453 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 456 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
#line 459 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 461 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 463 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 466 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
#line 469 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 471 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 474 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
#line 477 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 479 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 481 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 484 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
#line 487 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 489 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 492 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
#line 495 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 497 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 499 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 502 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
#line 505 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 507 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 510 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
#line 513 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 515 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 517 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 520 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
#line 523 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 525 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 528 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
#line 531 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 533 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 535 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 538 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
#line 541 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 543 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2);

#line 546 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
#line 549 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 551 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 553 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3);

#line 1493 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_First_0_27,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__Last_10,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__UnifyContext_12,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_13,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__LHS_14,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__RHS_15,
#line 1493 "det_report.m"
  MR_Word * check_hlds__det_report__AllPieces_16);

#line 421 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(
#line 421 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 420 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3(
#line 420 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 421 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(
#line 421 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 421 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(
#line 421 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 397 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_10,
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_11,
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_12,
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_27,
#line 397 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_28);

#line 1401 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
#line 1401 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1401 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1401 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3);

#line 1401 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
#line 1401 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1401 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2);

#line 1141 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
#line 1141 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1141 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1141 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3);

#line 1141 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
#line 1141 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1141 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2);

#line 1627 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
#line 1627 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1627 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_7,
#line 1627 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_8);

#line 1558 "det_report.m"
static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
#line 1558 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_5,
#line 1558 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_6,
#line 1558 "det_report.m"
  MR_Word check_hlds__det_report__FailingContext_7);

#line 1433 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
#line 1433 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 1433 "det_report.m"
  MR_Word check_hlds__det_report__CallUnifyContext_9,
#line 1433 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_10,
#line 1433 "det_report.m"
  MR_Word check_hlds__det_report__PredId_11,
#line 1433 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_12,
#line 1433 "det_report.m"
  MR_Word * check_hlds__det_report__InitMsgs_13,
#line 1433 "det_report.m"
  MR_Word * check_hlds__det_report__StartingPieces_14);

#line 1425 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
#line 1425 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_4,
#line 1425 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2);

#line 1414 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
#line 1414 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1414 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);

#line 1404 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
#line 1404 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_1,
#line 1404 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1404 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__3_3);

#line 1354 "det_report.m"
static void MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_2_p_0(
#line 1354 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1354 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__2_2);

#line 1344 "det_report.m"
static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
#line 1344 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1344 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2,
#line 1344 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3);

#line 1331 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_uncovered_consids_4_p_0(
#line 1331 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1331 "det_report.m"
  MR_Word check_hlds__det_report__CoveredConsIds_2,
#line 1331 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3,
#line 1331 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4);

#line 1307 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0_1(
#line 1307 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1307 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1307 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2);

#line 1290 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0(
#line 1290 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_7,
#line 1290 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_8,
#line 1290 "det_report.m"
  MR_Word check_hlds__det_report__Var_9,
#line 1290 "det_report.m"
  MR_Word check_hlds__det_report__Cases_10,
#line 1290 "det_report.m"
  MR_String * check_hlds__det_report__VarStr_11,
#line 1290 "det_report.m"
  MR_Word * check_hlds__det_report__MaybeMissingPieces_12);

#line 1279 "det_report.m"
static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
#line 1279 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1279 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1279 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0_3,
#line 1279 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_InstMap_4);

#line 1266 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_switch_6_p_0(
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 1266 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6);

#line 1258 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_4_p_0(
#line 1258 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1258 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1258 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1258 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4);

#line 1249 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_4_p_0(
#line 1249 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1249 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1249 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1249 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4);

#line 1224 "det_report.m"
static void MR_CALL 
check_hlds__det_report__generate_warning_for_switch_var_if_missing_5_p_0(
#line 1224 "det_report.m"
  MR_Word check_hlds__det_report__RequiredVar_6,
#line 1224 "det_report.m"
  MR_Word check_hlds__det_report__Goal_7,
#line 1224 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_8,
#line 1224 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
#line 1224 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19);

#line 1198 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_for_cases_8_p_0(
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 1198 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8);

#line 1145 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__RequiredDetism_7,
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__CheckKind_9,
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25,
#line 1145 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_26);

#line 1038 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_6_p_0(
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__Reason_7,
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__SubGoal_8,
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_9,
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49,
#line 1038 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_50);

#line 973 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_4_p_0(
#line 973 "det_report.m"
  MR_Word check_hlds__det_report__Goal_5,
#line 973 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_6,
#line 973 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75,
#line 973 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_76);

#line 953 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_2,
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 953 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
#line 953 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__7_7);

#line 948 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
#line 948 "det_report.m"
  MR_Word check_hlds__det_report__ConsId_3,
#line 948 "det_report.m"
  MR_Word * check_hlds__det_report__Match_4);

#line 910 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
#line 910 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 910 "det_report.m"
  MR_Word check_hlds__det_report__SwitchVarSynonyms_2,
#line 910 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 910 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 910 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__5_5,
#line 910 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__6_6);

#line 856 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
#line 856 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 856 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 856 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2);

#line 849 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
#line 849 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 849 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2,
#line 849 "det_report.m"
  MR_Word check_hlds__det_report__MainConsId_3,
#line 849 "det_report.m"
  MR_Word check_hlds__det_report__OtherConsIds_4,
#line 849 "det_report.m"
  MR_Word * check_hlds__det_report__MainMatch_5,
#line 849 "det_report.m"
  MR_Word * check_hlds__det_report__OtherMatches_6);

#line 815 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_4,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 815 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8,
#line 815 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__9_9);

#line 774 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
#line 774 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7,
#line 774 "det_report.m"
  MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8,
#line 774 "det_report.m"
  MR_Integer * check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9,
#line 774 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__10_10);

#line 707 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
#line 707 "det_report.m"
  MR_Word check_hlds__det_report__Desired_6,
#line 707 "det_report.m"
  MR_Word check_hlds__det_report__Actual_7,
#line 707 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 707 "det_report.m"
  MR_Word check_hlds__det_report__StartingPieces_9,
#line 707 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_10);

#line 534 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__GoalExpr_10,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__GoalInfo_11,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_12,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__Desired_13,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__Actual_14,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_15,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109,
#line 534 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_110,
#line 534 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_17);

#line 511 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_9,
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__Desired_10,
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_11,
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
#line 511 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19,
#line 511 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_13);

#line 488 "det_report.m"
static void MR_CALL 
check_hlds__det_report__report_determinism_problem_7_p_0(
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 488 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_9,
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_10,
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__MessagePieces_11,
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__DeclaredDetism_12,
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__InferredDetism_13,
#line 488 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_14);

#line 348 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
#line 348 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 346 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
#line 346 "det_report.m"
  MR_Word check_hlds__det_report__EvalMethod_3,
#line 346 "det_report.m"
  MR_Word * check_hlds__det_report__Detism_4,
#line 346 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 346 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr);

#line 328 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
#line 328 "det_report.m"
  MR_Word check_hlds__det_report__DetismDecl_3);

#line 308 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_8,
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 308 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_21,
#line 308 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_22);

#line 292 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_3(
#line 292 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 292 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);

#line 291 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_1(
#line 291 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg);

#line 291 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_2(
#line 291 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 291 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 291 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 291 "det_report.m"
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

#line 1625 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
#line 1625 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1625 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1625 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 1625 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_3);

#line 1556 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
#line 1556 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1556 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[132][2];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[5][1];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_6[3][5];


#line 358 "det_report.m"
/* sealed */ struct check_hlds__det_report__vector_common_type_7_0_s {
#line 358 "det_report.m"
  const MR_Word check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
#line 358 "det_report.m"
};

static /* final */ const struct check_hlds__det_report__vector_common_type_7_0_s check_hlds__det_report_vector_common_7[8];

#line 736 "det_report.m"
/* sealed */ struct check_hlds__det_report__vector_common_type_8_0_s {
#line 736 "det_report.m"
  const MR_Word check_hlds__det_report__vector_common_type_8_0__vct_8_f_0;
#line 736 "det_report.m"
};

static /* final */ const struct check_hlds__det_report__vector_common_type_8_0_s check_hlds__det_report_vector_common_8[4];



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

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[132][2] = {
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
    ((MR_Box) ((MR_String) "\'."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not satisfied."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "could be tighter."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[22]))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[21])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not a function."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Most likely, this procedure should be a predicate,"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "arguments would break referential transparency.)"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(Allowing functions to have more than one result for the same"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be determined only by the values of its arguments."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of its arguments; that is, the value of the function\'s result"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a function is supposed to be a true mathematical function"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In Mercury,"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Disjunction has multiple clauses with solutions."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Negated goal can succeed."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 53 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it is not."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it does not occur in the subgoal."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is the subject of a require_complete_switch scope,"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Determinism error in lambda expression."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Declared"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inferred"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "higher-order call"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration not allowed for procedure"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The pragma requested is only valid"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for the following"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Determinism declaration not satisfied."))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Desired determinism is"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can fail"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can succeed"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can succeed more than once"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has unknown determinism problem;"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "desired determinism is"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "while actual determinism is"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the switch on"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it does not cover"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: required determinism is"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but actual determinism is"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: variable "))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Inside the case"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the switch on"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Some weird unification(or explicit call to a type-specific unify predicate\?)"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Call to"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Unification of"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Fail goal can fail."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Switch on"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is incomplete."))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid determinism for"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the primary mode of a function cannot be"))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[42])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_report_scalar_common_2[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "main"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[26])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[48])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[50])))
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

static /* final */ const struct check_hlds__det_report__vector_common_type_8_0_s check_hlds__det_report_vector_common_8[4] = {
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[92]) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[94]) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[92]) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[92]) },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2038 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2046 "check_hlds.det_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2055 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 2060 "check_hlds.det_report.c"
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

#line 2075 "check_hlds.det_report.c"
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

#line 2090 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1
};

#line 2095 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

#line 2100 "check_hlds.det_report.c"
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

#line 2114 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

#line 2120 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2126 "check_hlds.det_report.c"
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

#line 2143 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0
};

#line 2148 "check_hlds.det_report.c"
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

#line 2163 "check_hlds.det_report.c"
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

#line 2178 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1
};

#line 2183 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0
};

#line 2188 "check_hlds.det_report.c"
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

#line 2202 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1
};

#line 2208 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2214 "check_hlds.det_report.c"
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

#line 2231 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0
};

#line 2237 "check_hlds.det_report.c"
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

#line 2252 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

#line 2257 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0
  }
};

#line 2266 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

#line 2271 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1] = {
  (MR_Integer) 0
};

#line 2276 "check_hlds.det_report.c"
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

#line 2293 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2301 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2306 "check_hlds.det_report.c"
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

#line 2321 "check_hlds.det_report.c"
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

#line 2336 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2342 "check_hlds.det_report.c"
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

#line 2357 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 2363 "check_hlds.det_report.c"
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

#line 2378 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2384 "check_hlds.det_report.c"
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

#line 2399 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0
};

#line 2404 "check_hlds.det_report.c"
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

#line 2419 "check_hlds.det_report.c"
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

#line 2434 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6
};

#line 2440 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0
};

#line 2445 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

#line 2450 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5
};

#line 2457 "check_hlds.det_report.c"
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

#line 2481 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

#line 2492 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5
};

#line 2503 "check_hlds.det_report.c"
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

#line 2520 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2529 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0
  }
};

#line 2537 "check_hlds.det_report.c"
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

#line 2554 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2560 "check_hlds.det_report.c"
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

#line 2575 "check_hlds.det_report.c"
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

#line 2590 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1
};

#line 2595 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

#line 2600 "check_hlds.det_report.c"
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

#line 2614 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

#line 2620 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2626 "check_hlds.det_report.c"
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

#line 2643 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0
  }
};

#line 2651 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0
};

#line 2658 "check_hlds.det_report.c"
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

#line 2673 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

#line 2678 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0
  }
};

#line 2687 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

#line 2692 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1] = {
  (MR_Integer) 0
};

#line 2697 "check_hlds.det_report.c"
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

#line 2714 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2722 "check_hlds.det_report.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2730 "check_hlds.det_report.c"
static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2736 "check_hlds.det_report.c"
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

#line 2751 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

#line 2756 "check_hlds.det_report.c"
static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0
  }
};

#line 2765 "check_hlds.det_report.c"
static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

#line 2770 "check_hlds.det_report.c"
static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1] = {
  (MR_Integer) 0
};

#line 2775 "check_hlds.det_report.c"
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

#line 2792 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
#line 2795 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2797 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2799 "check_hlds.det_report.c"
{
#line 2801 "check_hlds.det_report.c"
  {
#line 2803 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2806 "check_hlds.det_report.c"
    {
#line 2808 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____cc_unify_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2811 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2813 "check_hlds.det_report.c"
  }
#line 2815 "check_hlds.det_report.c"
}

#line 2818 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
#line 2821 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2823 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2825 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2827 "check_hlds.det_report.c"
{
#line 2829 "check_hlds.det_report.c"
  {
#line 2831 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2834 "check_hlds.det_report.c"
    {
#line 2836 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____cc_unify_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2839 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2841 "check_hlds.det_report.c"
  }
#line 2843 "check_hlds.det_report.c"
}

#line 2846 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
#line 2849 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2851 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2853 "check_hlds.det_report.c"
{
#line 2855 "check_hlds.det_report.c"
  {
#line 2857 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2860 "check_hlds.det_report.c"
    {
#line 2862 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____detism_check_kind_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2865 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2867 "check_hlds.det_report.c"
  }
#line 2869 "check_hlds.det_report.c"
}

#line 2872 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
#line 2875 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2877 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2879 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2881 "check_hlds.det_report.c"
{
#line 2883 "check_hlds.det_report.c"
  {
#line 2885 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2888 "check_hlds.det_report.c"
    {
#line 2890 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____detism_check_kind_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2893 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2895 "check_hlds.det_report.c"
  }
#line 2897 "check_hlds.det_report.c"
}

#line 2900 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
#line 2903 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2905 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2907 "check_hlds.det_report.c"
{
#line 2909 "check_hlds.det_report.c"
  {
#line 2911 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2914 "check_hlds.det_report.c"
    {
#line 2916 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2919 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2921 "check_hlds.det_report.c"
  }
#line 2923 "check_hlds.det_report.c"
}

#line 2926 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
#line 2929 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2931 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2933 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2935 "check_hlds.det_report.c"
{
#line 2937 "check_hlds.det_report.c"
  {
#line 2939 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2942 "check_hlds.det_report.c"
    {
#line 2944 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____failing_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 2947 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 2949 "check_hlds.det_report.c"
  }
#line 2951 "check_hlds.det_report.c"
}

#line 2954 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
#line 2957 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 2959 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 2961 "check_hlds.det_report.c"
{
#line 2963 "check_hlds.det_report.c"
  {
#line 2965 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 2968 "check_hlds.det_report.c"
    {
#line 2970 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_goal_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 2973 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 2975 "check_hlds.det_report.c"
  }
#line 2977 "check_hlds.det_report.c"
}

#line 2980 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
#line 2983 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 2985 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 2987 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 2989 "check_hlds.det_report.c"
{
#line 2991 "check_hlds.det_report.c"
  {
#line 2993 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 2996 "check_hlds.det_report.c"
    {
#line 2998 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____failing_goal_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3001 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3003 "check_hlds.det_report.c"
  }
#line 3005 "check_hlds.det_report.c"
}

#line 3008 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
#line 3011 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 3013 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 3015 "check_hlds.det_report.c"
{
#line 3017 "check_hlds.det_report.c"
  {
#line 3019 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 3022 "check_hlds.det_report.c"
    {
#line 3024 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____options_to_restore_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 3027 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 3029 "check_hlds.det_report.c"
  }
#line 3031 "check_hlds.det_report.c"
}

#line 3034 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
#line 3037 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 3039 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 3041 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 3043 "check_hlds.det_report.c"
{
#line 3045 "check_hlds.det_report.c"
  {
#line 3047 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 3050 "check_hlds.det_report.c"
    {
#line 3052 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____options_to_restore_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3055 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3057 "check_hlds.det_report.c"
  }
#line 3059 "check_hlds.det_report.c"
}

#line 3062 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
#line 3065 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 3067 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 3069 "check_hlds.det_report.c"
{
#line 3071 "check_hlds.det_report.c"
  {
#line 3073 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 3076 "check_hlds.det_report.c"
    {
#line 3078 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____seen_call_id_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 3081 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 3083 "check_hlds.det_report.c"
  }
#line 3085 "check_hlds.det_report.c"
}

#line 3088 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
#line 3091 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 3093 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 3095 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 3097 "check_hlds.det_report.c"
{
#line 3099 "check_hlds.det_report.c"
  {
#line 3101 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 3104 "check_hlds.det_report.c"
    {
#line 3106 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____seen_call_id_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3109 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3111 "check_hlds.det_report.c"
  }
#line 3113 "check_hlds.det_report.c"
}

#line 3116 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
#line 3119 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 3121 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 3123 "check_hlds.det_report.c"
{
#line 3125 "check_hlds.det_report.c"
  {
#line 3127 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 3130 "check_hlds.det_report.c"
    {
#line 3132 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____switch_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 3135 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 3137 "check_hlds.det_report.c"
  }
#line 3139 "check_hlds.det_report.c"
}

#line 3142 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
#line 3145 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 3147 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 3149 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 3151 "check_hlds.det_report.c"
{
#line 3153 "check_hlds.det_report.c"
  {
#line 3155 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 3158 "check_hlds.det_report.c"
    {
#line 3160 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____switch_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3163 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3165 "check_hlds.det_report.c"
  }
#line 3167 "check_hlds.det_report.c"
}

#line 3170 "check_hlds.det_report.c"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
#line 3173 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 3175 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2)
#line 3177 "check_hlds.det_report.c"
{
#line 3179 "check_hlds.det_report.c"
  {
#line 3181 "check_hlds.det_report.c"
    MR_bool check_hlds__det_report__succeeded;

#line 3184 "check_hlds.det_report.c"
    {
#line 3186 "check_hlds.det_report.c"
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____switch_match_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
#line 3189 "check_hlds.det_report.c"
    return check_hlds__det_report__succeeded;
#line 3191 "check_hlds.det_report.c"
  }
#line 3193 "check_hlds.det_report.c"
}

#line 3196 "check_hlds.det_report.c"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
#line 3199 "check_hlds.det_report.c"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 3201 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 3203 "check_hlds.det_report.c"
  MR_Box check_hlds__det_report__wrapper_arg_3)
#line 3205 "check_hlds.det_report.c"
{
#line 3207 "check_hlds.det_report.c"
  {
#line 3209 "check_hlds.det_report.c"
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

#line 3212 "check_hlds.det_report.c"
    {
#line 3214 "check_hlds.det_report.c"
      check_hlds__det_report____Compare____switch_match_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
#line 3217 "check_hlds.det_report.c"
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
#line 3219 "check_hlds.det_report.c"
  }
#line 3221 "check_hlds.det_report.c"
}

#line 1493 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_First_0_27,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__Last_10,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__UnifyContext_12,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_13,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__LHS_14,
#line 1493 "det_report.m"
  MR_Word check_hlds__det_report__RHS_15,
#line 1493 "det_report.m"
  MR_Word * check_hlds__det_report__AllPieces_16)
#line 1493 "det_report.m"
{
#line 1498 "det_report.m"
  {
#line 1498 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1498 "det_report.m"
    MR_Word check_hlds__det_report__UnifyContextPieces_17;
#line 1498 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_18;
#line 1498 "det_report.m"
    MR_Word check_hlds__det_report__VarSet_19;
#line 1498 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_20;
#line 1498 "det_report.m"
    MR_String check_hlds__det_report__StartWords_21;
#line 1498 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_26;
#line 1498 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_First_28_28;
#line 1523 "det_report.m"
    MR_String check_hlds__det_report__V_22_22;

#line 1499 "det_report.m"
    {
#line 1499 "det_report.m"
      hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(check_hlds__det_report__STATE_VARIABLE_First_0_27, &check_hlds__det_report__STATE_VARIABLE_First_28_28, check_hlds__det_report__UnifyContext_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__UnifyContextPieces_17);
    }
#line 1501 "det_report.m"
    {
#line 1501 "det_report.m"
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_13, &check_hlds__det_report__ProcInfo_18);
    }
#line 1502 "det_report.m"
    {
#line 1502 "det_report.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_18, &check_hlds__det_report__VarSet_19);
    }
#line 1503 "det_report.m"
    {
#line 1503 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_13, &check_hlds__det_report__ModuleInfo_20);
    }
#line 1513 "det_report.m"
#line 1513 "det_report.m"
    switch (check_hlds__det_report__Last_10) {
#line 1513 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "det_report.m"
      case (MR_Integer) 0:
#line 1513 "det_report.m"
#line 1513 "det_report.m"
        switch (check_hlds__det_report__STATE_VARIABLE_First_28_28) {
#line 1513 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "det_report.m"
          case (MR_Integer) 0:
#line 1508 "det_report.m"
            check_hlds__det_report__StartWords_21 = (MR_String) "Unification";
#line 1513 "det_report.m"
            break;
#line 1513 "det_report.m"
          case (MR_Integer) 1:
#line 1517 "det_report.m"
            check_hlds__det_report__StartWords_21 = (MR_String) "unification";
#line 1513 "det_report.m"
            break;
#line 1513 "det_report.m"
        }
#line 1513 "det_report.m"
        break;
#line 1513 "det_report.m"
      case (MR_Integer) 1:
#line 1513 "det_report.m"
#line 1513 "det_report.m"
        switch (check_hlds__det_report__STATE_VARIABLE_First_28_28) {
#line 1513 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "det_report.m"
          case (MR_Integer) 0:
#line 1511 "det_report.m"
            check_hlds__det_report__StartWords_21 = (MR_String) "In unification";
#line 1513 "det_report.m"
            break;
#line 1513 "det_report.m"
          case (MR_Integer) 1:
#line 1520 "det_report.m"
            check_hlds__det_report__StartWords_21 = (MR_String) "in unification";
#line 1513 "det_report.m"
            break;
#line 1513 "det_report.m"
        }
#line 1513 "det_report.m"
        break;
#line 1513 "det_report.m"
    }
#line 1523 "det_report.m"
    {
#line 1523 "det_report.m"
      check_hlds__det_report__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_19, check_hlds__det_report__LHS_14, &check_hlds__det_report__V_22_22);
    }
#line 1538 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1524 "det_report.m"
      {
#line 1524 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1524 "det_report.m"
        MR_String check_hlds__det_report__LHSVarName_23;
#line 1526 "det_report.m"
        MR_Word check_hlds__det_report__RV_24;
#line 1527 "det_report.m"
        MR_String check_hlds__det_report__V_25_25;

#line 1524 "det_report.m"
        {
#line 1524 "det_report.m"
          check_hlds__det_report__LHSVarName_23 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, check_hlds__det_report__VarSet_19, check_hlds__det_report__LHS_14);
        }
#line 1526 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__RHS_15)) == (MR_mktag((MR_Integer) 0)));
#line 1526 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1526 "det_report.m"
          {
#line 1526 "det_report.m"
            check_hlds__det_report__RV_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__RHS_15, (MR_Integer) 0)));
#line 1527 "det_report.m"
            {
#line 1527 "det_report.m"
              check_hlds__det_report__succeeded = mercury__varset__search_name_3_p_0(check_hlds__det_report__TypeCtorInfo_65_65, check_hlds__det_report__VarSet_19, check_hlds__det_report__RV_24, &check_hlds__det_report__V_25_25);
            }
#line 1527 "det_report.m"
            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1526 "det_report.m"
          }
#line 1531 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1529 "det_report.m"
          {
#line 1529 "det_report.m"
            MR_Word check_hlds__det_report__V_30_30;
#line 1529 "det_report.m"
            MR_Word check_hlds__det_report__V_31_31;
#line 1529 "det_report.m"
            MR_Word check_hlds__det_report__V_34_34;
#line 1529 "det_report.m"
            MR_Word check_hlds__det_report__V_35_35;
#line 1529 "det_report.m"
            MR_String check_hlds__det_report__V_36_36;

#line 1529 "det_report.m"
            {
#line 1529 "det_report.m"
              check_hlds__det_report__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1529 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_30_30, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1529 "det_report.m"
            }
#line 1530 "det_report.m"
            {
#line 1530 "det_report.m"
              check_hlds__det_report__V_36_36 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__LHSVarName_23);
            }
#line 1530 "det_report.m"
            {
#line 1530 "det_report.m"
              check_hlds__det_report__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1530 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_35_35, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
#line 1530 "det_report.m"
            }
#line 1530 "det_report.m"
            {
#line 1530 "det_report.m"
              check_hlds__det_report__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_34_34, 0) = ((MR_Box) (check_hlds__det_report__V_35_35));
#line 1530 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1530 "det_report.m"
            }
#line 1529 "det_report.m"
            {
#line 1529 "det_report.m"
              check_hlds__det_report__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[118])));
#line 1529 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 1) = ((MR_Box) (check_hlds__det_report__V_34_34));
#line 1529 "det_report.m"
            }
#line 1529 "det_report.m"
            {
#line 1529 "det_report.m"
              check_hlds__det_report__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 0) = ((MR_Box) (check_hlds__det_report__V_30_30));
#line 1529 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 1) = ((MR_Box) (check_hlds__det_report__V_31_31));
#line 1529 "det_report.m"
            }
#line 1529 "det_report.m"
          }
#line 1531 "det_report.m"
        else
#line 1532 "det_report.m"
          {
#line 1532 "det_report.m"
            MR_Word check_hlds__det_report__V_38_38;
#line 1532 "det_report.m"
            MR_Word check_hlds__det_report__V_39_39;
#line 1532 "det_report.m"
            MR_Word check_hlds__det_report__V_42_42;
#line 1532 "det_report.m"
            MR_Word check_hlds__det_report__V_43_43;
#line 1532 "det_report.m"
            MR_String check_hlds__det_report__V_44_44;
#line 1532 "det_report.m"
            MR_Word check_hlds__det_report__V_45_45;
#line 1532 "det_report.m"
            MR_Word check_hlds__det_report__V_48_48;
#line 1532 "det_report.m"
            MR_Word check_hlds__det_report__V_49_49;
#line 1532 "det_report.m"
            MR_String check_hlds__det_report__V_50_50;
#line 1532 "det_report.m"
            MR_String check_hlds__det_report__V_51_51;

#line 1532 "det_report.m"
            {
#line 1532 "det_report.m"
              check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1532 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_38_38, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1532 "det_report.m"
            }
#line 1533 "det_report.m"
            {
#line 1533 "det_report.m"
              check_hlds__det_report__V_44_44 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__LHSVarName_23);
            }
#line 1533 "det_report.m"
            {
#line 1533 "det_report.m"
              check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_44_44));
#line 1533 "det_report.m"
            }
#line 1535 "det_report.m"
            {
#line 1535 "det_report.m"
              check_hlds__det_report__V_51_51 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(check_hlds__det_report__ModuleInfo_20, check_hlds__det_report__VarSet_19, (MR_Integer) 0, check_hlds__det_report__RHS_15);
            }
#line 1534 "det_report.m"
            {
#line 1534 "det_report.m"
              check_hlds__det_report__V_50_50 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_51_51);
            }
#line 1534 "det_report.m"
            {
#line 1534 "det_report.m"
              check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1534 "det_report.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_50_50));
#line 1534 "det_report.m"
            }
#line 1536 "det_report.m"
            {
#line 1536 "det_report.m"
              check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 1536 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "det_report.m"
            }
#line 1533 "det_report.m"
            {
#line 1533 "det_report.m"
              check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[89])));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1533 "det_report.m"
            }
#line 1533 "det_report.m"
            {
#line 1533 "det_report.m"
              check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 1533 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 1533 "det_report.m"
            }
#line 1532 "det_report.m"
            {
#line 1532 "det_report.m"
              check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[131])));
#line 1532 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_42_42));
#line 1532 "det_report.m"
            }
#line 1532 "det_report.m"
            {
#line 1532 "det_report.m"
              check_hlds__det_report__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 0) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 1532 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 1532 "det_report.m"
            }
#line 1532 "det_report.m"
          }
#line 1524 "det_report.m"
      }
#line 1538 "det_report.m"
    else
#line 1539 "det_report.m"
      {
#line 1539 "det_report.m"
        MR_Word check_hlds__det_report__V_54_54;
#line 1539 "det_report.m"
        MR_Word check_hlds__det_report__V_55_55;
#line 1539 "det_report.m"
        MR_Word check_hlds__det_report__V_58_58;
#line 1539 "det_report.m"
        MR_Word check_hlds__det_report__V_59_59;
#line 1539 "det_report.m"
        MR_String check_hlds__det_report__V_60_60;
#line 1539 "det_report.m"
        MR_String check_hlds__det_report__V_61_61;

#line 1539 "det_report.m"
        {
#line 1539 "det_report.m"
          check_hlds__det_report__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1539 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_54_54, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
#line 1539 "det_report.m"
        }
#line 1541 "det_report.m"
        {
#line 1541 "det_report.m"
          check_hlds__det_report__V_61_61 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(check_hlds__det_report__ModuleInfo_20, check_hlds__det_report__VarSet_19, (MR_Integer) 0, check_hlds__det_report__RHS_15);
        }
#line 1540 "det_report.m"
        {
#line 1540 "det_report.m"
          check_hlds__det_report__V_60_60 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_61_61);
        }
#line 1540 "det_report.m"
        {
#line 1540 "det_report.m"
          check_hlds__det_report__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1540 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_59_59, 1) = ((MR_Box) (check_hlds__det_report__V_60_60));
#line 1540 "det_report.m"
        }
#line 1542 "det_report.m"
        {
#line 1542 "det_report.m"
          check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1542 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__V_59_59));
#line 1542 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1542 "det_report.m"
        }
#line 1539 "det_report.m"
        {
#line 1539 "det_report.m"
          check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[118])));
#line 1539 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 1539 "det_report.m"
        }
#line 1539 "det_report.m"
        {
#line 1539 "det_report.m"
          check_hlds__det_report__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 0) = ((MR_Box) (check_hlds__det_report__V_54_54));
#line 1539 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 1) = ((MR_Box) (check_hlds__det_report__V_55_55));
#line 1539 "det_report.m"
        }
#line 1539 "det_report.m"
      }
#line 1544 "det_report.m"
    {
#line 1544 "det_report.m"
      *check_hlds__det_report__AllPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__UnifyContextPieces_17, check_hlds__det_report__Pieces_26);
    }
#line 1498 "det_report.m"
  }
#line 1493 "det_report.m"
}

#line 421 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(
#line 421 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 421 "det_report.m"
{
#line 421 "det_report.m"
  {
#line 421 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 421 "det_report.m"
    MR_builtin_longjmp((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 421 "det_report.m"
  }
#line 421 "det_report.m"
}

#line 420 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3(
#line 420 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 420 "det_report.m"
{
#line 420 "det_report.m"
  {
#line 420 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 420 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20 = ((MR_Word) (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20);
#line 420 "det_report.m"
    {
#line 420 "det_report.m"
      check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(check_hlds__det_report__env_ptr);
#line 420 "det_report.m"
      return;
    }
#line 420 "det_report.m"
  }
#line 420 "det_report.m"
}

#line 421 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(
#line 421 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 421 "det_report.m"
{
#line 421 "det_report.m"
  {
#line 421 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 422 "det_report.m"
    {
#line 422 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12, (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20);
    }
#line 421 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 421 "det_report.m"
    if ((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 421 "det_report.m"
      {
#line 421 "det_report.m"
        check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(check_hlds__det_report__env_ptr);
#line 421 "det_report.m"
        return;
      }
#line 421 "det_report.m"
  }
#line 421 "det_report.m"
}

#line 421 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(
#line 421 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 421 "det_report.m"
{
#line 421 "det_report.m"
  {
#line 421 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

#line 421 "det_report.m"
    if (MR_builtin_setjmp((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 421 "det_report.m"
      {
#line 420 "det_report.m"
        {
#line 420 "det_report.m"
          mercury__list__member_2_p_1((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_65_65, &(check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20, (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18, check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3, check_hlds__det_report__env_ptr);
        }
#line 421 "det_report.m"
        (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 421 "det_report.m"
      }
#line 421 "det_report.m"
    else
#line 421 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 421 "det_report.m"
  }
#line 421 "det_report.m"
}

#line 397 "det_report.m"
static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_10,
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_11,
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_12,
#line 397 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_27,
#line 397 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_28)
#line 397 "det_report.m"
{
#line 397 "det_report.m"
  {
#line 397 "det_report.m"
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s check_hlds__det_report__env;

#line 397 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12 = check_hlds__det_report__ModuleInfo_12;
#line 402 "det_report.m"
    {
#line 402 "det_report.m"
      MR_Word check_hlds__det_report__InferredDetism_14;
#line 440 "det_report.m"
      MR_Word check_hlds__det_report__PredArgModes_17;
#line 411 "det_report.m"
      MR_Word check_hlds__det_report__NumSolns_16;
#line 411 "det_report.m"
      MR_Word check_hlds__det_report__V_29_29;
#line 413 "det_report.m"
      MR_Word check_hlds__det_report___CanFail_15;
#line 418 "det_report.m"
      MR_Word check_hlds__det_report___FuncResultMode_19;
#line 418 "det_report.m"
      MR_Box check_hlds__det_report__conv0__FuncResultMode_19;

#line 403 "det_report.m"
      {
#line 403 "det_report.m"
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__InferredDetism_14);
      }
#line 411 "det_report.m"
      {
#line 411 "det_report.m"
        check_hlds__det_report__V_29_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__det_report__PredInfo_10);
      }
#line 411 "det_report.m"
      (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__V_29_29 == (MR_Integer) 1);
#line 411 "det_report.m"
      if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 411 "det_report.m"
        {
#line 413 "det_report.m"
          {
#line 413 "det_report.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__InferredDetism_14, &check_hlds__det_report___CanFail_15, &check_hlds__det_report__NumSolns_16);
          }
#line 414 "det_report.m"
          (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__NumSolns_16 == (MR_Integer) 0);
#line 414 "det_report.m"
          (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 411 "det_report.m"
          if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 411 "det_report.m"
            {
#line 415 "det_report.m"
              (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__NumSolns_16 == (MR_Integer) 1);
#line 415 "det_report.m"
              (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 411 "det_report.m"
              if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 411 "det_report.m"
                {
#line 417 "det_report.m"
                  {
#line 417 "det_report.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__PredArgModes_17);
                  }
#line 3857 "check_hlds.det_report.c"
                  (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 418 "det_report.m"
                  {
#line 418 "det_report.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_65_65, check_hlds__det_report__PredArgModes_17, &(check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18, &check_hlds__det_report__conv0__FuncResultMode_19);
                  }
#line 418 "det_report.m"
                  check_hlds__det_report___FuncResultMode_19 = ((MR_Word) check_hlds__det_report__conv0__FuncResultMode_19);
#line 421 "det_report.m"
                  {
#line 421 "det_report.m"
                    check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(&check_hlds__det_report__env);
                  }
#line 421 "det_report.m"
                  (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 411 "det_report.m"
                }
#line 411 "det_report.m"
            }
#line 411 "det_report.m"
        }
#line 440 "det_report.m"
      if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 426 "det_report.m"
        {
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__TypeCtorInfo_66_66;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__FuncContext_21;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__InstVarSet_22;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__PredModePieces_23;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__MainPieces_24;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__Spec_26;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_35_35;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_36_36;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_39_39;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_41_41;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_44_44;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_45_45;
#line 426 "det_report.m"
          MR_String check_hlds__det_report__V_46_46;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_55_55;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_56_56;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_57_57;
#line 426 "det_report.m"
          MR_Word check_hlds__det_report__V_58_58;

#line 426 "det_report.m"
          {
#line 426 "det_report.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__FuncContext_21);
          }
#line 427 "det_report.m"
          {
#line 427 "det_report.m"
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__InstVarSet_22);
          }
#line 428 "det_report.m"
          {
#line 428 "det_report.m"
            check_hlds__det_report__PredModePieces_23 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12, (MR_Integer) 1, check_hlds__det_report__PredId_8, check_hlds__det_report__InstVarSet_22, check_hlds__det_report__PredArgModes_17);
          }
#line 3933 "check_hlds.det_report.c"
          check_hlds__det_report__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 433 "det_report.m"
          {
#line 433 "det_report.m"
            check_hlds__det_report__V_46_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_report__InferredDetism_14);
          }
#line 433 "det_report.m"
          {
#line 433 "det_report.m"
            check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 433 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 433 "det_report.m"
          }
#line 433 "det_report.m"
          {
#line 433 "det_report.m"
            check_hlds__det_report__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_44_44, 0) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 433 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])));
#line 433 "det_report.m"
          }
#line 432 "det_report.m"
          {
#line 432 "det_report.m"
            check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[128])));
#line 432 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_44_44));
#line 432 "det_report.m"
          }
#line 431 "det_report.m"
          {
#line 431 "det_report.m"
            check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 431 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 431 "det_report.m"
          }
#line 431 "det_report.m"
          {
#line 431 "det_report.m"
            check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[65])));
#line 431 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 431 "det_report.m"
          }
#line 431 "det_report.m"
          {
#line 431 "det_report.m"
            check_hlds__det_report__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_66_66, check_hlds__det_report__PredModePieces_23, check_hlds__det_report__V_36_36);
          }
#line 431 "det_report.m"
          {
#line 431 "det_report.m"
            check_hlds__det_report__MainPieces_24 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_66_66, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[127]), check_hlds__det_report__V_35_35);
          }
#line 437 "det_report.m"
          {
#line 437 "det_report.m"
            check_hlds__det_report__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 437 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__MainPieces_24));
#line 437 "det_report.m"
          }
#line 437 "det_report.m"
          {
#line 437 "det_report.m"
            check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 437 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[130])));
#line 437 "det_report.m"
          }
#line 436 "det_report.m"
          {
#line 436 "det_report.m"
            check_hlds__det_report__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (check_hlds__det_report__FuncContext_21));
#line 436 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_56_56, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 436 "det_report.m"
          }
#line 438 "det_report.m"
          {
#line 438 "det_report.m"
            check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
#line 438 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "det_report.m"
          }
#line 435 "det_report.m"
          {
#line 435 "det_report.m"
            check_hlds__det_report__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 435 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 2) = ((MR_Box) (check_hlds__det_report__V_55_55));
#line 435 "det_report.m"
          }
#line 439 "det_report.m"
          {
#line 439 "det_report.m"
            MR_Word base;
#line 439 "det_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_Specs_28 = base;
#line 439 "det_report.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__Spec_26));
#line 439 "det_report.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_27));
#line 439 "det_report.m"
          }
#line 426 "det_report.m"
        }
#line 440 "det_report.m"
      else
#line 440 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_Specs_28 = check_hlds__det_report__STATE_VARIABLE_Specs_0_27;
#line 402 "det_report.m"
    }
#line 397 "det_report.m"
  }
#line 397 "det_report.m"
}

#line 1401 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
#line 1401 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1401 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1401 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1401 "det_report.m"
{
#line 1401 "det_report.m"
  {
#line 1401 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1401 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 1401 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 1401 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
#line 1401 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 4101 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1401 "det_report.m"
    else
#line 1401 "det_report.m"
      {
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8;

#line 1401 "det_report.m"
        {
#line 1401 "det_report.m"
          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_8_8, check_hlds__det_report__V_4_4, check_hlds__det_report__V_6_6);
        }
#line 4123 "check_hlds.det_report.c"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_8_8 == (MR_Integer) 0);
#line 1401 "det_report.m"
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1401 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1401 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_8_8;
#line 1401 "det_report.m"
        else
#line 1401 "det_report.m"
          {
#line 1401 "det_report.m"
            {
#line 1401 "det_report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[4], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_7_7)));
#line 1401 "det_report.m"
              return;
            }
#line 1401 "det_report.m"
          }
#line 1401 "det_report.m"
      }
#line 1401 "det_report.m"
  }
#line 1401 "det_report.m"
}

#line 1401 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
#line 1401 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1401 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1401 "det_report.m"
{
#line 1401 "det_report.m"
  {
#line 1401 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1401 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1401 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1401 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
#line 1401 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1401 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 1401 "det_report.m"
    else
#line 1401 "det_report.m"
      {
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_10_10;
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1401 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 4190 "check_hlds.det_report.c"
        {
#line 4192 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
        }
#line 1401 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1401 "det_report.m"
          {
#line 4199 "check_hlds.det_report.c"
            check_hlds__det_report__TypeInfo_10_10 = (MR_Word) &check_hlds__det_report_scalar_common_2[4];
#line 4201 "check_hlds.det_report.c"
            {
#line 4203 "check_hlds.det_report.c"
              return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_10_10, ((MR_Box) (check_hlds__det_report__V_4_4)), ((MR_Box) (check_hlds__det_report__V_6_6)));
            }
#line 1401 "det_report.m"
          }
#line 1401 "det_report.m"
      }
#line 1401 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1401 "det_report.m"
  }
#line 1401 "det_report.m"
}

#line 1375 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0(
#line 1375 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1375 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1375 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1375 "det_report.m"
{
#line 1375 "det_report.m"
  {
#line 1375 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1375 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_12 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 1375 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_13 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 1375 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_12 == check_hlds__det_report__CastY_13);
#line 1375 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 4241 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1375 "det_report.m"
    else
#line 1375 "det_report.m"
      {
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_10_10;

#line 1375 "det_report.m"
        {
#line 1375 "det_report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_10_10, ((MR_Box) (check_hlds__det_report__V_4_4)), ((MR_Box) (check_hlds__det_report__V_7_7)));
        }
#line 4267 "check_hlds.det_report.c"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_10_10 == (MR_Integer) 0);
#line 1375 "det_report.m"
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1375 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1375 "det_report.m"
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_10_10;
#line 1375 "det_report.m"
        else
#line 1375 "det_report.m"
          {
#line 1375 "det_report.m"
            MR_Word check_hlds__det_report__V_11_11;
#line 1401 "det_report.m"
            MR_Integer check_hlds__det_report__CastX_22 = (MR_Integer) check_hlds__det_report__V_5_5;
#line 1401 "det_report.m"
            MR_Integer check_hlds__det_report__CastY_23 = (MR_Integer) check_hlds__det_report__V_8_8;

#line 1401 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_22 == check_hlds__det_report__CastY_23);
#line 1401 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 4290 "check_hlds.det_report.c"
              {
#line 4292 "check_hlds.det_report.c"
                check_hlds__det_report__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 1375 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 4296 "check_hlds.det_report.c"
                if (check_hlds__det_report__succeeded)
#line 4298 "check_hlds.det_report.c"
                  {
#line 4300 "check_hlds.det_report.c"
                    check_hlds__det_report__V_11_11 = (MR_Integer) 0;
#line 4302 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = MR_TRUE;
#line 4304 "check_hlds.det_report.c"
                  }
#line 4306 "check_hlds.det_report.c"
              }
#line 1401 "det_report.m"
            else
#line 1401 "det_report.m"
              {
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_5_5, (MR_Integer) 0)));
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_5_5, (MR_Integer) 1)));
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, (MR_Integer) 0)));
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, (MR_Integer) 1)));
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_21_21;

#line 1401 "det_report.m"
                {
#line 1401 "det_report.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_21_21, check_hlds__det_report__V_17_17, check_hlds__det_report__V_19_19);
                }
#line 4328 "check_hlds.det_report.c"
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_21_21 == (MR_Integer) 0);
#line 1401 "det_report.m"
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1401 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 1401 "det_report.m"
                  {
#line 1401 "det_report.m"
                    check_hlds__det_report__V_11_11 = check_hlds__det_report__V_21_21;
#line 4338 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_11_11 == (MR_Integer) 0);
#line 1375 "det_report.m"
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1401 "det_report.m"
                  }
#line 1401 "det_report.m"
                else
#line 1401 "det_report.m"
                  {
#line 1401 "det_report.m"
                    {
#line 1401 "det_report.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[4], &check_hlds__det_report__V_11_11, ((MR_Box) (check_hlds__det_report__V_18_18)), ((MR_Box) (check_hlds__det_report__V_20_20)));
                    }
#line 4353 "check_hlds.det_report.c"
                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_11_11 == (MR_Integer) 0);
#line 1375 "det_report.m"
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 1401 "det_report.m"
                  }
#line 1401 "det_report.m"
              }
#line 1375 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1375 "det_report.m"
              *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_11_11;
#line 1375 "det_report.m"
            else
#line 1375 "det_report.m"
              {
#line 1375 "det_report.m"
                {
#line 1375 "det_report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[2], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_6_6)), ((MR_Box) (check_hlds__det_report__V_9_9)));
#line 1375 "det_report.m"
                  return;
                }
#line 1375 "det_report.m"
              }
#line 1375 "det_report.m"
          }
#line 1375 "det_report.m"
      }
#line 1375 "det_report.m"
  }
#line 1375 "det_report.m"
}

#line 1375 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0(
#line 1375 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1375 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1375 "det_report.m"
{
#line 1375 "det_report.m"
  {
#line 1375 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1375 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1375 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1375 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
#line 1375 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1375 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 1375 "det_report.m"
    else
#line 1375 "det_report.m"
      {
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_12_12;
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1375 "det_report.m"
        MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 1401 "det_report.m"
        MR_Integer check_hlds__det_report__CastX_17;
#line 1401 "det_report.m"
        MR_Integer check_hlds__det_report__CastY_18;

#line 4434 "check_hlds.det_report.c"
        {
#line 4436 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], ((MR_Box) (check_hlds__det_report__V_3_3)), ((MR_Box) (check_hlds__det_report__V_6_6)));
        }
#line 1375 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1375 "det_report.m"
          {
#line 1401 "det_report.m"
            check_hlds__det_report__CastX_17 = (MR_Integer) check_hlds__det_report__V_4_4;
#line 1401 "det_report.m"
            check_hlds__det_report__CastY_18 = (MR_Integer) check_hlds__det_report__V_7_7;
#line 1401 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_17 == check_hlds__det_report__CastY_18);
#line 1401 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1401 "det_report.m"
              check_hlds__det_report__succeeded = MR_TRUE;
#line 1401 "det_report.m"
            else
#line 1401 "det_report.m"
              {
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__TypeInfo_10_20;
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_4_4, (MR_Integer) 0)));
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_4_4, (MR_Integer) 1)));
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_7_7, (MR_Integer) 0)));
#line 1401 "det_report.m"
                MR_Word check_hlds__det_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_7_7, (MR_Integer) 1)));

#line 4468 "check_hlds.det_report.c"
                {
#line 4470 "check_hlds.det_report.c"
                  check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_13_13, check_hlds__det_report__V_15_15);
                }
#line 1401 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 1401 "det_report.m"
                  {
#line 4477 "check_hlds.det_report.c"
                    check_hlds__det_report__TypeInfo_10_20 = (MR_Word) &check_hlds__det_report_scalar_common_2[4];
#line 4479 "check_hlds.det_report.c"
                    {
#line 4481 "check_hlds.det_report.c"
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_10_20, ((MR_Box) (check_hlds__det_report__V_14_14)), ((MR_Box) (check_hlds__det_report__V_16_16)));
                    }
#line 1401 "det_report.m"
                  }
#line 1401 "det_report.m"
              }
#line 1375 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1375 "det_report.m"
              {
#line 4492 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_12_12 = (MR_Word) &check_hlds__det_report_scalar_common_2[2];
#line 4494 "check_hlds.det_report.c"
                {
#line 4496 "check_hlds.det_report.c"
                  return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_12_12, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_8_8)));
                }
#line 1375 "det_report.m"
              }
#line 1375 "det_report.m"
          }
#line 1375 "det_report.m"
      }
#line 1375 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1375 "det_report.m"
  }
#line 1375 "det_report.m"
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
#line 4536 "check_hlds.det_report.c"
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
#line 4548 "check_hlds.det_report.c"
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
#line 4561 "check_hlds.det_report.c"
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
#line 4579 "check_hlds.det_report.c"
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
#line 4667 "check_hlds.det_report.c"
            {
#line 4669 "check_hlds.det_report.c"
              check_hlds__det_report__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
            }
#line 36 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 4674 "check_hlds.det_report.c"
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

#line 1612 "det_report.m"
void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0(
#line 1612 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1612 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1612 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1612 "det_report.m"
{
#line 1612 "det_report.m"
  {
#line 1612 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1612 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar1_4 = check_hlds__det_report__HeadVar__2_2;
#line 1612 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar2_5 = check_hlds__det_report__HeadVar__3_3;

#line 1612 "det_report.m"
    {
#line 1612 "det_report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[1], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__det_report__Cast_HeadVar2_5)));
#line 1612 "det_report.m"
      return;
    }
#line 1612 "det_report.m"
  }
#line 1612 "det_report.m"
}

#line 1612 "det_report.m"
MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0(
#line 1612 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1612 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1612 "det_report.m"
{
#line 1612 "det_report.m"
  {
#line 1612 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1612 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar1_3 = check_hlds__det_report__HeadVar__1_1;
#line 1612 "det_report.m"
    MR_Word check_hlds__det_report__Cast_HeadVar2_4 = check_hlds__det_report__HeadVar__2_2;

#line 1612 "det_report.m"
    {
#line 1612 "det_report.m"
      return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[1], ((MR_Box) (check_hlds__det_report__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__det_report__Cast_HeadVar2_4)));
    }
#line 1612 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1612 "det_report.m"
  }
#line 1612 "det_report.m"
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
#line 4773 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "det_report.m"
    else
#line 50 "det_report.m"
#line 50 "det_report.m"
      switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) {
#line 50 "det_report.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
        case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
          switch (MR_unmkbody(check_hlds__det_report__HeadVar__2_2)) {
#line 50 "det_report.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
            case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
              switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
                  switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                    case (MR_Integer) 0:
#line 50 "det_report.m"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                    case (MR_Integer) 1:
#line 50 "det_report.m"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
                  break;
#line 50 "det_report.m"
                case (MR_Integer) 1:
#line 4821 "check_hlds.det_report.c"
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                  break;
#line 50 "det_report.m"
                case (MR_Integer) 2:
#line 4827 "check_hlds.det_report.c"
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                  break;
#line 50 "det_report.m"
                case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
#line 50 "det_report.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                    case (MR_Integer) 0:
#line 4840 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                    case (MR_Integer) 1:
#line 4846 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                    case (MR_Integer) 2:
#line 4852 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
                  break;
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
              break;
#line 50 "det_report.m"
            case (MR_Integer) 1:
#line 50 "det_report.m"
#line 50 "det_report.m"
              switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
                  switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                    case (MR_Integer) 0:
#line 50 "det_report.m"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                    case (MR_Integer) 1:
#line 50 "det_report.m"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
                  break;
#line 50 "det_report.m"
                case (MR_Integer) 1:
#line 4896 "check_hlds.det_report.c"
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                  break;
#line 50 "det_report.m"
                case (MR_Integer) 2:
#line 4902 "check_hlds.det_report.c"
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                  break;
#line 50 "det_report.m"
                case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
#line 50 "det_report.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                    case (MR_Integer) 0:
#line 4915 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                    case (MR_Integer) 1:
#line 4921 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                    case (MR_Integer) 2:
#line 4927 "check_hlds.det_report.c"
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                      break;
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
                  break;
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
              break;
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
          break;
#line 50 "det_report.m"
        case (MR_Integer) 1:
#line 50 "det_report.m"
          {
#line 50 "det_report.m"
            MR_Word check_hlds__det_report__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 50 "det_report.m"
#line 50 "det_report.m"
            switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
              case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
                switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                  case (MR_Integer) 0:
#line 4964 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 1:
#line 4970 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
                break;
#line 50 "det_report.m"
              case (MR_Integer) 1:
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
                break;
#line 50 "det_report.m"
              case (MR_Integer) 2:
#line 4998 "check_hlds.det_report.c"
                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                break;
#line 50 "det_report.m"
              case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
#line 50 "det_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                  case (MR_Integer) 0:
#line 5011 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 1:
#line 5017 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 2:
#line 5023 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
                break;
#line 50 "det_report.m"
            }
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
          break;
#line 50 "det_report.m"
        case (MR_Integer) 2:
#line 50 "det_report.m"
          {
#line 50 "det_report.m"
            MR_Word check_hlds__det_report__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "det_report.m"
            MR_Word check_hlds__det_report__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 50 "det_report.m"
#line 50 "det_report.m"
            switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
              case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
                switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                  case (MR_Integer) 0:
#line 5060 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 1:
#line 5066 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
                break;
#line 50 "det_report.m"
              case (MR_Integer) 1:
#line 5076 "check_hlds.det_report.c"
                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                break;
#line 50 "det_report.m"
              case (MR_Integer) 2:
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
#line 5096 "check_hlds.det_report.c"
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
                break;
#line 50 "det_report.m"
              case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
#line 50 "det_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                  case (MR_Integer) 0:
#line 5130 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 1:
#line 5136 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 2:
#line 5142 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
                break;
#line 50 "det_report.m"
            }
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
          break;
#line 50 "det_report.m"
        case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) {
#line 50 "det_report.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
            case (MR_Integer) 0:
#line 50 "det_report.m"
              {
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "det_report.m"
#line 50 "det_report.m"
                switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                  case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
                    switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                      case (MR_Integer) 0:
#line 5186 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 1:
#line 5192 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                    }
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 1:
#line 5202 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 2:
#line 5208 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
#line 50 "det_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                      case (MR_Integer) 0:
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
#line 5235 "check_hlds.det_report.c"
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
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 1:
#line 5258 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 2:
#line 5264 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                    }
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
              break;
#line 50 "det_report.m"
            case (MR_Integer) 1:
#line 50 "det_report.m"
              {
#line 50 "det_report.m"
                MR_Integer check_hlds__det_report__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "det_report.m"
#line 50 "det_report.m"
                switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                  case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
                    switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                      case (MR_Integer) 0:
#line 5301 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 1:
#line 5307 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                    }
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 1:
#line 5317 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 2:
#line 5323 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
#line 50 "det_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                      case (MR_Integer) 0:
#line 5336 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 1:
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
#line 5356 "check_hlds.det_report.c"
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
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 2:
#line 5379 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                    }
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
              break;
#line 50 "det_report.m"
            case (MR_Integer) 2:
#line 50 "det_report.m"
              {
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "det_report.m"
#line 50 "det_report.m"
                switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                  case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
                    switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
#line 50 "det_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                      case (MR_Integer) 0:
#line 5414 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 1:
#line 5420 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                    }
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 1:
#line 5430 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 2:
#line 5436 "check_hlds.det_report.c"
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                  case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
#line 50 "det_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
                      case (MR_Integer) 0:
#line 5449 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 1:
#line 5455 "check_hlds.det_report.c"
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "det_report.m"
                        break;
#line 50 "det_report.m"
                      case (MR_Integer) 2:
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
                        break;
#line 50 "det_report.m"
                    }
#line 50 "det_report.m"
                    break;
#line 50 "det_report.m"
                }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
              break;
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
          break;
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
#line 50 "det_report.m"
      switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__1_1)) {
#line 50 "det_report.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
        case (MR_Integer) 0:
#line 50 "det_report.m"
#line 50 "det_report.m"
          switch (MR_unmkbody(check_hlds__det_report__HeadVar__1_1)) {
#line 50 "det_report.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
            case (MR_Integer) 0:
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
              break;
#line 50 "det_report.m"
            case (MR_Integer) 1:
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
              break;
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
          break;
#line 50 "det_report.m"
        case (MR_Integer) 1:
#line 50 "det_report.m"
          {
#line 50 "det_report.m"
            MR_Word check_hlds__det_report__TypeInfo_29_29;
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
#line 5589 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_29_29 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5591 "check_hlds.det_report.c"
                {
#line 5593 "check_hlds.det_report.c"
                  return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_29_29, ((MR_Box) (check_hlds__det_report__V_3_3)), ((MR_Box) (check_hlds__det_report__V_4_4)));
                }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
          break;
#line 50 "det_report.m"
        case (MR_Integer) 2:
#line 50 "det_report.m"
          {
#line 50 "det_report.m"
            MR_Word check_hlds__det_report__TypeInfo_30_30;
#line 50 "det_report.m"
            MR_Word check_hlds__det_report__TypeInfo_31_31;
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
#line 5629 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_30_30 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5631 "check_hlds.det_report.c"
                {
#line 5633 "check_hlds.det_report.c"
                  check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_30_30, ((MR_Box) (check_hlds__det_report__V_7_7)), ((MR_Box) (check_hlds__det_report__V_9_9)));
                }
#line 50 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 50 "det_report.m"
                  {
#line 5640 "check_hlds.det_report.c"
                    check_hlds__det_report__TypeInfo_31_31 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5642 "check_hlds.det_report.c"
                    {
#line 5644 "check_hlds.det_report.c"
                      return check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_31_31, ((MR_Box) (check_hlds__det_report__V_8_8)), ((MR_Box) (check_hlds__det_report__V_10_10)));
                    }
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
          break;
#line 50 "det_report.m"
        case (MR_Integer) 3:
#line 50 "det_report.m"
#line 50 "det_report.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)))) {
#line 50 "det_report.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 50 "det_report.m"
            case (MR_Integer) 0:
#line 50 "det_report.m"
              {
#line 50 "det_report.m"
                MR_Word check_hlds__det_report__TypeInfo_26_26;
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
#line 5687 "check_hlds.det_report.c"
                    check_hlds__det_report__TypeInfo_26_26 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 5689 "check_hlds.det_report.c"
                    {
#line 5691 "check_hlds.det_report.c"
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_26_26, ((MR_Box) (check_hlds__det_report__V_11_11)), ((MR_Box) (check_hlds__det_report__V_13_13)));
                    }
#line 50 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 5696 "check_hlds.det_report.c"
                      {
#line 5698 "check_hlds.det_report.c"
                        return check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_12_12, check_hlds__det_report__V_14_14);
                      }
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
              break;
#line 50 "det_report.m"
            case (MR_Integer) 1:
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
#line 5730 "check_hlds.det_report.c"
                    {
#line 5732 "check_hlds.det_report.c"
                      check_hlds__det_report__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_report__V_15_15, check_hlds__det_report__V_17_17);
                    }
#line 50 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 5737 "check_hlds.det_report.c"
                      check_hlds__det_report__succeeded = (check_hlds__det_report__V_16_16 == check_hlds__det_report__V_18_18);
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
              break;
#line 50 "det_report.m"
            case (MR_Integer) 2:
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
#line 5762 "check_hlds.det_report.c"
                    {
#line 5764 "check_hlds.det_report.c"
                      return check_hlds__det_report__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(check_hlds__det_report__V_19_19, check_hlds__det_report__V_20_20);
                    }
#line 50 "det_report.m"
                  }
#line 50 "det_report.m"
              }
#line 50 "det_report.m"
              break;
#line 50 "det_report.m"
          }
#line 50 "det_report.m"
          break;
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
#line 5810 "check_hlds.det_report.c"
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
#line 5832 "check_hlds.det_report.c"
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

#line 5893 "check_hlds.det_report.c"
        {
#line 5895 "check_hlds.det_report.c"
          check_hlds__det_report__succeeded = mercury__term____Unify____context_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
        }
#line 44 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 5900 "check_hlds.det_report.c"
          {
#line 5902 "check_hlds.det_report.c"
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

#line 1141 "det_report.m"
static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
#line 1141 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__1_1,
#line 1141 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1141 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3)
#line 1141 "det_report.m"
{
#line 1141 "det_report.m"
  {
#line 1141 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1141 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
#line 1141 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_9 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

#line 1141 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_8 == check_hlds__det_report__CastY_9);
#line 1141 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 5938 "check_hlds.det_report.c"
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1141 "det_report.m"
    else
#line 1141 "det_report.m"
    if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1141 "det_report.m"
      if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1141 "det_report.m"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
#line 1141 "det_report.m"
      else
#line 5950 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 1141 "det_report.m"
    else
#line 1141 "det_report.m"
      {
#line 1141 "det_report.m"
        MR_Word check_hlds__det_report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 1141 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5961 "check_hlds.det_report.c"
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
#line 1141 "det_report.m"
        else
#line 1141 "det_report.m"
          {
#line 1141 "det_report.m"
            MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));

#line 1141 "det_report.m"
            {
#line 1141 "det_report.m"
              hlds__hlds_goal____Compare____hlds_goal_info_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_11_11, check_hlds__det_report__V_5_5);
#line 1141 "det_report.m"
              return;
            }
#line 1141 "det_report.m"
          }
#line 1141 "det_report.m"
      }
#line 1141 "det_report.m"
  }
#line 1141 "det_report.m"
}

#line 1141 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
#line 1141 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1141 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1141 "det_report.m"
{
#line 1141 "det_report.m"
  {
#line 1141 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1141 "det_report.m"
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1141 "det_report.m"
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1141 "det_report.m"
    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
#line 1141 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1141 "det_report.m"
      check_hlds__det_report__succeeded = MR_TRUE;
#line 1141 "det_report.m"
    else
#line 1141 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1141 "det_report.m"
      {
#line 1141 "det_report.m"
        MR_Integer check_hlds__det_report__CastX_5 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
#line 1141 "det_report.m"
        MR_Integer check_hlds__det_report__CastY_6 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

#line 1141 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_6 == check_hlds__det_report__CastX_5);
#line 1141 "det_report.m"
      }
#line 1141 "det_report.m"
    else
#line 1141 "det_report.m"
      {
#line 1141 "det_report.m"
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1141 "det_report.m"
        MR_Word check_hlds__det_report__V_4_4;

#line 1141 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1141 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1141 "det_report.m"
          {
#line 1141 "det_report.m"
            check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 6042 "check_hlds.det_report.c"
            {
#line 6044 "check_hlds.det_report.c"
              return check_hlds__det_report__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_4_4);
            }
#line 1141 "det_report.m"
          }
#line 1141 "det_report.m"
      }
#line 1141 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 1141 "det_report.m"
  }
#line 1141 "det_report.m"
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
#line 6082 "check_hlds.det_report.c"
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
#line 6094 "check_hlds.det_report.c"
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "det_report.m"
    else
#line 40 "det_report.m"
      {
#line 40 "det_report.m"
        MR_Word check_hlds__det_report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6105 "check_hlds.det_report.c"
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
#line 6186 "check_hlds.det_report.c"
            {
#line 6188 "check_hlds.det_report.c"
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

#line 1627 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
#line 1627 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1627 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_7,
#line 1627 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_8)
#line 1627 "det_report.m"
{
#line 1630 "det_report.m"
  {
#line 1630 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1630 "det_report.m"
    MR_Word check_hlds__det_report__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1630 "det_report.m"
    MR_Word check_hlds__det_report__Value_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));

#line 1631 "det_report.m"
    {
#line 1631 "det_report.m"
      libs__globals__set_option_4_p_0(check_hlds__det_report__Option_4, check_hlds__det_report__Value_5, check_hlds__det_report__STATE_VARIABLE_Globals_0_7, check_hlds__det_report__STATE_VARIABLE_Globals_8);
#line 1631 "det_report.m"
      return;
    }
#line 1630 "det_report.m"
  }
#line 1627 "det_report.m"
}

#line 1558 "det_report.m"
static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
#line 1558 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_5,
#line 1558 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_6,
#line 1558 "det_report.m"
  MR_Word check_hlds__det_report__FailingContext_7)
#line 1558 "det_report.m"
{
#line 1561 "det_report.m"
  {
#line 1561 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__Msg_8;
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__FailingContext_7, (MR_Integer) 0)));
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__FailingGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__FailingContext_7, (MR_Integer) 1)));
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_13;
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__V_80_80;
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__V_81_81;
#line 1561 "det_report.m"
    MR_Word check_hlds__det_report__V_82_82;

#line 1567 "det_report.m"
#line 1567 "det_report.m"
    switch (MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) {
#line 1567 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1567 "det_report.m"
      case (MR_Integer) 0:
#line 1567 "det_report.m"
#line 1567 "det_report.m"
        switch (MR_unmkbody(check_hlds__det_report__FailingGoal_10)) {
#line 1567 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1567 "det_report.m"
          case (MR_Integer) 0:
#line 1568 "det_report.m"
            {
#line 1569 "det_report.m"
              check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[120]);
#line 1568 "det_report.m"
            }
#line 1567 "det_report.m"
            break;
#line 1567 "det_report.m"
          case (MR_Integer) 1:
#line 1592 "det_report.m"
            {
#line 1593 "det_report.m"
              check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[125]);
#line 1592 "det_report.m"
            }
#line 1567 "det_report.m"
            break;
#line 1567 "det_report.m"
        }
#line 1567 "det_report.m"
        break;
#line 1567 "det_report.m"
      case (MR_Integer) 1:
#line 1564 "det_report.m"
        {
#line 1564 "det_report.m"
          MR_Word check_hlds__det_report__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)));
#line 1564 "det_report.m"
          MR_String check_hlds__det_report__VarStr_12;
#line 1564 "det_report.m"
          MR_Word check_hlds__det_report__V_74_74;
#line 1564 "det_report.m"
          MR_Word check_hlds__det_report__V_75_75;

#line 1565 "det_report.m"
          {
#line 1565 "det_report.m"
            check_hlds__det_report__VarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_6, check_hlds__det_report__Var_11);
          }
#line 1566 "det_report.m"
          {
#line 1566 "det_report.m"
            check_hlds__det_report__V_75_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1566 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_75_75, 0) = ((MR_Box) (check_hlds__det_report__VarStr_12));
#line 1566 "det_report.m"
          }
#line 1566 "det_report.m"
          {
#line 1566 "det_report.m"
            check_hlds__det_report__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1566 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_74_74, 0) = ((MR_Box) (check_hlds__det_report__V_75_75));
#line 1566 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[123])));
#line 1566 "det_report.m"
          }
#line 1566 "det_report.m"
          {
#line 1566 "det_report.m"
            check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1566 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[121])));
#line 1566 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_74_74));
#line 1566 "det_report.m"
          }
#line 1564 "det_report.m"
        }
#line 1567 "det_report.m"
        break;
#line 1567 "det_report.m"
      case (MR_Integer) 2:
#line 1571 "det_report.m"
        {
#line 1571 "det_report.m"
          MR_Word check_hlds__det_report__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1571 "det_report.m"
          MR_Word check_hlds__det_report__Var1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)));
#line 1571 "det_report.m"
          MR_Word check_hlds__det_report__Var2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1571 "det_report.m"
          MR_String check_hlds__det_report__Var1Str_16;
#line 1571 "det_report.m"
          MR_String check_hlds__det_report__Var2Str_17;
#line 1571 "det_report.m"
          MR_Word check_hlds__det_report__V_58_58;
#line 1571 "det_report.m"
          MR_Word check_hlds__det_report__V_59_59;
#line 1571 "det_report.m"
          MR_Word check_hlds__det_report__V_60_60;
#line 1571 "det_report.m"
          MR_Word check_hlds__det_report__V_63_63;
#line 1571 "det_report.m"
          MR_Word check_hlds__det_report__V_64_64;

#line 1572 "det_report.m"
          {
#line 1572 "det_report.m"
            check_hlds__det_report__Var1Str_16 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(check_hlds__det_report__TypeCtorInfo_90_90, check_hlds__det_report__VarSet_6, check_hlds__det_report__Var1_14);
          }
#line 1573 "det_report.m"
          {
#line 1573 "det_report.m"
            check_hlds__det_report__Var2Str_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(check_hlds__det_report__TypeCtorInfo_90_90, check_hlds__det_report__VarSet_6, check_hlds__det_report__Var2_15);
          }
#line 1574 "det_report.m"
          {
#line 1574 "det_report.m"
            check_hlds__det_report__V_59_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_59_59, 0) = ((MR_Box) (check_hlds__det_report__Var1Str_16));
#line 1574 "det_report.m"
          }
#line 1575 "det_report.m"
          {
#line 1575 "det_report.m"
            check_hlds__det_report__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_64_64, 0) = ((MR_Box) (check_hlds__det_report__Var2Str_17));
#line 1575 "det_report.m"
          }
#line 1575 "det_report.m"
          {
#line 1575 "det_report.m"
            check_hlds__det_report__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_63_63, 0) = ((MR_Box) (check_hlds__det_report__V_64_64));
#line 1575 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[116])));
#line 1575 "det_report.m"
          }
#line 1575 "det_report.m"
          {
#line 1575 "det_report.m"
            check_hlds__det_report__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[89])));
#line 1575 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_60_60, 1) = ((MR_Box) (check_hlds__det_report__V_63_63));
#line 1575 "det_report.m"
          }
#line 1574 "det_report.m"
          {
#line 1574 "det_report.m"
            check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__V_59_59));
#line 1574 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 1) = ((MR_Box) (check_hlds__det_report__V_60_60));
#line 1574 "det_report.m"
          }
#line 1574 "det_report.m"
          {
#line 1574 "det_report.m"
            check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[117])));
#line 1574 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 1574 "det_report.m"
          }
#line 1571 "det_report.m"
        }
#line 1567 "det_report.m"
        break;
#line 1567 "det_report.m"
      case (MR_Integer) 3:
#line 1567 "det_report.m"
#line 1567 "det_report.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)))) {
#line 1567 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1567 "det_report.m"
          case (MR_Integer) 0:
#line 1577 "det_report.m"
            {
#line 1577 "det_report.m"
              MR_Word check_hlds__det_report__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 2)));
#line 1577 "det_report.m"
              MR_Word check_hlds__det_report__V_45_45;
#line 1577 "det_report.m"
              MR_Word check_hlds__det_report__V_46_46;
#line 1577 "det_report.m"
              MR_Word check_hlds__det_report__V_47_47;
#line 1577 "det_report.m"
              MR_Word check_hlds__det_report__V_50_50;
#line 1577 "det_report.m"
              MR_Word check_hlds__det_report__V_51_51;
#line 1577 "det_report.m"
              MR_Word check_hlds__det_report__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1577 "det_report.m"
              MR_String check_hlds__det_report__VarStr_88;

#line 1578 "det_report.m"
              {
#line 1578 "det_report.m"
                check_hlds__det_report__VarStr_88 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_6, check_hlds__det_report__Var_87);
              }
#line 1579 "det_report.m"
              {
#line 1579 "det_report.m"
                check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "det_report.m"
                MR_hl_field(MR_mktag(2), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__VarStr_88));
#line 1579 "det_report.m"
              }
#line 1580 "det_report.m"
              {
#line 1580 "det_report.m"
                check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1580 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (check_hlds__det_report__ConsId_18));
#line 1580 "det_report.m"
              }
#line 1580 "det_report.m"
              {
#line 1580 "det_report.m"
                check_hlds__det_report__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_50_50, 0) = ((MR_Box) (check_hlds__det_report__V_51_51));
#line 1580 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[116])));
#line 1580 "det_report.m"
              }
#line 1579 "det_report.m"
              {
#line 1579 "det_report.m"
                check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[118])));
#line 1579 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (check_hlds__det_report__V_50_50));
#line 1579 "det_report.m"
              }
#line 1579 "det_report.m"
              {
#line 1579 "det_report.m"
                check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 1579 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 1579 "det_report.m"
              }
#line 1579 "det_report.m"
              {
#line 1579 "det_report.m"
                check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[117])));
#line 1579 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 1579 "det_report.m"
              }
#line 1577 "det_report.m"
            }
#line 1567 "det_report.m"
            break;
#line 1567 "det_report.m"
          case (MR_Integer) 1:
#line 1582 "det_report.m"
            {
#line 1582 "det_report.m"
              MR_Word check_hlds__det_report__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1582 "det_report.m"
              MR_Word check_hlds__det_report__PredInfo_21;
#line 1582 "det_report.m"
              MR_String check_hlds__det_report__Name_22;
#line 1582 "det_report.m"
              MR_Word check_hlds__det_report__V_37_37;
#line 1582 "det_report.m"
              MR_Word check_hlds__det_report__V_38_38;
#line 1582 "det_report.m"
              MR_Integer check_hlds__det_report___ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 2)));

#line 1583 "det_report.m"
              {
#line 1583 "det_report.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_report__ModuleInfo_5, check_hlds__det_report__PredId_19, &check_hlds__det_report__PredInfo_21);
              }
#line 1584 "det_report.m"
              {
#line 1584 "det_report.m"
                check_hlds__det_report__Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_report__PredInfo_21);
              }
#line 1585 "det_report.m"
              {
#line 1585 "det_report.m"
                check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "det_report.m"
                MR_hl_field(MR_mktag(2), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__Name_22));
#line 1585 "det_report.m"
              }
#line 1585 "det_report.m"
              {
#line 1585 "det_report.m"
                check_hlds__det_report__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 1585 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[116])));
#line 1585 "det_report.m"
              }
#line 1585 "det_report.m"
              {
#line 1585 "det_report.m"
                check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[114])));
#line 1585 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_37_37));
#line 1585 "det_report.m"
              }
#line 1582 "det_report.m"
            }
#line 1567 "det_report.m"
            break;
#line 1567 "det_report.m"
          case (MR_Integer) 2:
#line 1587 "det_report.m"
            {
#line 1587 "det_report.m"
              MR_Word check_hlds__det_report__GenericCall_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
#line 1587 "det_report.m"
              MR_Word check_hlds__det_report__GenericCallId_24;
#line 1587 "det_report.m"
              MR_Word check_hlds__det_report__V_28_28;
#line 1587 "det_report.m"
              MR_String check_hlds__det_report__V_29_29;
#line 1587 "det_report.m"
              MR_String check_hlds__det_report__V_30_30;

#line 1588 "det_report.m"
              {
#line 1588 "det_report.m"
                hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__det_report__GenericCall_23, &check_hlds__det_report__GenericCallId_24);
              }
#line 1589 "det_report.m"
              {
#line 1589 "det_report.m"
                check_hlds__det_report__V_30_30 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(check_hlds__det_report__GenericCallId_24);
              }
#line 1589 "det_report.m"
              {
#line 1589 "det_report.m"
                check_hlds__det_report__V_29_29 = parse_tree__error_util__capitalize_1_f_0(check_hlds__det_report__V_30_30);
              }
#line 1589 "det_report.m"
              {
#line 1589 "det_report.m"
                check_hlds__det_report__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1589 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_28_28, 1) = ((MR_Box) (check_hlds__det_report__V_29_29));
#line 1589 "det_report.m"
              }
#line 1589 "det_report.m"
              {
#line 1589 "det_report.m"
                check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (check_hlds__det_report__V_28_28));
#line 1589 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[116])));
#line 1589 "det_report.m"
              }
#line 1587 "det_report.m"
            }
#line 1567 "det_report.m"
            break;
#line 1567 "det_report.m"
        }
#line 1567 "det_report.m"
        break;
#line 1567 "det_report.m"
    }
#line 1595 "det_report.m"
    {
#line 1595 "det_report.m"
      check_hlds__det_report__V_82_82 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__Pieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5]));
    }
#line 1595 "det_report.m"
    {
#line 1595 "det_report.m"
      check_hlds__det_report__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1595 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_81_81, 0) = ((MR_Box) (check_hlds__det_report__V_82_82));
#line 1595 "det_report.m"
    }
#line 1595 "det_report.m"
    {
#line 1595 "det_report.m"
      check_hlds__det_report__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 0) = ((MR_Box) (check_hlds__det_report__V_81_81));
#line 1595 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1595 "det_report.m"
    }
#line 1595 "det_report.m"
    {
#line 1595 "det_report.m"
      check_hlds__det_report__Msg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1595 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_8, 0) = ((MR_Box) (check_hlds__det_report__Context_9));
#line 1595 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_8, 1) = ((MR_Box) (check_hlds__det_report__V_80_80));
#line 1595 "det_report.m"
    }
#line 1561 "det_report.m"
    return check_hlds__det_report__Msg_8;
#line 1561 "det_report.m"
  }
#line 1558 "det_report.m"
}

#line 1433 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
#line 1433 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 1433 "det_report.m"
  MR_Word check_hlds__det_report__CallUnifyContext_9,
#line 1433 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_10,
#line 1433 "det_report.m"
  MR_Word check_hlds__det_report__PredId_11,
#line 1433 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_12,
#line 1433 "det_report.m"
  MR_Word * check_hlds__det_report__InitMsgs_13,
#line 1433 "det_report.m"
  MR_Word * check_hlds__det_report__StartingPieces_14)
#line 1433 "det_report.m"
{
#line 1438 "det_report.m"
  {
#line 1438 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1438 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_15;
#line 1438 "det_report.m"
    MR_Word check_hlds__det_report__PredInfo_16;
#line 1438 "det_report.m"
    MR_Word check_hlds__det_report__Origin_17;
#line 1449 "det_report.m"
    MR_Word check_hlds__det_report__V_30_30;
#line 1449 "det_report.m"
    MR_Word check_hlds__det_report__V_18_18;

#line 1439 "det_report.m"
    {
#line 1439 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_10, &check_hlds__det_report__ModuleInfo_15);
    }
#line 1440 "det_report.m"
    {
#line 1440 "det_report.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__PredId_11, &check_hlds__det_report__PredInfo_16);
    }
#line 1441 "det_report.m"
    {
#line 1441 "det_report.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__det_report__PredInfo_16, &check_hlds__det_report__Origin_17);
    }
#line 1449 "det_report.m"
    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Origin_17)) == (MR_mktag((MR_Integer) 0)));
#line 1449 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1449 "det_report.m"
      {
#line 1449 "det_report.m"
        check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Origin_17, (MR_Integer) 0)));
#line 1449 "det_report.m"
        check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Origin_17, (MR_Integer) 1)));
#line 1449 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_30_30 == (MR_Integer) 0);
#line 1449 "det_report.m"
      }
#line 1462 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1450 "det_report.m"
      {
#line 1450 "det_report.m"
        *check_hlds__det_report__InitMsgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1455 "det_report.m"
        if ((check_hlds__det_report__CallUnifyContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1458 "det_report.m"
          {
#line 1460 "det_report.m"
            *check_hlds__det_report__StartingPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[112]);
#line 1458 "det_report.m"
          }
#line 1455 "det_report.m"
        else
#line 1452 "det_report.m"
          {
#line 1452 "det_report.m"
            MR_Word check_hlds__det_report__LHS_19;
#line 1452 "det_report.m"
            MR_Word check_hlds__det_report__RHS_20;
#line 1452 "det_report.m"
            MR_Word check_hlds__det_report__UC_21;
#line 1452 "det_report.m"
            MR_Word check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CallUnifyContext_9, (MR_Integer) 0)));

#line 1452 "det_report.m"
            check_hlds__det_report__LHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_36_36, (MR_Integer) 0)));
#line 1452 "det_report.m"
            check_hlds__det_report__RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_36_36, (MR_Integer) 1)));
#line 1452 "det_report.m"
            check_hlds__det_report__UC_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_36_36, (MR_Integer) 2)));
#line 1453 "det_report.m"
            {
#line 1453 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__det_report__UC_21, check_hlds__det_report__DetInfo_10, check_hlds__det_report__LHS_19, check_hlds__det_report__RHS_20, check_hlds__det_report__StartingPieces_14);
#line 1453 "det_report.m"
              return;
            }
#line 1452 "det_report.m"
          }
#line 1450 "det_report.m"
      }
#line 1462 "det_report.m"
    else
#line 1473 "det_report.m"
      {
#line 1473 "det_report.m"
        MR_Word check_hlds__det_report__ProcTable_25;
#line 1473 "det_report.m"
        MR_Word check_hlds__det_report__ProcInfo_26;
#line 1473 "det_report.m"
        MR_Word check_hlds__det_report__ArgModes_27;
#line 1473 "det_report.m"
        MR_Word check_hlds__det_report__InstVarSet_28;
#line 1473 "det_report.m"
        MR_Word check_hlds__det_report__PredPieces_29;
#line 1475 "det_report.m"
        MR_Box check_hlds__det_report__conv0_ProcInfo_26;

#line 1470 "det_report.m"
        if ((check_hlds__det_report__CallUnifyContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1472 "det_report.m"
          *check_hlds__det_report__InitMsgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1470 "det_report.m"
        else
#line 1464 "det_report.m"
          {
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__UnifyPieces0_22;
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__UnifyPieces_23;
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__UnifyMsg_24;
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CallUnifyContext_9, (MR_Integer) 0)));
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__V_46_46;
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__V_47_47;
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__LHS_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, (MR_Integer) 0)));
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__RHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, (MR_Integer) 1)));
#line 1464 "det_report.m"
            MR_Word check_hlds__det_report__UC_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, (MR_Integer) 2)));

#line 1465 "det_report.m"
            {
#line 1465 "det_report.m"
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 1, check_hlds__det_report__UC_55, check_hlds__det_report__DetInfo_10, check_hlds__det_report__LHS_53, check_hlds__det_report__RHS_54, &check_hlds__det_report__UnifyPieces0_22);
            }
#line 1467 "det_report.m"
            {
#line 1467 "det_report.m"
              check_hlds__det_report__UnifyPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__UnifyPieces0_22, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[113]));
            }
#line 1468 "det_report.m"
            {
#line 1468 "det_report.m"
              check_hlds__det_report__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1468 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__UnifyPieces_23));
#line 1468 "det_report.m"
            }
#line 1468 "det_report.m"
            {
#line 1468 "det_report.m"
              check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 1468 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1468 "det_report.m"
            }
#line 1468 "det_report.m"
            {
#line 1468 "det_report.m"
              check_hlds__det_report__UnifyMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1468 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__UnifyMsg_24, 0) = ((MR_Box) (check_hlds__det_report__Context_8));
#line 1468 "det_report.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_report__UnifyMsg_24, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 1468 "det_report.m"
            }
#line 1469 "det_report.m"
            {
#line 1469 "det_report.m"
              MR_Word base;
#line 1469 "det_report.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "det_report.m"
              *check_hlds__det_report__InitMsgs_13 = base;
#line 1469 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__UnifyMsg_24));
#line 1469 "det_report.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1469 "det_report.m"
            }
#line 1464 "det_report.m"
          }
#line 1474 "det_report.m"
        {
#line 1474 "det_report.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_report__PredInfo_16, &check_hlds__det_report__ProcTable_25);
        }
#line 1475 "det_report.m"
        {
#line 1475 "det_report.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_report__ProcTable_25, check_hlds__det_report__ProcId_12, &check_hlds__det_report__conv0_ProcInfo_26);
        }
#line 1475 "det_report.m"
        check_hlds__det_report__ProcInfo_26 = ((MR_Word) check_hlds__det_report__conv0_ProcInfo_26);
#line 1476 "det_report.m"
        {
#line 1476 "det_report.m"
          hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(check_hlds__det_report__ProcInfo_26, &check_hlds__det_report__ArgModes_27);
        }
#line 1477 "det_report.m"
        {
#line 1477 "det_report.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__det_report__ProcInfo_26, &check_hlds__det_report__InstVarSet_28);
        }
#line 1478 "det_report.m"
        {
#line 1478 "det_report.m"
          check_hlds__det_report__PredPieces_29 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(check_hlds__det_report__ModuleInfo_15, (MR_Integer) 0, check_hlds__det_report__PredId_11, check_hlds__det_report__InstVarSet_28, check_hlds__det_report__ArgModes_27);
        }
#line 1480 "det_report.m"
        {
#line 1480 "det_report.m"
          MR_Word base;
#line 1480 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "det_report.m"
          *check_hlds__det_report__StartingPieces_14 = base;
#line 1480 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[114])));
#line 1480 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__PredPieces_29));
#line 1480 "det_report.m"
        }
#line 1473 "det_report.m"
      }
#line 1438 "det_report.m"
  }
#line 1433 "det_report.m"
}

#line 1425 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
#line 1425 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_4,
#line 1425 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2)
#line 1425 "det_report.m"
{
#line 1427 "det_report.m"
  {
#line 1427 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1427 "det_report.m"
    MR_String check_hlds__det_report__HeadVar__3_3;
#line 1427 "det_report.m"
    MR_Word check_hlds__det_report__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1427 "det_report.m"
    MR_Word check_hlds__det_report__MaybeArgVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

#line 1428 "det_report.m"
    {
#line 1428 "det_report.m"
      return check_hlds__det_report__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(check_hlds__det_report__VarSet_4, (MR_Integer) 1, check_hlds__det_report__ConsId_5, check_hlds__det_report__MaybeArgVars_6);
    }
#line 1427 "det_report.m"
    return check_hlds__det_report__HeadVar__3_3;
#line 1427 "det_report.m"
  }
#line 1425 "det_report.m"
}

#line 1414 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
#line 1414 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1414 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 1414 "det_report.m"
{
#line 1414 "det_report.m"
  {
#line 1414 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 1414 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1414 "det_report.m"
    MR_String check_hlds__det_report__conv0_HeadVar__3_3;

#line 1414 "det_report.m"
    {
#line 1414 "det_report.m"
      check_hlds__det_report__conv0_HeadVar__3_3 = check_hlds__det_report__switch_match_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 1414 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__3_3));
#line 1414 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 1414 "det_report.m"
  }
#line 1414 "det_report.m"
}

#line 1404 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
#line 1404 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_1,
#line 1404 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1404 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__3_3)
#line 1404 "det_report.m"
{
#line 1407 "det_report.m"
  {
#line 1407 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1407 "det_report.m"
    if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1407 "det_report.m"
      *check_hlds__det_report__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1407 "det_report.m"
    else
#line 1409 "det_report.m"
      {
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_47_47;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContexts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__ProcInfo_9;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__VarSet_10;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__Var_11;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__MainMatch_12;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatches_13;
#line 1409 "det_report.m"
        MR_String check_hlds__det_report__MainMatchStr_14;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatchStrs_15;
#line 1409 "det_report.m"
        MR_String check_hlds__det_report__MatchsStr_16;
#line 1409 "det_report.m"
        MR_String check_hlds__det_report__VarStr_17;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__InnerPieces_18;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__OuterPieces_19;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__V_20_20;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__V_22_22;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__V_25_25;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__V_26_26;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__V_27_27;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__V_30_30;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__V_38_38;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_49;
#line 1409 "det_report.m"
        MR_Word check_hlds__det_report__MaybeArgVars_50;

#line 1410 "det_report.m"
        {
#line 1410 "det_report.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_1, &check_hlds__det_report__ProcInfo_9);
        }
#line 1411 "det_report.m"
        {
#line 1411 "det_report.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_9, &check_hlds__det_report__VarSet_10);
        }
#line 1412 "det_report.m"
        check_hlds__det_report__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 0)));
#line 1412 "det_report.m"
        check_hlds__det_report__MainMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 1)));
#line 1412 "det_report.m"
        check_hlds__det_report__OtherMatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 2)));
#line 1427 "det_report.m"
        check_hlds__det_report__ConsId_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__MainMatch_12, (MR_Integer) 0)));
#line 1427 "det_report.m"
        check_hlds__det_report__MaybeArgVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__MainMatch_12, (MR_Integer) 1)));
#line 1428 "det_report.m"
        {
#line 1428 "det_report.m"
          check_hlds__det_report__MainMatchStr_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(check_hlds__det_report__VarSet_10, (MR_Integer) 1, check_hlds__det_report__ConsId_49, check_hlds__det_report__MaybeArgVars_50);
        }
#line 1414 "det_report.m"
        {
#line 1414 "det_report.m"
          check_hlds__det_report__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[2]));
#line 1414 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 1) = ((MR_Box) (check_hlds__det_report__det_diagnose_switch_context_3_p_0_1));
#line 1414 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1414 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 3) = ((MR_Box) (check_hlds__det_report__VarSet_10));
#line 1414 "det_report.m"
        }
#line 1414 "det_report.m"
        {
#line 1414 "det_report.m"
          check_hlds__det_report__OtherMatchStrs_15 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_report__V_20_20, check_hlds__det_report__OtherMatches_13);
        }
#line 1415 "det_report.m"
        {
#line 1415 "det_report.m"
          check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__MainMatchStr_14));
#line 1415 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (check_hlds__det_report__OtherMatchStrs_15));
#line 1415 "det_report.m"
        }
#line 1415 "det_report.m"
        {
#line 1415 "det_report.m"
          check_hlds__det_report__MatchsStr_16 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__det_report__V_22_22);
        }
#line 1416 "det_report.m"
        {
#line 1416 "det_report.m"
          check_hlds__det_report__VarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_10, check_hlds__det_report__Var_11);
        }
#line 1417 "det_report.m"
        {
#line 1417 "det_report.m"
          check_hlds__det_report__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1417 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_26_26, 1) = ((MR_Box) (check_hlds__det_report__MatchsStr_16));
#line 1417 "det_report.m"
        }
#line 1418 "det_report.m"
        {
#line 1418 "det_report.m"
          check_hlds__det_report__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_31_31, 0) = ((MR_Box) (check_hlds__det_report__VarStr_17));
#line 1418 "det_report.m"
        }
#line 1418 "det_report.m"
        {
#line 1418 "det_report.m"
          check_hlds__det_report__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 0) = ((MR_Box) (check_hlds__det_report__V_31_31));
#line 1418 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[44])));
#line 1418 "det_report.m"
        }
#line 1418 "det_report.m"
        {
#line 1418 "det_report.m"
          check_hlds__det_report__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[110])));
#line 1418 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__V_30_30));
#line 1418 "det_report.m"
        }
#line 1417 "det_report.m"
        {
#line 1417 "det_report.m"
          check_hlds__det_report__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_25_25, 0) = ((MR_Box) (check_hlds__det_report__V_26_26));
#line 1417 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_25_25, 1) = ((MR_Box) (check_hlds__det_report__V_27_27));
#line 1417 "det_report.m"
        }
#line 1417 "det_report.m"
        {
#line 1417 "det_report.m"
          check_hlds__det_report__InnerPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__InnerPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[109])));
#line 1417 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__InnerPieces_18, 1) = ((MR_Box) (check_hlds__det_report__V_25_25));
#line 1417 "det_report.m"
        }
#line 1419 "det_report.m"
        {
#line 1419 "det_report.m"
          check_hlds__det_report__det_diagnose_switch_context_3_p_0(check_hlds__det_report__DetInfo_1, check_hlds__det_report__SwitchContexts_7, &check_hlds__det_report__OuterPieces_19);
        }
#line 7216 "check_hlds.det_report.c"
        check_hlds__det_report__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1423 "det_report.m"
        {
#line 1423 "det_report.m"
          check_hlds__det_report__V_38_38 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_47_47, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[82]), check_hlds__det_report__InnerPieces_18);
        }
#line 1423 "det_report.m"
        {
#line 1423 "det_report.m"
          *check_hlds__det_report__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_47_47, check_hlds__det_report__OuterPieces_19, check_hlds__det_report__V_38_38);
        }
#line 1409 "det_report.m"
      }
#line 1407 "det_report.m"
  }
#line 1404 "det_report.m"
}

#line 1354 "det_report.m"
static void MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_2_p_0(
#line 1354 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1354 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__2_2)
#line 1354 "det_report.m"
{
#line 1357 "det_report.m"
  {
#line 1357 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1357 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1357 "det_report.m"
      *check_hlds__det_report__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1357 "det_report.m"
    else
#line 1358 "det_report.m"
      {
#line 1358 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1358 "det_report.m"
        MR_Word check_hlds__det_report__ConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1358 "det_report.m"
        MR_Word check_hlds__det_report__ConsIdPiece_6;
#line 1358 "det_report.m"
        MR_Word check_hlds__det_report__PiecesHead_10;
#line 1358 "det_report.m"
        MR_Word check_hlds__det_report__PiecesTail_12;

#line 1359 "det_report.m"
        {
#line 1359 "det_report.m"
          check_hlds__det_report__ConsIdPiece_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1359 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdPiece_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1359 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdPiece_6, 1) = ((MR_Box) (check_hlds__det_report__ConsId_3));
#line 1359 "det_report.m"
        }
#line 1363 "det_report.m"
        if ((check_hlds__det_report__ConsIds_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1367 "det_report.m"
          {
#line 1368 "det_report.m"
            {
#line 1368 "det_report.m"
              check_hlds__det_report__PiecesHead_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_6));
#line 1368 "det_report.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[105])));
#line 1368 "det_report.m"
            }
#line 1367 "det_report.m"
          }
#line 1363 "det_report.m"
        else
#line 1363 "det_report.m"
          {
#line 1363 "det_report.m"
            MR_Word check_hlds__det_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ConsIds_4, (MR_Integer) 1)));
#line 1361 "det_report.m"
            MR_Word check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ConsIds_4, (MR_Integer) 0)));

#line 1363 "det_report.m"
            if ((check_hlds__det_report__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1364 "det_report.m"
              {
#line 1365 "det_report.m"
                {
#line 1365 "det_report.m"
                  check_hlds__det_report__PiecesHead_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_6));
#line 1365 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[107])));
#line 1365 "det_report.m"
                }
#line 1364 "det_report.m"
              }
#line 1363 "det_report.m"
            else
#line 1361 "det_report.m"
              {
#line 1362 "det_report.m"
                {
#line 1362 "det_report.m"
                  check_hlds__det_report__PiecesHead_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_6));
#line 1362 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[108])));
#line 1362 "det_report.m"
                }
#line 1361 "det_report.m"
              }
#line 1363 "det_report.m"
          }
#line 1370 "det_report.m"
        {
#line 1370 "det_report.m"
          check_hlds__det_report__cons_id_list_to_pieces_2_p_0(check_hlds__det_report__ConsIds_4, &check_hlds__det_report__PiecesTail_12);
        }
#line 1371 "det_report.m"
        {
#line 1371 "det_report.m"
          *check_hlds__det_report__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__PiecesHead_10, check_hlds__det_report__PiecesTail_12);
        }
#line 1358 "det_report.m"
      }
#line 1357 "det_report.m"
  }
#line 1354 "det_report.m"
}

#line 1344 "det_report.m"
static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
#line 1344 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1344 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2,
#line 1344 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3)
#line 1344 "det_report.m"
{
#line 1347 "det_report.m"
  while (MR_TRUE)
#line 1347 "det_report.m"
    {
#line 1347 "det_report.m"
      /* tailcall optimized into a loop */
#line 1347 "det_report.m"
      {
#line 1347 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1347 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1347 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2;
#line 1347 "det_report.m"
        else
#line 1348 "det_report.m"
          {
#line 1348 "det_report.m"
            MR_Word check_hlds__det_report__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1348 "det_report.m"
            MR_Word check_hlds__det_report__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1348 "det_report.m"
            MR_Word check_hlds__det_report__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1348 "det_report.m"
            MR_Word check_hlds__det_report__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 0)));
#line 1348 "det_report.m"
            MR_Word check_hlds__det_report__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 1)));
#line 1348 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15;
#line 1348 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16;
#line 1349 "det_report.m"
            MR_Word check_hlds__det_report___Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 2)));

#line 1350 "det_report.m"
            {
#line 1350 "det_report.m"
              mercury__set_tree234__insert_3_p_0(check_hlds__det_report__TypeCtorInfo_18_18, ((MR_Box) (check_hlds__det_report__MainConsId_10)), check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2, &check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15);
            }
#line 1351 "det_report.m"
            {
#line 1351 "det_report.m"
              mercury__set_tree234__insert_list_3_p_0(check_hlds__det_report__TypeCtorInfo_18_18, check_hlds__det_report__OtherConsIds_11, check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15, &check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16);
            }
#line 1352 "det_report.m"
            /* direct tailcall eliminated */
#line 1352 "det_report.m"
            {
#line 1352 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Cases_8;
#line 1352 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16;

#line 1352 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0__tmp_copy_2;
#line 1352 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1352 "det_report.m"
            }
#line 1352 "det_report.m"
            continue;
#line 1348 "det_report.m"
          }
#line 1347 "det_report.m"
      }
#line 1347 "det_report.m"
      break;
#line 1347 "det_report.m"
    }
#line 1344 "det_report.m"
}

#line 1331 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_uncovered_consids_4_p_0(
#line 1331 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1331 "det_report.m"
  MR_Word check_hlds__det_report__CoveredConsIds_2,
#line 1331 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3,
#line 1331 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4)
#line 1331 "det_report.m"
{
#line 1334 "det_report.m"
  while (MR_TRUE)
#line 1334 "det_report.m"
    {
#line 1334 "det_report.m"
      /* tailcall optimized into a loop */
#line 1334 "det_report.m"
      {
#line 1334 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1334 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1334 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3;
#line 1334 "det_report.m"
        else
#line 1336 "det_report.m"
          {
#line 1336 "det_report.m"
            MR_Word check_hlds__det_report__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1336 "det_report.m"
            MR_Word check_hlds__det_report__ConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1336 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15;

#line 1337 "det_report.m"
            {
#line 1337 "det_report.m"
              check_hlds__det_report__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__CoveredConsIds_2, ((MR_Box) (check_hlds__det_report__ConsId_9)));
            }
#line 1339 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1339 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3;
#line 1339 "det_report.m"
            else
#line 1340 "det_report.m"
              {
#line 1340 "det_report.m"
                check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15, 0) = ((MR_Box) (check_hlds__det_report__ConsId_9));
#line 1340 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3));
#line 1340 "det_report.m"
              }
#line 1342 "det_report.m"
            /* direct tailcall eliminated */
#line 1342 "det_report.m"
            {
#line 1342 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__ConsIds_10;
#line 1342 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15;

#line 1342 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0__tmp_copy_3;
#line 1342 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1342 "det_report.m"
            }
#line 1342 "det_report.m"
            continue;
#line 1336 "det_report.m"
          }
#line 1334 "det_report.m"
      }
#line 1334 "det_report.m"
      break;
#line 1334 "det_report.m"
    }
#line 1331 "det_report.m"
}

#line 1307 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0_1(
#line 1307 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1307 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1307 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2)
#line 1307 "det_report.m"
{
#line 1307 "det_report.m"
  {
#line 1307 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1307 "det_report.m"
    MR_Word check_hlds__det_report__conv0_HeadVar__3_3;

#line 1307 "det_report.m"
    {
#line 1307 "det_report.m"
      parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_report__wrapper_arg_1), &check_hlds__det_report__conv0_HeadVar__3_3);
    }
#line 1307 "det_report.m"
    *check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__3_3));
#line 1307 "det_report.m"
  }
#line 1307 "det_report.m"
}

#line 1290 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0(
#line 1290 "det_report.m"
  MR_Word check_hlds__det_report__DetInfo_7,
#line 1290 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_8,
#line 1290 "det_report.m"
  MR_Word check_hlds__det_report__Var_9,
#line 1290 "det_report.m"
  MR_Word check_hlds__det_report__Cases_10,
#line 1290 "det_report.m"
  MR_String * check_hlds__det_report__VarStr_11,
#line 1290 "det_report.m"
  MR_Word * check_hlds__det_report__MaybeMissingPieces_12)
#line 1290 "det_report.m"
{
#line 1294 "det_report.m"
  {
#line 1294 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1294 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_13;
#line 1294 "det_report.m"
    MR_Word check_hlds__det_report__VarSet_14;
#line 1294 "det_report.m"
    MR_Word check_hlds__det_report__ModuleInfo_15;
#line 1319 "det_report.m"
    MR_Word check_hlds__det_report__ConsIds_21;
#line 1309 "det_report.m"
    MR_Word check_hlds__det_report__BoundInsts_17;
#line 1301 "det_report.m"
    MR_Word check_hlds__det_report__VarInst_16;

#line 1295 "det_report.m"
    {
#line 1295 "det_report.m"
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__ProcInfo_13);
    }
#line 1296 "det_report.m"
    {
#line 1296 "det_report.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_13, &check_hlds__det_report__VarSet_14);
    }
#line 1297 "det_report.m"
    {
#line 1297 "det_report.m"
      *check_hlds__det_report__VarStr_11 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_14, check_hlds__det_report__Var_9);
    }
#line 1298 "det_report.m"
    {
#line 1298 "det_report.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__ModuleInfo_15);
    }
#line 1301 "det_report.m"
    {
#line 1301 "det_report.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__det_report__InstMap0_8, check_hlds__det_report__Var_9, &check_hlds__det_report__VarInst_16);
    }
#line 1302 "det_report.m"
    {
#line 1302 "det_report.m"
      check_hlds__det_report__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__VarInst_16, &check_hlds__det_report__BoundInsts_17);
    }
#line 1309 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1304 "det_report.m"
      {
#line 1304 "det_report.m"
        MR_Word check_hlds__det_report__VarTypes_18;
#line 1304 "det_report.m"
        MR_Word check_hlds__det_report__VarType_19;
#line 1304 "det_report.m"
        MR_Word check_hlds__det_report__VarTypeCtor_20;
#line 1304 "det_report.m"
        MR_Word check_hlds__det_report__V_27_27;

#line 1304 "det_report.m"
        {
#line 1304 "det_report.m"
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__VarTypes_18);
        }
#line 1305 "det_report.m"
        {
#line 1305 "det_report.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_18, check_hlds__det_report__Var_9, &check_hlds__det_report__VarType_19);
        }
#line 1306 "det_report.m"
        {
#line 1306 "det_report.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__det_report__VarType_19, &check_hlds__det_report__VarTypeCtor_20);
        }
#line 1307 "det_report.m"
        {
#line 1307 "det_report.m"
          check_hlds__det_report__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1307 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[1]));
#line 1307 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__find_missing_cons_ids_6_p_0_1));
#line 1307 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1307 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 3) = ((MR_Box) (check_hlds__det_report__VarTypeCtor_20));
#line 1307 "det_report.m"
        }
#line 1307 "det_report.m"
        {
#line 1307 "det_report.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__V_27_27, check_hlds__det_report__BoundInsts_17, &check_hlds__det_report__ConsIds_21);
        }
#line 1304 "det_report.m"
        check_hlds__det_report__succeeded = MR_TRUE;
#line 1304 "det_report.m"
      }
#line 1309 "det_report.m"
    else
#line 1310 "det_report.m"
      {
#line 1310 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_41_41;
#line 1310 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_42_42;
#line 1310 "det_report.m"
        MR_Word check_hlds__det_report__TypeDefn_22;
#line 1310 "det_report.m"
        MR_Word check_hlds__det_report__TypeBody_23;
#line 1310 "det_report.m"
        MR_Word check_hlds__det_report__ConsTable_24;
#line 1312 "det_report.m"
        MR_Word check_hlds__det_report__V_28_28;
#line 1312 "det_report.m"
        MR_Word check_hlds__det_report__V_29_29;
#line 1312 "det_report.m"
        MR_Word check_hlds__det_report__V_30_30;
#line 1312 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 1312 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;
#line 1312 "det_report.m"
        MR_Word check_hlds__det_report__V_33_33;
#line 1312 "det_report.m"
        MR_Word check_hlds__det_report__V_34_34;
#line 1312 "det_report.m"
        MR_Word check_hlds__det_report__V_35_35;

#line 1310 "det_report.m"
        {
#line 1310 "det_report.m"
          check_hlds__det_report__succeeded = check_hlds__det_util__det_lookup_var_type_4_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__ProcInfo_13, check_hlds__det_report__Var_9, &check_hlds__det_report__TypeDefn_22);
        }
#line 1310 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 1310 "det_report.m"
          {
#line 1311 "det_report.m"
            {
#line 1311 "det_report.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__det_report__TypeDefn_22, &check_hlds__det_report__TypeBody_23);
            }
#line 1312 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__TypeBody_23)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 1312 "det_report.m"
              {
#line 1312 "det_report.m"
                check_hlds__det_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 0)));
#line 1312 "det_report.m"
                check_hlds__det_report__ConsTable_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 1)));
#line 1312 "det_report.m"
                check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 2)));
#line 1312 "det_report.m"
                check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 3)));
#line 1312 "det_report.m"
                check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 4)));
#line 1312 "det_report.m"
                check_hlds__det_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 5)));
#line 1312 "det_report.m"
                check_hlds__det_report__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1312 "det_report.m"
                check_hlds__det_report__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1312 "det_report.m"
                check_hlds__det_report__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 7)));
#line 7741 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7743 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1313 "det_report.m"
                {
#line 1313 "det_report.m"
                  mercury__map__keys_2_p_0(check_hlds__det_report__TypeCtorInfo_41_41, check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__ConsTable_24, &check_hlds__det_report__ConsIds_21);
                }
#line 1313 "det_report.m"
                check_hlds__det_report__succeeded = MR_TRUE;
#line 1312 "det_report.m"
              }
#line 1310 "det_report.m"
          }
#line 1310 "det_report.m"
      }
#line 1319 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1316 "det_report.m"
      {
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__TypeCtorInfo_11_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__MissingConsIds_25;
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__MissingPieces_26;
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__CoveredConsIds_46;
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__RevMissingConsIds_47;
#line 1316 "det_report.m"
        MR_Word check_hlds__det_report__V_48_48;

#line 1327 "det_report.m"
        {
#line 1327 "det_report.m"
          check_hlds__det_report__V_48_48 = mercury__set_tree234__init_0_f_0(check_hlds__det_report__TypeCtorInfo_11_50);
        }
#line 1327 "det_report.m"
        {
#line 1327 "det_report.m"
          check_hlds__det_report__compute_covered_cons_ids_3_p_0(check_hlds__det_report__Cases_10, check_hlds__det_report__V_48_48, &check_hlds__det_report__CoveredConsIds_46);
        }
#line 1328 "det_report.m"
        {
#line 1328 "det_report.m"
          check_hlds__det_report__find_uncovered_consids_4_p_0(check_hlds__det_report__ConsIds_21, check_hlds__det_report__CoveredConsIds_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__RevMissingConsIds_47);
        }
#line 1329 "det_report.m"
        {
#line 1329 "det_report.m"
          mercury__list__reverse_2_p_0(check_hlds__det_report__TypeCtorInfo_11_50, check_hlds__det_report__RevMissingConsIds_47, &check_hlds__det_report__MissingConsIds_25);
        }
#line 1317 "det_report.m"
        {
#line 1317 "det_report.m"
          check_hlds__det_report__cons_id_list_to_pieces_2_p_0(check_hlds__det_report__MissingConsIds_25, &check_hlds__det_report__MissingPieces_26);
        }
#line 1318 "det_report.m"
        {
#line 1318 "det_report.m"
          MR_Word base;
#line 1318 "det_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "det_report.m"
          *check_hlds__det_report__MaybeMissingPieces_12 = base;
#line 1318 "det_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__MissingPieces_26));
#line 1318 "det_report.m"
        }
#line 1316 "det_report.m"
      }
#line 1319 "det_report.m"
    else
#line 1320 "det_report.m"
      *check_hlds__det_report__MaybeMissingPieces_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1294 "det_report.m"
  }
#line 1290 "det_report.m"
}

#line 1279 "det_report.m"
static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
#line 1279 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1279 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1279 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0_3,
#line 1279 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_InstMap_4)
#line 1279 "det_report.m"
{
#line 1282 "det_report.m"
  while (MR_TRUE)
#line 1282 "det_report.m"
    {
#line 1282 "det_report.m"
      /* tailcall optimized into a loop */
#line 1282 "det_report.m"
      {
#line 1282 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1282 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1282 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_InstMap_4 = check_hlds__det_report__STATE_VARIABLE_InstMap_0_3;
#line 1282 "det_report.m"
        else
#line 1283 "det_report.m"
          {
#line 1283 "det_report.m"
            MR_Word check_hlds__det_report__Var_9;
#line 1283 "det_report.m"
            MR_Word check_hlds__det_report__Mode_10;
#line 1283 "det_report.m"
            MR_Word check_hlds__det_report__VarsModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1283 "det_report.m"
            MR_Word check_hlds__det_report__InitInst_14;
#line 1283 "det_report.m"
            MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1283 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_19_19;
#line 1284 "det_report.m"
            MR_Word check_hlds__det_report___FinalInst_15;

#line 1283 "det_report.m"
            check_hlds__det_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_18_18, (MR_Integer) 0)));
#line 1283 "det_report.m"
            check_hlds__det_report__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_18_18, (MR_Integer) 1)));
#line 1284 "det_report.m"
            {
#line 1284 "det_report.m"
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__Mode_10, &check_hlds__det_report__InitInst_14, &check_hlds__det_report___FinalInst_15);
            }
#line 1285 "det_report.m"
            {
#line 1285 "det_report.m"
              hlds__instmap__instmap_set_var_4_p_0(check_hlds__det_report__Var_9, check_hlds__det_report__InitInst_14, check_hlds__det_report__STATE_VARIABLE_InstMap_0_3, &check_hlds__det_report__STATE_VARIABLE_InstMap_19_19);
            }
#line 1286 "det_report.m"
            /* direct tailcall eliminated */
#line 1286 "det_report.m"
            {
#line 1286 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__VarsModes_11;
#line 1286 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_InstMap_19_19;

#line 1286 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_InstMap_0_3 = check_hlds__det_report__STATE_VARIABLE_InstMap_0__tmp_copy_3;
#line 1286 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1286 "det_report.m"
            }
#line 1286 "det_report.m"
            continue;
#line 1283 "det_report.m"
          }
#line 1282 "det_report.m"
      }
#line 1282 "det_report.m"
      break;
#line 1282 "det_report.m"
    }
#line 1279 "det_report.m"
}

#line 1266 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_switch_6_p_0(
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1266 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 1266 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6)
#line 1266 "det_report.m"
{
#line 1269 "det_report.m"
  while (MR_TRUE)
#line 1269 "det_report.m"
    {
#line 1269 "det_report.m"
      /* tailcall optimized into a loop */
#line 1269 "det_report.m"
      {
#line 1269 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1269 "det_report.m"
        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1269 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 1269 "det_report.m"
        else
#line 1270 "det_report.m"
          {
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 0)));
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 1)));
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 2)));
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo0_22;
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_23;
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo_24;
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27;
#line 1270 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;

#line 1272 "det_report.m"
            {
#line 1272 "det_report.m"
              check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__ModuleInfo0_22);
            }
#line 1273 "det_report.m"
            {
#line 1273 "det_report.m"
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__MainConsId_19, check_hlds__det_report__OtherConsIds_20, check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__InstMap1_23, check_hlds__det_report__ModuleInfo0_22, &check_hlds__det_report__ModuleInfo_24);
            }
#line 1275 "det_report.m"
            {
#line 1275 "det_report.m"
              check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_24, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27);
            }
#line 1276 "det_report.m"
            {
#line 1276 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_21, check_hlds__det_report__InstMap1_23, check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27, &check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28);
            }
#line 1277 "det_report.m"
            /* direct tailcall eliminated */
#line 1277 "det_report.m"
            {
#line 1277 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__3__tmp_copy_3 = check_hlds__det_report__Cases_16;
#line 1277 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_5 = check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;

#line 1277 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_5;
#line 1277 "det_report.m"
              check_hlds__det_report__HeadVar__3_3 = check_hlds__det_report__HeadVar__3__tmp_copy_3;
#line 1277 "det_report.m"
            }
#line 1277 "det_report.m"
            continue;
#line 1270 "det_report.m"
          }
#line 1269 "det_report.m"
      }
#line 1269 "det_report.m"
      break;
#line 1269 "det_report.m"
    }
#line 1266 "det_report.m"
}

#line 1258 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_4_p_0(
#line 1258 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1258 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1258 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1258 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4)
#line 1258 "det_report.m"
{
#line 1261 "det_report.m"
  while (MR_TRUE)
#line 1261 "det_report.m"
    {
#line 1261 "det_report.m"
      /* tailcall optimized into a loop */
#line 1261 "det_report.m"
      {
#line 1261 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1261 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1261 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_4 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3;
#line 1261 "det_report.m"
        else
#line 1262 "det_report.m"
          {
#line 1262 "det_report.m"
            MR_Word check_hlds__det_report__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1262 "det_report.m"
            MR_Word check_hlds__det_report__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1262 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15;

#line 1263 "det_report.m"
            {
#line 1263 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3, &check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15);
            }
#line 1264 "det_report.m"
            /* direct tailcall eliminated */
#line 1264 "det_report.m"
            {
#line 1264 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Goals_10;
#line 1264 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15;

#line 1264 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3;
#line 1264 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1264 "det_report.m"
            }
#line 1264 "det_report.m"
            continue;
#line 1262 "det_report.m"
          }
#line 1261 "det_report.m"
      }
#line 1261 "det_report.m"
      break;
#line 1261 "det_report.m"
    }
#line 1258 "det_report.m"
}

#line 1249 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_4_p_0(
#line 1249 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1249 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1249 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
#line 1249 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4)
#line 1249 "det_report.m"
{
#line 1252 "det_report.m"
  while (MR_TRUE)
#line 1252 "det_report.m"
    {
#line 1252 "det_report.m"
      /* tailcall optimized into a loop */
#line 1252 "det_report.m"
      {
#line 1252 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1252 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1252 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_4 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3;
#line 1252 "det_report.m"
        else
#line 1253 "det_report.m"
          {
#line 1253 "det_report.m"
            MR_Word check_hlds__det_report__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 1253 "det_report.m"
            MR_Word check_hlds__det_report__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1253 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_13;
#line 1253 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16;

#line 1254 "det_report.m"
            {
#line 1254 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3, &check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16);
            }
#line 1255 "det_report.m"
            {
#line 1255 "det_report.m"
              hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, &check_hlds__det_report__InstMap1_13);
            }
#line 1256 "det_report.m"
            /* direct tailcall eliminated */
#line 1256 "det_report.m"
            {
#line 1256 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Goals_10;
#line 1256 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__2__tmp_copy_2 = check_hlds__det_report__InstMap1_13;
#line 1256 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16;

#line 1256 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3;
#line 1256 "det_report.m"
              check_hlds__det_report__HeadVar__2_2 = check_hlds__det_report__HeadVar__2__tmp_copy_2;
#line 1256 "det_report.m"
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 1256 "det_report.m"
            }
#line 1256 "det_report.m"
            continue;
#line 1253 "det_report.m"
          }
#line 1252 "det_report.m"
      }
#line 1252 "det_report.m"
      break;
#line 1252 "det_report.m"
    }
#line 1249 "det_report.m"
}

#line 1224 "det_report.m"
static void MR_CALL 
check_hlds__det_report__generate_warning_for_switch_var_if_missing_5_p_0(
#line 1224 "det_report.m"
  MR_Word check_hlds__det_report__RequiredVar_6,
#line 1224 "det_report.m"
  MR_Word check_hlds__det_report__Goal_7,
#line 1224 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_8,
#line 1224 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
#line 1224 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19)
#line 1224 "det_report.m"
{
#line 1228 "det_report.m"
  {
#line 1228 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1228 "det_report.m"
    MR_Word check_hlds__det_report__GoalVars_10;

#line 1229 "det_report.m"
    {
#line 1229 "det_report.m"
      hlds__goal_util__goal_vars_2_p_0(check_hlds__det_report__Goal_7, &check_hlds__det_report__GoalVars_10);
    }
#line 1230 "det_report.m"
    {
#line 1230 "det_report.m"
      check_hlds__det_report__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__GoalVars_10, check_hlds__det_report__RequiredVar_6);
    }
#line 1232 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1232 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_19 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18;
#line 1232 "det_report.m"
    else
#line 1233 "det_report.m"
      {
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__ProcInfo_11;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__VarSet_12;
#line 1233 "det_report.m"
        MR_String check_hlds__det_report__VarStr_13;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__MissingRequiredPieces_14;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__Context_15;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__MissingRequiredMsg_16;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__MissingRequiredSpec_17;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__V_22_22;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__V_23_23;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__V_33_33;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__V_34_34;
#line 1233 "det_report.m"
        MR_Word check_hlds__det_report__V_38_38;

#line 1233 "det_report.m"
        {
#line 1233 "det_report.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18, &check_hlds__det_report__ProcInfo_11);
        }
#line 1234 "det_report.m"
        {
#line 1234 "det_report.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__VarSet_12);
        }
#line 1235 "det_report.m"
        {
#line 1235 "det_report.m"
          check_hlds__det_report__VarStr_13 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_12, check_hlds__det_report__RequiredVar_6);
        }
#line 1236 "det_report.m"
        {
#line 1236 "det_report.m"
          check_hlds__det_report__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1236 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_23_23, 1) = ((MR_Box) (check_hlds__det_report__VarStr_13));
#line 1236 "det_report.m"
        }
#line 1236 "det_report.m"
        {
#line 1236 "det_report.m"
          check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__V_23_23));
#line 1236 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[61])));
#line 1236 "det_report.m"
        }
#line 1236 "det_report.m"
        {
#line 1236 "det_report.m"
          check_hlds__det_report__MissingRequiredPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__MissingRequiredPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[103])));
#line 1236 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__MissingRequiredPieces_14, 1) = ((MR_Box) (check_hlds__det_report__V_22_22));
#line 1236 "det_report.m"
        }
#line 1239 "det_report.m"
        {
#line 1239 "det_report.m"
          check_hlds__det_report__Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_8);
        }
#line 1241 "det_report.m"
        {
#line 1241 "det_report.m"
          check_hlds__det_report__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_34_34, 0) = ((MR_Box) (check_hlds__det_report__MissingRequiredPieces_14));
#line 1241 "det_report.m"
        }
#line 1241 "det_report.m"
        {
#line 1241 "det_report.m"
          check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (check_hlds__det_report__V_34_34));
#line 1241 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "det_report.m"
        }
#line 1240 "det_report.m"
        {
#line 1240 "det_report.m"
          check_hlds__det_report__MissingRequiredMsg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredMsg_16, 0) = ((MR_Box) (check_hlds__det_report__Context_15));
#line 1240 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredMsg_16, 1) = ((MR_Box) (check_hlds__det_report__V_33_33));
#line 1240 "det_report.m"
        }
#line 1243 "det_report.m"
        {
#line 1243 "det_report.m"
          check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__MissingRequiredMsg_16));
#line 1243 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "det_report.m"
        }
#line 1242 "det_report.m"
        {
#line 1242 "det_report.m"
          check_hlds__det_report__MissingRequiredSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1242 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 1242 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__MissingRequiredSpec_17, 2) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 1242 "det_report.m"
        }
#line 1244 "det_report.m"
        {
#line 1244 "det_report.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__MissingRequiredSpec_17, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18, check_hlds__det_report__STATE_VARIABLE_DetInfo_19);
#line 1244 "det_report.m"
          return;
        }
#line 1233 "det_report.m"
      }
#line 1228 "det_report.m"
  }
#line 1224 "det_report.m"
}

#line 1198 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_for_cases_8_p_0(
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 1198 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 1198 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8)
#line 1198 "det_report.m"
{
#line 1202 "det_report.m"
  while (MR_TRUE)
#line 1202 "det_report.m"
    {
#line 1202 "det_report.m"
      /* tailcall optimized into a loop */
#line 1202 "det_report.m"
      {
#line 1202 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 1202 "det_report.m"
        if ((check_hlds__det_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1203 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_8 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7;
#line 1202 "det_report.m"
        else
#line 1205 "det_report.m"
          {
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__4_4, (MR_Integer) 0)));
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__4_4, (MR_Integer) 1)));
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 0)));
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 1)));
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 2)));
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo0_28;
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__InstMap1_29;
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__ModuleInfo_30;
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_33_33;
#line 1205 "det_report.m"
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_34_34;

#line 1207 "det_report.m"
            {
#line 1207 "det_report.m"
              check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__ModuleInfo0_28);
            }
#line 1208 "det_report.m"
            {
#line 1208 "det_report.m"
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__MainConsId_25, check_hlds__det_report__OtherConsIds_26, check_hlds__det_report__HeadVar__6_6, &check_hlds__det_report__InstMap1_29, check_hlds__det_report__ModuleInfo0_28, &check_hlds__det_report__ModuleInfo_30);
            }
#line 1210 "det_report.m"
            {
#line 1210 "det_report.m"
              check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_30, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__STATE_VARIABLE_DetInfo_33_33);
            }
#line 1212 "det_report.m"
            {
#line 1212 "det_report.m"
              check_hlds__det_report__reqscope_check_goal_detism_6_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__Goal_27, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__InstMap1_29, check_hlds__det_report__STATE_VARIABLE_DetInfo_33_33, &check_hlds__det_report__STATE_VARIABLE_DetInfo_34_34);
            }
#line 1214 "det_report.m"
            /* direct tailcall eliminated */
#line 1214 "det_report.m"
            {
#line 1214 "det_report.m"
              MR_Word check_hlds__det_report__HeadVar__4__tmp_copy_4 = check_hlds__det_report__Cases_21;
#line 1214 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_34_34;

#line 1214 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_7;
#line 1214 "det_report.m"
              check_hlds__det_report__HeadVar__4_4 = check_hlds__det_report__HeadVar__4__tmp_copy_4;
#line 1214 "det_report.m"
            }
#line 1214 "det_report.m"
            continue;
#line 1205 "det_report.m"
          }
#line 1202 "det_report.m"
      }
#line 1202 "det_report.m"
      break;
#line 1202 "det_report.m"
    }
#line 1198 "det_report.m"
}

#line 1145 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__RequiredDetism_7,
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__CheckKind_9,
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1145 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25,
#line 1145 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_26)
#line 1145 "det_report.m"
{
#line 1149 "det_report.m"
  {
#line 1149 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1149 "det_report.m"
    MR_Word check_hlds__det_report__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
#line 1149 "det_report.m"
    MR_Word check_hlds__det_report__ActualDetism_14;
#line 1149 "det_report.m"
    MR_Word check_hlds__det_report__CompareResult_15;
#line 1150 "det_report.m"
    MR_Word check_hlds__det_report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));

#line 1151 "det_report.m"
    {
#line 1151 "det_report.m"
      check_hlds__det_report__ActualDetism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_13);
    }
#line 1152 "det_report.m"
    {
#line 1152 "det_report.m"
      parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__ActualDetism_14, check_hlds__det_report__RequiredDetism_7, &check_hlds__det_report__CompareResult_15);
    }
#line 1160 "det_report.m"
    if ((check_hlds__det_report__CheckKind_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "det_report.m"
#line 1166 "det_report.m"
      switch (check_hlds__det_report__CompareResult_15) {
#line 1166 "det_report.m"
        default:
#line 1166 "det_report.m"
          check_hlds__det_report__succeeded = MR_FALSE;
#line 1166 "det_report.m"
          break;
#line 1166 "det_report.m"
        case (MR_Integer) 1:
#line 1166 "det_report.m"
          check_hlds__det_report__succeeded = MR_TRUE;
#line 1166 "det_report.m"
          break;
#line 1166 "det_report.m"
        case (MR_Integer) 0:
#line 1165 "det_report.m"
          check_hlds__det_report__succeeded = MR_TRUE;
#line 1166 "det_report.m"
          break;
#line 1166 "det_report.m"
      }
#line 1160 "det_report.m"
    else
#line 1159 "det_report.m"
      check_hlds__det_report__succeeded = (check_hlds__det_report__CompareResult_15 == (MR_Integer) 1);
#line 1171 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 1171 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_26 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25;
#line 1171 "det_report.m"
    else
#line 1184 "det_report.m"
      {
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__Context_18;
#line 1184 "det_report.m"
        MR_String check_hlds__det_report__RequiredDetismStr_19;
#line 1184 "det_report.m"
        MR_String check_hlds__det_report__ActualDetismStr_20;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__SubMsgs_21;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__Pieces_22;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__Msg_23;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__Spec_24;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_32_32;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_33_33;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_36_36;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_39_39;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_40_40;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_47_47;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_48_48;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__V_52_52;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_62;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_63;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__Actual_64;
#line 1184 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_65;

#line 1177 "det_report.m"
        if ((check_hlds__det_report__CheckKind_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "det_report.m"
          {
#line 1183 "det_report.m"
            check_hlds__det_report__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_13);
          }
#line 1177 "det_report.m"
        else
#line 1173 "det_report.m"
          {
#line 1173 "det_report.m"
            MR_Word check_hlds__det_report__ScopeGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CheckKind_9, (MR_Integer) 0)));

#line 1176 "det_report.m"
            {
#line 1176 "det_report.m"
              check_hlds__det_report__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_17);
            }
#line 1173 "det_report.m"
          }
#line 1185 "det_report.m"
        {
#line 1185 "det_report.m"
          check_hlds__det_report__RequiredDetismStr_19 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__RequiredDetism_7);
        }
#line 1186 "det_report.m"
        {
#line 1186 "det_report.m"
          check_hlds__det_report__ActualDetismStr_20 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__ActualDetism_14);
        }
#line 516 "det_report.m"
        check_hlds__det_report__GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));
#line 516 "det_report.m"
        check_hlds__det_report__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
#line 517 "det_report.m"
        {
#line 517 "det_report.m"
          check_hlds__det_report__Actual_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_63);
        }
#line 518 "det_report.m"
        {
#line 518 "det_report.m"
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__RequiredDetism_7, check_hlds__det_report__Actual_64, &check_hlds__det_report__CompareResult_65);
        }
#line 525 "det_report.m"
#line 525 "det_report.m"
        switch (check_hlds__det_report__CompareResult_65) {
#line 525 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 525 "det_report.m"
          case (MR_Integer) 3:
#line 525 "det_report.m"
          case (MR_Integer) 0:
#line 523 "det_report.m"
            {
#line 523 "det_report.m"
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_62, check_hlds__det_report__GoalInfo_63, check_hlds__det_report__InstMap0_10, check_hlds__det_report__RequiredDetism_7, check_hlds__det_report__Actual_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25, &check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28, &check_hlds__det_report__SubMsgs_21);
            }
#line 525 "det_report.m"
            break;
#line 525 "det_report.m"
          case (MR_Integer) 2:
#line 525 "det_report.m"
          case (MR_Integer) 1:
#line 528 "det_report.m"
            {
#line 529 "det_report.m"
              check_hlds__det_report__SubMsgs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_25;
#line 528 "det_report.m"
            }
#line 525 "det_report.m"
            break;
#line 525 "det_report.m"
        }
#line 1190 "det_report.m"
        {
#line 1190 "det_report.m"
          check_hlds__det_report__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1190 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_32_32, 1) = ((MR_Box) (check_hlds__det_report__RequiredDetismStr_19));
#line 1190 "det_report.m"
        }
#line 1192 "det_report.m"
        {
#line 1192 "det_report.m"
          check_hlds__det_report__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1192 "det_report.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_40_40, 1) = ((MR_Box) (check_hlds__det_report__ActualDetismStr_20));
#line 1192 "det_report.m"
        }
#line 1192 "det_report.m"
        {
#line 1192 "det_report.m"
          check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__V_40_40));
#line 1192 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])));
#line 1192 "det_report.m"
        }
#line 1191 "det_report.m"
        {
#line 1191 "det_report.m"
          check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[102])));
#line 1191 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 1191 "det_report.m"
        }
#line 1190 "det_report.m"
        {
#line 1190 "det_report.m"
          check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68])));
#line 1190 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
#line 1190 "det_report.m"
        }
#line 1190 "det_report.m"
        {
#line 1190 "det_report.m"
          check_hlds__det_report__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 0) = ((MR_Box) (check_hlds__det_report__V_32_32));
#line 1190 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 1) = ((MR_Box) (check_hlds__det_report__V_33_33));
#line 1190 "det_report.m"
        }
#line 1189 "det_report.m"
        {
#line 1189 "det_report.m"
          check_hlds__det_report__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[101])));
#line 1189 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_22, 1) = ((MR_Box) (check_hlds__det_report__V_31_31));
#line 1189 "det_report.m"
        }
#line 1193 "det_report.m"
        {
#line 1193 "det_report.m"
          check_hlds__det_report__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__Pieces_22));
#line 1193 "det_report.m"
        }
#line 1193 "det_report.m"
        {
#line 1193 "det_report.m"
          check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "det_report.m"
        }
#line 1193 "det_report.m"
        {
#line 1193 "det_report.m"
          check_hlds__det_report__Msg_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_23, 0) = ((MR_Box) (check_hlds__det_report__Context_18));
#line 1193 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_23, 1) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 1193 "det_report.m"
        }
#line 1194 "det_report.m"
        {
#line 1194 "det_report.m"
          check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (check_hlds__det_report__Msg_23));
#line 1194 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__SubMsgs_21));
#line 1194 "det_report.m"
        }
#line 1194 "det_report.m"
        {
#line 1194 "det_report.m"
          check_hlds__det_report__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1194 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 1194 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_24, 2) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 1194 "det_report.m"
        }
#line 1195 "det_report.m"
        {
#line 1195 "det_report.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__Spec_24, check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28, check_hlds__det_report__STATE_VARIABLE_DetInfo_26);
#line 1195 "det_report.m"
          return;
        }
#line 1184 "det_report.m"
      }
#line 1149 "det_report.m"
  }
#line 1145 "det_report.m"
}

#line 1038 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_6_p_0(
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__Reason_7,
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__SubGoal_8,
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__ScopeGoalInfo_9,
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_10,
#line 1038 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49,
#line 1038 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_50)
#line 1038 "det_report.m"
{
#line 1043 "det_report.m"
  {
#line 1043 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 1043 "det_report.m"
#line 1043 "det_report.m"
    switch (MR_tag((MR_Word) check_hlds__det_report__Reason_7)) {
#line 1043 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1043 "det_report.m"
      case (MR_Integer) 0:
#line 1128 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1043 "det_report.m"
        break;
#line 1043 "det_report.m"
      case (MR_Integer) 1:
#line 1132 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1043 "det_report.m"
        break;
#line 1043 "det_report.m"
      case (MR_Integer) 2:
#line 1131 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1043 "det_report.m"
        break;
#line 1043 "det_report.m"
      case (MR_Integer) 3:
#line 1043 "det_report.m"
#line 1043 "det_report.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) {
#line 1043 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1043 "det_report.m"
          case (MR_Integer) 0:
#line 1043 "det_report.m"
            {
#line 1043 "det_report.m"
              MR_Word check_hlds__det_report__RequiredDetism_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
#line 1043 "det_report.m"
              MR_Word check_hlds__det_report__V_93_93;

#line 1045 "det_report.m"
              {
#line 1045 "det_report.m"
                check_hlds__det_report__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_93_93, 0) = ((MR_Box) (check_hlds__det_report__ScopeGoalInfo_9));
#line 1045 "det_report.m"
              }
#line 1044 "det_report.m"
              {
#line 1044 "det_report.m"
                check_hlds__det_report__reqscope_check_goal_detism_6_p_0(check_hlds__det_report__RequiredDetism_12, check_hlds__det_report__SubGoal_8, check_hlds__det_report__V_93_93, check_hlds__det_report__InstMap0_10, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1044 "det_report.m"
                return;
              }
#line 1043 "det_report.m"
            }
#line 1043 "det_report.m"
            break;
#line 1043 "det_report.m"
          case (MR_Integer) 1:
#line 1047 "det_report.m"
            {
#line 1047 "det_report.m"
              MR_Word check_hlds__det_report__RequiredVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
#line 1047 "det_report.m"
              MR_Word check_hlds__det_report__SubGoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));
#line 1052 "det_report.m"
              MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1083 "det_report.m"
              MR_Word check_hlds__det_report__SwitchVar_16;
#line 1083 "det_report.m"
              MR_Word check_hlds__det_report__CanFail_17;
#line 1083 "det_report.m"
              MR_Word check_hlds__det_report__Cases_18;
#line 1054 "det_report.m"
              MR_Word check_hlds__det_report__TypeInfo_103_103;

#line 1054 "det_report.m"
              check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__SubGoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1054 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 1054 "det_report.m"
                {
#line 1054 "det_report.m"
                  check_hlds__det_report__SwitchVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 1)));
#line 1054 "det_report.m"
                  check_hlds__det_report__CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 2)));
#line 1054 "det_report.m"
                  check_hlds__det_report__Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 3)));
#line 8902 "check_hlds.det_report.c"
                  check_hlds__det_report__TypeInfo_103_103 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 1055 "det_report.m"
                  {
#line 1055 "det_report.m"
                    check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_103_103, ((MR_Box) (check_hlds__det_report__SwitchVar_16)), ((MR_Box) (check_hlds__det_report__RequiredVar_13)));
                  }
#line 1054 "det_report.m"
                }
#line 1083 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 1059 "det_report.m"
#line 1059 "det_report.m"
                switch (check_hlds__det_report__CanFail_17) {
#line 1059 "det_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1059 "det_report.m"
                  case (MR_Integer) 0:
#line 1060 "det_report.m"
                    {
#line 1060 "det_report.m"
                      MR_String check_hlds__det_report__VarStr_19;
#line 1060 "det_report.m"
                      MR_Word check_hlds__det_report__MaybeMissingPieces_20;
#line 1060 "det_report.m"
                      MR_Word check_hlds__det_report__SwitchPieces_22;
#line 1060 "det_report.m"
                      MR_Word check_hlds__det_report__Context_23;
#line 1060 "det_report.m"
                      MR_Word check_hlds__det_report__SwitchMsg_24;
#line 1060 "det_report.m"
                      MR_Word check_hlds__det_report__SwitchSpec_25;
#line 1060 "det_report.m"
                      MR_Word check_hlds__det_report__V_84_84;
#line 1060 "det_report.m"
                      MR_Word check_hlds__det_report__V_85_85;
#line 1060 "det_report.m"
                      MR_Word check_hlds__det_report__V_89_89;

#line 1061 "det_report.m"
                      {
#line 1061 "det_report.m"
                        check_hlds__det_report__find_missing_cons_ids_6_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__InstMap0_10, check_hlds__det_report__SwitchVar_16, check_hlds__det_report__Cases_18, &check_hlds__det_report__VarStr_19, &check_hlds__det_report__MaybeMissingPieces_20);
                      }
#line 1069 "det_report.m"
                      if ((check_hlds__det_report__MaybeMissingPieces_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1070 "det_report.m"
                        {
#line 1070 "det_report.m"
                          MR_Word check_hlds__det_report__V_59_59;
#line 1070 "det_report.m"
                          MR_Word check_hlds__det_report__V_60_60;

#line 1072 "det_report.m"
                          {
#line 1072 "det_report.m"
                            check_hlds__det_report__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "det_report.m"
                            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1072 "det_report.m"
                            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_60_60, 1) = ((MR_Box) (check_hlds__det_report__VarStr_19));
#line 1072 "det_report.m"
                          }
#line 1072 "det_report.m"
                          {
#line 1072 "det_report.m"
                            check_hlds__det_report__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_59_59, 0) = ((MR_Box) (check_hlds__det_report__V_60_60));
#line 1072 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[57])));
#line 1072 "det_report.m"
                          }
#line 1071 "det_report.m"
                          {
#line 1071 "det_report.m"
                            check_hlds__det_report__SwitchPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[98])));
#line 1071 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_22, 1) = ((MR_Box) (check_hlds__det_report__V_59_59));
#line 1071 "det_report.m"
                          }
#line 1070 "det_report.m"
                        }
#line 1069 "det_report.m"
                      else
#line 1064 "det_report.m"
                        {
#line 1064 "det_report.m"
                          MR_Word check_hlds__det_report__MissingPieces_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeMissingPieces_20, (MR_Integer) 0)));
#line 1064 "det_report.m"
                          MR_Word check_hlds__det_report__V_70_70;
#line 1064 "det_report.m"
                          MR_Word check_hlds__det_report__V_73_73;
#line 1064 "det_report.m"
                          MR_Word check_hlds__det_report__V_74_74;
#line 1064 "det_report.m"
                          MR_Word check_hlds__det_report__V_75_75;
#line 1064 "det_report.m"
                          MR_Word check_hlds__det_report__V_78_78;

#line 1066 "det_report.m"
                          {
#line 1066 "det_report.m"
                            check_hlds__det_report__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "det_report.m"
                            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1066 "det_report.m"
                            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_74_74, 1) = ((MR_Box) (check_hlds__det_report__VarStr_19));
#line 1066 "det_report.m"
                          }
#line 1068 "det_report.m"
                          {
#line 1068 "det_report.m"
                            check_hlds__det_report__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[100])));
#line 1068 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces_21));
#line 1068 "det_report.m"
                          }
#line 1067 "det_report.m"
                          {
#line 1067 "det_report.m"
                            check_hlds__det_report__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[99])));
#line 1067 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_75_75, 1) = ((MR_Box) (check_hlds__det_report__V_78_78));
#line 1067 "det_report.m"
                          }
#line 1066 "det_report.m"
                          {
#line 1066 "det_report.m"
                            check_hlds__det_report__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 0) = ((MR_Box) (check_hlds__det_report__V_74_74));
#line 1066 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 1) = ((MR_Box) (check_hlds__det_report__V_75_75));
#line 1066 "det_report.m"
                          }
#line 1065 "det_report.m"
                          {
#line 1065 "det_report.m"
                            check_hlds__det_report__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[98])));
#line 1065 "det_report.m"
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_70_70, 1) = ((MR_Box) (check_hlds__det_report__V_73_73));
#line 1065 "det_report.m"
                          }
#line 1068 "det_report.m"
                          {
#line 1068 "det_report.m"
                            check_hlds__det_report__SwitchPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_70_70, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5]));
                          }
#line 1064 "det_report.m"
                        }
#line 1076 "det_report.m"
                      {
#line 1076 "det_report.m"
                        check_hlds__det_report__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_9);
                      }
#line 1078 "det_report.m"
                      {
#line 1078 "det_report.m"
                        check_hlds__det_report__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__V_85_85, 0) = ((MR_Box) (check_hlds__det_report__SwitchPieces_22));
#line 1078 "det_report.m"
                      }
#line 1078 "det_report.m"
                      {
#line 1078 "det_report.m"
                        check_hlds__det_report__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_84_84, 0) = ((MR_Box) (check_hlds__det_report__V_85_85));
#line 1078 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1078 "det_report.m"
                      }
#line 1077 "det_report.m"
                      {
#line 1077 "det_report.m"
                        check_hlds__det_report__SwitchMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchMsg_24, 0) = ((MR_Box) (check_hlds__det_report__Context_23));
#line 1077 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchMsg_24, 1) = ((MR_Box) (check_hlds__det_report__V_84_84));
#line 1077 "det_report.m"
                      }
#line 1080 "det_report.m"
                      {
#line 1080 "det_report.m"
                        check_hlds__det_report__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_89_89, 0) = ((MR_Box) (check_hlds__det_report__SwitchMsg_24));
#line 1080 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1080 "det_report.m"
                      }
#line 1079 "det_report.m"
                      {
#line 1079 "det_report.m"
                        check_hlds__det_report__SwitchSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1079 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 1079 "det_report.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 2) = ((MR_Box) (check_hlds__det_report__V_89_89));
#line 1079 "det_report.m"
                      }
#line 1081 "det_report.m"
                      {
#line 1081 "det_report.m"
                        check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__SwitchSpec_25, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1081 "det_report.m"
                        return;
                      }
#line 1060 "det_report.m"
                    }
#line 1059 "det_report.m"
                    break;
#line 1059 "det_report.m"
                  case (MR_Integer) 1:
#line 1058 "det_report.m"
                    *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1059 "det_report.m"
                    break;
#line 1059 "det_report.m"
                }
#line 1083 "det_report.m"
              else
#line 1084 "det_report.m"
                {
#line 1084 "det_report.m"
                  check_hlds__det_report__generate_warning_for_switch_var_if_missing_5_p_0(check_hlds__det_report__RequiredVar_13, check_hlds__det_report__SubGoal_8, check_hlds__det_report__ScopeGoalInfo_9, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1084 "det_report.m"
                  return;
                }
#line 1047 "det_report.m"
            }
#line 1043 "det_report.m"
            break;
#line 1043 "det_report.m"
          case (MR_Integer) 2:
#line 1088 "det_report.m"
            {
#line 1088 "det_report.m"
              MR_Word check_hlds__det_report__RequiredDetism_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 2)));
#line 1088 "det_report.m"
              MR_Word check_hlds__det_report__RequiredVar_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
#line 1088 "det_report.m"
              MR_Word check_hlds__det_report__SubGoalExpr_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));
#line 1089 "det_report.m"
              MR_Word check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1099 "det_report.m"
              MR_Word check_hlds__det_report__SwitchVar_95;
#line 1099 "det_report.m"
              MR_Word check_hlds__det_report__Cases_96;
#line 1091 "det_report.m"
              MR_Word check_hlds__det_report__TypeInfo_104_104;
#line 1091 "det_report.m"
              MR_Word check_hlds__det_report___CanFail_27;

#line 1091 "det_report.m"
              check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__SubGoalExpr_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_99, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1091 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 1091 "det_report.m"
                {
#line 1091 "det_report.m"
                  check_hlds__det_report__SwitchVar_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_99, (MR_Integer) 1)));
#line 1091 "det_report.m"
                  check_hlds__det_report___CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_99, (MR_Integer) 2)));
#line 1091 "det_report.m"
                  check_hlds__det_report__Cases_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_99, (MR_Integer) 3)));
#line 9181 "check_hlds.det_report.c"
                  check_hlds__det_report__TypeInfo_104_104 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 1092 "det_report.m"
                  {
#line 1092 "det_report.m"
                    check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_104_104, ((MR_Box) (check_hlds__det_report__SwitchVar_95)), ((MR_Box) (check_hlds__det_report__RequiredVar_98)));
                  }
#line 1091 "det_report.m"
                }
#line 1099 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 1094 "det_report.m"
                {
#line 1094 "det_report.m"
                  MR_Word check_hlds__det_report__VarTypes_28;
#line 1094 "det_report.m"
                  MR_Word check_hlds__det_report__SwitchVarType_29;

#line 1094 "det_report.m"
                  {
#line 1094 "det_report.m"
                    check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, &check_hlds__det_report__VarTypes_28);
                  }
#line 1095 "det_report.m"
                  {
#line 1095 "det_report.m"
                    hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_28, check_hlds__det_report__SwitchVar_95, &check_hlds__det_report__SwitchVarType_29);
                  }
#line 1096 "det_report.m"
                  {
#line 1096 "det_report.m"
                    check_hlds__det_report__reqscope_check_goal_detism_for_cases_8_p_0(check_hlds__det_report__RequiredDetism_97, check_hlds__det_report__SwitchVar_95, check_hlds__det_report__SwitchVarType_29, check_hlds__det_report__Cases_96, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__InstMap0_10, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1096 "det_report.m"
                    return;
                  }
#line 1094 "det_report.m"
                }
#line 1099 "det_report.m"
              else
#line 1100 "det_report.m"
                {
#line 1100 "det_report.m"
                  check_hlds__det_report__generate_warning_for_switch_var_if_missing_5_p_0(check_hlds__det_report__RequiredVar_98, check_hlds__det_report__SubGoal_8, check_hlds__det_report__ScopeGoalInfo_9, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49, check_hlds__det_report__STATE_VARIABLE_DetInfo_50);
#line 1100 "det_report.m"
                  return;
                }
#line 1088 "det_report.m"
            }
#line 1043 "det_report.m"
            break;
#line 1043 "det_report.m"
          case (MR_Integer) 3:
#line 1129 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1043 "det_report.m"
            break;
#line 1043 "det_report.m"
          case (MR_Integer) 4:
#line 1130 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1043 "det_report.m"
            break;
#line 1043 "det_report.m"
          case (MR_Integer) 5:
#line 1133 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1043 "det_report.m"
            break;
#line 1043 "det_report.m"
          case (MR_Integer) 6:
#line 1134 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1043 "det_report.m"
            break;
#line 1043 "det_report.m"
          case (MR_Integer) 7:
#line 1104 "det_report.m"
            {
#line 1104 "det_report.m"
              MR_Word check_hlds__det_report__SubGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
#line 1104 "det_report.m"
              MR_Word check_hlds__det_report__Detism_35;
#line 1105 "det_report.m"
              MR_Word check_hlds__det_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));

#line 1106 "det_report.m"
              {
#line 1106 "det_report.m"
                check_hlds__det_report__Detism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_34);
              }
#line 1111 "det_report.m"
#line 1111 "det_report.m"
              switch (check_hlds__det_report__Detism_35) {
#line 1111 "det_report.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1111 "det_report.m"
                case (MR_Integer) 4:
#line 1109 "det_report.m"
                  {
#line 1109 "det_report.m"
                  }
#line 1111 "det_report.m"
                  break;
#line 1111 "det_report.m"
                case (MR_Integer) 5:
#line 1111 "det_report.m"
                case (MR_Integer) 6:
#line 1111 "det_report.m"
                case (MR_Integer) 7:
#line 1111 "det_report.m"
                case (MR_Integer) 2:
#line 1111 "det_report.m"
                case (MR_Integer) 3:
#line 1111 "det_report.m"
                case (MR_Integer) 1:
#line 1120 "det_report.m"
                  {
#line 1124 "det_report.m"
                    {
#line 1124 "det_report.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.reqscope_check_scope\'/6", (MR_String) "Loop control scope with strange determinism");
#line 1124 "det_report.m"
                      return;
                    }
#line 1120 "det_report.m"
                  }
#line 1111 "det_report.m"
                  break;
#line 1111 "det_report.m"
                case (MR_Integer) 0:
#line 1108 "det_report.m"
                  {
#line 1108 "det_report.m"
                  }
#line 1111 "det_report.m"
                  break;
#line 1111 "det_report.m"
              }
#line 1104 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_50 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_49;
#line 1104 "det_report.m"
            }
#line 1043 "det_report.m"
            break;
#line 1043 "det_report.m"
        }
#line 1043 "det_report.m"
        break;
#line 1043 "det_report.m"
    }
#line 1043 "det_report.m"
  }
#line 1038 "det_report.m"
}

#line 973 "det_report.m"
static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_4_p_0(
#line 973 "det_report.m"
  MR_Word check_hlds__det_report__Goal_5,
#line 973 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_6,
#line 973 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75,
#line 973 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_76)
#line 973 "det_report.m"
{
#line 976 "det_report.m"
  while (MR_TRUE)
#line 976 "det_report.m"
    {
#line 976 "det_report.m"
      /* tailcall optimized into a loop */
#line 976 "det_report.m"
      {
#line 976 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;
#line 976 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_5, (MR_Integer) 0)));
#line 976 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_5, (MR_Integer) 1)));

#line 981 "det_report.m"
#line 981 "det_report.m"
        switch (MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) {
#line 981 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 981 "det_report.m"
          case (MR_Integer) 0:
#line 996 "det_report.m"
            {
#line 996 "det_report.m"
              MR_Word check_hlds__det_report__SubGoal_22 = (MR_Word) MR_body(((MR_Word) check_hlds__det_report__GoalExpr_8), (MR_Integer) 0);

#line 997 "det_report.m"
              /* direct tailcall eliminated */
#line 997 "det_report.m"
              {
#line 997 "det_report.m"
                MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_22;

#line 997 "det_report.m"
                check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 997 "det_report.m"
              }
#line 997 "det_report.m"
              continue;
#line 996 "det_report.m"
            }
#line 981 "det_report.m"
            break;
#line 981 "det_report.m"
          case (MR_Integer) 1:
#line 1017 "det_report.m"
            {
#line 1017 "det_report.m"
              MR_Word check_hlds__det_report__RHS_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 1017 "det_report.m"
              MR_Word check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)));
#line 1017 "det_report.m"
              MR_Word check_hlds__det_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 1017 "det_report.m"
              MR_Word check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 1017 "det_report.m"
              MR_Word check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 4)));

#line 1022 "det_report.m"
#line 1022 "det_report.m"
              switch (MR_tag((MR_Word) check_hlds__det_report__RHS_37)) {
#line 1022 "det_report.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1022 "det_report.m"
                case (MR_Integer) 0:
#line 1019 "det_report.m"
                  *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1022 "det_report.m"
                  break;
#line 1022 "det_report.m"
                case (MR_Integer) 1:
#line 1020 "det_report.m"
                  *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 1022 "det_report.m"
                  break;
#line 1022 "det_report.m"
                case (MR_Integer) 2:
#line 1024 "det_report.m"
                  {
#line 1024 "det_report.m"
                    MR_Word check_hlds__det_report__Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 3)));
#line 1024 "det_report.m"
                    MR_Word check_hlds__det_report__Modes_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 4)));
#line 1024 "det_report.m"
                    MR_Word check_hlds__det_report__LambdaGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 6)));
#line 1024 "det_report.m"
                    MR_Word check_hlds__det_report__VarsModes_54;
#line 1024 "det_report.m"
                    MR_Word check_hlds__det_report__ModuleInfo_55;
#line 1024 "det_report.m"
                    MR_Word check_hlds__det_report__LambdaInstMap0_56;
#line 1023 "det_report.m"
                    MR_Word check_hlds__det_report___Purity_45 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1023 "det_report.m"
                    MR_Word check_hlds__det_report___Groundness_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1023 "det_report.m"
                    MR_Word check_hlds__det_report___PorF_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1023 "det_report.m"
                    MR_Word check_hlds__det_report___LambdaNonLocals_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 2)));
#line 1023 "det_report.m"
                    MR_Word check_hlds__det_report___Detism_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 5)));

#line 1025 "det_report.m"
                    {
#line 1025 "det_report.m"
                      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__det_report__Vars_50, check_hlds__det_report__Modes_51, &check_hlds__det_report__VarsModes_54);
                    }
#line 1026 "det_report.m"
                    {
#line 1026 "det_report.m"
                      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__ModuleInfo_55);
                    }
#line 1027 "det_report.m"
                    {
#line 1027 "det_report.m"
                      check_hlds__det_report__lambda_update_instmap_4_p_0(check_hlds__det_report__VarsModes_54, check_hlds__det_report__ModuleInfo_55, check_hlds__det_report__InstMap0_6, &check_hlds__det_report__LambdaInstMap0_56);
                    }
#line 1029 "det_report.m"
                    /* direct tailcall eliminated */
#line 1029 "det_report.m"
                    {
#line 1029 "det_report.m"
                      MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__LambdaGoal_53;
#line 1029 "det_report.m"
                      MR_Word check_hlds__det_report__InstMap0__tmp_copy_6 = check_hlds__det_report__LambdaInstMap0_56;

#line 1029 "det_report.m"
                      check_hlds__det_report__InstMap0_6 = check_hlds__det_report__InstMap0__tmp_copy_6;
#line 1029 "det_report.m"
                      check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1029 "det_report.m"
                    }
#line 1029 "det_report.m"
                    continue;
#line 1024 "det_report.m"
                  }
#line 1022 "det_report.m"
                  break;
#line 1022 "det_report.m"
              }
#line 1017 "det_report.m"
            }
#line 981 "det_report.m"
            break;
#line 981 "det_report.m"
          case (MR_Integer) 2:
#line 1032 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 981 "det_report.m"
            break;
#line 981 "det_report.m"
          case (MR_Integer) 3:
#line 981 "det_report.m"
#line 981 "det_report.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) {
#line 981 "det_report.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 981 "det_report.m"
              case (MR_Integer) 0:
#line 1033 "det_report.m"
                *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 981 "det_report.m"
                break;
#line 981 "det_report.m"
              case (MR_Integer) 1:
#line 1034 "det_report.m"
                *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
#line 981 "det_report.m"
                break;
#line 981 "det_report.m"
              case (MR_Integer) 2:
#line 979 "det_report.m"
                {
#line 979 "det_report.m"
                  MR_Word check_hlds__det_report__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 979 "det_report.m"
                  MR_Word check_hlds__det_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 980 "det_report.m"
                  {
#line 980 "det_report.m"
                    check_hlds__det_report__reqscope_check_conj_4_p_0(check_hlds__det_report__Goals_11, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 980 "det_report.m"
                    return;
                  }
#line 979 "det_report.m"
                }
#line 981 "det_report.m"
                break;
#line 981 "det_report.m"
              case (MR_Integer) 3:
#line 982 "det_report.m"
                {
#line 982 "det_report.m"
                  MR_Word check_hlds__det_report__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 983 "det_report.m"
                  {
#line 983 "det_report.m"
                    check_hlds__det_report__reqscope_check_disj_4_p_0(check_hlds__det_report__Goals_93, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 983 "det_report.m"
                    return;
                  }
#line 982 "det_report.m"
                }
#line 981 "det_report.m"
                break;
#line 981 "det_report.m"
              case (MR_Integer) 4:
#line 985 "det_report.m"
                {
#line 985 "det_report.m"
                  MR_Word check_hlds__det_report__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 985 "det_report.m"
                  MR_Word check_hlds__det_report__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 985 "det_report.m"
                  MR_Word check_hlds__det_report__VarTypes_15;
#line 985 "det_report.m"
                  MR_Word check_hlds__det_report__VarType_16;
#line 985 "det_report.m"
                  MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));

#line 986 "det_report.m"
                  {
#line 986 "det_report.m"
                    check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__VarTypes_15);
                  }
#line 987 "det_report.m"
                  {
#line 987 "det_report.m"
                    hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_15, check_hlds__det_report__Var_12, &check_hlds__det_report__VarType_16);
                  }
#line 988 "det_report.m"
                  {
#line 988 "det_report.m"
                    check_hlds__det_report__reqscope_check_switch_6_p_0(check_hlds__det_report__Var_12, check_hlds__det_report__VarType_16, check_hlds__det_report__Cases_14, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 988 "det_report.m"
                    return;
                  }
#line 985 "det_report.m"
                }
#line 981 "det_report.m"
                break;
#line 981 "det_report.m"
              case (MR_Integer) 5:
#line 999 "det_report.m"
                {
#line 999 "det_report.m"
                  MR_Word check_hlds__det_report__Reason_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
#line 999 "det_report.m"
                  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84;
#line 999 "det_report.m"
                  MR_Word check_hlds__det_report__SubGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));

#line 1000 "det_report.m"
                  {
#line 1000 "det_report.m"
                    check_hlds__det_report__reqscope_check_scope_6_p_0(check_hlds__det_report__Reason_23, check_hlds__det_report__SubGoal_94, check_hlds__det_report__GoalInfo_9, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84);
                  }
#line 1001 "det_report.m"
                  /* direct tailcall eliminated */
#line 1001 "det_report.m"
                  {
#line 1001 "det_report.m"
                    MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_94;
#line 1001 "det_report.m"
                    MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84;

#line 1001 "det_report.m"
                    check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75;
#line 1001 "det_report.m"
                    check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1001 "det_report.m"
                  }
#line 1001 "det_report.m"
                  continue;
#line 999 "det_report.m"
                }
#line 981 "det_report.m"
                break;
#line 981 "det_report.m"
              case (MR_Integer) 6:
#line 990 "det_report.m"
                {
#line 990 "det_report.m"
                  MR_Word check_hlds__det_report__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
#line 990 "det_report.m"
                  MR_Word check_hlds__det_report__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
#line 990 "det_report.m"
                  MR_Word check_hlds__det_report__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 4)));
#line 990 "det_report.m"
                  MR_Word check_hlds__det_report__InstMap1_21;
#line 990 "det_report.m"
                  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87;
#line 990 "det_report.m"
                  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88;
#line 990 "det_report.m"
                  MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 991 "det_report.m"
                  {
#line 991 "det_report.m"
                    check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Cond_18, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87);
                  }
#line 992 "det_report.m"
                  {
#line 992 "det_report.m"
                    hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Cond_18, check_hlds__det_report__InstMap0_6, &check_hlds__det_report__InstMap1_21);
                  }
#line 993 "det_report.m"
                  {
#line 993 "det_report.m"
                    check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Then_19, check_hlds__det_report__InstMap1_21, check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87, &check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88);
                  }
#line 994 "det_report.m"
                  /* direct tailcall eliminated */
#line 994 "det_report.m"
                  {
#line 994 "det_report.m"
                    MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__Else_20;
#line 994 "det_report.m"
                    MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88;

#line 994 "det_report.m"
                    check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75;
#line 994 "det_report.m"
                    check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 994 "det_report.m"
                  }
#line 994 "det_report.m"
                  continue;
#line 990 "det_report.m"
                }
#line 981 "det_report.m"
                break;
#line 981 "det_report.m"
              case (MR_Integer) 7:
#line 1003 "det_report.m"
                {
#line 1003 "det_report.m"
                  MR_Word check_hlds__det_report__ShortHand_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

#line 1008 "det_report.m"
#line 1008 "det_report.m"
                  switch (MR_tag((MR_Word) check_hlds__det_report__ShortHand_24)) {
#line 1008 "det_report.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1008 "det_report.m"
                    case (MR_Integer) 0:
#line 1012 "det_report.m"
                      {
#line 1014 "det_report.m"
                        {
#line 1014 "det_report.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.reqscope_check_goal\'/4", (MR_String) "bi_implication");
#line 1014 "det_report.m"
                          return;
                        }
#line 1012 "det_report.m"
                      }
#line 1008 "det_report.m"
                      break;
#line 1008 "det_report.m"
                    case (MR_Integer) 1:
#line 1005 "det_report.m"
                      {
#line 1005 "det_report.m"
                        MR_Word check_hlds__det_report__MainGoal_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 4)));
#line 1005 "det_report.m"
                        MR_Word check_hlds__det_report__OrElseGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 5)));
#line 1005 "det_report.m"
                        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82;
#line 1005 "det_report.m"
                        MR_Word check_hlds__det_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 0)));
#line 1005 "det_report.m"
                        MR_Word check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 1)));
#line 1005 "det_report.m"
                        MR_Word check_hlds__det_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 2)));
#line 1005 "det_report.m"
                        MR_Word check_hlds__det_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 3)));
#line 1005 "det_report.m"
                        MR_Word check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 6)));

#line 1006 "det_report.m"
                        {
#line 1006 "det_report.m"
                          check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__MainGoal_29, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82);
                        }
#line 1007 "det_report.m"
                        {
#line 1007 "det_report.m"
                          check_hlds__det_report__reqscope_check_disj_4_p_0(check_hlds__det_report__OrElseGoals_30, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
#line 1007 "det_report.m"
                          return;
                        }
#line 1005 "det_report.m"
                      }
#line 1008 "det_report.m"
                      break;
#line 1008 "det_report.m"
                    case (MR_Integer) 2:
#line 1009 "det_report.m"
                      {
#line 1009 "det_report.m"
                        MR_Word check_hlds__det_report__SubGoal_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 2)));
#line 1009 "det_report.m"
                        MR_Word check_hlds__det_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 0)));
#line 1009 "det_report.m"
                        MR_Word check_hlds__det_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 1)));

#line 1010 "det_report.m"
                        /* direct tailcall eliminated */
#line 1010 "det_report.m"
                        {
#line 1010 "det_report.m"
                          MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_95;

#line 1010 "det_report.m"
                          check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
#line 1010 "det_report.m"
                        }
#line 1010 "det_report.m"
                        continue;
#line 1009 "det_report.m"
                      }
#line 1008 "det_report.m"
                      break;
#line 1008 "det_report.m"
                  }
#line 1003 "det_report.m"
                }
#line 981 "det_report.m"
                break;
#line 981 "det_report.m"
            }
#line 981 "det_report.m"
            break;
#line 981 "det_report.m"
        }
#line 976 "det_report.m"
      }
#line 976 "det_report.m"
      break;
#line 976 "det_report.m"
    }
#line 973 "det_report.m"
}

#line 953 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_2,
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 953 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
#line 953 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
#line 953 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__7_7)
#line 953 "det_report.m"
{
#line 957 "det_report.m"
  {
#line 957 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 957 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "det_report.m"
      {
#line 957 "det_report.m"
        *check_hlds__det_report__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 957 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 957 "det_report.m"
      }
#line 957 "det_report.m"
    else
#line 959 "det_report.m"
      {
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_21;
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_22;
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25;
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_14, (MR_Integer) 0)));
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_14, (MR_Integer) 1)));
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__Actual_38;
#line 959 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_39;

#line 517 "det_report.m"
        {
#line 517 "det_report.m"
          check_hlds__det_report__Actual_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_37);
        }
#line 518 "det_report.m"
        {
#line 518 "det_report.m"
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__Actual_38, &check_hlds__det_report__CompareResult_39);
        }
#line 525 "det_report.m"
#line 525 "det_report.m"
        switch (check_hlds__det_report__CompareResult_39) {
#line 525 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 525 "det_report.m"
          case (MR_Integer) 3:
#line 525 "det_report.m"
          case (MR_Integer) 0:
#line 523 "det_report.m"
            {
#line 523 "det_report.m"
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_36, check_hlds__det_report__GoalInfo_37, check_hlds__det_report__InstMap0_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__Actual_38, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25, &check_hlds__det_report__Msgs1_21);
            }
#line 525 "det_report.m"
            break;
#line 525 "det_report.m"
          case (MR_Integer) 2:
#line 525 "det_report.m"
          case (MR_Integer) 1:
#line 528 "det_report.m"
            {
#line 529 "det_report.m"
              check_hlds__det_report__Msgs1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 528 "det_report.m"
            }
#line 525 "det_report.m"
            break;
#line 525 "det_report.m"
        }
#line 964 "det_report.m"
        {
#line 964 "det_report.m"
          check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(check_hlds__det_report__Goals_15, check_hlds__det_report__InstMap0_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25, check_hlds__det_report__STATE_VARIABLE_DetInfo_6, &check_hlds__det_report__Msgs2_22);
        }
#line 966 "det_report.m"
        {
#line 966 "det_report.m"
          *check_hlds__det_report__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_21, check_hlds__det_report__Msgs2_22);
        }
#line 959 "det_report.m"
      }
#line 957 "det_report.m"
  }
#line 953 "det_report.m"
}

#line 948 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
#line 948 "det_report.m"
  MR_Word check_hlds__det_report__ConsId_3,
#line 948 "det_report.m"
  MR_Word * check_hlds__det_report__Match_4)
#line 948 "det_report.m"
{
#line 950 "det_report.m"
  {
#line 950 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 951 "det_report.m"
    {
#line 951 "det_report.m"
      MR_Word base;
#line 951 "det_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 951 "det_report.m"
      *check_hlds__det_report__Match_4 = base;
#line 951 "det_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__ConsId_3));
#line 951 "det_report.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "det_report.m"
    }
#line 950 "det_report.m"
  }
#line 948 "det_report.m"
}

#line 910 "det_report.m"
static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
#line 910 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 910 "det_report.m"
  MR_Word check_hlds__det_report__SwitchVarSynonyms_2,
#line 910 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 910 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 910 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__5_5,
#line 910 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__6_6)
#line 910 "det_report.m"
{
#line 914 "det_report.m"
  {
#line 914 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 914 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "det_report.m"
      {
#line 914 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 914 "det_report.m"
          {
#line 914 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 914 "det_report.m"
              {
#line 914 "det_report.m"
                *check_hlds__det_report__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 914 "det_report.m"
                *check_hlds__det_report__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 914 "det_report.m"
                check_hlds__det_report__succeeded = MR_TRUE;
#line 914 "det_report.m"
              }
#line 914 "det_report.m"
          }
#line 914 "det_report.m"
      }
#line 914 "det_report.m"
    else
#line 916 "det_report.m"
      {
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__TypeInfo_40_40;
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__Disjunct_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__Disjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Disjunct_8, (MR_Integer) 0)));
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Disjunct_8, (MR_Integer) 1)));
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__Unification_20;
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__Var_22;
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__ConsId_23;
#line 916 "det_report.m"
        MR_Word check_hlds__det_report__ArgVars_24;
#line 918 "det_report.m"
        MR_Word check_hlds__det_report__V_17_17;
#line 918 "det_report.m"
        MR_Word check_hlds__det_report__V_18_18;
#line 918 "det_report.m"
        MR_Word check_hlds__det_report__V_19_19;
#line 918 "det_report.m"
        MR_Word check_hlds__det_report__V_21_21;
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__V_25_25;
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__V_26_26;
#line 919 "det_report.m"
        MR_Word check_hlds__det_report__V_27_27;
#line 922 "det_report.m"
        MR_Word check_hlds__det_report__MainConsId_28;

#line 918 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
#line 918 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 918 "det_report.m"
          {
#line 918 "det_report.m"
            check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 0)));
#line 918 "det_report.m"
            check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 1)));
#line 918 "det_report.m"
            check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 2)));
#line 918 "det_report.m"
            check_hlds__det_report__Unification_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 3)));
#line 918 "det_report.m"
            check_hlds__det_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 4)));
#line 919 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_20)) == (MR_mktag((MR_Integer) 1)));
#line 919 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 919 "det_report.m"
              {
#line 919 "det_report.m"
                check_hlds__det_report__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 0)));
#line 919 "det_report.m"
                check_hlds__det_report__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 1)));
#line 919 "det_report.m"
                check_hlds__det_report__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 2)));
#line 919 "det_report.m"
                check_hlds__det_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 3)));
#line 919 "det_report.m"
                check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 4)));
#line 919 "det_report.m"
                check_hlds__det_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 5)));
#line 10070 "check_hlds.det_report.c"
                check_hlds__det_report__TypeInfo_40_40 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 920 "det_report.m"
                {
#line 920 "det_report.m"
                  check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_40_40, ((MR_Box) (check_hlds__det_report__Var_22)), check_hlds__det_report__SwitchVarSynonyms_2);
                }
#line 916 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 916 "det_report.m"
                  {
#line 922 "det_report.m"
                    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 922 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 922 "det_report.m"
                      {
#line 922 "det_report.m"
                        check_hlds__det_report__MainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 923 "det_report.m"
                        {
#line 923 "det_report.m"
                          check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__ConsId_23, check_hlds__det_report__MainConsId_28);
                        }
#line 922 "det_report.m"
                      }
#line 928 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 926 "det_report.m"
                      {
#line 926 "det_report.m"
                        MR_Word check_hlds__det_report__TypeInfo_45_45;
#line 926 "det_report.m"
                        MR_Word check_hlds__det_report__V_37_37;
#line 926 "det_report.m"
                        MR_Word check_hlds__det_report__V_38_38;
#line 926 "det_report.m"
                        MR_Word check_hlds__det_report__V_43_43;

#line 925 "det_report.m"
                        {
#line 925 "det_report.m"
                          check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_9, check_hlds__det_report__SwitchVarSynonyms_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__V_43_43, check_hlds__det_report__HeadVar__6_6);
                        }
#line 926 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 926 "det_report.m"
                          {
#line 10118 "check_hlds.det_report.c"
                            check_hlds__det_report__TypeInfo_45_45 = (MR_Word) &check_hlds__det_report_scalar_common_2[53];
#line 925 "det_report.m"
                            {
#line 925 "det_report.m"
                              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_45_45, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (check_hlds__det_report__V_43_43)));
                            }
#line 926 "det_report.m"
                            if (check_hlds__det_report__succeeded)
#line 926 "det_report.m"
                              {
#line 927 "det_report.m"
                                {
#line 927 "det_report.m"
                                  check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "det_report.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_24));
#line 927 "det_report.m"
                                }
#line 927 "det_report.m"
                                {
#line 927 "det_report.m"
                                  check_hlds__det_report__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 927 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (check_hlds__det_report__ConsId_23));
#line 927 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 927 "det_report.m"
                                }
#line 927 "det_report.m"
                                {
#line 927 "det_report.m"
                                  MR_Word base;
#line 927 "det_report.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "det_report.m"
                                  *check_hlds__det_report__HeadVar__5_5 = base;
#line 927 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_37_37));
#line 927 "det_report.m"
                                }
#line 927 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 926 "det_report.m"
                              }
#line 926 "det_report.m"
                          }
#line 926 "det_report.m"
                      }
#line 928 "det_report.m"
                    else
#line 944 "det_report.m"
                      {
#line 944 "det_report.m"
                        MR_Word check_hlds__det_report__TypeCtorInfo_42_42;
#line 944 "det_report.m"
                        MR_Word check_hlds__det_report__LeftOverConsIds_29;
#line 944 "det_report.m"
                        MR_Word check_hlds__det_report__LeftOverMatches_30;
#line 944 "det_report.m"
                        MR_Word check_hlds__det_report__NonLocals_31;
#line 944 "det_report.m"
                        MR_Word check_hlds__det_report__ArgVarsSet_32;
#line 944 "det_report.m"
                        MR_Word check_hlds__det_report__MaybeArgVars_34;
#line 944 "det_report.m"
                        MR_Word check_hlds__det_report__V_39_39;
#line 936 "det_report.m"
                        MR_Word check_hlds__det_report__NonLocalArgVarsSet_33;

#line 929 "det_report.m"
                        {
#line 929 "det_report.m"
                          check_hlds__det_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__HeadVar__4_4, ((MR_Box) (check_hlds__det_report__ConsId_23)), &check_hlds__det_report__LeftOverConsIds_29);
                        }
#line 944 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 944 "det_report.m"
                          {
#line 931 "det_report.m"
                            {
#line 931 "det_report.m"
                              check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_9, check_hlds__det_report__SwitchVarSynonyms_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__LeftOverConsIds_29, check_hlds__det_report__HeadVar__5_5, &check_hlds__det_report__LeftOverMatches_30);
                            }
#line 944 "det_report.m"
                            if (check_hlds__det_report__succeeded)
#line 944 "det_report.m"
                              {
#line 933 "det_report.m"
                                {
#line 933 "det_report.m"
                                  check_hlds__det_report__NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_report__GoalInfo_16);
                                }
#line 10211 "check_hlds.det_report.c"
                                check_hlds__det_report__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 934 "det_report.m"
                                {
#line 934 "det_report.m"
                                  parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__ArgVars_24, &check_hlds__det_report__ArgVarsSet_32);
                                }
#line 936 "det_report.m"
                                {
#line 936 "det_report.m"
                                  parse_tree__set_of_var__intersect_3_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__NonLocals_31, check_hlds__det_report__ArgVarsSet_32, &check_hlds__det_report__NonLocalArgVarsSet_33);
                                }
#line 937 "det_report.m"
                                {
#line 937 "det_report.m"
                                  check_hlds__det_report__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__NonLocalArgVarsSet_33);
                                }
#line 940 "det_report.m"
                                if (check_hlds__det_report__succeeded)
#line 939 "det_report.m"
                                  {
#line 939 "det_report.m"
                                    check_hlds__det_report__MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "det_report.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeArgVars_34, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_24));
#line 939 "det_report.m"
                                  }
#line 940 "det_report.m"
                                else
#line 941 "det_report.m"
                                  check_hlds__det_report__MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 943 "det_report.m"
                                {
#line 943 "det_report.m"
                                  check_hlds__det_report__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 943 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__ConsId_23));
#line 943 "det_report.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__MaybeArgVars_34));
#line 943 "det_report.m"
                                }
#line 943 "det_report.m"
                                {
#line 943 "det_report.m"
                                  MR_Word base;
#line 943 "det_report.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "det_report.m"
                                  *check_hlds__det_report__HeadVar__6_6 = base;
#line 943 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_39_39));
#line 943 "det_report.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__LeftOverMatches_30));
#line 943 "det_report.m"
                                }
#line 943 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 944 "det_report.m"
                              }
#line 944 "det_report.m"
                          }
#line 944 "det_report.m"
                      }
#line 916 "det_report.m"
                  }
#line 919 "det_report.m"
              }
#line 918 "det_report.m"
          }
#line 916 "det_report.m"
      }
#line 914 "det_report.m"
    return check_hlds__det_report__succeeded;
#line 914 "det_report.m"
  }
#line 910 "det_report.m"
}

#line 856 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
#line 856 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 856 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 856 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_2)
#line 856 "det_report.m"
{
#line 856 "det_report.m"
  {
#line 856 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 856 "det_report.m"
    MR_Word check_hlds__det_report__conv0_Match_4;

#line 856 "det_report.m"
    {
#line 856 "det_report.m"
      check_hlds__det_report__make_switch_match_no_args_2_p_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), &check_hlds__det_report__conv0_Match_4);
    }
#line 856 "det_report.m"
    *check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_Match_4));
#line 856 "det_report.m"
  }
#line 856 "det_report.m"
}

#line 849 "det_report.m"
static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
#line 849 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 849 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2,
#line 849 "det_report.m"
  MR_Word check_hlds__det_report__MainConsId_3,
#line 849 "det_report.m"
  MR_Word check_hlds__det_report__OtherConsIds_4,
#line 849 "det_report.m"
  MR_Word * check_hlds__det_report__MainMatch_5,
#line 849 "det_report.m"
  MR_Word * check_hlds__det_report__OtherMatches_6)
#line 849 "det_report.m"
{
#line 854 "det_report.m"
  while (MR_TRUE)
#line 854 "det_report.m"
    {
#line 854 "det_report.m"
      /* tailcall optimized into a loop */
#line 854 "det_report.m"
      {
#line 854 "det_report.m"
        MR_bool check_hlds__det_report__succeeded;

#line 854 "det_report.m"
        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "det_report.m"
          {
#line 951 "det_report.m"
            {
#line 951 "det_report.m"
              MR_Word base;
#line 951 "det_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 951 "det_report.m"
              *check_hlds__det_report__MainMatch_5 = base;
#line 951 "det_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 951 "det_report.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "det_report.m"
            }
#line 856 "det_report.m"
            {
#line 856 "det_report.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0, (MR_Word) &check_hlds__det_report_scalar_common_1[3], check_hlds__det_report__OtherConsIds_4, check_hlds__det_report__OtherMatches_6);
#line 856 "det_report.m"
              return;
            }
#line 854 "det_report.m"
          }
#line 854 "det_report.m"
        else
#line 858 "det_report.m"
          {
#line 858 "det_report.m"
            MR_Word check_hlds__det_report__Conjunct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 858 "det_report.m"
            MR_Word check_hlds__det_report__Conjuncts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 858 "det_report.m"
            MR_Word check_hlds__det_report__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Conjunct_13, (MR_Integer) 0)));
#line 858 "det_report.m"
            MR_Word check_hlds__det_report__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Conjunct_13, (MR_Integer) 1)));
#line 878 "det_report.m"
            MR_Word check_hlds__det_report__ArgVars_28;
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__TypeInfo_61_61;
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__Unification_25;
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__Var_27;
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__V_64_64;
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__V_22_22;
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__V_23_23;
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__V_24_24;
#line 861 "det_report.m"
            MR_Word check_hlds__det_report__V_26_26;
#line 862 "det_report.m"
            MR_Word check_hlds__det_report__V_29_29;
#line 862 "det_report.m"
            MR_Word check_hlds__det_report__V_30_30;
#line 862 "det_report.m"
            MR_Word check_hlds__det_report__V_31_31;

#line 861 "det_report.m"
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 1)));
#line 861 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 861 "det_report.m"
              {
#line 861 "det_report.m"
                check_hlds__det_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)));
#line 861 "det_report.m"
                check_hlds__det_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 861 "det_report.m"
                check_hlds__det_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 2)));
#line 861 "det_report.m"
                check_hlds__det_report__Unification_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 3)));
#line 861 "det_report.m"
                check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 4)));
#line 862 "det_report.m"
                check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_25)) == (MR_mktag((MR_Integer) 1)));
#line 862 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 862 "det_report.m"
                  {
#line 862 "det_report.m"
                    check_hlds__det_report__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 0)));
#line 862 "det_report.m"
                    check_hlds__det_report__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 1)));
#line 862 "det_report.m"
                    check_hlds__det_report__ArgVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 2)));
#line 862 "det_report.m"
                    check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 3)));
#line 862 "det_report.m"
                    check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 4)));
#line 862 "det_report.m"
                    check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 5)));
#line 862 "det_report.m"
                    {
#line 862 "det_report.m"
                      check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__MainConsId_3, check_hlds__det_report__V_64_64);
                    }
#line 861 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 861 "det_report.m"
                      {
#line 10454 "check_hlds.det_report.c"
                        check_hlds__det_report__TypeInfo_61_61 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 863 "det_report.m"
                        {
#line 863 "det_report.m"
                          check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_61_61, ((MR_Box) (check_hlds__det_report__Var_27)), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2);
                        }
#line 861 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 864 "det_report.m"
                          check_hlds__det_report__succeeded = (check_hlds__det_report__OtherConsIds_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "det_report.m"
                      }
#line 862 "det_report.m"
                  }
#line 861 "det_report.m"
              }
#line 878 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 866 "det_report.m"
              {
#line 866 "det_report.m"
                MR_Word check_hlds__det_report__TypeCtorInfo_62_62;
#line 866 "det_report.m"
                MR_Word check_hlds__det_report__NonLocals_32;
#line 866 "det_report.m"
                MR_Word check_hlds__det_report__ArgVarsSet_33;
#line 866 "det_report.m"
                MR_Word check_hlds__det_report__MaybeArgVars_35;
#line 869 "det_report.m"
                MR_Word check_hlds__det_report__NonLocalArgVarsSet_34;

#line 866 "det_report.m"
                {
#line 866 "det_report.m"
                  check_hlds__det_report__NonLocals_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_report__GoalInfo_21);
                }
#line 10491 "check_hlds.det_report.c"
                check_hlds__det_report__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 867 "det_report.m"
                {
#line 867 "det_report.m"
                  check_hlds__det_report__ArgVarsSet_33 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__ArgVars_28);
                }
#line 869 "det_report.m"
                {
#line 869 "det_report.m"
                  parse_tree__set_of_var__intersect_3_p_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__NonLocals_32, check_hlds__det_report__ArgVarsSet_33, &check_hlds__det_report__NonLocalArgVarsSet_34);
                }
#line 870 "det_report.m"
                {
#line 870 "det_report.m"
                  check_hlds__det_report__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__NonLocalArgVarsSet_34);
                }
#line 873 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 872 "det_report.m"
                  {
#line 872 "det_report.m"
                    check_hlds__det_report__MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeArgVars_35, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_28));
#line 872 "det_report.m"
                  }
#line 873 "det_report.m"
                else
#line 874 "det_report.m"
                  check_hlds__det_report__MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 876 "det_report.m"
                {
#line 876 "det_report.m"
                  MR_Word base;
#line 876 "det_report.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "det_report.m"
                  *check_hlds__det_report__MainMatch_5 = base;
#line 876 "det_report.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 876 "det_report.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_report__MaybeArgVars_35));
#line 876 "det_report.m"
                }
#line 877 "det_report.m"
                *check_hlds__det_report__OtherMatches_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "det_report.m"
              }
#line 878 "det_report.m"
            else
#line 885 "det_report.m"
              {
#line 885 "det_report.m"
                MR_Word check_hlds__det_report__MainMatch0_37;
#line 885 "det_report.m"
                MR_Word check_hlds__det_report__OtherMatches0_38;
#line 879 "det_report.m"
                MR_Word check_hlds__det_report__Disjuncts_36;
#line 879 "det_report.m"
                MR_Word check_hlds__det_report__V_46_46;
#line 879 "det_report.m"
                MR_Word check_hlds__det_report__V_47_47;

#line 879 "det_report.m"
                check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 879 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 879 "det_report.m"
                  {
#line 879 "det_report.m"
                    check_hlds__det_report__Disjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 881 "det_report.m"
                    {
#line 881 "det_report.m"
                      check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 881 "det_report.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
#line 881 "det_report.m"
                    }
#line 880 "det_report.m"
                    {
#line 880 "det_report.m"
                      check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_36, check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2, check_hlds__det_report__V_46_46, check_hlds__det_report__OtherConsIds_4, &check_hlds__det_report__V_47_47, &check_hlds__det_report__OtherMatches0_38);
                    }
#line 879 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 879 "det_report.m"
                      {
#line 881 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 881 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 881 "det_report.m"
                          check_hlds__det_report__MainMatch0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, (MR_Integer) 0)));
#line 879 "det_report.m"
                      }
#line 879 "det_report.m"
                  }
#line 885 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 883 "det_report.m"
                  {
#line 883 "det_report.m"
                    *check_hlds__det_report__MainMatch_5 = check_hlds__det_report__MainMatch0_37;
#line 884 "det_report.m"
                    *check_hlds__det_report__OtherMatches_6 = check_hlds__det_report__OtherMatches0_38;
#line 883 "det_report.m"
                  }
#line 885 "det_report.m"
                else
#line 894 "det_report.m"
                  {
#line 894 "det_report.m"
                    MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54;
#line 892 "det_report.m"
                    MR_Word check_hlds__det_report__ToVar_43;
#line 887 "det_report.m"
                    MR_Word check_hlds__det_report__TypeInfo_63_63;
#line 887 "det_report.m"
                    MR_Word check_hlds__det_report__FromVar_44;
#line 887 "det_report.m"
                    MR_Word check_hlds__det_report__Unification_51;
#line 887 "det_report.m"
                    MR_Word check_hlds__det_report__V_39_39;
#line 887 "det_report.m"
                    MR_Word check_hlds__det_report__V_40_40;
#line 887 "det_report.m"
                    MR_Word check_hlds__det_report__V_41_41;
#line 887 "det_report.m"
                    MR_Word check_hlds__det_report__V_42_42;

#line 887 "det_report.m"
                    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 1)));
#line 887 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 887 "det_report.m"
                      {
#line 887 "det_report.m"
                        check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)));
#line 887 "det_report.m"
                        check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
#line 887 "det_report.m"
                        check_hlds__det_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 2)));
#line 887 "det_report.m"
                        check_hlds__det_report__Unification_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 3)));
#line 887 "det_report.m"
                        check_hlds__det_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 4)));
#line 888 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_51)) == (MR_mktag((MR_Integer) 2)));
#line 888 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 888 "det_report.m"
                          {
#line 888 "det_report.m"
                            check_hlds__det_report__ToVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__Unification_51, (MR_Integer) 0)));
#line 888 "det_report.m"
                            check_hlds__det_report__FromVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__Unification_51, (MR_Integer) 1)));
#line 10649 "check_hlds.det_report.c"
                            check_hlds__det_report__TypeInfo_63_63 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
#line 889 "det_report.m"
                            {
#line 889 "det_report.m"
                              check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_63_63, ((MR_Box) (check_hlds__det_report__FromVar_44)), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2);
                            }
#line 888 "det_report.m"
                          }
#line 887 "det_report.m"
                      }
#line 892 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 891 "det_report.m"
                      {
#line 891 "det_report.m"
                        check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54, 0) = ((MR_Box) (check_hlds__det_report__ToVar_43));
#line 891 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2));
#line 891 "det_report.m"
                      }
#line 892 "det_report.m"
                    else
#line 892 "det_report.m"
                      check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2;
#line 895 "det_report.m"
                    /* direct tailcall eliminated */
#line 895 "det_report.m"
                    {
#line 895 "det_report.m"
                      MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Conjuncts_14;
#line 895 "det_report.m"
                      MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54;

#line 895 "det_report.m"
                      check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0__tmp_copy_2;
#line 895 "det_report.m"
                      check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
#line 895 "det_report.m"
                    }
#line 895 "det_report.m"
                    continue;
#line 894 "det_report.m"
                  }
#line 885 "det_report.m"
              }
#line 858 "det_report.m"
          }
#line 854 "det_report.m"
      }
#line 854 "det_report.m"
      break;
#line 854 "det_report.m"
    }
#line 849 "det_report.m"
}

#line 815 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_4,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__6_6,
#line 815 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
#line 815 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8,
#line 815 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__9_9)
#line 815 "det_report.m"
{
#line 819 "det_report.m"
  {
#line 819 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 819 "det_report.m"
    if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 819 "det_report.m"
      {
#line 820 "det_report.m"
        *check_hlds__det_report__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_8 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7;
#line 819 "det_report.m"
      }
#line 819 "det_report.m"
    else
#line 822 "det_report.m"
      {
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__MainConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 0)));
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__OtherConsIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 1)));
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 2)));
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__GoalSeq_30;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__MainMatch_31;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__OtherMatches_32;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__NewSwitchContext_33;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__SwitchContexts1_34;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__ModuleInfo0_35;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__InstMap1_36;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__ModuleInfo_37;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_38;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_39;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__V_42_42;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_56;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_57;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__Actual_58;
#line 822 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_59;

#line 824 "det_report.m"
        {
#line 824 "det_report.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__det_report__Goal_29, &check_hlds__det_report__GoalSeq_30);
        }
#line 825 "det_report.m"
        {
#line 825 "det_report.m"
          check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__1_1));
#line 825 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "det_report.m"
        }
#line 825 "det_report.m"
        {
#line 825 "det_report.m"
          check_hlds__det_report__find_switch_var_matches_6_p_0(check_hlds__det_report__GoalSeq_30, check_hlds__det_report__V_42_42, check_hlds__det_report__MainConsId_27, check_hlds__det_report__OtherConsIds_28, &check_hlds__det_report__MainMatch_31, &check_hlds__det_report__OtherMatches_32);
        }
#line 827 "det_report.m"
        {
#line 827 "det_report.m"
          check_hlds__det_report__NewSwitchContext_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 827 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__1_1));
#line 827 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 1) = ((MR_Box) (check_hlds__det_report__MainMatch_31));
#line 827 "det_report.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 2) = ((MR_Box) (check_hlds__det_report__OtherMatches_32));
#line 827 "det_report.m"
        }
#line 828 "det_report.m"
        {
#line 828 "det_report.m"
          check_hlds__det_report__SwitchContexts1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchContexts1_34, 0) = ((MR_Box) (check_hlds__det_report__NewSwitchContext_33));
#line 828 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchContexts1_34, 1) = ((MR_Box) (check_hlds__det_report__HeadVar__6_6));
#line 828 "det_report.m"
        }
#line 829 "det_report.m"
        {
#line 829 "det_report.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__ModuleInfo0_35);
        }
#line 830 "det_report.m"
        {
#line 830 "det_report.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__MainConsId_27, check_hlds__det_report__OtherConsIds_28, check_hlds__det_report__InstMap0_4, &check_hlds__det_report__InstMap1_36, check_hlds__det_report__ModuleInfo0_35, &check_hlds__det_report__ModuleInfo_37);
        }
#line 832 "det_report.m"
        {
#line 832 "det_report.m"
          check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_37, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44);
        }
#line 516 "det_report.m"
        check_hlds__det_report__GoalExpr_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_29, (MR_Integer) 0)));
#line 516 "det_report.m"
        check_hlds__det_report__GoalInfo_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_29, (MR_Integer) 1)));
#line 517 "det_report.m"
        {
#line 517 "det_report.m"
          check_hlds__det_report__Actual_58 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_57);
        }
#line 518 "det_report.m"
        {
#line 518 "det_report.m"
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__Actual_58, &check_hlds__det_report__CompareResult_59);
        }
#line 525 "det_report.m"
#line 525 "det_report.m"
        switch (check_hlds__det_report__CompareResult_59) {
#line 525 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 525 "det_report.m"
          case (MR_Integer) 3:
#line 525 "det_report.m"
          case (MR_Integer) 0:
#line 523 "det_report.m"
            {
#line 523 "det_report.m"
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_56, check_hlds__det_report__GoalInfo_57, check_hlds__det_report__InstMap1_36, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__Actual_58, check_hlds__det_report__SwitchContexts1_34, check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44, &check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45, &check_hlds__det_report__Msgs1_38);
            }
#line 525 "det_report.m"
            break;
#line 525 "det_report.m"
          case (MR_Integer) 2:
#line 525 "det_report.m"
          case (MR_Integer) 1:
#line 528 "det_report.m"
            {
#line 529 "det_report.m"
              check_hlds__det_report__Msgs1_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45 = check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44;
#line 528 "det_report.m"
            }
#line 525 "det_report.m"
            break;
#line 525 "det_report.m"
        }
#line 835 "det_report.m"
        {
#line 835 "det_report.m"
          check_hlds__det_report__det_diagnose_switch_arms_9_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__Cases_21, check_hlds__det_report__InstMap0_4, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__HeadVar__6_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45, check_hlds__det_report__STATE_VARIABLE_DetInfo_8, &check_hlds__det_report__Msgs2_39);
        }
#line 837 "det_report.m"
        {
#line 837 "det_report.m"
          *check_hlds__det_report__HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_38, check_hlds__det_report__Msgs2_39);
        }
#line 822 "det_report.m"
      }
#line 819 "det_report.m"
  }
#line 815 "det_report.m"
}

#line 774 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__1_1,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__2_2,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__3_3,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__4_4,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__HeadVar__5_5,
#line 774 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
#line 774 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7,
#line 774 "det_report.m"
  MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8,
#line 774 "det_report.m"
  MR_Integer * check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9,
#line 774 "det_report.m"
  MR_Word * check_hlds__det_report__HeadVar__10_10)
#line 774 "det_report.m"
{
#line 779 "det_report.m"
  {
#line 779 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 779 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "det_report.m"
      {
#line 780 "det_report.m"
        *check_hlds__det_report__HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 780 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9 = check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8;
#line 780 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6;
#line 779 "det_report.m"
      }
#line 779 "det_report.m"
    else
#line 782 "det_report.m"
      {
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__ActualCanFail_30;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__DesiredCanFail_32;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__DesiredSolns_33;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__ClauseCanFail_34;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__ClauseDesired_35;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_36;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_41;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46;
#line 782 "det_report.m"
        MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__GoalExpr_62;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_63;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__Actual_64;
#line 782 "det_report.m"
        MR_Word check_hlds__det_report__CompareResult_65;
#line 783 "det_report.m"
        MR_Word check_hlds__det_report__V_31_31;
#line 803 "det_report.m"
        MR_Word check_hlds__det_report__GoalInfo_38;
#line 803 "det_report.m"
        MR_Word check_hlds__det_report__GoalDetism_39;
#line 803 "det_report.m"
        MR_Word check_hlds__det_report__V_53_53;
#line 803 "det_report.m"
        MR_Word check_hlds__det_report__V_37_37;
#line 805 "det_report.m"
        MR_Word check_hlds__det_report__V_40_40;

#line 783 "det_report.m"
        {
#line 783 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__ActualCanFail_30, &check_hlds__det_report__V_31_31);
        }
#line 784 "det_report.m"
        {
#line 784 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__HeadVar__3_3, &check_hlds__det_report__DesiredCanFail_32, &check_hlds__det_report__DesiredSolns_33);
        }
#line 786 "det_report.m"
        check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredCanFail_32 == (MR_Integer) 1);
#line 786 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 787 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__ActualCanFail_30 == (MR_Integer) 0);
#line 793 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 792 "det_report.m"
          check_hlds__det_report__ClauseCanFail_34 = (MR_Integer) 1;
#line 793 "det_report.m"
        else
#line 797 "det_report.m"
          check_hlds__det_report__ClauseCanFail_34 = (MR_Integer) 0;
#line 799 "det_report.m"
        {
#line 799 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__ClauseCanFail_34, check_hlds__det_report__DesiredSolns_33);
        }
#line 516 "det_report.m"
        check_hlds__det_report__GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 0)));
#line 516 "det_report.m"
        check_hlds__det_report__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 1)));
#line 517 "det_report.m"
        {
#line 517 "det_report.m"
          check_hlds__det_report__Actual_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_63);
        }
#line 518 "det_report.m"
        {
#line 518 "det_report.m"
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__Actual_64, &check_hlds__det_report__CompareResult_65);
        }
#line 525 "det_report.m"
#line 525 "det_report.m"
        switch (check_hlds__det_report__CompareResult_65) {
#line 525 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 525 "det_report.m"
          case (MR_Integer) 3:
#line 525 "det_report.m"
          case (MR_Integer) 0:
#line 523 "det_report.m"
            {
#line 523 "det_report.m"
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_62, check_hlds__det_report__GoalInfo_63, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__Actual_64, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6, &check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46, &check_hlds__det_report__Msgs1_36);
            }
#line 525 "det_report.m"
            break;
#line 525 "det_report.m"
          case (MR_Integer) 2:
#line 525 "det_report.m"
          case (MR_Integer) 1:
#line 528 "det_report.m"
            {
#line 529 "det_report.m"
              check_hlds__det_report__Msgs1_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6;
#line 528 "det_report.m"
            }
#line 525 "det_report.m"
            break;
#line 525 "det_report.m"
        }
#line 803 "det_report.m"
        check_hlds__det_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 0)));
#line 803 "det_report.m"
        check_hlds__det_report__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 1)));
#line 804 "det_report.m"
        {
#line 804 "det_report.m"
          check_hlds__det_report__GoalDetism_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_38);
        }
#line 805 "det_report.m"
        {
#line 805 "det_report.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__GoalDetism_39, &check_hlds__det_report__V_40_40, &check_hlds__det_report__V_53_53);
        }
#line 805 "det_report.m"
        check_hlds__det_report__succeeded = ((MR_Integer) 0 == check_hlds__det_report__V_53_53);
#line 808 "det_report.m"
        if (check_hlds__det_report__succeeded)
#line 808 "det_report.m"
          check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48 = check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8;
#line 808 "det_report.m"
        else
#line 809 "det_report.m"
          {
#line 809 "det_report.m"
            check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48 = (check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8 + (MR_Integer) 1);
#line 809 "det_report.m"
          }
#line 811 "det_report.m"
        {
#line 811 "det_report.m"
          check_hlds__det_report__det_diagnose_disj_10_p_0(check_hlds__det_report__Goals_22, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_report__STATE_VARIABLE_DetInfo_7, check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48, check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9, &check_hlds__det_report__Msgs2_41);
        }
#line 813 "det_report.m"
        {
#line 813 "det_report.m"
          *check_hlds__det_report__HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_36, check_hlds__det_report__Msgs2_41);
        }
#line 782 "det_report.m"
      }
#line 779 "det_report.m"
  }
#line 774 "det_report.m"
}

#line 707 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
#line 707 "det_report.m"
  MR_Word check_hlds__det_report__Desired_6,
#line 707 "det_report.m"
  MR_Word check_hlds__det_report__Actual_7,
#line 707 "det_report.m"
  MR_Word check_hlds__det_report__Context_8,
#line 707 "det_report.m"
  MR_Word check_hlds__det_report__StartingPieces_9,
#line 707 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_10)
#line 707 "det_report.m"
{
#line 710 "det_report.m"
  {
#line 710 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__TypeCtorInfo_78_78;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__DesiredCanFail_11;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__DesiredSolns_12;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__ActualCanFail_13;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__ActualSolns_14;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__CmpCanFail_15;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__CanFailPieces_16;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__CmpSolns_17;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__ConnectPieces_20;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__SolnsPieces_21;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__RawPieces_22;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_25;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__V_38_38;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__V_72_72;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__V_73_73;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__V_74_74;
#line 710 "det_report.m"
    MR_Word check_hlds__det_report__V_75_75;

#line 711 "det_report.m"
    {
#line 711 "det_report.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_6, &check_hlds__det_report__DesiredCanFail_11, &check_hlds__det_report__DesiredSolns_12);
    }
#line 712 "det_report.m"
    {
#line 712 "det_report.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Actual_7, &check_hlds__det_report__ActualCanFail_13, &check_hlds__det_report__ActualSolns_14);
    }
#line 713 "det_report.m"
    {
#line 713 "det_report.m"
      parse_tree__prog_detism__compare_canfails_3_p_0(check_hlds__det_report__DesiredCanFail_11, check_hlds__det_report__ActualCanFail_13, &check_hlds__det_report__CmpCanFail_15);
    }
#line 717 "det_report.m"
#line 717 "det_report.m"
    switch (check_hlds__det_report__CmpCanFail_15) {
#line 717 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 717 "det_report.m"
      case (MR_Integer) 2:
#line 717 "det_report.m"
      case (MR_Integer) 1:
#line 721 "det_report.m"
        check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 717 "det_report.m"
        break;
#line 717 "det_report.m"
      case (MR_Integer) 0:
#line 715 "det_report.m"
        {
#line 716 "det_report.m"
          check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[88]);
#line 715 "det_report.m"
        }
#line 717 "det_report.m"
        break;
#line 717 "det_report.m"
    }
#line 723 "det_report.m"
    {
#line 723 "det_report.m"
      parse_tree__prog_detism__compare_solncounts_3_p_0(check_hlds__det_report__DesiredSolns_12, check_hlds__det_report__ActualSolns_14, &check_hlds__det_report__CmpSolns_17);
    }
#line 743 "det_report.m"
#line 743 "det_report.m"
    switch (check_hlds__det_report__CmpSolns_17) {
#line 743 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 743 "det_report.m"
      case (MR_Integer) 2:
#line 743 "det_report.m"
      case (MR_Integer) 1:
#line 746 "det_report.m"
        {
#line 747 "det_report.m"
          check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "det_report.m"
          check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 746 "det_report.m"
        }
#line 743 "det_report.m"
        break;
#line 743 "det_report.m"
      case (MR_Integer) 0:
#line 725 "det_report.m"
        {
#line 729 "det_report.m"
          if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "det_report.m"
            check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 729 "det_report.m"
          else
#line 727 "det_report.m"
            {
#line 728 "det_report.m"
              check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[90]);
#line 727 "det_report.m"
            }
#line 736 "det_report.m"
          check_hlds__det_report__SolnsPieces_21 = ((&check_hlds__det_report_vector_common_8[0 + check_hlds__det_report__DesiredSolns_12]))->check_hlds__det_report__vector_common_type_8_0__vct_8_f_0;
#line 725 "det_report.m"
        }
#line 743 "det_report.m"
        break;
#line 743 "det_report.m"
    }
#line 11266 "check_hlds.det_report.c"
    check_hlds__det_report__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 750 "det_report.m"
    {
#line 750 "det_report.m"
      check_hlds__det_report__V_38_38 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__ConnectPieces_20, check_hlds__det_report__SolnsPieces_21);
    }
#line 750 "det_report.m"
    {
#line 750 "det_report.m"
      check_hlds__det_report__RawPieces_22 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__CanFailPieces_16, check_hlds__det_report__V_38_38);
    }
#line 754 "det_report.m"
    if ((check_hlds__det_report__RawPieces_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 755 "det_report.m"
      {
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_41_41;
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_43_43;
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_46_46;
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_47_47;
#line 755 "det_report.m"
        MR_String check_hlds__det_report__V_48_48;
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_49_49;
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_52_52;
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_54_54;
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_57_57;
#line 755 "det_report.m"
        MR_Word check_hlds__det_report__V_58_58;
#line 755 "det_report.m"
        MR_String check_hlds__det_report__V_59_59;

#line 758 "det_report.m"
        {
#line 758 "det_report.m"
          check_hlds__det_report__V_48_48 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Desired_6);
        }
#line 758 "det_report.m"
        {
#line 758 "det_report.m"
          check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 758 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 758 "det_report.m"
        }
#line 760 "det_report.m"
        {
#line 760 "det_report.m"
          check_hlds__det_report__V_59_59 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Actual_7);
        }
#line 760 "det_report.m"
        {
#line 760 "det_report.m"
          check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 760 "det_report.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__V_59_59));
#line 760 "det_report.m"
        }
#line 760 "det_report.m"
        {
#line 760 "det_report.m"
          check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (check_hlds__det_report__V_58_58));
#line 760 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])));
#line 760 "det_report.m"
        }
#line 759 "det_report.m"
        {
#line 759 "det_report.m"
          check_hlds__det_report__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[97])));
#line 759 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_54_54, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 759 "det_report.m"
        }
#line 758 "det_report.m"
        {
#line 758 "det_report.m"
          check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 758 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_54_54));
#line 758 "det_report.m"
        }
#line 758 "det_report.m"
        {
#line 758 "det_report.m"
          check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68])));
#line 758 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 758 "det_report.m"
        }
#line 758 "det_report.m"
        {
#line 758 "det_report.m"
          check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 758 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 758 "det_report.m"
        }
#line 757 "det_report.m"
        {
#line 757 "det_report.m"
          check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[96])));
#line 757 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 757 "det_report.m"
        }
#line 756 "det_report.m"
        {
#line 756 "det_report.m"
          check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 756 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 756 "det_report.m"
        }
#line 756 "det_report.m"
        {
#line 756 "det_report.m"
          check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[95])));
#line 756 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 756 "det_report.m"
        }
#line 755 "det_report.m"
      }
#line 754 "det_report.m"
    else
#line 752 "det_report.m"
      {
#line 753 "det_report.m"
        {
#line 753 "det_report.m"
          check_hlds__det_report__Pieces_25 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__RawPieces_22, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13]));
        }
#line 752 "det_report.m"
      }
#line 762 "det_report.m"
    {
#line 762 "det_report.m"
      check_hlds__det_report__V_75_75 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__StartingPieces_9, check_hlds__det_report__Pieces_25);
    }
#line 762 "det_report.m"
    {
#line 762 "det_report.m"
      check_hlds__det_report__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 762 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_74_74, 0) = ((MR_Box) (check_hlds__det_report__V_75_75));
#line 762 "det_report.m"
    }
#line 762 "det_report.m"
    {
#line 762 "det_report.m"
      check_hlds__det_report__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 0) = ((MR_Box) (check_hlds__det_report__V_74_74));
#line 762 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "det_report.m"
    }
#line 762 "det_report.m"
    {
#line 762 "det_report.m"
      check_hlds__det_report__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (check_hlds__det_report__Context_8));
#line 762 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 1) = ((MR_Box) (check_hlds__det_report__V_73_73));
#line 762 "det_report.m"
    }
#line 762 "det_report.m"
    {
#line 762 "det_report.m"
      MR_Word base;
#line 762 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "det_report.m"
      *check_hlds__det_report__Msgs_10 = base;
#line 762 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_72_72));
#line 762 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "det_report.m"
    }
#line 710 "det_report.m"
  }
#line 707 "det_report.m"
}

#line 534 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__GoalExpr_10,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__GoalInfo_11,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_12,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__Desired_13,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__Actual_14,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_15,
#line 534 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109,
#line 534 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_110,
#line 534 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_17)
#line 534 "det_report.m"
{
#line 541 "det_report.m"
  {
#line 541 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 541 "det_report.m"
#line 541 "det_report.m"
    switch (MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) {
#line 541 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 541 "det_report.m"
      case (MR_Integer) 0:
#line 653 "det_report.m"
        {
#line 653 "det_report.m"
          MR_Word check_hlds__det_report__DesiredCanFail_84;
#line 653 "det_report.m"
          MR_Word check_hlds__det_report__ActualCanFail_85;
#line 653 "det_report.m"
          MR_Word check_hlds__det_report__ActualSolns_86;
#line 653 "det_report.m"
          MR_Word check_hlds__det_report__DesiredSolns_242;

#line 654 "det_report.m"
          {
#line 654 "det_report.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__DesiredCanFail_84, &check_hlds__det_report__DesiredSolns_242);
          }
#line 655 "det_report.m"
          {
#line 655 "det_report.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Actual_14, &check_hlds__det_report__ActualCanFail_85, &check_hlds__det_report__ActualSolns_86);
          }
#line 657 "det_report.m"
          check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredCanFail_84 == (MR_Integer) 1);
#line 657 "det_report.m"
          if (check_hlds__det_report__succeeded)
#line 658 "det_report.m"
            check_hlds__det_report__succeeded = (check_hlds__det_report__ActualCanFail_85 == (MR_Integer) 0);
#line 663 "det_report.m"
          if (check_hlds__det_report__succeeded)
#line 660 "det_report.m"
            {
#line 660 "det_report.m"
              MR_Word check_hlds__det_report__V_124_124;
#line 660 "det_report.m"
              MR_Word check_hlds__det_report__Context_232;

#line 660 "det_report.m"
              {
#line 660 "det_report.m"
                check_hlds__det_report__Context_232 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
              }
#line 662 "det_report.m"
              {
#line 662 "det_report.m"
                check_hlds__det_report__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 662 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_124_124, 0) = ((MR_Box) (check_hlds__det_report__Context_232));
#line 662 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[83])));
#line 662 "det_report.m"
              }
#line 662 "det_report.m"
              {
#line 662 "det_report.m"
                MR_Word base;
#line 662 "det_report.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "det_report.m"
                *check_hlds__det_report__Msgs_17 = base;
#line 662 "det_report.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_124_124));
#line 662 "det_report.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "det_report.m"
              }
#line 660 "det_report.m"
            }
#line 663 "det_report.m"
          else
#line 670 "det_report.m"
            {
#line 664 "det_report.m"
              check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredSolns_242 == (MR_Integer) 0);
#line 664 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 664 "det_report.m"
                {
#line 665 "det_report.m"
                  check_hlds__det_report__succeeded = (check_hlds__det_report__ActualSolns_86 == (MR_Integer) 0);
#line 665 "det_report.m"
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 664 "det_report.m"
                }
#line 670 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 667 "det_report.m"
                {
#line 667 "det_report.m"
                  MR_Word check_hlds__det_report__V_134_134;
#line 667 "det_report.m"
                  MR_Word check_hlds__det_report__Context_234;

#line 667 "det_report.m"
                  {
#line 667 "det_report.m"
                    check_hlds__det_report__Context_234 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                  }
#line 669 "det_report.m"
                  {
#line 669 "det_report.m"
                    check_hlds__det_report__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_134_134, 0) = ((MR_Box) (check_hlds__det_report__Context_234));
#line 669 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[84])));
#line 669 "det_report.m"
                  }
#line 669 "det_report.m"
                  {
#line 669 "det_report.m"
                    MR_Word base;
#line 669 "det_report.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "det_report.m"
                    *check_hlds__det_report__Msgs_17 = base;
#line 669 "det_report.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_134_134));
#line 669 "det_report.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "det_report.m"
                  }
#line 667 "det_report.m"
                }
#line 670 "det_report.m"
              else
#line 671 "det_report.m"
                *check_hlds__det_report__Msgs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 670 "det_report.m"
            }
#line 653 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 653 "det_report.m"
        }
#line 541 "det_report.m"
        break;
#line 541 "det_report.m"
      case (MR_Integer) 1:
#line 616 "det_report.m"
        {
#line 616 "det_report.m"
          MR_Word check_hlds__det_report__LHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)));
#line 616 "det_report.m"
          MR_Word check_hlds__det_report__RHS_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 616 "det_report.m"
          MR_Word check_hlds__det_report__UnifyContext_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 616 "det_report.m"
          MR_Word check_hlds__det_report__Context_228;
#line 616 "det_report.m"
          MR_Word check_hlds__det_report__StartingPieces_229;
#line 616 "det_report.m"
          MR_Word check_hlds__det_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 616 "det_report.m"
          MR_Word check_hlds__det_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));

#line 617 "det_report.m"
          {
#line 617 "det_report.m"
            check_hlds__det_report__Context_228 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
          }
#line 618 "det_report.m"
          {
#line 618 "det_report.m"
            check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__det_report__UnifyContext_58, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__LHS_54, check_hlds__det_report__RHS_55, &check_hlds__det_report__StartingPieces_229);
          }
#line 620 "det_report.m"
          {
#line 620 "det_report.m"
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_228, check_hlds__det_report__StartingPieces_229, check_hlds__det_report__Msgs_17);
          }
#line 616 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 616 "det_report.m"
        }
#line 541 "det_report.m"
        break;
#line 541 "det_report.m"
      case (MR_Integer) 2:
#line 601 "det_report.m"
        {
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__PredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)));
#line 601 "det_report.m"
          MR_Integer check_hlds__det_report__ProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__CallContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__InitMsgs_45;
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__StartingPieces_46;
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__AtomicMsgs_47;
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__Context_225;
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 601 "det_report.m"
          MR_Word check_hlds__det_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 5)));

#line 602 "det_report.m"
          {
#line 602 "det_report.m"
            check_hlds__det_report__Context_225 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
          }
#line 603 "det_report.m"
          {
#line 603 "det_report.m"
            check_hlds__det_report__det_report_call_context_7_p_0(check_hlds__det_report__Context_225, check_hlds__det_report__CallContext_43, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__PredId_39, check_hlds__det_report__ProcId_40, &check_hlds__det_report__InitMsgs_45, &check_hlds__det_report__StartingPieces_46);
          }
#line 605 "det_report.m"
          {
#line 605 "det_report.m"
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_225, check_hlds__det_report__StartingPieces_46, &check_hlds__det_report__AtomicMsgs_47);
          }
#line 607 "det_report.m"
          {
#line 607 "det_report.m"
            *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__InitMsgs_45, check_hlds__det_report__AtomicMsgs_47);
          }
#line 601 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 601 "det_report.m"
        }
#line 541 "det_report.m"
        break;
#line 541 "det_report.m"
      case (MR_Integer) 3:
#line 541 "det_report.m"
#line 541 "det_report.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) {
#line 541 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 541 "det_report.m"
          case (MR_Integer) 0:
#line 609 "det_report.m"
            {
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__GenericCall_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__GenericCallId_53;
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__V_164_164;
#line 609 "det_report.m"
              MR_String check_hlds__det_report__V_165_165;
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__Context_226;
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__StartingPieces_227;
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 609 "det_report.m"
              MR_Word check_hlds__det_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 5)));

#line 610 "det_report.m"
              {
#line 610 "det_report.m"
                check_hlds__det_report__Context_226 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
              }
#line 611 "det_report.m"
              {
#line 611 "det_report.m"
                hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__det_report__GenericCall_48, &check_hlds__det_report__GenericCallId_53);
              }
#line 612 "det_report.m"
              {
#line 612 "det_report.m"
                check_hlds__det_report__V_165_165 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(check_hlds__det_report__GenericCallId_53);
              }
#line 612 "det_report.m"
              {
#line 612 "det_report.m"
                check_hlds__det_report__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 612 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_164_164, 1) = ((MR_Box) (check_hlds__det_report__V_165_165));
#line 612 "det_report.m"
              }
#line 612 "det_report.m"
              {
#line 612 "det_report.m"
                check_hlds__det_report__StartingPieces_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__StartingPieces_227, 0) = ((MR_Box) (check_hlds__det_report__V_164_164));
#line 612 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__StartingPieces_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "det_report.m"
              }
#line 613 "det_report.m"
              {
#line 613 "det_report.m"
                check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_226, check_hlds__det_report__StartingPieces_227, check_hlds__det_report__Msgs_17);
              }
#line 609 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 609 "det_report.m"
            }
#line 541 "det_report.m"
            break;
#line 541 "det_report.m"
          case (MR_Integer) 1:
#line 623 "det_report.m"
            {
#line 623 "det_report.m"
              MR_String check_hlds__det_report__DesiredStr_66;
#line 623 "det_report.m"
              MR_Word check_hlds__det_report__V_146_146;
#line 623 "det_report.m"
              MR_Word check_hlds__det_report__V_149_149;
#line 623 "det_report.m"
              MR_Word check_hlds__det_report__V_150_150;
#line 623 "det_report.m"
              MR_Word check_hlds__det_report__V_157_157;
#line 623 "det_report.m"
              MR_Word check_hlds__det_report__V_158_158;
#line 623 "det_report.m"
              MR_Word check_hlds__det_report__V_159_159;
#line 623 "det_report.m"
              MR_Word check_hlds__det_report__Context_230;
#line 623 "det_report.m"
              MR_Word check_hlds__det_report__Pieces_231;

#line 624 "det_report.m"
              {
#line 624 "det_report.m"
                check_hlds__det_report__Context_230 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
              }
#line 625 "det_report.m"
              {
#line 625 "det_report.m"
                check_hlds__det_report__DesiredStr_66 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Desired_13);
              }
#line 627 "det_report.m"
              {
#line 627 "det_report.m"
                check_hlds__det_report__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 627 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_150_150, 1) = ((MR_Box) (check_hlds__det_report__DesiredStr_66));
#line 627 "det_report.m"
              }
#line 627 "det_report.m"
              {
#line 627 "det_report.m"
                check_hlds__det_report__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_149_149, 0) = ((MR_Box) (check_hlds__det_report__V_150_150));
#line 627 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_149_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])));
#line 627 "det_report.m"
              }
#line 627 "det_report.m"
              {
#line 627 "det_report.m"
                check_hlds__det_report__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[81])));
#line 627 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_146_146, 1) = ((MR_Box) (check_hlds__det_report__V_149_149));
#line 627 "det_report.m"
              }
#line 626 "det_report.m"
              {
#line 626 "det_report.m"
                check_hlds__det_report__Pieces_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_231, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[80])));
#line 626 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_231, 1) = ((MR_Box) (check_hlds__det_report__V_146_146));
#line 626 "det_report.m"
              }
#line 629 "det_report.m"
              {
#line 629 "det_report.m"
                check_hlds__det_report__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 629 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_159_159, 0) = ((MR_Box) (check_hlds__det_report__Pieces_231));
#line 629 "det_report.m"
              }
#line 629 "det_report.m"
              {
#line 629 "det_report.m"
                check_hlds__det_report__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_158_158, 0) = ((MR_Box) (check_hlds__det_report__V_159_159));
#line 629 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "det_report.m"
              }
#line 629 "det_report.m"
              {
#line 629 "det_report.m"
                check_hlds__det_report__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_157_157, 0) = ((MR_Box) (check_hlds__det_report__Context_230));
#line 629 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_157_157, 1) = ((MR_Box) (check_hlds__det_report__V_158_158));
#line 629 "det_report.m"
              }
#line 629 "det_report.m"
              {
#line 629 "det_report.m"
                MR_Word base;
#line 629 "det_report.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "det_report.m"
                *check_hlds__det_report__Msgs_17 = base;
#line 629 "det_report.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_157_157));
#line 629 "det_report.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "det_report.m"
              }
#line 623 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 623 "det_report.m"
            }
#line 541 "det_report.m"
            break;
#line 541 "det_report.m"
          case (MR_Integer) 2:
#line 541 "det_report.m"
            {
#line 541 "det_report.m"
              MR_Word check_hlds__det_report__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 541 "det_report.m"
              MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));

#line 542 "det_report.m"
              {
#line 542 "det_report.m"
                check_hlds__det_report__det_diagnose_conj_7_p_0(check_hlds__det_report__Goals_19, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 542 "det_report.m"
                return;
              }
#line 541 "det_report.m"
            }
#line 541 "det_report.m"
            break;
#line 541 "det_report.m"
          case (MR_Integer) 3:
#line 545 "det_report.m"
            {
#line 545 "det_report.m"
              MR_Integer check_hlds__det_report__DisjunctsWithSoln_20;
#line 545 "det_report.m"
              MR_Word check_hlds__det_report__Msgs1_21;
#line 545 "det_report.m"
              MR_Word check_hlds__det_report__DesSolns_23;
#line 545 "det_report.m"
              MR_Word check_hlds__det_report__Goals_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 548 "det_report.m"
              MR_Word check_hlds__det_report__V_22_22;
#line 550 "det_report.m"
              MR_Integer check_hlds__det_report__V_198_198;

#line 546 "det_report.m"
              {
#line 546 "det_report.m"
                check_hlds__det_report__det_diagnose_disj_10_p_0(check_hlds__det_report__Goals_214, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, (MR_Integer) 0, &check_hlds__det_report__DisjunctsWithSoln_20, &check_hlds__det_report__Msgs1_21);
              }
#line 548 "det_report.m"
              {
#line 548 "det_report.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__V_22_22, &check_hlds__det_report__DesSolns_23);
              }
#line 550 "det_report.m"
              check_hlds__det_report__succeeded = (check_hlds__det_report__DesSolns_23 == (MR_Integer) 3);
#line 550 "det_report.m"
              check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 550 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 550 "det_report.m"
                {
#line 551 "det_report.m"
                  check_hlds__det_report__succeeded = (check_hlds__det_report__DesSolns_23 == (MR_Integer) 2);
#line 551 "det_report.m"
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 550 "det_report.m"
                  if (check_hlds__det_report__succeeded)
#line 550 "det_report.m"
                    {
#line 552 "det_report.m"
                      check_hlds__det_report__V_198_198 = (MR_Integer) 1;
#line 552 "det_report.m"
                      check_hlds__det_report__succeeded = (check_hlds__det_report__DisjunctsWithSoln_20 > check_hlds__det_report__V_198_198);
#line 550 "det_report.m"
                    }
#line 550 "det_report.m"
                }
#line 564 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 554 "det_report.m"
                {
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__TypeCtorInfo_246_246;
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__Context_24;
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__NestingPieces_25;
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__Pieces_27;
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__Msg_28;
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__V_204_204;
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__V_208_208;
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__V_209_209;
#line 554 "det_report.m"
                  MR_Word check_hlds__det_report__V_211_211;

#line 554 "det_report.m"
                  {
#line 554 "det_report.m"
                    check_hlds__det_report__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                  }
#line 555 "det_report.m"
                  {
#line 555 "det_report.m"
                    check_hlds__det_report__det_diagnose_switch_context_3_p_0(*check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__SwitchContexts_15, &check_hlds__det_report__NestingPieces_25);
                  }
#line 12040 "check_hlds.det_report.c"
                  check_hlds__det_report__TypeCtorInfo_246_246 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 561 "det_report.m"
                  {
#line 561 "det_report.m"
                    check_hlds__det_report__V_204_204 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_246_246, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[82]), (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[46]));
                  }
#line 560 "det_report.m"
                  {
#line 560 "det_report.m"
                    check_hlds__det_report__Pieces_27 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_246_246, check_hlds__det_report__NestingPieces_25, check_hlds__det_report__V_204_204);
                  }
#line 562 "det_report.m"
                  {
#line 562 "det_report.m"
                    check_hlds__det_report__V_209_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 562 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_209_209, 0) = ((MR_Box) (check_hlds__det_report__Pieces_27));
#line 562 "det_report.m"
                  }
#line 562 "det_report.m"
                  {
#line 562 "det_report.m"
                    check_hlds__det_report__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_208_208, 0) = ((MR_Box) (check_hlds__det_report__V_209_209));
#line 562 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_208_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "det_report.m"
                  }
#line 562 "det_report.m"
                  {
#line 562 "det_report.m"
                    check_hlds__det_report__Msg_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_28, 0) = ((MR_Box) (check_hlds__det_report__Context_24));
#line 562 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_28, 1) = ((MR_Box) (check_hlds__det_report__V_208_208));
#line 562 "det_report.m"
                  }
#line 563 "det_report.m"
                  {
#line 563 "det_report.m"
                    check_hlds__det_report__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_211_211, 0) = ((MR_Box) (check_hlds__det_report__Msg_28));
#line 563 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "det_report.m"
                  }
#line 563 "det_report.m"
                  {
#line 563 "det_report.m"
                    *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_211_211, check_hlds__det_report__Msgs1_21);
                  }
#line 554 "det_report.m"
                }
#line 564 "det_report.m"
              else
#line 565 "det_report.m"
                *check_hlds__det_report__Msgs_17 = check_hlds__det_report__Msgs1_21;
#line 545 "det_report.m"
            }
#line 541 "det_report.m"
            break;
#line 541 "det_report.m"
          case (MR_Integer) 4:
#line 568 "det_report.m"
            {
#line 568 "det_report.m"
              MR_Word check_hlds__det_report__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 568 "det_report.m"
              MR_Word check_hlds__det_report__SwitchCanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 568 "det_report.m"
              MR_Word check_hlds__det_report__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 568 "det_report.m"
              MR_Word check_hlds__det_report__VarTypes_36;
#line 568 "det_report.m"
              MR_Word check_hlds__det_report__VarType_37;
#line 568 "det_report.m"
              MR_Word check_hlds__det_report__Msgs2_38;
#line 568 "det_report.m"
              MR_Word check_hlds__det_report__Msgs1_221;
#line 574 "det_report.m"
              MR_Word check_hlds__det_report__V_167_167;
#line 574 "det_report.m"
              MR_Word check_hlds__det_report__V_254_254;
#line 575 "det_report.m"
              MR_Word check_hlds__det_report__V_32_32;

#line 574 "det_report.m"
              check_hlds__det_report__succeeded = (check_hlds__det_report__SwitchCanFail_30 == (MR_Integer) 0);
#line 574 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 574 "det_report.m"
                {
#line 575 "det_report.m"
                  check_hlds__det_report__V_167_167 = (MR_Integer) 1;
#line 575 "det_report.m"
                  {
#line 575 "det_report.m"
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__V_254_254, &check_hlds__det_report__V_32_32);
                  }
#line 575 "det_report.m"
                  check_hlds__det_report__succeeded = (check_hlds__det_report__V_167_167 == check_hlds__det_report__V_254_254);
#line 574 "det_report.m"
                }
#line 592 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 577 "det_report.m"
                {
#line 577 "det_report.m"
                  MR_String check_hlds__det_report__VarStr_33;
#line 577 "det_report.m"
                  MR_Word check_hlds__det_report__MaybeMissingPieces_34;
#line 577 "det_report.m"
                  MR_Word check_hlds__det_report__V_189_189;
#line 577 "det_report.m"
                  MR_Word check_hlds__det_report__V_190_190;
#line 577 "det_report.m"
                  MR_Word check_hlds__det_report__V_191_191;
#line 577 "det_report.m"
                  MR_Word check_hlds__det_report__V_192_192;
#line 577 "det_report.m"
                  MR_Word check_hlds__det_report__Context_215;
#line 577 "det_report.m"
                  MR_Word check_hlds__det_report__NestingPieces_216;
#line 577 "det_report.m"
                  MR_Word check_hlds__det_report__Pieces_217;

#line 577 "det_report.m"
                  {
#line 577 "det_report.m"
                    check_hlds__det_report__Context_215 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                  }
#line 578 "det_report.m"
                  {
#line 578 "det_report.m"
                    check_hlds__det_report__det_diagnose_switch_context_3_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__SwitchContexts_15, &check_hlds__det_report__NestingPieces_216);
                  }
#line 580 "det_report.m"
                  {
#line 580 "det_report.m"
                    check_hlds__det_report__find_missing_cons_ids_6_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Var_29, check_hlds__det_report__Cases_31, &check_hlds__det_report__VarStr_33, &check_hlds__det_report__MaybeMissingPieces_34);
                  }
#line 586 "det_report.m"
                  if ((check_hlds__det_report__MaybeMissingPieces_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "det_report.m"
                    {
#line 587 "det_report.m"
                      MR_Word check_hlds__det_report__V_170_170;
#line 587 "det_report.m"
                      MR_Word check_hlds__det_report__V_171_171;

#line 588 "det_report.m"
                      {
#line 588 "det_report.m"
                        check_hlds__det_report__V_171_171 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 588 "det_report.m"
                        MR_hl_field(MR_mktag(2), check_hlds__det_report__V_171_171, 0) = ((MR_Box) (check_hlds__det_report__VarStr_33));
#line 588 "det_report.m"
                      }
#line 588 "det_report.m"
                      {
#line 588 "det_report.m"
                        check_hlds__det_report__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_170_170, 0) = ((MR_Box) (check_hlds__det_report__V_171_171));
#line 588 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[52])));
#line 588 "det_report.m"
                      }
#line 588 "det_report.m"
                      {
#line 588 "det_report.m"
                        check_hlds__det_report__Pieces_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_217, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[85])));
#line 588 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_217, 1) = ((MR_Box) (check_hlds__det_report__V_170_170));
#line 588 "det_report.m"
                      }
#line 587 "det_report.m"
                    }
#line 586 "det_report.m"
                  else
#line 583 "det_report.m"
                    {
#line 583 "det_report.m"
                      MR_Word check_hlds__det_report__MissingPieces_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeMissingPieces_34, (MR_Integer) 0)));
#line 583 "det_report.m"
                      MR_Word check_hlds__det_report__V_178_178;
#line 583 "det_report.m"
                      MR_Word check_hlds__det_report__V_181_181;
#line 583 "det_report.m"
                      MR_Word check_hlds__det_report__V_182_182;
#line 583 "det_report.m"
                      MR_Word check_hlds__det_report__V_183_183;

#line 584 "det_report.m"
                      {
#line 584 "det_report.m"
                        check_hlds__det_report__V_182_182 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "det_report.m"
                        MR_hl_field(MR_mktag(2), check_hlds__det_report__V_182_182, 0) = ((MR_Box) (check_hlds__det_report__VarStr_33));
#line 584 "det_report.m"
                      }
#line 585 "det_report.m"
                      {
#line 585 "det_report.m"
                        check_hlds__det_report__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_183_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[86])));
#line 585 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_183_183, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces_35));
#line 585 "det_report.m"
                      }
#line 584 "det_report.m"
                      {
#line 584 "det_report.m"
                        check_hlds__det_report__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_181_181, 0) = ((MR_Box) (check_hlds__det_report__V_182_182));
#line 584 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_181_181, 1) = ((MR_Box) (check_hlds__det_report__V_183_183));
#line 584 "det_report.m"
                      }
#line 584 "det_report.m"
                      {
#line 584 "det_report.m"
                        check_hlds__det_report__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[85])));
#line 584 "det_report.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_178_178, 1) = ((MR_Box) (check_hlds__det_report__V_181_181));
#line 584 "det_report.m"
                      }
#line 585 "det_report.m"
                      {
#line 585 "det_report.m"
                        check_hlds__det_report__Pieces_217 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_178_178, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5]));
                      }
#line 583 "det_report.m"
                    }
#line 591 "det_report.m"
                  {
#line 591 "det_report.m"
                    check_hlds__det_report__V_192_192 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__NestingPieces_216, check_hlds__det_report__Pieces_217);
                  }
#line 591 "det_report.m"
                  {
#line 591 "det_report.m"
                    check_hlds__det_report__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 591 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_191_191, 0) = ((MR_Box) (check_hlds__det_report__V_192_192));
#line 591 "det_report.m"
                  }
#line 591 "det_report.m"
                  {
#line 591 "det_report.m"
                    check_hlds__det_report__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_190_190, 0) = ((MR_Box) (check_hlds__det_report__V_191_191));
#line 591 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "det_report.m"
                  }
#line 591 "det_report.m"
                  {
#line 591 "det_report.m"
                    check_hlds__det_report__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 591 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_189_189, 0) = ((MR_Box) (check_hlds__det_report__Context_215));
#line 591 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_189_189, 1) = ((MR_Box) (check_hlds__det_report__V_190_190));
#line 591 "det_report.m"
                  }
#line 591 "det_report.m"
                  {
#line 591 "det_report.m"
                    check_hlds__det_report__Msgs1_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Msgs1_221, 0) = ((MR_Box) (check_hlds__det_report__V_189_189));
#line 591 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Msgs1_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "det_report.m"
                  }
#line 577 "det_report.m"
                }
#line 592 "det_report.m"
              else
#line 593 "det_report.m"
                check_hlds__det_report__Msgs1_221 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "det_report.m"
              {
#line 595 "det_report.m"
                check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__VarTypes_36);
              }
#line 596 "det_report.m"
              {
#line 596 "det_report.m"
                hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_36, check_hlds__det_report__Var_29, &check_hlds__det_report__VarType_37);
              }
#line 597 "det_report.m"
              {
#line 597 "det_report.m"
                check_hlds__det_report__det_diagnose_switch_arms_9_p_0(check_hlds__det_report__Var_29, check_hlds__det_report__VarType_37, check_hlds__det_report__Cases_31, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__Msgs2_38);
              }
#line 599 "det_report.m"
              {
#line 599 "det_report.m"
                *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_221, check_hlds__det_report__Msgs2_38);
              }
#line 568 "det_report.m"
            }
#line 541 "det_report.m"
            break;
#line 541 "det_report.m"
          case (MR_Integer) 5:
#line 674 "det_report.m"
            {
#line 674 "det_report.m"
              MR_Word check_hlds__det_report__SubGoal_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 674 "det_report.m"
              MR_Word check_hlds__det_report__SubGoalInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_88, (MR_Integer) 1)));
#line 674 "det_report.m"
              MR_Word check_hlds__det_report__Internal_91;
#line 674 "det_report.m"
              MR_Word check_hlds__det_report__InternalDesired_92;
#line 674 "det_report.m"
              MR_Word check_hlds__det_report__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 675 "det_report.m"
              MR_Word check_hlds__det_report__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_88, (MR_Integer) 0)));

#line 676 "det_report.m"
              {
#line 676 "det_report.m"
                check_hlds__det_report__Internal_91 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_90);
              }
#line 677 "det_report.m"
              check_hlds__det_report__succeeded = (check_hlds__det_report__Actual_14 == check_hlds__det_report__Internal_91);
#line 679 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 678 "det_report.m"
                check_hlds__det_report__InternalDesired_92 = check_hlds__det_report__Desired_13;
#line 679 "det_report.m"
              else
#line 680 "det_report.m"
                {
#line 680 "det_report.m"
                  MR_Word check_hlds__det_report__CanFail_93;
#line 680 "det_report.m"
                  MR_Word check_hlds__det_report__V_94_94;

#line 680 "det_report.m"
                  {
#line 680 "det_report.m"
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__CanFail_93, &check_hlds__det_report__V_94_94);
                  }
#line 681 "det_report.m"
                  {
#line 681 "det_report.m"
                    parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__InternalDesired_92, check_hlds__det_report__CanFail_93, (MR_Integer) 3);
                  }
#line 680 "det_report.m"
                }
#line 683 "det_report.m"
              {
#line 683 "det_report.m"
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__SubGoal_88, check_hlds__det_report__InstMap0_12, check_hlds__det_report__InternalDesired_92, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 683 "det_report.m"
                return;
              }
#line 674 "det_report.m"
            }
#line 541 "det_report.m"
            break;
#line 541 "det_report.m"
          case (MR_Integer) 6:
#line 631 "det_report.m"
            {
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__TypeCtorInfo_252_252;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__Else_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__DesiredSolns_72;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__CondInfo_74;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__CondDetism_75;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__CondSolns_77;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__MsgsCond_79;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__InstMap1_80;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__MsgsThen_81;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__MsgsElse_82;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_140_140;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_141_141;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report__V_143_143;
#line 631 "det_report.m"
              MR_Word check_hlds__det_report___Vars_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
#line 632 "det_report.m"
              MR_Word check_hlds__det_report___DesiredCanFail_71;
#line 633 "det_report.m"
              MR_Word check_hlds__det_report___CondGoal_73;
#line 635 "det_report.m"
              MR_Word check_hlds__det_report___CondCanFail_76;

#line 632 "det_report.m"
              {
#line 632 "det_report.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report___DesiredCanFail_71, &check_hlds__det_report__DesiredSolns_72);
              }
#line 633 "det_report.m"
              check_hlds__det_report___CondGoal_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Cond_68, (MR_Integer) 0)));
#line 633 "det_report.m"
              check_hlds__det_report__CondInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Cond_68, (MR_Integer) 1)));
#line 634 "det_report.m"
              {
#line 634 "det_report.m"
                check_hlds__det_report__CondDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__CondInfo_74);
              }
#line 635 "det_report.m"
              {
#line 635 "det_report.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__CondDetism_75, &check_hlds__det_report___CondCanFail_76, &check_hlds__det_report__CondSolns_77);
              }
#line 637 "det_report.m"
              check_hlds__det_report__succeeded = (check_hlds__det_report__CondSolns_77 == (MR_Integer) 3);
#line 637 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 637 "det_report.m"
                {
#line 638 "det_report.m"
                  check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredSolns_72 == (MR_Integer) 3);
#line 638 "det_report.m"
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 637 "det_report.m"
                }
#line 643 "det_report.m"
              if (check_hlds__det_report__succeeded)
#line 640 "det_report.m"
                {
#line 640 "det_report.m"
                  MR_Word check_hlds__det_report__DesiredCond_78;

#line 640 "det_report.m"
                  {
#line 640 "det_report.m"
                    parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__DesiredCond_78, (MR_Integer) 0, check_hlds__det_report__DesiredSolns_72);
                  }
#line 641 "det_report.m"
                  {
#line 641 "det_report.m"
                    check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Cond_68, check_hlds__det_report__InstMap0_12, check_hlds__det_report__DesiredCond_78, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__STATE_VARIABLE_DetInfo_140_140, &check_hlds__det_report__MsgsCond_79);
                  }
#line 640 "det_report.m"
                }
#line 643 "det_report.m"
              else
#line 644 "det_report.m"
                {
#line 644 "det_report.m"
                  check_hlds__det_report__MsgsCond_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "det_report.m"
                  check_hlds__det_report__STATE_VARIABLE_DetInfo_140_140 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
#line 644 "det_report.m"
                }
#line 646 "det_report.m"
              {
#line 646 "det_report.m"
                hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Cond_68, check_hlds__det_report__InstMap0_12, &check_hlds__det_report__InstMap1_80);
              }
#line 647 "det_report.m"
              {
#line 647 "det_report.m"
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Then_69, check_hlds__det_report__InstMap1_80, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_140_140, &check_hlds__det_report__STATE_VARIABLE_DetInfo_141_141, &check_hlds__det_report__MsgsThen_81);
              }
#line 649 "det_report.m"
              {
#line 649 "det_report.m"
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Else_70, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_141_141, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__MsgsElse_82);
              }
#line 12535 "check_hlds.det_report.c"
              check_hlds__det_report__TypeCtorInfo_252_252 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0;
#line 651 "det_report.m"
              {
#line 651 "det_report.m"
                check_hlds__det_report__V_143_143 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_252_252, check_hlds__det_report__MsgsThen_81, check_hlds__det_report__MsgsElse_82);
              }
#line 651 "det_report.m"
              {
#line 651 "det_report.m"
                *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_252_252, check_hlds__det_report__MsgsCond_79, check_hlds__det_report__V_143_143);
              }
#line 631 "det_report.m"
            }
#line 541 "det_report.m"
            break;
#line 541 "det_report.m"
          case (MR_Integer) 7:
#line 686 "det_report.m"
            {
#line 686 "det_report.m"
              MR_Word check_hlds__det_report__ShortHand_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));

#line 694 "det_report.m"
#line 694 "det_report.m"
              switch (MR_tag((MR_Word) check_hlds__det_report__ShortHand_95)) {
#line 694 "det_report.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 694 "det_report.m"
                case (MR_Integer) 0:
#line 699 "det_report.m"
                  {
#line 701 "det_report.m"
                    {
#line 701 "det_report.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
#line 701 "det_report.m"
                      return;
                    }
#line 699 "det_report.m"
                  }
#line 694 "det_report.m"
                  break;
#line 694 "det_report.m"
                case (MR_Integer) 1:
#line 688 "det_report.m"
                  {
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__MainGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 4)));
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__OrElseGoals_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 5)));
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__MainMsgs_103;
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__OrElseMsgs_104;
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115;
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 0)));
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 1)));
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 2)));
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 3)));
#line 688 "det_report.m"
                    MR_Word check_hlds__det_report__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 6)));

#line 689 "det_report.m"
                    {
#line 689 "det_report.m"
                      check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__MainGoal_100, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115, &check_hlds__det_report__MainMsgs_103);
                    }
#line 691 "det_report.m"
                    {
#line 691 "det_report.m"
                      check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(check_hlds__det_report__OrElseGoals_101, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__OrElseMsgs_104);
                    }
#line 693 "det_report.m"
                    {
#line 693 "det_report.m"
                      *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__MainMsgs_103, check_hlds__det_report__OrElseMsgs_104);
                    }
#line 688 "det_report.m"
                  }
#line 694 "det_report.m"
                  break;
#line 694 "det_report.m"
                case (MR_Integer) 2:
#line 695 "det_report.m"
                  {
#line 695 "det_report.m"
                    MR_Word check_hlds__det_report__SubGoal_243 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 2)));
#line 695 "det_report.m"
                    MR_Word check_hlds__det_report__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 0)));
#line 695 "det_report.m"
                    MR_Word check_hlds__det_report__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 1)));

#line 696 "det_report.m"
                    {
#line 696 "det_report.m"
                      check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__SubGoal_243, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
#line 696 "det_report.m"
                      return;
                    }
#line 695 "det_report.m"
                  }
#line 694 "det_report.m"
                  break;
#line 694 "det_report.m"
              }
#line 686 "det_report.m"
            }
#line 541 "det_report.m"
            break;
#line 541 "det_report.m"
        }
#line 541 "det_report.m"
        break;
#line 541 "det_report.m"
    }
#line 541 "det_report.m"
  }
#line 534 "det_report.m"
}

#line 511 "det_report.m"
static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__Goal_8,
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__InstMap0_9,
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__Desired_10,
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__SwitchContexts_11,
#line 511 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
#line 511 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19,
#line 511 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_13)
#line 511 "det_report.m"
{
#line 515 "det_report.m"
  {
#line 515 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 515 "det_report.m"
    MR_Word check_hlds__det_report__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));
#line 515 "det_report.m"
    MR_Word check_hlds__det_report__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
#line 515 "det_report.m"
    MR_Word check_hlds__det_report__Actual_16;
#line 515 "det_report.m"
    MR_Word check_hlds__det_report__CompareResult_17;

#line 517 "det_report.m"
    {
#line 517 "det_report.m"
      check_hlds__det_report__Actual_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_15);
    }
#line 518 "det_report.m"
    {
#line 518 "det_report.m"
      parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__Desired_10, check_hlds__det_report__Actual_16, &check_hlds__det_report__CompareResult_17);
    }
#line 525 "det_report.m"
#line 525 "det_report.m"
    switch (check_hlds__det_report__CompareResult_17) {
#line 525 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 525 "det_report.m"
      case (MR_Integer) 3:
#line 525 "det_report.m"
      case (MR_Integer) 0:
#line 523 "det_report.m"
        {
#line 523 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_14, check_hlds__det_report__GoalInfo_15, check_hlds__det_report__InstMap0_9, check_hlds__det_report__Desired_10, check_hlds__det_report__Actual_16, check_hlds__det_report__SwitchContexts_11, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18, check_hlds__det_report__STATE_VARIABLE_DetInfo_19, check_hlds__det_report__Msgs_13);
#line 523 "det_report.m"
          return;
        }
#line 525 "det_report.m"
        break;
#line 525 "det_report.m"
      case (MR_Integer) 2:
#line 525 "det_report.m"
      case (MR_Integer) 1:
#line 528 "det_report.m"
        {
#line 529 "det_report.m"
          *check_hlds__det_report__Msgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_19 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18;
#line 528 "det_report.m"
        }
#line 525 "det_report.m"
        break;
#line 525 "det_report.m"
    }
#line 515 "det_report.m"
  }
#line 511 "det_report.m"
}

#line 488 "det_report.m"
static void MR_CALL 
check_hlds__det_report__report_determinism_problem_7_p_0(
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__PredId_8,
#line 488 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_9,
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_10,
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__MessagePieces_11,
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__DeclaredDetism_12,
#line 488 "det_report.m"
  MR_Word check_hlds__det_report__InferredDetism_13,
#line 488 "det_report.m"
  MR_Word * check_hlds__det_report__Msgs_14)
#line 488 "det_report.m"
{
#line 493 "det_report.m"
  {
#line 493 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__TypeCtorInfo_65_65;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__ProcInfo_16;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__Context_17;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__ProcPieces_18;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_19;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_21_21;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_26_26;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_27_27;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_34_34;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_35_35;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_39_39;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_42_42;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_43_43;
#line 493 "det_report.m"
    MR_String check_hlds__det_report__V_44_44;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_45_45;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_48_48;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_51_51;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_52_52;
#line 493 "det_report.m"
    MR_String check_hlds__det_report__V_53_53;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_60_60;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_61_61;
#line 493 "det_report.m"
    MR_Word check_hlds__det_report__V_62_62;
#line 494 "det_report.m"
    MR_Word check_hlds__det_report__V_15_15;

#line 494 "det_report.m"
    {
#line 494 "det_report.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_report__ModuleInfo_10, check_hlds__det_report__PredId_8, check_hlds__det_report__ProcId_9, &check_hlds__det_report__V_15_15, &check_hlds__det_report__ProcInfo_16);
    }
#line 495 "det_report.m"
    {
#line 495 "det_report.m"
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
#line 496 "det_report.m"
    {
#line 496 "det_report.m"
      check_hlds__det_report__ProcPieces_18 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_report__ModuleInfo_10, (MR_Integer) 1, check_hlds__det_report__V_21_21);
    }
#line 12837 "check_hlds.det_report.c"
    check_hlds__det_report__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 501 "det_report.m"
    {
#line 501 "det_report.m"
      check_hlds__det_report__V_44_44 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__DeclaredDetism_12);
    }
#line 501 "det_report.m"
    {
#line 501 "det_report.m"
      check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "det_report.m"
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 501 "det_report.m"
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_44_44));
#line 501 "det_report.m"
    }
#line 503 "det_report.m"
    {
#line 503 "det_report.m"
      check_hlds__det_report__V_53_53 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_13);
    }
#line 503 "det_report.m"
    {
#line 503 "det_report.m"
      check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "det_report.m"
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 503 "det_report.m"
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_53_53));
#line 503 "det_report.m"
    }
#line 503 "det_report.m"
    {
#line 503 "det_report.m"
      check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 503 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])));
#line 503 "det_report.m"
    }
#line 502 "det_report.m"
    {
#line 502 "det_report.m"
      check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[69])));
#line 502 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (check_hlds__det_report__V_51_51));
#line 502 "det_report.m"
    }
#line 501 "det_report.m"
    {
#line 501 "det_report.m"
      check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68])));
#line 501 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 501 "det_report.m"
    }
#line 501 "det_report.m"
    {
#line 501 "det_report.m"
      check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 501 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
#line 501 "det_report.m"
    }
#line 500 "det_report.m"
    {
#line 500 "det_report.m"
      check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[67])));
#line 500 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_42_42));
#line 500 "det_report.m"
    }
#line 499 "det_report.m"
    {
#line 499 "det_report.m"
      check_hlds__det_report__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[5]), check_hlds__det_report__V_39_39);
    }
#line 499 "det_report.m"
    {
#line 499 "det_report.m"
      check_hlds__det_report__V_34_34 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, check_hlds__det_report__MessagePieces_11, check_hlds__det_report__V_35_35);
    }
#line 498 "det_report.m"
    {
#line 498 "det_report.m"
      check_hlds__det_report__V_27_27 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[44]), check_hlds__det_report__V_34_34);
    }
#line 498 "det_report.m"
    {
#line 498 "det_report.m"
      check_hlds__det_report__V_26_26 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, check_hlds__det_report__ProcPieces_18, check_hlds__det_report__V_27_27);
    }
#line 498 "det_report.m"
    {
#line 498 "det_report.m"
      check_hlds__det_report__Pieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[64]), check_hlds__det_report__V_26_26);
    }
#line 504 "det_report.m"
    {
#line 504 "det_report.m"
      check_hlds__det_report__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_62_62, 0) = ((MR_Box) (check_hlds__det_report__Pieces_19));
#line 504 "det_report.m"
    }
#line 504 "det_report.m"
    {
#line 504 "det_report.m"
      check_hlds__det_report__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 0) = ((MR_Box) (check_hlds__det_report__V_62_62));
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "det_report.m"
    }
#line 504 "det_report.m"
    {
#line 504 "det_report.m"
      check_hlds__det_report__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_60_60, 0) = ((MR_Box) (check_hlds__det_report__Context_17));
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_60_60, 1) = ((MR_Box) (check_hlds__det_report__V_61_61));
#line 504 "det_report.m"
    }
#line 504 "det_report.m"
    {
#line 504 "det_report.m"
      MR_Word base;
#line 504 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "det_report.m"
      *check_hlds__det_report__Msgs_14 = base;
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_60_60));
#line 504 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "det_report.m"
    }
#line 493 "det_report.m"
  }
#line 488 "det_report.m"
}

#line 348 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
#line 348 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 348 "det_report.m"
{
#line 348 "det_report.m"
  {
#line 348 "det_report.m"
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s *) check_hlds__det_report__env_ptr_arg;

#line 350 "det_report.m"
    {
#line 350 "det_report.m"
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3, *((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4));
    }
#line 350 "det_report.m"
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded = ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5 == (MR_Integer) 1);
#line 350 "det_report.m"
    if ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded)
#line 350 "det_report.m"
      {
#line 350 "det_report.m"
        ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont)((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr);
#line 350 "det_report.m"
        return;
      }
#line 348 "det_report.m"
  }
#line 348 "det_report.m"
}

#line 346 "det_report.m"
static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
#line 346 "det_report.m"
  MR_Word check_hlds__det_report__EvalMethod_3,
#line 346 "det_report.m"
  MR_Word * check_hlds__det_report__Detism_4,
#line 346 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 346 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr)
#line 346 "det_report.m"
{
#line 346 "det_report.m"
  {
#line 346 "det_report.m"
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s check_hlds__det_report__env;

#line 346 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3 = check_hlds__det_report__EvalMethod_3;
#line 346 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4 = check_hlds__det_report__Detism_4;
#line 346 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont = check_hlds__det_report__cont;
#line 346 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr = check_hlds__det_report__cont_env_ptr;
#line 358 "det_report.m"
    {
#line 358 "det_report.m"
      MR_Integer check_hlds__det_report__slot_0 = (MR_Integer) 0;

#line 358 "det_report.m"
      do
#line 358 "det_report.m"
        {
#line 358 "det_report.m"
          *((check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4) = ((&check_hlds__det_report_vector_common_7[0 + check_hlds__det_report__slot_0]))->check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
#line 358 "det_report.m"
          {
#line 358 "det_report.m"
            check_hlds__det_report__get_valid_dets_2_p_0_1(&check_hlds__det_report__env);
          }
#line 358 "det_report.m"
          check_hlds__det_report__slot_0 = (check_hlds__det_report__slot_0 + (MR_Integer) 1);
#line 358 "det_report.m"
        }
#line 358 "det_report.m"
      while ((check_hlds__det_report__slot_0 < (MR_Integer) 8));
#line 358 "det_report.m"
    }
#line 346 "det_report.m"
  }
#line 346 "det_report.m"
}

#line 328 "det_report.m"
static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
#line 328 "det_report.m"
  MR_Word check_hlds__det_report__DetismDecl_3)
#line 328 "det_report.m"
{
#line 332 "det_report.m"
  {
#line 332 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 332 "det_report.m"
    MR_String check_hlds__det_report__Name_4;

#line 332 "det_report.m"
#line 332 "det_report.m"
    switch (check_hlds__det_report__DetismDecl_3) {
#line 332 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 332 "det_report.m"
      case (MR_Integer) 0:
#line 333 "det_report.m"
        check_hlds__det_report__Name_4 = (MR_String) "determinism declaration";
#line 332 "det_report.m"
        break;
#line 332 "det_report.m"
      case (MR_Integer) 1:
#line 336 "det_report.m"
        check_hlds__det_report__Name_4 = (MR_String) "implicit determinism declaration";
#line 332 "det_report.m"
        break;
#line 332 "det_report.m"
      case (MR_Integer) 2:
#line 339 "det_report.m"
        check_hlds__det_report__Name_4 = (MR_String) "nonexistent determinism declaration";
#line 332 "det_report.m"
        break;
#line 332 "det_report.m"
    }
#line 332 "det_report.m"
    return check_hlds__det_report__Name_4;
#line 332 "det_report.m"
  }
#line 328 "det_report.m"
}

#line 308 "det_report.m"
static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_8,
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__PredId_9,
#line 308 "det_report.m"
  MR_Integer check_hlds__det_report__ProcId_10,
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__PredInfo_11,
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__ProcInfo_12,
#line 308 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_21,
#line 308 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_22)
#line 308 "det_report.m"
{
#line 313 "det_report.m"
  {
#line 313 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 313 "det_report.m"
    MR_Word check_hlds__det_report__Markers_14;

#line 314 "det_report.m"
    {
#line 314 "det_report.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Markers_14);
    }
#line 315 "det_report.m"
    {
#line 315 "det_report.m"
      check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_14, (MR_Integer) 23);
    }
#line 324 "det_report.m"
    if (check_hlds__det_report__succeeded)
#line 316 "det_report.m"
      {
#line 316 "det_report.m"
        MR_Word check_hlds__det_report__Goal_15;
#line 316 "det_report.m"
        MR_Word check_hlds__det_report__VarTypes_16;
#line 316 "det_report.m"
        MR_Word check_hlds__det_report__InstMap0_17;
#line 316 "det_report.m"
        MR_Word check_hlds__det_report__DetInfo0_18;
#line 316 "det_report.m"
        MR_Word check_hlds__det_report__DetInfo_19;
#line 316 "det_report.m"
        MR_Word check_hlds__det_report__RCSSpecs_20;

#line 316 "det_report.m"
        {
#line 316 "det_report.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Goal_15);
        }
#line 317 "det_report.m"
        {
#line 317 "det_report.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarTypes_16);
        }
#line 318 "det_report.m"
        {
#line 318 "det_report.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_report__ProcInfo_12, check_hlds__det_report__ModuleInfo_8, &check_hlds__det_report__InstMap0_17);
        }
#line 319 "det_report.m"
        {
#line 319 "det_report.m"
          check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_report__ModuleInfo_8, check_hlds__det_report__VarTypes_16, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__DetInfo0_18);
        }
#line 321 "det_report.m"
        {
#line 321 "det_report.m"
          check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_15, check_hlds__det_report__InstMap0_17, check_hlds__det_report__DetInfo0_18, &check_hlds__det_report__DetInfo_19);
        }
#line 322 "det_report.m"
        {
#line 322 "det_report.m"
          check_hlds__det_util__det_info_get_error_specs_2_p_0(check_hlds__det_report__DetInfo_19, &check_hlds__det_report__RCSSpecs_20);
        }
#line 323 "det_report.m"
        {
#line 323 "det_report.m"
          *check_hlds__det_report__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__det_report__RCSSpecs_20, check_hlds__det_report__STATE_VARIABLE_Specs_0_21);
        }
#line 316 "det_report.m"
      }
#line 324 "det_report.m"
    else
#line 324 "det_report.m"
      *check_hlds__det_report__STATE_VARIABLE_Specs_22 = check_hlds__det_report__STATE_VARIABLE_Specs_0_21;
#line 313 "det_report.m"
  }
#line 308 "det_report.m"
}

#line 292 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_3(
#line 292 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 292 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 292 "det_report.m"
{
#line 292 "det_report.m"
  {
#line 292 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 292 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 292 "det_report.m"
    MR_String check_hlds__det_report__conv1_HeadVar__2_2;

#line 292 "det_report.m"
    {
#line 292 "det_report.m"
      check_hlds__det_report__conv1_HeadVar__2_2 = parse_tree__prog_out__determinism_to_string_1_f_0(((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 292 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv1_HeadVar__2_2));
#line 292 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 292 "det_report.m"
  }
#line 292 "det_report.m"
}

#line 291 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_1(
#line 291 "det_report.m"
  void * check_hlds__det_report__env_ptr_arg)
#line 291 "det_report.m"
{
#line 291 "det_report.m"
  {
#line 291 "det_report.m"
    struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s *) check_hlds__det_report__env_ptr_arg;

#line 291 "det_report.m"
    *((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4));
#line 291 "det_report.m"
    {
#line 291 "det_report.m"
      ((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont)((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr);
#line 291 "det_report.m"
      return;
    }
#line 291 "det_report.m"
  }
#line 291 "det_report.m"
}

#line 291 "det_report.m"
static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_2(
#line 291 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 291 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_1,
#line 291 "det_report.m"
  MR_Cont check_hlds__det_report__cont,
#line 291 "det_report.m"
  void * check_hlds__det_report__cont_env_ptr)
#line 291 "det_report.m"
{
#line 291 "det_report.m"
  {
#line 291 "det_report.m"
    struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s check_hlds__det_report__env;

#line 291 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1 = check_hlds__det_report__wrapper_arg_1;
#line 291 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont = check_hlds__det_report__cont;
#line 291 "det_report.m"
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr = check_hlds__det_report__cont_env_ptr;
#line 291 "det_report.m"
    {
#line 291 "det_report.m"
      MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;

#line 291 "det_report.m"
      {
#line 291 "det_report.m"
        check_hlds__det_report__get_valid_dets_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), &(check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4, check_hlds__det_report__check_determinism_8_p_0_1, &check_hlds__det_report__env);
      }
#line 291 "det_report.m"
    }
#line 291 "det_report.m"
  }
#line 291 "det_report.m"
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
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__Cmp_18);
        }
#line 190 "det_report.m"
#line 190 "det_report.m"
        switch (check_hlds__det_report__Cmp_18) {
#line 190 "det_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 190 "det_report.m"
          case (MR_Integer) 3:
#line 190 "det_report.m"
          case (MR_Integer) 0:
#line 252 "det_report.m"
            {
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__Goal_28;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__VarTypes_29;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__InstMap0_30;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__DetInfo0_31;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__DetInfo_32;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__GoalMsgs_33;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__SortedGoalMsgs_34;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__V_51_51;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__V_52_52;
#line 252 "det_report.m"
              MR_String check_hlds__det_report__V_53_53;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__V_66_66;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__DetismDecl_143;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__MessagePieces_144;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__ReportMsgs_145;
#line 252 "det_report.m"
              MR_Word check_hlds__det_report__ReportSpec_146;

#line 253 "det_report.m"
              {
#line 253 "det_report.m"
                hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__DetismDecl_143);
              }
#line 255 "det_report.m"
              {
#line 255 "det_report.m"
                check_hlds__det_report__V_53_53 = check_hlds__det_report__detism_decl_name_1_f_0(check_hlds__det_report__DetismDecl_143);
              }
#line 255 "det_report.m"
              {
#line 255 "det_report.m"
                check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 255 "det_report.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_53_53));
#line 255 "det_report.m"
              }
#line 255 "det_report.m"
              {
#line 255 "det_report.m"
                check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 255 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[9])));
#line 255 "det_report.m"
              }
#line 254 "det_report.m"
              {
#line 254 "det_report.m"
                check_hlds__det_report__MessagePieces_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[73])));
#line 254 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_144, 1) = ((MR_Box) (check_hlds__det_report__V_51_51));
#line 254 "det_report.m"
              }
#line 257 "det_report.m"
              {
#line 257 "det_report.m"
                check_hlds__det_report__report_determinism_problem_7_p_0(check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__MessagePieces_144, check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__ReportMsgs_145);
              }
#line 259 "det_report.m"
              {
#line 259 "det_report.m"
                hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Goal_28);
              }
#line 260 "det_report.m"
              {
#line 260 "det_report.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarTypes_29);
              }
#line 261 "det_report.m"
              {
#line 261 "det_report.m"
                hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_report__ProcInfo_12, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, &check_hlds__det_report__InstMap0_30);
              }
#line 262 "det_report.m"
              {
#line 262 "det_report.m"
                check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__VarTypes_29, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__DetInfo0_31);
              }
#line 264 "det_report.m"
              {
#line 264 "det_report.m"
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_28, check_hlds__det_report__InstMap0_30, check_hlds__det_report__DeclaredDetism_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__DetInfo0_31, &check_hlds__det_report__DetInfo_32, &check_hlds__det_report__GoalMsgs_33);
              }
#line 266 "det_report.m"
              {
#line 266 "det_report.m"
                check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_32, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46);
              }
#line 267 "det_report.m"
              {
#line 267 "det_report.m"
                parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_report__GoalMsgs_33, &check_hlds__det_report__SortedGoalMsgs_34);
              }
#line 269 "det_report.m"
              {
#line 269 "det_report.m"
                check_hlds__det_report__V_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__ReportMsgs_145, check_hlds__det_report__SortedGoalMsgs_34);
              }
#line 268 "det_report.m"
              {
#line 268 "det_report.m"
                check_hlds__det_report__ReportSpec_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 268 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 268 "det_report.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_146, 2) = ((MR_Box) (check_hlds__det_report__V_66_66));
#line 268 "det_report.m"
              }
#line 270 "det_report.m"
              {
#line 270 "det_report.m"
                check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (check_hlds__det_report__ReportSpec_146));
#line 270 "det_report.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_47));
#line 270 "det_report.m"
              }
#line 252 "det_report.m"
            }
#line 190 "det_report.m"
            break;
#line 190 "det_report.m"
          case (MR_Integer) 2:
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
              MR_Word check_hlds__det_report__Status_23;
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
#line 226 "det_report.m"
                                  switch (check_hlds__det_report__WarnAboutInferredErroneous_21) {
#line 226 "det_report.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 226 "det_report.m"
                                    case (MR_Integer) 0:
#line 228 "det_report.m"
                                      {
#line 228 "det_report.m"
                                        check_hlds__det_report__succeeded = (check_hlds__det_report__InferredDetism_16 == (MR_Integer) 6);
#line 228 "det_report.m"
                                        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 228 "det_report.m"
                                      }
#line 226 "det_report.m"
                                      break;
#line 226 "det_report.m"
                                    case (MR_Integer) 1:
#line 225 "det_report.m"
                                      check_hlds__det_report__succeeded = MR_TRUE;
#line 226 "det_report.m"
                                      break;
#line 226 "det_report.m"
                                  }
#line 199 "det_report.m"
                                  if (check_hlds__det_report__succeeded)
#line 199 "det_report.m"
                                    {
#line 234 "det_report.m"
                                      {
#line 234 "det_report.m"
                                        hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Status_23);
                                      }
#line 235 "det_report.m"
                                      {
#line 235 "det_report.m"
                                        check_hlds__det_report__V_73_73 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__det_report__Status_23);
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
#line 246 "det_report.m"
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
                    MR_hl_field(MR_mktag(3), check_hlds__det_report__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
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
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[11])));
#line 239 "det_report.m"
                  }
#line 238 "det_report.m"
                  {
#line 238 "det_report.m"
                    check_hlds__det_report__MessagePieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[74])));
#line 238 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_76_76));
#line 238 "det_report.m"
                  }
#line 241 "det_report.m"
                  {
#line 241 "det_report.m"
                    check_hlds__det_report__report_determinism_problem_7_p_0(check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45, check_hlds__det_report__MessagePieces_25, check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__ReportMsgs_26);
                  }
#line 243 "det_report.m"
                  {
#line 243 "det_report.m"
                    check_hlds__det_report__ReportSpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 243 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 243 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 243 "det_report.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 2) = ((MR_Box) (check_hlds__det_report__ReportMsgs_26));
#line 243 "det_report.m"
                  }
#line 245 "det_report.m"
                  {
#line 245 "det_report.m"
                    check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (check_hlds__det_report__ReportSpec_27));
#line 245 "det_report.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_47));
#line 245 "det_report.m"
                  }
#line 237 "det_report.m"
                }
#line 246 "det_report.m"
              else
#line 246 "det_report.m"
                check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = check_hlds__det_report__STATE_VARIABLE_Specs_0_47;
#line 191 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45;
#line 191 "det_report.m"
            }
#line 190 "det_report.m"
            break;
#line 190 "det_report.m"
          case (MR_Integer) 1:
#line 189 "det_report.m"
            {
#line 189 "det_report.m"
              *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_45;
#line 189 "det_report.m"
              check_hlds__det_report__STATE_VARIABLE_Specs_87_87 = check_hlds__det_report__STATE_VARIABLE_Specs_0_47;
#line 189 "det_report.m"
            }
#line 190 "det_report.m"
            break;
#line 190 "det_report.m"
        }
#line 186 "det_report.m"
      }
#line 274 "det_report.m"
    {
#line 274 "det_report.m"
      check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(*check_hlds__det_report__STATE_VARIABLE_ModuleInfo_46, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__PredInfo_11, check_hlds__det_report__ProcInfo_12, check_hlds__det_report__STATE_VARIABLE_Specs_87_87, &check_hlds__det_report__STATE_VARIABLE_Specs_88_88);
    }
#line 278 "det_report.m"
    {
#line 278 "det_report.m"
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__EvalMethod_35);
    }
#line 279 "det_report.m"
    {
#line 279 "det_report.m"
      check_hlds__det_report__Valid_36 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0(check_hlds__det_report__EvalMethod_35, check_hlds__det_report__InferredDetism_16);
    }
#line 282 "det_report.m"
#line 282 "det_report.m"
    switch (check_hlds__det_report__Valid_36) {
#line 282 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 282 "det_report.m"
      case (MR_Integer) 0:
#line 283 "det_report.m"
        {
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__TypeCtorInfo_149_149;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__TypeCtorInfo_150_150;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__Context_37;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__MainPieces_38;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__Detisms_39;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__DetismStrs_40;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__SortedDetismStrs_41;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__DetismPieces_42;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__VerbosePieces_43;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__ValidSpec_44;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_91_91;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_92_92;
#line 283 "det_report.m"
          MR_String check_hlds__det_report__V_93_93;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_94_94;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_97_97;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_100_100;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_101_101;
#line 283 "det_report.m"
          MR_String check_hlds__det_report__V_102_102;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_109_109;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_111_111;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_114_114;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_117_117;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_118_118;
#line 283 "det_report.m"
          MR_String check_hlds__det_report__V_119_119;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_122_122;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_133_133;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_134_134;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_135_135;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_136_136;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_137_137;
#line 283 "det_report.m"
          MR_Word check_hlds__det_report__V_138_138;
#line 298 "det_report.m"
          MR_Box check_hlds__det_report__conv2_V_119_119;

#line 284 "det_report.m"
          {
#line 284 "det_report.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Context_37);
          }
#line 286 "det_report.m"
          {
#line 286 "det_report.m"
            check_hlds__det_report__V_93_93 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(check_hlds__det_report__EvalMethod_35);
          }
#line 286 "det_report.m"
          {
#line 286 "det_report.m"
            check_hlds__det_report__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 286 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_92_92, 1) = ((MR_Box) (check_hlds__det_report__V_93_93));
#line 286 "det_report.m"
          }
#line 289 "det_report.m"
          {
#line 289 "det_report.m"
            check_hlds__det_report__V_102_102 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_16);
          }
#line 289 "det_report.m"
          {
#line 289 "det_report.m"
            check_hlds__det_report__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 289 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_101_101, 1) = ((MR_Box) (check_hlds__det_report__V_102_102));
#line 289 "det_report.m"
          }
#line 289 "det_report.m"
          {
#line 289 "det_report.m"
            check_hlds__det_report__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_100_100, 0) = ((MR_Box) (check_hlds__det_report__V_101_101));
#line 289 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13])));
#line 289 "det_report.m"
          }
#line 288 "det_report.m"
          {
#line 288 "det_report.m"
            check_hlds__det_report__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_97_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[77])));
#line 288 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_97_97, 1) = ((MR_Box) (check_hlds__det_report__V_100_100));
#line 288 "det_report.m"
          }
#line 287 "det_report.m"
          {
#line 287 "det_report.m"
            check_hlds__det_report__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[76])));
#line 287 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_94_94, 1) = ((MR_Box) (check_hlds__det_report__V_97_97));
#line 287 "det_report.m"
          }
#line 286 "det_report.m"
          {
#line 286 "det_report.m"
            check_hlds__det_report__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_91_91, 0) = ((MR_Box) (check_hlds__det_report__V_92_92));
#line 286 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_91_91, 1) = ((MR_Box) (check_hlds__det_report__V_94_94));
#line 286 "det_report.m"
          }
#line 285 "det_report.m"
          {
#line 285 "det_report.m"
            check_hlds__det_report__MainPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__MainPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[75])));
#line 285 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__MainPieces_38, 1) = ((MR_Box) (check_hlds__det_report__V_91_91));
#line 285 "det_report.m"
          }
#line 291 "det_report.m"
          {
#line 291 "det_report.m"
            check_hlds__det_report__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 291 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_109_109, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_6[0]));
#line 291 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_109_109, 1) = ((MR_Box) (check_hlds__det_report__check_determinism_8_p_0_2));
#line 291 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_109_109, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 291 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_109_109, 3) = ((MR_Box) (check_hlds__det_report__EvalMethod_35));
#line 291 "det_report.m"
          }
#line 14002 "check_hlds.det_report.c"
          check_hlds__det_report__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0;
#line 291 "det_report.m"
          {
#line 291 "det_report.m"
            mercury__solutions__solutions_2_p_1(check_hlds__det_report__TypeCtorInfo_149_149, check_hlds__det_report__V_109_109, &check_hlds__det_report__Detisms_39);
          }
#line 14009 "check_hlds.det_report.c"
          check_hlds__det_report__TypeCtorInfo_150_150 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "det_report.m"
          {
#line 292 "det_report.m"
            check_hlds__det_report__DetismStrs_40 = mercury__list__map_2_f_0(check_hlds__det_report__TypeCtorInfo_149_149, check_hlds__det_report__TypeCtorInfo_150_150, (MR_Word) &check_hlds__det_report_scalar_common_1[2], check_hlds__det_report__Detisms_39);
          }
#line 293 "det_report.m"
          {
#line 293 "det_report.m"
            mercury__list__sort_2_p_0(check_hlds__det_report__TypeCtorInfo_150_150, check_hlds__det_report__DetismStrs_40, &check_hlds__det_report__SortedDetismStrs_41);
          }
#line 294 "det_report.m"
          {
#line 294 "det_report.m"
            check_hlds__det_report__DetismPieces_42 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_report__SortedDetismStrs_41);
          }
#line 298 "det_report.m"
          {
#line 298 "det_report.m"
            check_hlds__det_report__conv2_V_119_119 = parse_tree__error_util__choose_number_3_f_0(check_hlds__det_report__TypeCtorInfo_149_149, check_hlds__det_report__TypeCtorInfo_150_150, check_hlds__det_report__Detisms_39, ((MR_Box) ((MR_String) "determinism")), ((MR_Box) ((MR_String) "determinisms")));
          }
#line 298 "det_report.m"
          check_hlds__det_report__V_119_119 = ((MR_String) check_hlds__det_report__conv2_V_119_119);
#line 298 "det_report.m"
          {
#line 298 "det_report.m"
            check_hlds__det_report__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 298 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_118_118, 1) = ((MR_Box) (check_hlds__det_report__V_119_119));
#line 298 "det_report.m"
          }
#line 299 "det_report.m"
          {
#line 299 "det_report.m"
            check_hlds__det_report__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[65])));
#line 299 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_122_122, 1) = ((MR_Box) (check_hlds__det_report__DetismPieces_42));
#line 299 "det_report.m"
          }
#line 298 "det_report.m"
          {
#line 298 "det_report.m"
            check_hlds__det_report__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_117_117, 0) = ((MR_Box) (check_hlds__det_report__V_118_118));
#line 298 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_117_117, 1) = ((MR_Box) (check_hlds__det_report__V_122_122));
#line 298 "det_report.m"
          }
#line 297 "det_report.m"
          {
#line 297 "det_report.m"
            check_hlds__det_report__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[79])));
#line 297 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_114_114, 1) = ((MR_Box) (check_hlds__det_report__V_117_117));
#line 297 "det_report.m"
          }
#line 296 "det_report.m"
          {
#line 296 "det_report.m"
            check_hlds__det_report__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_111_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[78])));
#line 296 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_111_111, 1) = ((MR_Box) (check_hlds__det_report__V_114_114));
#line 296 "det_report.m"
          }
#line 300 "det_report.m"
          {
#line 300 "det_report.m"
            check_hlds__det_report__VerbosePieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_111_111, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[13]));
          }
#line 303 "det_report.m"
          {
#line 303 "det_report.m"
            check_hlds__det_report__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 303 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_136_136, 0) = ((MR_Box) (check_hlds__det_report__MainPieces_38));
#line 303 "det_report.m"
          }
#line 304 "det_report.m"
          {
#line 304 "det_report.m"
            check_hlds__det_report__V_138_138 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_138_138, 0) = ((MR_Box) ((MR_Integer) 0));
#line 304 "det_report.m"
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_138_138, 1) = ((MR_Box) (check_hlds__det_report__VerbosePieces_43));
#line 304 "det_report.m"
          }
#line 304 "det_report.m"
          {
#line 304 "det_report.m"
            check_hlds__det_report__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_137_137, 0) = ((MR_Box) (check_hlds__det_report__V_138_138));
#line 304 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "det_report.m"
          }
#line 303 "det_report.m"
          {
#line 303 "det_report.m"
            check_hlds__det_report__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_135_135, 0) = ((MR_Box) (check_hlds__det_report__V_136_136));
#line 303 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_135_135, 1) = ((MR_Box) (check_hlds__det_report__V_137_137));
#line 303 "det_report.m"
          }
#line 302 "det_report.m"
          {
#line 302 "det_report.m"
            check_hlds__det_report__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_134_134, 0) = ((MR_Box) (check_hlds__det_report__Context_37));
#line 302 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_134_134, 1) = ((MR_Box) (check_hlds__det_report__V_135_135));
#line 302 "det_report.m"
          }
#line 304 "det_report.m"
          {
#line 304 "det_report.m"
            check_hlds__det_report__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_133_133, 0) = ((MR_Box) (check_hlds__det_report__V_134_134));
#line 304 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "det_report.m"
          }
#line 301 "det_report.m"
          {
#line 301 "det_report.m"
            check_hlds__det_report__ValidSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 301 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_44, 2) = ((MR_Box) (check_hlds__det_report__V_133_133));
#line 301 "det_report.m"
          }
#line 305 "det_report.m"
          {
#line 305 "det_report.m"
            MR_Word base;
#line 305 "det_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "det_report.m"
            *check_hlds__det_report__STATE_VARIABLE_Specs_48 = base;
#line 305 "det_report.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__ValidSpec_44));
#line 305 "det_report.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_88_88));
#line 305 "det_report.m"
          }
#line 283 "det_report.m"
        }
#line 282 "det_report.m"
        break;
#line 282 "det_report.m"
      case (MR_Integer) 1:
#line 281 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_Specs_48 = check_hlds__det_report__STATE_VARIABLE_Specs_88_88;
#line 282 "det_report.m"
        break;
#line 282 "det_report.m"
    }
#line 180 "det_report.m"
  }
#line 176 "det_report.m"
}

#line 1625 "det_report.m"
static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
#line 1625 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1625 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1,
#line 1625 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_2,
#line 1625 "det_report.m"
  MR_Box * check_hlds__det_report__wrapper_arg_3)
#line 1625 "det_report.m"
{
#line 1625 "det_report.m"
  {
#line 1625 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1625 "det_report.m"
    MR_Word check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8;

#line 1625 "det_report.m"
    {
#line 1625 "det_report.m"
      check_hlds__det_report__restore_option_3_p_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2), &check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8);
    }
#line 1625 "det_report.m"
    *check_hlds__det_report__wrapper_arg_3 = ((MR_Box) (check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8));
#line 1625 "det_report.m"
  }
#line 1625 "det_report.m"
}

#line 117 "det_report.m"
void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0(
#line 117 "det_report.m"
  MR_Word check_hlds__det_report__OptionsToRestore_4,
#line 117 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_6,
#line 117 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_7)
#line 117 "det_report.m"
{
#line 1624 "det_report.m"
  {
#line 1624 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1625 "det_report.m"
    MR_Box check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7;

#line 1625 "det_report.m"
    {
#line 1625 "det_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__det_report_scalar_common_1[0], (MR_Word) &libs__globals__libs__globals__type_ctor_info_globals_0, (MR_Word) &check_hlds__det_report_scalar_common_1[1], check_hlds__det_report__OptionsToRestore_4, ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Globals_0_6)), &check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7);
    }
#line 1625 "det_report.m"
    *check_hlds__det_report__STATE_VARIABLE_Globals_7 = ((MR_Word) check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7);
#line 1624 "det_report.m"
  }
#line 117 "det_report.m"
}

#line 114 "det_report.m"
void MR_CALL 
check_hlds__det_report__disable_det_warnings_3_p_0(
#line 114 "det_report.m"
  MR_Word * check_hlds__det_report__OptionsToRestore_4,
#line 114 "det_report.m"
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_8,
#line 114 "det_report.m"
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_9)
#line 114 "det_report.m"
{
#line 1614 "det_report.m"
  {
#line 1614 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1614 "det_report.m"
    MR_Word check_hlds__det_report__WarnSimple_6;
#line 1614 "det_report.m"
    MR_Word check_hlds__det_report__WarnDeclsTooLax_7;
#line 1614 "det_report.m"
    MR_Word check_hlds__det_report__V_13_13;
#line 1614 "det_report.m"
    MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_14_14;
#line 1614 "det_report.m"
    MR_Word check_hlds__det_report__V_20_20;
#line 1614 "det_report.m"
    MR_Word check_hlds__det_report__V_22_22;
#line 1614 "det_report.m"
    MR_Word check_hlds__det_report__V_23_23;

#line 1615 "det_report.m"
    {
#line 1615 "det_report.m"
      libs__globals__lookup_option_3_p_0(check_hlds__det_report__STATE_VARIABLE_Globals_0_8, (MR_Integer) 19, &check_hlds__det_report__WarnSimple_6);
    }
#line 1616 "det_report.m"
    {
#line 1616 "det_report.m"
      libs__globals__lookup_option_3_p_0(check_hlds__det_report__STATE_VARIABLE_Globals_0_8, (MR_Integer) 7, &check_hlds__det_report__WarnDeclsTooLax_7);
    }
#line 1617 "det_report.m"
    check_hlds__det_report__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[2]);
#line 1617 "det_report.m"
    {
#line 1617 "det_report.m"
      libs__globals__set_option_4_p_0((MR_Integer) 19, check_hlds__det_report__V_13_13, check_hlds__det_report__STATE_VARIABLE_Globals_0_8, &check_hlds__det_report__STATE_VARIABLE_Globals_14_14);
    }
#line 1618 "det_report.m"
    {
#line 1618 "det_report.m"
      libs__globals__set_option_4_p_0((MR_Integer) 7, check_hlds__det_report__V_13_13, check_hlds__det_report__STATE_VARIABLE_Globals_14_14, check_hlds__det_report__STATE_VARIABLE_Globals_9);
    }
#line 1620 "det_report.m"
    {
#line 1620 "det_report.m"
      check_hlds__det_report__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1620 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 0) = ((MR_Box) ((MR_Integer) 19));
#line 1620 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 1) = ((MR_Box) (check_hlds__det_report__WarnSimple_6));
#line 1620 "det_report.m"
    }
#line 1621 "det_report.m"
    {
#line 1621 "det_report.m"
      check_hlds__det_report__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1621 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_23_23, 0) = ((MR_Box) ((MR_Integer) 7));
#line 1621 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_23_23, 1) = ((MR_Box) (check_hlds__det_report__WarnDeclsTooLax_7));
#line 1621 "det_report.m"
    }
#line 1622 "det_report.m"
    {
#line 1622 "det_report.m"
      check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1622 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__V_23_23));
#line 1622 "det_report.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1622 "det_report.m"
    }
#line 1620 "det_report.m"
    {
#line 1620 "det_report.m"
      MR_Word base;
#line 1620 "det_report.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1620 "det_report.m"
      *check_hlds__det_report__OptionsToRestore_4 = base;
#line 1620 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_20_20));
#line 1620 "det_report.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__V_22_22));
#line 1620 "det_report.m"
    }
#line 1614 "det_report.m"
  }
#line 114 "det_report.m"
}

#line 104 "det_report.m"
MR_Word MR_CALL 
check_hlds__det_report__det_report_seen_call_id_2_f_0(
#line 104 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_4,
#line 104 "det_report.m"
  MR_Word check_hlds__det_report__SeenCall_5)
#line 104 "det_report.m"
{
#line 1601 "det_report.m"
  {
#line 1601 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1601 "det_report.m"
    MR_Word check_hlds__det_report__Pieces_6;

#line 1601 "det_report.m"
    if ((check_hlds__det_report__SeenCall_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1606 "det_report.m"
      {
#line 1607 "det_report.m"
        check_hlds__det_report__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[71]);
#line 1606 "det_report.m"
      }
#line 1601 "det_report.m"
    else
#line 1601 "det_report.m"
      {
#line 1601 "det_report.m"
        MR_Word check_hlds__det_report__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__SeenCall_5, (MR_Integer) 0)));
#line 1601 "det_report.m"
        MR_Word check_hlds__det_report__PredPieces_9;
#line 1601 "det_report.m"
        MR_Integer check_hlds__det_report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__SeenCall_5, (MR_Integer) 1)));

#line 1602 "det_report.m"
        {
#line 1602 "det_report.m"
          check_hlds__det_report__PredPieces_9 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_report__ModuleInfo_4, (MR_Integer) 0, check_hlds__det_report__PredId_7);
        }
#line 1604 "det_report.m"
        {
#line 1604 "det_report.m"
          check_hlds__det_report__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[72])));
#line 1604 "det_report.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_6, 1) = ((MR_Box) (check_hlds__det_report__PredPieces_9));
#line 1604 "det_report.m"
        }
#line 1601 "det_report.m"
      }
#line 1601 "det_report.m"
    return check_hlds__det_report__Pieces_6;
#line 1601 "det_report.m"
  }
#line 104 "det_report.m"
}

#line 1556 "det_report.m"
static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
#line 1556 "det_report.m"
  MR_Box check_hlds__det_report__closure_arg,
#line 1556 "det_report.m"
  MR_Box check_hlds__det_report__wrapper_arg_1)
#line 1556 "det_report.m"
{
#line 1556 "det_report.m"
  {
#line 1556 "det_report.m"
    MR_Box check_hlds__det_report__wrapper_arg_2;
#line 1556 "det_report.m"
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
#line 1556 "det_report.m"
    MR_Word check_hlds__det_report__conv0_Msg_8;

#line 1556 "det_report.m"
    {
#line 1556 "det_report.m"
      check_hlds__det_report__conv0_Msg_8 = check_hlds__det_report__failing_context_description_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
#line 1556 "det_report.m"
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_Msg_8));
#line 1556 "det_report.m"
    return check_hlds__det_report__wrapper_arg_2;
#line 1556 "det_report.m"
  }
#line 1556 "det_report.m"
}

#line 99 "det_report.m"
MR_Word MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0(
#line 99 "det_report.m"
  MR_Word check_hlds__det_report__ModuleInfo_5,
#line 99 "det_report.m"
  MR_Word check_hlds__det_report__VarSet_6,
#line 99 "det_report.m"
  MR_Word check_hlds__det_report__FailingContexts_7)
#line 99 "det_report.m"
{
#line 1555 "det_report.m"
  {
#line 1555 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1555 "det_report.m"
    MR_Word check_hlds__det_report__HeadVar__4_4;
#line 1555 "det_report.m"
    MR_Word check_hlds__det_report__V_8_8;

#line 1556 "det_report.m"
    {
#line 1556 "det_report.m"
      check_hlds__det_report__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1556 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_4[0]));
#line 1556 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 1) = ((MR_Box) (check_hlds__det_report__failing_contexts_description_3_f_0_1));
#line 1556 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1556 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 3) = ((MR_Box) (check_hlds__det_report__ModuleInfo_5));
#line 1556 "det_report.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 4) = ((MR_Box) (check_hlds__det_report__VarSet_6));
#line 1556 "det_report.m"
    }
#line 1556 "det_report.m"
    {
#line 1556 "det_report.m"
      check_hlds__det_report__HeadVar__4_4 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_8_8, check_hlds__det_report__FailingContexts_7);
    }
#line 1555 "det_report.m"
    return check_hlds__det_report__HeadVar__4_4;
#line 1555 "det_report.m"
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
#line 1549 "det_report.m"
  {
#line 1549 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 1549 "det_report.m"
    MR_String check_hlds__det_report__HeadVar__2_2;

#line 1549 "det_report.m"
#line 1549 "det_report.m"
    switch (check_hlds__det_report__HeadVar__1_1) {
#line 1549 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1549 "det_report.m"
      case (MR_Integer) 1:
#line 1551 "det_report.m"
        check_hlds__det_report__HeadVar__2_2 = (MR_String) "promise_equivalent_solution_sets";
#line 1549 "det_report.m"
        break;
#line 1549 "det_report.m"
      case (MR_Integer) 2:
#line 1553 "det_report.m"
        check_hlds__det_report__HeadVar__2_2 = (MR_String) "arbitrary";
#line 1549 "det_report.m"
        break;
#line 1549 "det_report.m"
      case (MR_Integer) 0:
#line 1549 "det_report.m"
        check_hlds__det_report__HeadVar__2_2 = (MR_String) "promise_equivalent_solutions";
#line 1549 "det_report.m"
        break;
#line 1549 "det_report.m"
    }
#line 1549 "det_report.m"
    return check_hlds__det_report__HeadVar__2_2;
#line 1549 "det_report.m"
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
#line 764 "det_report.m"
  {
#line 764 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;

#line 764 "det_report.m"
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "det_report.m"
      {
#line 764 "det_report.m"
        *check_hlds__det_report__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 764 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
#line 764 "det_report.m"
      }
#line 764 "det_report.m"
    else
#line 766 "det_report.m"
      {
#line 766 "det_report.m"
        MR_Word check_hlds__det_report__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
#line 766 "det_report.m"
        MR_Word check_hlds__det_report__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
#line 766 "det_report.m"
        MR_Word check_hlds__det_report__Msgs1_21;
#line 766 "det_report.m"
        MR_Word check_hlds__det_report__InstMap1_22;
#line 766 "det_report.m"
        MR_Word check_hlds__det_report__Msgs2_23;
#line 766 "det_report.m"
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26;

#line 767 "det_report.m"
        {
#line 767 "det_report.m"
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26, &check_hlds__det_report__Msgs1_21);
        }
#line 769 "det_report.m"
        {
#line 769 "det_report.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__HeadVar__2_2, &check_hlds__det_report__InstMap1_22);
        }
#line 770 "det_report.m"
        {
#line 770 "det_report.m"
          check_hlds__det_report__det_diagnose_conj_7_p_0(check_hlds__det_report__Goals_15, check_hlds__det_report__InstMap1_22, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26, check_hlds__det_report__STATE_VARIABLE_DetInfo_6, &check_hlds__det_report__Msgs2_23);
        }
#line 772 "det_report.m"
        {
#line 772 "det_report.m"
          *check_hlds__det_report__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_21, check_hlds__det_report__Msgs2_23);
        }
#line 766 "det_report.m"
      }
#line 764 "det_report.m"
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
#line 456 "det_report.m"
  {
#line 456 "det_report.m"
    MR_bool check_hlds__det_report__succeeded;
#line 456 "det_report.m"
    MR_Word check_hlds__det_report__Cmp_14;

#line 457 "det_report.m"
    {
#line 457 "det_report.m"
      parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__InferredDetism_9, &check_hlds__det_report__Cmp_14);
    }
#line 480 "det_report.m"
#line 480 "det_report.m"
    switch (check_hlds__det_report__Cmp_14) {
#line 480 "det_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 480 "det_report.m"
      case (MR_Integer) 3:
#line 480 "det_report.m"
      case (MR_Integer) 0:
#line 461 "det_report.m"
        {
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__TypeCtorInfo_76_76;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__PredId_15;
#line 461 "det_report.m"
          MR_Integer check_hlds__det_report__ProcId_16;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__Context_17;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__ModuleInfo_18;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__PredPieces_19;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__Pieces_20;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__GoalMsgs_21;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__SortedGoalMsgs_22;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__Spec_23;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_27_27;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_32_32;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_33_33;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_36_36;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_38_38;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_41_41;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_43_43;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_46_46;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_47_47;
#line 461 "det_report.m"
          MR_String check_hlds__det_report__V_48_48;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_49_49;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_52_52;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_55_55;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_56_56;
#line 461 "det_report.m"
          MR_String check_hlds__det_report__V_57_57;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_65_65;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_68_68;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_69_69;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_70_70;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_71_71;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__V_72_72;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__GoalExpr_86;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__GoalInfo_87;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__Actual_88;
#line 461 "det_report.m"
          MR_Word check_hlds__det_report__CompareResult_89;

#line 462 "det_report.m"
          {
#line 462 "det_report.m"
            check_hlds__det_util__det_info_get_pred_id_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__PredId_15);
          }
#line 463 "det_report.m"
          {
#line 463 "det_report.m"
            check_hlds__det_util__det_info_get_proc_id_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__ProcId_16);
          }
#line 464 "det_report.m"
          {
#line 464 "det_report.m"
            check_hlds__det_report__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
          }
#line 465 "det_report.m"
          {
#line 465 "det_report.m"
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
#line 466 "det_report.m"
          {
#line 466 "det_report.m"
            check_hlds__det_report__PredPieces_19 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_report__ModuleInfo_18, (MR_Integer) 1, check_hlds__det_report__V_27_27);
          }
#line 14763 "check_hlds.det_report.c"
          check_hlds__det_report__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 471 "det_report.m"
          {
#line 471 "det_report.m"
            check_hlds__det_report__V_48_48 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__DeclaredDetism_8);
          }
#line 471 "det_report.m"
          {
#line 471 "det_report.m"
            check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
#line 471 "det_report.m"
          }
#line 473 "det_report.m"
          {
#line 473 "det_report.m"
            check_hlds__det_report__V_57_57 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_9);
          }
#line 473 "det_report.m"
          {
#line 473 "det_report.m"
            check_hlds__det_report__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_56_56, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
#line 473 "det_report.m"
          }
#line 473 "det_report.m"
          {
#line 473 "det_report.m"
            check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
#line 473 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[7])));
#line 473 "det_report.m"
          }
#line 472 "det_report.m"
          {
#line 472 "det_report.m"
            check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[69])));
#line 472 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_55_55));
#line 472 "det_report.m"
          }
#line 471 "det_report.m"
          {
#line 471 "det_report.m"
            check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68])));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
#line 471 "det_report.m"
          }
#line 471 "det_report.m"
          {
#line 471 "det_report.m"
            check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
#line 471 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
#line 471 "det_report.m"
          }
#line 470 "det_report.m"
          {
#line 470 "det_report.m"
            check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[67])));
#line 470 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
#line 470 "det_report.m"
          }
#line 469 "det_report.m"
          {
#line 469 "det_report.m"
            check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 469 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
#line 469 "det_report.m"
          }
#line 469 "det_report.m"
          {
#line 469 "det_report.m"
            check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[66])));
#line 469 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
#line 469 "det_report.m"
          }
#line 468 "det_report.m"
          {
#line 468 "det_report.m"
            check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 468 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_38_38));
#line 468 "det_report.m"
          }
#line 468 "det_report.m"
          {
#line 468 "det_report.m"
            check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[65])));
#line 468 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
#line 468 "det_report.m"
          }
#line 468 "det_report.m"
          {
#line 468 "det_report.m"
            check_hlds__det_report__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_76_76, check_hlds__det_report__PredPieces_19, check_hlds__det_report__V_33_33);
          }
#line 468 "det_report.m"
          {
#line 468 "det_report.m"
            check_hlds__det_report__Pieces_20 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_76_76, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[64]), check_hlds__det_report__V_32_32);
          }
#line 516 "det_report.m"
          check_hlds__det_report__GoalExpr_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_10, (MR_Integer) 0)));
#line 516 "det_report.m"
          check_hlds__det_report__GoalInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_10, (MR_Integer) 1)));
#line 517 "det_report.m"
          {
#line 517 "det_report.m"
            check_hlds__det_report__Actual_88 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_87);
          }
#line 518 "det_report.m"
          {
#line 518 "det_report.m"
            parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__Actual_88, &check_hlds__det_report__CompareResult_89);
          }
#line 525 "det_report.m"
#line 525 "det_report.m"
          switch (check_hlds__det_report__CompareResult_89) {
#line 525 "det_report.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 525 "det_report.m"
            case (MR_Integer) 3:
#line 525 "det_report.m"
            case (MR_Integer) 0:
#line 523 "det_report.m"
              {
#line 523 "det_report.m"
                check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_86, check_hlds__det_report__GoalInfo_87, check_hlds__det_report__InstMap0_12, check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__Actual_88, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__STATE_VARIABLE_DetInfo_65_65, &check_hlds__det_report__GoalMsgs_21);
              }
#line 525 "det_report.m"
              break;
#line 525 "det_report.m"
            case (MR_Integer) 2:
#line 525 "det_report.m"
            case (MR_Integer) 1:
#line 528 "det_report.m"
              {
#line 529 "det_report.m"
                check_hlds__det_report__GoalMsgs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "det_report.m"
                check_hlds__det_report__STATE_VARIABLE_DetInfo_65_65 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
#line 528 "det_report.m"
              }
#line 525 "det_report.m"
              break;
#line 525 "det_report.m"
          }
#line 476 "det_report.m"
          {
#line 476 "det_report.m"
            parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_report__GoalMsgs_21, &check_hlds__det_report__SortedGoalMsgs_22);
          }
#line 478 "det_report.m"
          {
#line 478 "det_report.m"
            check_hlds__det_report__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 478 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (check_hlds__det_report__Pieces_20));
#line 478 "det_report.m"
          }
#line 478 "det_report.m"
          {
#line 478 "det_report.m"
            check_hlds__det_report__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_71_71, 0) = ((MR_Box) (check_hlds__det_report__V_72_72));
#line 478 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "det_report.m"
          }
#line 478 "det_report.m"
          {
#line 478 "det_report.m"
            check_hlds__det_report__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_70_70, 0) = ((MR_Box) (check_hlds__det_report__Context_17));
#line 478 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_70_70, 1) = ((MR_Box) (check_hlds__det_report__V_71_71));
#line 478 "det_report.m"
          }
#line 478 "det_report.m"
          {
#line 478 "det_report.m"
            check_hlds__det_report__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_69_69, 0) = ((MR_Box) (check_hlds__det_report__V_70_70));
#line 478 "det_report.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "det_report.m"
          }
#line 478 "det_report.m"
          {
#line 478 "det_report.m"
            check_hlds__det_report__V_68_68 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_69_69, check_hlds__det_report__SortedGoalMsgs_22);
          }
#line 477 "det_report.m"
          {
#line 477 "det_report.m"
            check_hlds__det_report__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 477 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 477 "det_report.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 2) = ((MR_Box) (check_hlds__det_report__V_68_68));
#line 477 "det_report.m"
          }
#line 479 "det_report.m"
          {
#line 479 "det_report.m"
            check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__Spec_23, check_hlds__det_report__STATE_VARIABLE_DetInfo_65_65, check_hlds__det_report__STATE_VARIABLE_DetInfo_25);
#line 479 "det_report.m"
            return;
          }
#line 461 "det_report.m"
        }
#line 480 "det_report.m"
        break;
#line 480 "det_report.m"
      case (MR_Integer) 2:
#line 482 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
#line 480 "det_report.m"
        break;
#line 480 "det_report.m"
      case (MR_Integer) 1:
#line 481 "det_report.m"
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
#line 480 "det_report.m"
        break;
#line 480 "det_report.m"
    }
#line 456 "det_report.m"
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
#line 376 "det_report.m"
            MR_Word check_hlds__det_report__DeclaredDetism_38;
#line 376 "det_report.m"
            MR_String check_hlds__det_report__V_42_42;
#line 376 "det_report.m"
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
#line 374 "det_report.m"
            {
#line 374 "det_report.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_report__ProcInfo_19, &check_hlds__det_report__MaybeDetism_37);
            }
#line 376 "det_report.m"
            {
#line 376 "det_report.m"
              check_hlds__det_report__V_42_42 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_report__PredInfo_18);
            }
#line 376 "det_report.m"
            check_hlds__det_report__succeeded = (strcmp(check_hlds__det_report__V_42_42, (MR_String) "main") == 0);
#line 376 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 376 "det_report.m"
              {
#line 377 "det_report.m"
                {
#line 377 "det_report.m"
                  check_hlds__det_report__V_43_43 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__det_report__PredInfo_18);
                }
#line 377 "det_report.m"
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_43_43 == (MR_Integer) 2);
#line 376 "det_report.m"
                if (check_hlds__det_report__succeeded)
#line 376 "det_report.m"
                  {
#line 378 "det_report.m"
                    {
#line 378 "det_report.m"
                      check_hlds__det_report__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__det_report__PredInfo_18);
                    }
#line 376 "det_report.m"
                    if (check_hlds__det_report__succeeded)
#line 376 "det_report.m"
                      {
#line 379 "det_report.m"
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__MaybeDetism_37)) == (MR_mktag((MR_Integer) 1)));
#line 379 "det_report.m"
                        if (check_hlds__det_report__succeeded)
#line 379 "det_report.m"
                          {
#line 379 "det_report.m"
                            check_hlds__det_report__DeclaredDetism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeDetism_37, (MR_Integer) 0)));
#line 382 "det_report.m"
#line 382 "det_report.m"
                            switch (check_hlds__det_report__DeclaredDetism_38) {
#line 382 "det_report.m"
                              default:
#line 382 "det_report.m"
                                check_hlds__det_report__succeeded = MR_FALSE;
#line 382 "det_report.m"
                                break;
#line 382 "det_report.m"
                              case (MR_Integer) 4:
#line 383 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 382 "det_report.m"
                                break;
#line 382 "det_report.m"
                              case (MR_Integer) 0:
#line 381 "det_report.m"
                                check_hlds__det_report__succeeded = MR_TRUE;
#line 382 "det_report.m"
                                break;
#line 382 "det_report.m"
                            }
#line 380 "det_report.m"
                            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
#line 379 "det_report.m"
                          }
#line 376 "det_report.m"
                      }
#line 376 "det_report.m"
                  }
#line 376 "det_report.m"
              }
#line 393 "det_report.m"
            if (check_hlds__det_report__succeeded)
#line 386 "det_report.m"
              {
#line 386 "det_report.m"
                MR_Word check_hlds__det_report__ProcContext_39;
#line 386 "det_report.m"
                MR_Word check_hlds__det_report__Spec_41;
#line 386 "det_report.m"
                MR_Word check_hlds__det_report__V_72_72;
#line 386 "det_report.m"
                MR_Word check_hlds__det_report__V_73_73;

#line 386 "det_report.m"
                {
#line 386 "det_report.m"
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_19, &check_hlds__det_report__ProcContext_39);
                }
#line 391 "det_report.m"
                {
#line 391 "det_report.m"
                  check_hlds__det_report__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_73_73, 0) = ((MR_Box) (check_hlds__det_report__ProcContext_39));
#line 391 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[62])));
#line 391 "det_report.m"
                }
#line 391 "det_report.m"
                {
#line 391 "det_report.m"
                  check_hlds__det_report__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (check_hlds__det_report__V_73_73));
#line 391 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "det_report.m"
                }
#line 390 "det_report.m"
                {
#line 390 "det_report.m"
                  check_hlds__det_report__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 390 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 390 "det_report.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 2) = ((MR_Box) (check_hlds__det_report__V_72_72));
#line 390 "det_report.m"
                }
#line 392 "det_report.m"
                {
#line 392 "det_report.m"
                  check_hlds__det_report__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__det_report__Spec_41));
#line 392 "det_report.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_25_25));
#line 392 "det_report.m"
                }
#line 386 "det_report.m"
              }
#line 393 "det_report.m"
            else
#line 393 "det_report.m"
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
