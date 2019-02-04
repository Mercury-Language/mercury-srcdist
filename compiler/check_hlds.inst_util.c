/*
** Automatically generated from `inst_util.m'
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


/* :- module check_hlds.inst_util. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_util__init
ENDINIT
*/

#include "check_hlds.inst_util.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
  MR_Word check_hlds__inst_util__ModuleInfo_5,
  MR_Word check_hlds__inst_util__Inst_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
  MR_Word check_hlds__inst_util__BoundInstsA_7,
  MR_Word check_hlds__inst_util__BoundInstsB_8,
  MR_Word check_hlds__inst_util__MaybeType_9,
  MR_Word * check_hlds__inst_util__BoundInsts_10,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);

static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
  MR_Word check_hlds__inst_util__UniqA_9,
  MR_Word check_hlds__inst_util__InstResultsA_10,
  MR_Word check_hlds__inst_util__BoundInstsA_11,
  MR_Word check_hlds__inst_util__UniqB_12,
  MR_Word check_hlds__inst_util__MaybeType_13,
  MR_Word * check_hlds__inst_util__Result_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);

static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
  MR_Word check_hlds__inst_util__InstA_7,
  MR_Word check_hlds__inst_util__UniqB_8,
  MR_Word check_hlds__inst_util__ModuleInfo_9,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
  MR_Word * check_hlds__inst_util__Uniq_11);

static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__ModuleInfo_3,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
  MR_Word * check_hlds__inst_util__Uniq_6);

static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__ModuleInfo_3,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
  MR_Word * check_hlds__inst_util__Uniq_6);

static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
  MR_Word check_hlds__inst_util__UniqA_6,
  MR_Word check_hlds__inst_util__UniqB_7,
  MR_Word check_hlds__inst_util__BoundInstsB_8,
  MR_Word check_hlds__inst_util__ModuleInfo_9,
  MR_Word * check_hlds__inst_util__Uniq_10);

static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
  MR_Word check_hlds__inst_util__UniqA_4,
  MR_Word check_hlds__inst_util__UniqB_5,
  MR_Word * check_hlds__inst_util__Merged_6);

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
  MR_Word check_hlds__inst_util__InstA_7,
  MR_Word check_hlds__inst_util__InstB_8,
  MR_Word check_hlds__inst_util__MaybeType_9,
  MR_Word * check_hlds__inst_util__Inst_10,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
  MR_Word check_hlds__inst_util__InstA_7,
  MR_Word check_hlds__inst_util__InstB_8,
  MR_Word check_hlds__inst_util__MaybeType_9,
  MR_Word * check_hlds__inst_util__Inst_10,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
  MR_Word check_hlds__inst_util__Inst0_5,
  MR_Word * check_hlds__inst_util__Inst_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);

static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__Uniq_4,
  MR_Word check_hlds__inst_util__Real_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__Uniq_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__Uniq_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
  MR_Word check_hlds__inst_util__Inst0_9,
  MR_Word check_hlds__inst_util__Live_10,
  MR_Word check_hlds__inst_util__Uniq1_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__Inst_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48);

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__Uniq_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
  MR_Word check_hlds__inst_util__Inst0_9,
  MR_Word check_hlds__inst_util__Live_10,
  MR_Word check_hlds__inst_util__Uniq1_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__Inst_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__Uniq_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__Uniq_4,
  MR_Word check_hlds__inst_util__Real_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
  MR_Word check_hlds__inst_util__Live_7,
  MR_Word check_hlds__inst_util__Real_8,
  MR_Word check_hlds__inst_util__Detism_9,
  MR_Word check_hlds__inst_util__UniqA_10,
  MR_Word check_hlds__inst_util__UniqB_11,
  MR_Word * check_hlds__inst_util__Uniq_12);

static void MR_CALL 
check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word * check_hlds__inst_util__HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_5_p_0(
  MR_Word check_hlds__inst_util__ConsId_6,
  MR_Word check_hlds__inst_util__Type_7,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ArgInsts_0_22,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ArgInsts_23,
  MR_Word check_hlds__inst_util__ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_util__arg_insts_match_ctor_subtypes_2_3_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__ModuleInfo_3);

static MR_bool MR_CALL 
check_hlds__inst_util__arg_insts_match_ctor_subtypes_4_p_0(
  MR_Word check_hlds__inst_util__ArgInsts_5,
  MR_Word check_hlds__inst_util__ConsId_6,
  MR_Word check_hlds__inst_util__Type_7,
  MR_Word check_hlds__inst_util__ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
  MR_Word check_hlds__inst_util__Live_10,
  MR_Word check_hlds__inst_util__InstVarsA_11,
  MR_Word check_hlds__inst_util__SubInstA_12,
  MR_Word check_hlds__inst_util__InstB_13,
  MR_Word check_hlds__inst_util__Real_14,
  MR_Word * check_hlds__inst_util__Inst_15,
  MR_Word * check_hlds__inst_util__Detism_16,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__ConsIdB_2,
  MR_Word check_hlds__inst_util__ArgsB_3,
  MR_Word check_hlds__inst_util__LivesB_4,
  MR_Word check_hlds__inst_util__Real_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
  MR_Word check_hlds__inst_util__Live_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__Live_9,
  MR_Word check_hlds__inst_util__BoundInstsA_10,
  MR_Word check_hlds__inst_util__BoundInstsB_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__BoundInsts_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__Live_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
  MR_Word check_hlds__inst_util__Live_9,
  MR_Word check_hlds__inst_util__InstA_10,
  MR_Word check_hlds__inst_util__InstB_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__Inst_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);


static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_3[1][3];


/* sealed */ struct check_hlds__inst_util__vector_common_type_2_0_s {
  const MR_Word check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct check_hlds__inst_util__vector_common_type_2_0_s check_hlds__inst_util_vector_common_2[30];



static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};


static /* final */ const struct check_hlds__inst_util__vector_common_type_2_0_s check_hlds__inst_util_vector_common_2[30] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 2 },
  /* row 7 */   {     (MR_Integer) 2 },
  /* row 8 */   {     (MR_Integer) 3 },
  /* row 9 */   {     (MR_Integer) 4 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 2 },
  /* row 12 */   {     (MR_Integer) 2 },
  /* row 13 */   {     (MR_Integer) 3 },
  /* row 14 */   {     (MR_Integer) 4 },
  /* row 15 */   {     (MR_Integer) 0 },
  /* row 16 */   {     (MR_Integer) 0 },
  /* row 17 */   {     (MR_Integer) 0 },
  /* row 18 */   {     (MR_Integer) 3 },
  /* row 19 */   {     (MR_Integer) 4 },
  /* row 20 */   {     (MR_Integer) 0 },
  /* row 21 */   {     (MR_Integer) 0 },
  /* row 22 */   {     (MR_Integer) 0 },
  /* row 23 */   {     (MR_Integer) 3 },
  /* row 24 */   {     (MR_Integer) 4 },
  /* row 25 */   {     (MR_Integer) 0 },
  /* row 26 */   {     (MR_Integer) 0 },
  /* row 27 */   {     (MR_Integer) 0 },
  /* row 28 */   {     (MR_Integer) 3 },
  /* row 29 */   {     (MR_Integer) 4 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

  }
}

