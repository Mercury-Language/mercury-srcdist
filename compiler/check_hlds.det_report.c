/*
** Automatically generated from `det_report.m'
** by the Mercury compiler,
** version rotd-2016-06-30
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
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_test.mih"
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s {
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12;
  MR_bool check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_65_65;
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18;
  jmp_buf check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_Word check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20;
  MR_Box check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20;
};

struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s {
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3;
  MR_Word * check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4;
  MR_Cont check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont;
  void * check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded;
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5;
};

struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s {
  MR_Box * check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont;
  void * check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0;

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2];

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_1[3];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0[2];

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1];

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0;

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5;

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0[4];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7];

static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0;

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1];

static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3);

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word check_hlds__det_report__STATE_VARIABLE_First_0_27,
  MR_Word check_hlds__det_report__Last_10,
  MR_Word check_hlds__det_report__UnifyContext_12,
  MR_Word check_hlds__det_report__DetInfo_13,
  MR_Word check_hlds__det_report__LHS_14,
  MR_Word check_hlds__det_report__RHS_15,
  MR_Word * check_hlds__det_report__AllPieces_16);

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(
  void * check_hlds__det_report__env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3(
  void * check_hlds__det_report__env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(
  void * check_hlds__det_report__env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(
  void * check_hlds__det_report__env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word check_hlds__det_report__PredId_8,
  MR_Word check_hlds__det_report__PredInfo_10,
  MR_Word check_hlds__det_report__ProcInfo_11,
  MR_Word check_hlds__det_report__ModuleInfo_12,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_27,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_28);

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_7,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_8);

static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
  MR_Word check_hlds__det_report__ModuleInfo_5,
  MR_Word check_hlds__det_report__VarSet_6,
  MR_Word check_hlds__det_report__FailingContext_7);

static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
  MR_Word check_hlds__det_report__Context_8,
  MR_Word check_hlds__det_report__CallUnifyContext_9,
  MR_Word check_hlds__det_report__DetInfo_10,
  MR_Word check_hlds__det_report__PredId_11,
  MR_Integer check_hlds__det_report__ProcId_12,
  MR_Word * check_hlds__det_report__InitMsgs_13,
  MR_Word * check_hlds__det_report__StartingPieces_14);

static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
  MR_Word check_hlds__det_report__VarSet_4,
  MR_Word check_hlds__det_report__HeadVar__2_2);

static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
  MR_Word check_hlds__det_report__DetInfo_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word * check_hlds__det_report__HeadVar__3_3);

static void MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_2_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word * check_hlds__det_report__HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3);

static void MR_CALL 
check_hlds__det_report__find_uncovered_consids_4_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__CoveredConsIds_2,
  MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4);

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box * check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0(
  MR_Word check_hlds__det_report__DetInfo_7,
  MR_Word check_hlds__det_report__InstMap0_8,
  MR_Word check_hlds__det_report__Var_9,
  MR_Word check_hlds__det_report__Cases_10,
  MR_String * check_hlds__det_report__VarStr_11,
  MR_Word * check_hlds__det_report__MaybeMissingPieces_12);

static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0_3,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_InstMap_4);

static void MR_CALL 
check_hlds__det_report__reqscope_check_switch_6_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6);

static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_4_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4);

static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_4_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4);

static void MR_CALL 
check_hlds__det_report__generate_error_not_switch_on_required_var_5_p_0(
  MR_Word check_hlds__det_report__RequiredVar_6,
  MR_String check_hlds__det_report__ScopeWord_7,
  MR_Word check_hlds__det_report__ScopeGoalInfo_8,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_17,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_18);

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_for_cases_7_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__HeadVar__5_5,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7);

static MR_Box MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
  MR_Word check_hlds__det_report__RequiredDetism_7,
  MR_Word check_hlds__det_report__Goal_8,
  MR_Word check_hlds__det_report__CheckKind_9,
  MR_Word check_hlds__det_report__InstMap0_10,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_36,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_37);

static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_6_p_0(
  MR_Word check_hlds__det_report__Reason_7,
  MR_Word check_hlds__det_report__SubGoal_8,
  MR_Word check_hlds__det_report__ScopeGoalInfo_9,
  MR_Word check_hlds__det_report__InstMap0_10,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_56);

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_4_p_0(
  MR_Word check_hlds__det_report__Goal_5,
  MR_Word check_hlds__det_report__InstMap0_6,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_76);

static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__InstMap0_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
  MR_Word * check_hlds__det_report__HeadVar__7_7);

static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
  MR_Word check_hlds__det_report__ConsId_3,
  MR_Word * check_hlds__det_report__Match_4);

static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__SwitchVarSynonyms_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word * check_hlds__det_report__HeadVar__5_5,
  MR_Word * check_hlds__det_report__HeadVar__6_6);

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box * check_hlds__det_report__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2,
  MR_Word check_hlds__det_report__MainConsId_3,
  MR_Word check_hlds__det_report__OtherConsIds_4,
  MR_Word * check_hlds__det_report__MainMatch_5,
  MR_Word * check_hlds__det_report__OtherMatches_6);

static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__InstMap0_4,
  MR_Word check_hlds__det_report__HeadVar__5_5,
  MR_Word check_hlds__det_report__HeadVar__6_6,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8,
  MR_Word * check_hlds__det_report__HeadVar__9_9);

static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__HeadVar__5_5,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7,
  MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8,
  MR_Integer * check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9,
  MR_Word * check_hlds__det_report__HeadVar__10_10);

static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
  MR_Word check_hlds__det_report__Desired_6,
  MR_Word check_hlds__det_report__Actual_7,
  MR_Word check_hlds__det_report__Context_8,
  MR_Word check_hlds__det_report__StartingPieces_9,
  MR_Word * check_hlds__det_report__Msgs_10);

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
  MR_Word check_hlds__det_report__GoalExpr_10,
  MR_Word check_hlds__det_report__GoalInfo_11,
  MR_Word check_hlds__det_report__InstMap0_12,
  MR_Word check_hlds__det_report__Desired_13,
  MR_Word check_hlds__det_report__Actual_14,
  MR_Word check_hlds__det_report__SwitchContexts_15,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_110,
  MR_Word * check_hlds__det_report__Msgs_17);

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
  MR_Word check_hlds__det_report__Goal_8,
  MR_Word check_hlds__det_report__InstMap0_9,
  MR_Word check_hlds__det_report__Desired_10,
  MR_Word check_hlds__det_report__SwitchContexts_11,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19,
  MR_Word * check_hlds__det_report__Msgs_13);

static void MR_CALL 
check_hlds__det_report__report_determinism_problem_7_p_0(
  MR_Word check_hlds__det_report__PredId_8,
  MR_Integer check_hlds__det_report__ProcId_9,
  MR_Word check_hlds__det_report__ModuleInfo_10,
  MR_Word check_hlds__det_report__MessagePieces_11,
  MR_Word check_hlds__det_report__DeclaredDetism_12,
  MR_Word check_hlds__det_report__InferredDetism_13,
  MR_Word * check_hlds__det_report__Msgs_14);

static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
  void * check_hlds__det_report__env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
  MR_Word check_hlds__det_report__EvalMethod_3,
  MR_Word * check_hlds__det_report__Detism_4,
  MR_Cont check_hlds__det_report__cont,
  void * check_hlds__det_report__cont_env_ptr);

static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
  MR_Word check_hlds__det_report__DetismDecl_3);

static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(
  MR_Word check_hlds__det_report__ModuleInfo_8,
  MR_Word check_hlds__det_report__PredId_9,
  MR_Integer check_hlds__det_report__ProcId_10,
  MR_Word check_hlds__det_report__PredInfo_11,
  MR_Word check_hlds__det_report__ProcInfo_12,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_22,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_23);

static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_3(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_1(
  void * check_hlds__det_report__env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_2(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Cont check_hlds__det_report__cont,
  void * check_hlds__det_report__cont_env_ptr);

static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0(
  MR_Word check_hlds__det_report__PredId_9,
  MR_Integer check_hlds__det_report__ProcId_10,
  MR_Word check_hlds__det_report__PredInfo_11,
  MR_Word check_hlds__det_report__ProcInfo_12,
  MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_ModuleInfo_47,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_48,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_49);

static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box * check_hlds__det_report__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[5][3];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[146][2];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[5][1];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_6[4][5];


/* sealed */ struct check_hlds__det_report__vector_common_type_7_0_s {
  const MR_Word check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_7_0_s check_hlds__det_report_vector_common_7[8];

/* sealed */ struct check_hlds__det_report__vector_common_type_8_0_s {
  const MR_Word check_hlds__det_report__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_8_0_s check_hlds__det_report_vector_common_8[4];

/* sealed */ struct check_hlds__det_report__vector_common_type_9_0_s {
  const MR_String check_hlds__det_report__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_9_0_s check_hlds__det_report_vector_common_9[8];



static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[5][3] = {
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
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_6[3])),
    ((MR_Box) (check_hlds__det_report__reqscope_check_goal_detism_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[146][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "\'."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not satisfied."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "could be tighter."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[23]))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[22])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not a function."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Most likely, this procedure should be a predicate,"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "arguments would break referential transparency.)"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(Allowing functions to have more than one result for the same"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be determined only by the values of its arguments."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of its arguments; that is, the value of the function\'s result"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a function is supposed to be a true mathematical function"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In Mercury,"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Disjunction has multiple clauses with solutions."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[47])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Negated goal can succeed."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 55 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it is not."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the arm for"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but the actual determinism"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "context,"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6])))
  },
  /* row 69 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Determinism error in lambda expression."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Declared"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inferred"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "higher-order call"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration not allowed for procedure"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The pragma requested is only valid"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for the following"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Determinism declaration not satisfied."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Desired determinism is"))
  },
  /* row 89 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 90 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can fail"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can succeed"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can succeed more than once"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has unknown determinism problem;"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "desired determinism is"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "while actual determinism is"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the switch on"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it does not cover"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the required determinism of the goal"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in this scope is"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but its actual determinism is"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the arms of the switch on"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are required have"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a determinism that is acceptable in a"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the goal inside the"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "scope"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a switch on"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Inside the case"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the switch on"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Some weird unification(or explicit call to a type-specific unify predicate\?)"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Call to"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Unification of"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Fail goal can fail."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Switch on"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is incomplete."))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid determinism for"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the primary mode of a function cannot be"))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[43])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_report_scalar_common_2[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 145 */
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[27])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[50])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[52])))
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

static /* final */ const MR_Box check_hlds__det_report_scalar_common_6[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_eval_method_0)),
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
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[98]) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[100]) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[98]) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[98]) },
};