static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;
        MR_Word check_hlds__inst_util__HeadVar__4_4;

        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
        else
          {
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__HeadContainsAny_14;
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

            {
              check_hlds__inst_util__HeadContainsAny_14 = check_hlds__inst_util__inst_list_contains_any_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
            switch (check_hlds__inst_util__HeadContainsAny_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_util__next_value_of_HeadVar__2_2 = check_hlds__inst_util__BoundInsts_9;

                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__next_value_of_HeadVar__2_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
                break;
            }
          }
        return check_hlds__inst_util__HeadVar__4_4;
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;
        MR_Word check_hlds__inst_util__HeadVar__4_4;

        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
        else
          {
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__HeadContainsAny_12;

            {
              check_hlds__inst_util__HeadContainsAny_12 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
            switch (check_hlds__inst_util__HeadContainsAny_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_util__next_value_of_HeadVar__2_2 = check_hlds__inst_util__Insts_9;

                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__next_value_of_HeadVar__2_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
                break;
            }
          }
        return check_hlds__inst_util__HeadVar__4_4;
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
  MR_Word check_hlds__inst_util__ModuleInfo_5,
  MR_Word check_hlds__inst_util__Inst_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;
        MR_Word check_hlds__inst_util__ContainsAny_8;

        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__inst_util__InstResults_12)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(check_hlds__inst_util__InstResults_12)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                          }
                          break;
                        case (MR_Integer) 1:
                          check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_util__AnyResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 0)));
                        MR_Word check_hlds__inst_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 4)));
                        MR_Word check_hlds__inst_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 5)));

                        switch (check_hlds__inst_util__AnyResults_15) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            {
                              check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                            }
                            break;
                          case (MR_Integer) 1:
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 0:
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
                            break;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 5:
                check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_util__next_value_of_Inst_6 = check_hlds__inst_util__SubInst_44;

                    check_hlds__inst_util__Inst_6 = check_hlds__inst_util__next_value_of_Inst_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

                  {
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
                  if (check_hlds__inst_util__succeeded)
                    check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
                  else
                    {
                      MR_Word check_hlds__inst_util__SubInst_22;
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                      }
                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__inst_util__next_value_of_Inst_6 = check_hlds__inst_util__SubInst_22;
                        MR_Word check_hlds__inst_util__next_value_of_STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__next_value_of_STATE_VARIABLE_Expansions_0_29;
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__next_value_of_Inst_6;
                      }
                      continue;
                    }
                }
                break;
            }
            break;
        }
        return check_hlds__inst_util__ContainsAny_8;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
  MR_Word check_hlds__inst_util__BoundInstsA_7,
  MR_Word check_hlds__inst_util__BoundInstsB_8,
  MR_Word check_hlds__inst_util__MaybeType_9,
  MR_Word * check_hlds__inst_util__BoundInsts_10,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__BoundInstsA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsB_8;
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 0)));

        if ((check_hlds__inst_util__BoundInstsB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsA_7;
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_util__BoundInstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__BoundInstsTailB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__ConsIdA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_41, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__ArgsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_41, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__ConsIdB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__ArgsB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 1)));

            {
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
            }
            if (check_hlds__inst_util__succeeded)
              {
                MR_Word check_hlds__inst_util__MaybeTypes_22;
                MR_Word check_hlds__inst_util__Args_23;
                MR_Word check_hlds__inst_util__BoundInst_24;
                MR_Word check_hlds__inst_util__BoundInstsTail_25;
                MR_Integer check_hlds__inst_util__Var_28;
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29;

                {
                  check_hlds__inst_util__Var_28 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_util__ArgsA_19);
                }
                {
                  check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__Var_28, &check_hlds__inst_util__MaybeTypes_22);
                }
                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_19, check_hlds__inst_util__ArgsB_21, check_hlds__inst_util__MaybeTypes_22, &check_hlds__inst_util__Args_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      check_hlds__inst_util__BoundInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_18));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 1) = ((MR_Box) (check_hlds__inst_util__Args_23));
                    }
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__Var_40, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__BoundInsts_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_24));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_25));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
              }
            else
              {
                MR_Word check_hlds__inst_util__Var_39;

                {
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__Var_39, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
                }
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__Var_39);
                if (check_hlds__inst_util__succeeded)
                  {
                    MR_Word check_hlds__inst_util__BoundInstsTail_34;

                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__Var_40, check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__BoundInsts_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Var_41));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_34));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
                else
                  {
                    MR_Word check_hlds__inst_util__BoundInstsTail_35;

                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__BoundInstsA_7, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__BoundInsts_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInstB_16));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_35));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__inst_util__succeeded)
          {
            *check_hlds__inst_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word check_hlds__inst_util__ArgA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__ArgsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__ArgB_13;
        MR_Word check_hlds__inst_util__ArgsB_14;
        MR_Word check_hlds__inst_util__MaybeType_15;
        MR_Word check_hlds__inst_util__MaybeTypes_16;
        MR_Word check_hlds__inst_util__Arg_17;
        MR_Word check_hlds__inst_util__Args_18;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22;

        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__ArgB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__inst_util__ArgsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__MaybeType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
                check_hlds__inst_util__MaybeTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__ArgA_11, check_hlds__inst_util__ArgB_13, check_hlds__inst_util__MaybeType_15, &check_hlds__inst_util__Arg_17, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_12, check_hlds__inst_util__ArgsB_14, check_hlds__inst_util__MaybeTypes_16, &check_hlds__inst_util__Args_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Arg_17));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Args_18));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
  MR_Word check_hlds__inst_util__UniqA_9,
  MR_Word check_hlds__inst_util__InstResultsA_10,
  MR_Word check_hlds__inst_util__BoundInstsA_11,
  MR_Word check_hlds__inst_util__UniqB_12,
  MR_Word check_hlds__inst_util__MaybeType_13,
  MR_Word * check_hlds__inst_util__Result_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    {
      check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
    }
    if (check_hlds__inst_util__succeeded)
      {
        MR_Word check_hlds__inst_util__Uniq_16;
        MR_Word check_hlds__inst_util__Uniq0_51;
        MR_Word check_hlds__inst_util__Expansions0_52;
        MR_Word check_hlds__inst_util___Expansions_53;

        {
          check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
        }
        if (check_hlds__inst_util__succeeded)
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqA_9;
        else
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqB_12;
        {
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_52);
        }
        {
          check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_51, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_52, &check_hlds__inst_util___Expansions_53, &check_hlds__inst_util__Uniq_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_util__Result_14 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_16));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        {
          check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
        }
        if (check_hlds__inst_util__succeeded)
          {
            if ((check_hlds__inst_util__MaybeType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word check_hlds__inst_util__Uniq_39;
                MR_Word check_hlds__inst_util__Uniq0_63;
                MR_Word check_hlds__inst_util__Expansions0_64;
                MR_Word check_hlds__inst_util___Expansions_65;

                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
                }
                if (check_hlds__inst_util__succeeded)
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqA_9;
                else
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqB_12;
                {
                  mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_64);
                }
                {
                  check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_64, &check_hlds__inst_util___Expansions_65, &check_hlds__inst_util__Uniq_39);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__inst_util__Result_14 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_39));
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word check_hlds__inst_util__TypeCtorInfo_42_42;
                MR_Word check_hlds__inst_util__TypeCtorInfo_43_43;
                MR_Word check_hlds__inst_util__TypeInfo_44_44;
                MR_Word check_hlds__inst_util__TypeCtorInfo_45_45;
                MR_Word check_hlds__inst_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeType_13, (MR_Integer) 0)));
                MR_Word check_hlds__inst_util__Constructors_18;
                MR_Word check_hlds__inst_util__TypeCtor_19;
                MR_Word check_hlds__inst_util__BoundInstsB0_20;
                MR_Word check_hlds__inst_util__BoundInstsB_21;
                MR_Word check_hlds__inst_util__InstResultsB_22;
                MR_Word check_hlds__inst_util__InstA_23;
                MR_Word check_hlds__inst_util__InstB_24;
                MR_Word check_hlds__inst_util__Var_29;
                MR_Word check_hlds__inst_util__Var_30;
                MR_Word check_hlds__inst_util__Var_31;
                MR_Word check_hlds__inst_util__Var_32;
                MR_Word check_hlds__inst_util__Var_33;
                MR_Word check_hlds__inst_util__Var_34;
                MR_Word check_hlds__inst_util__Var_35;
                MR_Word check_hlds__inst_util__Var_36;
                MR_Word check_hlds__inst_util__Var_37;

                {
                  check_hlds__inst_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Type_17, &check_hlds__inst_util__Constructors_18);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_util__Type_17, &check_hlds__inst_util__TypeCtor_19);
                    }
                    {
                      check_hlds__mode_util__constructors_to_bound_insts_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__UniqB_12, check_hlds__inst_util__TypeCtor_19, check_hlds__inst_util__Constructors_18, &check_hlds__inst_util__BoundInstsB0_20);
                    }
                    check_hlds__inst_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
                    {
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__inst_util__TypeCtorInfo_42_42, check_hlds__inst_util__BoundInstsB0_20, &check_hlds__inst_util__BoundInstsB_21);
                    }
                    check_hlds__inst_util__Var_29 = (MR_Integer) 1;
                    check_hlds__inst_util__Var_30 = (MR_Integer) 0;
                    check_hlds__inst_util__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
                    {
                      check_hlds__inst_util__Var_32 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_43_43);
                    }
                    check_hlds__inst_util__TypeInfo_44_44 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
                    {
                      check_hlds__inst_util__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_31, 0) = ((MR_Box) (check_hlds__inst_util__Var_32));
                    }
                    {
                      check_hlds__inst_util__Var_34 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeInfo_44_44);
                    }
                    check_hlds__inst_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                    {
                      check_hlds__inst_util__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_33, 0) = ((MR_Box) (check_hlds__inst_util__Var_34));
                    }
                    {
                      check_hlds__inst_util__Var_36 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_45_45);
                    }
                    {
                      check_hlds__inst_util__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_35, 0) = ((MR_Box) (check_hlds__inst_util__Var_36));
                    }
                    check_hlds__inst_util__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_util__TypeCtor_19);
                    {
                      check_hlds__inst_util__InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 0) = ((MR_Box) (check_hlds__inst_util__Var_29));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 1) = ((MR_Box) (check_hlds__inst_util__Var_30));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 2) = ((MR_Box) (check_hlds__inst_util__Var_31));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 3) = ((MR_Box) (check_hlds__inst_util__Var_33));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 4) = ((MR_Box) (check_hlds__inst_util__Var_35));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 5) = ((MR_Box) (check_hlds__inst_util__Var_37));
                    }
                    {
                      check_hlds__inst_util__InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_9));
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_10));
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsA_11));
                    }
                    {
                      check_hlds__inst_util__InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 1) = ((MR_Box) (check_hlds__inst_util__UniqB_12));
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_22));
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsB_21));
                    }
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_23, check_hlds__inst_util__InstB_24, check_hlds__inst_util__MaybeType_13, check_hlds__inst_util__Result_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);
                    }
                  }
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
  MR_Word check_hlds__inst_util__InstA_7,
  MR_Word check_hlds__inst_util__UniqB_8,
  MR_Word check_hlds__inst_util__ModuleInfo_9,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
  MR_Word * check_hlds__inst_util__Uniq_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_util__UniqA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));
              MR_Word check_hlds__inst_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_13, check_hlds__inst_util__UniqB_8);
              }
              if (check_hlds__inst_util__succeeded)
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
              else
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_13;
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_util__BoundInstsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_util__Uniq0_20;
                  MR_Word check_hlds__inst_util__UniqA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_util___InstResultsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_36, check_hlds__inst_util__UniqB_8);
                  }
                  if (check_hlds__inst_util__succeeded)
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqB_8;
                  else
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqA_36;
                  {
                    check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_19, check_hlds__inst_util__Uniq0_20, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_util__STATE_VARIABLE_Expansions_27, check_hlds__inst_util__Uniq_11);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_util__UniqA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_39, check_hlds__inst_util__UniqB_8);
                  }
                  if (check_hlds__inst_util__succeeded)
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
                  else
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_39;
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", (MR_String) "inst_var");
                    return;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_util__SubInstA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_util___InstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_util__next_value_of_InstA_7 = check_hlds__inst_util__SubInstA_25;

                    check_hlds__inst_util__InstA_7 = check_hlds__inst_util__next_value_of_InstA_7;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

                  {
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
                      *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
                    }
                  else
                    {
                      MR_Word check_hlds__inst_util__Inst_22;
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32);
                      }
                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__Inst_22);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__inst_util__next_value_of_InstA_7 = check_hlds__inst_util__Inst_22;
                        MR_Word check_hlds__inst_util__next_value_of_STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_util__next_value_of_STATE_VARIABLE_Expansions_0_26;
                        check_hlds__inst_util__InstA_7 = check_hlds__inst_util__next_value_of_InstA_7;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_8);
                  }
                  if (check_hlds__inst_util__succeeded)
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
                  else
                    *check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
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
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__ModuleInfo_3,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
  MR_Word * check_hlds__inst_util__Uniq_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;

        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
          }
        else
          {
            MR_Word check_hlds__inst_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__Uniq1_18;
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

            {
              check_hlds__inst_util__merge_inst_uniq_6_p_0(check_hlds__inst_util__Inst_12, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21, &check_hlds__inst_util__Uniq1_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__inst_util__next_value_of_HeadVar__1_1 = check_hlds__inst_util__Insts_13;
              MR_Word check_hlds__inst_util__next_value_of_HeadVar__2_2 = check_hlds__inst_util__Uniq1_18;
              MR_Word check_hlds__inst_util__next_value_of_STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__next_value_of_STATE_VARIABLE_Expansions_0_4;
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__next_value_of_HeadVar__2_2;
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__ModuleInfo_3,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
  MR_Word * check_hlds__inst_util__Uniq_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;

        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
          }
        else
          {
            MR_Word check_hlds__inst_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__Uniq1_20;
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;
            MR_Word check_hlds__inst_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 0)));

            {
              check_hlds__inst_util__merge_inst_list_uniq_6_p_0(check_hlds__inst_util__ArgInsts_19, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23, &check_hlds__inst_util__Uniq1_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__inst_util__next_value_of_HeadVar__1_1 = check_hlds__inst_util__BoundInsts_13;
              MR_Word check_hlds__inst_util__next_value_of_HeadVar__2_2 = check_hlds__inst_util__Uniq1_20;
              MR_Word check_hlds__inst_util__next_value_of_STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;

              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__next_value_of_STATE_VARIABLE_Expansions_0_4;
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__next_value_of_HeadVar__2_2;
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
  MR_Word check_hlds__inst_util__UniqA_6,
  MR_Word check_hlds__inst_util__UniqB_7,
  MR_Word check_hlds__inst_util__BoundInstsB_8,
  MR_Word check_hlds__inst_util__ModuleInfo_9,
  MR_Word * check_hlds__inst_util__Uniq_10)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__Uniq0_11;
    MR_Word check_hlds__inst_util__Expansions0_12;
    MR_Word check_hlds__inst_util___Expansions_13;

    {
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_6, check_hlds__inst_util__UniqB_7);
    }
    if (check_hlds__inst_util__succeeded)
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqB_7;
    else
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqA_6;
    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_12);
    }
    {
      check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__Uniq0_11, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__Expansions0_12, &check_hlds__inst_util___Expansions_13, check_hlds__inst_util__Uniq_10);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoA_6)) == (MR_mktag((MR_Integer) 1)));
    MR_Word check_hlds__inst_util__PredA_10;
    MR_Word check_hlds__inst_util__PredB_11;

    if (check_hlds__inst_util__succeeded)
      {
        check_hlds__inst_util__PredA_10 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoA_6), (MR_Integer) 1);
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoB_7)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_util__succeeded)
          check_hlds__inst_util__PredB_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoB_7), (MR_Integer) 1);
      }
    if (check_hlds__inst_util__succeeded)
      {
        {
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__PredB_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
        }
        if (check_hlds__inst_util__succeeded)
          {
            *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoB_7;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
        else
          {
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__PredA_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
            }
            if (check_hlds__inst_util__succeeded)
              {
                *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoA_6;
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
            else
              {
                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__PredA_10);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__PredB_11);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    else
      {
        {
          check_hlds__inst_util__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoA_6);
        }
        if (check_hlds__inst_util__succeeded)
          {
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoB_7);
            }
            if (check_hlds__inst_util__succeeded)
              {
                *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
          }
      }
    if (check_hlds__inst_util__succeeded)
      {
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    return check_hlds__inst_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
  MR_Word check_hlds__inst_util__UniqA_4,
  MR_Word check_hlds__inst_util__UniqB_5,
  MR_Word * check_hlds__inst_util__Merged_6)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    {
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_4, check_hlds__inst_util__UniqB_5);
    }
    if (check_hlds__inst_util__succeeded)
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqB_5;
    else
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqA_4;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
  MR_Word check_hlds__inst_util__InstA_7,
  MR_Word check_hlds__inst_util__InstB_8,
  MR_Word check_hlds__inst_util__MaybeType_9,
  MR_Word * check_hlds__inst_util__Inst_10,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
      default:
        check_hlds__inst_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_util__InstA_7)) {
          default:
            check_hlds__inst_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *check_hlds__inst_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
            else
            if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
              {
                MR_Word check_hlds__inst_util__Uniq_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
                MR_Word check_hlds__inst_util__HOInstInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

                switch (check_hlds__inst_util__Uniq_73) {
                  default:
                    check_hlds__inst_util__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    check_hlds__inst_util__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    check_hlds__inst_util__succeeded = MR_TRUE;
                    break;
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstB_8;
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
              }
            else
              check_hlds__inst_util__succeeded = MR_FALSE;
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_util__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
          MR_Word check_hlds__inst_util__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
            default:
              check_hlds__inst_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(check_hlds__inst_util__InstB_8)) {
                default:
                  check_hlds__inst_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    switch (check_hlds__inst_util__Var_110) {
                      default:
                        check_hlds__inst_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        check_hlds__inst_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        check_hlds__inst_util__succeeded = MR_TRUE;
                        break;
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstA_7;
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__inst_util__UniqB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
                MR_Word check_hlds__inst_util__HOInstInfoB_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
                MR_Word check_hlds__inst_util__HOInstInfo_16;
                MR_Word check_hlds__inst_util__Uniq_17;

                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__Var_109, check_hlds__inst_util__HOInstInfoB_15, &check_hlds__inst_util__HOInstInfo_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__Var_110, check_hlds__inst_util__UniqB_14, &check_hlds__inst_util__Uniq_17);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_util__Inst_10 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_17));
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_16));
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
                default:
                  check_hlds__inst_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__inst_util__InstResultsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_util__BoundInstsB_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
                    MR_Word check_hlds__inst_util__Var_57;
                    MR_Word check_hlds__inst_util__UniqB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_util__Uniq_63;

                    {
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__Var_110, check_hlds__inst_util__UniqB_62, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_63);
                    }
                    switch (check_hlds__inst_util__Uniq_63) {
                      default:
                        check_hlds__inst_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        check_hlds__inst_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        check_hlds__inst_util__succeeded = MR_TRUE;
                        break;
                    }
                    if (check_hlds__inst_util__succeeded)
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    else
                      {
                        check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_19, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
                    if (check_hlds__inst_util__succeeded)
                      {
                        check_hlds__inst_util__Var_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__Inst_10 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_63));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_57));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__inst_util__UniqB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_util__HOInstInfoB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_util__HOInstInfo_68;
                    MR_Word check_hlds__inst_util__Uniq_69;

                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__Var_109, check_hlds__inst_util__HOInstInfoB_67, &check_hlds__inst_util__HOInstInfo_68, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        {
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__Var_110, check_hlds__inst_util__UniqB_66, &check_hlds__inst_util__Uniq_69);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__Inst_10 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_68));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word check_hlds__inst_util__Var_55;
                    MR_Word check_hlds__inst_util__Uniq_71;

                    {
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__Var_110, (MR_Integer) 0, &check_hlds__inst_util__Uniq_71);
                    }
                    switch (check_hlds__inst_util__Uniq_71) {
                      default:
                        check_hlds__inst_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        check_hlds__inst_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        check_hlds__inst_util__succeeded = MR_TRUE;
                        break;
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        check_hlds__inst_util__Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__Inst_10 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_71));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_55));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
          default:
            check_hlds__inst_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
              MR_Word check_hlds__inst_util__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
                default:
                  check_hlds__inst_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_util__Var_53;
                    MR_Word check_hlds__inst_util__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_util__Uniq_76;
                    MR_Word check_hlds__inst_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

                    {
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__UniqB_75, check_hlds__inst_util__Var_113, check_hlds__inst_util__Var_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_76);
                    }
                    switch (check_hlds__inst_util__Uniq_76) {
                      default:
                        check_hlds__inst_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        check_hlds__inst_util__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        check_hlds__inst_util__succeeded = MR_TRUE;
                        break;
                    }
                    if (check_hlds__inst_util__succeeded)
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    else
                      {
                        check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__Var_112, check_hlds__inst_util__Var_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
                    if (check_hlds__inst_util__succeeded)
                      {
                        check_hlds__inst_util__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__Inst_10 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_53));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_util__BoundInsts_32;
                        MR_Word check_hlds__inst_util__Var_49;
                        MR_Word check_hlds__inst_util__UniqB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__Uniq_87;
                        MR_Word check_hlds__inst_util__BoundInstsB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_util___InstResultsB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

                        {
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__Var_113, check_hlds__inst_util__UniqB_86, &check_hlds__inst_util__Uniq_87);
                        }
                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__Var_111, check_hlds__inst_util__BoundInstsB_88, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInsts_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
                        if (check_hlds__inst_util__succeeded)
                          {
                            check_hlds__inst_util__Var_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              *check_hlds__inst_util__Inst_10 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_87));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_49));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_32));
                            }
                            check_hlds__inst_util__succeeded = MR_TRUE;
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_util__UniqB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__Var_113, check_hlds__inst_util__Var_112, check_hlds__inst_util__Var_111, check_hlds__inst_util__UniqB_91, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
                        if (check_hlds__inst_util__succeeded)
                          {
                            {
                              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41, check_hlds__inst_util__InstA_7);
                            }
                            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
                          }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_util__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
                default:
                  check_hlds__inst_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_util__UniqB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_util__HOInstInfoB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_util__HOInstInfo_81;
                    MR_Word check_hlds__inst_util__Uniq_82;

                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__Var_114, check_hlds__inst_util__HOInstInfoB_80, &check_hlds__inst_util__HOInstInfo_81, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        {
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__Var_115, check_hlds__inst_util__UniqB_79, &check_hlds__inst_util__Uniq_82);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__Inst_10 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_82));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_81));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_util__UniqB_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__InstResultsB_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_util__BoundInstsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));

                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__UniqB_95, check_hlds__inst_util__InstResultsB_96, check_hlds__inst_util__BoundInstsB_97, check_hlds__inst_util__Var_115, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
                        if (check_hlds__inst_util__succeeded)
                          {
                            {
                              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41, check_hlds__inst_util__InstB_8);
                            }
                            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_util__UniqB_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__HOInstInfoB_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_util__HOInstInfo_102;
                        MR_Word check_hlds__inst_util__Uniq_103;

                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__Var_114, check_hlds__inst_util__HOInstInfoB_101, &check_hlds__inst_util__HOInstInfo_102, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
                        if (check_hlds__inst_util__succeeded)
                          {
                            {
                              check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__Var_115, check_hlds__inst_util__UniqB_100, &check_hlds__inst_util__Uniq_103);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              *check_hlds__inst_util__Inst_10 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_103));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_102));
                            }
                            check_hlds__inst_util__succeeded = MR_TRUE;
                          }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__inst_util__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

              if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word check_hlds__inst_util__Var_51;
                  MR_Word check_hlds__inst_util__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
                  MR_Word check_hlds__inst_util__Uniq_84;
                  MR_Word check_hlds__inst_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

                  {
                    check_hlds__inst_util__merge_uniq_3_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_83, &check_hlds__inst_util__Uniq_84);
                  }
                  switch (check_hlds__inst_util__Uniq_84) {
                    default:
                      check_hlds__inst_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 3:
                      check_hlds__inst_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 4:
                      check_hlds__inst_util__succeeded = MR_TRUE;
                      break;
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      check_hlds__inst_util__Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__inst_util__Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_84));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_51));
                      }
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    }
                }
              else
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
                {
                  MR_Word check_hlds__inst_util__TypeInfo_104_104;
                  MR_Word check_hlds__inst_util__TypeCtorInfo_105_105;
                  MR_Word check_hlds__inst_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_util__MaybeTypes_38;
                  MR_Word check_hlds__inst_util__Args_39;
                  MR_Integer check_hlds__inst_util__Var_42;
                  MR_Word check_hlds__inst_util__Var_43;
                  MR_Word check_hlds__inst_util__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

                  {
                    check_hlds__inst_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_util__Var_108, check_hlds__inst_util__Var_106);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      check_hlds__inst_util__TypeInfo_104_104 = (MR_Word) &check_hlds__inst_util_scalar_common_1[1];
                      check_hlds__inst_util__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      {
                        check_hlds__inst_util__Var_42 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_105_105, check_hlds__inst_util__Var_107);
                      }
                      check_hlds__inst_util__Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        check_hlds__inst_util__MaybeTypes_38 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeInfo_104_104, check_hlds__inst_util__Var_42, ((MR_Box) (check_hlds__inst_util__Var_43)));
                      }
                      {
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__Var_107, check_hlds__inst_util__ArgsB_37, check_hlds__inst_util__MaybeTypes_38, &check_hlds__inst_util__Args_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
                      if (check_hlds__inst_util__succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *check_hlds__inst_util__Inst_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_108));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Args_39));
                          }
                          check_hlds__inst_util__succeeded = MR_TRUE;
                        }
                    }
                }
              else
                check_hlds__inst_util__succeeded = MR_FALSE;
            }
            break;
        }
        break;
    }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
  MR_Word check_hlds__inst_util__InstA_7,
  MR_Word check_hlds__inst_util__InstB_8,
  MR_Word check_hlds__inst_util__MaybeType_9,
  MR_Word * check_hlds__inst_util__Inst_10,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word check_hlds__inst_util__InstVarsA_12;
    MR_Word check_hlds__inst_util__SubInstA_13;

    if (check_hlds__inst_util__succeeded)
      {
        check_hlds__inst_util__InstVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
        check_hlds__inst_util__SubInstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
        {
          MR_Word check_hlds__inst_util__InstVarsB_14;
          MR_Word check_hlds__inst_util__SubInstB_15;

          check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (check_hlds__inst_util__succeeded)
            {
              check_hlds__inst_util__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
              check_hlds__inst_util__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
              {
                MR_Word check_hlds__inst_util__TypeInfo_26_26;
                MR_Word check_hlds__inst_util__Inst0_16;
                MR_Word check_hlds__inst_util__InstVars_17;

                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__SubInstB_15, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    check_hlds__inst_util__TypeInfo_26_26 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
                    {
                      mercury__set__intersect_3_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVarsA_12, check_hlds__inst_util__InstVarsB_14, &check_hlds__inst_util__InstVars_17);
                    }
                    {
                      check_hlds__inst_util__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVars_17);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__inst_util__Inst_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_16));
                      }
                    else
                      *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_16;
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
              }
            }
          else
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
        }
      }
    else
      {
        MR_Word check_hlds__inst_util__SubInstB_25;
        MR_Word check_hlds__inst_util___InstVarsB_18;

        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util___InstVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
            check_hlds__inst_util__SubInstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__SubInstB_25, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
          }
        else
          {
            check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
      }
    else
      {
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Inst_10;
        MR_Word check_hlds__inst_util__Insts_11;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

        {
          check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
        {
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
        }
      }
  }
}

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
      }
    else
      {
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Bound_10;
        MR_Word check_hlds__inst_util__Bounds_11;
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__ArgInsts_15;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

        {
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
        {
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
        }
        {
          check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
        }
      }
  }
}

static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
      }
    else
      {
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Bound_10;
        MR_Word check_hlds__inst_util__Bounds_11;
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__ArgInsts_15;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

        {
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
        {
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
        }
        {
          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
        }
      }
  }
}

static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
  MR_Word check_hlds__inst_util__Inst0_5,
  MR_Word * check_hlds__inst_util__Inst_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[15 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_util__Inst_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
          }
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
              MR_Word check_hlds__inst_util__BoundInsts_14;
              MR_Word check_hlds__inst_util__Uniq0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__Uniq_55 = ((&check_hlds__inst_util_vector_common_2[20 + check_hlds__inst_util__Uniq0_54]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

              {
                check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_55));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_12));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Uniq0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__Uniq_57 = ((&check_hlds__inst_util_vector_common_2[25 + check_hlds__inst_util__Uniq0_56]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_57));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
              }
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__SubInst1_19;

              {
                check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
              {
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__inst_util__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst1_19));
                }
              else
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst1_19;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__InstTable0_23;
              MR_Word check_hlds__inst_util__SharedInstTable0_24;
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
              MR_Word check_hlds__inst_util__SharedInstTable1_26;
              MR_Word check_hlds__inst_util__SharedInst_28;

              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__InstTable0_23);
              }
              {
                hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__SharedInstTable0_24);
              }
              {
                hlds__hlds_data__search_insert_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__SharedInstTable0_24, &check_hlds__inst_util__SharedInstTable1_26);
              }
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__inst_util__InstTable1_29;
                  MR_Word check_hlds__inst_util__InstTable2_30;
                  MR_Word check_hlds__inst_util__SharedInstTable2_31;
                  MR_Word check_hlds__inst_util__SharedInstTable_32;
                  MR_Word check_hlds__inst_util__InstTable_33;
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36;
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
                  MR_Word check_hlds__inst_util__Var_38;
                  MR_Word check_hlds__inst_util__SubInst0_58;
                  MR_Word check_hlds__inst_util__SubInst1_59;

                  {
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
                  {
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36);
                  }
                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_58);
                  }
                  {
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__SubInst0_58, &check_hlds__inst_util__SubInst1_59);
                  }
                  {
                    check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst1_59, &check_hlds__inst_util__SharedInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
                  {
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__InstTable2_30);
                  }
                  {
                    hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__SharedInstTable2_31);
                  }
                  {
                    check_hlds__inst_util__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_38, 0) = ((MR_Box) (check_hlds__inst_util__SharedInst_28));
                  }
                  {
                    hlds__hlds_data__det_update_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__Var_38, check_hlds__inst_util__SharedInstTable2_31, &check_hlds__inst_util__SharedInstTable_32);
                  }
                  {
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable_32, check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__InstTable_33);
                  }
                  {
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                  }
                }
              else
                {
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    check_hlds__inst_util__SharedInst_28 = check_hlds__inst_util__Inst0_5;
                  else
                    check_hlds__inst_util__SharedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
                }
              {
                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__SharedInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35, check_hlds__inst_util__InstName_22);
              }
              if (check_hlds__inst_util__succeeded)
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
              else
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SharedInst_28;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *check_hlds__inst_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__inst_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__inst_util__Live_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__Lives_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__Inst_13;
            MR_Word check_hlds__inst_util__Insts_14;
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

            switch (check_hlds__inst_util__Live_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Var_37;
                  check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
                }
                break;
              case (MR_Integer) 0:
                {
                  check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__Var_37, &check_hlds__inst_util__Inst_13, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
                }
                break;
            }
            {
              check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__Var_36, check_hlds__inst_util__Lives_12, &check_hlds__inst_util__Insts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__inst_util__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_14));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__Uniq_4,
  MR_Word check_hlds__inst_util__Real_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__ArgLive_20;
        MR_Word check_hlds__inst_util__ArgLives_21;
        MR_Word check_hlds__inst_util__Inst_24;
        MR_Word check_hlds__inst_util__Insts_25;
        MR_Word check_hlds__inst_util__BothLive_28;
        MR_Word check_hlds__inst_util__Detism1_29;
        MR_Word check_hlds__inst_util__Detism2_30;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
            if (check_hlds__inst_util__succeeded)
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
            if (check_hlds__inst_util__succeeded)
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
            else
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
            if (check_hlds__inst_util__succeeded)
              {
                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_util__HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
                    }
                    {
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__Uniq_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Inst_20;
        MR_Word check_hlds__inst_util__Insts_21;
        MR_Word check_hlds__inst_util__Detism1_24;
        MR_Word check_hlds__inst_util__Detism2_25;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

        {
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
        if (check_hlds__inst_util__succeeded)
          {
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
            if (check_hlds__inst_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__inst_util__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
                }
                {
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__Uniq_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__Bound0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Bounds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Bound_20;
        MR_Word check_hlds__inst_util__Bounds_21;
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__ArgInsts_26;
        MR_Word check_hlds__inst_util__Detism1_27;
        MR_Word check_hlds__inst_util__Detism2_28;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

        {
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
        if (check_hlds__inst_util__succeeded)
          {
            {
              check_hlds__inst_util__Bound_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
            }
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__Bounds0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Bounds_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
            if (check_hlds__inst_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__inst_util__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_20));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_21));
                }
                {
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
  MR_Word check_hlds__inst_util__Inst0_9,
  MR_Word check_hlds__inst_util__Live_10,
  MR_Word check_hlds__inst_util__Uniq1_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__Inst_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__Var_71;
              MR_Word check_hlds__inst_util__Uniq_73;

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_73);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  check_hlds__inst_util__Var_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_util__Inst_13 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_73));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_71));
                  }
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
          MR_Word check_hlds__inst_util__Any_20;
          MR_Word check_hlds__inst_util__TypedAny_21;
          MR_Word check_hlds__inst_util__Var_67;

          {
            check_hlds__inst_util__Any_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__Any_20, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__Any_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__inst_util__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_67, 0) = ((MR_Box) (check_hlds__inst_util__Live_10));
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_67, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_67, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_67, 3) = ((MR_Box) (check_hlds__inst_util__Any_20));
          }
          {
            check_hlds__inst_util__TypedAny_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__TypedAny_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__TypedAny_21, 1) = ((MR_Box) (check_hlds__inst_util__T_19));
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__TypedAny_21, 2) = ((MR_Box) (check_hlds__inst_util__Var_67));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_util__Inst_13 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__TypedAny_21));
          }
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
          check_hlds__inst_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
          MR_Word check_hlds__inst_util__Uniq_18;

          {
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
          if (check_hlds__inst_util__succeeded)
            {
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_13 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__BoundInsts0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
              MR_Word check_hlds__inst_util__BoundInsts_24;
              MR_Word check_hlds__inst_util__Detism1_25;
              MR_Word check_hlds__inst_util__Var_64;
              MR_Word check_hlds__inst_util__Var_65;
              MR_Word check_hlds__inst_util__Uniq0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__Uniq_75;
              MR_Word check_hlds__inst_util___InstResults0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_74, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_23, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_24, &check_hlds__inst_util__Detism1_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      check_hlds__inst_util__Var_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      check_hlds__inst_util__Var_65 = (MR_Integer) 1;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__inst_util__Inst_13 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_64));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_24));
                      }
                      {
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_25, check_hlds__inst_util__Var_65, check_hlds__inst_util__Detism_14);
                      }
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_util__PredInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Uniq0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__Uniq_77;

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_76, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_77);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_util__Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_77));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_26));
                  }
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_any_inst\'/8", (MR_String) "free inst var");
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_util__InstVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__SubInst0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Var_55;

              {
                check_hlds__inst_util__Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__Var_55, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_28, check_hlds__inst_util__SubInst0_29, check_hlds__inst_util__Var_55, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__inst_util__InstName_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__InstTable0_33;
              MR_Word check_hlds__inst_util__AnyInstTable0_34;
              MR_Word check_hlds__inst_util__AnyInstInfo_35;
              MR_Word check_hlds__inst_util__AnyInstName_36;
              MR_Word check_hlds__inst_util__MaybeMaybeInst_37;
              MR_Word check_hlds__inst_util__AnyInstTable1_38;
              MR_Word check_hlds__inst_util__AnyInst_40;

              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__inst_util__InstTable0_33);
              }
              {
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable0_33, &check_hlds__inst_util__AnyInstTable0_34);
              }
              {
                check_hlds__inst_util__AnyInstInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_35, 0) = ((MR_Box) (check_hlds__inst_util__InstName_32));
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_35, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
              }
              {
                check_hlds__inst_util__AnyInstName_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_36, 1) = ((MR_Box) (check_hlds__inst_util__InstName_32));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_36, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
              }
              {
                hlds__hlds_data__search_insert_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_35, &check_hlds__inst_util__MaybeMaybeInst_37, check_hlds__inst_util__AnyInstTable0_34, &check_hlds__inst_util__AnyInstTable1_38);
              }
              if ((check_hlds__inst_util__MaybeMaybeInst_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__inst_util__InstTable1_41;
                  MR_Word check_hlds__inst_util__SubInst1_42;
                  MR_Word check_hlds__inst_util__InstTable2_43;
                  MR_Word check_hlds__inst_util__AnyInstTable2_44;
                  MR_Word check_hlds__inst_util__AnyInstTable_45;
                  MR_Word check_hlds__inst_util__InstTable_46;
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49;
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50;
                  MR_Word check_hlds__inst_util__Var_51;
                  MR_Word check_hlds__inst_util__SubInst0_78;

                  {
                    hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable1_38, check_hlds__inst_util__InstTable0_33, &check_hlds__inst_util__InstTable1_41);
                  }
                  {
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_41, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49);
                  }
                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__InstName_32, &check_hlds__inst_util__SubInst0_78);
                  }
                  {
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__SubInst0_78, &check_hlds__inst_util__SubInst1_42);
                  }
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__SubInst1_42, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__AnyInst_40, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      {
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50, &check_hlds__inst_util__InstTable2_43);
                      }
                      {
                        hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable2_43, &check_hlds__inst_util__AnyInstTable2_44);
                      }
                      {
                        check_hlds__inst_util__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_51, 0) = ((MR_Box) (check_hlds__inst_util__AnyInst_40));
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_51, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
                      }
                      {
                        hlds__hlds_data__det_update_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_35, check_hlds__inst_util__Var_51, check_hlds__inst_util__AnyInstTable2_44, &check_hlds__inst_util__AnyInstTable_45);
                      }
                      {
                        hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable_45, check_hlds__inst_util__InstTable2_43, &check_hlds__inst_util__InstTable_46);
                      }
                      {
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48);
                      }
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    }
                }
              else
                {
                  MR_Word check_hlds__inst_util__MaybeInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_37, (MR_Integer) 0)));

                  if ((check_hlds__inst_util__MaybeInst_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        check_hlds__inst_util__AnyInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_40, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_36));
                      }
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                    }
                  else
                    {
                      check_hlds__inst_util__AnyInst_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_39, (MR_Integer) 0)));
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_39, (MR_Integer) 1)));
                    }
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
              if (check_hlds__inst_util__succeeded)
                {
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__AnyInst_40, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48, check_hlds__inst_util__AnyInstName_36);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_util__Inst_13 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_36));
                    }
                  else
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__AnyInst_40;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 5:
            {
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_util_scalar_common_1[2]);
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__Uniq_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__BoundInst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__BoundInsts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__BoundInst_20;
        MR_Word check_hlds__inst_util__BoundInsts_21;
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__ArgInsts_26;
        MR_Word check_hlds__inst_util__Detism1_27;
        MR_Word check_hlds__inst_util__Detism2_28;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

        {
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
        if (check_hlds__inst_util__succeeded)
          {
            {
              check_hlds__inst_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
            }
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInsts_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
            if (check_hlds__inst_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__inst_util__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_20));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInsts_21));
                }
                {
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
  MR_Word check_hlds__inst_util__Inst0_9,
  MR_Word check_hlds__inst_util__Live_10,
  MR_Word check_hlds__inst_util__Uniq1_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__Inst_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__Var_67;
              MR_Word check_hlds__inst_util__Uniq_69;

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_69);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  check_hlds__inst_util__Var_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_util__Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_67));
                  }
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
          MR_Word check_hlds__inst_util__Var_64;
          MR_Word check_hlds__inst_util__Uniq_70;

          {
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_70);
          }
          if (check_hlds__inst_util__succeeded)
            {
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
              {
                check_hlds__inst_util__Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_64, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_70));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_64, 2) = ((MR_Box) (check_hlds__inst_util__T_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_64));
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
          MR_Word check_hlds__inst_util__Uniq_18;

          {
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
          if (check_hlds__inst_util__succeeded)
            {
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
              MR_Word check_hlds__inst_util__BoundInsts_22;
              MR_Word check_hlds__inst_util__Detism1_23;
              MR_Word check_hlds__inst_util__Var_61;
              MR_Word check_hlds__inst_util__Uniq0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__Uniq_72;

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_71, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_72);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_21, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_22, &check_hlds__inst_util__Detism1_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      check_hlds__inst_util__Var_61 = (MR_Integer) 1;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__inst_util__Inst_13 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_72));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_20));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_22));
                      }
                      {
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_23, check_hlds__inst_util__Var_61, check_hlds__inst_util__Detism_14);
                      }
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_util__Uniq0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__HOInstInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Uniq_75;

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_73, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_util__Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_74));
                  }
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_ground_inst\'/8", (MR_String) "free inst var");
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_util__InstVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Var_52;

              {
                check_hlds__inst_util__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_52, 1) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_25, check_hlds__inst_util__SubInst0_26, check_hlds__inst_util__Var_52, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__inst_util__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__InstTable0_30;
              MR_Word check_hlds__inst_util__GroundInstTable0_31;
              MR_Word check_hlds__inst_util__GroundInstInfo_32;
              MR_Word check_hlds__inst_util__GroundInstName_33;
              MR_Word check_hlds__inst_util__MaybeMaybeInst_34;
              MR_Word check_hlds__inst_util__GroundInstTable1_35;
              MR_Word check_hlds__inst_util__GroundInst_37;

              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__InstTable0_30);
              }
              {
                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__GroundInstTable0_31);
              }
              {
                check_hlds__inst_util__GroundInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 0) = ((MR_Box) (check_hlds__inst_util__InstName_29));
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
              }
              {
                check_hlds__inst_util__GroundInstName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 1) = ((MR_Box) (check_hlds__inst_util__InstName_29));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
              }
              {
                hlds__hlds_data__search_insert_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, &check_hlds__inst_util__MaybeMaybeInst_34, check_hlds__inst_util__GroundInstTable0_31, &check_hlds__inst_util__GroundInstTable1_35);
              }
              if ((check_hlds__inst_util__MaybeMaybeInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__inst_util__InstTable1_38;
                  MR_Word check_hlds__inst_util__SubInst1_39;
                  MR_Word check_hlds__inst_util__InstTable2_40;
                  MR_Word check_hlds__inst_util__GroundInstTable2_41;
                  MR_Word check_hlds__inst_util__GroundInstTable_42;
                  MR_Word check_hlds__inst_util__InstTable_43;
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46;
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47;
                  MR_Word check_hlds__inst_util__Var_48;
                  MR_Word check_hlds__inst_util__SubInst0_76;

                  {
                    hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable1_35, check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__InstTable1_38);
                  }
                  {
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46);
                  }
                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__InstName_29, &check_hlds__inst_util__SubInst0_76);
                  }
                  {
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__SubInst0_76, &check_hlds__inst_util__SubInst1_39);
                  }
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__SubInst1_39, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__GroundInst_37, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      {
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, &check_hlds__inst_util__InstTable2_40);
                      }
                      {
                        hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__GroundInstTable2_41);
                      }
                      {
                        check_hlds__inst_util__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_48, 0) = ((MR_Box) (check_hlds__inst_util__GroundInst_37));
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_48, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
                      }
                      {
                        hlds__hlds_data__det_update_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, check_hlds__inst_util__Var_48, check_hlds__inst_util__GroundInstTable2_41, &check_hlds__inst_util__GroundInstTable_42);
                      }
                      {
                        hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable_42, check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__InstTable_43);
                      }
                      {
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_43, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                      }
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    }
                }
              else
                {
                  MR_Word check_hlds__inst_util__MaybeInst_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_34, (MR_Integer) 0)));

                  if ((check_hlds__inst_util__MaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        check_hlds__inst_util__GroundInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
                      }
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                    }
                  else
                    {
                      check_hlds__inst_util__GroundInst_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 0)));
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 1)));
                    }
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
              if (check_hlds__inst_util__succeeded)
                {
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__GroundInst_37, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45, check_hlds__inst_util__GroundInstName_33);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_util__Inst_13 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
                    }
                  else
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__GroundInst_37;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 5:
            {
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__inst_util_scalar_common_3[0]);
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__Uniq_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Inst_20;
        MR_Word check_hlds__inst_util__Insts_21;
        MR_Word check_hlds__inst_util__Detism1_24;
        MR_Word check_hlds__inst_util__Detism2_25;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

        {
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
        if (check_hlds__inst_util__succeeded)
          {
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
            if (check_hlds__inst_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__inst_util__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
                }
                {
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__Live_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__Uniq_4,
  MR_Word check_hlds__inst_util__Real_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__ArgLive_20;
        MR_Word check_hlds__inst_util__ArgLives_21;
        MR_Word check_hlds__inst_util__Inst_24;
        MR_Word check_hlds__inst_util__Insts_25;
        MR_Word check_hlds__inst_util__BothLive_28;
        MR_Word check_hlds__inst_util__Detism1_29;
        MR_Word check_hlds__inst_util__Detism2_30;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
            if (check_hlds__inst_util__succeeded)
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
            if (check_hlds__inst_util__succeeded)
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
            else
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
            if (check_hlds__inst_util__succeeded)
              {
                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_util__HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
                    }
                    {
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
  MR_Word check_hlds__inst_util__Live_7,
  MR_Word check_hlds__inst_util__Real_8,
  MR_Word check_hlds__inst_util__Detism_9,
  MR_Word check_hlds__inst_util__UniqA_10,
  MR_Word check_hlds__inst_util__UniqB_11,
  MR_Word * check_hlds__inst_util__Uniq_12)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    switch (check_hlds__inst_util__UniqA_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          switch (check_hlds__inst_util__Live_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
                if (!(check_hlds__inst_util__succeeded))
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
              break;
          }
          if (check_hlds__inst_util__succeeded)
            {
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 4:
        {
          switch (check_hlds__inst_util__Live_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
                if (!(check_hlds__inst_util__succeeded))
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
              break;
          }
          if (check_hlds__inst_util__succeeded)
            {
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__UniqB_11 == (MR_Integer) 3);
              if (check_hlds__inst_util__succeeded)
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
              else
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 2:
        switch (check_hlds__inst_util__UniqB_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
                    if (!(check_hlds__inst_util__succeeded))
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 4:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
                    if (!(check_hlds__inst_util__succeeded))
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 0:
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
                  break;
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 0:
            {
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 0:
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
                  break;
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (check_hlds__inst_util__UniqB_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
                    if (!(check_hlds__inst_util__succeeded))
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 4:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
                    if (!(check_hlds__inst_util__succeeded))
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (check_hlds__inst_util__UniqB_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
                    if (!(check_hlds__inst_util__succeeded))
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 4:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
                    if (!(check_hlds__inst_util__succeeded))
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 0:
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
                  break;
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 0:
            {
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              switch (check_hlds__inst_util__Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
                  break;
              }
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return check_hlds__inst_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word * check_hlds__inst_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__inst_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.propagate_ctor_subtypes_into_arg_insts_2\'/3", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__inst_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.propagate_ctor_subtypes_into_arg_insts_2\'/3", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__inst_util__Inst0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__Insts0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__Inst_8;
            MR_Word check_hlds__inst_util__Insts_9;
            MR_Word check_hlds__inst_util__Inst1_18;
            MR_Word check_hlds__inst_util__TypeHOInstInfo_12;
            MR_Word check_hlds__inst_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_38, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_38, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_38, (MR_Integer) 2)));
            MR_Word check_hlds__inst_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_38, (MR_Integer) 3)));
            MR_Word check_hlds__inst_util__Var_10;
            MR_Word check_hlds__inst_util__Var_11;
            MR_Word check_hlds__inst_util__Var_13;
            MR_Word check_hlds__inst_util__Var_15;

            check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 1)));
                check_hlds__inst_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 2)));
                check_hlds__inst_util__TypeHOInstInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 3)));
                check_hlds__inst_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 4)));
                check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__TypeHOInstInfo_12)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__inst_util__succeeded)
                  {
                    check_hlds__inst_util__Var_15 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__TypeHOInstInfo_12), (MR_Integer) 1);
                    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_6)) == (MR_mktag((MR_Integer) 2))))
                      {
                        MR_Word check_hlds__inst_util__Uniq_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_6, (MR_Integer) 0)));
                        MR_Word check_hlds__inst_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_6, (MR_Integer) 1)));

                        {
                          check_hlds__inst_util__Inst1_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst1_18, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_21));
                          MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst1_18, 1) = ((MR_Box) (check_hlds__inst_util__TypeHOInstInfo_12));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                    else
                    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
                      {
                        MR_Word check_hlds__inst_util__Uniq_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_6, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_6, (MR_Integer) 2)));

                        {
                          check_hlds__inst_util__Inst1_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst1_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst1_18, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_16));
                          MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst1_18, 2) = ((MR_Box) (check_hlds__inst_util__TypeHOInstInfo_12));
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                    else
                      check_hlds__inst_util__succeeded = MR_FALSE;
                  }
              }
            if (check_hlds__inst_util__succeeded)
              check_hlds__inst_util__Inst_8 = check_hlds__inst_util__Inst1_18;
            else
              check_hlds__inst_util__Inst_8 = check_hlds__inst_util__Inst0_6;
            {
              check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(check_hlds__inst_util__Var_37, check_hlds__inst_util__Insts0_7, &check_hlds__inst_util__Insts_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__inst_util__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_8));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_9));
            }
          }
      }
  }
}