static /* final */ const struct check_hlds__det_report__vector_common_type_9_0_s check_hlds__det_report_vector_common_9[8] = {
  /* row 0 */   {     (MR_String) "require_switch_arms_det" },
  /* row 1 */   {     (MR_String) "require_switch_arms_semidet" },
  /* row 2 */   {     (MR_String) "require_switch_arms_multi" },
  /* row 3 */   {     (MR_String) "require_switch_arms_nondet" },
  /* row 4 */   {     (MR_String) "require_switch_arms_cc_multi" },
  /* row 5 */   {     (MR_String) "require_switch_arms_cc_nondet" },
  /* row 6 */   {     (MR_String) "require_switch_arms_erroneous" },
  /* row 7 */   {     (MR_String) "require_switch_arms_failure" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_cc_unify_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0 = {
  (MR_String) "require_detism_scope",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_1[3] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1 = {
  (MR_String) "require_detism_switch_arm",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_detism_check_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5
};

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

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_options_to_restore_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____cc_unify_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

    {
      check_hlds__det_report____Compare____cc_unify_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____detism_check_kind_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

    {
      check_hlds__det_report____Compare____detism_check_kind_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

    {
      check_hlds__det_report____Compare____failing_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_goal_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

    {
      check_hlds__det_report____Compare____failing_goal_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____options_to_restore_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

    {
      check_hlds__det_report____Compare____options_to_restore_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____seen_call_id_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

    {
      check_hlds__det_report____Compare____seen_call_id_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____switch_context_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

    {
      check_hlds__det_report____Compare____switch_context_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      check_hlds__det_report__succeeded = check_hlds__det_report____Unify____switch_match_0_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2));
    }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_report__conv0_HeadVar__1_1;

    {
      check_hlds__det_report____Compare____switch_match_0_0(&check_hlds__det_report__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_report__wrapper_arg_2), ((MR_Word) check_hlds__det_report__wrapper_arg_3));
    }
    *check_hlds__det_report__wrapper_arg_1 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word check_hlds__det_report__STATE_VARIABLE_First_0_27,
  MR_Word check_hlds__det_report__Last_10,
  MR_Word check_hlds__det_report__UnifyContext_12,
  MR_Word check_hlds__det_report__DetInfo_13,
  MR_Word check_hlds__det_report__LHS_14,
  MR_Word check_hlds__det_report__RHS_15,
  MR_Word * check_hlds__det_report__AllPieces_16)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__UnifyContextPieces_17;
    MR_Word check_hlds__det_report__ProcInfo_18;
    MR_Word check_hlds__det_report__VarSet_19;
    MR_Word check_hlds__det_report__ModuleInfo_20;
    MR_String check_hlds__det_report__StartWords_21;
    MR_Word check_hlds__det_report__Pieces_26;
    MR_Word check_hlds__det_report__STATE_VARIABLE_First_28_28;
    MR_String check_hlds__det_report__V_22_22;

    {
      hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(check_hlds__det_report__STATE_VARIABLE_First_0_27, &check_hlds__det_report__STATE_VARIABLE_First_28_28, check_hlds__det_report__UnifyContext_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__UnifyContextPieces_17);
    }
    {
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_13, &check_hlds__det_report__ProcInfo_18);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_18, &check_hlds__det_report__VarSet_19);
    }
    {
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_13, &check_hlds__det_report__ModuleInfo_20);
    }
    switch (check_hlds__det_report__Last_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (check_hlds__det_report__STATE_VARIABLE_First_28_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__det_report__StartWords_21 = (MR_String) "Unification";
            break;
          case (MR_Integer) 1:
            check_hlds__det_report__StartWords_21 = (MR_String) "unification";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (check_hlds__det_report__STATE_VARIABLE_First_28_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__det_report__StartWords_21 = (MR_String) "In unification";
            break;
          case (MR_Integer) 1:
            check_hlds__det_report__StartWords_21 = (MR_String) "in unification";
            break;
        }
        break;
    }
    {
      check_hlds__det_report__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_19, check_hlds__det_report__LHS_14, &check_hlds__det_report__V_22_22);
    }
    if (check_hlds__det_report__succeeded)
      {
        MR_Word check_hlds__det_report__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_String check_hlds__det_report__LHSVarName_23;
        MR_Word check_hlds__det_report__RV_24;
        MR_String check_hlds__det_report__V_25_25;

        {
          check_hlds__det_report__LHSVarName_23 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, check_hlds__det_report__VarSet_19, check_hlds__det_report__LHS_14);
        }
        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__RHS_15)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__RV_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__RHS_15, (MR_Integer) 0)));
            {
              check_hlds__det_report__succeeded = mercury__varset__search_name_3_p_0(check_hlds__det_report__TypeCtorInfo_65_65, check_hlds__det_report__VarSet_19, check_hlds__det_report__RV_24, &check_hlds__det_report__V_25_25);
            }
            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
          }
        if (check_hlds__det_report__succeeded)
          {
            MR_Word check_hlds__det_report__V_30_30;
            MR_Word check_hlds__det_report__V_31_31;
            MR_Word check_hlds__det_report__V_34_34;
            MR_Word check_hlds__det_report__V_35_35;
            MR_String check_hlds__det_report__V_36_36;

            {
              check_hlds__det_report__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_30_30, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
            }
            {
              check_hlds__det_report__V_36_36 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__LHSVarName_23);
            }
            {
              check_hlds__det_report__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_35_35, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
            }
            {
              check_hlds__det_report__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_34_34, 0) = ((MR_Box) (check_hlds__det_report__V_35_35));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_report__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[132])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_31_31, 1) = ((MR_Box) (check_hlds__det_report__V_34_34));
            }
            {
              check_hlds__det_report__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 0) = ((MR_Box) (check_hlds__det_report__V_30_30));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 1) = ((MR_Box) (check_hlds__det_report__V_31_31));
            }
          }
        else
          {
            MR_Word check_hlds__det_report__V_38_38;
            MR_Word check_hlds__det_report__V_39_39;
            MR_Word check_hlds__det_report__V_42_42;
            MR_Word check_hlds__det_report__V_43_43;
            MR_String check_hlds__det_report__V_44_44;
            MR_Word check_hlds__det_report__V_45_45;
            MR_Word check_hlds__det_report__V_48_48;
            MR_Word check_hlds__det_report__V_49_49;
            MR_String check_hlds__det_report__V_50_50;
            MR_String check_hlds__det_report__V_51_51;

            {
              check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_38_38, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
            }
            {
              check_hlds__det_report__V_44_44 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__LHSVarName_23);
            }
            {
              check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_44_44));
            }
            {
              check_hlds__det_report__V_51_51 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(check_hlds__det_report__ModuleInfo_20, check_hlds__det_report__VarSet_19, (MR_Integer) 0, check_hlds__det_report__RHS_15);
            }
            {
              check_hlds__det_report__V_50_50 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_51_51);
            }
            {
              check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_50_50));
            }
            {
              check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__V_49_49));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[95])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
            }
            {
              check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (check_hlds__det_report__V_43_43));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
            }
            {
              check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[145])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_42_42));
            }
            {
              check_hlds__det_report__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 0) = ((MR_Box) (check_hlds__det_report__V_38_38));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
            }
          }
      }
    else
      {
        MR_Word check_hlds__det_report__V_54_54;
        MR_Word check_hlds__det_report__V_55_55;
        MR_Word check_hlds__det_report__V_58_58;
        MR_Word check_hlds__det_report__V_59_59;
        MR_String check_hlds__det_report__V_60_60;
        MR_String check_hlds__det_report__V_61_61;

        {
          check_hlds__det_report__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_54_54, 1) = ((MR_Box) (check_hlds__det_report__StartWords_21));
        }
        {
          check_hlds__det_report__V_61_61 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(check_hlds__det_report__ModuleInfo_20, check_hlds__det_report__VarSet_19, (MR_Integer) 0, check_hlds__det_report__RHS_15);
        }
        {
          check_hlds__det_report__V_60_60 = parse_tree__error_util__add_quotes_1_f_0(check_hlds__det_report__V_61_61);
        }
        {
          check_hlds__det_report__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_59_59, 1) = ((MR_Box) (check_hlds__det_report__V_60_60));
        }
        {
          check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__V_59_59));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[132])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (check_hlds__det_report__V_58_58));
        }
        {
          check_hlds__det_report__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 0) = ((MR_Box) (check_hlds__det_report__V_54_54));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_26, 1) = ((MR_Box) (check_hlds__det_report__V_55_55));
        }
      }
    {
      *check_hlds__det_report__AllPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__UnifyContextPieces_17, check_hlds__det_report__Pieces_26);
    }
  }
}

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(
  void * check_hlds__det_report__env_ptr_arg)
{
  {
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3(
  void * check_hlds__det_report__env_ptr_arg)
{
  {
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

    (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20 = ((MR_Word) (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20);
    {
      check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(check_hlds__det_report__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_2(
  void * check_hlds__det_report__env_ptr_arg)
{
  {
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

    {
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12, (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgMode_20);
    }
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
    if ((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_1(check_hlds__det_report__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(
  void * check_hlds__det_report__env_ptr_arg)
{
  {
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) check_hlds__det_report__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_65_65, &(check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv1_FuncArgMode_20, (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18, check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_3, check_hlds__det_report__env_ptr);
        }
        (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word check_hlds__det_report__PredId_8,
  MR_Word check_hlds__det_report__PredInfo_10,
  MR_Word check_hlds__det_report__ProcInfo_11,
  MR_Word check_hlds__det_report__ModuleInfo_12,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_27,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_28)
{
  {
    struct check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s check_hlds__det_report__env;

    (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12 = check_hlds__det_report__ModuleInfo_12;
    {
      MR_Word check_hlds__det_report__InferredDetism_14;
      MR_Word check_hlds__det_report__PredArgModes_17;
      MR_Word check_hlds__det_report__NumSolns_16;
      MR_Word check_hlds__det_report__V_29_29;
      MR_Word check_hlds__det_report___CanFail_15;
      MR_Word check_hlds__det_report___FuncResultMode_19;
      MR_Box check_hlds__det_report__conv0__FuncResultMode_19;

      {
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__InferredDetism_14);
      }
      {
        check_hlds__det_report__V_29_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__det_report__PredInfo_10);
      }
      (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__V_29_29 == (MR_Integer) 1);
      if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          {
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__InferredDetism_14, &check_hlds__det_report___CanFail_15, &check_hlds__det_report__NumSolns_16);
          }
          (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__NumSolns_16 == (MR_Integer) 0);
          (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
          if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (check_hlds__det_report__NumSolns_16 == (MR_Integer) 1);
              (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
              if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
                {
                  {
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__PredArgModes_17);
                  }
                  (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                  {
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_65_65, check_hlds__det_report__PredArgModes_17, &(check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__FuncArgModes_18, &check_hlds__det_report__conv0__FuncResultMode_19);
                  }
                  check_hlds__det_report___FuncResultMode_19 = ((MR_Word) check_hlds__det_report__conv0__FuncResultMode_19);
                  {
                    check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0_4(&check_hlds__det_report__env);
                  }
                  (check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
                }
            }
        }
      if ((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          MR_Word check_hlds__det_report__TypeCtorInfo_66_66;
          MR_Word check_hlds__det_report__FuncContext_21;
          MR_Word check_hlds__det_report__InstVarSet_22;
          MR_Word check_hlds__det_report__PredModePieces_23;
          MR_Word check_hlds__det_report__MainPieces_24;
          MR_Word check_hlds__det_report__Spec_26;
          MR_Word check_hlds__det_report__V_35_35;
          MR_Word check_hlds__det_report__V_36_36;
          MR_Word check_hlds__det_report__V_39_39;
          MR_Word check_hlds__det_report__V_41_41;
          MR_Word check_hlds__det_report__V_44_44;
          MR_Word check_hlds__det_report__V_45_45;
          MR_String check_hlds__det_report__V_46_46;
          MR_Word check_hlds__det_report__V_55_55;
          MR_Word check_hlds__det_report__V_56_56;
          MR_Word check_hlds__det_report__V_57_57;
          MR_Word check_hlds__det_report__V_58_58;

          {
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__FuncContext_21);
          }
          {
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__det_report__ProcInfo_11, &check_hlds__det_report__InstVarSet_22);
          }
          {
            check_hlds__det_report__PredModePieces_23 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0((check_hlds__det_report__env).check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ModuleInfo_12, (MR_Integer) 1, check_hlds__det_report__PredId_8, check_hlds__det_report__InstVarSet_22, check_hlds__det_report__PredArgModes_17);
          }
          check_hlds__det_report__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            check_hlds__det_report__V_46_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_report__InferredDetism_14);
          }
          {
            check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
          }
          {
            check_hlds__det_report__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_44_44, 0) = ((MR_Box) (check_hlds__det_report__V_45_45));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
          }
          {
            check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[142])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_44_44));
          }
          {
            check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
          }
          {
            check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[72])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_39_39));
          }
          {
            check_hlds__det_report__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_66_66, check_hlds__det_report__PredModePieces_23, check_hlds__det_report__V_36_36);
          }
          {
            check_hlds__det_report__MainPieces_24 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_66_66, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[141]), check_hlds__det_report__V_35_35);
          }
          {
            check_hlds__det_report__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__MainPieces_24));
          }
          {
            check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (check_hlds__det_report__V_58_58));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[144])));
          }
          {
            check_hlds__det_report__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (check_hlds__det_report__FuncContext_21));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_56_56, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
          }
          {
            check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__det_report__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_26, 2) = ((MR_Box) (check_hlds__det_report__V_55_55));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_report__STATE_VARIABLE_Specs_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__Spec_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_27));
          }
        }
      else
        *check_hlds__det_report__STATE_VARIABLE_Specs_28 = check_hlds__det_report__STATE_VARIABLE_Specs_0_27;
    }
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
    if (check_hlds__det_report__succeeded)
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_8_8;

        {
          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_8_8, check_hlds__det_report__V_4_4, check_hlds__det_report__V_6_6);
        }
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_8_8 == (MR_Integer) 0);
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
        if (check_hlds__det_report__succeeded)
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[5], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
    if (check_hlds__det_report__succeeded)
      check_hlds__det_report__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__det_report__TypeInfo_10_10;
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
        }
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__TypeInfo_10_10 = (MR_Word) &check_hlds__det_report_scalar_common_2[5];
            {
              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_10_10, ((MR_Box) (check_hlds__det_report__V_4_4)), ((MR_Box) (check_hlds__det_report__V_6_6)));
            }
          }
      }
    return check_hlds__det_report__succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_12 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
    MR_Integer check_hlds__det_report__CastY_13 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_12 == check_hlds__det_report__CastY_13);
    if (check_hlds__det_report__succeeded)
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__det_report__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_10_10, ((MR_Box) (check_hlds__det_report__V_4_4)), ((MR_Box) (check_hlds__det_report__V_7_7)));
        }
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_10_10 == (MR_Integer) 0);
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
        if (check_hlds__det_report__succeeded)
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_10_10;
        else
          {
            MR_Word check_hlds__det_report__V_11_11;
            MR_Integer check_hlds__det_report__CastX_22 = (MR_Integer) check_hlds__det_report__V_5_5;
            MR_Integer check_hlds__det_report__CastY_23 = (MR_Integer) check_hlds__det_report__V_8_8;

            check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_22 == check_hlds__det_report__CastY_23);
            if (check_hlds__det_report__succeeded)
              {
                check_hlds__det_report__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__V_11_11 = (MR_Integer) 0;
                    check_hlds__det_report__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_5_5, (MR_Integer) 0)));
                MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_5_5, (MR_Integer) 1)));
                MR_Word check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, (MR_Integer) 0)));
                MR_Word check_hlds__det_report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, (MR_Integer) 1)));
                MR_Word check_hlds__det_report__V_21_21;

                {
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_21_21, check_hlds__det_report__V_17_17, check_hlds__det_report__V_19_19);
                }
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_21_21 == (MR_Integer) 0);
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__V_11_11 = check_hlds__det_report__V_21_21;
                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_11_11 == (MR_Integer) 0);
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                  }
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[5], &check_hlds__det_report__V_11_11, ((MR_Box) (check_hlds__det_report__V_18_18)), ((MR_Box) (check_hlds__det_report__V_20_20)));
                    }
                    check_hlds__det_report__succeeded = (check_hlds__det_report__V_11_11 == (MR_Integer) 0);
                    check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                  }
              }
            if (check_hlds__det_report__succeeded)
              *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[3], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_6_6)), ((MR_Box) (check_hlds__det_report__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
    if (check_hlds__det_report__succeeded)
      check_hlds__det_report__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__det_report__TypeInfo_12_12;
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer check_hlds__det_report__CastX_17;
        MR_Integer check_hlds__det_report__CastY_18;

        {
          check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], ((MR_Box) (check_hlds__det_report__V_3_3)), ((MR_Box) (check_hlds__det_report__V_6_6)));
        }
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__CastX_17 = (MR_Integer) check_hlds__det_report__V_4_4;
            check_hlds__det_report__CastY_18 = (MR_Integer) check_hlds__det_report__V_7_7;
            check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_17 == check_hlds__det_report__CastY_18);
            if (check_hlds__det_report__succeeded)
              check_hlds__det_report__succeeded = MR_TRUE;
            else
              {
                MR_Word check_hlds__det_report__TypeInfo_10_20;
                MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_4_4, (MR_Integer) 0)));
                MR_Word check_hlds__det_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_4_4, (MR_Integer) 1)));
                MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_7_7, (MR_Integer) 0)));
                MR_Word check_hlds__det_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_7_7, (MR_Integer) 1)));

                {
                  check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_13_13, check_hlds__det_report__V_15_15);
                }
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__TypeInfo_10_20 = (MR_Word) &check_hlds__det_report_scalar_common_2[5];
                    {
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_10_20, ((MR_Box) (check_hlds__det_report__V_14_14)), ((MR_Box) (check_hlds__det_report__V_16_16)));
                    }
                  }
              }
            if (check_hlds__det_report__succeeded)
              {
                check_hlds__det_report__TypeInfo_12_12 = (MR_Word) &check_hlds__det_report_scalar_common_2[3];
                {
                  check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_12_12, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_8_8)));
                }
              }
          }
      }
    return check_hlds__det_report__succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_13 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
    MR_Integer check_hlds__det_report__CastY_14 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_13 == check_hlds__det_report__CastY_14);
    if (check_hlds__det_report__succeeded)
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Integer check_hlds__det_report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer check_hlds__det_report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__V_8_8;

            {
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__det_report__V_8_8, check_hlds__det_report__V_18_18, check_hlds__det_report__V_6_6);
            }
            check_hlds__det_report__succeeded = (check_hlds__det_report__V_8_8 == (MR_Integer) 0);
            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
            if (check_hlds__det_report__succeeded)
              *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_8_8;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_17_17, check_hlds__det_report__V_7_7);
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
    if (check_hlds__det_report__succeeded)
      check_hlds__det_report__succeeded = MR_TRUE;
    else
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
        MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

        check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_8 == check_hlds__det_report__CastX_7);
      }
    else
      {
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer check_hlds__det_report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_5_5;
        MR_Integer check_hlds__det_report__V_6_6;

        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__det_report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
            {
              check_hlds__det_report__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
            }
            if (check_hlds__det_report__succeeded)
              check_hlds__det_report__succeeded = (check_hlds__det_report__V_4_4 == check_hlds__det_report__V_6_6);
          }
      }
    return check_hlds__det_report__succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__Cast_HeadVar1_4 = check_hlds__det_report__HeadVar__2_2;
    MR_Word check_hlds__det_report__Cast_HeadVar2_5 = check_hlds__det_report__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[2], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__det_report__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__Cast_HeadVar1_3 = check_hlds__det_report__HeadVar__1_1;
    MR_Word check_hlds__det_report__Cast_HeadVar2_4 = check_hlds__det_report__HeadVar__2_2;

    {
      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[2], ((MR_Box) (check_hlds__det_report__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__det_report__Cast_HeadVar2_4)));
    }
    return check_hlds__det_report__succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_119 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
    MR_Integer check_hlds__det_report__CastY_120 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_119 == check_hlds__det_report__CastY_120);
    if (check_hlds__det_report__succeeded)
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__det_report__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__det_report__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_134_134)), ((MR_Box) (check_hlds__det_report__V_5_5)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__det_report__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__det_report__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__det_report__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__det_report__V_36_36;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_36_36, ((MR_Box) (check_hlds__det_report__V_136_136)), ((MR_Box) (check_hlds__det_report__V_34_34)));
                  }
                  check_hlds__det_report__succeeded = (check_hlds__det_report__V_36_36 == (MR_Integer) 0);
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                  if (check_hlds__det_report__succeeded)
                    *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_36_36;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_135_135)), ((MR_Box) (check_hlds__det_report__V_35_35)));
                      }
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__det_report__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word check_hlds__det_report__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__det_report__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word check_hlds__det_report__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word check_hlds__det_report__V_63_63;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_63_63, ((MR_Box) (check_hlds__det_report__V_132_132)), ((MR_Box) (check_hlds__det_report__V_61_61)));
                          }
                          check_hlds__det_report__succeeded = (check_hlds__det_report__V_63_63 == (MR_Integer) 0);
                          check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                          if (check_hlds__det_report__succeeded)
                            *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_63_63;
                          else
                            {
                              parse_tree__prog_data____Compare____cons_id_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_131_131, check_hlds__det_report__V_62_62);
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer check_hlds__det_report__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word check_hlds__det_report__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__det_report__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer check_hlds__det_report__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word check_hlds__det_report__V_90_90;

                          {
                            hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__det_report__V_90_90, check_hlds__det_report__V_130_130, check_hlds__det_report__V_88_88);
                          }
                          check_hlds__det_report__succeeded = (check_hlds__det_report__V_90_90 == (MR_Integer) 0);
                          check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                          if (check_hlds__det_report__succeeded)
                            *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_90_90;
                          else
                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_129_129, check_hlds__det_report__V_89_89);
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__det_report__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__det_report__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word check_hlds__det_report__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            hlds__hlds_goal____Compare____generic_call_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_133_133, check_hlds__det_report__V_109_109);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_23 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
    MR_Integer check_hlds__det_report__CastY_24 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_23 == check_hlds__det_report__CastY_24);
    if (check_hlds__det_report__succeeded)
      check_hlds__det_report__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__det_report__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__det_report__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer check_hlds__det_report__CastX_5 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
                MR_Integer check_hlds__det_report__CastY_6 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

                check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_6 == check_hlds__det_report__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer check_hlds__det_report__CastX_21 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
                MR_Integer check_hlds__det_report__CastY_22 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

                check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_22 == check_hlds__det_report__CastX_21);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__det_report__TypeInfo_29_29;
            MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__V_4_4;

            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__det_report__succeeded)
              {
                check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__det_report__TypeInfo_29_29 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                {
                  check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_29_29, ((MR_Box) (check_hlds__det_report__V_3_3)), ((MR_Box) (check_hlds__det_report__V_4_4)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__det_report__TypeInfo_30_30;
            MR_Word check_hlds__det_report__TypeInfo_31_31;
            MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__V_9_9;
            MR_Word check_hlds__det_report__V_10_10;

            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__det_report__succeeded)
              {
                check_hlds__det_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__det_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__det_report__TypeInfo_30_30 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                {
                  check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_30_30, ((MR_Box) (check_hlds__det_report__V_7_7)), ((MR_Box) (check_hlds__det_report__V_9_9)));
                }
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__TypeInfo_31_31 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                    {
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_31_31, ((MR_Box) (check_hlds__det_report__V_8_8)), ((MR_Box) (check_hlds__det_report__V_10_10)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__det_report__TypeInfo_26_26;
                MR_Word check_hlds__det_report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word check_hlds__det_report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word check_hlds__det_report__V_13_13;
                MR_Word check_hlds__det_report__V_14_14;

                check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
                    check_hlds__det_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
                    check_hlds__det_report__TypeInfo_26_26 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                    {
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_26_26, ((MR_Box) (check_hlds__det_report__V_11_11)), ((MR_Box) (check_hlds__det_report__V_13_13)));
                    }
                    if (check_hlds__det_report__succeeded)
                      {
                        check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_12_12, check_hlds__det_report__V_14_14);
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer check_hlds__det_report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word check_hlds__det_report__V_17_17;
                MR_Integer check_hlds__det_report__V_18_18;

                check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
                    check_hlds__det_report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      check_hlds__det_report__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_report__V_15_15, check_hlds__det_report__V_17_17);
                    }
                    if (check_hlds__det_report__succeeded)
                      check_hlds__det_report__succeeded = (check_hlds__det_report__V_16_16 == check_hlds__det_report__V_18_18);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word check_hlds__det_report__V_20_20;

                check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      check_hlds__det_report__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(check_hlds__det_report__V_19_19, check_hlds__det_report__V_20_20);
                    }
                  }
              }
              break;
          }
          break;
      }
    return check_hlds__det_report__succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_9 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
    MR_Integer check_hlds__det_report__CastY_10 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_9 == check_hlds__det_report__CastY_10);
    if (check_hlds__det_report__succeeded)
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_8_8;

        {
          mercury__term____Compare____context_0_0(&check_hlds__det_report__V_8_8, check_hlds__det_report__V_4_4, check_hlds__det_report__V_6_6);
        }
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_8_8 == (MR_Integer) 0);
        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
        if (check_hlds__det_report__succeeded)
          *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_8_8;
        else
          {
            check_hlds__det_report____Compare____failing_goal_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_5_5, check_hlds__det_report__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
    if (check_hlds__det_report__succeeded)
      check_hlds__det_report__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__det_report__succeeded = mercury__term____Unify____context_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_5_5);
        }
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__succeeded = check_hlds__det_report____Unify____failing_goal_0_0(check_hlds__det_report__V_4_4, check_hlds__det_report__V_6_6);
          }
      }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_22 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
    MR_Integer check_hlds__det_report__CastY_23 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_22 == check_hlds__det_report__CastY_23);
    if (check_hlds__det_report__succeeded)
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word check_hlds__det_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));

            {
              hlds__hlds_goal____Compare____hlds_goal_info_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_28_28, check_hlds__det_report__V_5_5);
            }
          }
        else
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word check_hlds__det_report__V_20_20;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], &check_hlds__det_report__V_20_20, ((MR_Box) (check_hlds__det_report__V_31_31)), ((MR_Box) (check_hlds__det_report__V_17_17)));
            }
            check_hlds__det_report__succeeded = (check_hlds__det_report__V_20_20 == (MR_Integer) 0);
            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
            if (check_hlds__det_report__succeeded)
              *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_20_20;
            else
              {
                MR_Word check_hlds__det_report__V_21_21;

                {
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__det_report__V_21_21, check_hlds__det_report__V_30_30, check_hlds__det_report__V_18_18);
                }
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_21_21 == (MR_Integer) 0);
                check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                if (check_hlds__det_report__succeeded)
                  *check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__V_21_21;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[1], check_hlds__det_report__HeadVar__1_1, ((MR_Box) (check_hlds__det_report__V_29_29)), ((MR_Box) (check_hlds__det_report__V_19_19)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_11 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
    MR_Integer check_hlds__det_report__CastY_12 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_11 == check_hlds__det_report__CastY_12);
    if (check_hlds__det_report__succeeded)
      check_hlds__det_report__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) check_hlds__det_report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_4_4;

        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
            {
              check_hlds__det_report__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_4_4);
            }
          }
      }
    else
      {
        MR_Word check_hlds__det_report__TypeInfo_14_14;
        MR_Word check_hlds__det_report__TypeInfo_16_16;
        MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__det_report__V_8_8;
        MR_Word check_hlds__det_report__V_9_9;
        MR_Word check_hlds__det_report__V_10_10;

        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__det_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__det_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 2)));
            check_hlds__det_report__TypeInfo_14_14 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
            {
              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_14_14, ((MR_Box) (check_hlds__det_report__V_5_5)), ((MR_Box) (check_hlds__det_report__V_8_8)));
            }
            if (check_hlds__det_report__succeeded)
              {
                {
                  check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__V_6_6, check_hlds__det_report__V_9_9);
                }
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__TypeInfo_16_16 = (MR_Word) &check_hlds__det_report_scalar_common_2[1];
                    {
                      check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_16_16, ((MR_Box) (check_hlds__det_report__V_7_7)), ((MR_Box) (check_hlds__det_report__V_10_10)));
                    }
                  }
              }
          }
      }
    return check_hlds__det_report__succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0(
  MR_Word * check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;
    MR_Integer check_hlds__det_report__CastY_9 = (MR_Integer) check_hlds__det_report__HeadVar__3_3;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_8 == check_hlds__det_report__CastY_9);
    if (check_hlds__det_report__succeeded)
      *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word check_hlds__det_report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word check_hlds__det_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));

            {
              hlds__hlds_goal____Compare____unify_context_0_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__V_11_11, check_hlds__det_report__V_5_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Integer check_hlds__det_report__CastX_7 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
    MR_Integer check_hlds__det_report__CastY_8 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

    check_hlds__det_report__succeeded = (check_hlds__det_report__CastX_7 == check_hlds__det_report__CastY_8);
    if (check_hlds__det_report__succeeded)
      check_hlds__det_report__succeeded = MR_TRUE;
    else
    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__det_report__CastX_5 = (MR_Integer) check_hlds__det_report__HeadVar__1_1;
        MR_Integer check_hlds__det_report__CastY_6 = (MR_Integer) check_hlds__det_report__HeadVar__2_2;

        check_hlds__det_report__succeeded = (check_hlds__det_report__CastY_6 == check_hlds__det_report__CastX_5);
      }
    else
      {
        MR_Word check_hlds__det_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__V_4_4;

        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
            {
              check_hlds__det_report__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__det_report__V_3_3, check_hlds__det_report__V_4_4);
            }
          }
      }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_7,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_8)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__det_report__Value_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));

    {
      libs__globals__set_option_4_p_0(check_hlds__det_report__Option_4, check_hlds__det_report__Value_5, check_hlds__det_report__STATE_VARIABLE_Globals_0_7, check_hlds__det_report__STATE_VARIABLE_Globals_8);
    }
  }
}

static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
  MR_Word check_hlds__det_report__ModuleInfo_5,
  MR_Word check_hlds__det_report__VarSet_6,
  MR_Word check_hlds__det_report__FailingContext_7)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__Msg_8;
    MR_Word check_hlds__det_report__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__FailingContext_7, (MR_Integer) 0)));
    MR_Word check_hlds__det_report__FailingGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__FailingContext_7, (MR_Integer) 1)));
    MR_Word check_hlds__det_report__Pieces_13;
    MR_Word check_hlds__det_report__V_80_80;
    MR_Word check_hlds__det_report__V_81_81;
    MR_Word check_hlds__det_report__V_82_82;

    switch (MR_tag((MR_Word) check_hlds__det_report__FailingGoal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__det_report__FailingGoal_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[134]);
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[139]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__det_report__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)));
          MR_String check_hlds__det_report__VarStr_12;
          MR_Word check_hlds__det_report__V_74_74;
          MR_Word check_hlds__det_report__V_75_75;

          {
            check_hlds__det_report__VarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_6, check_hlds__det_report__Var_11);
          }
          {
            check_hlds__det_report__V_75_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_75_75, 0) = ((MR_Box) (check_hlds__det_report__VarStr_12));
          }
          {
            check_hlds__det_report__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_74_74, 0) = ((MR_Box) (check_hlds__det_report__V_75_75));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[137])));
          }
          {
            check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[135])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_74_74));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__det_report__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word check_hlds__det_report__Var1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)));
          MR_Word check_hlds__det_report__Var2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
          MR_String check_hlds__det_report__Var1Str_16;
          MR_String check_hlds__det_report__Var2Str_17;
          MR_Word check_hlds__det_report__V_58_58;
          MR_Word check_hlds__det_report__V_59_59;
          MR_Word check_hlds__det_report__V_60_60;
          MR_Word check_hlds__det_report__V_63_63;
          MR_Word check_hlds__det_report__V_64_64;

          {
            check_hlds__det_report__Var1Str_16 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(check_hlds__det_report__TypeCtorInfo_90_90, check_hlds__det_report__VarSet_6, check_hlds__det_report__Var1_14);
          }
          {
            check_hlds__det_report__Var2Str_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(check_hlds__det_report__TypeCtorInfo_90_90, check_hlds__det_report__VarSet_6, check_hlds__det_report__Var2_15);
          }
          {
            check_hlds__det_report__V_59_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_59_59, 0) = ((MR_Box) (check_hlds__det_report__Var1Str_16));
          }
          {
            check_hlds__det_report__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_64_64, 0) = ((MR_Box) (check_hlds__det_report__Var2Str_17));
          }
          {
            check_hlds__det_report__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_63_63, 0) = ((MR_Box) (check_hlds__det_report__V_64_64));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[130])));
          }
          {
            check_hlds__det_report__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[95])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_60_60, 1) = ((MR_Box) (check_hlds__det_report__V_63_63));
          }
          {
            check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__V_59_59));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_58_58, 1) = ((MR_Box) (check_hlds__det_report__V_60_60));
          }
          {
            check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[131])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_58_58));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_report__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 2)));
              MR_Word check_hlds__det_report__V_45_45;
              MR_Word check_hlds__det_report__V_46_46;
              MR_Word check_hlds__det_report__V_47_47;
              MR_Word check_hlds__det_report__V_50_50;
              MR_Word check_hlds__det_report__V_51_51;
              MR_Word check_hlds__det_report__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
              MR_String check_hlds__det_report__VarStr_88;

              {
                check_hlds__det_report__VarStr_88 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_6, check_hlds__det_report__Var_87);
              }
              {
                check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__VarStr_88));
              }
              {
                check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (check_hlds__det_report__ConsId_18));
              }
              {
                check_hlds__det_report__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_50_50, 0) = ((MR_Box) (check_hlds__det_report__V_51_51));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[130])));
              }
              {
                check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[132])));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (check_hlds__det_report__V_50_50));
              }
              {
                check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (check_hlds__det_report__V_46_46));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_47_47));
              }
              {
                check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[131])));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__det_report__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__PredInfo_21;
              MR_String check_hlds__det_report__Name_22;
              MR_Word check_hlds__det_report__V_37_37;
              MR_Word check_hlds__det_report__V_38_38;
              MR_Integer check_hlds__det_report___ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 2)));

              {
                hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_report__ModuleInfo_5, check_hlds__det_report__PredId_19, &check_hlds__det_report__PredInfo_21);
              }
              {
                check_hlds__det_report__Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_report__PredInfo_21);
              }
              {
                check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__Name_22));
              }
              {
                check_hlds__det_report__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (check_hlds__det_report__V_38_38));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[130])));
              }
              {
                check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[128])));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_37_37));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__det_report__GenericCall_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__FailingGoal_10, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__GenericCallId_24;
              MR_Word check_hlds__det_report__V_28_28;
              MR_String check_hlds__det_report__V_29_29;
              MR_String check_hlds__det_report__V_30_30;

              {
                hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__det_report__GenericCall_23, &check_hlds__det_report__GenericCallId_24);
              }
              {
                check_hlds__det_report__V_30_30 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(check_hlds__det_report__GenericCallId_24);
              }
              {
                check_hlds__det_report__V_29_29 = parse_tree__error_util__capitalize_1_f_0(check_hlds__det_report__V_30_30);
              }
              {
                check_hlds__det_report__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_28_28, 1) = ((MR_Box) (check_hlds__det_report__V_29_29));
              }
              {
                check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (check_hlds__det_report__V_28_28));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[130])));
              }
            }
            break;
        }
        break;
    }
    {
      check_hlds__det_report__V_82_82 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__Pieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6]));
    }
    {
      check_hlds__det_report__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_81_81, 0) = ((MR_Box) (check_hlds__det_report__V_82_82));
    }
    {
      check_hlds__det_report__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 0) = ((MR_Box) (check_hlds__det_report__V_81_81));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__det_report__Msg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_8, 0) = ((MR_Box) (check_hlds__det_report__Context_9));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_8, 1) = ((MR_Box) (check_hlds__det_report__V_80_80));
    }
    return check_hlds__det_report__Msg_8;
  }
}

static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
  MR_Word check_hlds__det_report__Context_8,
  MR_Word check_hlds__det_report__CallUnifyContext_9,
  MR_Word check_hlds__det_report__DetInfo_10,
  MR_Word check_hlds__det_report__PredId_11,
  MR_Integer check_hlds__det_report__ProcId_12,
  MR_Word * check_hlds__det_report__InitMsgs_13,
  MR_Word * check_hlds__det_report__StartingPieces_14)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__ModuleInfo_15;
    MR_Word check_hlds__det_report__PredInfo_16;
    MR_Word check_hlds__det_report__Origin_17;
    MR_Word check_hlds__det_report__V_30_30;
    MR_Word check_hlds__det_report__V_18_18;

    {
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_10, &check_hlds__det_report__ModuleInfo_15);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__PredId_11, &check_hlds__det_report__PredInfo_16);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__det_report__PredInfo_16, &check_hlds__det_report__Origin_17);
    }
    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Origin_17)) == (MR_mktag((MR_Integer) 0)));
    if (check_hlds__det_report__succeeded)
      {
        check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Origin_17, (MR_Integer) 0)));
        check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Origin_17, (MR_Integer) 1)));
        check_hlds__det_report__succeeded = (check_hlds__det_report__V_30_30 == (MR_Integer) 0);
      }
    if (check_hlds__det_report__succeeded)
      {
        *check_hlds__det_report__InitMsgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        if ((check_hlds__det_report__CallUnifyContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__det_report__StartingPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[126]);
          }
        else
          {
            MR_Word check_hlds__det_report__LHS_19;
            MR_Word check_hlds__det_report__RHS_20;
            MR_Word check_hlds__det_report__UC_21;
            MR_Word check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CallUnifyContext_9, (MR_Integer) 0)));

            check_hlds__det_report__LHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_36_36, (MR_Integer) 0)));
            check_hlds__det_report__RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_36_36, (MR_Integer) 1)));
            check_hlds__det_report__UC_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_36_36, (MR_Integer) 2)));
            {
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__det_report__UC_21, check_hlds__det_report__DetInfo_10, check_hlds__det_report__LHS_19, check_hlds__det_report__RHS_20, check_hlds__det_report__StartingPieces_14);
            }
          }
      }
    else
      {
        MR_Word check_hlds__det_report__ProcTable_25;
        MR_Word check_hlds__det_report__ProcInfo_26;
        MR_Word check_hlds__det_report__ArgModes_27;
        MR_Word check_hlds__det_report__InstVarSet_28;
        MR_Word check_hlds__det_report__PredPieces_29;
        MR_Box check_hlds__det_report__conv0_ProcInfo_26;

        if ((check_hlds__det_report__CallUnifyContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__InitMsgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word check_hlds__det_report__UnifyPieces0_22;
            MR_Word check_hlds__det_report__UnifyPieces_23;
            MR_Word check_hlds__det_report__UnifyMsg_24;
            MR_Word check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CallUnifyContext_9, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__V_46_46;
            MR_Word check_hlds__det_report__V_47_47;
            MR_Word check_hlds__det_report__LHS_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__RHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__UC_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, (MR_Integer) 2)));

            {
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 1, check_hlds__det_report__UC_55, check_hlds__det_report__DetInfo_10, check_hlds__det_report__LHS_53, check_hlds__det_report__RHS_54, &check_hlds__det_report__UnifyPieces0_22);
            }
            {
              check_hlds__det_report__UnifyPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__UnifyPieces0_22, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[127]));
            }
            {
              check_hlds__det_report__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__UnifyPieces_23));
            }
            {
              check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_report__UnifyMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_report__UnifyMsg_24, 0) = ((MR_Box) (check_hlds__det_report__Context_8));
              MR_hl_field(MR_mktag(0), check_hlds__det_report__UnifyMsg_24, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__det_report__InitMsgs_13 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__UnifyMsg_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_report__PredInfo_16, &check_hlds__det_report__ProcTable_25);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_report__ProcTable_25, check_hlds__det_report__ProcId_12, &check_hlds__det_report__conv0_ProcInfo_26);
        }
        check_hlds__det_report__ProcInfo_26 = ((MR_Word) check_hlds__det_report__conv0_ProcInfo_26);
        {
          hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(check_hlds__det_report__ProcInfo_26, &check_hlds__det_report__ArgModes_27);
        }
        {
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__det_report__ProcInfo_26, &check_hlds__det_report__InstVarSet_28);
        }
        {
          check_hlds__det_report__PredPieces_29 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(check_hlds__det_report__ModuleInfo_15, (MR_Integer) 0, check_hlds__det_report__PredId_11, check_hlds__det_report__InstVarSet_28, check_hlds__det_report__ArgModes_27);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_report__StartingPieces_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[128])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__PredPieces_29));
        }
      }
  }
}

static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
  MR_Word check_hlds__det_report__VarSet_4,
  MR_Word check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_String check_hlds__det_report__HeadVar__3_3;
    MR_Word check_hlds__det_report__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word check_hlds__det_report__MaybeArgVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));

    {
      check_hlds__det_report__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(check_hlds__det_report__VarSet_4, (MR_Integer) 1, check_hlds__det_report__ConsId_5, check_hlds__det_report__MaybeArgVars_6);
    }
    return check_hlds__det_report__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1)
{
  {
    MR_Box check_hlds__det_report__wrapper_arg_2;
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
    MR_String check_hlds__det_report__conv0_HeadVar__3_3;

    {
      check_hlds__det_report__conv0_HeadVar__3_3 = check_hlds__det_report__switch_match_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__3_3));
    return check_hlds__det_report__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
  MR_Word check_hlds__det_report__DetInfo_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word * check_hlds__det_report__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    if ((check_hlds__det_report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__det_report__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__det_report__TypeCtorInfo_47_47;
        MR_Word check_hlds__det_report__SwitchContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__SwitchContexts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__ProcInfo_9;
        MR_Word check_hlds__det_report__VarSet_10;
        MR_Word check_hlds__det_report__Var_11;
        MR_Word check_hlds__det_report__MainMatch_12;
        MR_Word check_hlds__det_report__OtherMatches_13;
        MR_String check_hlds__det_report__MainMatchStr_14;
        MR_Word check_hlds__det_report__OtherMatchStrs_15;
        MR_String check_hlds__det_report__MatchsStr_16;
        MR_String check_hlds__det_report__VarStr_17;
        MR_Word check_hlds__det_report__InnerPieces_18;
        MR_Word check_hlds__det_report__OuterPieces_19;
        MR_Word check_hlds__det_report__V_20_20;
        MR_Word check_hlds__det_report__V_22_22;
        MR_Word check_hlds__det_report__V_25_25;
        MR_Word check_hlds__det_report__V_26_26;
        MR_Word check_hlds__det_report__V_27_27;
        MR_Word check_hlds__det_report__V_30_30;
        MR_Word check_hlds__det_report__V_31_31;
        MR_Word check_hlds__det_report__V_38_38;
        MR_Word check_hlds__det_report__ConsId_49;
        MR_Word check_hlds__det_report__MaybeArgVars_50;

        {
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_1, &check_hlds__det_report__ProcInfo_9);
        }
        {
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_9, &check_hlds__det_report__VarSet_10);
        }
        check_hlds__det_report__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 0)));
        check_hlds__det_report__MainMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 1)));
        check_hlds__det_report__OtherMatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchContext_6, (MR_Integer) 2)));
        check_hlds__det_report__ConsId_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__MainMatch_12, (MR_Integer) 0)));
        check_hlds__det_report__MaybeArgVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__MainMatch_12, (MR_Integer) 1)));
        {
          check_hlds__det_report__MainMatchStr_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(check_hlds__det_report__VarSet_10, (MR_Integer) 1, check_hlds__det_report__ConsId_49, check_hlds__det_report__MaybeArgVars_50);
        }
        {
          check_hlds__det_report__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 1) = ((MR_Box) (check_hlds__det_report__det_diagnose_switch_context_3_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 3) = ((MR_Box) (check_hlds__det_report__VarSet_10));
        }
        {
          check_hlds__det_report__OtherMatchStrs_15 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_report__V_20_20, check_hlds__det_report__OtherMatches_13);
        }
        {
          check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__MainMatchStr_14));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (check_hlds__det_report__OtherMatchStrs_15));
        }
        {
          check_hlds__det_report__MatchsStr_16 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__det_report__V_22_22);
        }
        {
          check_hlds__det_report__VarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_10, check_hlds__det_report__Var_11);
        }
        {
          check_hlds__det_report__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__det_report__V_26_26, 1) = ((MR_Box) (check_hlds__det_report__MatchsStr_16));
        }
        {
          check_hlds__det_report__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_31_31, 0) = ((MR_Box) (check_hlds__det_report__VarStr_17));
        }
        {
          check_hlds__det_report__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 0) = ((MR_Box) (check_hlds__det_report__V_31_31));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[45])));
        }
        {
          check_hlds__det_report__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[123])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__V_30_30));
        }
        {
          check_hlds__det_report__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_25_25, 0) = ((MR_Box) (check_hlds__det_report__V_26_26));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_25_25, 1) = ((MR_Box) (check_hlds__det_report__V_27_27));
        }
        {
          check_hlds__det_report__InnerPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__InnerPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[122])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__InnerPieces_18, 1) = ((MR_Box) (check_hlds__det_report__V_25_25));
        }
        {
          check_hlds__det_report__det_diagnose_switch_context_3_p_0(check_hlds__det_report__DetInfo_1, check_hlds__det_report__SwitchContexts_7, &check_hlds__det_report__OuterPieces_19);
        }
        check_hlds__det_report__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          check_hlds__det_report__V_38_38 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_47_47, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[124]), check_hlds__det_report__InnerPieces_18);
        }
        {
          *check_hlds__det_report__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_47_47, check_hlds__det_report__OuterPieces_19, check_hlds__det_report__V_38_38);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_2_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word * check_hlds__det_report__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__det_report__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__det_report__ConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__ConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__ConsIdToUse_10;
        MR_Word check_hlds__det_report__ConsIdPiece_11;
        MR_Word check_hlds__det_report__PiecesHead_15;
        MR_Word check_hlds__det_report__PiecesTail_17;
        MR_Word check_hlds__det_report__SymName_6;
        MR_Integer check_hlds__det_report__Arity_7;
        MR_Word check_hlds__det_report__TypeCtor_8;

        check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsId_3, (MR_Integer) 1)));
            check_hlds__det_report__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsId_3, (MR_Integer) 2)));
            check_hlds__det_report__TypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsId_3, (MR_Integer) 3)));
            {
              MR_Word check_hlds__det_report__SymNameToUse_9;
              MR_String check_hlds__det_report__V_18_18;

              {
                check_hlds__det_report__V_18_18 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__det_report__SymName_6);
              }
              {
                check_hlds__det_report__SymNameToUse_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_report__SymNameToUse_9, 0) = ((MR_Box) (check_hlds__det_report__V_18_18));
              }
              {
                check_hlds__det_report__ConsIdToUse_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdToUse_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdToUse_10, 1) = ((MR_Box) (check_hlds__det_report__SymNameToUse_9));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdToUse_10, 2) = ((MR_Box) (check_hlds__det_report__Arity_7));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdToUse_10, 3) = ((MR_Box) (check_hlds__det_report__TypeCtor_8));
              }
            }
          }
        else
          check_hlds__det_report__ConsIdToUse_10 = check_hlds__det_report__ConsId_3;
        {
          check_hlds__det_report__ConsIdPiece_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdPiece_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), check_hlds__det_report__ConsIdPiece_11, 1) = ((MR_Box) (check_hlds__det_report__ConsIdToUse_10));
        }
        if ((check_hlds__det_report__ConsIds_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              check_hlds__det_report__PiecesHead_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_15, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_11));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[121])));
            }
          }
        else
          {
            MR_Word check_hlds__det_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ConsIds_4, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ConsIds_4, (MR_Integer) 0)));

            if ((check_hlds__det_report__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  check_hlds__det_report__PiecesHead_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_15, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_11));
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[66])));
                }
              }
            else
              {
                {
                  check_hlds__det_report__PiecesHead_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_15, 0) = ((MR_Box) (check_hlds__det_report__ConsIdPiece_11));
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__PiecesHead_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[68])));
                }
              }
          }
        {
          check_hlds__det_report__cons_id_list_to_pieces_2_p_0(check_hlds__det_report__ConsIds_4, &check_hlds__det_report__PiecesTail_17);
        }
        {
          *check_hlds__det_report__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__PiecesHead_15, check_hlds__det_report__PiecesTail_17);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_3 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2;
        else
          {
            MR_Word check_hlds__det_report__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
            MR_Word check_hlds__det_report__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15;
            MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16;
            MR_Word check_hlds__det_report___Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_7, (MR_Integer) 2)));

            {
              mercury__set_tree234__insert_3_p_0(check_hlds__det_report__TypeCtorInfo_18_18, ((MR_Box) (check_hlds__det_report__MainConsId_10)), check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2, &check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15);
            }
            {
              mercury__set_tree234__insert_list_3_p_0(check_hlds__det_report__TypeCtorInfo_18_18, check_hlds__det_report__OtherConsIds_11, check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_15_15, &check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Cases_8;
              MR_Word check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_16_16;

              check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0_2 = check_hlds__det_report__STATE_VARIABLE_CoveredConsIds_0__tmp_copy_2;
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_report__find_uncovered_consids_4_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__CoveredConsIds_2,
  MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_4 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3;
        else
          {
            MR_Word check_hlds__det_report__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__ConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15;

            {
              check_hlds__det_report__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__CoveredConsIds_2, ((MR_Box) (check_hlds__det_report__ConsId_9)));
            }
            if (check_hlds__det_report__succeeded)
              check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3;
            else
              {
                check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15, 0) = ((MR_Box) (check_hlds__det_report__ConsId_9));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3));
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__ConsIds_10;
              MR_Word check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_15_15;

              check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0_3 = check_hlds__det_report__STATE_VARIABLE_RevMissingConsIds_0__tmp_copy_3;
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box * check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
    MR_Word check_hlds__det_report__conv0_HeadVar__3_3;

    {
      parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_report__wrapper_arg_1), &check_hlds__det_report__conv0_HeadVar__3_3);
    }
    *check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_6_p_0(
  MR_Word check_hlds__det_report__DetInfo_7,
  MR_Word check_hlds__det_report__InstMap0_8,
  MR_Word check_hlds__det_report__Var_9,
  MR_Word check_hlds__det_report__Cases_10,
  MR_String * check_hlds__det_report__VarStr_11,
  MR_Word * check_hlds__det_report__MaybeMissingPieces_12)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__ProcInfo_13;
    MR_Word check_hlds__det_report__VarSet_14;
    MR_Word check_hlds__det_report__ModuleInfo_15;
    MR_Word check_hlds__det_report__ConsIds_21;
    MR_Word check_hlds__det_report__BoundInsts_17;
    MR_Word check_hlds__det_report__VarInst_16;

    {
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__ProcInfo_13);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_13, &check_hlds__det_report__VarSet_14);
    }
    {
      *check_hlds__det_report__VarStr_11 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_14, check_hlds__det_report__Var_9);
    }
    {
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__ModuleInfo_15);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__det_report__InstMap0_8, check_hlds__det_report__Var_9, &check_hlds__det_report__VarInst_16);
    }
    {
      check_hlds__det_report__succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__VarInst_16, &check_hlds__det_report__BoundInsts_17);
    }
    if (check_hlds__det_report__succeeded)
      {
        MR_Word check_hlds__det_report__VarTypes_18;
        MR_Word check_hlds__det_report__VarType_19;
        MR_Word check_hlds__det_report__VarTypeCtor_20;
        MR_Word check_hlds__det_report__V_28_28;

        {
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__DetInfo_7, &check_hlds__det_report__VarTypes_18);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_18, check_hlds__det_report__Var_9, &check_hlds__det_report__VarType_19);
        }
        {
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__det_report__VarType_19, &check_hlds__det_report__VarTypeCtor_20);
        }
        {
          check_hlds__det_report__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 1) = ((MR_Box) (check_hlds__det_report__find_missing_cons_ids_6_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_28_28, 3) = ((MR_Box) (check_hlds__det_report__VarTypeCtor_20));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__V_28_28, check_hlds__det_report__BoundInsts_17, &check_hlds__det_report__ConsIds_21);
        }
        check_hlds__det_report__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__det_report__TypeCtorInfo_49_49;
        MR_Word check_hlds__det_report__TypeCtorInfo_50_50;
        MR_Word check_hlds__det_report__TypeDefn_22;
        MR_Word check_hlds__det_report__TypeBody_23;
        MR_Word check_hlds__det_report__ConsTable_24;
        MR_Word check_hlds__det_report__V_36_36;
        MR_Word check_hlds__det_report__V_37_37;
        MR_Word check_hlds__det_report__V_38_38;
        MR_Word check_hlds__det_report__V_39_39;
        MR_Word check_hlds__det_report__V_40_40;
        MR_Word check_hlds__det_report__V_41_41;
        MR_Word check_hlds__det_report__V_42_42;
        MR_Word check_hlds__det_report__V_43_43;

        {
          check_hlds__det_report__succeeded = check_hlds__det_util__det_lookup_var_type_4_p_0(check_hlds__det_report__ModuleInfo_15, check_hlds__det_report__ProcInfo_13, check_hlds__det_report__Var_9, &check_hlds__det_report__TypeDefn_22);
        }
        if (check_hlds__det_report__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__det_report__TypeDefn_22, &check_hlds__det_report__TypeBody_23);
            }
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__TypeBody_23)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__det_report__succeeded)
              {
                check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 0)));
                check_hlds__det_report__ConsTable_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 1)));
                check_hlds__det_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 2)));
                check_hlds__det_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 3)));
                check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 4)));
                check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 5)));
                check_hlds__det_report__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
                check_hlds__det_report__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                check_hlds__det_report__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__TypeBody_23, (MR_Integer) 7)));
                check_hlds__det_report__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                check_hlds__det_report__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                {
                  mercury__map__keys_2_p_0(check_hlds__det_report__TypeCtorInfo_49_49, check_hlds__det_report__TypeCtorInfo_50_50, check_hlds__det_report__ConsTable_24, &check_hlds__det_report__ConsIds_21);
                }
                check_hlds__det_report__succeeded = MR_TRUE;
              }
          }
      }
    if (check_hlds__det_report__succeeded)
      {
        MR_Word check_hlds__det_report__TypeCtorInfo_11_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
        MR_Word check_hlds__det_report__MissingConsIds_25;
        MR_Word check_hlds__det_report__MissingPieces0_26;
        MR_Word check_hlds__det_report__MissingPieces_27;
        MR_Word check_hlds__det_report__V_29_29;
        MR_Word check_hlds__det_report__CoveredConsIds_55;
        MR_Word check_hlds__det_report__RevMissingConsIds_56;
        MR_Word check_hlds__det_report__V_57_57;

        {
          check_hlds__det_report__V_57_57 = mercury__set_tree234__init_0_f_0(check_hlds__det_report__TypeCtorInfo_11_59);
        }
        {
          check_hlds__det_report__compute_covered_cons_ids_3_p_0(check_hlds__det_report__Cases_10, check_hlds__det_report__V_57_57, &check_hlds__det_report__CoveredConsIds_55);
        }
        {
          check_hlds__det_report__find_uncovered_consids_4_p_0(check_hlds__det_report__ConsIds_21, check_hlds__det_report__CoveredConsIds_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__RevMissingConsIds_56);
        }
        {
          mercury__list__reverse_2_p_0(check_hlds__det_report__TypeCtorInfo_11_59, check_hlds__det_report__RevMissingConsIds_56, &check_hlds__det_report__MissingConsIds_25);
        }
        {
          check_hlds__det_report__cons_id_list_to_pieces_2_p_0(check_hlds__det_report__MissingConsIds_25, &check_hlds__det_report__MissingPieces0_26);
        }
        {
          check_hlds__det_report__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[117])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_29_29, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces0_26));
        }
        {
          check_hlds__det_report__MissingPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_29_29, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[119]));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_report__MaybeMissingPieces_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__MissingPieces_27));
        }
      }
    else
      *check_hlds__det_report__MaybeMissingPieces_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0_3,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_InstMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__STATE_VARIABLE_InstMap_4 = check_hlds__det_report__STATE_VARIABLE_InstMap_0_3;
        else
          {
            MR_Word check_hlds__det_report__Var_9;
            MR_Word check_hlds__det_report__Mode_10;
            MR_Word check_hlds__det_report__VarsModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__InitInst_14;
            MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_19_19;
            MR_Word check_hlds__det_report___FinalInst_15;

            check_hlds__det_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_18_18, (MR_Integer) 0)));
            check_hlds__det_report__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__V_18_18, (MR_Integer) 1)));
            {
              check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__Mode_10, &check_hlds__det_report__InitInst_14, &check_hlds__det_report___FinalInst_15);
            }
            {
              hlds__instmap__instmap_set_var_4_p_0(check_hlds__det_report__Var_9, check_hlds__det_report__InitInst_14, check_hlds__det_report__STATE_VARIABLE_InstMap_0_3, &check_hlds__det_report__STATE_VARIABLE_InstMap_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__VarsModes_11;
              MR_Word check_hlds__det_report__STATE_VARIABLE_InstMap_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_InstMap_19_19;

              check_hlds__det_report__STATE_VARIABLE_InstMap_0_3 = check_hlds__det_report__STATE_VARIABLE_InstMap_0__tmp_copy_3;
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_switch_6_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
        else
          {
            MR_Word check_hlds__det_report__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_15, (MR_Integer) 2)));
            MR_Word check_hlds__det_report__ModuleInfo0_22;
            MR_Word check_hlds__det_report__InstMap1_23;
            MR_Word check_hlds__det_report__ModuleInfo_24;
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27;
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;

            {
              check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__ModuleInfo0_22);
            }
            {
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__MainConsId_19, check_hlds__det_report__OtherConsIds_20, check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__InstMap1_23, check_hlds__det_report__ModuleInfo0_22, &check_hlds__det_report__ModuleInfo_24);
            }
            {
              check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_24, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27);
            }
            {
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_21, check_hlds__det_report__InstMap1_23, check_hlds__det_report__STATE_VARIABLE_DetInfo_27_27, &check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_report__HeadVar__3__tmp_copy_3 = check_hlds__det_report__Cases_16;
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_5 = check_hlds__det_report__STATE_VARIABLE_DetInfo_28_28;

              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_5;
              check_hlds__det_report__HeadVar__3_3 = check_hlds__det_report__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_4_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_4 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3;
        else
          {
            MR_Word check_hlds__det_report__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15;

            {
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3, &check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Goals_10;
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_15_15;

              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3;
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_4_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_4 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3;
        else
          {
            MR_Word check_hlds__det_report__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__InstMap1_13;
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16;

            {
              check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3, &check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16);
            }
            {
              hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Goal_9, check_hlds__det_report__HeadVar__2_2, &check_hlds__det_report__InstMap1_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Goals_10;
              MR_Word check_hlds__det_report__HeadVar__2__tmp_copy_2 = check_hlds__det_report__InstMap1_13;
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_16_16;

              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_3 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_3;
              check_hlds__det_report__HeadVar__2_2 = check_hlds__det_report__HeadVar__2__tmp_copy_2;
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_report__generate_error_not_switch_on_required_var_5_p_0(
  MR_Word check_hlds__det_report__RequiredVar_6,
  MR_String check_hlds__det_report__ScopeWord_7,
  MR_Word check_hlds__det_report__ScopeGoalInfo_8,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_17,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_18)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__ProcInfo_10;
    MR_Word check_hlds__det_report__VarSet_11;
    MR_String check_hlds__det_report__RequiredVarStr_12;
    MR_Word check_hlds__det_report__Pieces_13;
    MR_Word check_hlds__det_report__Context_14;
    MR_Word check_hlds__det_report__Msg_15;
    MR_Word check_hlds__det_report__Spec_16;
    MR_Word check_hlds__det_report__V_21_21;
    MR_Word check_hlds__det_report__V_22_22;
    MR_Word check_hlds__det_report__V_23_23;
    MR_Word check_hlds__det_report__V_24_24;
    MR_String check_hlds__det_report__V_25_25;
    MR_String check_hlds__det_report__V_27_27;
    MR_Word check_hlds__det_report__V_29_29;
    MR_Word check_hlds__det_report__V_32_32;
    MR_Word check_hlds__det_report__V_35_35;
    MR_Word check_hlds__det_report__V_36_36;
    MR_Word check_hlds__det_report__V_43_43;
    MR_Word check_hlds__det_report__V_44_44;
    MR_Word check_hlds__det_report__V_48_48;

    {
      check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_17, &check_hlds__det_report__ProcInfo_10);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_10, &check_hlds__det_report__VarSet_11);
    }
    {
      check_hlds__det_report__RequiredVarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_11, check_hlds__det_report__RequiredVar_6);
    }
    {
      check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (check_hlds__det_report__ScopeWord_7));
    }
    {
      check_hlds__det_report__V_27_27 = mercury__string__f_43_43_2_f_0(check_hlds__det_report__RequiredVarStr_12, (MR_String) "]");
    }
    {
      check_hlds__det_report__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "[", check_hlds__det_report__V_27_27);
    }
    {
      check_hlds__det_report__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__det_report__V_24_24, 0) = ((MR_Box) (check_hlds__det_report__V_25_25));
    }
    {
      check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__RequiredVarStr_12));
    }
    {
      check_hlds__det_report__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_35_35, 0) = ((MR_Box) (check_hlds__det_report__V_36_36));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
    }
    {
      check_hlds__det_report__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[116])));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_32_32, 1) = ((MR_Box) (check_hlds__det_report__V_35_35));
    }
    {
      check_hlds__det_report__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[115])));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_29_29, 1) = ((MR_Box) (check_hlds__det_report__V_32_32));
    }
    {
      check_hlds__det_report__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_23_23, 0) = ((MR_Box) (check_hlds__det_report__V_24_24));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_23_23, 1) = ((MR_Box) (check_hlds__det_report__V_29_29));
    }
    {
      check_hlds__det_report__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_21_21, 0) = ((MR_Box) (check_hlds__det_report__V_22_22));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_21_21, 1) = ((MR_Box) (check_hlds__det_report__V_23_23));
    }
    {
      check_hlds__det_report__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[114])));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_13, 1) = ((MR_Box) (check_hlds__det_report__V_21_21));
    }
    {
      check_hlds__det_report__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_8);
    }
    {
      check_hlds__det_report__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_44_44, 0) = ((MR_Box) (check_hlds__det_report__Pieces_13));
    }
    {
      check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (check_hlds__det_report__V_44_44));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__det_report__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_15, 0) = ((MR_Box) (check_hlds__det_report__Context_14));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_15, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
    }
    {
      check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (check_hlds__det_report__Msg_15));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__det_report__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_16, 2) = ((MR_Box) (check_hlds__det_report__V_48_48));
    }
    {
      check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__Spec_16, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_17, check_hlds__det_report__STATE_VARIABLE_DetInfo_18);
    }
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_for_cases_7_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__HeadVar__5_5,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6;
        else
          {
            MR_Word check_hlds__det_report__Case_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_18, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_18, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_18, (MR_Integer) 2)));
            MR_Word check_hlds__det_report__ModuleInfo0_25;
            MR_Word check_hlds__det_report__InstMap1_26;
            MR_Word check_hlds__det_report__ModuleInfo_27;
            MR_Word check_hlds__det_report__CheckKind_28;
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_31_31;
            MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_32_32;

            {
              check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6, &check_hlds__det_report__ModuleInfo0_25);
            }
            {
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__MainConsId_22, check_hlds__det_report__OtherConsIds_23, check_hlds__det_report__HeadVar__5_5, &check_hlds__det_report__InstMap1_26, check_hlds__det_report__ModuleInfo0_25, &check_hlds__det_report__ModuleInfo_27);
            }
            {
              check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_27, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6, &check_hlds__det_report__STATE_VARIABLE_DetInfo_31_31);
            }
            {
              check_hlds__det_report__CheckKind_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__CheckKind_28, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__2_2));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__CheckKind_28, 1) = ((MR_Box) (check_hlds__det_report__MainConsId_22));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__CheckKind_28, 2) = ((MR_Box) (check_hlds__det_report__OtherConsIds_23));
            }
            {
              check_hlds__det_report__reqscope_check_goal_detism_6_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__Goal_24, check_hlds__det_report__CheckKind_28, check_hlds__det_report__InstMap1_26, check_hlds__det_report__STATE_VARIABLE_DetInfo_31_31, &check_hlds__det_report__STATE_VARIABLE_DetInfo_32_32);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_report__HeadVar__4__tmp_copy_4 = check_hlds__det_report__Cases_19;
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_32_32;

              check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_6;
              check_hlds__det_report__HeadVar__4_4 = check_hlds__det_report__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1)
{
  {
    MR_Box check_hlds__det_report__wrapper_arg_2;
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
    MR_String check_hlds__det_report__conv0_HeadVar__2_2;

    {
      check_hlds__det_report__conv0_HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_HeadVar__2_2));
    return check_hlds__det_report__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
  MR_Word check_hlds__det_report__RequiredDetism_7,
  MR_Word check_hlds__det_report__Goal_8,
  MR_Word check_hlds__det_report__CheckKind_9,
  MR_Word check_hlds__det_report__InstMap0_10,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_36,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_37)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
    MR_Word check_hlds__det_report__ActualDetism_14;
    MR_Word check_hlds__det_report__CompareResult_15;
    MR_Word check_hlds__det_report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));

    {
      check_hlds__det_report__ActualDetism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_13);
    }
    {
      parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__ActualDetism_14, check_hlds__det_report__RequiredDetism_7, &check_hlds__det_report__CompareResult_15);
    }
    if (((MR_tag((MR_Word) check_hlds__det_report__CheckKind_9)) == (MR_mktag((MR_Integer) 0))))
      check_hlds__det_report__succeeded = (check_hlds__det_report__CompareResult_15 == (MR_Integer) 1);
    else
      switch (check_hlds__det_report__CompareResult_15) {
        default:
          check_hlds__det_report__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          check_hlds__det_report__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          check_hlds__det_report__succeeded = MR_TRUE;
          break;
      }
    if (check_hlds__det_report__succeeded)
      *check_hlds__det_report__STATE_VARIABLE_DetInfo_37 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_36;
    else
      {
        MR_String check_hlds__det_report__RequiredDetismStr_20;
        MR_String check_hlds__det_report__ActualDetismStr_21;
        MR_Word check_hlds__det_report__Context_23;
        MR_Word check_hlds__det_report__Pieces_24;
        MR_Word check_hlds__det_report__Msg_33;
        MR_Word check_hlds__det_report__SubMsgs_34;
        MR_Word check_hlds__det_report__Spec_35;
        MR_Word check_hlds__det_report__V_96_96;
        MR_Word check_hlds__det_report__V_97_97;
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_100_100;
        MR_Word check_hlds__det_report__V_103_103;

        {
          check_hlds__det_report__RequiredDetismStr_20 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__RequiredDetism_7);
        }
        {
          check_hlds__det_report__ActualDetismStr_21 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__ActualDetism_14);
        }
        if (((MR_tag((MR_Word) check_hlds__det_report__CheckKind_9)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word check_hlds__det_report__ScopeGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__CheckKind_9, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__V_77_77;
            MR_Word check_hlds__det_report__V_80_80;
            MR_Word check_hlds__det_report__V_81_81;
            MR_Word check_hlds__det_report__V_82_82;
            MR_Word check_hlds__det_report__V_85_85;
            MR_Word check_hlds__det_report__V_88_88;
            MR_Word check_hlds__det_report__V_89_89;

            {
              check_hlds__det_report__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_22);
            }
            {
              check_hlds__det_report__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_81_81, 1) = ((MR_Box) (check_hlds__det_report__RequiredDetismStr_20));
            }
            {
              check_hlds__det_report__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_89_89, 1) = ((MR_Box) (check_hlds__det_report__ActualDetismStr_21));
            }
            {
              check_hlds__det_report__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_88_88, 0) = ((MR_Box) (check_hlds__det_report__V_89_89));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
            }
            {
              check_hlds__det_report__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[109])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_85_85, 1) = ((MR_Box) (check_hlds__det_report__V_88_88));
            }
            {
              check_hlds__det_report__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[75])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_82_82, 1) = ((MR_Box) (check_hlds__det_report__V_85_85));
            }
            {
              check_hlds__det_report__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 0) = ((MR_Box) (check_hlds__det_report__V_81_81));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 1) = ((MR_Box) (check_hlds__det_report__V_82_82));
            }
            {
              check_hlds__det_report__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[108])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_77_77, 1) = ((MR_Box) (check_hlds__det_report__V_80_80));
            }
            {
              check_hlds__det_report__Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[107])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_24, 1) = ((MR_Box) (check_hlds__det_report__V_77_77));
            }
          }
        else
          {
            MR_Word check_hlds__det_report__TypeCtorInfo_110_110;
            MR_Word check_hlds__det_report__SwitchVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CheckKind_9, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__MainConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CheckKind_9, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__CheckKind_9, (MR_Integer) 2)));
            MR_Word check_hlds__det_report__VarSet_28;
            MR_String check_hlds__det_report__SwitchVarName_29;
            MR_String check_hlds__det_report__MainConsIdStr_30;
            MR_Word check_hlds__det_report__OtherConsIdStrs_31;
            MR_Word check_hlds__det_report__ConsIdsPieces_32;
            MR_Word check_hlds__det_report__V_39_39;
            MR_Word check_hlds__det_report__V_40_40;
            MR_Word check_hlds__det_report__V_43_43;
            MR_Word check_hlds__det_report__V_44_44;
            MR_Word check_hlds__det_report__V_45_45;
            MR_Word check_hlds__det_report__V_48_48;
            MR_Word check_hlds__det_report__V_51_51;
            MR_Word check_hlds__det_report__V_52_52;
            MR_Word check_hlds__det_report__V_63_63;
            MR_Word check_hlds__det_report__V_64_64;
            MR_Word check_hlds__det_report__V_67_67;
            MR_Word check_hlds__det_report__V_68_68;

            {
              check_hlds__det_report__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_13);
            }
            {
              check_hlds__det_util__det_info_get_varset_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_36, &check_hlds__det_report__VarSet_28);
            }
            {
              mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_report__VarSet_28, check_hlds__det_report__SwitchVar_25, &check_hlds__det_report__SwitchVarName_29);
            }
            {
              check_hlds__det_report__MainConsIdStr_30 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(check_hlds__det_report__MainConsId_26);
            }
            {
              check_hlds__det_report__OtherConsIdStrs_31 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__det_report_scalar_common_1[4], check_hlds__det_report__OtherConsIds_27);
            }
            {
              check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__MainConsIdStr_30));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__OtherConsIdStrs_31));
            }
            {
              check_hlds__det_report__ConsIdsPieces_32 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_report__V_39_39);
            }
            check_hlds__det_report__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              check_hlds__det_report__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_44_44, 1) = ((MR_Box) (check_hlds__det_report__SwitchVarName_29));
            }
            {
              check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__RequiredDetismStr_20));
            }
            {
              check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (check_hlds__det_report__V_52_52));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[65])));
            }
            {
              check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[112])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (check_hlds__det_report__V_51_51));
            }
            {
              check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[111])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
            }
            {
              check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (check_hlds__det_report__V_44_44));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
            }
            {
              check_hlds__det_report__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[110])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_40_40, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
            }
            {
              check_hlds__det_report__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__det_report__V_68_68, 1) = ((MR_Box) (check_hlds__det_report__ActualDetismStr_21));
            }
            {
              check_hlds__det_report__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_67_67, 0) = ((MR_Box) (check_hlds__det_report__V_68_68));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
            }
            {
              check_hlds__det_report__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[113])));
              MR_hl_field(MR_mktag(1), check_hlds__det_report__V_64_64, 1) = ((MR_Box) (check_hlds__det_report__V_67_67));
            }
            {
              check_hlds__det_report__V_63_63 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_110_110, check_hlds__det_report__ConsIdsPieces_32, check_hlds__det_report__V_64_64);
            }
            {
              check_hlds__det_report__Pieces_24 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_110_110, check_hlds__det_report__V_40_40, check_hlds__det_report__V_63_63);
            }
          }
        {
          check_hlds__det_report__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_report__V_97_97, 0) = ((MR_Box) (check_hlds__det_report__Pieces_24));
        }
        {
          check_hlds__det_report__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_96_96, 0) = ((MR_Box) (check_hlds__det_report__V_97_97));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_report__Msg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_33, 0) = ((MR_Box) (check_hlds__det_report__Context_23));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_33, 1) = ((MR_Box) (check_hlds__det_report__V_96_96));
        }
        {
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_8, check_hlds__det_report__InstMap0_10, check_hlds__det_report__RequiredDetism_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__STATE_VARIABLE_DetInfo_0_36, &check_hlds__det_report__STATE_VARIABLE_DetInfo_100_100, &check_hlds__det_report__SubMsgs_34);
        }
        {
          check_hlds__det_report__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_103_103, 0) = ((MR_Box) (check_hlds__det_report__Msg_33));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_103_103, 1) = ((MR_Box) (check_hlds__det_report__SubMsgs_34));
        }
        {
          check_hlds__det_report__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_35, 2) = ((MR_Box) (check_hlds__det_report__V_103_103));
        }
        {
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__Spec_35, check_hlds__det_report__STATE_VARIABLE_DetInfo_100_100, check_hlds__det_report__STATE_VARIABLE_DetInfo_37);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_6_p_0(
  MR_Word check_hlds__det_report__Reason_7,
  MR_Word check_hlds__det_report__SubGoal_8,
  MR_Word check_hlds__det_report__ScopeGoalInfo_9,
  MR_Word check_hlds__det_report__InstMap0_10,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_56)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    switch (MR_tag((MR_Word) check_hlds__det_report__Reason_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
        break;
      case (MR_Integer) 1:
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
        break;
      case (MR_Integer) 2:
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_report__RequiredDetism_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__V_99_99;

              {
                check_hlds__det_report__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_99_99, 0) = ((MR_Box) (check_hlds__det_report__ScopeGoalInfo_9));
              }
              {
                check_hlds__det_report__reqscope_check_goal_detism_6_p_0(check_hlds__det_report__RequiredDetism_12, check_hlds__det_report__SubGoal_8, check_hlds__det_report__V_99_99, check_hlds__det_report__InstMap0_10, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55, check_hlds__det_report__STATE_VARIABLE_DetInfo_56);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__det_report__RequiredVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__SubGoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));
              MR_Word check_hlds__det_report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__CanFail_17;
              MR_Word check_hlds__det_report__Cases_18;
              MR_Word check_hlds__det_report__TypeInfo_111_111;
              MR_Word check_hlds__det_report__SwitchVar_16;

              check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__SubGoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (check_hlds__det_report__succeeded)
                {
                  check_hlds__det_report__SwitchVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 1)));
                  check_hlds__det_report__CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 2)));
                  check_hlds__det_report__Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_14, (MR_Integer) 3)));
                  check_hlds__det_report__TypeInfo_111_111 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                  {
                    check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_111_111, ((MR_Box) (check_hlds__det_report__SwitchVar_16)), ((MR_Box) (check_hlds__det_report__RequiredVar_13)));
                  }
                }
              if (check_hlds__det_report__succeeded)
                switch (check_hlds__det_report__CanFail_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String check_hlds__det_report__RequiredVarStr_19;
                      MR_Word check_hlds__det_report__MaybeMissingPieces_20;
                      MR_Word check_hlds__det_report__SwitchPieces_22;
                      MR_Word check_hlds__det_report__Context_23;
                      MR_Word check_hlds__det_report__SwitchMsg_24;
                      MR_Word check_hlds__det_report__SwitchSpec_25;
                      MR_Word check_hlds__det_report__V_89_89;
                      MR_Word check_hlds__det_report__V_90_90;
                      MR_Word check_hlds__det_report__V_94_94;

                      {
                        check_hlds__det_report__find_missing_cons_ids_6_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55, check_hlds__det_report__InstMap0_10, check_hlds__det_report__RequiredVar_13, check_hlds__det_report__Cases_18, &check_hlds__det_report__RequiredVarStr_19, &check_hlds__det_report__MaybeMissingPieces_20);
                      }
                      if ((check_hlds__det_report__MaybeMissingPieces_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word check_hlds__det_report__V_64_64;
                          MR_Word check_hlds__det_report__V_65_65;

                          {
                            check_hlds__det_report__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_65_65, 1) = ((MR_Box) (check_hlds__det_report__RequiredVarStr_19));
                          }
                          {
                            check_hlds__det_report__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_64_64, 0) = ((MR_Box) (check_hlds__det_report__V_65_65));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[59])));
                          }
                          {
                            check_hlds__det_report__SwitchPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[104])));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchPieces_22, 1) = ((MR_Box) (check_hlds__det_report__V_64_64));
                          }
                        }
                      else
                        {
                          MR_Word check_hlds__det_report__MissingPieces_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeMissingPieces_20, (MR_Integer) 0)));
                          MR_Word check_hlds__det_report__V_75_75;
                          MR_Word check_hlds__det_report__V_78_78;
                          MR_Word check_hlds__det_report__V_79_79;
                          MR_Word check_hlds__det_report__V_80_80;
                          MR_Word check_hlds__det_report__V_83_83;

                          {
                            check_hlds__det_report__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_79_79, 1) = ((MR_Box) (check_hlds__det_report__RequiredVarStr_19));
                          }
                          {
                            check_hlds__det_report__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[106])));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_83_83, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces_21));
                          }
                          {
                            check_hlds__det_report__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[105])));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_80_80, 1) = ((MR_Box) (check_hlds__det_report__V_83_83));
                          }
                          {
                            check_hlds__det_report__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 0) = ((MR_Box) (check_hlds__det_report__V_79_79));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_78_78, 1) = ((MR_Box) (check_hlds__det_report__V_80_80));
                          }
                          {
                            check_hlds__det_report__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[104])));
                            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_75_75, 1) = ((MR_Box) (check_hlds__det_report__V_78_78));
                          }
                          {
                            check_hlds__det_report__SwitchPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_75_75, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6]));
                          }
                        }
                      {
                        check_hlds__det_report__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__ScopeGoalInfo_9);
                      }
                      {
                        check_hlds__det_report__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__V_90_90, 0) = ((MR_Box) (check_hlds__det_report__SwitchPieces_22));
                      }
                      {
                        check_hlds__det_report__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_89_89, 0) = ((MR_Box) (check_hlds__det_report__V_90_90));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__det_report__SwitchMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchMsg_24, 0) = ((MR_Box) (check_hlds__det_report__Context_23));
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchMsg_24, 1) = ((MR_Box) (check_hlds__det_report__V_89_89));
                      }
                      {
                        check_hlds__det_report__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_94_94, 0) = ((MR_Box) (check_hlds__det_report__SwitchMsg_24));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__det_report__SwitchSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                        MR_hl_field(MR_mktag(0), check_hlds__det_report__SwitchSpec_25, 2) = ((MR_Box) (check_hlds__det_report__V_94_94));
                      }
                      {
                        check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__SwitchSpec_25, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55, check_hlds__det_report__STATE_VARIABLE_DetInfo_56);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
                    break;
                }
              else
                {
                  {
                    check_hlds__det_report__generate_error_not_switch_on_required_var_5_p_0(check_hlds__det_report__RequiredVar_13, (MR_String) "require_complete_switch", check_hlds__det_report__ScopeGoalInfo_9, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55, check_hlds__det_report__STATE_VARIABLE_DetInfo_56);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__det_report__RequiredDetism_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 2)));
              MR_Word check_hlds__det_report__RequiredVar_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__Reason_7, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__SubGoalExpr_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));
              MR_Word check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__SwitchVar_103;
              MR_Word check_hlds__det_report__Cases_104;
              MR_Word check_hlds__det_report__TypeInfo_112_112;

              if (((((MR_tag((MR_Word) check_hlds__det_report__SubGoalExpr_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_107, (MR_Integer) 0)))) == (MR_Integer) 5))))
                {
                  MR_Word check_hlds__det_report__SubReason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_107, (MR_Integer) 1)));
                  MR_Word check_hlds__det_report__SubSubGoal_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_107, (MR_Integer) 2)));
                  MR_Word check_hlds__det_report__SubSubGoalExpr_31;
                  MR_Word check_hlds__det_report___MaybeForcePruning_30;
                  MR_Word check_hlds__det_report__V_32_32;
                  MR_Word check_hlds__det_report___CanFail_101;

                  check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__SubReason_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubReason_28, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (check_hlds__det_report__succeeded)
                    {
                      check_hlds__det_report___MaybeForcePruning_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubReason_28, (MR_Integer) 1)));
                      check_hlds__det_report__SubSubGoalExpr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubSubGoal_29, (MR_Integer) 0)));
                      check_hlds__det_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubSubGoal_29, (MR_Integer) 1)));
                      check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__SubSubGoalExpr_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubSubGoalExpr_31, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (check_hlds__det_report__succeeded)
                        {
                          check_hlds__det_report__SwitchVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubSubGoalExpr_31, (MR_Integer) 1)));
                          check_hlds__det_report___CanFail_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubSubGoalExpr_31, (MR_Integer) 2)));
                          check_hlds__det_report__Cases_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubSubGoalExpr_31, (MR_Integer) 3)));
                        }
                    }
                }
              else
              if (((((MR_tag((MR_Word) check_hlds__det_report__SubGoalExpr_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_107, (MR_Integer) 0)))) == (MR_Integer) 4))))
                {
                  MR_Word check_hlds__det_report___CanFail_27;

                  check_hlds__det_report__SwitchVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_107, (MR_Integer) 1)));
                  check_hlds__det_report___CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_107, (MR_Integer) 2)));
                  check_hlds__det_report__Cases_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__SubGoalExpr_107, (MR_Integer) 3)));
                  check_hlds__det_report__succeeded = MR_TRUE;
                }
              else
                check_hlds__det_report__succeeded = MR_FALSE;
              if (check_hlds__det_report__succeeded)
                {
                  check_hlds__det_report__TypeInfo_112_112 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                  {
                    check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_112_112, ((MR_Box) (check_hlds__det_report__SwitchVar_103)), ((MR_Box) (check_hlds__det_report__RequiredVar_106)));
                  }
                }
              if (check_hlds__det_report__succeeded)
                {
                  MR_Word check_hlds__det_report__VarTypes_33;
                  MR_Word check_hlds__det_report__SwitchVarType_34;

                  {
                    check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55, &check_hlds__det_report__VarTypes_33);
                  }
                  {
                    hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_33, check_hlds__det_report__SwitchVar_103, &check_hlds__det_report__SwitchVarType_34);
                  }
                  {
                    check_hlds__det_report__reqscope_check_goal_detism_for_cases_7_p_0(check_hlds__det_report__RequiredDetism_105, check_hlds__det_report__SwitchVar_103, check_hlds__det_report__SwitchVarType_34, check_hlds__det_report__Cases_104, check_hlds__det_report__InstMap0_10, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55, check_hlds__det_report__STATE_VARIABLE_DetInfo_56);
                  }
                }
              else
                {
                  MR_String check_hlds__det_report__ScopeWord_35 = ((&check_hlds__det_report_vector_common_9[0 + check_hlds__det_report__RequiredDetism_105]))->check_hlds__det_report__vector_common_type_9_0__vct_9_f_0;

                  {
                    check_hlds__det_report__generate_error_not_switch_on_required_var_5_p_0(check_hlds__det_report__RequiredVar_106, check_hlds__det_report__ScopeWord_35, check_hlds__det_report__ScopeGoalInfo_9, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55, check_hlds__det_report__STATE_VARIABLE_DetInfo_56);
                  }
                }
            }
            break;
          case (MR_Integer) 3:
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
            break;
          case (MR_Integer) 4:
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
            break;
          case (MR_Integer) 5:
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
            break;
          case (MR_Integer) 6:
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__det_report__SubGoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__Detism_41;
              MR_Word check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_8, (MR_Integer) 0)));

              {
                check_hlds__det_report__Detism_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_40);
              }
              switch (check_hlds__det_report__Detism_41) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  {
                  }
                  break;
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.reqscope_check_scope\'/6", (MR_String) "Loop control scope with strange determinism");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                  }
                  break;
              }
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_56 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_55;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_4_p_0(
  MR_Word check_hlds__det_report__Goal_5,
  MR_Word check_hlds__det_report__InstMap0_6,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_76)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;
        MR_Word check_hlds__det_report__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_5, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_5, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__det_report__GoalExpr_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_report__SubGoal_22 = (MR_Word) MR_body(((MR_Word) check_hlds__det_report__GoalExpr_8), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_22;

                check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__det_report__RHS_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)));
              MR_Word check_hlds__det_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
              MR_Word check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
              MR_Word check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_8, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) check_hlds__det_report__RHS_37)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
                  break;
                case (MR_Integer) 1:
                  *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__det_report__Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 3)));
                    MR_Word check_hlds__det_report__Modes_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 4)));
                    MR_Word check_hlds__det_report__LambdaGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 6)));
                    MR_Word check_hlds__det_report__VarsModes_54;
                    MR_Word check_hlds__det_report__ModuleInfo_55;
                    MR_Word check_hlds__det_report__LambdaInstMap0_56;
                    MR_Word check_hlds__det_report___Purity_45 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) & (MR_Integer) 3);
                    MR_Word check_hlds__det_report___Groundness_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__det_report___PorF_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__det_report___LambdaNonLocals_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 2)));
                    MR_Word check_hlds__det_report___Detism_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__RHS_37, (MR_Integer) 5)));

                    {
                      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__det_report_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__det_report__Vars_50, check_hlds__det_report__Modes_51, &check_hlds__det_report__VarsModes_54);
                    }
                    {
                      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__ModuleInfo_55);
                    }
                    {
                      check_hlds__det_report__lambda_update_instmap_4_p_0(check_hlds__det_report__VarsModes_54, check_hlds__det_report__ModuleInfo_55, check_hlds__det_report__InstMap0_6, &check_hlds__det_report__LambdaInstMap0_56);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__LambdaGoal_53;
                      MR_Word check_hlds__det_report__InstMap0__tmp_copy_6 = check_hlds__det_report__LambdaInstMap0_56;

                      check_hlds__det_report__InstMap0_6 = check_hlds__det_report__InstMap0__tmp_copy_6;
                      check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
                    }
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
                break;
              case (MR_Integer) 1:
                *check_hlds__det_report__STATE_VARIABLE_DetInfo_76 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__det_report__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word check_hlds__det_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

                  {
                    check_hlds__det_report__reqscope_check_conj_4_p_0(check_hlds__det_report__Goals_11, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__det_report__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

                  {
                    check_hlds__det_report__reqscope_check_disj_4_p_0(check_hlds__det_report__Goals_93, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__det_report__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word check_hlds__det_report__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word check_hlds__det_report__VarTypes_15;
                  MR_Word check_hlds__det_report__VarType_16;
                  MR_Word check_hlds__det_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));

                  {
                    check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__VarTypes_15);
                  }
                  {
                    hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_15, check_hlds__det_report__Var_12, &check_hlds__det_report__VarType_16);
                  }
                  {
                    check_hlds__det_report__reqscope_check_switch_6_p_0(check_hlds__det_report__Var_12, check_hlds__det_report__VarType_16, check_hlds__det_report__Cases_14, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__det_report__Reason_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84;
                  MR_Word check_hlds__det_report__SubGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));

                  {
                    check_hlds__det_report__reqscope_check_scope_6_p_0(check_hlds__det_report__Reason_23, check_hlds__det_report__SubGoal_94, check_hlds__det_report__GoalInfo_9, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_94;
                    MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_84_84;

                    check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75;
                    check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__det_report__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word check_hlds__det_report__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word check_hlds__det_report__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 4)));
                  MR_Word check_hlds__det_report__InstMap1_21;
                  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87;
                  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88;
                  MR_Word check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

                  {
                    check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Cond_18, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87);
                  }
                  {
                    hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Cond_18, check_hlds__det_report__InstMap0_6, &check_hlds__det_report__InstMap1_21);
                  }
                  {
                    check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Then_19, check_hlds__det_report__InstMap1_21, check_hlds__det_report__STATE_VARIABLE_DetInfo_87_87, &check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__Else_20;
                    MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_88_88;

                    check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0__tmp_copy_75;
                    check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__det_report__ShortHand_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_8, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__det_report__ShortHand_24)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.reqscope_check_goal\'/4", (MR_String) "bi_implication");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__det_report__MainGoal_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 4)));
                        MR_Word check_hlds__det_report__OrElseGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 5)));
                        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82;
                        MR_Word check_hlds__det_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 0)));
                        MR_Word check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 1)));
                        MR_Word check_hlds__det_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 2)));
                        MR_Word check_hlds__det_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 3)));
                        MR_Word check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_24, (MR_Integer) 6)));

                        {
                          check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__MainGoal_29, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_75, &check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82);
                        }
                        {
                          check_hlds__det_report__reqscope_check_disj_4_p_0(check_hlds__det_report__OrElseGoals_30, check_hlds__det_report__InstMap0_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_82_82, check_hlds__det_report__STATE_VARIABLE_DetInfo_76);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__det_report__SubGoal_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 2)));
                        MR_Word check_hlds__det_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 0)));
                        MR_Word check_hlds__det_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_24, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__det_report__Goal__tmp_copy_5 = check_hlds__det_report__SubGoal_95;

                          check_hlds__det_report__Goal_5 = check_hlds__det_report__Goal__tmp_copy_5;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__InstMap0_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
  MR_Word * check_hlds__det_report__HeadVar__7_7)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_report__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
      }
    else
      {
        MR_Word check_hlds__det_report__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__Msgs1_21;
        MR_Word check_hlds__det_report__Msgs2_22;
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25;
        MR_Word check_hlds__det_report__GoalExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_14, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__GoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_14, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__Actual_38;
        MR_Word check_hlds__det_report__CompareResult_39;

        {
          check_hlds__det_report__Actual_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_37);
        }
        {
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__Actual_38, &check_hlds__det_report__CompareResult_39);
        }
        switch (check_hlds__det_report__CompareResult_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 0:
            {
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_36, check_hlds__det_report__GoalInfo_37, check_hlds__det_report__InstMap0_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__Actual_38, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25, &check_hlds__det_report__Msgs1_21);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              check_hlds__det_report__Msgs1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
            }
            break;
        }
        {
          check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(check_hlds__det_report__Goals_15, check_hlds__det_report__InstMap0_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_25_25, check_hlds__det_report__STATE_VARIABLE_DetInfo_6, &check_hlds__det_report__Msgs2_22);
        }
        {
          *check_hlds__det_report__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_21, check_hlds__det_report__Msgs2_22);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
  MR_Word check_hlds__det_report__ConsId_3,
  MR_Word * check_hlds__det_report__Match_4)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__det_report__Match_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__ConsId_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__SwitchVarSynonyms_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word * check_hlds__det_report__HeadVar__5_5,
  MR_Word * check_hlds__det_report__HeadVar__6_6)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__succeeded = (check_hlds__det_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__det_report__succeeded)
              {
                *check_hlds__det_report__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *check_hlds__det_report__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__det_report__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word check_hlds__det_report__TypeInfo_40_40;
        MR_Word check_hlds__det_report__Disjunct_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__Disjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Disjunct_8, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Disjunct_8, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__Unification_20;
        MR_Word check_hlds__det_report__Var_22;
        MR_Word check_hlds__det_report__ConsId_23;
        MR_Word check_hlds__det_report__ArgVars_24;
        MR_Word check_hlds__det_report__V_17_17;
        MR_Word check_hlds__det_report__V_18_18;
        MR_Word check_hlds__det_report__V_19_19;
        MR_Word check_hlds__det_report__V_21_21;
        MR_Word check_hlds__det_report__V_25_25;
        MR_Word check_hlds__det_report__V_26_26;
        MR_Word check_hlds__det_report__V_27_27;
        MR_Word check_hlds__det_report__MainConsId_28;

        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__det_report__succeeded)
          {
            check_hlds__det_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 0)));
            check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 1)));
            check_hlds__det_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 2)));
            check_hlds__det_report__Unification_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 3)));
            check_hlds__det_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_15, (MR_Integer) 4)));
            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_20)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__det_report__succeeded)
              {
                check_hlds__det_report__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 0)));
                check_hlds__det_report__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 1)));
                check_hlds__det_report__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 2)));
                check_hlds__det_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 3)));
                check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 4)));
                check_hlds__det_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_20, (MR_Integer) 5)));
                check_hlds__det_report__TypeInfo_40_40 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                {
                  check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_40_40, ((MR_Box) (check_hlds__det_report__Var_22)), check_hlds__det_report__SwitchVarSynonyms_2);
                }
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__det_report__succeeded)
                      {
                        check_hlds__det_report__MainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
                        {
                          check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__ConsId_23, check_hlds__det_report__MainConsId_28);
                        }
                      }
                    if (check_hlds__det_report__succeeded)
                      {
                        MR_Word check_hlds__det_report__TypeInfo_45_45;
                        MR_Word check_hlds__det_report__V_37_37;
                        MR_Word check_hlds__det_report__V_38_38;
                        MR_Word check_hlds__det_report__V_43_43;

                        {
                          check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_9, check_hlds__det_report__SwitchVarSynonyms_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__V_43_43, check_hlds__det_report__HeadVar__6_6);
                        }
                        if (check_hlds__det_report__succeeded)
                          {
                            check_hlds__det_report__TypeInfo_45_45 = (MR_Word) &check_hlds__det_report_scalar_common_2[55];
                            {
                              check_hlds__det_report__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_report__TypeInfo_45_45, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (check_hlds__det_report__V_43_43)));
                            }
                            if (check_hlds__det_report__succeeded)
                              {
                                {
                                  check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_24));
                                }
                                {
                                  check_hlds__det_report__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, 0) = ((MR_Box) (check_hlds__det_report__ConsId_23));
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_37_37, 1) = ((MR_Box) (check_hlds__det_report__V_38_38));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  *check_hlds__det_report__HeadVar__5_5 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_37_37));
                                }
                                check_hlds__det_report__succeeded = MR_TRUE;
                              }
                          }
                      }
                    else
                      {
                        MR_Word check_hlds__det_report__TypeCtorInfo_42_42;
                        MR_Word check_hlds__det_report__LeftOverConsIds_29;
                        MR_Word check_hlds__det_report__LeftOverMatches_30;
                        MR_Word check_hlds__det_report__NonLocals_31;
                        MR_Word check_hlds__det_report__ArgVarsSet_32;
                        MR_Word check_hlds__det_report__MaybeArgVars_34;
                        MR_Word check_hlds__det_report__V_39_39;
                        MR_Word check_hlds__det_report__NonLocalArgVarsSet_33;

                        {
                          check_hlds__det_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_report__HeadVar__4_4, ((MR_Box) (check_hlds__det_report__ConsId_23)), &check_hlds__det_report__LeftOverConsIds_29);
                        }
                        if (check_hlds__det_report__succeeded)
                          {
                            {
                              check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_9, check_hlds__det_report__SwitchVarSynonyms_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__LeftOverConsIds_29, check_hlds__det_report__HeadVar__5_5, &check_hlds__det_report__LeftOverMatches_30);
                            }
                            if (check_hlds__det_report__succeeded)
                              {
                                {
                                  check_hlds__det_report__NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_report__GoalInfo_16);
                                }
                                check_hlds__det_report__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                {
                                  parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__ArgVars_24, &check_hlds__det_report__ArgVarsSet_32);
                                }
                                {
                                  parse_tree__set_of_var__intersect_3_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__NonLocals_31, check_hlds__det_report__ArgVarsSet_32, &check_hlds__det_report__NonLocalArgVarsSet_33);
                                }
                                {
                                  check_hlds__det_report__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(check_hlds__det_report__TypeCtorInfo_42_42, check_hlds__det_report__NonLocalArgVarsSet_33);
                                }
                                if (check_hlds__det_report__succeeded)
                                  {
                                    check_hlds__det_report__MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeArgVars_34, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_24));
                                  }
                                else
                                  check_hlds__det_report__MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                {
                                  check_hlds__det_report__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (check_hlds__det_report__ConsId_23));
                                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__MaybeArgVars_34));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *check_hlds__det_report__HeadVar__6_6 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_39_39));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__LeftOverMatches_30));
                                }
                                check_hlds__det_report__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__det_report__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box * check_hlds__det_report__wrapper_arg_2)
{
  {
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
    MR_Word check_hlds__det_report__conv0_Match_4;

    {
      check_hlds__det_report__make_switch_match_no_args_2_p_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), &check_hlds__det_report__conv0_Match_4);
    }
    *check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_Match_4));
  }
}

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2,
  MR_Word check_hlds__det_report__MainConsId_3,
  MR_Word check_hlds__det_report__OtherConsIds_4,
  MR_Word * check_hlds__det_report__MainMatch_5,
  MR_Word * check_hlds__det_report__OtherMatches_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__det_report__MainMatch_5 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0, (MR_Word) &check_hlds__det_report_scalar_common_1[3], check_hlds__det_report__OtherConsIds_4, check_hlds__det_report__OtherMatches_6);
            }
          }
        else
          {
            MR_Word check_hlds__det_report__Conjunct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__Conjuncts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Conjunct_13, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Conjunct_13, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__ArgVars_28;
            MR_Word check_hlds__det_report__TypeInfo_61_61;
            MR_Word check_hlds__det_report__Unification_25;
            MR_Word check_hlds__det_report__Var_27;
            MR_Word check_hlds__det_report__V_64_64;
            MR_Word check_hlds__det_report__V_22_22;
            MR_Word check_hlds__det_report__V_23_23;
            MR_Word check_hlds__det_report__V_24_24;
            MR_Word check_hlds__det_report__V_26_26;
            MR_Word check_hlds__det_report__V_29_29;
            MR_Word check_hlds__det_report__V_30_30;
            MR_Word check_hlds__det_report__V_31_31;

            check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__det_report__succeeded)
              {
                check_hlds__det_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)));
                check_hlds__det_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
                check_hlds__det_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 2)));
                check_hlds__det_report__Unification_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 3)));
                check_hlds__det_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 4)));
                check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_25)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 0)));
                    check_hlds__det_report__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 1)));
                    check_hlds__det_report__ArgVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 2)));
                    check_hlds__det_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 3)));
                    check_hlds__det_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 4)));
                    check_hlds__det_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__Unification_25, (MR_Integer) 5)));
                    {
                      check_hlds__det_report__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__det_report__MainConsId_3, check_hlds__det_report__V_64_64);
                    }
                    if (check_hlds__det_report__succeeded)
                      {
                        check_hlds__det_report__TypeInfo_61_61 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                        {
                          check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_61_61, ((MR_Box) (check_hlds__det_report__Var_27)), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2);
                        }
                        if (check_hlds__det_report__succeeded)
                          check_hlds__det_report__succeeded = (check_hlds__det_report__OtherConsIds_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
            if (check_hlds__det_report__succeeded)
              {
                MR_Word check_hlds__det_report__TypeCtorInfo_62_62;
                MR_Word check_hlds__det_report__NonLocals_32;
                MR_Word check_hlds__det_report__ArgVarsSet_33;
                MR_Word check_hlds__det_report__MaybeArgVars_35;
                MR_Word check_hlds__det_report__NonLocalArgVarsSet_34;

                {
                  check_hlds__det_report__NonLocals_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_report__GoalInfo_21);
                }
                check_hlds__det_report__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  check_hlds__det_report__ArgVarsSet_33 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__ArgVars_28);
                }
                {
                  parse_tree__set_of_var__intersect_3_p_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__NonLocals_32, check_hlds__det_report__ArgVarsSet_33, &check_hlds__det_report__NonLocalArgVarsSet_34);
                }
                {
                  check_hlds__det_report__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(check_hlds__det_report__TypeCtorInfo_62_62, check_hlds__det_report__NonLocalArgVarsSet_34);
                }
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeArgVars_35, 0) = ((MR_Box) (check_hlds__det_report__ArgVars_28));
                  }
                else
                  check_hlds__det_report__MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__det_report__MainMatch_5 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_report__MaybeArgVars_35));
                }
                *check_hlds__det_report__OtherMatches_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                MR_Word check_hlds__det_report__MainMatch0_37;
                MR_Word check_hlds__det_report__OtherMatches0_38;
                MR_Word check_hlds__det_report__Disjuncts_36;
                MR_Word check_hlds__det_report__V_46_46;
                MR_Word check_hlds__det_report__V_47_47;

                check_hlds__det_report__succeeded = ((((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (check_hlds__det_report__succeeded)
                  {
                    check_hlds__det_report__Disjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
                    {
                      check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__MainConsId_3));
                    }
                    {
                      check_hlds__det_report__succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(check_hlds__det_report__Disjuncts_36, check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2, check_hlds__det_report__V_46_46, check_hlds__det_report__OtherConsIds_4, &check_hlds__det_report__V_47_47, &check_hlds__det_report__OtherMatches0_38);
                    }
                    if (check_hlds__det_report__succeeded)
                      {
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__V_47_47)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__det_report__succeeded)
                          check_hlds__det_report__MainMatch0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__V_47_47, (MR_Integer) 0)));
                      }
                  }
                if (check_hlds__det_report__succeeded)
                  {
                    *check_hlds__det_report__MainMatch_5 = check_hlds__det_report__MainMatch0_37;
                    *check_hlds__det_report__OtherMatches_6 = check_hlds__det_report__OtherMatches0_38;
                  }
                else
                  {
                    MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54;
                    MR_Word check_hlds__det_report__ToVar_43;
                    MR_Word check_hlds__det_report__TypeInfo_63_63;
                    MR_Word check_hlds__det_report__FromVar_44;
                    MR_Word check_hlds__det_report__Unification_51;
                    MR_Word check_hlds__det_report__V_39_39;
                    MR_Word check_hlds__det_report__V_40_40;
                    MR_Word check_hlds__det_report__V_41_41;
                    MR_Word check_hlds__det_report__V_42_42;

                    check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__GoalExpr_20)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__det_report__succeeded)
                      {
                        check_hlds__det_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 0)));
                        check_hlds__det_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 1)));
                        check_hlds__det_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 2)));
                        check_hlds__det_report__Unification_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 3)));
                        check_hlds__det_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_20, (MR_Integer) 4)));
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__Unification_51)) == (MR_mktag((MR_Integer) 2)));
                        if (check_hlds__det_report__succeeded)
                          {
                            check_hlds__det_report__ToVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__Unification_51, (MR_Integer) 0)));
                            check_hlds__det_report__FromVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__Unification_51, (MR_Integer) 1)));
                            check_hlds__det_report__TypeInfo_63_63 = (MR_Word) &check_hlds__det_report_scalar_common_2[0];
                            {
                              check_hlds__det_report__succeeded = mercury__list__member_2_p_0(check_hlds__det_report__TypeInfo_63_63, ((MR_Box) (check_hlds__det_report__FromVar_44)), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2);
                            }
                          }
                      }
                    if (check_hlds__det_report__succeeded)
                      {
                        check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54, 0) = ((MR_Box) (check_hlds__det_report__ToVar_43));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2));
                      }
                    else
                      check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2;
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Conjuncts_14;
                      MR_Word check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_48_54;

                      check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0_2 = check_hlds__det_report__STATE_VARIABLE_SwitchVarSynonyms_0__tmp_copy_2;
                      check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__InstMap0_4,
  MR_Word check_hlds__det_report__HeadVar__5_5,
  MR_Word check_hlds__det_report__HeadVar__6_6,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_8,
  MR_Word * check_hlds__det_report__HeadVar__9_9)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    if ((check_hlds__det_report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_report__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_8 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7;
      }
    else
      {
        MR_Word check_hlds__det_report__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__MainConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__OtherConsIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Case_20, (MR_Integer) 2)));
        MR_Word check_hlds__det_report__GoalSeq_30;
        MR_Word check_hlds__det_report__MainMatch_31;
        MR_Word check_hlds__det_report__OtherMatches_32;
        MR_Word check_hlds__det_report__NewSwitchContext_33;
        MR_Word check_hlds__det_report__SwitchContexts1_34;
        MR_Word check_hlds__det_report__ModuleInfo0_35;
        MR_Word check_hlds__det_report__InstMap1_36;
        MR_Word check_hlds__det_report__ModuleInfo_37;
        MR_Word check_hlds__det_report__Msgs1_38;
        MR_Word check_hlds__det_report__Msgs2_39;
        MR_Word check_hlds__det_report__V_42_42;
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44;
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45;
        MR_Word check_hlds__det_report__GoalExpr_56;
        MR_Word check_hlds__det_report__GoalInfo_57;
        MR_Word check_hlds__det_report__Actual_58;
        MR_Word check_hlds__det_report__CompareResult_59;

        {
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__det_report__Goal_29, &check_hlds__det_report__GoalSeq_30);
        }
        {
          check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__1_1));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_report__find_switch_var_matches_6_p_0(check_hlds__det_report__GoalSeq_30, check_hlds__det_report__V_42_42, check_hlds__det_report__MainConsId_27, check_hlds__det_report__OtherConsIds_28, &check_hlds__det_report__MainMatch_31, &check_hlds__det_report__OtherMatches_32);
        }
        {
          check_hlds__det_report__NewSwitchContext_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 0) = ((MR_Box) (check_hlds__det_report__HeadVar__1_1));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 1) = ((MR_Box) (check_hlds__det_report__MainMatch_31));
          MR_hl_field(MR_mktag(0), check_hlds__det_report__NewSwitchContext_33, 2) = ((MR_Box) (check_hlds__det_report__OtherMatches_32));
        }
        {
          check_hlds__det_report__SwitchContexts1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchContexts1_34, 0) = ((MR_Box) (check_hlds__det_report__NewSwitchContext_33));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__SwitchContexts1_34, 1) = ((MR_Box) (check_hlds__det_report__HeadVar__6_6));
        }
        {
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__ModuleInfo0_35);
        }
        {
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__MainConsId_27, check_hlds__det_report__OtherConsIds_28, check_hlds__det_report__InstMap0_4, &check_hlds__det_report__InstMap1_36, check_hlds__det_report__ModuleInfo0_35, &check_hlds__det_report__ModuleInfo_37);
        }
        {
          check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_report__ModuleInfo_37, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_7, &check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44);
        }
        check_hlds__det_report__GoalExpr_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_29, (MR_Integer) 0)));
        check_hlds__det_report__GoalInfo_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_29, (MR_Integer) 1)));
        {
          check_hlds__det_report__Actual_58 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_57);
        }
        {
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__Actual_58, &check_hlds__det_report__CompareResult_59);
        }
        switch (check_hlds__det_report__CompareResult_59) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 0:
            {
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_56, check_hlds__det_report__GoalInfo_57, check_hlds__det_report__InstMap1_36, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__Actual_58, check_hlds__det_report__SwitchContexts1_34, check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44, &check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45, &check_hlds__det_report__Msgs1_38);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              check_hlds__det_report__Msgs1_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45 = check_hlds__det_report__STATE_VARIABLE_DetInfo_44_44;
            }
            break;
        }
        {
          check_hlds__det_report__det_diagnose_switch_arms_9_p_0(check_hlds__det_report__HeadVar__1_1, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__Cases_21, check_hlds__det_report__InstMap0_4, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__HeadVar__6_6, check_hlds__det_report__STATE_VARIABLE_DetInfo_45_45, check_hlds__det_report__STATE_VARIABLE_DetInfo_8, &check_hlds__det_report__Msgs2_39);
        }
        {
          *check_hlds__det_report__HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_38, check_hlds__det_report__Msgs2_39);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__HeadVar__5_5,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_7,
  MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8,
  MR_Integer * check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9,
  MR_Word * check_hlds__det_report__HeadVar__10_10)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_report__HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9 = check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8;
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_7 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6;
      }
    else
      {
        MR_Word check_hlds__det_report__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__ActualCanFail_30;
        MR_Word check_hlds__det_report__DesiredCanFail_32;
        MR_Word check_hlds__det_report__DesiredSolns_33;
        MR_Word check_hlds__det_report__ClauseCanFail_34;
        MR_Word check_hlds__det_report__ClauseDesired_35;
        MR_Word check_hlds__det_report__Msgs1_36;
        MR_Word check_hlds__det_report__Msgs2_41;
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46;
        MR_Integer check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48;
        MR_Word check_hlds__det_report__GoalExpr_62;
        MR_Word check_hlds__det_report__GoalInfo_63;
        MR_Word check_hlds__det_report__Actual_64;
        MR_Word check_hlds__det_report__CompareResult_65;
        MR_Word check_hlds__det_report__V_31_31;
        MR_Word check_hlds__det_report__GoalInfo_38;
        MR_Word check_hlds__det_report__GoalDetism_39;
        MR_Word check_hlds__det_report__V_53_53;
        MR_Word check_hlds__det_report__V_37_37;
        MR_Word check_hlds__det_report__V_40_40;

        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__HeadVar__4_4, &check_hlds__det_report__ActualCanFail_30, &check_hlds__det_report__V_31_31);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__HeadVar__3_3, &check_hlds__det_report__DesiredCanFail_32, &check_hlds__det_report__DesiredSolns_33);
        }
        check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredCanFail_32 == (MR_Integer) 1);
        if (check_hlds__det_report__succeeded)
          check_hlds__det_report__succeeded = (check_hlds__det_report__ActualCanFail_30 == (MR_Integer) 0);
        if (check_hlds__det_report__succeeded)
          check_hlds__det_report__ClauseCanFail_34 = (MR_Integer) 1;
        else
          check_hlds__det_report__ClauseCanFail_34 = (MR_Integer) 0;
        {
          parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__ClauseCanFail_34, check_hlds__det_report__DesiredSolns_33);
        }
        check_hlds__det_report__GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 0)));
        check_hlds__det_report__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 1)));
        {
          check_hlds__det_report__Actual_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_63);
        }
        {
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__Actual_64, &check_hlds__det_report__CompareResult_65);
        }
        switch (check_hlds__det_report__CompareResult_65) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 0:
            {
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_62, check_hlds__det_report__GoalInfo_63, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__ClauseDesired_35, check_hlds__det_report__Actual_64, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6, &check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46, &check_hlds__det_report__Msgs1_36);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              check_hlds__det_report__Msgs1_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_6;
            }
            break;
        }
        check_hlds__det_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 0)));
        check_hlds__det_report__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_21, (MR_Integer) 1)));
        {
          check_hlds__det_report__GoalDetism_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_38);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__GoalDetism_39, &check_hlds__det_report__V_40_40, &check_hlds__det_report__V_53_53);
        }
        check_hlds__det_report__succeeded = ((MR_Integer) 0 == check_hlds__det_report__V_53_53);
        if (check_hlds__det_report__succeeded)
          check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48 = check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8;
        else
          {
            check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48 = (check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_0_8 + (MR_Integer) 1);
          }
        {
          check_hlds__det_report__det_diagnose_disj_10_p_0(check_hlds__det_report__Goals_22, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__HeadVar__5_5, check_hlds__det_report__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_report__STATE_VARIABLE_DetInfo_7, check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_48_48, check_hlds__det_report__STATE_VARIABLE_DisjunctsWithSoln_9, &check_hlds__det_report__Msgs2_41);
        }
        {
          *check_hlds__det_report__HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_36, check_hlds__det_report__Msgs2_41);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
  MR_Word check_hlds__det_report__Desired_6,
  MR_Word check_hlds__det_report__Actual_7,
  MR_Word check_hlds__det_report__Context_8,
  MR_Word check_hlds__det_report__StartingPieces_9,
  MR_Word * check_hlds__det_report__Msgs_10)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__TypeCtorInfo_78_78;
    MR_Word check_hlds__det_report__DesiredCanFail_11;
    MR_Word check_hlds__det_report__DesiredSolns_12;
    MR_Word check_hlds__det_report__ActualCanFail_13;
    MR_Word check_hlds__det_report__ActualSolns_14;
    MR_Word check_hlds__det_report__CmpCanFail_15;
    MR_Word check_hlds__det_report__CanFailPieces_16;
    MR_Word check_hlds__det_report__CmpSolns_17;
    MR_Word check_hlds__det_report__ConnectPieces_20;
    MR_Word check_hlds__det_report__SolnsPieces_21;
    MR_Word check_hlds__det_report__RawPieces_22;
    MR_Word check_hlds__det_report__Pieces_25;
    MR_Word check_hlds__det_report__V_38_38;
    MR_Word check_hlds__det_report__V_72_72;
    MR_Word check_hlds__det_report__V_73_73;
    MR_Word check_hlds__det_report__V_74_74;
    MR_Word check_hlds__det_report__V_75_75;

    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_6, &check_hlds__det_report__DesiredCanFail_11, &check_hlds__det_report__DesiredSolns_12);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Actual_7, &check_hlds__det_report__ActualCanFail_13, &check_hlds__det_report__ActualSolns_14);
    }
    {
      parse_tree__prog_detism__compare_canfails_3_p_0(check_hlds__det_report__DesiredCanFail_11, check_hlds__det_report__ActualCanFail_13, &check_hlds__det_report__CmpCanFail_15);
    }
    switch (check_hlds__det_report__CmpCanFail_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 0:
        {
          check_hlds__det_report__CanFailPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[94]);
        }
        break;
    }
    {
      parse_tree__prog_detism__compare_solncounts_3_p_0(check_hlds__det_report__DesiredSolns_12, check_hlds__det_report__ActualSolns_14, &check_hlds__det_report__CmpSolns_17);
    }
    switch (check_hlds__det_report__CmpSolns_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          check_hlds__det_report__SolnsPieces_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 0:
        {
          if ((check_hlds__det_report__CanFailPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              check_hlds__det_report__ConnectPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[96]);
            }
          check_hlds__det_report__SolnsPieces_21 = ((&check_hlds__det_report_vector_common_8[0 + check_hlds__det_report__DesiredSolns_12]))->check_hlds__det_report__vector_common_type_8_0__vct_8_f_0;
        }
        break;
    }
    check_hlds__det_report__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__det_report__V_38_38 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__ConnectPieces_20, check_hlds__det_report__SolnsPieces_21);
    }
    {
      check_hlds__det_report__RawPieces_22 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__CanFailPieces_16, check_hlds__det_report__V_38_38);
    }
    if ((check_hlds__det_report__RawPieces_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__det_report__V_41_41;
        MR_Word check_hlds__det_report__V_43_43;
        MR_Word check_hlds__det_report__V_46_46;
        MR_Word check_hlds__det_report__V_47_47;
        MR_String check_hlds__det_report__V_48_48;
        MR_Word check_hlds__det_report__V_49_49;
        MR_Word check_hlds__det_report__V_52_52;
        MR_Word check_hlds__det_report__V_54_54;
        MR_Word check_hlds__det_report__V_57_57;
        MR_Word check_hlds__det_report__V_58_58;
        MR_String check_hlds__det_report__V_59_59;

        {
          check_hlds__det_report__V_48_48 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Desired_6);
        }
        {
          check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (check_hlds__det_report__V_48_48));
        }
        {
          check_hlds__det_report__V_59_59 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Actual_7);
        }
        {
          check_hlds__det_report__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__det_report__V_58_58, 0) = ((MR_Box) (check_hlds__det_report__V_59_59));
        }
        {
          check_hlds__det_report__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 0) = ((MR_Box) (check_hlds__det_report__V_58_58));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
        }
        {
          check_hlds__det_report__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[103])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_54_54, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
        }
        {
          check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_54_54));
        }
        {
          check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[75])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
        }
        {
          check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
        }
        {
          check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[102])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
        }
        {
          check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
        }
        {
          check_hlds__det_report__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[101])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
        }
      }
    else
      {
        {
          check_hlds__det_report__Pieces_25 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__RawPieces_22, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14]));
        }
      }
    {
      check_hlds__det_report__V_75_75 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_78_78, check_hlds__det_report__StartingPieces_9, check_hlds__det_report__Pieces_25);
    }
    {
      check_hlds__det_report__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_74_74, 0) = ((MR_Box) (check_hlds__det_report__V_75_75));
    }
    {
      check_hlds__det_report__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 0) = ((MR_Box) (check_hlds__det_report__V_74_74));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__det_report__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (check_hlds__det_report__Context_8));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 1) = ((MR_Box) (check_hlds__det_report__V_73_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__det_report__Msgs_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_72_72));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
  MR_Word check_hlds__det_report__GoalExpr_10,
  MR_Word check_hlds__det_report__GoalInfo_11,
  MR_Word check_hlds__det_report__InstMap0_12,
  MR_Word check_hlds__det_report__Desired_13,
  MR_Word check_hlds__det_report__Actual_14,
  MR_Word check_hlds__det_report__SwitchContexts_15,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_110,
  MR_Word * check_hlds__det_report__Msgs_17)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    switch (MR_tag((MR_Word) check_hlds__det_report__GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_report__DesiredCanFail_84;
          MR_Word check_hlds__det_report__ActualCanFail_85;
          MR_Word check_hlds__det_report__ActualSolns_86;
          MR_Word check_hlds__det_report__DesiredSolns_240;

          {
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__DesiredCanFail_84, &check_hlds__det_report__DesiredSolns_240);
          }
          {
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Actual_14, &check_hlds__det_report__ActualCanFail_85, &check_hlds__det_report__ActualSolns_86);
          }
          check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredCanFail_84 == (MR_Integer) 1);
          if (check_hlds__det_report__succeeded)
            check_hlds__det_report__succeeded = (check_hlds__det_report__ActualCanFail_85 == (MR_Integer) 0);
          if (check_hlds__det_report__succeeded)
            {
              MR_Word check_hlds__det_report__V_124_124;
              MR_Word check_hlds__det_report__Context_230;

              {
                check_hlds__det_report__Context_230 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
              }
              {
                check_hlds__det_report__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_124_124, 0) = ((MR_Box) (check_hlds__det_report__Context_230));
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[89])));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_report__Msgs_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_124_124));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          else
            {
              check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredSolns_240 == (MR_Integer) 0);
              if (check_hlds__det_report__succeeded)
                {
                  check_hlds__det_report__succeeded = (check_hlds__det_report__ActualSolns_86 == (MR_Integer) 0);
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                }
              if (check_hlds__det_report__succeeded)
                {
                  MR_Word check_hlds__det_report__V_134_134;
                  MR_Word check_hlds__det_report__Context_232;

                  {
                    check_hlds__det_report__Context_232 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                  }
                  {
                    check_hlds__det_report__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_134_134, 0) = ((MR_Box) (check_hlds__det_report__Context_232));
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[90])));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__det_report__Msgs_17 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_134_134));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              else
                *check_hlds__det_report__Msgs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__det_report__LHS_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)));
          MR_Word check_hlds__det_report__RHS_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
          MR_Word check_hlds__det_report__UnifyContext_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
          MR_Word check_hlds__det_report__Context_226;
          MR_Word check_hlds__det_report__StartingPieces_227;
          MR_Word check_hlds__det_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
          MR_Word check_hlds__det_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));

          {
            check_hlds__det_report__Context_226 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
          }
          {
            check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, check_hlds__det_report__UnifyContext_58, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__LHS_54, check_hlds__det_report__RHS_55, &check_hlds__det_report__StartingPieces_227);
          }
          {
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_226, check_hlds__det_report__StartingPieces_227, check_hlds__det_report__Msgs_17);
          }
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__det_report__PredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)));
          MR_Integer check_hlds__det_report__ProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
          MR_Word check_hlds__det_report__CallContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
          MR_Word check_hlds__det_report__InitMsgs_45;
          MR_Word check_hlds__det_report__StartingPieces_46;
          MR_Word check_hlds__det_report__AtomicMsgs_47;
          MR_Word check_hlds__det_report__Context_223;
          MR_Word check_hlds__det_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
          MR_Word check_hlds__det_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
          MR_Word check_hlds__det_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__GoalExpr_10, (MR_Integer) 5)));

          {
            check_hlds__det_report__Context_223 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
          }
          {
            check_hlds__det_report__det_report_call_context_7_p_0(check_hlds__det_report__Context_223, check_hlds__det_report__CallContext_43, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__PredId_39, check_hlds__det_report__ProcId_40, &check_hlds__det_report__InitMsgs_45, &check_hlds__det_report__StartingPieces_46);
          }
          {
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_223, check_hlds__det_report__StartingPieces_46, &check_hlds__det_report__AtomicMsgs_47);
          }
          {
            *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__InitMsgs_45, check_hlds__det_report__AtomicMsgs_47);
          }
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_report__GenericCall_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__GenericCallId_53;
              MR_Word check_hlds__det_report__V_164_164;
              MR_String check_hlds__det_report__V_165_165;
              MR_Word check_hlds__det_report__Context_224;
              MR_Word check_hlds__det_report__StartingPieces_225;
              MR_Word check_hlds__det_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
              MR_Word check_hlds__det_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
              MR_Word check_hlds__det_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
              MR_Word check_hlds__det_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 5)));

              {
                check_hlds__det_report__Context_224 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
              }
              {
                hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__det_report__GenericCall_48, &check_hlds__det_report__GenericCallId_53);
              }
              {
                check_hlds__det_report__V_165_165 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(check_hlds__det_report__GenericCallId_53);
              }
              {
                check_hlds__det_report__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_164_164, 1) = ((MR_Box) (check_hlds__det_report__V_165_165));
              }
              {
                check_hlds__det_report__StartingPieces_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__StartingPieces_225, 0) = ((MR_Box) (check_hlds__det_report__V_164_164));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__StartingPieces_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__Context_224, check_hlds__det_report__StartingPieces_225, check_hlds__det_report__Msgs_17);
              }
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String check_hlds__det_report__DesiredStr_66;
              MR_Word check_hlds__det_report__V_146_146;
              MR_Word check_hlds__det_report__V_149_149;
              MR_Word check_hlds__det_report__V_150_150;
              MR_Word check_hlds__det_report__V_157_157;
              MR_Word check_hlds__det_report__V_158_158;
              MR_Word check_hlds__det_report__V_159_159;
              MR_Word check_hlds__det_report__Context_228;
              MR_Word check_hlds__det_report__Pieces_229;

              {
                check_hlds__det_report__Context_228 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
              }
              {
                check_hlds__det_report__DesiredStr_66 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__Desired_13);
              }
              {
                check_hlds__det_report__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_150_150, 1) = ((MR_Box) (check_hlds__det_report__DesiredStr_66));
              }
              {
                check_hlds__det_report__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_149_149, 0) = ((MR_Box) (check_hlds__det_report__V_150_150));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_149_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
              }
              {
                check_hlds__det_report__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[88])));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_146_146, 1) = ((MR_Box) (check_hlds__det_report__V_149_149));
              }
              {
                check_hlds__det_report__Pieces_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_229, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[87])));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_229, 1) = ((MR_Box) (check_hlds__det_report__V_146_146));
              }
              {
                check_hlds__det_report__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_159_159, 0) = ((MR_Box) (check_hlds__det_report__Pieces_229));
              }
              {
                check_hlds__det_report__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_158_158, 0) = ((MR_Box) (check_hlds__det_report__V_159_159));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_report__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_157_157, 0) = ((MR_Box) (check_hlds__det_report__Context_228));
                MR_hl_field(MR_mktag(0), check_hlds__det_report__V_157_157, 1) = ((MR_Box) (check_hlds__det_report__V_158_158));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_report__Msgs_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_157_157));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *check_hlds__det_report__STATE_VARIABLE_DetInfo_110 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__det_report__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
              MR_Word check_hlds__det_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));

              {
                check_hlds__det_report__det_diagnose_conj_7_p_0(check_hlds__det_report__Goals_19, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer check_hlds__det_report__DisjunctsWithSoln_20;
              MR_Word check_hlds__det_report__Msgs1_21;
              MR_Word check_hlds__det_report__DesSolns_23;
              MR_Word check_hlds__det_report__Goals_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__V_22_22;
              MR_Integer check_hlds__det_report__V_200_200;

              {
                check_hlds__det_report__det_diagnose_disj_10_p_0(check_hlds__det_report__Goals_215, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__Actual_14, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, (MR_Integer) 0, &check_hlds__det_report__DisjunctsWithSoln_20, &check_hlds__det_report__Msgs1_21);
              }
              {
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__V_22_22, &check_hlds__det_report__DesSolns_23);
              }
              check_hlds__det_report__succeeded = (check_hlds__det_report__DesSolns_23 == (MR_Integer) 3);
              check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
              if (check_hlds__det_report__succeeded)
                {
                  check_hlds__det_report__succeeded = (check_hlds__det_report__DesSolns_23 == (MR_Integer) 2);
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                  if (check_hlds__det_report__succeeded)
                    {
                      check_hlds__det_report__V_200_200 = (MR_Integer) 1;
                      check_hlds__det_report__succeeded = (check_hlds__det_report__DisjunctsWithSoln_20 > check_hlds__det_report__V_200_200);
                    }
                }
              if (check_hlds__det_report__succeeded)
                {
                  MR_Word check_hlds__det_report__Context_24;
                  MR_Word check_hlds__det_report__NestingPieces_25;
                  MR_Word check_hlds__det_report__Msg_27;
                  MR_Word check_hlds__det_report__V_208_208;
                  MR_Word check_hlds__det_report__V_209_209;
                  MR_Word check_hlds__det_report__V_210_210;
                  MR_Word check_hlds__det_report__V_212_212;

                  {
                    check_hlds__det_report__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                  }
                  {
                    check_hlds__det_report__det_diagnose_switch_context_3_p_0(*check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__SwitchContexts_15, &check_hlds__det_report__NestingPieces_25);
                  }
                  {
                    check_hlds__det_report__V_210_210 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__NestingPieces_25, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[48]));
                  }
                  {
                    check_hlds__det_report__V_209_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_209_209, 0) = ((MR_Box) (check_hlds__det_report__V_210_210));
                  }
                  {
                    check_hlds__det_report__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_208_208, 0) = ((MR_Box) (check_hlds__det_report__V_209_209));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_208_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__det_report__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_27, 0) = ((MR_Box) (check_hlds__det_report__Context_24));
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__Msg_27, 1) = ((MR_Box) (check_hlds__det_report__V_208_208));
                  }
                  {
                    check_hlds__det_report__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_212_212, 0) = ((MR_Box) (check_hlds__det_report__Msg_27));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_212_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_212_212, check_hlds__det_report__Msgs1_21);
                  }
                }
              else
                *check_hlds__det_report__Msgs_17 = check_hlds__det_report__Msgs1_21;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__det_report__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__SwitchCanFail_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
              MR_Word check_hlds__det_report__Cases_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
              MR_Word check_hlds__det_report__VarTypes_36;
              MR_Word check_hlds__det_report__VarType_37;
              MR_Word check_hlds__det_report__Msgs2_38;
              MR_Word check_hlds__det_report__Msgs1_220;
              MR_Word check_hlds__det_report__V_167_167;
              MR_Word check_hlds__det_report__V_252_252;
              MR_Word check_hlds__det_report__V_31_31;

              check_hlds__det_report__succeeded = (check_hlds__det_report__SwitchCanFail_29 == (MR_Integer) 0);
              if (check_hlds__det_report__succeeded)
                {
                  check_hlds__det_report__V_167_167 = (MR_Integer) 1;
                  {
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__V_252_252, &check_hlds__det_report__V_31_31);
                  }
                  check_hlds__det_report__succeeded = (check_hlds__det_report__V_167_167 == check_hlds__det_report__V_252_252);
                }
              if (check_hlds__det_report__succeeded)
                {
                  MR_String check_hlds__det_report__VarStr_32;
                  MR_Word check_hlds__det_report__MaybeMissingPieces_33;
                  MR_Word check_hlds__det_report__Pieces_35;
                  MR_Word check_hlds__det_report__V_191_191;
                  MR_Word check_hlds__det_report__V_192_192;
                  MR_Word check_hlds__det_report__V_193_193;
                  MR_Word check_hlds__det_report__V_194_194;
                  MR_Word check_hlds__det_report__Context_216;
                  MR_Word check_hlds__det_report__NestingPieces_217;

                  {
                    check_hlds__det_report__Context_216 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
                  }
                  {
                    check_hlds__det_report__det_diagnose_switch_context_3_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__SwitchContexts_15, &check_hlds__det_report__NestingPieces_217);
                  }
                  {
                    check_hlds__det_report__find_missing_cons_ids_6_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Var_28, check_hlds__det_report__Cases_30, &check_hlds__det_report__VarStr_32, &check_hlds__det_report__MaybeMissingPieces_33);
                  }
                  if ((check_hlds__det_report__MaybeMissingPieces_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word check_hlds__det_report__V_170_170;
                      MR_Word check_hlds__det_report__V_171_171;

                      {
                        check_hlds__det_report__V_171_171 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), check_hlds__det_report__V_171_171, 0) = ((MR_Box) (check_hlds__det_report__VarStr_32));
                      }
                      {
                        check_hlds__det_report__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_170_170, 0) = ((MR_Box) (check_hlds__det_report__V_171_171));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[54])));
                      }
                      {
                        check_hlds__det_report__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[91])));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_35, 1) = ((MR_Box) (check_hlds__det_report__V_170_170));
                      }
                    }
                  else
                    {
                      MR_Word check_hlds__det_report__MissingPieces_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeMissingPieces_33, (MR_Integer) 0)));
                      MR_Word check_hlds__det_report__V_178_178;
                      MR_Word check_hlds__det_report__V_180_180;
                      MR_Word check_hlds__det_report__V_183_183;
                      MR_Word check_hlds__det_report__V_184_184;
                      MR_Word check_hlds__det_report__V_185_185;

                      {
                        check_hlds__det_report__V_184_184 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), check_hlds__det_report__V_184_184, 0) = ((MR_Box) (check_hlds__det_report__VarStr_32));
                      }
                      {
                        check_hlds__det_report__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_185_185, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[92])));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_185_185, 1) = ((MR_Box) (check_hlds__det_report__MissingPieces_34));
                      }
                      {
                        check_hlds__det_report__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_183_183, 0) = ((MR_Box) (check_hlds__det_report__V_184_184));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_183_183, 1) = ((MR_Box) (check_hlds__det_report__V_185_185));
                      }
                      {
                        check_hlds__det_report__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_180_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[91])));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_180_180, 1) = ((MR_Box) (check_hlds__det_report__V_183_183));
                      }
                      {
                        check_hlds__det_report__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), check_hlds__det_report__V_178_178, 1) = ((MR_Box) (check_hlds__det_report__V_180_180));
                      }
                      {
                        check_hlds__det_report__Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_178_178, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6]));
                      }
                    }
                  {
                    check_hlds__det_report__V_194_194 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__NestingPieces_217, check_hlds__det_report__Pieces_35);
                  }
                  {
                    check_hlds__det_report__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_193_193, 0) = ((MR_Box) (check_hlds__det_report__V_194_194));
                  }
                  {
                    check_hlds__det_report__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_192_192, 0) = ((MR_Box) (check_hlds__det_report__V_193_193));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__det_report__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_191_191, 0) = ((MR_Box) (check_hlds__det_report__Context_216));
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__V_191_191, 1) = ((MR_Box) (check_hlds__det_report__V_192_192));
                  }
                  {
                    check_hlds__det_report__Msgs1_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Msgs1_220, 0) = ((MR_Box) (check_hlds__det_report__V_191_191));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__Msgs1_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              else
                check_hlds__det_report__Msgs1_220 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__VarTypes_36);
              }
              {
                hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_report__VarTypes_36, check_hlds__det_report__Var_28, &check_hlds__det_report__VarType_37);
              }
              {
                check_hlds__det_report__det_diagnose_switch_arms_9_p_0(check_hlds__det_report__Var_28, check_hlds__det_report__VarType_37, check_hlds__det_report__Cases_30, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__Msgs2_38);
              }
              {
                *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_220, check_hlds__det_report__Msgs2_38);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__det_report__SubGoal_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
              MR_Word check_hlds__det_report__SubGoalInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_88, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__Internal_91;
              MR_Word check_hlds__det_report__InternalDesired_92;
              MR_Word check_hlds__det_report__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
              MR_Word check_hlds__det_report__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__SubGoal_88, (MR_Integer) 0)));

              {
                check_hlds__det_report__Internal_91 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__SubGoalInfo_90);
              }
              check_hlds__det_report__succeeded = (check_hlds__det_report__Actual_14 == check_hlds__det_report__Internal_91);
              if (check_hlds__det_report__succeeded)
                check_hlds__det_report__InternalDesired_92 = check_hlds__det_report__Desired_13;
              else
                {
                  MR_Word check_hlds__det_report__CanFail_93;
                  MR_Word check_hlds__det_report__V_94_94;

                  {
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report__CanFail_93, &check_hlds__det_report__V_94_94);
                  }
                  {
                    parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__InternalDesired_92, check_hlds__det_report__CanFail_93, (MR_Integer) 3);
                  }
                }
              {
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__SubGoal_88, check_hlds__det_report__InstMap0_12, check_hlds__det_report__InternalDesired_92, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__det_report__TypeCtorInfo_250_250;
              MR_Word check_hlds__det_report__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 2)));
              MR_Word check_hlds__det_report__Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 3)));
              MR_Word check_hlds__det_report__Else_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 4)));
              MR_Word check_hlds__det_report__DesiredSolns_72;
              MR_Word check_hlds__det_report__CondInfo_74;
              MR_Word check_hlds__det_report__CondDetism_75;
              MR_Word check_hlds__det_report__CondSolns_77;
              MR_Word check_hlds__det_report__MsgsCond_79;
              MR_Word check_hlds__det_report__InstMap1_80;
              MR_Word check_hlds__det_report__MsgsThen_81;
              MR_Word check_hlds__det_report__MsgsElse_82;
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_140_140;
              MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_141_141;
              MR_Word check_hlds__det_report__V_143_143;
              MR_Word check_hlds__det_report___Vars_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));
              MR_Word check_hlds__det_report___DesiredCanFail_71;
              MR_Word check_hlds__det_report___CondGoal_73;
              MR_Word check_hlds__det_report___CondCanFail_76;

              {
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__Desired_13, &check_hlds__det_report___DesiredCanFail_71, &check_hlds__det_report__DesiredSolns_72);
              }
              check_hlds__det_report___CondGoal_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Cond_68, (MR_Integer) 0)));
              check_hlds__det_report__CondInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Cond_68, (MR_Integer) 1)));
              {
                check_hlds__det_report__CondDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__CondInfo_74);
              }
              {
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_report__CondDetism_75, &check_hlds__det_report___CondCanFail_76, &check_hlds__det_report__CondSolns_77);
              }
              check_hlds__det_report__succeeded = (check_hlds__det_report__CondSolns_77 == (MR_Integer) 3);
              if (check_hlds__det_report__succeeded)
                {
                  check_hlds__det_report__succeeded = (check_hlds__det_report__DesiredSolns_72 == (MR_Integer) 3);
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                }
              if (check_hlds__det_report__succeeded)
                {
                  MR_Word check_hlds__det_report__DesiredCond_78;

                  {
                    parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_report__DesiredCond_78, (MR_Integer) 0, check_hlds__det_report__DesiredSolns_72);
                  }
                  {
                    check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Cond_68, check_hlds__det_report__InstMap0_12, check_hlds__det_report__DesiredCond_78, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__STATE_VARIABLE_DetInfo_140_140, &check_hlds__det_report__MsgsCond_79);
                  }
                }
              else
                {
                  check_hlds__det_report__MsgsCond_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  check_hlds__det_report__STATE_VARIABLE_DetInfo_140_140 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109;
                }
              {
                hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Cond_68, check_hlds__det_report__InstMap0_12, &check_hlds__det_report__InstMap1_80);
              }
              {
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Then_69, check_hlds__det_report__InstMap1_80, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_140_140, &check_hlds__det_report__STATE_VARIABLE_DetInfo_141_141, &check_hlds__det_report__MsgsThen_81);
              }
              {
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Else_70, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_141_141, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__MsgsElse_82);
              }
              check_hlds__det_report__TypeCtorInfo_250_250 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0;
              {
                check_hlds__det_report__V_143_143 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_250_250, check_hlds__det_report__MsgsThen_81, check_hlds__det_report__MsgsElse_82);
              }
              {
                *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_250_250, check_hlds__det_report__MsgsCond_79, check_hlds__det_report__V_143_143);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__det_report__ShortHand_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_report__GoalExpr_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__det_report__ShortHand_95)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_report", (MR_String) "predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__det_report__MainGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 4)));
                    MR_Word check_hlds__det_report__OrElseGoals_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 5)));
                    MR_Word check_hlds__det_report__MainMsgs_103;
                    MR_Word check_hlds__det_report__OrElseMsgs_104;
                    MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115;
                    MR_Word check_hlds__det_report__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 0)));
                    MR_Word check_hlds__det_report__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 1)));
                    MR_Word check_hlds__det_report__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 2)));
                    MR_Word check_hlds__det_report__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 3)));
                    MR_Word check_hlds__det_report__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__ShortHand_95, (MR_Integer) 6)));

                    {
                      check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__MainGoal_100, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115, &check_hlds__det_report__MainMsgs_103);
                    }
                    {
                      check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(check_hlds__det_report__OrElseGoals_101, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_115_115, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, &check_hlds__det_report__OrElseMsgs_104);
                    }
                    {
                      *check_hlds__det_report__Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__MainMsgs_103, check_hlds__det_report__OrElseMsgs_104);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__det_report__SubGoal_241 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 2)));
                    MR_Word check_hlds__det_report__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 0)));
                    MR_Word check_hlds__det_report__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_report__ShortHand_95, (MR_Integer) 1)));

                    {
                      check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__SubGoal_241, check_hlds__det_report__InstMap0_12, check_hlds__det_report__Desired_13, check_hlds__det_report__SwitchContexts_15, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_report__STATE_VARIABLE_DetInfo_110, check_hlds__det_report__Msgs_17);
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
  MR_Word check_hlds__det_report__Goal_8,
  MR_Word check_hlds__det_report__InstMap0_9,
  MR_Word check_hlds__det_report__Desired_10,
  MR_Word check_hlds__det_report__SwitchContexts_11,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_19,
  MR_Word * check_hlds__det_report__Msgs_13)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 0)));
    MR_Word check_hlds__det_report__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_8, (MR_Integer) 1)));
    MR_Word check_hlds__det_report__Actual_16;
    MR_Word check_hlds__det_report__CompareResult_17;

    {
      check_hlds__det_report__Actual_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_15);
    }
    {
      parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__Desired_10, check_hlds__det_report__Actual_16, &check_hlds__det_report__CompareResult_17);
    }
    switch (check_hlds__det_report__CompareResult_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_14, check_hlds__det_report__GoalInfo_15, check_hlds__det_report__InstMap0_9, check_hlds__det_report__Desired_10, check_hlds__det_report__Actual_16, check_hlds__det_report__SwitchContexts_11, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18, check_hlds__det_report__STATE_VARIABLE_DetInfo_19, check_hlds__det_report__Msgs_13);
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          *check_hlds__det_report__Msgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *check_hlds__det_report__STATE_VARIABLE_DetInfo_19 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_18;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_report__report_determinism_problem_7_p_0(
  MR_Word check_hlds__det_report__PredId_8,
  MR_Integer check_hlds__det_report__ProcId_9,
  MR_Word check_hlds__det_report__ModuleInfo_10,
  MR_Word check_hlds__det_report__MessagePieces_11,
  MR_Word check_hlds__det_report__DeclaredDetism_12,
  MR_Word check_hlds__det_report__InferredDetism_13,
  MR_Word * check_hlds__det_report__Msgs_14)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__TypeCtorInfo_65_65;
    MR_Word check_hlds__det_report__ProcInfo_16;
    MR_Word check_hlds__det_report__Context_17;
    MR_Word check_hlds__det_report__ProcPieces_18;
    MR_Word check_hlds__det_report__Pieces_19;
    MR_Word check_hlds__det_report__V_21_21;
    MR_Word check_hlds__det_report__V_26_26;
    MR_Word check_hlds__det_report__V_27_27;
    MR_Word check_hlds__det_report__V_34_34;
    MR_Word check_hlds__det_report__V_35_35;
    MR_Word check_hlds__det_report__V_39_39;
    MR_Word check_hlds__det_report__V_42_42;
    MR_Word check_hlds__det_report__V_43_43;
    MR_String check_hlds__det_report__V_44_44;
    MR_Word check_hlds__det_report__V_45_45;
    MR_Word check_hlds__det_report__V_48_48;
    MR_Word check_hlds__det_report__V_51_51;
    MR_Word check_hlds__det_report__V_52_52;
    MR_String check_hlds__det_report__V_53_53;
    MR_Word check_hlds__det_report__V_60_60;
    MR_Word check_hlds__det_report__V_61_61;
    MR_Word check_hlds__det_report__V_62_62;
    MR_Word check_hlds__det_report__V_15_15;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_report__ModuleInfo_10, check_hlds__det_report__PredId_8, check_hlds__det_report__ProcId_9, &check_hlds__det_report__V_15_15, &check_hlds__det_report__ProcInfo_16);
    }
    {
      hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_16, &check_hlds__det_report__Context_17);
    }
    {
      check_hlds__det_report__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_21_21, 0) = ((MR_Box) (check_hlds__det_report__PredId_8));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_21_21, 1) = ((MR_Box) (check_hlds__det_report__ProcId_9));
    }
    {
      check_hlds__det_report__ProcPieces_18 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_report__ModuleInfo_10, (MR_Integer) 1, check_hlds__det_report__V_21_21);
    }
    check_hlds__det_report__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__det_report__V_44_44 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__DeclaredDetism_12);
    }
    {
      check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_44_44));
    }
    {
      check_hlds__det_report__V_53_53 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_13);
    }
    {
      check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_53_53));
    }
    {
      check_hlds__det_report__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 0) = ((MR_Box) (check_hlds__det_report__V_52_52));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
    }
    {
      check_hlds__det_report__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[76])));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_48_48, 1) = ((MR_Box) (check_hlds__det_report__V_51_51));
    }
    {
      check_hlds__det_report__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[75])));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_45_45, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
    }
    {
      check_hlds__det_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 0) = ((MR_Box) (check_hlds__det_report__V_43_43));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_42_42, 1) = ((MR_Box) (check_hlds__det_report__V_45_45));
    }
    {
      check_hlds__det_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[74])));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_39_39, 1) = ((MR_Box) (check_hlds__det_report__V_42_42));
    }
    {
      check_hlds__det_report__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[6]), check_hlds__det_report__V_39_39);
    }
    {
      check_hlds__det_report__V_34_34 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, check_hlds__det_report__MessagePieces_11, check_hlds__det_report__V_35_35);
    }
    {
      check_hlds__det_report__V_27_27 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[45]), check_hlds__det_report__V_34_34);
    }
    {
      check_hlds__det_report__V_26_26 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, check_hlds__det_report__ProcPieces_18, check_hlds__det_report__V_27_27);
    }
    {
      check_hlds__det_report__Pieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[71]), check_hlds__det_report__V_26_26);
    }
    {
      check_hlds__det_report__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_62_62, 0) = ((MR_Box) (check_hlds__det_report__Pieces_19));
    }
    {
      check_hlds__det_report__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 0) = ((MR_Box) (check_hlds__det_report__V_62_62));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__det_report__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_60_60, 0) = ((MR_Box) (check_hlds__det_report__Context_17));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_60_60, 1) = ((MR_Box) (check_hlds__det_report__V_61_61));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__det_report__Msgs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_60_60));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
  void * check_hlds__det_report__env_ptr_arg)
{
  {
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s *) check_hlds__det_report__env_ptr_arg;

    {
      (check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3, *((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4));
    }
    (check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded = ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__V_5_5 == (MR_Integer) 1);
    if ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded)
      {
        ((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont)((check_hlds__det_report__env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
  MR_Word check_hlds__det_report__EvalMethod_3,
  MR_Word * check_hlds__det_report__Detism_4,
  MR_Cont check_hlds__det_report__cont,
  void * check_hlds__det_report__cont_env_ptr)
{
  {
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s check_hlds__det_report__env;

    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3 = check_hlds__det_report__EvalMethod_3;
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4 = check_hlds__det_report__Detism_4;
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont = check_hlds__det_report__cont;
    (check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr = check_hlds__det_report__cont_env_ptr;
    {
      MR_Integer check_hlds__det_report__slot_0 = (MR_Integer) 0;

      do
        {
          *((check_hlds__det_report__env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4) = ((&check_hlds__det_report_vector_common_7[0 + check_hlds__det_report__slot_0]))->check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
          {
            check_hlds__det_report__get_valid_dets_2_p_0_1(&check_hlds__det_report__env);
          }
          check_hlds__det_report__slot_0 = (check_hlds__det_report__slot_0 + (MR_Integer) 1);
        }
      while ((check_hlds__det_report__slot_0 < (MR_Integer) 8));
    }
  }
}

static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
  MR_Word check_hlds__det_report__DetismDecl_3)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_String check_hlds__det_report__Name_4;

    switch (check_hlds__det_report__DetismDecl_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__det_report__Name_4 = (MR_String) "determinism declaration";
        break;
      case (MR_Integer) 1:
        check_hlds__det_report__Name_4 = (MR_String) "implicit determinism declaration";
        break;
      case (MR_Integer) 2:
        check_hlds__det_report__Name_4 = (MR_String) "nonexistent determinism declaration";
        break;
    }
    return check_hlds__det_report__Name_4;
  }
}

static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(
  MR_Word check_hlds__det_report__ModuleInfo_8,
  MR_Word check_hlds__det_report__PredId_9,
  MR_Integer check_hlds__det_report__ProcId_10,
  MR_Word check_hlds__det_report__PredInfo_11,
  MR_Word check_hlds__det_report__ProcInfo_12,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_22,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_23)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__Markers_14;

    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Markers_14);
    }
    {
      check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_14, (MR_Integer) 24);
    }
    if (check_hlds__det_report__succeeded)
      {
        MR_Word check_hlds__det_report__Goal_15;
        MR_Word check_hlds__det_report__VarSet_16;
        MR_Word check_hlds__det_report__VarTypes_17;
        MR_Word check_hlds__det_report__InstMap0_18;
        MR_Word check_hlds__det_report__DetInfo0_19;
        MR_Word check_hlds__det_report__DetInfo_20;
        MR_Word check_hlds__det_report__RCSSpecs_21;

        {
          hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Goal_15);
        }
        {
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarSet_16);
        }
        {
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarTypes_17);
        }
        {
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_report__ProcInfo_12, check_hlds__det_report__ModuleInfo_8, &check_hlds__det_report__InstMap0_18);
        }
        {
          check_hlds__det_util__det_info_init_8_p_0(check_hlds__det_report__ModuleInfo_8, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__VarSet_16, check_hlds__det_report__VarTypes_17, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__DetInfo0_19);
        }
        {
          check_hlds__det_report__reqscope_check_goal_4_p_0(check_hlds__det_report__Goal_15, check_hlds__det_report__InstMap0_18, check_hlds__det_report__DetInfo0_19, &check_hlds__det_report__DetInfo_20);
        }
        {
          check_hlds__det_util__det_info_get_error_specs_2_p_0(check_hlds__det_report__DetInfo_20, &check_hlds__det_report__RCSSpecs_21);
        }
        {
          *check_hlds__det_report__STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__det_report__RCSSpecs_21, check_hlds__det_report__STATE_VARIABLE_Specs_0_22);
        }
      }
    else
      *check_hlds__det_report__STATE_VARIABLE_Specs_23 = check_hlds__det_report__STATE_VARIABLE_Specs_0_22;
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_3(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1)
{
  {
    MR_Box check_hlds__det_report__wrapper_arg_2;
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
    MR_String check_hlds__det_report__conv1_HeadVar__2_2;

    {
      check_hlds__det_report__conv1_HeadVar__2_2 = parse_tree__prog_out__determinism_to_string_1_f_0(((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv1_HeadVar__2_2));
    return check_hlds__det_report__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_1(
  void * check_hlds__det_report__env_ptr_arg)
{
  {
    struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s * check_hlds__det_report__env_ptr = (struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s *) check_hlds__det_report__env_ptr_arg;

    *((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4));
    {
      ((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont)((check_hlds__det_report__env_ptr)->check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0_2(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box * check_hlds__det_report__wrapper_arg_1,
  MR_Cont check_hlds__det_report__cont,
  void * check_hlds__det_report__cont_env_ptr)
{
  {
    struct check_hlds__det_report__check_determinism_8_p_0_2_env_0_s check_hlds__det_report__env;

    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__wrapper_arg_1 = check_hlds__det_report__wrapper_arg_1;
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont = check_hlds__det_report__cont;
    (check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__cont_env_ptr = check_hlds__det_report__cont_env_ptr;
    {
      MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;

      {
        check_hlds__det_report__get_valid_dets_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), &(check_hlds__det_report__env).check_hlds__det_report__check_determinism_8_p_0_2_env_0__conv0_Detism_4, check_hlds__det_report__check_determinism_8_p_0_1, &check_hlds__det_report__env);
      }
    }
  }
}

static void MR_CALL 
check_hlds__det_report__check_determinism_8_p_0(
  MR_Word check_hlds__det_report__PredId_9,
  MR_Integer check_hlds__det_report__ProcId_10,
  MR_Word check_hlds__det_report__PredInfo_11,
  MR_Word check_hlds__det_report__ProcInfo_12,
  MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_ModuleInfo_47,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_48,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_49)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__MaybeDetism_15;
    MR_Word check_hlds__det_report__InferredDetism_16;
    MR_Word check_hlds__det_report__EvalMethod_36;
    MR_Word check_hlds__det_report__Valid_37;
    MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_88_88;
    MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_89_89;

    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__MaybeDetism_15);
    }
    {
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__InferredDetism_16);
    }
    if ((check_hlds__det_report__MaybeDetism_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_47 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46;
        check_hlds__det_report__STATE_VARIABLE_Specs_88_88 = check_hlds__det_report__STATE_VARIABLE_Specs_0_48;
      }
    else
      {
        MR_Word check_hlds__det_report__DeclaredDetism_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeDetism_15, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__Cmp_18;

        {
          parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__Cmp_18);
        }
        switch (check_hlds__det_report__Cmp_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_report__Goal_28;
              MR_Word check_hlds__det_report__VarSet_29;
              MR_Word check_hlds__det_report__VarTypes_30;
              MR_Word check_hlds__det_report__InstMap0_31;
              MR_Word check_hlds__det_report__DetInfo0_32;
              MR_Word check_hlds__det_report__DetInfo_33;
              MR_Word check_hlds__det_report__GoalMsgs_34;
              MR_Word check_hlds__det_report__SortedGoalMsgs_35;
              MR_Word check_hlds__det_report__V_52_52;
              MR_Word check_hlds__det_report__V_53_53;
              MR_String check_hlds__det_report__V_54_54;
              MR_Word check_hlds__det_report__V_67_67;
              MR_Word check_hlds__det_report__DetismDecl_144;
              MR_Word check_hlds__det_report__MessagePieces_145;
              MR_Word check_hlds__det_report__ReportMsgs_146;
              MR_Word check_hlds__det_report__ReportSpec_147;

              {
                hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__DetismDecl_144);
              }
              {
                check_hlds__det_report__V_54_54 = check_hlds__det_report__detism_decl_name_1_f_0(check_hlds__det_report__DetismDecl_144);
              }
              {
                check_hlds__det_report__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__det_report__V_53_53, 1) = ((MR_Box) (check_hlds__det_report__V_54_54));
              }
              {
                check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (check_hlds__det_report__V_53_53));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[10])));
              }
              {
                check_hlds__det_report__MessagePieces_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[80])));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_145, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
              }
              {
                check_hlds__det_report__report_determinism_problem_7_p_0(check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__det_report__MessagePieces_145, check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__ReportMsgs_146);
              }
              {
                hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Goal_28);
              }
              {
                hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarSet_29);
              }
              {
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__VarTypes_30);
              }
              {
                hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_report__ProcInfo_12, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__det_report__InstMap0_31);
              }
              {
                check_hlds__det_util__det_info_init_8_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__VarSet_29, check_hlds__det_report__VarTypes_30, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_report__DetInfo0_32);
              }
              {
                check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_28, check_hlds__det_report__InstMap0_31, check_hlds__det_report__DeclaredDetism_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__DetInfo0_32, &check_hlds__det_report__DetInfo_33, &check_hlds__det_report__GoalMsgs_34);
              }
              {
                check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__DetInfo_33, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_47);
              }
              {
                parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_report__GoalMsgs_34, &check_hlds__det_report__SortedGoalMsgs_35);
              }
              {
                check_hlds__det_report__V_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__ReportMsgs_146, check_hlds__det_report__SortedGoalMsgs_35);
              }
              {
                check_hlds__det_report__ReportSpec_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_147, 2) = ((MR_Box) (check_hlds__det_report__V_67_67));
              }
              {
                check_hlds__det_report__STATE_VARIABLE_Specs_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_88_88, 0) = ((MR_Box) (check_hlds__det_report__ReportSpec_147));
                MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_88_88, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_48));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__det_report__Globals_19;
              MR_Word check_hlds__det_report__ShouldIssueWarning_20;
              MR_Word check_hlds__det_report__WarnAboutInferredErroneous_21;
              MR_Word check_hlds__det_report__Markers_22;
              MR_Word check_hlds__det_report__Status_23;
              MR_Word check_hlds__det_report__V_74_74;
              MR_Word check_hlds__det_report__V_71_71;
              MR_Word check_hlds__det_report__V_72_72;
              MR_Word check_hlds__det_report__V_73_73;

              {
                hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__det_report__Globals_19);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(check_hlds__det_report__Globals_19, (MR_Integer) 7, &check_hlds__det_report__ShouldIssueWarning_20);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(check_hlds__det_report__Globals_19, (MR_Integer) 8, &check_hlds__det_report__WarnAboutInferredErroneous_21);
              }
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Markers_22);
              }
              check_hlds__det_report__succeeded = (check_hlds__det_report__ShouldIssueWarning_20 == (MR_Integer) 1);
              if (check_hlds__det_report__succeeded)
                {
                  check_hlds__det_report__V_71_71 = (MR_Integer) 11;
                  {
                    check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_71_71);
                  }
                  check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                  if (check_hlds__det_report__succeeded)
                    {
                      check_hlds__det_report__V_72_72 = (MR_Integer) 0;
                      {
                        check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_72_72);
                      }
                      check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                      if (check_hlds__det_report__succeeded)
                        {
                          check_hlds__det_report__V_73_73 = (MR_Integer) 5;
                          {
                            check_hlds__det_report__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_report__Markers_22, check_hlds__det_report__V_73_73);
                          }
                          check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                          if (check_hlds__det_report__succeeded)
                            {
                              {
                                check_hlds__det_report__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__det_report__PredInfo_11);
                              }
                              check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                              if (check_hlds__det_report__succeeded)
                                {
                                  switch (check_hlds__det_report__WarnAboutInferredErroneous_21) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        check_hlds__det_report__succeeded = (check_hlds__det_report__InferredDetism_16 == (MR_Integer) 6);
                                        check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      check_hlds__det_report__succeeded = MR_TRUE;
                                      break;
                                  }
                                  if (check_hlds__det_report__succeeded)
                                    {
                                      {
                                        hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__det_report__PredInfo_11, &check_hlds__det_report__Status_23);
                                      }
                                      {
                                        check_hlds__det_report__V_74_74 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__det_report__Status_23);
                                      }
                                      check_hlds__det_report__succeeded = (check_hlds__det_report__V_74_74 == (MR_Integer) 1);
                                    }
                                }
                            }
                        }
                    }
                }
              if (check_hlds__det_report__succeeded)
                {
                  MR_Word check_hlds__det_report__DetismDecl_24;
                  MR_Word check_hlds__det_report__MessagePieces_25;
                  MR_Word check_hlds__det_report__ReportMsgs_26;
                  MR_Word check_hlds__det_report__ReportSpec_27;
                  MR_Word check_hlds__det_report__V_77_77;
                  MR_Word check_hlds__det_report__V_78_78;
                  MR_String check_hlds__det_report__V_79_79;

                  {
                    hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__DetismDecl_24);
                  }
                  {
                    check_hlds__det_report__V_79_79 = check_hlds__det_report__detism_decl_name_1_f_0(check_hlds__det_report__DetismDecl_24);
                  }
                  {
                    check_hlds__det_report__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__det_report__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), check_hlds__det_report__V_78_78, 1) = ((MR_Box) (check_hlds__det_report__V_79_79));
                  }
                  {
                    check_hlds__det_report__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_77_77, 0) = ((MR_Box) (check_hlds__det_report__V_78_78));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[12])));
                  }
                  {
                    check_hlds__det_report__MessagePieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[81])));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__MessagePieces_25, 1) = ((MR_Box) (check_hlds__det_report__V_77_77));
                  }
                  {
                    check_hlds__det_report__report_determinism_problem_7_p_0(check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__det_report__MessagePieces_25, check_hlds__det_report__DeclaredDetism_17, check_hlds__det_report__InferredDetism_16, &check_hlds__det_report__ReportMsgs_26);
                  }
                  {
                    check_hlds__det_report__ReportSpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                    MR_hl_field(MR_mktag(0), check_hlds__det_report__ReportSpec_27, 2) = ((MR_Box) (check_hlds__det_report__ReportMsgs_26));
                  }
                  {
                    check_hlds__det_report__STATE_VARIABLE_Specs_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_88_88, 0) = ((MR_Box) (check_hlds__det_report__ReportSpec_27));
                    MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_88_88, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_0_48));
                  }
                }
              else
                check_hlds__det_report__STATE_VARIABLE_Specs_88_88 = check_hlds__det_report__STATE_VARIABLE_Specs_0_48;
              *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_47 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_47 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_46;
              check_hlds__det_report__STATE_VARIABLE_Specs_88_88 = check_hlds__det_report__STATE_VARIABLE_Specs_0_48;
            }
            break;
        }
      }
    {
      check_hlds__det_report__make_reqscope_checks_if_needed_7_p_0(*check_hlds__det_report__STATE_VARIABLE_ModuleInfo_47, check_hlds__det_report__PredId_9, check_hlds__det_report__ProcId_10, check_hlds__det_report__PredInfo_11, check_hlds__det_report__ProcInfo_12, check_hlds__det_report__STATE_VARIABLE_Specs_88_88, &check_hlds__det_report__STATE_VARIABLE_Specs_89_89);
    }
    {
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__EvalMethod_36);
    }
    {
      check_hlds__det_report__Valid_37 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0(check_hlds__det_report__EvalMethod_36, check_hlds__det_report__InferredDetism_16);
    }
    switch (check_hlds__det_report__Valid_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_report__TypeCtorInfo_150_150;
          MR_Word check_hlds__det_report__TypeCtorInfo_151_151;
          MR_Word check_hlds__det_report__Context_38;
          MR_Word check_hlds__det_report__MainPieces_39;
          MR_Word check_hlds__det_report__Detisms_40;
          MR_Word check_hlds__det_report__DetismStrs_41;
          MR_Word check_hlds__det_report__SortedDetismStrs_42;
          MR_Word check_hlds__det_report__DetismPieces_43;
          MR_Word check_hlds__det_report__VerbosePieces_44;
          MR_Word check_hlds__det_report__ValidSpec_45;
          MR_Word check_hlds__det_report__V_92_92;
          MR_Word check_hlds__det_report__V_93_93;
          MR_String check_hlds__det_report__V_94_94;
          MR_Word check_hlds__det_report__V_95_95;
          MR_Word check_hlds__det_report__V_98_98;
          MR_Word check_hlds__det_report__V_101_101;
          MR_Word check_hlds__det_report__V_102_102;
          MR_String check_hlds__det_report__V_103_103;
          MR_Word check_hlds__det_report__V_110_110;
          MR_Word check_hlds__det_report__V_112_112;
          MR_Word check_hlds__det_report__V_115_115;
          MR_Word check_hlds__det_report__V_118_118;
          MR_Word check_hlds__det_report__V_119_119;
          MR_String check_hlds__det_report__V_120_120;
          MR_Word check_hlds__det_report__V_123_123;
          MR_Word check_hlds__det_report__V_134_134;
          MR_Word check_hlds__det_report__V_135_135;
          MR_Word check_hlds__det_report__V_136_136;
          MR_Word check_hlds__det_report__V_137_137;
          MR_Word check_hlds__det_report__V_138_138;
          MR_Word check_hlds__det_report__V_139_139;
          MR_Box check_hlds__det_report__conv2_V_120_120;

          {
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_12, &check_hlds__det_report__Context_38);
          }
          {
            check_hlds__det_report__V_94_94 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(check_hlds__det_report__EvalMethod_36);
          }
          {
            check_hlds__det_report__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_93_93, 1) = ((MR_Box) (check_hlds__det_report__V_94_94));
          }
          {
            check_hlds__det_report__V_103_103 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_16);
          }
          {
            check_hlds__det_report__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_102_102, 1) = ((MR_Box) (check_hlds__det_report__V_103_103));
          }
          {
            check_hlds__det_report__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_101_101, 0) = ((MR_Box) (check_hlds__det_report__V_102_102));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
          }
          {
            check_hlds__det_report__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_98_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[84])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_98_98, 1) = ((MR_Box) (check_hlds__det_report__V_101_101));
          }
          {
            check_hlds__det_report__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_95_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[83])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_95_95, 1) = ((MR_Box) (check_hlds__det_report__V_98_98));
          }
          {
            check_hlds__det_report__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_92_92, 0) = ((MR_Box) (check_hlds__det_report__V_93_93));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_92_92, 1) = ((MR_Box) (check_hlds__det_report__V_95_95));
          }
          {
            check_hlds__det_report__MainPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__MainPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[82])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__MainPieces_39, 1) = ((MR_Box) (check_hlds__det_report__V_92_92));
          }
          {
            check_hlds__det_report__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_110_110, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_110_110, 1) = ((MR_Box) (check_hlds__det_report__check_determinism_8_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_110_110, 3) = ((MR_Box) (check_hlds__det_report__EvalMethod_36));
          }
          check_hlds__det_report__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0;
          {
            mercury__solutions__solutions_2_p_1(check_hlds__det_report__TypeCtorInfo_150_150, check_hlds__det_report__V_110_110, &check_hlds__det_report__Detisms_40);
          }
          check_hlds__det_report__TypeCtorInfo_151_151 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            check_hlds__det_report__DetismStrs_41 = mercury__list__map_2_f_0(check_hlds__det_report__TypeCtorInfo_150_150, check_hlds__det_report__TypeCtorInfo_151_151, (MR_Word) &check_hlds__det_report_scalar_common_1[2], check_hlds__det_report__Detisms_40);
          }
          {
            mercury__list__sort_2_p_0(check_hlds__det_report__TypeCtorInfo_151_151, check_hlds__det_report__DetismStrs_41, &check_hlds__det_report__SortedDetismStrs_42);
          }
          {
            check_hlds__det_report__DetismPieces_43 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_report__SortedDetismStrs_42);
          }
          {
            check_hlds__det_report__conv2_V_120_120 = parse_tree__error_util__choose_number_3_f_0(check_hlds__det_report__TypeCtorInfo_150_150, check_hlds__det_report__TypeCtorInfo_151_151, check_hlds__det_report__Detisms_40, ((MR_Box) ((MR_String) "determinism")), ((MR_Box) ((MR_String) "determinisms")));
          }
          check_hlds__det_report__V_120_120 = ((MR_String) check_hlds__det_report__conv2_V_120_120);
          {
            check_hlds__det_report__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_119_119, 1) = ((MR_Box) (check_hlds__det_report__V_120_120));
          }
          {
            check_hlds__det_report__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[72])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_123_123, 1) = ((MR_Box) (check_hlds__det_report__DetismPieces_43));
          }
          {
            check_hlds__det_report__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_118_118, 0) = ((MR_Box) (check_hlds__det_report__V_119_119));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_118_118, 1) = ((MR_Box) (check_hlds__det_report__V_123_123));
          }
          {
            check_hlds__det_report__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[86])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_115_115, 1) = ((MR_Box) (check_hlds__det_report__V_118_118));
          }
          {
            check_hlds__det_report__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_112_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[85])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_112_112, 1) = ((MR_Box) (check_hlds__det_report__V_115_115));
          }
          {
            check_hlds__det_report__VerbosePieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_report__V_112_112, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14]));
          }
          {
            check_hlds__det_report__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_137_137, 0) = ((MR_Box) (check_hlds__det_report__MainPieces_39));
          }
          {
            check_hlds__det_report__V_139_139 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_139_139, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), check_hlds__det_report__V_139_139, 1) = ((MR_Box) (check_hlds__det_report__VerbosePieces_44));
          }
          {
            check_hlds__det_report__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_138_138, 0) = ((MR_Box) (check_hlds__det_report__V_139_139));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__det_report__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_136_136, 0) = ((MR_Box) (check_hlds__det_report__V_137_137));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_136_136, 1) = ((MR_Box) (check_hlds__det_report__V_138_138));
          }
          {
            check_hlds__det_report__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_135_135, 0) = ((MR_Box) (check_hlds__det_report__Context_38));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_135_135, 1) = ((MR_Box) (check_hlds__det_report__V_136_136));
          }
          {
            check_hlds__det_report__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_134_134, 0) = ((MR_Box) (check_hlds__det_report__V_135_135));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__det_report__ValidSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__ValidSpec_45, 2) = ((MR_Box) (check_hlds__det_report__V_134_134));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_report__STATE_VARIABLE_Specs_49 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__ValidSpec_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_89_89));
          }
        }
        break;
      case (MR_Integer) 1:
        *check_hlds__det_report__STATE_VARIABLE_Specs_49 = check_hlds__det_report__STATE_VARIABLE_Specs_89_89;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1,
  MR_Box check_hlds__det_report__wrapper_arg_2,
  MR_Box * check_hlds__det_report__wrapper_arg_3)
{
  {
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
    MR_Word check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8;

    {
      check_hlds__det_report__restore_option_3_p_0(((MR_Word) check_hlds__det_report__wrapper_arg_1), ((MR_Word) check_hlds__det_report__wrapper_arg_2), &check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8);
    }
    *check_hlds__det_report__wrapper_arg_3 = ((MR_Box) (check_hlds__det_report__conv0_STATE_VARIABLE_Globals_8));
  }
}