static void MR_CALL 
check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_5_p_0(
  MR_Word check_hlds__inst_util__ConsId_6,
  MR_Word check_hlds__inst_util__Type_7,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ArgInsts_0_22,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ArgInsts_23,
  MR_Word check_hlds__inst_util__ModuleInfo_9)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__ConsArgs_18;
    MR_Word check_hlds__inst_util__TypeCtor_10;
    MR_Word check_hlds__inst_util__ConsDefn_11;
    MR_Word check_hlds__inst_util__ExistQVars_16;
    MR_Word check_hlds__inst_util__Var_12;
    MR_Word check_hlds__inst_util__Var_13;
    MR_Word check_hlds__inst_util__Var_14;
    MR_Word check_hlds__inst_util__Var_15;
    MR_Word check_hlds__inst_util__Var_17;
    MR_Word check_hlds__inst_util__Var_19;
    MR_Word check_hlds__inst_util__Var_20;
    MR_Word check_hlds__inst_util__Var_21;

    {
      check_hlds__inst_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__inst_util__Type_7, &check_hlds__inst_util__TypeCtor_10);
    }
    if (check_hlds__inst_util__succeeded)
      {
        {
          check_hlds__inst_util__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__TypeCtor_10, check_hlds__inst_util__ConsId_6, &check_hlds__inst_util__ConsDefn_11);
        }
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_11, (MR_Integer) 0)));
            check_hlds__inst_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_11, (MR_Integer) 1)));
            check_hlds__inst_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_11, (MR_Integer) 2)));
            check_hlds__inst_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_11, (MR_Integer) 3)));
            check_hlds__inst_util__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_11, (MR_Integer) 4)));
            check_hlds__inst_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_11, (MR_Integer) 5)));
            check_hlds__inst_util__ConsArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_11, (MR_Integer) 6)));
            check_hlds__inst_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_11, (MR_Integer) 7)));
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__ConsArgs_18)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__ConsArgs_18, (MR_Integer) 0)));
                check_hlds__inst_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__ConsArgs_18, (MR_Integer) 1)));
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExistQVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (check_hlds__inst_util__succeeded)
      {
        check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(check_hlds__inst_util__ConsArgs_18, check_hlds__inst_util__STATE_VARIABLE_ArgInsts_0_22, check_hlds__inst_util__STATE_VARIABLE_ArgInsts_23);
      }
    else
      *check_hlds__inst_util__STATE_VARIABLE_ArgInsts_23 = check_hlds__inst_util__STATE_VARIABLE_ArgInsts_0_22;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__arg_insts_match_ctor_subtypes_2_3_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;

        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.arg_insts_match_ctor_subtypes_2\'/3", (MR_String) "length mismatch");
                }
              }
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

            if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.arg_insts_match_ctor_subtypes_2\'/3", (MR_String) "length mismatch");
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word check_hlds__inst_util__ConsArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word check_hlds__inst_util__ConsArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word check_hlds__inst_util__HOInstInfo_11;
                MR_Word check_hlds__inst_util__TypePredInst_18;
                MR_Word check_hlds__inst_util__TypeHOInstInfo_15;
                MR_Word check_hlds__inst_util__Var_20;
                MR_Word check_hlds__inst_util__Var_33;
                MR_Word check_hlds__inst_util__Var_34;
                MR_Word check_hlds__inst_util__Var_35;
                MR_Word check_hlds__inst_util__Var_13;
                MR_Word check_hlds__inst_util__Var_14;
                MR_Word check_hlds__inst_util__Var_16;

                if (((MR_tag((MR_Word) check_hlds__inst_util__Var_37)) == (MR_mktag((MR_Integer) 2))))
                  {
                    MR_Word check_hlds__inst_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Var_37, (MR_Integer) 0)));

                    check_hlds__inst_util__HOInstInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Var_37, (MR_Integer) 1)));
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                else
                if (((((MR_tag((MR_Word) check_hlds__inst_util__Var_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_37, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  {
                    MR_Word check_hlds__inst_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_37, (MR_Integer) 1)));

                    check_hlds__inst_util__HOInstInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_37, (MR_Integer) 2)));
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                else
                  check_hlds__inst_util__succeeded = MR_FALSE;
                if (check_hlds__inst_util__succeeded)
                  {
                    check_hlds__inst_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsArg_7, (MR_Integer) 0)));
                    check_hlds__inst_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsArg_7, (MR_Integer) 1)));
                    check_hlds__inst_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsArg_7, (MR_Integer) 2)));
                    check_hlds__inst_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsArg_7, (MR_Integer) 3)));
                    check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (check_hlds__inst_util__succeeded)
                      {
                        check_hlds__inst_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 1)));
                        check_hlds__inst_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 2)));
                        check_hlds__inst_util__TypeHOInstInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 3)));
                        check_hlds__inst_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Var_20, (MR_Integer) 4)));
                        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__TypeHOInstInfo_15)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__inst_util__succeeded)
                          check_hlds__inst_util__TypePredInst_18 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__TypeHOInstInfo_15), (MR_Integer) 1);
                      }
                  }
                if (check_hlds__inst_util__succeeded)
                  {
                    MR_Word check_hlds__inst_util__PredInst_19;

                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfo_11)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__inst_util__succeeded)
                      {
                        check_hlds__inst_util__PredInst_19 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfo_11), (MR_Integer) 1);
                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInst_19, check_hlds__inst_util__TypePredInst_18, check_hlds__inst_util__ModuleInfo_3);
                        }
                      }
                  }
                else
                  check_hlds__inst_util__succeeded = MR_TRUE;
                if (check_hlds__inst_util__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__inst_util__next_value_of_HeadVar__1_1 = check_hlds__inst_util__Var_36;
                      MR_Word check_hlds__inst_util__next_value_of_HeadVar__2_2 = check_hlds__inst_util__ConsArgs_8;

                      check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__next_value_of_HeadVar__2_2;
                      check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__inst_util__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_util__arg_insts_match_ctor_subtypes_4_p_0(
  MR_Word check_hlds__inst_util__ArgInsts_5,
  MR_Word check_hlds__inst_util__ConsId_6,
  MR_Word check_hlds__inst_util__Type_7,
  MR_Word check_hlds__inst_util__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__ConsArgs_17;
    MR_Word check_hlds__inst_util__TypeCtor_9;
    MR_Word check_hlds__inst_util__ConsDefn_10;
    MR_Word check_hlds__inst_util__ExistQVars_15;
    MR_Word check_hlds__inst_util__Var_11;
    MR_Word check_hlds__inst_util__Var_12;
    MR_Word check_hlds__inst_util__Var_13;
    MR_Word check_hlds__inst_util__Var_14;
    MR_Word check_hlds__inst_util__Var_16;
    MR_Word check_hlds__inst_util__Var_18;
    MR_Word check_hlds__inst_util__Var_19;
    MR_Word check_hlds__inst_util__Var_20;

    {
      check_hlds__inst_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__inst_util__Type_7, &check_hlds__inst_util__TypeCtor_9);
    }
    if (check_hlds__inst_util__succeeded)
      {
        {
          check_hlds__inst_util__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(check_hlds__inst_util__ModuleInfo_8, check_hlds__inst_util__TypeCtor_9, check_hlds__inst_util__ConsId_6, &check_hlds__inst_util__ConsDefn_10);
        }
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_10, (MR_Integer) 0)));
            check_hlds__inst_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_10, (MR_Integer) 1)));
            check_hlds__inst_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_10, (MR_Integer) 2)));
            check_hlds__inst_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_10, (MR_Integer) 3)));
            check_hlds__inst_util__ExistQVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_10, (MR_Integer) 4)));
            check_hlds__inst_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_10, (MR_Integer) 5)));
            check_hlds__inst_util__ConsArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_10, (MR_Integer) 6)));
            check_hlds__inst_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__ConsDefn_10, (MR_Integer) 7)));
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__ConsArgs_17)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__ConsArgs_17, (MR_Integer) 0)));
                check_hlds__inst_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__ConsArgs_17, (MR_Integer) 1)));
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExistQVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (check_hlds__inst_util__succeeded)
      {
        check_hlds__inst_util__succeeded = check_hlds__inst_util__arg_insts_match_ctor_subtypes_2_3_p_0(check_hlds__inst_util__ArgInsts_5, check_hlds__inst_util__ConsArgs_17, check_hlds__inst_util__ModuleInfo_8);
      }
    else
      check_hlds__inst_util__succeeded = MR_TRUE;
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
  MR_Word check_hlds__inst_util__Live_10,
  MR_Word check_hlds__inst_util__InstVarsA_11,
  MR_Word check_hlds__inst_util__SubInstA_12,
  MR_Word check_hlds__inst_util__InstB_13,
  MR_Word check_hlds__inst_util__Real_14,
  MR_Word * check_hlds__inst_util__Inst_15,
  MR_Word * check_hlds__inst_util__Detism_16,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__Inst0_18;

    {
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__SubInstA_12, check_hlds__inst_util__InstB_13, check_hlds__inst_util__Real_14, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
    }
    if (check_hlds__inst_util__succeeded)
      {
        {
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_18, check_hlds__inst_util__SubInstA_12, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
        }
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
        if (check_hlds__inst_util__succeeded)
          *check_hlds__inst_util__Inst_15 = check_hlds__inst_util__Inst0_18;
        else
          {
            MR_Word check_hlds__inst_util__InstVars0_19;
            MR_Word check_hlds__inst_util__SubInst0_20;

            check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__InstVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 1)));
                check_hlds__inst_util__SubInst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 2)));
                {
                  MR_Word check_hlds__inst_util__Var_24;

                  {
                    check_hlds__inst_util__Var_24 = mercury__set__union_2_f_0((MR_Word) &check_hlds__inst_util_scalar_common_1[0], check_hlds__inst_util__InstVars0_19, check_hlds__inst_util__InstVarsA_11);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_util__Inst_15 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_24));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst0_20));
                  }
                }
              }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_15 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVarsA_11));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_18));
              }
          }
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__inst_util__succeeded)
              {
                *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word check_hlds__inst_util__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__InstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__InstB_15;
        MR_Word check_hlds__inst_util__InstsB_16;
        MR_Word check_hlds__inst_util__Live_17;
        MR_Word check_hlds__inst_util__Lives_18;
        MR_Word check_hlds__inst_util__Inst_20;
        MR_Word check_hlds__inst_util__Insts_21;
        MR_Word check_hlds__inst_util__Detism1_24;
        MR_Word check_hlds__inst_util__Detism2_25;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__inst_util__InstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__Live_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
                check_hlds__inst_util__Lives_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_17, check_hlds__inst_util__InstA_13, check_hlds__inst_util__InstB_15, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__InstsA_14, check_hlds__inst_util__InstsB_16, check_hlds__inst_util__Lives_18, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_util__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
                        }
                        {
                          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__ConsIdB_2,
  MR_Word check_hlds__inst_util__ArgsB_3,
  MR_Word check_hlds__inst_util__LivesB_4,
  MR_Word check_hlds__inst_util__Real_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;

        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 7;
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_util__BoundInstA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__BoundInstsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__ConsIdA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 1)));

            {
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_26, check_hlds__inst_util__ConsIdB_2);
            }
            if (check_hlds__inst_util__succeeded)
              {
                MR_Word check_hlds__inst_util__Args_28;
                MR_Word check_hlds__inst_util__Var_32;
                MR_Word check_hlds__inst_util__Var_33;

                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__ArgsA_27, check_hlds__inst_util__ArgsB_3, check_hlds__inst_util__LivesB_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Args_28, check_hlds__inst_util__HeadVar__7_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    check_hlds__inst_util__Var_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      check_hlds__inst_util__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_32, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_26));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_32, 1) = ((MR_Box) (check_hlds__inst_util__Args_28));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_util__HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Var_32));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_33));
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_util__next_value_of_HeadVar__1_1 = check_hlds__inst_util__BoundInstsA_18;

                  check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return check_hlds__inst_util__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
  MR_Word check_hlds__inst_util__Live_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__HeadVar__3_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 6;
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
          }
        else
          {
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
          }
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_util__BoundInstB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__ConsIdA_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_63, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_63, (MR_Integer) 1)));
            MR_Word check_hlds__inst_util__ConsIdB_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 0)));
            MR_Word check_hlds__inst_util__ArgsB_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 1)));

            {
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
            }
            if (check_hlds__inst_util__succeeded)
              {
                MR_Word check_hlds__inst_util__Args_41;
                MR_Word check_hlds__inst_util__Detism1_42;
                MR_Word check_hlds__inst_util__BoundInstsTail_43;
                MR_Word check_hlds__inst_util__Detism2_44;
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
                MR_Word check_hlds__inst_util__Var_50;
                MR_Word check_hlds__inst_util__Var_60;
                MR_Word check_hlds__inst_util__Var_45;

                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__ArgsA_38, check_hlds__inst_util__ArgsB_40, check_hlds__inst_util__Live_1, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Args_41, &check_hlds__inst_util__Detism1_42, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__Var_62, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInstsTail_43, &check_hlds__inst_util__Detism2_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        check_hlds__inst_util__Var_50 = (MR_Integer) 0;
                        {
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism1_42, &check_hlds__inst_util__Var_45, &check_hlds__inst_util__Var_60);
                        }
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__Var_50 == check_hlds__inst_util__Var_60);
                        if (check_hlds__inst_util__succeeded)
                          *check_hlds__inst_util__HeadVar__5_5 = check_hlds__inst_util__BoundInstsTail_43;
                        else
                          {
                            MR_Word check_hlds__inst_util__Var_51;

                            {
                              check_hlds__inst_util__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_51, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_37));
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_51, 1) = ((MR_Box) (check_hlds__inst_util__Args_41));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *check_hlds__inst_util__HeadVar__5_5 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Var_51));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_43));
                            }
                          }
                        {
                          parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_42, check_hlds__inst_util__Detism2_44, check_hlds__inst_util__HeadVar__6_6);
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
              }
            else
              {
                MR_Word check_hlds__inst_util__Var_57;
                MR_Word check_hlds__inst_util__Detism1_58;
                MR_Word check_hlds__inst_util__Var_61;

                {
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__Var_61, check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
                }
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__Var_61);
                if (check_hlds__inst_util__succeeded)
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__Var_62, check_hlds__inst_util__HeadVar__3_3, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
                else
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
                if (check_hlds__inst_util__succeeded)
                  {
                    check_hlds__inst_util__Var_57 = (MR_Integer) 7;
                    {
                      parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_58, check_hlds__inst_util__Var_57, check_hlds__inst_util__HeadVar__6_6);
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__Live_9,
  MR_Word check_hlds__inst_util__BoundInstsA_10,
  MR_Word check_hlds__inst_util__BoundInstsB_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__BoundInsts_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (!(check_hlds__inst_util__succeeded))
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__inst_util__succeeded)
      {
        *check_hlds__inst_util__BoundInsts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
        check_hlds__inst_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_util__Detism0_16;
        MR_Word check_hlds__inst_util__ConsIdA_17;
        MR_Word check_hlds__inst_util__ConsIdB_19;
        MR_Word check_hlds__inst_util__Var_26;
        MR_Word check_hlds__inst_util__Var_27;
        MR_Word check_hlds__inst_util__Var_28;
        MR_Word check_hlds__inst_util__Var_29;
        MR_Word check_hlds__inst_util__Var_18;
        MR_Word check_hlds__inst_util__Var_20;

        {
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_10, check_hlds__inst_util__BoundInstsB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__BoundInsts_13, &check_hlds__inst_util__Detism0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
        }
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_10)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 0)));
                check_hlds__inst_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 1)));
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__inst_util__succeeded)
                  {
                    check_hlds__inst_util__ConsIdA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_26, (MR_Integer) 0)));
                    check_hlds__inst_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_26, (MR_Integer) 1)));
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_11)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__inst_util__succeeded)
                      {
                        check_hlds__inst_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 0)));
                        check_hlds__inst_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 1)));
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__inst_util__succeeded)
                          {
                            check_hlds__inst_util__ConsIdB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_28, (MR_Integer) 0)));
                            check_hlds__inst_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_28, (MR_Integer) 1)));
                            {
                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_17, check_hlds__inst_util__ConsIdB_19);
                            }
                          }
                      }
                  }
              }
            if (check_hlds__inst_util__succeeded)
              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_16;
            else
              {
                MR_Word check_hlds__inst_util__MaxSoln_22;
                MR_Word check_hlds__inst_util__Var_21;

                {
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_16, &check_hlds__inst_util__Var_21, &check_hlds__inst_util__MaxSoln_22);
                }
                {
                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_14, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_22);
                }
              }
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__Live_3,
  MR_Word check_hlds__inst_util__Real_4,
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__inst_util__succeeded)
          {
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word check_hlds__inst_util__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__InstsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__InstB_16;
        MR_Word check_hlds__inst_util__InstsB_17;
        MR_Word check_hlds__inst_util__Inst_20;
        MR_Word check_hlds__inst_util__Insts_21;
        MR_Word check_hlds__inst_util__Detism1_24;
        MR_Word check_hlds__inst_util__Detism2_25;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__InstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__inst_util__InstsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_3, check_hlds__inst_util__InstA_14, check_hlds__inst_util__InstB_16, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
            if (check_hlds__inst_util__succeeded)
              {
                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__InstsA_15, check_hlds__inst_util__InstsB_17, check_hlds__inst_util__Live_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                }
                if (check_hlds__inst_util__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_util__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
                    }
                    {
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                    }
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
  MR_Word check_hlds__inst_util__Live_9,
  MR_Word check_hlds__inst_util__InstA_10,
  MR_Word check_hlds__inst_util__InstB_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__Inst_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) {
      default:
        check_hlds__inst_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_util__InstA_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (check_hlds__inst_util__Live_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstB_11;
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
                  default:
                    check_hlds__inst_util__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
                      default:
                        check_hlds__inst_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        {
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                          check_hlds__inst_util__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__inst_util__HOInstInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                      MR_Word check_hlds__inst_util__UniqB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
                      MR_Word check_hlds__inst_util__Uniq_116;

                      {
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_115, &check_hlds__inst_util__Uniq_116);
                      }
                      if (check_hlds__inst_util__succeeded)
                        {
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *check_hlds__inst_util__Inst_13 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_116));
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_22));
                          }
                          check_hlds__inst_util__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
                      default:
                        check_hlds__inst_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__inst_util__UniqB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                          MR_Word check_hlds__inst_util__InstResultsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
                          MR_Word check_hlds__inst_util__BoundInstsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
                          MR_Word check_hlds__inst_util__Uniq_19;
                          MR_Word check_hlds__inst_util__BoundInsts_20;

                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_16, &check_hlds__inst_util__Uniq_19);
                          }
                          if (check_hlds__inst_util__succeeded)
                            {
                              {
                                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_17, check_hlds__inst_util__BoundInstsB_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                              }
                              if (check_hlds__inst_util__succeeded)
                                {
                                  switch (check_hlds__inst_util__UniqB_16) {
                                    default:
                                      check_hlds__inst_util__succeeded = MR_FALSE;
                                      break;
                                    case (MR_Integer) 2:
                                      check_hlds__inst_util__succeeded = MR_TRUE;
                                      break;
                                    case (MR_Integer) 1:
                                      check_hlds__inst_util__succeeded = MR_TRUE;
                                      break;
                                  }
                                  if (check_hlds__inst_util__succeeded)
                                    {
                                      check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsB_18, &check_hlds__inst_util__BoundInsts_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                    }
                                  else
                                    {
                                      check_hlds__inst_util__BoundInsts_20 = check_hlds__inst_util__BoundInstsB_18;
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                                    }
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                    *check_hlds__inst_util__Inst_13 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_19));
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_17));
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_20));
                                  }
                                  check_hlds__inst_util__succeeded = MR_TRUE;
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__inst_util__HOInstInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
                          MR_Word check_hlds__inst_util__UniqB_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                          MR_Word check_hlds__inst_util__Uniq_114;

                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_113, &check_hlds__inst_util__Uniq_114);
                          }
                          if (check_hlds__inst_util__succeeded)
                            {
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *check_hlds__inst_util__Inst_13 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_114));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoB_21));
                              }
                              check_hlds__inst_util__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word check_hlds__inst_util__InstVarsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                          MR_Word check_hlds__inst_util__SubInstB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_23, check_hlds__inst_util__SubInstB_24, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_util__UniqA_298 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 0)));
          MR_Word check_hlds__inst_util__HOInstInfoA_303 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

          if ((check_hlds__inst_util__HOInstInfoA_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
          else
            switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
              default:
                check_hlds__inst_util__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__inst_util__Uniq_224;

                      switch (check_hlds__inst_util__Live_9) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            check_hlds__inst_util__Uniq_224 = check_hlds__inst_util__UniqA_298;
                            check_hlds__inst_util__succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            {
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, &check_hlds__inst_util__Uniq_224);
                            }
                          }
                          break;
                      }
                      if (check_hlds__inst_util__succeeded)
                        {
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *check_hlds__inst_util__Inst_13 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_224));
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
                          }
                          check_hlds__inst_util__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__inst_util__Var_67;
                  MR_Word check_hlds__inst_util__UniqB_237;
                  MR_Word check_hlds__inst_util__Uniq_238;
                  MR_Word check_hlds__inst_util___HOInstInfoB_236;

                  switch (check_hlds__inst_util__Live_9) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      check_hlds__inst_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
                      break;
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      check_hlds__inst_util__UniqB_237 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
                      check_hlds__inst_util___HOInstInfoB_236 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                      check_hlds__inst_util__Var_67 = (MR_Integer) 1;
                      {
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__Var_67, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_237, &check_hlds__inst_util__Uniq_238);
                      }
                      if (check_hlds__inst_util__succeeded)
                        {
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *check_hlds__inst_util__Inst_13 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_238));
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
                          }
                          check_hlds__inst_util__succeeded = MR_TRUE;
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
                  default:
                    check_hlds__inst_util__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__inst_util__Var_71;
                      MR_Word check_hlds__inst_util__Var_72;
                      MR_Word check_hlds__inst_util__UniqB_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                      MR_Word check_hlds__inst_util__BoundInstsB_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
                      MR_Word check_hlds__inst_util__Uniq_228;
                      MR_Word check_hlds__inst_util__BoundInsts_229;
                      MR_Word check_hlds__inst_util__Detism1_231;
                      MR_Word check_hlds__inst_util___InstResultsB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

                      {
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_226, &check_hlds__inst_util__Uniq_228);
                      }
                      if (check_hlds__inst_util__succeeded)
                        {
                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_227, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_229, &check_hlds__inst_util__Detism1_231, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
                          if (check_hlds__inst_util__succeeded)
                            {
                              check_hlds__inst_util__Var_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              check_hlds__inst_util__Var_72 = (MR_Integer) 1;
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                *check_hlds__inst_util__Inst_13 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_228));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_71));
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_229));
                              }
                              {
                                parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_231, check_hlds__inst_util__Var_72, check_hlds__inst_util__Detism_14);
                              }
                              check_hlds__inst_util__succeeded = MR_TRUE;
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__inst_util__Var_68;
                      MR_Word check_hlds__inst_util__UniqB_233;
                      MR_Word check_hlds__inst_util__Uniq_234;
                      MR_Word check_hlds__inst_util___HOInstInfoB_232;

                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
                      if (check_hlds__inst_util__succeeded)
                        {
                          check_hlds__inst_util__UniqB_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                          check_hlds__inst_util___HOInstInfoB_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
                          check_hlds__inst_util__Var_68 = (MR_Integer) 1;
                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__Var_68, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_233, &check_hlds__inst_util__Uniq_234);
                          }
                          if (check_hlds__inst_util__succeeded)
                            {
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *check_hlds__inst_util__Inst_13 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_234));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
                              }
                              check_hlds__inst_util__succeeded = MR_TRUE;
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word check_hlds__inst_util__InstVarsB_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                      MR_Word check_hlds__inst_util__SubInstB_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

                      {
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_240, check_hlds__inst_util__SubInstB_241, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                      }
                    }
                    break;
                }
                break;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) {
          default:
            check_hlds__inst_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__UniqA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__InstResultsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__BoundInstsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
                default:
                  check_hlds__inst_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_util__Uniq_117;
                        MR_Word check_hlds__inst_util__BoundInsts_118;

                        switch (check_hlds__inst_util__Live_9) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              {
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, check_hlds__inst_util__UniqA_30, (MR_Integer) 1, &check_hlds__inst_util__Uniq_117);
                              }
                              if (check_hlds__inst_util__succeeded)
                                {
                                  check_hlds__inst_util__BoundInsts_118 = check_hlds__inst_util__BoundInstsA_32;
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                                  check_hlds__inst_util__succeeded = MR_TRUE;
                                }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, &check_hlds__inst_util__Uniq_117);
                              }
                              if (check_hlds__inst_util__succeeded)
                                {
                                  {
                                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_31, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                                  }
                                  if (check_hlds__inst_util__succeeded)
                                    {
                                      {
                                        check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsA_32, &check_hlds__inst_util__BoundInsts_118, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
                                      check_hlds__inst_util__succeeded = MR_TRUE;
                                    }
                                }
                            }
                            break;
                        }
                        if (check_hlds__inst_util__succeeded)
                          {
                            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              *check_hlds__inst_util__Inst_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_117));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_118));
                            }
                            check_hlds__inst_util__succeeded = MR_TRUE;
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_util__Var_87;
                    MR_Word check_hlds__inst_util__Var_89;
                    MR_Word check_hlds__inst_util__Var_90;
                    MR_Word check_hlds__inst_util__UniqB_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_util__Uniq_132;
                    MR_Word check_hlds__inst_util__BoundInsts_133;
                    MR_Word check_hlds__inst_util__Detism1_134;
                    MR_Word check_hlds__inst_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

                    {
                      check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                    }
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_131, &check_hlds__inst_util__Uniq_132);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        check_hlds__inst_util__Var_87 = (MR_Integer) 0;
                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Var_87, check_hlds__inst_util__UniqB_131, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_133, &check_hlds__inst_util__Detism1_134, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
                        if (check_hlds__inst_util__succeeded)
                          {
                            check_hlds__inst_util__Var_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            check_hlds__inst_util__Var_90 = (MR_Integer) 1;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              *check_hlds__inst_util__Inst_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_132));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_89));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_133));
                            }
                            {
                              parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_134, check_hlds__inst_util__Var_90, check_hlds__inst_util__Detism_14);
                            }
                            check_hlds__inst_util__succeeded = MR_TRUE;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_util__Var_96;
                        MR_Word check_hlds__inst_util__UniqB_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__BoundInstsB_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_util__Uniq_121;
                        MR_Word check_hlds__inst_util__BoundInsts_122;
                        MR_Word check_hlds__inst_util___InstResultsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__BoundInstsB_120, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_122, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
                        if (check_hlds__inst_util__succeeded)
                          {
                            {
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, *check_hlds__inst_util__Detism_14, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_119, &check_hlds__inst_util__Uniq_121);
                            }
                            if (check_hlds__inst_util__succeeded)
                              {
                                check_hlds__inst_util__Var_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                  *check_hlds__inst_util__Inst_13 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_121));
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_96));
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_122));
                                }
                                check_hlds__inst_util__succeeded = MR_TRUE;
                              }
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_util__Detism1_35;
                        MR_Word check_hlds__inst_util__Var_94;
                        MR_Word check_hlds__inst_util__UniqB_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__Uniq_129;
                        MR_Word check_hlds__inst_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_128, &check_hlds__inst_util__Uniq_129);
                        }
                        if (check_hlds__inst_util__succeeded)
                          {
                            switch (MR_tag((MR_Word) check_hlds__inst_util__InstResultsA_31)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                switch (MR_unmkbody(check_hlds__inst_util__InstResultsA_31)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      MR_Word check_hlds__inst_util__BoundInsts_126;

                                      {
                                        check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_126, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
                                      if (check_hlds__inst_util__succeeded)
                                        {
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                            *check_hlds__inst_util__Inst_13 = base;
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_126));
                                          }
                                          check_hlds__inst_util__succeeded = MR_TRUE;
                                        }
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
                                      check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                                      check_hlds__inst_util__succeeded = MR_TRUE;
                                    }
                                    break;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word check_hlds__inst_util__GroundnessResultA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 0)));
                                  MR_Word check_hlds__inst_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 1)));
                                  MR_Word check_hlds__inst_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 2)));
                                  MR_Word check_hlds__inst_util__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 3)));
                                  MR_Word check_hlds__inst_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 4)));
                                  MR_Word check_hlds__inst_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 5)));

                                  switch (check_hlds__inst_util__GroundnessResultA_36) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 2:
                                    case (MR_Integer) 0:
                                      {
                                        MR_Word check_hlds__inst_util__BoundInsts_123;

                                        {
                                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_123, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                        }
                                        if (check_hlds__inst_util__succeeded)
                                          {
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                              *check_hlds__inst_util__Inst_13 = base;
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_123));
                                            }
                                            check_hlds__inst_util__succeeded = MR_TRUE;
                                          }
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
                                        check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
                                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                                        check_hlds__inst_util__succeeded = MR_TRUE;
                                      }
                                      break;
                                  }
                                }
                                break;
                            }
                            if (check_hlds__inst_util__succeeded)
                              {
                                check_hlds__inst_util__Var_94 = (MR_Integer) 1;
                                {
                                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_35, check_hlds__inst_util__Var_94, check_hlds__inst_util__Detism_14);
                                }
                                check_hlds__inst_util__succeeded = MR_TRUE;
                              }
                          }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word check_hlds__inst_util__InstVarsB_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_util__SubInstB_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

                        {
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_135, check_hlds__inst_util__SubInstB_136, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_util__HOInstInfoA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__UniqA_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

              if ((check_hlds__inst_util__HOInstInfoA_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                }
              else
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
                  default:
                    check_hlds__inst_util__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__inst_util__Uniq_155;

                          switch (check_hlds__inst_util__Live_9) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                check_hlds__inst_util__Uniq_155 = check_hlds__inst_util__UniqA_219;
                                check_hlds__inst_util__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                {
                                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, &check_hlds__inst_util__Uniq_155);
                                }
                              }
                              break;
                          }
                          if (check_hlds__inst_util__succeeded)
                            {
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *check_hlds__inst_util__Inst_13 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_155));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
                              }
                              check_hlds__inst_util__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                          check_hlds__inst_util__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__inst_util__Var_77;
                      MR_Word check_hlds__inst_util__UniqB_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
                      MR_Word check_hlds__inst_util__Uniq_165;
                      MR_Word check_hlds__inst_util__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

                      switch (check_hlds__inst_util__Live_9) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            {
                              check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                            }
                            check_hlds__inst_util__succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 0:
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
                          break;
                      }
                      if (check_hlds__inst_util__succeeded)
                        {
                          check_hlds__inst_util__Var_77 = (MR_Integer) 1;
                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__Var_77, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_164, &check_hlds__inst_util__Uniq_165);
                          }
                          if (check_hlds__inst_util__succeeded)
                            {
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *check_hlds__inst_util__Inst_13 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_165));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
                              }
                              check_hlds__inst_util__succeeded = MR_TRUE;
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
                      default:
                        check_hlds__inst_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__inst_util__Var_81;
                          MR_Word check_hlds__inst_util__UniqB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                          MR_Word check_hlds__inst_util__InstResultsB_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
                          MR_Word check_hlds__inst_util__BoundInstsB_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
                          MR_Word check_hlds__inst_util__Uniq_159;
                          MR_Word check_hlds__inst_util__BoundInsts_160;
                          MR_Word check_hlds__inst_util__Detism1_161;

                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_156, &check_hlds__inst_util__Uniq_159);
                          }
                          if (check_hlds__inst_util__succeeded)
                            {
                              {
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_158, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_160, &check_hlds__inst_util__Detism1_161, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                              }
                              if (check_hlds__inst_util__succeeded)
                                {
                                  check_hlds__inst_util__Var_81 = (MR_Integer) 1;
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                    *check_hlds__inst_util__Inst_13 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_159));
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_157));
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_160));
                                  }
                                  {
                                    parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_161, check_hlds__inst_util__Var_81, check_hlds__inst_util__Detism_14);
                                  }
                                  check_hlds__inst_util__succeeded = MR_TRUE;
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__inst_util__UniqB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                          MR_Word check_hlds__inst_util__Uniq_163;
                          MR_Word check_hlds__inst_util___HOInstInfoB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_162, &check_hlds__inst_util__Uniq_163);
                          }
                          if (check_hlds__inst_util__succeeded)
                            {
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *check_hlds__inst_util__Inst_13 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_163));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
                              }
                              check_hlds__inst_util__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word check_hlds__inst_util__InstVarsB_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
                          MR_Word check_hlds__inst_util__SubInstB_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

                          {
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_166, check_hlds__inst_util__SubInstB_167, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
                        }
                        break;
                    }
                    break;
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_util__InstVarsA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__SubInstA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsA_58, check_hlds__inst_util__SubInstA_59, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
              }
            }
            break;
        }
        break;
    }
    return check_hlds__inst_util__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__inst_util__inst_may_restrict_cons_ids_2_f_0(
  MR_Word check_hlds__inst_util__ModuleInfo_4,
  MR_Word check_hlds__inst_util__Inst_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded;
        MR_Word check_hlds__inst_util__MayRestrict_6;

        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 5:
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_util__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_util__NewInst_21;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_20, &check_hlds__inst_util__NewInst_21);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_util__next_value_of_Inst_5 = check_hlds__inst_util__NewInst_21;

                    check_hlds__inst_util__Inst_5 = check_hlds__inst_util__next_value_of_Inst_5;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return check_hlds__inst_util__MayRestrict_6;
      }
      break;
    }
}

MR_Word MR_CALL 
check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(
  MR_Integer check_hlds__inst_util__Arity_3)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__PredInstInfo_4;
    MR_Word check_hlds__inst_util__TypeCtorInfo_16_16;
    MR_Word check_hlds__inst_util__InMode_5;
    MR_Word check_hlds__inst_util__OutMode_6;
    MR_Word check_hlds__inst_util__ArgModes_7;
    MR_Word check_hlds__inst_util__Var_8;
    MR_Integer check_hlds__inst_util__Var_9;
    MR_Word check_hlds__inst_util__Var_11;

    {
      parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__inst_util__InMode_5);
    }
    {
      parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__inst_util__OutMode_6);
    }
    check_hlds__inst_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    check_hlds__inst_util__Var_9 = (check_hlds__inst_util__Arity_3 - (MR_Integer) 1);
    {
      check_hlds__inst_util__Var_8 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__Var_9, ((MR_Box) (check_hlds__inst_util__InMode_5)));
    }
    {
      check_hlds__inst_util__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_11, 0) = ((MR_Box) (check_hlds__inst_util__OutMode_6));
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__inst_util__ArgModes_7 = mercury__list__f_43_43_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__Var_8, check_hlds__inst_util__Var_11);
    }
    {
      check_hlds__inst_util__PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 1) = ((MR_Box) (check_hlds__inst_util__ArgModes_7));
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    return check_hlds__inst_util__PredInstInfo_4;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__var_inst_contains_any_3_p_0(
  MR_Word check_hlds__inst_util__ModuleInfo_4,
  MR_Word check_hlds__inst_util__Instmap_5,
  MR_Word check_hlds__inst_util__Var_6)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__Inst_7;
    MR_Word check_hlds__inst_util__Expansions_10;
    MR_Word check_hlds__inst_util__Var_11;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__inst_util__Instmap_5, check_hlds__inst_util__Var_6, &check_hlds__inst_util__Inst_7);
    }
    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_10);
    }
    {
      check_hlds__inst_util__Var_11 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__Inst_7, check_hlds__inst_util__Expansions_10);
    }
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Var_11 == (MR_Integer) 1);
    return check_hlds__inst_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__inst_contains_any_2_p_0(
  MR_Word check_hlds__inst_util__ModuleInfo_3,
  MR_Word check_hlds__inst_util__Inst_4)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__Expansions_5;
    MR_Word check_hlds__inst_util__Var_6;

    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_5);
    }
    {
      check_hlds__inst_util__Var_6 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions_5);
    }
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Var_6 == (MR_Integer) 1);
    return check_hlds__inst_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_6_p_0(
  MR_Word check_hlds__inst_util__InstA_7,
  MR_Word check_hlds__inst_util__InstB_8,
  MR_Word check_hlds__inst_util__MaybeType_9,
  MR_Word * check_hlds__inst_util__Inst_10,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Word check_hlds__inst_util__Var_12;
    MR_Word check_hlds__inst_util__Var_13;
    MR_Word check_hlds__inst_util__Var_14;
    MR_Word check_hlds__inst_util__Var_15;
    MR_Word check_hlds__inst_util__Var_16;
    MR_Word check_hlds__inst_util__Var_17;

    if (check_hlds__inst_util__succeeded)
      {
        check_hlds__inst_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
        check_hlds__inst_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
        check_hlds__inst_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
            check_hlds__inst_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
            check_hlds__inst_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
          }
      }
    if (check_hlds__inst_util__succeeded)
      {
        MR_Word check_hlds__inst_util__ExpandedInstA_45;
        MR_Word check_hlds__inst_util__ExpandedInstB_46;

        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__inst_util__InstA_7, &check_hlds__inst_util__ExpandedInstA_45);
        }
        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__inst_util__InstB_8, &check_hlds__inst_util__ExpandedInstB_46);
        }
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstB_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (check_hlds__inst_util__succeeded)
          {
            *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstA_45;
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
        else
          {
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstA_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (check_hlds__inst_util__succeeded)
              {
                *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstB_46;
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31;
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
            else
              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(check_hlds__inst_util__ExpandedInstA_45, check_hlds__inst_util__ExpandedInstB_46, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
              }
          }
      }
    else
      {
        MR_Word check_hlds__inst_util__InstTable0_18;
        MR_Word check_hlds__inst_util__MergeInstTable0_19;
        MR_Word check_hlds__inst_util__MergeInstInfo_20;
        MR_Word check_hlds__inst_util__MergeInstName_21;
        MR_Word check_hlds__inst_util__MaybeMaybeMergedInst_22;
        MR_Word check_hlds__inst_util__MergeInstTable1_23;
        MR_Word check_hlds__inst_util__Inst0_25;

        {
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__InstTable0_18);
        }
        {
          hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__MergeInstTable0_19);
        }
        {
          check_hlds__inst_util__MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
        }
        {
          check_hlds__inst_util__MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
        }
        {
          hlds__hlds_data__search_insert_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, &check_hlds__inst_util__MaybeMaybeMergedInst_22, check_hlds__inst_util__MergeInstTable0_19, &check_hlds__inst_util__MergeInstTable1_23);
        }
        if ((check_hlds__inst_util__MaybeMaybeMergedInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__inst_util__InstTable1_26;
            MR_Word check_hlds__inst_util__InstTable2_27;
            MR_Word check_hlds__inst_util__MergeInstTable2_28;
            MR_Word check_hlds__inst_util__MergeInstTable3_29;
            MR_Word check_hlds__inst_util__InstTable3_30;
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34;
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35;
            MR_Word check_hlds__inst_util__Var_36;
            MR_Word check_hlds__inst_util__ExpandedInstA_55;
            MR_Word check_hlds__inst_util__ExpandedInstB_56;

            {
              hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable1_23, check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__InstTable1_26);
            }
            {
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34);
            }
            {
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34, check_hlds__inst_util__InstA_7, &check_hlds__inst_util__ExpandedInstA_55);
            }
            {
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34, check_hlds__inst_util__InstB_8, &check_hlds__inst_util__ExpandedInstB_56);
            }
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstB_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__Inst0_25 = check_hlds__inst_util__ExpandedInstA_55;
                check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34;
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
            else
              {
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstA_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                if (check_hlds__inst_util__succeeded)
                  {
                    check_hlds__inst_util__Inst0_25 = check_hlds__inst_util__ExpandedInstB_56;
                    check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34;
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                else
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(check_hlds__inst_util__ExpandedInstA_55, check_hlds__inst_util__ExpandedInstB_56, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35);
                  }
              }
            if (check_hlds__inst_util__succeeded)
              {
                {
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__inst_util__InstTable2_27);
                }
                {
                  hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__MergeInstTable2_28);
                }
                {
                  check_hlds__inst_util__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_36, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_25));
                }
                {
                  hlds__hlds_data__det_update_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, check_hlds__inst_util__Var_36, check_hlds__inst_util__MergeInstTable2_28, &check_hlds__inst_util__MergeInstTable3_29);
                }
                {
                  hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable3_29, check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__InstTable3_30);
                }
                {
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable3_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word check_hlds__inst_util__MaybeMergedInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeMergedInst_22, (MR_Integer) 0)));

            if ((check_hlds__inst_util__MaybeMergedInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                check_hlds__inst_util__Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
              }
            else
              check_hlds__inst_util__Inst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMergedInst_24, (MR_Integer) 0)));
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
        if (check_hlds__inst_util__succeeded)
          {
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_25, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32, check_hlds__inst_util__MergeInstName_21);
            }
            if (check_hlds__inst_util__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
              }
            else
              *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_25;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