void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0(
  MR_Word check_hlds__det_report__OptionsToRestore_4,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_6,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Box check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7;

    {
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__det_report_scalar_common_1[0], (MR_Word) &libs__globals__libs__globals__type_ctor_info_globals_0, (MR_Word) &check_hlds__det_report_scalar_common_1[1], check_hlds__det_report__OptionsToRestore_4, ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Globals_0_6)), &check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7);
    }
    *check_hlds__det_report__STATE_VARIABLE_Globals_7 = ((MR_Word) check_hlds__det_report__conv1_STATE_VARIABLE_Globals_7);
  }
}

void MR_CALL 
check_hlds__det_report__disable_det_warnings_3_p_0(
  MR_Word * check_hlds__det_report__OptionsToRestore_4,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_0_8,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Globals_9)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__WarnSimple_6;
    MR_Word check_hlds__det_report__WarnDeclsTooLax_7;
    MR_Word check_hlds__det_report__V_13_13;
    MR_Word check_hlds__det_report__STATE_VARIABLE_Globals_14_14;
    MR_Word check_hlds__det_report__V_20_20;
    MR_Word check_hlds__det_report__V_22_22;
    MR_Word check_hlds__det_report__V_23_23;

    {
      libs__globals__lookup_option_3_p_0(check_hlds__det_report__STATE_VARIABLE_Globals_0_8, (MR_Integer) 20, &check_hlds__det_report__WarnSimple_6);
    }
    {
      libs__globals__lookup_option_3_p_0(check_hlds__det_report__STATE_VARIABLE_Globals_0_8, (MR_Integer) 7, &check_hlds__det_report__WarnDeclsTooLax_7);
    }
    check_hlds__det_report__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[2]);
    {
      libs__globals__set_option_4_p_0((MR_Integer) 20, check_hlds__det_report__V_13_13, check_hlds__det_report__STATE_VARIABLE_Globals_0_8, &check_hlds__det_report__STATE_VARIABLE_Globals_14_14);
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 7, check_hlds__det_report__V_13_13, check_hlds__det_report__STATE_VARIABLE_Globals_14_14, check_hlds__det_report__STATE_VARIABLE_Globals_9);
    }
    {
      check_hlds__det_report__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 0) = ((MR_Box) ((MR_Integer) 20));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_20_20, 1) = ((MR_Box) (check_hlds__det_report__WarnSimple_6));
    }
    {
      check_hlds__det_report__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_23_23, 0) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_23_23, 1) = ((MR_Box) (check_hlds__det_report__WarnDeclsTooLax_7));
    }
    {
      check_hlds__det_report__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 0) = ((MR_Box) (check_hlds__det_report__V_23_23));
      MR_hl_field(MR_mktag(1), check_hlds__det_report__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__det_report__OptionsToRestore_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_report__V_20_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_report__V_22_22));
    }
  }
}

MR_Word MR_CALL 
check_hlds__det_report__det_report_seen_call_id_2_f_0(
  MR_Word check_hlds__det_report__ModuleInfo_4,
  MR_Word check_hlds__det_report__SeenCall_5)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__Pieces_6;

    if ((check_hlds__det_report__SeenCall_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__det_report__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[78]);
      }
    else
      {
        MR_Word check_hlds__det_report__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__SeenCall_5, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__PredPieces_9;
        MR_Integer check_hlds__det_report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_report__SeenCall_5, (MR_Integer) 1)));

        {
          check_hlds__det_report__PredPieces_9 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_report__ModuleInfo_4, (MR_Integer) 0, check_hlds__det_report__PredId_7);
        }
        {
          check_hlds__det_report__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[79])));
          MR_hl_field(MR_mktag(1), check_hlds__det_report__Pieces_6, 1) = ((MR_Box) (check_hlds__det_report__PredPieces_9));
        }
      }
    return check_hlds__det_report__Pieces_6;
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
  MR_Box check_hlds__det_report__closure_arg,
  MR_Box check_hlds__det_report__wrapper_arg_1)
{
  {
    MR_Box check_hlds__det_report__wrapper_arg_2;
    MR_Box check_hlds__det_report__closure = check_hlds__det_report__closure_arg;
    MR_Word check_hlds__det_report__conv0_Msg_8;

    {
      check_hlds__det_report__conv0_Msg_8 = check_hlds__det_report__failing_context_description_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_report__wrapper_arg_1));
    }
    check_hlds__det_report__wrapper_arg_2 = ((MR_Box) (check_hlds__det_report__conv0_Msg_8));
    return check_hlds__det_report__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0(
  MR_Word check_hlds__det_report__ModuleInfo_5,
  MR_Word check_hlds__det_report__VarSet_6,
  MR_Word check_hlds__det_report__FailingContexts_7)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__HeadVar__4_4;
    MR_Word check_hlds__det_report__V_8_8;

    {
      check_hlds__det_report__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 1) = ((MR_Box) (check_hlds__det_report__failing_contexts_description_3_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 3) = ((MR_Box) (check_hlds__det_report__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), check_hlds__det_report__V_8_8, 4) = ((MR_Box) (check_hlds__det_report__VarSet_6));
    }
    {
      check_hlds__det_report__HeadVar__4_4 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_8_8, check_hlds__det_report__FailingContexts_7);
    }
    return check_hlds__det_report__HeadVar__4_4;
  }
}