void MR_CALL 
check_hlds__inst_util__make_shared_inst_list_4_p_0(
  MR_Word check_hlds__inst_util__HeadVar__1_1,
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
      }
    else
      {
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_util__Inst_10;
        MR_Word check_hlds__inst_util__Insts_11;
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

        {
          check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
        {
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
        }
      }
  }
}

void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(
  MR_Word check_hlds__inst_util__Inst0_5,
  MR_Word * check_hlds__inst_util__Inst_6,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36)
{
  {
    MR_bool check_hlds__inst_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[0 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_util__Inst_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
          }
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
              MR_Word check_hlds__inst_util__BoundInsts_14;
              MR_Word check_hlds__inst_util__Uniq0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__Uniq_51 = ((&check_hlds__inst_util_vector_common_2[5 + check_hlds__inst_util__Uniq0_50]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
              MR_Word check_hlds__inst_util___InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));

              {
                check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_51));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Uniq0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__Uniq_53 = ((&check_hlds__inst_util_vector_common_2[10 + check_hlds__inst_util__Uniq0_52]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_53));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
              }
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__SubInst_19;

              {
                check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
              {
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__inst_util__Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst_19));
                }
              else
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst_19;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__InstTable0_23;
              MR_Word check_hlds__inst_util__MostlyUniqInstTable0_24;
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
              MR_Word check_hlds__inst_util__MostlyUniqInstTable1_26;
              MR_Word check_hlds__inst_util__MostlyUniqInst_28;

              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__InstTable0_23);
              }
              {
                hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__MostlyUniqInstTable0_24);
              }
              {
                hlds__hlds_data__search_insert_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__MostlyUniqInstTable0_24, &check_hlds__inst_util__MostlyUniqInstTable1_26);
              }
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__inst_util__InstTable1_29;
                  MR_Word check_hlds__inst_util__SubInst1_30;
                  MR_Word check_hlds__inst_util__InstTable2_31;
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable2_32;
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable_33;
                  MR_Word check_hlds__inst_util__InstTable_34;
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38;
                  MR_Word check_hlds__inst_util__Var_39;
                  MR_Word check_hlds__inst_util__SubInst0_54;

                  {
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
                  {
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_54);
                  }
                  {
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__SubInst0_54, &check_hlds__inst_util__SubInst1_30);
                  }
                  {
                    check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst1_30, &check_hlds__inst_util__MostlyUniqInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38);
                  }
                  {
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__inst_util__InstTable2_31);
                  }
                  {
                    hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__MostlyUniqInstTable2_32);
                  }
                  {
                    check_hlds__inst_util__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_39, 0) = ((MR_Box) (check_hlds__inst_util__MostlyUniqInst_28));
                  }
                  {
                    hlds__hlds_data__det_update_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__Var_39, check_hlds__inst_util__MostlyUniqInstTable2_32, &check_hlds__inst_util__MostlyUniqInstTable_33);
                  }
                  {
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable_33, check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__InstTable_34);
                  }
                  {
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
                  }
                }
              else
                {
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    check_hlds__inst_util__MostlyUniqInst_28 = check_hlds__inst_util__Inst0_5;
                  else
                    check_hlds__inst_util__MostlyUniqInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
                }
              {
                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__MostlyUniqInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36, check_hlds__inst_util__InstName_22);
              }
              if (check_hlds__inst_util__succeeded)
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
              else
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__MostlyUniqInst_28;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(
  MR_Word check_hlds__inst_util__Live_12,
  MR_Word check_hlds__inst_util__InstA0_13,
  MR_Word check_hlds__inst_util__ConsIdB_14,
  MR_Word check_hlds__inst_util__ArgInstsB_15,
  MR_Word check_hlds__inst_util__ArgLives_16,
  MR_Word check_hlds__inst_util__Real_17,
  MR_Word check_hlds__inst_util__Type_18,
  MR_Word * check_hlds__inst_util__Inst_19,
  MR_Word * check_hlds__inst_util__Detism_20,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__InstA_22;

    {
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__InstA0_13, &check_hlds__inst_util__InstA_22);
    }
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_22)) {
      default:
        check_hlds__inst_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_util__InstA_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__ArgInsts_38;
              MR_Word check_hlds__inst_util__Var_76;
              MR_Word check_hlds__inst_util__Var_77;
              MR_Word check_hlds__inst_util__Var_78;
              MR_Word check_hlds__inst_util__Var_79;
              MR_Word check_hlds__inst_util__Var_80;

              switch (check_hlds__inst_util__Live_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__ArgInsts_38 = check_hlds__inst_util__ArgInstsB_15;
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
                    check_hlds__inst_util__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23);
                    }
                    if (check_hlds__inst_util__succeeded)
                      {
                        {
                          check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, &check_hlds__inst_util__ArgInsts_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                        }
                        check_hlds__inst_util__succeeded = MR_TRUE;
                      }
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__arg_insts_match_ctor_subtypes_4_p_0(check_hlds__inst_util__ArgInsts_38, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__Type_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      check_hlds__inst_util__Var_76 = (MR_Integer) 1;
                      check_hlds__inst_util__Var_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      check_hlds__inst_util__Var_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      *check_hlds__inst_util__Detism_20 = (MR_Integer) 0;
                      {
                        check_hlds__inst_util__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_79, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
                        MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_79, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_38));
                      }
                      {
                        check_hlds__inst_util__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_78, 0) = ((MR_Box) (check_hlds__inst_util__Var_79));
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_78, 1) = ((MR_Box) (check_hlds__inst_util__Var_80));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__inst_util__Inst_19 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Var_76));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_77));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__Var_78));
                      }
                      check_hlds__inst_util__succeeded = MR_TRUE;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_util__Inst_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
              check_hlds__inst_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_util__Uniq_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_22, (MR_Integer) 0)));
          MR_Word check_hlds__inst_util__Var_71;
          MR_Word check_hlds__inst_util__Var_72;
          MR_Word check_hlds__inst_util__Var_73;
          MR_Word check_hlds__inst_util__Var_74;
          MR_Word check_hlds__inst_util__ArgInsts_81;
          MR_Word check_hlds__inst_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_22, (MR_Integer) 1)));

          {
            check_hlds__inst_util__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__Type_18);
          }
          check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
          if (check_hlds__inst_util__succeeded)
            {
              switch (check_hlds__inst_util__Live_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__Uniq_39, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_81, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Uniq_39, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_81, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  check_hlds__inst_util__Var_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  check_hlds__inst_util__Var_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    check_hlds__inst_util__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_73, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_73, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_81));
                  }
                  {
                    check_hlds__inst_util__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_72, 0) = ((MR_Box) (check_hlds__inst_util__Var_73));
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_72, 1) = ((MR_Box) (check_hlds__inst_util__Var_74));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_util__Inst_19 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_39));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_71));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__Var_72));
                  }
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_22, (MR_Integer) 0)))) {
          default:
            check_hlds__inst_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_util__UniqA_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_22, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__BoundInstsA_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_22, (MR_Integer) 3)));
              MR_Word check_hlds__inst_util__BoundInsts_44;
              MR_Word check_hlds__inst_util__Var_68;
              MR_Word check_hlds__inst_util___InstResultsA_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_22, (MR_Integer) 2)));

              switch (check_hlds__inst_util__Live_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__inst_util__BoundInstsB_45;
                    MR_Word check_hlds__inst_util__Var_63;

                    {
                      check_hlds__inst_util__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_63, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_63, 1) = ((MR_Box) (check_hlds__inst_util__ArgInstsB_15));
                    }
                    {
                      check_hlds__inst_util__BoundInstsB_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_45, 0) = ((MR_Box) (check_hlds__inst_util__Var_63));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0((MR_Integer) 1, check_hlds__inst_util__BoundInstsA_43, check_hlds__inst_util__BoundInstsB_45, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_44, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(check_hlds__inst_util__BoundInstsA_43, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_44, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  check_hlds__inst_util__Var_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_util__Inst_19 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_41));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_68));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_44));
                  }
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_util__ArgInsts0_47;
              MR_Word check_hlds__inst_util__Var_59;
              MR_Word check_hlds__inst_util__Var_60;
              MR_Word check_hlds__inst_util__Var_61;
              MR_Word check_hlds__inst_util__Var_62;
              MR_Word check_hlds__inst_util__ArgInsts_82;
              MR_Word check_hlds__inst_util__UniqA_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_22, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_22, (MR_Integer) 2)));

              switch (check_hlds__inst_util__Live_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__UniqA_83, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts0_47, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__UniqA_83, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts0_47, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                  }
                  break;
              }
              if (check_hlds__inst_util__succeeded)
                {
                  {
                    check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_5_p_0(check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__Type_18, check_hlds__inst_util__ArgInsts0_47, &check_hlds__inst_util__ArgInsts_82, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                  }
                  check_hlds__inst_util__Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  check_hlds__inst_util__Var_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    check_hlds__inst_util__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_61, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__Var_61, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_82));
                  }
                  {
                    check_hlds__inst_util__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_60, 0) = ((MR_Box) (check_hlds__inst_util__Var_61));
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_60, 1) = ((MR_Box) (check_hlds__inst_util__Var_62));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_util__Inst_19 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_83));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Var_59));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__Var_60));
                  }
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_util__InstVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_22, (MR_Integer) 1)));
              MR_Word check_hlds__inst_util__SubInstA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_22, (MR_Integer) 2)));
              MR_Word check_hlds__inst_util__Inst0_50;

              {
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__SubInstA_49, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, &check_hlds__inst_util__Inst0_50, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
              }
              if (check_hlds__inst_util__succeeded)
                {
                  {
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_50, check_hlds__inst_util__SubInstA_49, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
                  }
                  if (check_hlds__inst_util__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_util__Inst_19 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_48));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_50));
                    }
                  else
                    *check_hlds__inst_util__Inst_19 = check_hlds__inst_util__Inst0_50;
                  check_hlds__inst_util__succeeded = MR_TRUE;
                }
            }
            break;
        }
        break;
    }
    return check_hlds__inst_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_8_p_0(
  MR_Word check_hlds__inst_util__Live_9,
  MR_Word check_hlds__inst_util__InstA_10,
  MR_Word check_hlds__inst_util__InstB_11,
  MR_Word check_hlds__inst_util__Real_12,
  MR_Word * check_hlds__inst_util__Inst_13,
  MR_Word * check_hlds__inst_util__Detism_14,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30)
{
  {
    MR_bool check_hlds__inst_util__succeeded;
    MR_Word check_hlds__inst_util__InstTable0_16;
    MR_Word check_hlds__inst_util__UnifyInstTable0_17;

    {
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__InstTable0_16);
    }
    {
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__UnifyInstTable0_17);
    }
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (!(check_hlds__inst_util__succeeded))
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__inst_util__succeeded)
      {
        MR_Word check_hlds__inst_util__ExpandedInstA_45;
        MR_Word check_hlds__inst_util__ExpandedInstB_46;
        MR_Word check_hlds__inst_util__Inst0_47;
        MR_Word check_hlds__inst_util__Var_50;
        MR_Word check_hlds__inst_util__Var_51;
        MR_Word check_hlds__inst_util__Var_48;

        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__inst_util__InstA_10, &check_hlds__inst_util__ExpandedInstA_45);
        }
        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__inst_util__InstB_11, &check_hlds__inst_util__ExpandedInstB_46);
        }
        {
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__ExpandedInstA_45, check_hlds__inst_util__ExpandedInstB_46, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_47, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
        }
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__Var_50 = (MR_Integer) 0;
            {
              parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__inst_util__Detism_14, &check_hlds__inst_util__Var_48, &check_hlds__inst_util__Var_51);
            }
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Var_50 == check_hlds__inst_util__Var_51);
            if (check_hlds__inst_util__succeeded)
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            else
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_47;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word check_hlds__inst_util__UnifyInstInfo_18;
        MR_Word check_hlds__inst_util__UnifyInstName_19;
        MR_Word check_hlds__inst_util__MaybeMaybeInst_20;
        MR_Word check_hlds__inst_util__UnifyInstTable1_21;
        MR_Word check_hlds__inst_util__Inst0_23;

        {
          check_hlds__inst_util__UnifyInstInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
        }
        {
          check_hlds__inst_util__UnifyInstName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
        }
        {
          hlds__hlds_data__search_insert_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, &check_hlds__inst_util__MaybeMaybeInst_20, check_hlds__inst_util__UnifyInstTable0_17, &check_hlds__inst_util__UnifyInstTable1_21);
        }
        if ((check_hlds__inst_util__MaybeMaybeInst_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__inst_util__InstTable1_24;
            MR_Word check_hlds__inst_util__InstTable2_25;
            MR_Word check_hlds__inst_util__UnifyInstTable2_26;
            MR_Word check_hlds__inst_util__UnifyInstTable_27;
            MR_Word check_hlds__inst_util__InstTable_28;
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32;
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;
            MR_Word check_hlds__inst_util__Var_34;
            MR_Word check_hlds__inst_util__ExpandedInstA_61;
            MR_Word check_hlds__inst_util__ExpandedInstB_62;
            MR_Word check_hlds__inst_util__Inst0_63;
            MR_Word check_hlds__inst_util__Var_66;
            MR_Word check_hlds__inst_util__Var_67;
            MR_Word check_hlds__inst_util__Var_64;

            {
              hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable1_21, check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__InstTable1_24);
            }
            {
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32);
            }
            {
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32, check_hlds__inst_util__InstA_10, &check_hlds__inst_util__ExpandedInstA_61);
            }
            {
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32, check_hlds__inst_util__InstB_11, &check_hlds__inst_util__ExpandedInstB_62);
            }
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__ExpandedInstA_61, check_hlds__inst_util__ExpandedInstB_62, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_63, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
            if (check_hlds__inst_util__succeeded)
              {
                check_hlds__inst_util__Var_66 = (MR_Integer) 0;
                {
                  parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__inst_util__Detism_14, &check_hlds__inst_util__Var_64, &check_hlds__inst_util__Var_67);
                }
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Var_66 == check_hlds__inst_util__Var_67);
                if (check_hlds__inst_util__succeeded)
                  check_hlds__inst_util__Inst0_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                else
                  check_hlds__inst_util__Inst0_23 = check_hlds__inst_util__Inst0_63;
                {
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__inst_util__InstTable2_25);
                }
                {
                  hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__UnifyInstTable2_26);
                }
                {
                  check_hlds__inst_util__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_34, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_23));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__Var_34, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
                }
                {
                  hlds__hlds_data__det_update_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, check_hlds__inst_util__Var_34, check_hlds__inst_util__UnifyInstTable2_26, &check_hlds__inst_util__UnifyInstTable_27);
                }
                {
                  hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable_27, check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__InstTable_28);
                }
                {
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
                }
                check_hlds__inst_util__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word check_hlds__inst_util__MaybeInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_20, (MR_Integer) 0)));

            if ((check_hlds__inst_util__MaybeInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  check_hlds__inst_util__Inst0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
                }
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
              }
            else
              {
                check_hlds__inst_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 0)));
                *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 1)));
              }
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
        if (check_hlds__inst_util__succeeded)
          {
            {
              check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_23, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30, check_hlds__inst_util__UnifyInstName_19);
            }
            if (check_hlds__inst_util__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_util__Inst_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
              }
            else
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_23;
            check_hlds__inst_util__succeeded = MR_TRUE;
          }
      }
    return check_hlds__inst_util__succeeded;
  }
}