MR_String MR_CALL 
check_hlds__det_report__promise_solutions_kind_str_1_f_0(
  MR_Word check_hlds__det_report__HeadVar__1_1)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_String check_hlds__det_report__HeadVar__2_2;

    switch (check_hlds__det_report__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        check_hlds__det_report__HeadVar__2_2 = (MR_String) "promise_equivalent_solution_sets";
        break;
      case (MR_Integer) 2:
        check_hlds__det_report__HeadVar__2_2 = (MR_String) "arbitrary";
        break;
      case (MR_Integer) 0:
        check_hlds__det_report__HeadVar__2_2 = (MR_String) "promise_equivalent_solutions";
        break;
    }
    return check_hlds__det_report__HeadVar__2_2;
  }
}

void MR_CALL 
check_hlds__det_report__det_diagnose_conj_7_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__HeadVar__2_2,
  MR_Word check_hlds__det_report__HeadVar__3_3,
  MR_Word check_hlds__det_report__HeadVar__4_4,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_6,
  MR_Word * check_hlds__det_report__HeadVar__7_7)
{
  {
    MR_bool check_hlds__det_report__succeeded;

    if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_report__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_6 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5;
      }
    else
      {
        MR_Word check_hlds__det_report__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_report__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_report__Msgs1_21;
        MR_Word check_hlds__det_report__InstMap1_22;
        MR_Word check_hlds__det_report__Msgs2_23;
        MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26;

        {
          check_hlds__det_report__det_diagnose_goal_7_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__HeadVar__2_2, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_0_5, &check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26, &check_hlds__det_report__Msgs1_21);
        }
        {
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_report__Goal_14, check_hlds__det_report__HeadVar__2_2, &check_hlds__det_report__InstMap1_22);
        }
        {
          check_hlds__det_report__det_diagnose_conj_7_p_0(check_hlds__det_report__Goals_15, check_hlds__det_report__InstMap1_22, check_hlds__det_report__HeadVar__3_3, check_hlds__det_report__HeadVar__4_4, check_hlds__det_report__STATE_VARIABLE_DetInfo_26_26, check_hlds__det_report__STATE_VARIABLE_DetInfo_6, &check_hlds__det_report__Msgs2_23);
        }
        {
          *check_hlds__det_report__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__Msgs1_21, check_hlds__det_report__Msgs2_23);
        }
      }
  }
}

void MR_CALL 
check_hlds__det_report__det_check_lambda_7_p_0(
  MR_Word check_hlds__det_report__DeclaredDetism_8,
  MR_Word check_hlds__det_report__InferredDetism_9,
  MR_Word check_hlds__det_report__Goal_10,
  MR_Word check_hlds__det_report__GoalInfo_11,
  MR_Word check_hlds__det_report__InstMap0_12,
  MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_DetInfo_25)
{
  {
    MR_bool check_hlds__det_report__succeeded;
    MR_Word check_hlds__det_report__Cmp_14;

    {
      parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__InferredDetism_9, &check_hlds__det_report__Cmp_14);
    }
    switch (check_hlds__det_report__Cmp_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_report__TypeCtorInfo_76_76;
          MR_Word check_hlds__det_report__PredId_15;
          MR_Integer check_hlds__det_report__ProcId_16;
          MR_Word check_hlds__det_report__Context_17;
          MR_Word check_hlds__det_report__ModuleInfo_18;
          MR_Word check_hlds__det_report__PredPieces_19;
          MR_Word check_hlds__det_report__Pieces_20;
          MR_Word check_hlds__det_report__GoalMsgs_21;
          MR_Word check_hlds__det_report__SortedGoalMsgs_22;
          MR_Word check_hlds__det_report__Spec_23;
          MR_Word check_hlds__det_report__V_27_27;
          MR_Word check_hlds__det_report__V_32_32;
          MR_Word check_hlds__det_report__V_33_33;
          MR_Word check_hlds__det_report__V_36_36;
          MR_Word check_hlds__det_report__V_38_38;
          MR_Word check_hlds__det_report__V_41_41;
          MR_Word check_hlds__det_report__V_43_43;
          MR_Word check_hlds__det_report__V_46_46;
          MR_Word check_hlds__det_report__V_47_47;
          MR_String check_hlds__det_report__V_48_48;
          MR_Word check_hlds__det_report__V_49_49;
          MR_Word check_hlds__det_report__V_52_52;
          MR_Word check_hlds__det_report__V_55_55;
          MR_Word check_hlds__det_report__V_56_56;
          MR_String check_hlds__det_report__V_57_57;
          MR_Word check_hlds__det_report__STATE_VARIABLE_DetInfo_65_65;
          MR_Word check_hlds__det_report__V_68_68;
          MR_Word check_hlds__det_report__V_69_69;
          MR_Word check_hlds__det_report__V_70_70;
          MR_Word check_hlds__det_report__V_71_71;
          MR_Word check_hlds__det_report__V_72_72;
          MR_Word check_hlds__det_report__GoalExpr_86;
          MR_Word check_hlds__det_report__GoalInfo_87;
          MR_Word check_hlds__det_report__Actual_88;
          MR_Word check_hlds__det_report__CompareResult_89;

          {
            check_hlds__det_util__det_info_get_pred_id_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__PredId_15);
          }
          {
            check_hlds__det_util__det_info_get_proc_id_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__ProcId_16);
          }
          {
            check_hlds__det_report__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_report__GoalInfo_11);
          }
          {
            check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__ModuleInfo_18);
          }
          {
            check_hlds__det_report__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 0) = ((MR_Box) (check_hlds__det_report__PredId_15));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_27_27, 1) = ((MR_Box) (check_hlds__det_report__ProcId_16));
          }
          {
            check_hlds__det_report__PredPieces_19 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_report__ModuleInfo_18, (MR_Integer) 1, check_hlds__det_report__V_27_27);
          }
          check_hlds__det_report__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            check_hlds__det_report__V_48_48 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__DeclaredDetism_8);
          }
          {
            check_hlds__det_report__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_47_47, 1) = ((MR_Box) (check_hlds__det_report__V_48_48));
          }
          {
            check_hlds__det_report__V_57_57 = parse_tree__prog_out__determinism_to_string_1_f_0(check_hlds__det_report__InferredDetism_9);
          }
          {
            check_hlds__det_report__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__det_report__V_56_56, 1) = ((MR_Box) (check_hlds__det_report__V_57_57));
          }
          {
            check_hlds__det_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 0) = ((MR_Box) (check_hlds__det_report__V_56_56));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])));
          }
          {
            check_hlds__det_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[76])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_52_52, 1) = ((MR_Box) (check_hlds__det_report__V_55_55));
          }
          {
            check_hlds__det_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[75])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_49_49, 1) = ((MR_Box) (check_hlds__det_report__V_52_52));
          }
          {
            check_hlds__det_report__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 0) = ((MR_Box) (check_hlds__det_report__V_47_47));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_46_46, 1) = ((MR_Box) (check_hlds__det_report__V_49_49));
          }
          {
            check_hlds__det_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[74])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_43_43, 1) = ((MR_Box) (check_hlds__det_report__V_46_46));
          }
          {
            check_hlds__det_report__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_41_41, 1) = ((MR_Box) (check_hlds__det_report__V_43_43));
          }
          {
            check_hlds__det_report__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[73])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_38_38, 1) = ((MR_Box) (check_hlds__det_report__V_41_41));
          }
          {
            check_hlds__det_report__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_36_36, 1) = ((MR_Box) (check_hlds__det_report__V_38_38));
          }
          {
            check_hlds__det_report__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[72])));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_33_33, 1) = ((MR_Box) (check_hlds__det_report__V_36_36));
          }
          {
            check_hlds__det_report__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_76_76, check_hlds__det_report__PredPieces_19, check_hlds__det_report__V_33_33);
          }
          {
            check_hlds__det_report__Pieces_20 = mercury__list__f_43_43_2_f_0(check_hlds__det_report__TypeCtorInfo_76_76, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[71]), check_hlds__det_report__V_32_32);
          }
          check_hlds__det_report__GoalExpr_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_10, (MR_Integer) 0)));
          check_hlds__det_report__GoalInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Goal_10, (MR_Integer) 1)));
          {
            check_hlds__det_report__Actual_88 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_report__GoalInfo_87);
          }
          {
            parse_tree__prog_detism__compare_determinisms_3_p_0(check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__Actual_88, &check_hlds__det_report__CompareResult_89);
          }
          switch (check_hlds__det_report__CompareResult_89) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 0:
              {
                check_hlds__det_report__det_diagnose_goal_expr_9_p_0(check_hlds__det_report__GoalExpr_86, check_hlds__det_report__GoalInfo_87, check_hlds__det_report__InstMap0_12, check_hlds__det_report__DeclaredDetism_8, check_hlds__det_report__Actual_88, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24, &check_hlds__det_report__STATE_VARIABLE_DetInfo_65_65, &check_hlds__det_report__GoalMsgs_21);
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                check_hlds__det_report__GoalMsgs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__det_report__STATE_VARIABLE_DetInfo_65_65 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
              }
              break;
          }
          {
            parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_report__GoalMsgs_21, &check_hlds__det_report__SortedGoalMsgs_22);
          }
          {
            check_hlds__det_report__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (check_hlds__det_report__Pieces_20));
          }
          {
            check_hlds__det_report__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_71_71, 0) = ((MR_Box) (check_hlds__det_report__V_72_72));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__det_report__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_70_70, 0) = ((MR_Box) (check_hlds__det_report__Context_17));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__V_70_70, 1) = ((MR_Box) (check_hlds__det_report__V_71_71));
          }
          {
            check_hlds__det_report__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_69_69, 0) = ((MR_Box) (check_hlds__det_report__V_70_70));
            MR_hl_field(MR_mktag(1), check_hlds__det_report__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__det_report__V_68_68 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_report__V_69_69, check_hlds__det_report__SortedGoalMsgs_22);
          }
          {
            check_hlds__det_report__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
            MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_23, 2) = ((MR_Box) (check_hlds__det_report__V_68_68));
          }
          {
            check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_report__Spec_23, check_hlds__det_report__STATE_VARIABLE_DetInfo_65_65, check_hlds__det_report__STATE_VARIABLE_DetInfo_25);
          }
        }
        break;
      case (MR_Integer) 2:
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
        break;
      case (MR_Integer) 1:
        *check_hlds__det_report__STATE_VARIABLE_DetInfo_25 = check_hlds__det_report__STATE_VARIABLE_DetInfo_0_24;
        break;
    }
  }
}