void MR_CALL 
check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(
  MR_Word check_hlds__inst_util__ModuleInfo_4,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_0_8,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Inst_9)
{
  {
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word check_hlds__inst_util__InstName_6;

    if (check_hlds__inst_util__succeeded)
      {
        check_hlds__inst_util__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 1)));
        {
          MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_10_10;

          {
            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_6, &check_hlds__inst_util__STATE_VARIABLE_Inst_10_10);
          }
          {
            check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__STATE_VARIABLE_Inst_10_10, check_hlds__inst_util__STATE_VARIABLE_Inst_9);
          }
        }
      }
    else
      {
        MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_12_12;
        MR_Word check_hlds__inst_util__Var_7;

        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 1)));
            check_hlds__inst_util__STATE_VARIABLE_Inst_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 2)));
            {
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__STATE_VARIABLE_Inst_12_12, check_hlds__inst_util__STATE_VARIABLE_Inst_9);
            }
          }
        else
          *check_hlds__inst_util__STATE_VARIABLE_Inst_9 = check_hlds__inst_util__STATE_VARIABLE_Inst_0_8;
      }
  }
}

void MR_CALL 
check_hlds__inst_util__inst_expand_3_p_0(
  MR_Word check_hlds__inst_util__ModuleInfo_4,
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_0_7,
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Inst_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
        MR_Word check_hlds__inst_util__InstName_6;

        if (check_hlds__inst_util__succeeded)
          {
            check_hlds__inst_util__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_7, (MR_Integer) 1)));
            {
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_9_9;

              {
                check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_6, &check_hlds__inst_util__STATE_VARIABLE_Inst_9_9);
              }
              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__inst_util__next_value_of_STATE_VARIABLE_Inst_0_7 = check_hlds__inst_util__STATE_VARIABLE_Inst_9_9;

                check_hlds__inst_util__STATE_VARIABLE_Inst_0_7 = check_hlds__inst_util__next_value_of_STATE_VARIABLE_Inst_0_7;
              }
              continue;
            }
          }
        else
          *check_hlds__inst_util__STATE_VARIABLE_Inst_8 = check_hlds__inst_util__STATE_VARIABLE_Inst_0_7;
      }
      break;
    }
}

void mercury__check_hlds__inst_util__init(void)
{
}

void mercury__check_hlds__inst_util__init_type_tables(void)
{
}

void mercury__check_hlds__inst_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.inst_util. */