void MR_CALL 
check_hlds__det_report__global_checking_pass_5_p_0(
  MR_Word check_hlds__det_report__HeadVar__1_1,
  MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_ModuleInfo_3,
  MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__det_report__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_report__succeeded;

        if ((check_hlds__det_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__det_report__STATE_VARIABLE_Specs_5 = check_hlds__det_report__STATE_VARIABLE_Specs_0_4;
            *check_hlds__det_report__STATE_VARIABLE_ModuleInfo_3 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2;
          }
        else
          {
            MR_Word check_hlds__det_report__Proc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_report__Procs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Proc_12, (MR_Integer) 0)));
            MR_Integer check_hlds__det_report__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_report__Proc_12, (MR_Integer) 1)));
            MR_Word check_hlds__det_report__PredInfo_18;
            MR_Word check_hlds__det_report__ProcInfo_19;
            MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24;
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_25_25;
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_26_26;
            MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_27_27;
            MR_Word check_hlds__det_report__MaybeDetism_37;
            MR_Word check_hlds__det_report__DeclaredDetism_38;
            MR_String check_hlds__det_report__V_42_42;
            MR_Integer check_hlds__det_report__V_43_43;

            {
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__det_report__PredId_16, check_hlds__det_report__ProcId_17, &check_hlds__det_report__PredInfo_18, &check_hlds__det_report__ProcInfo_19);
            }
            {
              check_hlds__det_report__check_determinism_8_p_0(check_hlds__det_report__PredId_16, check_hlds__det_report__ProcId_17, check_hlds__det_report__PredInfo_18, check_hlds__det_report__ProcInfo_19, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24, check_hlds__det_report__STATE_VARIABLE_Specs_0_4, &check_hlds__det_report__STATE_VARIABLE_Specs_25_25);
            }
            {
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_report__ProcInfo_19, &check_hlds__det_report__MaybeDetism_37);
            }
            {
              check_hlds__det_report__V_42_42 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_report__PredInfo_18);
            }
            check_hlds__det_report__succeeded = (strcmp(check_hlds__det_report__V_42_42, (MR_String) "main") == 0);
            if (check_hlds__det_report__succeeded)
              {
                {
                  check_hlds__det_report__V_43_43 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__det_report__PredInfo_18);
                }
                check_hlds__det_report__succeeded = (check_hlds__det_report__V_43_43 == (MR_Integer) 2);
                if (check_hlds__det_report__succeeded)
                  {
                    {
                      check_hlds__det_report__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__det_report__PredInfo_18);
                    }
                    if (check_hlds__det_report__succeeded)
                      {
                        check_hlds__det_report__succeeded = ((MR_tag((MR_Word) check_hlds__det_report__MaybeDetism_37)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__det_report__succeeded)
                          {
                            check_hlds__det_report__DeclaredDetism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_report__MaybeDetism_37, (MR_Integer) 0)));
                            switch (check_hlds__det_report__DeclaredDetism_38) {
                              default:
                                check_hlds__det_report__succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 4:
                                check_hlds__det_report__succeeded = MR_TRUE;
                                break;
                              case (MR_Integer) 0:
                                check_hlds__det_report__succeeded = MR_TRUE;
                                break;
                            }
                            check_hlds__det_report__succeeded = !(check_hlds__det_report__succeeded);
                          }
                      }
                  }
              }
            if (check_hlds__det_report__succeeded)
              {
                MR_Word check_hlds__det_report__ProcContext_39;
                MR_Word check_hlds__det_report__Spec_41;
                MR_Word check_hlds__det_report__V_72_72;
                MR_Word check_hlds__det_report__V_73_73;

                {
                  hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_report__ProcInfo_19, &check_hlds__det_report__ProcContext_39);
                }
                {
                  check_hlds__det_report__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_73_73, 0) = ((MR_Box) (check_hlds__det_report__ProcContext_39));
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[69])));
                }
                {
                  check_hlds__det_report__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_72_72, 0) = ((MR_Box) (check_hlds__det_report__V_73_73));
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__det_report__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                  MR_hl_field(MR_mktag(0), check_hlds__det_report__Spec_41, 2) = ((MR_Box) (check_hlds__det_report__V_72_72));
                }
                {
                  check_hlds__det_report__STATE_VARIABLE_Specs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_26_26, 0) = ((MR_Box) (check_hlds__det_report__Spec_41));
                  MR_hl_field(MR_mktag(1), check_hlds__det_report__STATE_VARIABLE_Specs_26_26, 1) = ((MR_Box) (check_hlds__det_report__STATE_VARIABLE_Specs_25_25));
                }
              }
            else
              check_hlds__det_report__STATE_VARIABLE_Specs_26_26 = check_hlds__det_report__STATE_VARIABLE_Specs_25_25;
            {
              check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_p_0(check_hlds__det_report__PredId_16, check_hlds__det_report__PredInfo_18, check_hlds__det_report__ProcInfo_19, check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24, check_hlds__det_report__STATE_VARIABLE_Specs_26_26, &check_hlds__det_report__STATE_VARIABLE_Specs_27_27);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_report__HeadVar__1__tmp_copy_1 = check_hlds__det_report__Procs_13;
              MR_Word check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_24_24;
              MR_Word check_hlds__det_report__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__det_report__STATE_VARIABLE_Specs_27_27;

              check_hlds__det_report__STATE_VARIABLE_Specs_0_4 = check_hlds__det_report__STATE_VARIABLE_Specs_0__tmp_copy_4;
              check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__det_report__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
              check_hlds__det_report__HeadVar__1_1 = check_hlds__det_report__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
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
