/*
** Automatically generated from `inst_util.m'
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




#line 1718 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

#line 2257 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2257 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2257 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2257 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2243 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2243 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2243 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2243 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2188 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2188 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2188 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2188 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2144 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2144 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2144 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);

#line 2127 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2127 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2127 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2127 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2127 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2127 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2127 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);

#line 2083 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2083 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2083 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);

#line 2041 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2041 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2041 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2041 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2041 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2041 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2041 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11);

#line 2032 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2032 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2032 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2032 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2032 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2032 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2032 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 2020 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 2020 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2020 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2020 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2020 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2020 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2020 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 2011 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 2011 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 2011 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 2011 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2011 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2011 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10);

#line 1980 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1980 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1980 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1980 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1980 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1980 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13);

#line 1971 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1971 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1971 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1971 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6);

#line 1835 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1835 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1835 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1835 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1835 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1835 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1835 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);

#line 1807 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1807 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1807 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1807 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1807 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1807 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1807 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);

#line 1787 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1787 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1787 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1787 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1787 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1787 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1787 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);

#line 1703 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1703 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1703 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1703 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1703 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1692 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1692 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1692 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1692 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1692 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1585 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1585 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1585 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1585 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1585 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1464 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1464 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1464 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1464 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1464 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);

#line 1437 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1437 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1437 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1437 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1437 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1437 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);

#line 1417 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1417 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1417 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1417 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 1406 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1406 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1406 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1406 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1390 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1390 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1390 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1390 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1281 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48);

#line 1260 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1260 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1260 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1260 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1154 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1154 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1154 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1154 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);

#line 1139 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1139 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1139 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1139 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1120 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1120 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1120 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1120 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 1003 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 1003 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12);

#line 956 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 956 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 956 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 956 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);

#line 940 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 940 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 940 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 940 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 921 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 921 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 921 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 921 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 878 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 878 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 878 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 878 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 843 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 843 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 843 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 843 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);

#line 718 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 718 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 718 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 718 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);

#line 697 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 697 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 697 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 697 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 280 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 280 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 280 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 280 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);

#line 255 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 255 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 255 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 255 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);


static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_3[1][3];


#line 1686 "inst_util.m"
/* sealed */ struct check_hlds__inst_util__vector_common_type_2_0_s {
#line 1686 "inst_util.m"
  const MR_Word check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
#line 1686 "inst_util.m"
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



#line 1718 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
#line 1718 "inst_util.m"
{
#line 1720 "inst_util.m"
  {
#line 1720 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1720 "inst_util.m"
  }
#line 1718 "inst_util.m"
}

#line 2257 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2257 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2257 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2257 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2257 "inst_util.m"
{
#line 2260 "inst_util.m"
  while (MR_TRUE)
#line 2260 "inst_util.m"
    {
#line 2260 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2260 "inst_util.m"
      {
#line 2260 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2260 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2260 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2260 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2260 "inst_util.m"
        else
#line 2262 "inst_util.m"
          {
#line 2262 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2262 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2262 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2262 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_14;
#line 2263 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2264 "inst_util.m"
            {
#line 2264 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_14 = check_hlds__inst_util__inst_list_contains_any_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2269 "inst_util.m"
#line 2269 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsAny_14) {
#line 2269 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2269 "inst_util.m"
              case (MR_Integer) 0:
#line 2271 "inst_util.m"
                {
#line 2271 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2271 "inst_util.m"
                  {
#line 2271 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2271 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2271 "inst_util.m"
                  }
#line 2271 "inst_util.m"
                  continue;
#line 2271 "inst_util.m"
                }
#line 2269 "inst_util.m"
                break;
#line 2269 "inst_util.m"
              case (MR_Integer) 1:
#line 2268 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2269 "inst_util.m"
                break;
#line 2269 "inst_util.m"
            }
#line 2262 "inst_util.m"
          }
#line 2260 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2260 "inst_util.m"
      }
#line 2260 "inst_util.m"
      break;
#line 2260 "inst_util.m"
    }
#line 2257 "inst_util.m"
}

#line 2243 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2243 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2243 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2243 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2243 "inst_util.m"
{
#line 2246 "inst_util.m"
  while (MR_TRUE)
#line 2246 "inst_util.m"
    {
#line 2246 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2246 "inst_util.m"
      {
#line 2246 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2246 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2246 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2246 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2246 "inst_util.m"
        else
#line 2247 "inst_util.m"
          {
#line 2247 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2247 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2247 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_12;

#line 2248 "inst_util.m"
            {
#line 2248 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_12 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2252 "inst_util.m"
#line 2252 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsAny_12) {
#line 2252 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2252 "inst_util.m"
              case (MR_Integer) 0:
#line 2254 "inst_util.m"
                {
#line 2254 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2254 "inst_util.m"
                  {
#line 2254 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2254 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2254 "inst_util.m"
                  }
#line 2254 "inst_util.m"
                  continue;
#line 2254 "inst_util.m"
                }
#line 2252 "inst_util.m"
                break;
#line 2252 "inst_util.m"
              case (MR_Integer) 1:
#line 2251 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2252 "inst_util.m"
                break;
#line 2252 "inst_util.m"
            }
#line 2247 "inst_util.m"
          }
#line 2246 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2246 "inst_util.m"
      }
#line 2246 "inst_util.m"
      break;
#line 2246 "inst_util.m"
    }
#line 2243 "inst_util.m"
}

#line 2188 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2188 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2188 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2188 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2188 "inst_util.m"
{
#line 2192 "inst_util.m"
  while (MR_TRUE)
#line 2192 "inst_util.m"
    {
#line 2192 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2192 "inst_util.m"
      {
#line 2192 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2192 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsAny_8;

#line 2192 "inst_util.m"
#line 2192 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) {
#line 2192 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2192 "inst_util.m"
          case (MR_Integer) 0:
#line 2240 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2192 "inst_util.m"
            break;
#line 2192 "inst_util.m"
          case (MR_Integer) 1:
#line 2240 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2192 "inst_util.m"
            break;
#line 2192 "inst_util.m"
          case (MR_Integer) 2:
#line 2193 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2192 "inst_util.m"
            break;
#line 2192 "inst_util.m"
          case (MR_Integer) 3:
#line 2192 "inst_util.m"
#line 2192 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) {
#line 2192 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2192 "inst_util.m"
              case (MR_Integer) 0:
#line 2195 "inst_util.m"
                {
#line 2195 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2195 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2195 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2199 "inst_util.m"
#line 2199 "inst_util.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_util__InstResults_12)) {
#line 2199 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2199 "inst_util.m"
                    case (MR_Integer) 0:
#line 2199 "inst_util.m"
#line 2199 "inst_util.m"
                      switch (MR_unmkbody(check_hlds__inst_util__InstResults_12)) {
#line 2199 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2199 "inst_util.m"
                        case (MR_Integer) 0:
#line 2214 "inst_util.m"
                          {
#line 2214 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                          }
#line 2199 "inst_util.m"
                          break;
#line 2199 "inst_util.m"
                        case (MR_Integer) 1:
#line 2198 "inst_util.m"
                          check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2199 "inst_util.m"
                          break;
#line 2199 "inst_util.m"
                      }
#line 2199 "inst_util.m"
                      break;
#line 2199 "inst_util.m"
                    case (MR_Integer) 1:
#line 2200 "inst_util.m"
                      {
#line 2200 "inst_util.m"
                        MR_Word check_hlds__inst_util__AnyResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 1)));
#line 2200 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 0)));
#line 2200 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 2)));
#line 2200 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 3)));
#line 2200 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 4)));
#line 2200 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 5)));

#line 2204 "inst_util.m"
#line 2204 "inst_util.m"
                        switch (check_hlds__inst_util__AnyResults_15) {
#line 2204 "inst_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 2204 "inst_util.m"
                          case (MR_Integer) 2:
#line 2209 "inst_util.m"
                            {
#line 2209 "inst_util.m"
                              check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                            }
#line 2204 "inst_util.m"
                            break;
#line 2204 "inst_util.m"
                          case (MR_Integer) 1:
#line 2206 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2204 "inst_util.m"
                            break;
#line 2204 "inst_util.m"
                          case (MR_Integer) 0:
#line 2203 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2204 "inst_util.m"
                            break;
#line 2204 "inst_util.m"
                        }
#line 2200 "inst_util.m"
                      }
#line 2199 "inst_util.m"
                      break;
#line 2199 "inst_util.m"
                  }
#line 2195 "inst_util.m"
                }
#line 2192 "inst_util.m"
                break;
#line 2192 "inst_util.m"
              case (MR_Integer) 1:
#line 2192 "inst_util.m"
              case (MR_Integer) 5:
#line 2240 "inst_util.m"
                check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2192 "inst_util.m"
                break;
#line 2192 "inst_util.m"
              case (MR_Integer) 2:
#line 2218 "inst_util.m"
                {
#line 2219 "inst_util.m"
                  {
#line 2219 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 2218 "inst_util.m"
                }
#line 2192 "inst_util.m"
                break;
#line 2192 "inst_util.m"
              case (MR_Integer) 3:
#line 2231 "inst_util.m"
                {
#line 2231 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2231 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2232 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2232 "inst_util.m"
                  {
#line 2232 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2232 "inst_util.m"
                    check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2232 "inst_util.m"
                  }
#line 2232 "inst_util.m"
                  continue;
#line 2231 "inst_util.m"
                }
#line 2192 "inst_util.m"
                break;
#line 2192 "inst_util.m"
              case (MR_Integer) 4:
#line 2221 "inst_util.m"
                {
#line 2221 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2222 "inst_util.m"
                  {
#line 2222 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
#line 2222 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2223 "inst_util.m"
                    check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2222 "inst_util.m"
                  else
#line 2225 "inst_util.m"
                    {
#line 2225 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_22;
#line 2225 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2225 "inst_util.m"
                      {
#line 2225 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                      }
#line 2226 "inst_util.m"
                      {
#line 2226 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                      }
#line 2227 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2227 "inst_util.m"
                      {
#line 2227 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2227 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2227 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2227 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2227 "inst_util.m"
                      }
#line 2227 "inst_util.m"
                      continue;
#line 2225 "inst_util.m"
                    }
#line 2221 "inst_util.m"
                }
#line 2192 "inst_util.m"
                break;
#line 2192 "inst_util.m"
            }
#line 2192 "inst_util.m"
            break;
#line 2192 "inst_util.m"
        }
#line 2192 "inst_util.m"
        return check_hlds__inst_util__ContainsAny_8;
#line 2192 "inst_util.m"
      }
#line 2192 "inst_util.m"
      break;
#line 2192 "inst_util.m"
    }
#line 2188 "inst_util.m"
}

#line 2144 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2144 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2144 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27)
#line 2144 "inst_util.m"
{
#line 2151 "inst_util.m"
  {
#line 2151 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2151 "inst_util.m"
    if ((check_hlds__inst_util__BoundInstsA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2151 "inst_util.m"
      {
#line 2152 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsB_8;
#line 2151 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2151 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2151 "inst_util.m"
      }
#line 2151 "inst_util.m"
    else
#line 2151 "inst_util.m"
      {
#line 2151 "inst_util.m"
        MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 1)));
#line 2151 "inst_util.m"
        MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 0)));

#line 2151 "inst_util.m"
        if ((check_hlds__inst_util__BoundInstsB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2154 "inst_util.m"
          {
#line 2156 "inst_util.m"
            *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsA_7;
#line 2154 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2154 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2154 "inst_util.m"
          }
#line 2151 "inst_util.m"
        else
#line 2158 "inst_util.m"
          {
#line 2158 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 0)));
#line 2158 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsTailB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 1)));
#line 2158 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 0)));
#line 2158 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 1)));
#line 2158 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 0)));
#line 2158 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 1)));

#line 2162 "inst_util.m"
            {
#line 2162 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
            }
#line 2162 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2164 "inst_util.m"
              {
#line 2164 "inst_util.m"
                MR_Word check_hlds__inst_util__MaybeTypes_22;
#line 2164 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_23;
#line 2164 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInst_24;
#line 2164 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_25;
#line 2164 "inst_util.m"
                MR_Integer check_hlds__inst_util__V_28_28;
#line 2164 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29;

#line 2164 "inst_util.m"
                {
#line 2164 "inst_util.m"
                  check_hlds__inst_util__V_28_28 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_util__ArgsA_19);
                }
#line 2163 "inst_util.m"
                {
#line 2163 "inst_util.m"
                  check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__V_28_28, &check_hlds__inst_util__MaybeTypes_22);
                }
#line 2165 "inst_util.m"
                {
#line 2165 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_19, check_hlds__inst_util__ArgsB_21, check_hlds__inst_util__MaybeTypes_22, &check_hlds__inst_util__Args_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 2164 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2164 "inst_util.m"
                  {
#line 2166 "inst_util.m"
                    {
#line 2166 "inst_util.m"
                      check_hlds__inst_util__BoundInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2166 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_18));
#line 2166 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 1) = ((MR_Box) (check_hlds__inst_util__Args_23));
#line 2166 "inst_util.m"
                    }
#line 2167 "inst_util.m"
                    {
#line 2167 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2164 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2164 "inst_util.m"
                      {
#line 2169 "inst_util.m"
                        {
#line 2169 "inst_util.m"
                          MR_Word base;
#line 2169 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2169 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_24));
#line 2169 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_25));
#line 2169 "inst_util.m"
                        }
#line 2169 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2164 "inst_util.m"
                      }
#line 2164 "inst_util.m"
                  }
#line 2164 "inst_util.m"
              }
#line 2162 "inst_util.m"
            else
#line 2170 "inst_util.m"
              {
#line 2170 "inst_util.m"
                MR_Word check_hlds__inst_util__V_39_39;

#line 2170 "inst_util.m"
                {
#line 2170 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_39_39, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
                }
#line 2170 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_39_39);
#line 2170 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2172 "inst_util.m"
                  {
#line 2172 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_34;

#line 2171 "inst_util.m"
                    {
#line 2171 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2172 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2172 "inst_util.m"
                      {
#line 2173 "inst_util.m"
                        {
#line 2173 "inst_util.m"
                          MR_Word base;
#line 2173 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2173 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_41_41));
#line 2173 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_34));
#line 2173 "inst_util.m"
                        }
#line 2173 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2172 "inst_util.m"
                      }
#line 2172 "inst_util.m"
                  }
#line 2170 "inst_util.m"
                else
#line 2176 "inst_util.m"
                  {
#line 2176 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_35;

#line 2175 "inst_util.m"
                    {
#line 2175 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__BoundInstsA_7, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2176 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2176 "inst_util.m"
                      {
#line 2177 "inst_util.m"
                        {
#line 2177 "inst_util.m"
                          MR_Word base;
#line 2177 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2177 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInstB_16));
#line 2177 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_35));
#line 2177 "inst_util.m"
                        }
#line 2177 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2176 "inst_util.m"
                      }
#line 2176 "inst_util.m"
                  }
#line 2170 "inst_util.m"
              }
#line 2158 "inst_util.m"
          }
#line 2151 "inst_util.m"
      }
#line 2151 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2151 "inst_util.m"
  }
#line 2144 "inst_util.m"
}

#line 2127 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2127 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2127 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2127 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2127 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2127 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2127 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6)
#line 2127 "inst_util.m"
{
#line 2131 "inst_util.m"
  {
#line 2131 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2131 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2131 "inst_util.m"
      {
#line 2131 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2131 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2131 "inst_util.m"
          {
#line 2131 "inst_util.m"
            *check_hlds__inst_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2131 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 2131 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2131 "inst_util.m"
          }
#line 2131 "inst_util.m"
      }
#line 2131 "inst_util.m"
    else
#line 2133 "inst_util.m"
      {
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgB_13;
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsB_14;
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeType_15;
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeTypes_16;
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__Arg_17;
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__Args_18;
#line 2133 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22;

#line 2132 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2132 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2132 "inst_util.m"
          {
#line 2132 "inst_util.m"
            check_hlds__inst_util__ArgB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2132 "inst_util.m"
            check_hlds__inst_util__ArgsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2132 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 2132 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2132 "inst_util.m"
              {
#line 2132 "inst_util.m"
                check_hlds__inst_util__MaybeType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 2132 "inst_util.m"
                check_hlds__inst_util__MaybeTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 2134 "inst_util.m"
                {
#line 2134 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__ArgA_11, check_hlds__inst_util__ArgB_13, check_hlds__inst_util__MaybeType_15, &check_hlds__inst_util__Arg_17, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22);
                }
#line 2133 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2133 "inst_util.m"
                  {
#line 2135 "inst_util.m"
                    {
#line 2135 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_12, check_hlds__inst_util__ArgsB_14, check_hlds__inst_util__MaybeTypes_16, &check_hlds__inst_util__Args_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);
                    }
#line 2133 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2133 "inst_util.m"
                      {
#line 2133 "inst_util.m"
                        {
#line 2133 "inst_util.m"
                          MR_Word base;
#line 2133 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2133 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__4_4 = base;
#line 2133 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Arg_17));
#line 2133 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Args_18));
#line 2133 "inst_util.m"
                        }
#line 2133 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2133 "inst_util.m"
                      }
#line 2133 "inst_util.m"
                  }
#line 2132 "inst_util.m"
              }
#line 2132 "inst_util.m"
          }
#line 2133 "inst_util.m"
      }
#line 2131 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2131 "inst_util.m"
  }
#line 2127 "inst_util.m"
}

#line 2083 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2083 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2083 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2083 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26)
#line 2083 "inst_util.m"
{
#line 2089 "inst_util.m"
  {
#line 2089 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2090 "inst_util.m"
    {
#line 2090 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
    }
#line 2089 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2093 "inst_util.m"
      {
#line 2093 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_16;
#line 2093 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_51;
#line 2093 "inst_util.m"
        MR_Word check_hlds__inst_util__Expansions0_52;
#line 2017 "inst_util.m"
        MR_Word check_hlds__inst_util___Expansions_53;

#line 1974 "inst_util.m"
        {
#line 1974 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
        }
#line 1974 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1975 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqA_9;
#line 1974 "inst_util.m"
        else
#line 1977 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqB_12;
#line 2016 "inst_util.m"
        {
#line 2016 "inst_util.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_52);
        }
#line 2017 "inst_util.m"
        {
#line 2017 "inst_util.m"
          check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_51, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_52, &check_hlds__inst_util___Expansions_53, &check_hlds__inst_util__Uniq_16);
        }
#line 2094 "inst_util.m"
        {
#line 2094 "inst_util.m"
          MR_Word base;
#line 2094 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2094 "inst_util.m"
          *check_hlds__inst_util__Result_14 = base;
#line 2094 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2094 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_16));
#line 2094 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2094 "inst_util.m"
        }
#line 2093 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2093 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2093 "inst_util.m"
      }
#line 2089 "inst_util.m"
    else
#line 2097 "inst_util.m"
      {
#line 2096 "inst_util.m"
        {
#line 2096 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
        }
#line 2097 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2118 "inst_util.m"
          {
#line 2118 "inst_util.m"
            if ((check_hlds__inst_util__MaybeType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2119 "inst_util.m"
              {
#line 2119 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_39;
#line 2119 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq0_63;
#line 2119 "inst_util.m"
                MR_Word check_hlds__inst_util__Expansions0_64;
#line 2017 "inst_util.m"
                MR_Word check_hlds__inst_util___Expansions_65;

#line 1974 "inst_util.m"
                {
#line 1974 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
                }
#line 1974 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1975 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqA_9;
#line 1974 "inst_util.m"
                else
#line 1977 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqB_12;
#line 2016 "inst_util.m"
                {
#line 2016 "inst_util.m"
                  mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_64);
                }
#line 2017 "inst_util.m"
                {
#line 2017 "inst_util.m"
                  check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_64, &check_hlds__inst_util___Expansions_65, &check_hlds__inst_util__Uniq_39);
                }
#line 2121 "inst_util.m"
                {
#line 2121 "inst_util.m"
                  MR_Word base;
#line 2121 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2121 "inst_util.m"
                  *check_hlds__inst_util__Result_14 = base;
#line 2121 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_39));
#line 2121 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2121 "inst_util.m"
                }
#line 2119 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2119 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2119 "inst_util.m"
              }
#line 2118 "inst_util.m"
            else
#line 2101 "inst_util.m"
              {
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_42_42;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_43_43;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_44_44;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_45_45;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeType_13, (MR_Integer) 0)));
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__Constructors_18;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtor_19;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB0_20;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB_21;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__InstResultsB_22;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__InstA_23;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__InstB_24;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_31_31;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_34_34;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_35_35;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_36_36;
#line 2101 "inst_util.m"
                MR_Word check_hlds__inst_util__V_37_37;

#line 2102 "inst_util.m"
                {
#line 2102 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Type_17, &check_hlds__inst_util__Constructors_18);
                }
#line 2101 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2101 "inst_util.m"
                  {
#line 2103 "inst_util.m"
                    {
#line 2103 "inst_util.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_util__Type_17, &check_hlds__inst_util__TypeCtor_19);
                    }
#line 2104 "inst_util.m"
                    {
#line 2104 "inst_util.m"
                      check_hlds__mode_util__constructors_to_bound_insts_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__UniqB_12, check_hlds__inst_util__TypeCtor_19, check_hlds__inst_util__Constructors_18, &check_hlds__inst_util__BoundInstsB0_20);
                    }
#line 1973 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 2106 "inst_util.m"
                    {
#line 2106 "inst_util.m"
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__inst_util__TypeCtorInfo_42_42, check_hlds__inst_util__BoundInstsB0_20, &check_hlds__inst_util__BoundInstsB_21);
                    }
#line 2108 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = (MR_Integer) 1;
#line 2109 "inst_util.m"
                    check_hlds__inst_util__V_30_30 = (MR_Integer) 0;
#line 1984 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 2110 "inst_util.m"
                    {
#line 2110 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_43_43);
                    }
#line 1991 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_44_44 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 2110 "inst_util.m"
                    {
#line 2110 "inst_util.m"
                      check_hlds__inst_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2110 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_31_31, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 2110 "inst_util.m"
                    }
#line 2111 "inst_util.m"
                    {
#line 2111 "inst_util.m"
                      check_hlds__inst_util__V_34_34 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeInfo_44_44);
                    }
#line 2006 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 2111 "inst_util.m"
                    {
#line 2111 "inst_util.m"
                      check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2111 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_33_33, 0) = ((MR_Box) (check_hlds__inst_util__V_34_34));
#line 2111 "inst_util.m"
                    }
#line 2112 "inst_util.m"
                    {
#line 2112 "inst_util.m"
                      check_hlds__inst_util__V_36_36 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_45_45);
                    }
#line 2112 "inst_util.m"
                    {
#line 2112 "inst_util.m"
                      check_hlds__inst_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2112 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_35_35, 0) = ((MR_Box) (check_hlds__inst_util__V_36_36));
#line 2112 "inst_util.m"
                    }
#line 2113 "inst_util.m"
                    check_hlds__inst_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_util__TypeCtor_19);
#line 2107 "inst_util.m"
                    {
#line 2107 "inst_util.m"
                      check_hlds__inst_util__InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 0) = ((MR_Box) (check_hlds__inst_util__V_29_29));
#line 2107 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 1) = ((MR_Box) (check_hlds__inst_util__V_30_30));
#line 2107 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 2) = ((MR_Box) (check_hlds__inst_util__V_31_31));
#line 2107 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 3) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 2107 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 4) = ((MR_Box) (check_hlds__inst_util__V_35_35));
#line 2107 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 5) = ((MR_Box) (check_hlds__inst_util__V_37_37));
#line 2107 "inst_util.m"
                    }
#line 2115 "inst_util.m"
                    {
#line 2115 "inst_util.m"
                      check_hlds__inst_util__InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2115 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2115 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_9));
#line 2115 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_10));
#line 2115 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsA_11));
#line 2115 "inst_util.m"
                    }
#line 2116 "inst_util.m"
                    {
#line 2116 "inst_util.m"
                      check_hlds__inst_util__InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2116 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2116 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 1) = ((MR_Box) (check_hlds__inst_util__UniqB_12));
#line 2116 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_22));
#line 2116 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsB_21));
#line 2116 "inst_util.m"
                    }
#line 2117 "inst_util.m"
                    {
#line 2117 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_23, check_hlds__inst_util__InstB_24, check_hlds__inst_util__MaybeType_13, check_hlds__inst_util__Result_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);
                    }
#line 2101 "inst_util.m"
                  }
#line 2101 "inst_util.m"
              }
#line 2118 "inst_util.m"
          }
#line 2097 "inst_util.m"
      }
#line 2089 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2089 "inst_util.m"
  }
#line 2083 "inst_util.m"
}

#line 2041 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2041 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2041 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2041 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2041 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2041 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2041 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11)
#line 2041 "inst_util.m"
{
#line 2049 "inst_util.m"
  while (MR_TRUE)
#line 2049 "inst_util.m"
    {
#line 2049 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2049 "inst_util.m"
      {
#line 2049 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2049 "inst_util.m"
#line 2049 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
#line 2049 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2049 "inst_util.m"
          case (MR_Integer) 0:
#line 2049 "inst_util.m"
            {
#line 2050 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2049 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2049 "inst_util.m"
            }
#line 2049 "inst_util.m"
            break;
#line 2049 "inst_util.m"
          case (MR_Integer) 1:
#line 2049 "inst_util.m"
            {
#line 2050 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2049 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2049 "inst_util.m"
            }
#line 2049 "inst_util.m"
            break;
#line 2049 "inst_util.m"
          case (MR_Integer) 2:
#line 2054 "inst_util.m"
            {
#line 2054 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));
#line 2053 "inst_util.m"
              MR_Word check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1974 "inst_util.m"
              {
#line 1974 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_13, check_hlds__inst_util__UniqB_8);
              }
#line 1974 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1975 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1974 "inst_util.m"
              else
#line 1977 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_13;
#line 2054 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2054 "inst_util.m"
            }
#line 2049 "inst_util.m"
            break;
#line 2049 "inst_util.m"
          case (MR_Integer) 3:
#line 2049 "inst_util.m"
#line 2049 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
#line 2049 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2049 "inst_util.m"
              case (MR_Integer) 0:
#line 2060 "inst_util.m"
                {
#line 2060 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInstsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 2060 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq0_20;
#line 2060 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2060 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstResultsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1974 "inst_util.m"
                  {
#line 1974 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_36, check_hlds__inst_util__UniqB_8);
                  }
#line 1974 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1975 "inst_util.m"
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqB_8;
#line 1974 "inst_util.m"
                  else
#line 1977 "inst_util.m"
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqA_36;
#line 2062 "inst_util.m"
                  {
#line 2062 "inst_util.m"
                    check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_19, check_hlds__inst_util__Uniq0_20, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_util__STATE_VARIABLE_Expansions_27, check_hlds__inst_util__Uniq_11);
                  }
#line 2060 "inst_util.m"
                }
#line 2049 "inst_util.m"
                break;
#line 2049 "inst_util.m"
              case (MR_Integer) 1:
#line 2054 "inst_util.m"
                {
#line 2054 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2052 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1974 "inst_util.m"
                  {
#line 1974 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_39, check_hlds__inst_util__UniqB_8);
                  }
#line 1974 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1975 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1974 "inst_util.m"
                  else
#line 1977 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_39;
#line 2054 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2054 "inst_util.m"
                }
#line 2049 "inst_util.m"
                break;
#line 2049 "inst_util.m"
              case (MR_Integer) 2:
#line 2074 "inst_util.m"
                {
#line 2075 "inst_util.m"
                  {
#line 2075 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", (MR_String) "inst_var");
#line 2075 "inst_util.m"
                    return;
                  }
#line 2074 "inst_util.m"
                }
#line 2049 "inst_util.m"
                break;
#line 2049 "inst_util.m"
              case (MR_Integer) 3:
#line 2077 "inst_util.m"
                {
#line 2077 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInstA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 2077 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2078 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2078 "inst_util.m"
                  {
#line 2078 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__SubInstA_25;

#line 2078 "inst_util.m"
                    check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2078 "inst_util.m"
                  }
#line 2078 "inst_util.m"
                  continue;
#line 2077 "inst_util.m"
                }
#line 2049 "inst_util.m"
                break;
#line 2049 "inst_util.m"
              case (MR_Integer) 4:
#line 2065 "inst_util.m"
                {
#line 2065 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2066 "inst_util.m"
                  {
#line 2066 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26);
                  }
#line 2066 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2067 "inst_util.m"
                    {
#line 2067 "inst_util.m"
                      *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2067 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2067 "inst_util.m"
                    }
#line 2066 "inst_util.m"
                  else
#line 2069 "inst_util.m"
                    {
#line 2069 "inst_util.m"
                      MR_Word check_hlds__inst_util__Inst_22;
#line 2069 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2069 "inst_util.m"
                      {
#line 2069 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32);
                      }
#line 2070 "inst_util.m"
                      {
#line 2070 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__Inst_22);
                      }
#line 2071 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2071 "inst_util.m"
                      {
#line 2071 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__Inst_22;
#line 2071 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2071 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26;
#line 2071 "inst_util.m"
                        check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2071 "inst_util.m"
                      }
#line 2071 "inst_util.m"
                      continue;
#line 2069 "inst_util.m"
                    }
#line 2065 "inst_util.m"
                }
#line 2049 "inst_util.m"
                break;
#line 2049 "inst_util.m"
              case (MR_Integer) 5:
#line 2057 "inst_util.m"
                {
#line 1974 "inst_util.m"
                  {
#line 1974 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_8);
                  }
#line 1974 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1975 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1974 "inst_util.m"
                  else
#line 1977 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 2057 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2057 "inst_util.m"
                }
#line 2049 "inst_util.m"
                break;
#line 2049 "inst_util.m"
            }
#line 2049 "inst_util.m"
            break;
#line 2049 "inst_util.m"
        }
#line 2049 "inst_util.m"
      }
#line 2049 "inst_util.m"
      break;
#line 2049 "inst_util.m"
    }
#line 2041 "inst_util.m"
}

#line 2032 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2032 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2032 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2032 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2032 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2032 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2032 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 2032 "inst_util.m"
{
#line 2036 "inst_util.m"
  while (MR_TRUE)
#line 2036 "inst_util.m"
    {
#line 2036 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2036 "inst_util.m"
      {
#line 2036 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2036 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2036 "inst_util.m"
          {
#line 2036 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 2036 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 2036 "inst_util.m"
          }
#line 2036 "inst_util.m"
        else
#line 2037 "inst_util.m"
          {
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_18;
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2038 "inst_util.m"
            {
#line 2038 "inst_util.m"
              check_hlds__inst_util__merge_inst_uniq_6_p_0(check_hlds__inst_util__Inst_12, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21, &check_hlds__inst_util__Uniq1_18);
            }
#line 2039 "inst_util.m"
            /* direct tailcall eliminated */
#line 2039 "inst_util.m"
            {
#line 2039 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__Insts_13;
#line 2039 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_18;
#line 2039 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2039 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2039 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2039 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2039 "inst_util.m"
            }
#line 2039 "inst_util.m"
            continue;
#line 2037 "inst_util.m"
          }
#line 2036 "inst_util.m"
      }
#line 2036 "inst_util.m"
      break;
#line 2036 "inst_util.m"
    }
#line 2032 "inst_util.m"
}

#line 2020 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 2020 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2020 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2020 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2020 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2020 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2020 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 2020 "inst_util.m"
{
#line 2024 "inst_util.m"
  while (MR_TRUE)
#line 2024 "inst_util.m"
    {
#line 2024 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2024 "inst_util.m"
      {
#line 2024 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2024 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2024 "inst_util.m"
          {
#line 2024 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 2024 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 2024 "inst_util.m"
          }
#line 2024 "inst_util.m"
        else
#line 2026 "inst_util.m"
          {
#line 2026 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2026 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2026 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 1)));
#line 2026 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_20;
#line 2026 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;
#line 2027 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 0)));

#line 2028 "inst_util.m"
            {
#line 2028 "inst_util.m"
              check_hlds__inst_util__merge_inst_list_uniq_6_p_0(check_hlds__inst_util__ArgInsts_19, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23, &check_hlds__inst_util__Uniq1_20);
            }
#line 2029 "inst_util.m"
            /* direct tailcall eliminated */
#line 2029 "inst_util.m"
            {
#line 2029 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInsts_13;
#line 2029 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_20;
#line 2029 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;

#line 2029 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2029 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2029 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2029 "inst_util.m"
            }
#line 2029 "inst_util.m"
            continue;
#line 2026 "inst_util.m"
          }
#line 2024 "inst_util.m"
      }
#line 2024 "inst_util.m"
      break;
#line 2024 "inst_util.m"
    }
#line 2020 "inst_util.m"
}

#line 2011 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 2011 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 2011 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 2011 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2011 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2011 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10)
#line 2011 "inst_util.m"
{
#line 2014 "inst_util.m"
  {
#line 2014 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2014 "inst_util.m"
    MR_Word check_hlds__inst_util__Uniq0_11;
#line 2014 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_12;
#line 2017 "inst_util.m"
    MR_Word check_hlds__inst_util___Expansions_13;

#line 1974 "inst_util.m"
    {
#line 1974 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_6, check_hlds__inst_util__UniqB_7);
    }
#line 1974 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1975 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqB_7;
#line 1974 "inst_util.m"
    else
#line 1977 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqA_6;
#line 2016 "inst_util.m"
    {
#line 2016 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_12);
    }
#line 2017 "inst_util.m"
    {
#line 2017 "inst_util.m"
      check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__Uniq0_11, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__Expansions0_12, &check_hlds__inst_util___Expansions_13, check_hlds__inst_util__Uniq_10);
    }
#line 2014 "inst_util.m"
  }
#line 2011 "inst_util.m"
}

#line 1980 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1980 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1980 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1980 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1980 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1980 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13)
#line 1980 "inst_util.m"
{
#line 1983 "inst_util.m"
  {
#line 1983 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1984 "inst_util.m"
    MR_Word check_hlds__inst_util__PredA_10;
#line 1984 "inst_util.m"
    MR_Word check_hlds__inst_util__PredB_11;

#line 1985 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1985 "inst_util.m"
      {
#line 1985 "inst_util.m"
        check_hlds__inst_util__PredA_10 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoA_6), (MR_Integer) 1);
#line 1986 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoB_7)) == (MR_mktag((MR_Integer) 1)));
#line 1986 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
          check_hlds__inst_util__PredB_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoB_7), (MR_Integer) 1);
#line 1985 "inst_util.m"
      }
#line 1984 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1991 "inst_util.m"
      {
#line 1991 "inst_util.m"
        {
#line 1991 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__PredB_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
        }
#line 1991 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1992 "inst_util.m"
          {
#line 1992 "inst_util.m"
            *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoB_7;
#line 1992 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1992 "inst_util.m"
          }
#line 1991 "inst_util.m"
        else
#line 1993 "inst_util.m"
          {
#line 1993 "inst_util.m"
            {
#line 1993 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__PredA_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
            }
#line 1993 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1994 "inst_util.m"
              {
#line 1994 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoA_6;
#line 1994 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1994 "inst_util.m"
              }
#line 1993 "inst_util.m"
            else
#line 1998 "inst_util.m"
              {
#line 1998 "inst_util.m"
                {
#line 1998 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__PredA_10);
                }
#line 1998 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1998 "inst_util.m"
                  {
#line 1999 "inst_util.m"
                    {
#line 1999 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__PredB_11);
                    }
#line 1998 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1998 "inst_util.m"
                      {
#line 2000 "inst_util.m"
                        *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2000 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1998 "inst_util.m"
                      }
#line 1998 "inst_util.m"
                  }
#line 1998 "inst_util.m"
              }
#line 1993 "inst_util.m"
          }
#line 1991 "inst_util.m"
      }
#line 1984 "inst_util.m"
    else
#line 2003 "inst_util.m"
      {
#line 2003 "inst_util.m"
        {
#line 2003 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoA_6);
        }
#line 2003 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2003 "inst_util.m"
          {
#line 2004 "inst_util.m"
            {
#line 2004 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoB_7);
            }
#line 2003 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2003 "inst_util.m"
              {
#line 2005 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2005 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2003 "inst_util.m"
              }
#line 2003 "inst_util.m"
          }
#line 2003 "inst_util.m"
      }
#line 1983 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1983 "inst_util.m"
      {
#line 1983 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12;
#line 1983 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1983 "inst_util.m"
      }
#line 1983 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1983 "inst_util.m"
  }
#line 1980 "inst_util.m"
}

#line 1971 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1971 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1971 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1971 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6)
#line 1971 "inst_util.m"
{
#line 1974 "inst_util.m"
  {
#line 1974 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1974 "inst_util.m"
    {
#line 1974 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_4, check_hlds__inst_util__UniqB_5);
    }
#line 1974 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1975 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqB_5;
#line 1974 "inst_util.m"
    else
#line 1977 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqA_4;
#line 1974 "inst_util.m"
  }
#line 1971 "inst_util.m"
}

#line 1835 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1835 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1835 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1835 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1835 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1835 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1835 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41)
#line 1835 "inst_util.m"
{
#line 1850 "inst_util.m"
  {
#line 1850 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
#line 1850 "inst_util.m"
      default:
#line 1850 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
        break;
#line 1850 "inst_util.m"
      case (MR_Integer) 0:
#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_7)) {
#line 1850 "inst_util.m"
          default:
#line 1850 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
            break;
#line 1850 "inst_util.m"
          case (MR_Integer) 0:
#line 1850 "inst_util.m"
            if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1930 "inst_util.m"
              {
#line 1932 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1930 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1930 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1930 "inst_util.m"
              }
#line 1850 "inst_util.m"
            else
#line 1850 "inst_util.m"
            if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1893 "inst_util.m"
              {
#line 1893 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1894 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1897 "inst_util.m"
#line 1897 "inst_util.m"
                switch (check_hlds__inst_util__Uniq_73) {
#line 1897 "inst_util.m"
                  default:
#line 1897 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 1897 "inst_util.m"
                    break;
#line 1897 "inst_util.m"
                  case (MR_Integer) 3:
#line 1897 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1897 "inst_util.m"
                    break;
#line 1897 "inst_util.m"
                  case (MR_Integer) 4:
#line 1897 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1897 "inst_util.m"
                    break;
#line 1897 "inst_util.m"
                }
#line 1893 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1893 "inst_util.m"
                  {
#line 1898 "inst_util.m"
                    *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstB_8;
#line 1893 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1893 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1893 "inst_util.m"
                  }
#line 1893 "inst_util.m"
              }
#line 1850 "inst_util.m"
            else
#line 1850 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
            break;
#line 1850 "inst_util.m"
        }
#line 1850 "inst_util.m"
        break;
#line 1850 "inst_util.m"
      case (MR_Integer) 2:
#line 1850 "inst_util.m"
        {
#line 1850 "inst_util.m"
          MR_Word check_hlds__inst_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1850 "inst_util.m"
          MR_Word check_hlds__inst_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));

#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
          switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1850 "inst_util.m"
            default:
#line 1850 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
              break;
#line 1850 "inst_util.m"
            case (MR_Integer) 0:
#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
              switch (MR_unmkbody(check_hlds__inst_util__InstB_8)) {
#line 1850 "inst_util.m"
                default:
#line 1850 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
                case (MR_Integer) 0:
#line 1856 "inst_util.m"
                  {
#line 1860 "inst_util.m"
#line 1860 "inst_util.m"
                    switch (check_hlds__inst_util__V_110_110) {
#line 1860 "inst_util.m"
                      default:
#line 1860 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1860 "inst_util.m"
                        break;
#line 1860 "inst_util.m"
                      case (MR_Integer) 3:
#line 1860 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1860 "inst_util.m"
                        break;
#line 1860 "inst_util.m"
                      case (MR_Integer) 4:
#line 1860 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1860 "inst_util.m"
                        break;
#line 1860 "inst_util.m"
                    }
#line 1856 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1856 "inst_util.m"
                      {
#line 1861 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstA_7;
#line 1856 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1856 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1856 "inst_util.m"
                      }
#line 1856 "inst_util.m"
                  }
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
              }
#line 1850 "inst_util.m"
              break;
#line 1850 "inst_util.m"
            case (MR_Integer) 2:
#line 1850 "inst_util.m"
              {
#line 1850 "inst_util.m"
                MR_Word check_hlds__inst_util__UniqB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1850 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfoB_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1850 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_16;
#line 1850 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_17;

#line 1852 "inst_util.m"
                {
#line 1852 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_15, &check_hlds__inst_util__HOInstInfo_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1850 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1850 "inst_util.m"
                  {
#line 1853 "inst_util.m"
                    {
#line 1853 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_14, &check_hlds__inst_util__Uniq_17);
                    }
#line 1854 "inst_util.m"
                    {
#line 1854 "inst_util.m"
                      MR_Word base;
#line 1854 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = base;
#line 1854 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_17));
#line 1854 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_16));
#line 1854 "inst_util.m"
                    }
#line 1854 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1850 "inst_util.m"
                  }
#line 1850 "inst_util.m"
              }
#line 1850 "inst_util.m"
              break;
#line 1850 "inst_util.m"
            case (MR_Integer) 3:
#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1850 "inst_util.m"
                default:
#line 1850 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
                case (MR_Integer) 0:
#line 1863 "inst_util.m"
                  {
#line 1863 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstResultsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1863 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1863 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_57_57;
#line 1863 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1863 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_63;

#line 1865 "inst_util.m"
                    {
#line 1865 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_62, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_63);
                    }
#line 1868 "inst_util.m"
#line 1868 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_63) {
#line 1868 "inst_util.m"
                      default:
#line 1868 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1868 "inst_util.m"
                        break;
#line 1868 "inst_util.m"
                      case (MR_Integer) 3:
#line 1868 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1868 "inst_util.m"
                        break;
#line 1868 "inst_util.m"
                      case (MR_Integer) 4:
#line 1868 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1868 "inst_util.m"
                        break;
#line 1868 "inst_util.m"
                    }
#line 1868 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1869 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1868 "inst_util.m"
                    else
#line 1874 "inst_util.m"
                      {
#line 1874 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_19, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1863 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1863 "inst_util.m"
                      {
#line 1877 "inst_util.m"
                        check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1863 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1877 "inst_util.m"
                        {
#line 1877 "inst_util.m"
                          MR_Word base;
#line 1877 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1877 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1877 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_63));
#line 1877 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 1877 "inst_util.m"
                        }
#line 1877 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1863 "inst_util.m"
                      }
#line 1863 "inst_util.m"
                  }
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
                case (MR_Integer) 1:
#line 1879 "inst_util.m"
                  {
#line 1879 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1879 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1879 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_68;
#line 1879 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_69;

#line 1881 "inst_util.m"
                    {
#line 1881 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_67, &check_hlds__inst_util__HOInstInfo_68, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1879 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1879 "inst_util.m"
                      {
#line 1882 "inst_util.m"
                        {
#line 1882 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_66, &check_hlds__inst_util__Uniq_69);
                        }
#line 1883 "inst_util.m"
                        {
#line 1883 "inst_util.m"
                          MR_Word base;
#line 1883 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1883 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1883 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1883 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_68));
#line 1883 "inst_util.m"
                        }
#line 1883 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1879 "inst_util.m"
                      }
#line 1879 "inst_util.m"
                  }
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
                case (MR_Integer) 5:
#line 1885 "inst_util.m"
                  {
#line 1885 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_55_55;
#line 1885 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_71;

#line 1887 "inst_util.m"
                    {
#line 1887 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, (MR_Integer) 0, &check_hlds__inst_util__Uniq_71);
                    }
#line 1890 "inst_util.m"
#line 1890 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_71) {
#line 1890 "inst_util.m"
                      default:
#line 1890 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1890 "inst_util.m"
                        break;
#line 1890 "inst_util.m"
                      case (MR_Integer) 3:
#line 1890 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1890 "inst_util.m"
                        break;
#line 1890 "inst_util.m"
                      case (MR_Integer) 4:
#line 1890 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1890 "inst_util.m"
                        break;
#line 1890 "inst_util.m"
                    }
#line 1885 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1885 "inst_util.m"
                      {
#line 1891 "inst_util.m"
                        check_hlds__inst_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1885 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1891 "inst_util.m"
                        {
#line 1891 "inst_util.m"
                          MR_Word base;
#line 1891 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1891 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_71));
#line 1891 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_55_55));
#line 1891 "inst_util.m"
                        }
#line 1891 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1885 "inst_util.m"
                      }
#line 1885 "inst_util.m"
                  }
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
              }
#line 1850 "inst_util.m"
              break;
#line 1850 "inst_util.m"
          }
#line 1850 "inst_util.m"
        }
#line 1850 "inst_util.m"
        break;
#line 1850 "inst_util.m"
      case (MR_Integer) 3:
#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
#line 1850 "inst_util.m"
          default:
#line 1850 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
            break;
#line 1850 "inst_util.m"
          case (MR_Integer) 0:
#line 1850 "inst_util.m"
            {
#line 1850 "inst_util.m"
              MR_Word check_hlds__inst_util__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1850 "inst_util.m"
              MR_Word check_hlds__inst_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1850 "inst_util.m"
              MR_Word check_hlds__inst_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1850 "inst_util.m"
                default:
#line 1850 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
                case (MR_Integer) 2:
#line 1900 "inst_util.m"
                  {
#line 1900 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_53_53;
#line 1900 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1900 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_76;
#line 1901 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1902 "inst_util.m"
                    {
#line 1902 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__UniqB_75, check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_76);
                    }
#line 1905 "inst_util.m"
#line 1905 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_76) {
#line 1905 "inst_util.m"
                      default:
#line 1905 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1905 "inst_util.m"
                        break;
#line 1905 "inst_util.m"
                      case (MR_Integer) 3:
#line 1905 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1905 "inst_util.m"
                        break;
#line 1905 "inst_util.m"
                      case (MR_Integer) 4:
#line 1905 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1905 "inst_util.m"
                        break;
#line 1905 "inst_util.m"
                    }
#line 1905 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1906 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1905 "inst_util.m"
                    else
#line 1911 "inst_util.m"
                      {
#line 1911 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1900 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1900 "inst_util.m"
                      {
#line 1914 "inst_util.m"
                        check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1900 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1914 "inst_util.m"
                        {
#line 1914 "inst_util.m"
                          MR_Word base;
#line 1914 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1914 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
#line 1914 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 1914 "inst_util.m"
                        }
#line 1914 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1900 "inst_util.m"
                      }
#line 1900 "inst_util.m"
                  }
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
                case (MR_Integer) 3:
#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1850 "inst_util.m"
                    default:
#line 1850 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
                      break;
#line 1850 "inst_util.m"
                    case (MR_Integer) 0:
#line 1934 "inst_util.m"
                      {
#line 1934 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_32;
#line 1934 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_49_49;
#line 1934 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1934 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_87;
#line 1934 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1935 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1936 "inst_util.m"
                        {
#line 1936 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__UniqB_86, &check_hlds__inst_util__Uniq_87);
                        }
#line 1937 "inst_util.m"
                        {
#line 1937 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_111_111, check_hlds__inst_util__BoundInstsB_88, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInsts_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1934 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1934 "inst_util.m"
                          {
#line 1940 "inst_util.m"
                            check_hlds__inst_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1940 "inst_util.m"
                            {
#line 1940 "inst_util.m"
                              MR_Word base;
#line 1940 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1940 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1940 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1940 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_87));
#line 1940 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_49_49));
#line 1940 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_32));
#line 1940 "inst_util.m"
                            }
#line 1940 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1934 "inst_util.m"
                          }
#line 1934 "inst_util.m"
                      }
#line 1850 "inst_util.m"
                      break;
#line 1850 "inst_util.m"
                    case (MR_Integer) 1:
#line 1942 "inst_util.m"
                      {
#line 1942 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1943 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1944 "inst_util.m"
                        {
#line 1944 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__UniqB_91, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1942 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1942 "inst_util.m"
                          {
#line 1946 "inst_util.m"
                            {
#line 1946 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41, check_hlds__inst_util__InstA_7);
                            }
#line 1946 "inst_util.m"
                            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1942 "inst_util.m"
                          }
#line 1942 "inst_util.m"
                      }
#line 1850 "inst_util.m"
                      break;
#line 1850 "inst_util.m"
                  }
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
              }
#line 1850 "inst_util.m"
            }
#line 1850 "inst_util.m"
            break;
#line 1850 "inst_util.m"
          case (MR_Integer) 1:
#line 1850 "inst_util.m"
            {
#line 1850 "inst_util.m"
              MR_Word check_hlds__inst_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1850 "inst_util.m"
              MR_Word check_hlds__inst_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1850 "inst_util.m"
                default:
#line 1850 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
                case (MR_Integer) 2:
#line 1916 "inst_util.m"
                  {
#line 1916 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1916 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1916 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_81;
#line 1916 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_82;

#line 1918 "inst_util.m"
                    {
#line 1918 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_80, &check_hlds__inst_util__HOInstInfo_81, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1916 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1916 "inst_util.m"
                      {
#line 1919 "inst_util.m"
                        {
#line 1919 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_79, &check_hlds__inst_util__Uniq_82);
                        }
#line 1920 "inst_util.m"
                        {
#line 1920 "inst_util.m"
                          MR_Word base;
#line 1920 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1920 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_82));
#line 1920 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_81));
#line 1920 "inst_util.m"
                        }
#line 1920 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1916 "inst_util.m"
                      }
#line 1916 "inst_util.m"
                  }
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
                case (MR_Integer) 3:
#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1850 "inst_util.m"
                    default:
#line 1850 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
                      break;
#line 1850 "inst_util.m"
                    case (MR_Integer) 0:
#line 1948 "inst_util.m"
                      {
#line 1948 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1948 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstResultsB_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1948 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));

#line 1950 "inst_util.m"
                        {
#line 1950 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__UniqB_95, check_hlds__inst_util__InstResultsB_96, check_hlds__inst_util__BoundInstsB_97, check_hlds__inst_util__V_115_115, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1948 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
                          {
#line 1952 "inst_util.m"
                            {
#line 1952 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41, check_hlds__inst_util__InstB_8);
                            }
#line 1952 "inst_util.m"
                            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1948 "inst_util.m"
                          }
#line 1948 "inst_util.m"
                      }
#line 1850 "inst_util.m"
                      break;
#line 1850 "inst_util.m"
                    case (MR_Integer) 1:
#line 1954 "inst_util.m"
                      {
#line 1954 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1954 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfoB_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1954 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfo_102;
#line 1954 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_103;

#line 1956 "inst_util.m"
                        {
#line 1956 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_101, &check_hlds__inst_util__HOInstInfo_102, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1954 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1954 "inst_util.m"
                          {
#line 1957 "inst_util.m"
                            {
#line 1957 "inst_util.m"
                              check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_100, &check_hlds__inst_util__Uniq_103);
                            }
#line 1958 "inst_util.m"
                            {
#line 1958 "inst_util.m"
                              MR_Word base;
#line 1958 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1958 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1958 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_103));
#line 1958 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_102));
#line 1958 "inst_util.m"
                            }
#line 1958 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1954 "inst_util.m"
                          }
#line 1954 "inst_util.m"
                      }
#line 1850 "inst_util.m"
                      break;
#line 1850 "inst_util.m"
                  }
#line 1850 "inst_util.m"
                  break;
#line 1850 "inst_util.m"
              }
#line 1850 "inst_util.m"
            }
#line 1850 "inst_util.m"
            break;
#line 1850 "inst_util.m"
          case (MR_Integer) 5:
#line 1850 "inst_util.m"
            {
#line 1850 "inst_util.m"
              MR_Word check_hlds__inst_util__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1850 "inst_util.m"
              MR_Word check_hlds__inst_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1850 "inst_util.m"
              if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1922 "inst_util.m"
                {
#line 1922 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_51_51;
#line 1922 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1922 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_84;
#line 1923 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1924 "inst_util.m"
                  {
#line 1924 "inst_util.m"
                    check_hlds__inst_util__merge_uniq_3_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_83, &check_hlds__inst_util__Uniq_84);
                  }
#line 1927 "inst_util.m"
#line 1927 "inst_util.m"
                  switch (check_hlds__inst_util__Uniq_84) {
#line 1927 "inst_util.m"
                    default:
#line 1927 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1927 "inst_util.m"
                      break;
#line 1927 "inst_util.m"
                    case (MR_Integer) 3:
#line 1927 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1927 "inst_util.m"
                      break;
#line 1927 "inst_util.m"
                    case (MR_Integer) 4:
#line 1927 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1927 "inst_util.m"
                      break;
#line 1927 "inst_util.m"
                  }
#line 1922 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1922 "inst_util.m"
                    {
#line 1928 "inst_util.m"
                      check_hlds__inst_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1922 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1928 "inst_util.m"
                      {
#line 1928 "inst_util.m"
                        MR_Word base;
#line 1928 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1928 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1928 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_84));
#line 1928 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 1928 "inst_util.m"
                      }
#line 1928 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1922 "inst_util.m"
                    }
#line 1922 "inst_util.m"
                }
#line 1850 "inst_util.m"
              else
#line 1850 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1960 "inst_util.m"
                {
#line 1960 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeInfo_104_104;
#line 1960 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeCtorInfo_105_105;
#line 1960 "inst_util.m"
                  MR_Word check_hlds__inst_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1960 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeTypes_38;
#line 1960 "inst_util.m"
                  MR_Word check_hlds__inst_util__Args_39;
#line 1960 "inst_util.m"
                  MR_Integer check_hlds__inst_util__V_42_42;
#line 1960 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_43_43;
#line 1960 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1961 "inst_util.m"
                  {
#line 1961 "inst_util.m"
                    check_hlds__inst_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_util__V_108_108, check_hlds__inst_util__V_106_106);
                  }
#line 1960 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1960 "inst_util.m"
                    {
#line 3790 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeInfo_104_104 = (MR_Word) &check_hlds__inst_util_scalar_common_1[1];
#line 3792 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1963 "inst_util.m"
                      {
#line 1963 "inst_util.m"
                        check_hlds__inst_util__V_42_42 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_105_105, check_hlds__inst_util__V_107_107);
                      }
#line 1963 "inst_util.m"
                      check_hlds__inst_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1963 "inst_util.m"
                      {
#line 1963 "inst_util.m"
                        check_hlds__inst_util__MaybeTypes_38 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeInfo_104_104, check_hlds__inst_util__V_42_42, ((MR_Box) (check_hlds__inst_util__V_43_43)));
                      }
#line 1964 "inst_util.m"
                      {
#line 1964 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__V_107_107, check_hlds__inst_util__ArgsB_37, check_hlds__inst_util__MaybeTypes_38, &check_hlds__inst_util__Args_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
#line 1960 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1960 "inst_util.m"
                        {
#line 1965 "inst_util.m"
                          {
#line 1965 "inst_util.m"
                            MR_Word base;
#line 1965 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "inst_util.m"
                            *check_hlds__inst_util__Inst_10 = base;
#line 1965 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1965 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_108_108));
#line 1965 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Args_39));
#line 1965 "inst_util.m"
                          }
#line 1965 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1960 "inst_util.m"
                        }
#line 1960 "inst_util.m"
                    }
#line 1960 "inst_util.m"
                }
#line 1850 "inst_util.m"
              else
#line 1850 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
            }
#line 1850 "inst_util.m"
            break;
#line 1850 "inst_util.m"
        }
#line 1850 "inst_util.m"
        break;
#line 1850 "inst_util.m"
    }
#line 1850 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1850 "inst_util.m"
  }
#line 1835 "inst_util.m"
}

#line 1807 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1807 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1807 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1807 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1807 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1807 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1807 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20)
#line 1807 "inst_util.m"
{
#line 1811 "inst_util.m"
  {
#line 1811 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1811 "inst_util.m"
    MR_Word check_hlds__inst_util__InstVarsA_12;
#line 1811 "inst_util.m"
    MR_Word check_hlds__inst_util__SubInstA_13;

#line 1811 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1811 "inst_util.m"
      {
#line 1811 "inst_util.m"
        check_hlds__inst_util__InstVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1811 "inst_util.m"
        check_hlds__inst_util__SubInstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1812 "inst_util.m"
        {
#line 1812 "inst_util.m"
          MR_Word check_hlds__inst_util__InstVarsB_14;
#line 1812 "inst_util.m"
          MR_Word check_hlds__inst_util__SubInstB_15;

#line 1812 "inst_util.m"
          check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1812 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1812 "inst_util.m"
            {
#line 1812 "inst_util.m"
              check_hlds__inst_util__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1812 "inst_util.m"
              check_hlds__inst_util__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1813 "inst_util.m"
              {
#line 1813 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_26_26;
#line 1813 "inst_util.m"
                MR_Word check_hlds__inst_util__Inst0_16;
#line 1813 "inst_util.m"
                MR_Word check_hlds__inst_util__InstVars_17;

#line 1813 "inst_util.m"
                {
#line 1813 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__SubInstB_15, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
                }
#line 1813 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1813 "inst_util.m"
                  {
#line 3929 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_26_26 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 1814 "inst_util.m"
                    {
#line 1814 "inst_util.m"
                      mercury__set__intersect_3_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVarsA_12, check_hlds__inst_util__InstVarsB_14, &check_hlds__inst_util__InstVars_17);
                    }
#line 1815 "inst_util.m"
                    {
#line 1815 "inst_util.m"
                      check_hlds__inst_util__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVars_17);
                    }
#line 1815 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1816 "inst_util.m"
                      {
#line 1816 "inst_util.m"
                        MR_Word base;
#line 1816 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1816 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1816 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1816 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_16));
#line 1816 "inst_util.m"
                      }
#line 1815 "inst_util.m"
                    else
#line 1822 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_16;
#line 1815 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1813 "inst_util.m"
                  }
#line 1813 "inst_util.m"
              }
#line 1812 "inst_util.m"
            }
#line 1812 "inst_util.m"
          else
#line 1825 "inst_util.m"
            {
#line 1825 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1812 "inst_util.m"
        }
#line 1811 "inst_util.m"
      }
#line 1811 "inst_util.m"
    else
#line 1827 "inst_util.m"
      {
#line 1827 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInstB_25;
#line 1827 "inst_util.m"
        MR_Word check_hlds__inst_util___InstVarsB_18;

#line 1827 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1827 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1827 "inst_util.m"
          {
#line 1827 "inst_util.m"
            check_hlds__inst_util___InstVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1827 "inst_util.m"
            check_hlds__inst_util__SubInstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1830 "inst_util.m"
            {
#line 1830 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__SubInstB_25, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1827 "inst_util.m"
          }
#line 1827 "inst_util.m"
        else
#line 1832 "inst_util.m"
          {
#line 1832 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
          }
#line 1827 "inst_util.m"
      }
#line 1811 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1811 "inst_util.m"
  }
#line 1807 "inst_util.m"
}

#line 1787 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1787 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1787 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1787 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1787 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1787 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1787 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15)
#line 1787 "inst_util.m"
{
#line 1790 "inst_util.m"
  {
#line 1790 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1790 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_12;
#line 1790 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_13;

#line 1796 "inst_util.m"
    {
#line 1796 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstA_7, &check_hlds__inst_util__ExpandedInstA_12);
    }
#line 1797 "inst_util.m"
    {
#line 1797 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstB_8, &check_hlds__inst_util__ExpandedInstB_13);
    }
#line 1798 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1798 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1799 "inst_util.m"
      {
#line 1799 "inst_util.m"
        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstA_12;
#line 1799 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1799 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1799 "inst_util.m"
      }
#line 1798 "inst_util.m"
    else
#line 1800 "inst_util.m"
      {
#line 1800 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstA_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1800 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1801 "inst_util.m"
          {
#line 1801 "inst_util.m"
            *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstB_13;
#line 1801 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1801 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1801 "inst_util.m"
          }
#line 1800 "inst_util.m"
        else
#line 1803 "inst_util.m"
          {
#line 1803 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(check_hlds__inst_util__ExpandedInstA_12, check_hlds__inst_util__ExpandedInstB_13, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);
          }
#line 1800 "inst_util.m"
      }
#line 1790 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1790 "inst_util.m"
  }
#line 1787 "inst_util.m"
}

#line 1703 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1703 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1703 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1703 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1703 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1703 "inst_util.m"
{
#line 1706 "inst_util.m"
  {
#line 1706 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1706 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1706 "inst_util.m"
      {
#line 1706 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1706 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1706 "inst_util.m"
      }
#line 1706 "inst_util.m"
    else
#line 1707 "inst_util.m"
      {
#line 1707 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1707 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1707 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1707 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1707 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1708 "inst_util.m"
        {
#line 1708 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1709 "inst_util.m"
        {
#line 1709 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1707 "inst_util.m"
        {
#line 1707 "inst_util.m"
          MR_Word base;
#line 1707 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1707 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1707 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1707 "inst_util.m"
        }
#line 1707 "inst_util.m"
      }
#line 1706 "inst_util.m"
  }
#line 1703 "inst_util.m"
}

#line 1692 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1692 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1692 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1692 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1692 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1692 "inst_util.m"
{
#line 1695 "inst_util.m"
  {
#line 1695 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1695 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1695 "inst_util.m"
      {
#line 1695 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1695 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1695 "inst_util.m"
      }
#line 1695 "inst_util.m"
    else
#line 1697 "inst_util.m"
      {
#line 1697 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1697 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1697 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1697 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1697 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1697 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1697 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1697 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1699 "inst_util.m"
        {
#line 1699 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1700 "inst_util.m"
        {
#line 1700 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1700 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1700 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1700 "inst_util.m"
        }
#line 1701 "inst_util.m"
        {
#line 1701 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1696 "inst_util.m"
        {
#line 1696 "inst_util.m"
          MR_Word base;
#line 1696 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1696 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1696 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1696 "inst_util.m"
        }
#line 1697 "inst_util.m"
      }
#line 1695 "inst_util.m"
  }
#line 1692 "inst_util.m"
}

#line 1585 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1585 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1585 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1585 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1585 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1585 "inst_util.m"
{
#line 1588 "inst_util.m"
  {
#line 1588 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1588 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1588 "inst_util.m"
      {
#line 1588 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1588 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1588 "inst_util.m"
      }
#line 1588 "inst_util.m"
    else
#line 1590 "inst_util.m"
      {
#line 1590 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1590 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1590 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1590 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1590 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1590 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1590 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1590 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1592 "inst_util.m"
        {
#line 1592 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1593 "inst_util.m"
        {
#line 1593 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1593 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1593 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1593 "inst_util.m"
        }
#line 1594 "inst_util.m"
        {
#line 1594 "inst_util.m"
          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1589 "inst_util.m"
        {
#line 1589 "inst_util.m"
          MR_Word base;
#line 1589 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1589 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1589 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1589 "inst_util.m"
        }
#line 1590 "inst_util.m"
      }
#line 1588 "inst_util.m"
  }
#line 1585 "inst_util.m"
}

#line 1464 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1464 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1464 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1464 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1464 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35)
#line 1464 "inst_util.m"
{
#line 1469 "inst_util.m"
  {
#line 1469 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1469 "inst_util.m"
#line 1469 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
#line 1469 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1469 "inst_util.m"
      case (MR_Integer) 0:
#line 1469 "inst_util.m"
#line 1469 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_5)) {
#line 1469 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1469 "inst_util.m"
          case (MR_Integer) 0:
#line 1472 "inst_util.m"
            {
#line 1474 "inst_util.m"
              {
#line 1474 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
#line 1474 "inst_util.m"
                return;
              }
#line 1472 "inst_util.m"
            }
#line 1469 "inst_util.m"
            break;
#line 1469 "inst_util.m"
          case (MR_Integer) 1:
#line 1469 "inst_util.m"
            {
#line 1470 "inst_util.m"
              *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1469 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1469 "inst_util.m"
            }
#line 1469 "inst_util.m"
            break;
#line 1469 "inst_util.m"
        }
#line 1469 "inst_util.m"
        break;
#line 1469 "inst_util.m"
      case (MR_Integer) 1:
#line 1476 "inst_util.m"
        {
#line 1478 "inst_util.m"
          {
#line 1478 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
#line 1478 "inst_util.m"
            return;
          }
#line 1476 "inst_util.m"
        }
#line 1469 "inst_util.m"
        break;
#line 1469 "inst_util.m"
      case (MR_Integer) 2:
#line 1480 "inst_util.m"
        {
#line 1480 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1480 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1480 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[15 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1482 "inst_util.m"
          {
#line 1482 "inst_util.m"
            MR_Word base;
#line 1482 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1482 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1482 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1482 "inst_util.m"
          }
#line 1480 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1480 "inst_util.m"
        }
#line 1469 "inst_util.m"
        break;
#line 1469 "inst_util.m"
      case (MR_Integer) 3:
#line 1469 "inst_util.m"
#line 1469 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
#line 1469 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1469 "inst_util.m"
          case (MR_Integer) 0:
#line 1484 "inst_util.m"
            {
#line 1484 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1484 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1484 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1484 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1484 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_55 = ((&check_hlds__inst_util_vector_common_2[20 + check_hlds__inst_util__Uniq0_54]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1510 "inst_util.m"
              {
#line 1510 "inst_util.m"
                check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1511 "inst_util.m"
              {
#line 1511 "inst_util.m"
                MR_Word base;
#line 1511 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1511 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1511 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_55));
#line 1511 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_12));
#line 1511 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1511 "inst_util.m"
              }
#line 1484 "inst_util.m"
            }
#line 1469 "inst_util.m"
            break;
#line 1469 "inst_util.m"
          case (MR_Integer) 1:
#line 1513 "inst_util.m"
            {
#line 1513 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1513 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1513 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_57 = ((&check_hlds__inst_util_vector_common_2[25 + check_hlds__inst_util__Uniq0_56]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1515 "inst_util.m"
              {
#line 1515 "inst_util.m"
                MR_Word base;
#line 1515 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1515 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1515 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_57));
#line 1515 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1515 "inst_util.m"
              }
#line 1513 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1513 "inst_util.m"
            }
#line 1469 "inst_util.m"
            break;
#line 1469 "inst_util.m"
          case (MR_Integer) 2:
#line 1517 "inst_util.m"
            {
#line 1518 "inst_util.m"
              {
#line 1518 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
#line 1518 "inst_util.m"
                return;
              }
#line 1517 "inst_util.m"
            }
#line 1469 "inst_util.m"
            break;
#line 1469 "inst_util.m"
          case (MR_Integer) 3:
#line 1520 "inst_util.m"
            {
#line 1520 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1520 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1520 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst1_19;

#line 1521 "inst_util.m"
              {
#line 1521 "inst_util.m"
                check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1522 "inst_util.m"
              {
#line 1522 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1522 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1523 "inst_util.m"
                {
#line 1523 "inst_util.m"
                  MR_Word base;
#line 1523 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1523 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1523 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1523 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1523 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst1_19));
#line 1523 "inst_util.m"
                }
#line 1522 "inst_util.m"
              else
#line 1525 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst1_19;
#line 1520 "inst_util.m"
            }
#line 1469 "inst_util.m"
            break;
#line 1469 "inst_util.m"
          case (MR_Integer) 4:
#line 1531 "inst_util.m"
            {
#line 1531 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1531 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_23;
#line 1531 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInstTable0_24;
#line 1531 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1531 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInstTable1_26;
#line 1531 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInst_28;

#line 1533 "inst_util.m"
              {
#line 1533 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__InstTable0_23);
              }
#line 1534 "inst_util.m"
              {
#line 1534 "inst_util.m"
                hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__SharedInstTable0_24);
              }
#line 1535 "inst_util.m"
              {
#line 1535 "inst_util.m"
                hlds__hlds_data__search_insert_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__SharedInstTable0_24, &check_hlds__inst_util__SharedInstTable1_26);
              }
#line 1545 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1546 "inst_util.m"
                {
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_29;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_30;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__SharedInstTable2_31;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__SharedInstTable_32;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_33;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_38_38;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_58;
#line 1546 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_59;

#line 1549 "inst_util.m"
                  {
#line 1549 "inst_util.m"
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
#line 1551 "inst_util.m"
                  {
#line 1551 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36);
                  }
#line 1555 "inst_util.m"
                  {
#line 1555 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_58);
                  }
#line 1556 "inst_util.m"
                  {
#line 1556 "inst_util.m"
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__SubInst0_58, &check_hlds__inst_util__SubInst1_59);
                  }
#line 1557 "inst_util.m"
                  {
#line 1557 "inst_util.m"
                    check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst1_59, &check_hlds__inst_util__SharedInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
#line 1561 "inst_util.m"
                  {
#line 1561 "inst_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__InstTable2_30);
                  }
#line 1562 "inst_util.m"
                  {
#line 1562 "inst_util.m"
                    hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__SharedInstTable2_31);
                  }
#line 1563 "inst_util.m"
                  {
#line 1563 "inst_util.m"
                    check_hlds__inst_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1563 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_38_38, 0) = ((MR_Box) (check_hlds__inst_util__SharedInst_28));
#line 1563 "inst_util.m"
                  }
#line 1563 "inst_util.m"
                  {
#line 1563 "inst_util.m"
                    hlds__hlds_data__det_update_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_38_38, check_hlds__inst_util__SharedInstTable2_31, &check_hlds__inst_util__SharedInstTable_32);
                  }
#line 1565 "inst_util.m"
                  {
#line 1565 "inst_util.m"
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable_32, check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__InstTable_33);
                  }
#line 1567 "inst_util.m"
                  {
#line 1567 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                  }
#line 1546 "inst_util.m"
                }
#line 1545 "inst_util.m"
              else
#line 1538 "inst_util.m"
                {
#line 1538 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1541 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1543 "inst_util.m"
                    check_hlds__inst_util__SharedInst_28 = check_hlds__inst_util__Inst0_5;
#line 1541 "inst_util.m"
                  else
#line 1540 "inst_util.m"
                    check_hlds__inst_util__SharedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1538 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1538 "inst_util.m"
                }
#line 1570 "inst_util.m"
              {
#line 1570 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__SharedInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35, check_hlds__inst_util__InstName_22);
              }
#line 1570 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1571 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1570 "inst_util.m"
              else
#line 1573 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SharedInst_28;
#line 1531 "inst_util.m"
            }
#line 1469 "inst_util.m"
            break;
#line 1469 "inst_util.m"
          case (MR_Integer) 5:
#line 1528 "inst_util.m"
            {
#line 1529 "inst_util.m"
              {
#line 1529 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
#line 1529 "inst_util.m"
                return;
              }
#line 1528 "inst_util.m"
            }
#line 1469 "inst_util.m"
            break;
#line 1469 "inst_util.m"
        }
#line 1469 "inst_util.m"
        break;
#line 1469 "inst_util.m"
    }
#line 1469 "inst_util.m"
  }
#line 1464 "inst_util.m"
}

#line 1437 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1437 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1437 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1437 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1437 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1437 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5)
#line 1437 "inst_util.m"
{
#line 1440 "inst_util.m"
  {
#line 1440 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1440 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1440 "inst_util.m"
      if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1440 "inst_util.m"
        {
#line 1440 "inst_util.m"
          *check_hlds__inst_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1440 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1440 "inst_util.m"
        }
#line 1440 "inst_util.m"
      else
#line 1451 "inst_util.m"
        {
#line 1452 "inst_util.m"
          {
#line 1452 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1452 "inst_util.m"
            return;
          }
#line 1451 "inst_util.m"
        }
#line 1440 "inst_util.m"
    else
#line 1440 "inst_util.m"
      {
#line 1440 "inst_util.m"
        MR_Word check_hlds__inst_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1440 "inst_util.m"
        MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1440 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1453 "inst_util.m"
          {
#line 1454 "inst_util.m"
            {
#line 1454 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1454 "inst_util.m"
              return;
            }
#line 1453 "inst_util.m"
          }
#line 1440 "inst_util.m"
        else
#line 1442 "inst_util.m"
          {
#line 1442 "inst_util.m"
            MR_Word check_hlds__inst_util__Live_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1442 "inst_util.m"
            MR_Word check_hlds__inst_util__Lives_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1442 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_13;
#line 1442 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_14;
#line 1442 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1446 "inst_util.m"
#line 1446 "inst_util.m"
            switch (check_hlds__inst_util__Live_11) {
#line 1446 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1446 "inst_util.m"
              case (MR_Integer) 1:
#line 1447 "inst_util.m"
                {
#line 1448 "inst_util.m"
                  check_hlds__inst_util__Inst_13 = check_hlds__inst_util__V_37_37;
#line 1447 "inst_util.m"
                  check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1447 "inst_util.m"
                }
#line 1446 "inst_util.m"
                break;
#line 1446 "inst_util.m"
              case (MR_Integer) 0:
#line 1444 "inst_util.m"
                {
#line 1444 "inst_util.m"
                  check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__V_37_37, &check_hlds__inst_util__Inst_13, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
                }
#line 1446 "inst_util.m"
                break;
#line 1446 "inst_util.m"
            }
#line 1450 "inst_util.m"
            {
#line 1450 "inst_util.m"
              check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__V_36_36, check_hlds__inst_util__Lives_12, &check_hlds__inst_util__Insts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);
            }
#line 1442 "inst_util.m"
            {
#line 1442 "inst_util.m"
              MR_Word base;
#line 1442 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "inst_util.m"
              *check_hlds__inst_util__HeadVar__3_3 = base;
#line 1442 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_13));
#line 1442 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_14));
#line 1442 "inst_util.m"
            }
#line 1442 "inst_util.m"
          }
#line 1440 "inst_util.m"
      }
#line 1440 "inst_util.m"
  }
#line 1437 "inst_util.m"
}

#line 1417 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1417 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1417 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1417 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1417 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1417 "inst_util.m"
{
#line 1422 "inst_util.m"
  {
#line 1422 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1422 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "inst_util.m"
      {
#line 1422 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1422 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1422 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1422 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1422 "inst_util.m"
      }
#line 1422 "inst_util.m"
    else
#line 1424 "inst_util.m"
      {
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1423 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1423 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1423 "inst_util.m"
          {
#line 1423 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1423 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1425 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1425 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1425 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1425 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1426 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1425 "inst_util.m"
            else
#line 1428 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1430 "inst_util.m"
            {
#line 1430 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1424 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1424 "inst_util.m"
              {
#line 1431 "inst_util.m"
                {
#line 1431 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1424 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1424 "inst_util.m"
                  {
#line 1424 "inst_util.m"
                    {
#line 1424 "inst_util.m"
                      MR_Word base;
#line 1424 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1424 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1424 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1424 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1424 "inst_util.m"
                    }
#line 1433 "inst_util.m"
                    {
#line 1433 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1433 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1424 "inst_util.m"
                  }
#line 1424 "inst_util.m"
              }
#line 1423 "inst_util.m"
          }
#line 1424 "inst_util.m"
      }
#line 1422 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1422 "inst_util.m"
  }
#line 1417 "inst_util.m"
}

#line 1406 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1406 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1406 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1406 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1406 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1406 "inst_util.m"
{
#line 1410 "inst_util.m"
  {
#line 1410 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1410 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1410 "inst_util.m"
      {
#line 1410 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1410 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1410 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1410 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1410 "inst_util.m"
      }
#line 1410 "inst_util.m"
    else
#line 1412 "inst_util.m"
      {
#line 1412 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1412 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1412 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1412 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1412 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1412 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1412 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1413 "inst_util.m"
        {
#line 1413 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1412 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1412 "inst_util.m"
          {
#line 1414 "inst_util.m"
            {
#line 1414 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1412 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1412 "inst_util.m"
              {
#line 1411 "inst_util.m"
                {
#line 1411 "inst_util.m"
                  MR_Word base;
#line 1411 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1411 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1411 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1411 "inst_util.m"
                }
#line 1415 "inst_util.m"
                {
#line 1415 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1415 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1412 "inst_util.m"
              }
#line 1412 "inst_util.m"
          }
#line 1412 "inst_util.m"
      }
#line 1410 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1410 "inst_util.m"
  }
#line 1406 "inst_util.m"
}

#line 1390 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1390 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1390 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1390 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1390 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1390 "inst_util.m"
{
#line 1395 "inst_util.m"
  {
#line 1395 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1395 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1395 "inst_util.m"
      {
#line 1395 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1395 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1395 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1395 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1395 "inst_util.m"
      }
#line 1395 "inst_util.m"
    else
#line 1397 "inst_util.m"
      {
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_20;
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_21;
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 0)));
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 1)));
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1397 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1399 "inst_util.m"
        {
#line 1399 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1397 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1397 "inst_util.m"
          {
#line 1401 "inst_util.m"
            {
#line 1401 "inst_util.m"
              check_hlds__inst_util__Bound_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1401 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1401 "inst_util.m"
            }
#line 1402 "inst_util.m"
            {
#line 1402 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__Bounds0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Bounds_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1397 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1397 "inst_util.m"
              {
#line 1397 "inst_util.m"
                {
#line 1397 "inst_util.m"
                  MR_Word base;
#line 1397 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1397 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_20));
#line 1397 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_21));
#line 1397 "inst_util.m"
                }
#line 1404 "inst_util.m"
                {
#line 1404 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1404 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1397 "inst_util.m"
              }
#line 1397 "inst_util.m"
          }
#line 1397 "inst_util.m"
      }
#line 1395 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1395 "inst_util.m"
  }
#line 1390 "inst_util.m"
}

#line 1281 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48)
#line 1281 "inst_util.m"
{
#line 1287 "inst_util.m"
  {
#line 1287 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1287 "inst_util.m"
#line 1287 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
#line 1287 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1287 "inst_util.m"
      case (MR_Integer) 0:
#line 1287 "inst_util.m"
#line 1287 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
#line 1287 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1287 "inst_util.m"
          case (MR_Integer) 0:
#line 1297 "inst_util.m"
            {
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__V_71_71;
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_73;

#line 1298 "inst_util.m"
              {
#line 1298 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_73);
              }
#line 1297 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1297 "inst_util.m"
                {
#line 1299 "inst_util.m"
                  check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1300 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1297 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
#line 1299 "inst_util.m"
                  {
#line 1299 "inst_util.m"
                    MR_Word base;
#line 1299 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1299 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_73));
#line 1299 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 1299 "inst_util.m"
                  }
#line 1299 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1297 "inst_util.m"
                }
#line 1297 "inst_util.m"
            }
#line 1287 "inst_util.m"
            break;
#line 1287 "inst_util.m"
          case (MR_Integer) 1:
#line 1287 "inst_util.m"
            {
#line 1288 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1289 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1287 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
#line 1287 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1287 "inst_util.m"
            }
#line 1287 "inst_util.m"
            break;
#line 1287 "inst_util.m"
        }
#line 1287 "inst_util.m"
        break;
#line 1287 "inst_util.m"
      case (MR_Integer) 1:
#line 1302 "inst_util.m"
        {
#line 1302 "inst_util.m"
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1302 "inst_util.m"
          MR_Word check_hlds__inst_util__Any_20;
#line 1302 "inst_util.m"
          MR_Word check_hlds__inst_util__TypedAny_21;
#line 1302 "inst_util.m"
          MR_Word check_hlds__inst_util__V_67_67;

#line 1307 "inst_util.m"
          {
#line 1307 "inst_util.m"
            check_hlds__inst_util__Any_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "inst_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__Any_20, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1307 "inst_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__Any_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1307 "inst_util.m"
          }
#line 1308 "inst_util.m"
          {
#line 1308 "inst_util.m"
            check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_67_67, 0) = ((MR_Box) (check_hlds__inst_util__Live_10));
#line 1308 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_67_67, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 1308 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_67_67, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1308 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_67_67, 3) = ((MR_Box) (check_hlds__inst_util__Any_20));
#line 1308 "inst_util.m"
          }
#line 1308 "inst_util.m"
          {
#line 1308 "inst_util.m"
            check_hlds__inst_util__TypedAny_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__TypedAny_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1308 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__TypedAny_21, 1) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1308 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__TypedAny_21, 2) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1308 "inst_util.m"
          }
#line 1309 "inst_util.m"
          {
#line 1309 "inst_util.m"
            MR_Word base;
#line 1309 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = base;
#line 1309 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1309 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__TypedAny_21));
#line 1309 "inst_util.m"
          }
#line 1310 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1302 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
#line 1302 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1302 "inst_util.m"
        }
#line 1287 "inst_util.m"
        break;
#line 1287 "inst_util.m"
      case (MR_Integer) 2:
#line 1291 "inst_util.m"
        {
#line 1291 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1291 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1291 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_18;

#line 1293 "inst_util.m"
          {
#line 1293 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
#line 1291 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1291 "inst_util.m"
            {
#line 1295 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1291 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
#line 1294 "inst_util.m"
              {
#line 1294 "inst_util.m"
                MR_Word base;
#line 1294 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1294 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1294 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1294 "inst_util.m"
              }
#line 1294 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1291 "inst_util.m"
            }
#line 1291 "inst_util.m"
        }
#line 1287 "inst_util.m"
        break;
#line 1287 "inst_util.m"
      case (MR_Integer) 3:
#line 1287 "inst_util.m"
#line 1287 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
#line 1287 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1287 "inst_util.m"
          case (MR_Integer) 0:
#line 1312 "inst_util.m"
            {
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_24;
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__Detism1_25;
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__V_64_64;
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__V_65_65;
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_75;
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResults0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));

#line 1314 "inst_util.m"
              {
#line 1314 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_74, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
#line 1312 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1312 "inst_util.m"
                {
#line 1315 "inst_util.m"
                  {
#line 1315 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_23, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_24, &check_hlds__inst_util__Detism1_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48);
                  }
#line 1312 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1312 "inst_util.m"
                    {
#line 1318 "inst_util.m"
                      check_hlds__inst_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1319 "inst_util.m"
                      check_hlds__inst_util__V_65_65 = (MR_Integer) 1;
#line 1318 "inst_util.m"
                      {
#line 1318 "inst_util.m"
                        MR_Word base;
#line 1318 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 1318 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1318 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1318 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 1318 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_24));
#line 1318 "inst_util.m"
                      }
#line 1319 "inst_util.m"
                      {
#line 1319 "inst_util.m"
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_25, check_hlds__inst_util__V_65_65, check_hlds__inst_util__Detism_14);
                      }
#line 1319 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1312 "inst_util.m"
                    }
#line 1312 "inst_util.m"
                }
#line 1312 "inst_util.m"
            }
#line 1287 "inst_util.m"
            break;
#line 1287 "inst_util.m"
          case (MR_Integer) 1:
#line 1321 "inst_util.m"
            {
#line 1321 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1321 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1321 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_77;

#line 1323 "inst_util.m"
              {
#line 1323 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_76, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_77);
              }
#line 1321 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1321 "inst_util.m"
                {
#line 1325 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1321 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
#line 1324 "inst_util.m"
                  {
#line 1324 "inst_util.m"
                    MR_Word base;
#line 1324 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1324 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1324 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_77));
#line 1324 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_26));
#line 1324 "inst_util.m"
                  }
#line 1324 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1321 "inst_util.m"
                }
#line 1321 "inst_util.m"
            }
#line 1287 "inst_util.m"
            break;
#line 1287 "inst_util.m"
          case (MR_Integer) 2:
#line 1327 "inst_util.m"
            {
#line 1328 "inst_util.m"
              {
#line 1328 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_any_inst\'/8", (MR_String) "free inst var");
              }
#line 1327 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1327 "inst_util.m"
            }
#line 1287 "inst_util.m"
            break;
#line 1287 "inst_util.m"
          case (MR_Integer) 3:
#line 1330 "inst_util.m"
            {
#line 1330 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1330 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1330 "inst_util.m"
              MR_Word check_hlds__inst_util__V_55_55;

#line 1332 "inst_util.m"
              {
#line 1332 "inst_util.m"
                check_hlds__inst_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_55_55, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1332 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1332 "inst_util.m"
              }
#line 1331 "inst_util.m"
              {
#line 1331 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_28, check_hlds__inst_util__SubInst0_29, check_hlds__inst_util__V_55_55, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48);
              }
#line 1330 "inst_util.m"
            }
#line 1287 "inst_util.m"
            break;
#line 1287 "inst_util.m"
          case (MR_Integer) 4:
#line 1339 "inst_util.m"
            {
#line 1339 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1339 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_33;
#line 1339 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstTable0_34;
#line 1339 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstInfo_35;
#line 1339 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstName_36;
#line 1339 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_37;
#line 1339 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstTable1_38;
#line 1339 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInst_40;

#line 1341 "inst_util.m"
              {
#line 1341 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__inst_util__InstTable0_33);
              }
#line 1342 "inst_util.m"
              {
#line 1342 "inst_util.m"
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable0_33, &check_hlds__inst_util__AnyInstTable0_34);
              }
#line 1343 "inst_util.m"
              {
#line 1343 "inst_util.m"
                check_hlds__inst_util__AnyInstInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_35, 0) = ((MR_Box) (check_hlds__inst_util__InstName_32));
#line 1343 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_35, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1343 "inst_util.m"
              }
#line 1344 "inst_util.m"
              {
#line 1344 "inst_util.m"
                check_hlds__inst_util__AnyInstName_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1344 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_36, 1) = ((MR_Box) (check_hlds__inst_util__InstName_32));
#line 1344 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_36, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1344 "inst_util.m"
              }
#line 1345 "inst_util.m"
              {
#line 1345 "inst_util.m"
                hlds__hlds_data__search_insert_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_35, &check_hlds__inst_util__MaybeMaybeInst_37, check_hlds__inst_util__AnyInstTable0_34, &check_hlds__inst_util__AnyInstTable1_38);
              }
#line 1359 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1360 "inst_util.m"
                {
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_41;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_42;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_43;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__AnyInstTable2_44;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__AnyInstTable_45;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_46;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_51_51;
#line 1360 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_78;

#line 1363 "inst_util.m"
                  {
#line 1363 "inst_util.m"
                    hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable1_38, check_hlds__inst_util__InstTable0_33, &check_hlds__inst_util__InstTable1_41);
                  }
#line 1364 "inst_util.m"
                  {
#line 1364 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_41, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49);
                  }
#line 1368 "inst_util.m"
                  {
#line 1368 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__InstName_32, &check_hlds__inst_util__SubInst0_78);
                  }
#line 1369 "inst_util.m"
                  {
#line 1369 "inst_util.m"
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__SubInst0_78, &check_hlds__inst_util__SubInst1_42);
                  }
#line 1370 "inst_util.m"
                  {
#line 1370 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__SubInst1_42, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__AnyInst_40, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50);
                  }
#line 1360 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1360 "inst_util.m"
                    {
#line 1375 "inst_util.m"
                      {
#line 1375 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50, &check_hlds__inst_util__InstTable2_43);
                      }
#line 1376 "inst_util.m"
                      {
#line 1376 "inst_util.m"
                        hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable2_43, &check_hlds__inst_util__AnyInstTable2_44);
                      }
#line 1377 "inst_util.m"
                      {
#line 1377 "inst_util.m"
                        check_hlds__inst_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_51_51, 0) = ((MR_Box) (check_hlds__inst_util__AnyInst_40));
#line 1377 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_51_51, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1377 "inst_util.m"
                      }
#line 1377 "inst_util.m"
                      {
#line 1377 "inst_util.m"
                        hlds__hlds_data__det_update_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_35, check_hlds__inst_util__V_51_51, check_hlds__inst_util__AnyInstTable2_44, &check_hlds__inst_util__AnyInstTable_45);
                      }
#line 1379 "inst_util.m"
                      {
#line 1379 "inst_util.m"
                        hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable_45, check_hlds__inst_util__InstTable2_43, &check_hlds__inst_util__InstTable_46);
                      }
#line 1380 "inst_util.m"
                      {
#line 1380 "inst_util.m"
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48);
                      }
#line 1380 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1360 "inst_util.m"
                    }
#line 1360 "inst_util.m"
                }
#line 1359 "inst_util.m"
              else
#line 1348 "inst_util.m"
                {
#line 1348 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_37, (MR_Integer) 0)));

#line 1351 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1352 "inst_util.m"
                    {
#line 1353 "inst_util.m"
                      {
#line 1353 "inst_util.m"
                        check_hlds__inst_util__AnyInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1353 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_40, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_36));
#line 1353 "inst_util.m"
                      }
#line 1354 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1352 "inst_util.m"
                    }
#line 1351 "inst_util.m"
                  else
#line 1350 "inst_util.m"
                    {
#line 1350 "inst_util.m"
                      check_hlds__inst_util__AnyInst_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_39, (MR_Integer) 0)));
#line 1350 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_39, (MR_Integer) 1)));
#line 1350 "inst_util.m"
                    }
#line 1348 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
#line 1348 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1348 "inst_util.m"
                }
#line 1339 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1339 "inst_util.m"
                {
#line 1383 "inst_util.m"
                  {
#line 1383 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__AnyInst_40, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48, check_hlds__inst_util__AnyInstName_36);
                  }
#line 1383 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1384 "inst_util.m"
                    {
#line 1384 "inst_util.m"
                      MR_Word base;
#line 1384 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 1384 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1384 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_36));
#line 1384 "inst_util.m"
                    }
#line 1383 "inst_util.m"
                  else
#line 1386 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__AnyInst_40;
#line 1383 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1339 "inst_util.m"
                }
#line 1339 "inst_util.m"
            }
#line 1287 "inst_util.m"
            break;
#line 1287 "inst_util.m"
          case (MR_Integer) 5:
#line 1335 "inst_util.m"
            {
#line 1336 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_util_scalar_common_1[2]);
#line 1337 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1335 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_47;
#line 1335 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1335 "inst_util.m"
            }
#line 1287 "inst_util.m"
            break;
#line 1287 "inst_util.m"
        }
#line 1287 "inst_util.m"
        break;
#line 1287 "inst_util.m"
    }
#line 1287 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1287 "inst_util.m"
  }
#line 1281 "inst_util.m"
}

#line 1260 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1260 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1260 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1260 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1260 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1260 "inst_util.m"
{
#line 1265 "inst_util.m"
  {
#line 1265 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1265 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1265 "inst_util.m"
      {
#line 1265 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1265 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1265 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1265 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1265 "inst_util.m"
      }
#line 1265 "inst_util.m"
    else
#line 1267 "inst_util.m"
      {
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst_20;
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_21;
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 0)));
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 1)));
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1267 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1269 "inst_util.m"
        {
#line 1269 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1267 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1267 "inst_util.m"
          {
#line 1271 "inst_util.m"
            {
#line 1271 "inst_util.m"
              check_hlds__inst_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1271 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1271 "inst_util.m"
            }
#line 1272 "inst_util.m"
            {
#line 1272 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInsts_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1267 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1267 "inst_util.m"
              {
#line 1267 "inst_util.m"
                {
#line 1267 "inst_util.m"
                  MR_Word base;
#line 1267 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1267 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_20));
#line 1267 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInsts_21));
#line 1267 "inst_util.m"
                }
#line 1274 "inst_util.m"
                {
#line 1274 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1274 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1267 "inst_util.m"
              }
#line 1267 "inst_util.m"
          }
#line 1267 "inst_util.m"
      }
#line 1265 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1265 "inst_util.m"
  }
#line 1260 "inst_util.m"
}

#line 1154 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1154 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1154 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1154 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1154 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45)
#line 1154 "inst_util.m"
{
#line 1160 "inst_util.m"
  {
#line 1160 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1160 "inst_util.m"
#line 1160 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
#line 1160 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1160 "inst_util.m"
      case (MR_Integer) 0:
#line 1160 "inst_util.m"
#line 1160 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
#line 1160 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1160 "inst_util.m"
          case (MR_Integer) 0:
#line 1169 "inst_util.m"
            {
#line 1169 "inst_util.m"
              MR_Word check_hlds__inst_util__V_67_67;
#line 1169 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_69;

#line 1170 "inst_util.m"
              {
#line 1170 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_69);
              }
#line 1169 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1169 "inst_util.m"
                {
#line 1171 "inst_util.m"
                  check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1172 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1169 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1171 "inst_util.m"
                  {
#line 1171 "inst_util.m"
                    MR_Word base;
#line 1171 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1171 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1171 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1171 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1171 "inst_util.m"
                  }
#line 1171 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1169 "inst_util.m"
                }
#line 1169 "inst_util.m"
            }
#line 1160 "inst_util.m"
            break;
#line 1160 "inst_util.m"
          case (MR_Integer) 1:
#line 1160 "inst_util.m"
            {
#line 1161 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1162 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1160 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1160 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1160 "inst_util.m"
            }
#line 1160 "inst_util.m"
            break;
#line 1160 "inst_util.m"
        }
#line 1160 "inst_util.m"
        break;
#line 1160 "inst_util.m"
      case (MR_Integer) 1:
#line 1174 "inst_util.m"
        {
#line 1174 "inst_util.m"
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1174 "inst_util.m"
          MR_Word check_hlds__inst_util__V_64_64;
#line 1174 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_70;

#line 1175 "inst_util.m"
          {
#line 1175 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_70);
          }
#line 1174 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1174 "inst_util.m"
            {
#line 1177 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1174 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1176 "inst_util.m"
              {
#line 1176 "inst_util.m"
                check_hlds__inst_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1176 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_70));
#line 1176 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 2) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1176 "inst_util.m"
              }
#line 1176 "inst_util.m"
              {
#line 1176 "inst_util.m"
                MR_Word base;
#line 1176 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1176 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1176 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 1176 "inst_util.m"
              }
#line 1176 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1174 "inst_util.m"
            }
#line 1174 "inst_util.m"
        }
#line 1160 "inst_util.m"
        break;
#line 1160 "inst_util.m"
      case (MR_Integer) 2:
#line 1164 "inst_util.m"
        {
#line 1164 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1164 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1164 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_18;

#line 1165 "inst_util.m"
          {
#line 1165 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
#line 1164 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1164 "inst_util.m"
            {
#line 1167 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1164 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1166 "inst_util.m"
              {
#line 1166 "inst_util.m"
                MR_Word base;
#line 1166 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1166 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1166 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1166 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1166 "inst_util.m"
              }
#line 1166 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1164 "inst_util.m"
            }
#line 1164 "inst_util.m"
        }
#line 1160 "inst_util.m"
        break;
#line 1160 "inst_util.m"
      case (MR_Integer) 3:
#line 1160 "inst_util.m"
#line 1160 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
#line 1160 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1160 "inst_util.m"
          case (MR_Integer) 0:
#line 1179 "inst_util.m"
            {
#line 1179 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1179 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1179 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_22;
#line 1179 "inst_util.m"
              MR_Word check_hlds__inst_util__Detism1_23;
#line 1179 "inst_util.m"
              MR_Word check_hlds__inst_util__V_61_61;
#line 1179 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1179 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_72;

#line 1180 "inst_util.m"
              {
#line 1180 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_71, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_72);
              }
#line 1179 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1179 "inst_util.m"
                {
#line 1181 "inst_util.m"
                  {
#line 1181 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_21, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_22, &check_hlds__inst_util__Detism1_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                  }
#line 1179 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1179 "inst_util.m"
                    {
#line 1184 "inst_util.m"
                      check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 1183 "inst_util.m"
                      {
#line 1183 "inst_util.m"
                        MR_Word base;
#line 1183 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 1183 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1183 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_72));
#line 1183 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_20));
#line 1183 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_22));
#line 1183 "inst_util.m"
                      }
#line 1184 "inst_util.m"
                      {
#line 1184 "inst_util.m"
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_23, check_hlds__inst_util__V_61_61, check_hlds__inst_util__Detism_14);
                      }
#line 1184 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1179 "inst_util.m"
                    }
#line 1179 "inst_util.m"
                }
#line 1179 "inst_util.m"
            }
#line 1160 "inst_util.m"
            break;
#line 1160 "inst_util.m"
          case (MR_Integer) 1:
#line 1186 "inst_util.m"
            {
#line 1186 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1186 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1186 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_75;

#line 1187 "inst_util.m"
              {
#line 1187 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_73, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
#line 1186 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1186 "inst_util.m"
                {
#line 1189 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1186 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1188 "inst_util.m"
                  {
#line 1188 "inst_util.m"
                    MR_Word base;
#line 1188 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1188 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1188 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1188 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_74));
#line 1188 "inst_util.m"
                  }
#line 1188 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1186 "inst_util.m"
                }
#line 1186 "inst_util.m"
            }
#line 1160 "inst_util.m"
            break;
#line 1160 "inst_util.m"
          case (MR_Integer) 2:
#line 1191 "inst_util.m"
            {
#line 1192 "inst_util.m"
              {
#line 1192 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_ground_inst\'/8", (MR_String) "free inst var");
              }
#line 1191 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1191 "inst_util.m"
            }
#line 1160 "inst_util.m"
            break;
#line 1160 "inst_util.m"
          case (MR_Integer) 3:
#line 1194 "inst_util.m"
            {
#line 1194 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1194 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1194 "inst_util.m"
              MR_Word check_hlds__inst_util__V_52_52;

#line 1196 "inst_util.m"
              {
#line 1196 "inst_util.m"
                check_hlds__inst_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1196 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 1) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1196 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "inst_util.m"
              }
#line 1195 "inst_util.m"
              {
#line 1195 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_25, check_hlds__inst_util__SubInst0_26, check_hlds__inst_util__V_52_52, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
              }
#line 1194 "inst_util.m"
            }
#line 1160 "inst_util.m"
            break;
#line 1160 "inst_util.m"
          case (MR_Integer) 4:
#line 1203 "inst_util.m"
            {
#line 1203 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1203 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_30;
#line 1203 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstTable0_31;
#line 1203 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstInfo_32;
#line 1203 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstName_33;
#line 1203 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_34;
#line 1203 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstTable1_35;
#line 1203 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInst_37;

#line 1205 "inst_util.m"
              {
#line 1205 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__InstTable0_30);
              }
#line 1206 "inst_util.m"
              {
#line 1206 "inst_util.m"
                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__GroundInstTable0_31);
              }
#line 1207 "inst_util.m"
              {
#line 1207 "inst_util.m"
                check_hlds__inst_util__GroundInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 0) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1207 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1207 "inst_util.m"
              }
#line 1208 "inst_util.m"
              {
#line 1208 "inst_util.m"
                check_hlds__inst_util__GroundInstName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1208 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 1) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1208 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1208 "inst_util.m"
              }
#line 1209 "inst_util.m"
              {
#line 1209 "inst_util.m"
                hlds__hlds_data__search_insert_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, &check_hlds__inst_util__MaybeMaybeInst_34, check_hlds__inst_util__GroundInstTable0_31, &check_hlds__inst_util__GroundInstTable1_35);
              }
#line 1223 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "inst_util.m"
                {
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_38;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_39;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_40;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__GroundInstTable2_41;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__GroundInstTable_42;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_43;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_48_48;
#line 1224 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_76;

#line 1227 "inst_util.m"
                  {
#line 1227 "inst_util.m"
                    hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable1_35, check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__InstTable1_38);
                  }
#line 1229 "inst_util.m"
                  {
#line 1229 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46);
                  }
#line 1233 "inst_util.m"
                  {
#line 1233 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__InstName_29, &check_hlds__inst_util__SubInst0_76);
                  }
#line 1234 "inst_util.m"
                  {
#line 1234 "inst_util.m"
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__SubInst0_76, &check_hlds__inst_util__SubInst1_39);
                  }
#line 1235 "inst_util.m"
                  {
#line 1235 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__SubInst1_39, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__GroundInst_37, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47);
                  }
#line 1224 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1224 "inst_util.m"
                    {
#line 1241 "inst_util.m"
                      {
#line 1241 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, &check_hlds__inst_util__InstTable2_40);
                      }
#line 1242 "inst_util.m"
                      {
#line 1242 "inst_util.m"
                        hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__GroundInstTable2_41);
                      }
#line 1244 "inst_util.m"
                      {
#line 1244 "inst_util.m"
                        check_hlds__inst_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__GroundInst_37));
#line 1244 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1244 "inst_util.m"
                      }
#line 1243 "inst_util.m"
                      {
#line 1243 "inst_util.m"
                        hlds__hlds_data__det_update_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, check_hlds__inst_util__V_48_48, check_hlds__inst_util__GroundInstTable2_41, &check_hlds__inst_util__GroundInstTable_42);
                      }
#line 1246 "inst_util.m"
                      {
#line 1246 "inst_util.m"
                        hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable_42, check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__InstTable_43);
                      }
#line 1248 "inst_util.m"
                      {
#line 1248 "inst_util.m"
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_43, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                      }
#line 1248 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1224 "inst_util.m"
                    }
#line 1224 "inst_util.m"
                }
#line 1223 "inst_util.m"
              else
#line 1212 "inst_util.m"
                {
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_34, (MR_Integer) 0)));

#line 1215 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1216 "inst_util.m"
                    {
#line 1217 "inst_util.m"
                      {
#line 1217 "inst_util.m"
                        check_hlds__inst_util__GroundInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1217 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1217 "inst_util.m"
                      }
#line 1218 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1216 "inst_util.m"
                    }
#line 1215 "inst_util.m"
                  else
#line 1214 "inst_util.m"
                    {
#line 1214 "inst_util.m"
                      check_hlds__inst_util__GroundInst_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 0)));
#line 1214 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 1)));
#line 1214 "inst_util.m"
                    }
#line 1212 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1212 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1212 "inst_util.m"
                }
#line 1203 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1203 "inst_util.m"
                {
#line 1252 "inst_util.m"
                  {
#line 1252 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__GroundInst_37, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45, check_hlds__inst_util__GroundInstName_33);
                  }
#line 1251 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1254 "inst_util.m"
                    {
#line 1254 "inst_util.m"
                      MR_Word base;
#line 1254 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 1254 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1254 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1254 "inst_util.m"
                    }
#line 1251 "inst_util.m"
                  else
#line 1256 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__GroundInst_37;
#line 1251 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1203 "inst_util.m"
                }
#line 1203 "inst_util.m"
            }
#line 1160 "inst_util.m"
            break;
#line 1160 "inst_util.m"
          case (MR_Integer) 5:
#line 1199 "inst_util.m"
            {
#line 1200 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__inst_util_scalar_common_3[0]);
#line 1201 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1199 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1199 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1199 "inst_util.m"
            }
#line 1160 "inst_util.m"
            break;
#line 1160 "inst_util.m"
        }
#line 1160 "inst_util.m"
        break;
#line 1160 "inst_util.m"
    }
#line 1160 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1160 "inst_util.m"
  }
#line 1154 "inst_util.m"
}

#line 1139 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1139 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1139 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1139 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1139 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1139 "inst_util.m"
{
#line 1143 "inst_util.m"
  {
#line 1143 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1143 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1143 "inst_util.m"
      {
#line 1143 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1143 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1143 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1143 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1143 "inst_util.m"
      }
#line 1143 "inst_util.m"
    else
#line 1145 "inst_util.m"
      {
#line 1145 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1145 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1145 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1145 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1145 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1145 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1145 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1146 "inst_util.m"
        {
#line 1146 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1145 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1145 "inst_util.m"
          {
#line 1147 "inst_util.m"
            {
#line 1147 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1145 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1145 "inst_util.m"
              {
#line 1144 "inst_util.m"
                {
#line 1144 "inst_util.m"
                  MR_Word base;
#line 1144 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1144 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1144 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1144 "inst_util.m"
                }
#line 1149 "inst_util.m"
                {
#line 1149 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1149 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1145 "inst_util.m"
              }
#line 1145 "inst_util.m"
          }
#line 1145 "inst_util.m"
      }
#line 1143 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1143 "inst_util.m"
  }
#line 1139 "inst_util.m"
}

#line 1120 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1120 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1120 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1120 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1120 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1120 "inst_util.m"
{
#line 1125 "inst_util.m"
  {
#line 1125 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1125 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "inst_util.m"
      {
#line 1125 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1125 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1125 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1125 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1125 "inst_util.m"
      }
#line 1125 "inst_util.m"
    else
#line 1127 "inst_util.m"
      {
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1127 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1126 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1126 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1126 "inst_util.m"
          {
#line 1126 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1126 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1128 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1128 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1128 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1128 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1129 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1128 "inst_util.m"
            else
#line 1131 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1133 "inst_util.m"
            {
#line 1133 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1127 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1127 "inst_util.m"
              {
#line 1135 "inst_util.m"
                {
#line 1135 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1127 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1127 "inst_util.m"
                  {
#line 1127 "inst_util.m"
                    {
#line 1127 "inst_util.m"
                      MR_Word base;
#line 1127 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1127 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1127 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1127 "inst_util.m"
                    }
#line 1137 "inst_util.m"
                    {
#line 1137 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1137 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1127 "inst_util.m"
                  }
#line 1127 "inst_util.m"
              }
#line 1126 "inst_util.m"
          }
#line 1127 "inst_util.m"
      }
#line 1125 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1125 "inst_util.m"
  }
#line 1120 "inst_util.m"
}

#line 1003 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 1003 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 1003 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12)
#line 1003 "inst_util.m"
{
#line 1026 "inst_util.m"
  {
#line 1026 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1026 "inst_util.m"
#line 1026 "inst_util.m"
    switch (check_hlds__inst_util__UniqA_10) {
#line 1026 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1026 "inst_util.m"
      case (MR_Integer) 3:
#line 1097 "inst_util.m"
        {
#line 1113 "inst_util.m"
#line 1113 "inst_util.m"
          switch (check_hlds__inst_util__Live_7) {
#line 1113 "inst_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "inst_util.m"
            case (MR_Integer) 1:
#line 1113 "inst_util.m"
              {
#line 1115 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1113 "inst_util.m"
                if (!(check_hlds__inst_util__succeeded))
#line 1116 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1113 "inst_util.m"
              }
#line 1113 "inst_util.m"
              break;
#line 1113 "inst_util.m"
            case (MR_Integer) 0:
#line 1113 "inst_util.m"
              {
#line 1114 "inst_util.m"
                {
#line 1114 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
#line 1113 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
              }
#line 1113 "inst_util.m"
              break;
#line 1113 "inst_util.m"
          }
#line 1097 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1097 "inst_util.m"
            {
#line 1099 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1099 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1097 "inst_util.m"
            }
#line 1097 "inst_util.m"
        }
#line 1026 "inst_util.m"
        break;
#line 1026 "inst_util.m"
      case (MR_Integer) 4:
#line 1101 "inst_util.m"
        {
#line 1113 "inst_util.m"
#line 1113 "inst_util.m"
          switch (check_hlds__inst_util__Live_7) {
#line 1113 "inst_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "inst_util.m"
            case (MR_Integer) 1:
#line 1113 "inst_util.m"
              {
#line 1115 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1113 "inst_util.m"
                if (!(check_hlds__inst_util__succeeded))
#line 1116 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1113 "inst_util.m"
              }
#line 1113 "inst_util.m"
              break;
#line 1113 "inst_util.m"
            case (MR_Integer) 0:
#line 1113 "inst_util.m"
              {
#line 1114 "inst_util.m"
                {
#line 1114 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
#line 1113 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
              }
#line 1113 "inst_util.m"
              break;
#line 1113 "inst_util.m"
          }
#line 1101 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1101 "inst_util.m"
            {
#line 1103 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__UniqB_11 == (MR_Integer) 3);
#line 1103 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1104 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1103 "inst_util.m"
              else
#line 1106 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1103 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
            }
#line 1101 "inst_util.m"
        }
#line 1026 "inst_util.m"
        break;
#line 1026 "inst_util.m"
      case (MR_Integer) 2:
#line 1067 "inst_util.m"
#line 1067 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1067 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "inst_util.m"
          case (MR_Integer) 3:
#line 1088 "inst_util.m"
            {
#line 1113 "inst_util.m"
#line 1113 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1113 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "inst_util.m"
                case (MR_Integer) 1:
#line 1113 "inst_util.m"
                  {
#line 1115 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1113 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1116 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
                case (MR_Integer) 0:
#line 1113 "inst_util.m"
                  {
#line 1114 "inst_util.m"
                    {
#line 1114 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1113 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
              }
#line 1088 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1088 "inst_util.m"
                {
#line 1090 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1090 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1088 "inst_util.m"
                }
#line 1088 "inst_util.m"
            }
#line 1067 "inst_util.m"
            break;
#line 1067 "inst_util.m"
          case (MR_Integer) 4:
#line 1092 "inst_util.m"
            {
#line 1113 "inst_util.m"
#line 1113 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1113 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "inst_util.m"
                case (MR_Integer) 1:
#line 1113 "inst_util.m"
                  {
#line 1115 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1113 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1116 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
                case (MR_Integer) 0:
#line 1113 "inst_util.m"
                  {
#line 1114 "inst_util.m"
                    {
#line 1114 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1113 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
              }
#line 1092 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1092 "inst_util.m"
                {
#line 1094 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1094 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1092 "inst_util.m"
                }
#line 1092 "inst_util.m"
            }
#line 1067 "inst_util.m"
            break;
#line 1067 "inst_util.m"
          case (MR_Integer) 2:
#line 1083 "inst_util.m"
            {
#line 1083 "inst_util.m"
#line 1083 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1083 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1083 "inst_util.m"
                case (MR_Integer) 1:
#line 1085 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1083 "inst_util.m"
                  break;
#line 1083 "inst_util.m"
                case (MR_Integer) 0:
#line 1082 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1083 "inst_util.m"
                  break;
#line 1083 "inst_util.m"
              }
#line 1083 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1083 "inst_util.m"
            }
#line 1067 "inst_util.m"
            break;
#line 1067 "inst_util.m"
          case (MR_Integer) 0:
#line 1066 "inst_util.m"
            {
#line 1066 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1066 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1066 "inst_util.m"
            }
#line 1067 "inst_util.m"
            break;
#line 1067 "inst_util.m"
          case (MR_Integer) 1:
#line 1072 "inst_util.m"
            {
#line 1072 "inst_util.m"
#line 1072 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1072 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1072 "inst_util.m"
                case (MR_Integer) 1:
#line 1076 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1072 "inst_util.m"
                  break;
#line 1072 "inst_util.m"
                case (MR_Integer) 0:
#line 1071 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1072 "inst_util.m"
                  break;
#line 1072 "inst_util.m"
              }
#line 1072 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1072 "inst_util.m"
            }
#line 1067 "inst_util.m"
            break;
#line 1067 "inst_util.m"
        }
#line 1026 "inst_util.m"
        break;
#line 1026 "inst_util.m"
      case (MR_Integer) 0:
#line 1017 "inst_util.m"
#line 1017 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1017 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1017 "inst_util.m"
          case (MR_Integer) 3:
#line 1018 "inst_util.m"
            {
#line 1113 "inst_util.m"
#line 1113 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1113 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "inst_util.m"
                case (MR_Integer) 1:
#line 1113 "inst_util.m"
                  {
#line 1115 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1113 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1116 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
                case (MR_Integer) 0:
#line 1113 "inst_util.m"
                  {
#line 1114 "inst_util.m"
                    {
#line 1114 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1113 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
              }
#line 1018 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1018 "inst_util.m"
                {
#line 1020 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1020 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1018 "inst_util.m"
                }
#line 1018 "inst_util.m"
            }
#line 1017 "inst_util.m"
            break;
#line 1017 "inst_util.m"
          case (MR_Integer) 4:
#line 1022 "inst_util.m"
            {
#line 1113 "inst_util.m"
#line 1113 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1113 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "inst_util.m"
                case (MR_Integer) 1:
#line 1113 "inst_util.m"
                  {
#line 1115 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1113 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1116 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
                case (MR_Integer) 0:
#line 1113 "inst_util.m"
                  {
#line 1114 "inst_util.m"
                    {
#line 1114 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1113 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
              }
#line 1022 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1022 "inst_util.m"
                {
#line 1024 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1024 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1022 "inst_util.m"
                }
#line 1022 "inst_util.m"
            }
#line 1017 "inst_util.m"
            break;
#line 1017 "inst_util.m"
          case (MR_Integer) 2:
#line 1017 "inst_util.m"
          case (MR_Integer) 0:
#line 1017 "inst_util.m"
          case (MR_Integer) 1:
#line 1016 "inst_util.m"
            {
#line 1016 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1016 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1016 "inst_util.m"
            }
#line 1017 "inst_util.m"
            break;
#line 1017 "inst_util.m"
        }
#line 1026 "inst_util.m"
        break;
#line 1026 "inst_util.m"
      case (MR_Integer) 1:
#line 1032 "inst_util.m"
#line 1032 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1032 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1032 "inst_util.m"
          case (MR_Integer) 3:
#line 1053 "inst_util.m"
            {
#line 1113 "inst_util.m"
#line 1113 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1113 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "inst_util.m"
                case (MR_Integer) 1:
#line 1113 "inst_util.m"
                  {
#line 1115 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1113 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1116 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
                case (MR_Integer) 0:
#line 1113 "inst_util.m"
                  {
#line 1114 "inst_util.m"
                    {
#line 1114 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1113 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
              }
#line 1053 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1053 "inst_util.m"
                {
#line 1055 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1055 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1053 "inst_util.m"
                }
#line 1053 "inst_util.m"
            }
#line 1032 "inst_util.m"
            break;
#line 1032 "inst_util.m"
          case (MR_Integer) 4:
#line 1057 "inst_util.m"
            {
#line 1113 "inst_util.m"
#line 1113 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1113 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "inst_util.m"
                case (MR_Integer) 1:
#line 1113 "inst_util.m"
                  {
#line 1115 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1113 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1116 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
                case (MR_Integer) 0:
#line 1113 "inst_util.m"
                  {
#line 1114 "inst_util.m"
                    {
#line 1114 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1113 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
                  break;
#line 1113 "inst_util.m"
              }
#line 1057 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1057 "inst_util.m"
                {
#line 1059 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1059 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1057 "inst_util.m"
                }
#line 1057 "inst_util.m"
            }
#line 1032 "inst_util.m"
            break;
#line 1032 "inst_util.m"
          case (MR_Integer) 2:
#line 1046 "inst_util.m"
            {
#line 1046 "inst_util.m"
#line 1046 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1046 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1046 "inst_util.m"
                case (MR_Integer) 1:
#line 1050 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1046 "inst_util.m"
                  break;
#line 1046 "inst_util.m"
                case (MR_Integer) 0:
#line 1045 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1046 "inst_util.m"
                  break;
#line 1046 "inst_util.m"
              }
#line 1046 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1046 "inst_util.m"
            }
#line 1032 "inst_util.m"
            break;
#line 1032 "inst_util.m"
          case (MR_Integer) 0:
#line 1031 "inst_util.m"
            {
#line 1031 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1031 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1031 "inst_util.m"
            }
#line 1032 "inst_util.m"
            break;
#line 1032 "inst_util.m"
          case (MR_Integer) 1:
#line 1037 "inst_util.m"
            {
#line 1037 "inst_util.m"
#line 1037 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1037 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1037 "inst_util.m"
                case (MR_Integer) 1:
#line 1039 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 1;
#line 1037 "inst_util.m"
                  break;
#line 1037 "inst_util.m"
                case (MR_Integer) 0:
#line 1036 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1037 "inst_util.m"
                  break;
#line 1037 "inst_util.m"
              }
#line 1037 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1037 "inst_util.m"
            }
#line 1032 "inst_util.m"
            break;
#line 1032 "inst_util.m"
        }
#line 1026 "inst_util.m"
        break;
#line 1026 "inst_util.m"
    }
#line 1026 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1026 "inst_util.m"
  }
#line 1003 "inst_util.m"
}

#line 956 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 956 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 956 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 956 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 956 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22)
#line 956 "inst_util.m"
{
#line 961 "inst_util.m"
  {
#line 961 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 961 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;

#line 962 "inst_util.m"
    {
#line 962 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__SubInstA_12, check_hlds__inst_util__InstB_13, check_hlds__inst_util__Real_14, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
    }
#line 961 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 961 "inst_util.m"
      {
#line 964 "inst_util.m"
        {
#line 964 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_18, check_hlds__inst_util__SubInstA_12, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
        }
#line 964 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 964 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 967 "inst_util.m"
          *check_hlds__inst_util__Inst_15 = check_hlds__inst_util__Inst0_18;
#line 964 "inst_util.m"
        else
#line 968 "inst_util.m"
          {
#line 968 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVars0_19;
#line 968 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_20;

#line 968 "inst_util.m"
            check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 968 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 968 "inst_util.m"
              {
#line 968 "inst_util.m"
                check_hlds__inst_util__InstVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 1)));
#line 968 "inst_util.m"
                check_hlds__inst_util__SubInst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 2)));
#line 970 "inst_util.m"
                {
#line 970 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_24_24;

#line 970 "inst_util.m"
                  {
#line 970 "inst_util.m"
                    check_hlds__inst_util__V_24_24 = mercury__set__union_2_f_0((MR_Word) &check_hlds__inst_util_scalar_common_1[0], check_hlds__inst_util__InstVars0_19, check_hlds__inst_util__InstVarsA_11);
                  }
#line 970 "inst_util.m"
                  {
#line 970 "inst_util.m"
                    MR_Word base;
#line 970 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 970 "inst_util.m"
                    *check_hlds__inst_util__Inst_15 = base;
#line 970 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 970 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_24_24));
#line 970 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst0_20));
#line 970 "inst_util.m"
                  }
#line 970 "inst_util.m"
                }
#line 968 "inst_util.m"
              }
#line 968 "inst_util.m"
            else
#line 973 "inst_util.m"
              {
#line 973 "inst_util.m"
                MR_Word base;
#line 973 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 973 "inst_util.m"
                *check_hlds__inst_util__Inst_15 = base;
#line 973 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 973 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVarsA_11));
#line 973 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_18));
#line 973 "inst_util.m"
              }
#line 968 "inst_util.m"
          }
#line 964 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 961 "inst_util.m"
      }
#line 961 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 961 "inst_util.m"
  }
#line 956 "inst_util.m"
}

#line 940 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 940 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 940 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 940 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 940 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 940 "inst_util.m"
{
#line 945 "inst_util.m"
  {
#line 945 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 945 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "inst_util.m"
      {
#line 945 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 945 "inst_util.m"
          {
#line 945 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 945 "inst_util.m"
              {
#line 945 "inst_util.m"
                *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 945 "inst_util.m"
                *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 945 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 945 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 945 "inst_util.m"
              }
#line 945 "inst_util.m"
          }
#line 945 "inst_util.m"
      }
#line 945 "inst_util.m"
    else
#line 947 "inst_util.m"
      {
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_15;
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_16;
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__Live_17;
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__Lives_18;
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 947 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 946 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 946 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 946 "inst_util.m"
          {
#line 946 "inst_util.m"
            check_hlds__inst_util__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 946 "inst_util.m"
            check_hlds__inst_util__InstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 947 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 947 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 947 "inst_util.m"
              {
#line 947 "inst_util.m"
                check_hlds__inst_util__Live_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 947 "inst_util.m"
                check_hlds__inst_util__Lives_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 948 "inst_util.m"
                {
#line 948 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_17, check_hlds__inst_util__InstA_13, check_hlds__inst_util__InstB_15, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
                }
#line 947 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 947 "inst_util.m"
                  {
#line 950 "inst_util.m"
                    {
#line 950 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__InstsA_14, check_hlds__inst_util__InstsB_16, check_hlds__inst_util__Lives_18, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 947 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 947 "inst_util.m"
                      {
#line 947 "inst_util.m"
                        {
#line 947 "inst_util.m"
                          MR_Word base;
#line 947 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = base;
#line 947 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 947 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 947 "inst_util.m"
                        }
#line 952 "inst_util.m"
                        {
#line 952 "inst_util.m"
                          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 952 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 947 "inst_util.m"
                      }
#line 947 "inst_util.m"
                  }
#line 947 "inst_util.m"
              }
#line 946 "inst_util.m"
          }
#line 947 "inst_util.m"
      }
#line 945 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 945 "inst_util.m"
  }
#line 940 "inst_util.m"
}

#line 921 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 921 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 921 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 921 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 921 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 921 "inst_util.m"
{
#line 926 "inst_util.m"
  while (MR_TRUE)
#line 926 "inst_util.m"
    {
#line 926 "inst_util.m"
      /* tailcall optimized into a loop */
#line 926 "inst_util.m"
      {
#line 926 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 926 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 926 "inst_util.m"
          {
#line 926 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 926 "inst_util.m"
            *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 7;
#line 927 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 926 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 926 "inst_util.m"
          }
#line 926 "inst_util.m"
        else
#line 929 "inst_util.m"
          {
#line 929 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 929 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 929 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 0)));
#line 929 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 1)));

#line 931 "inst_util.m"
            {
#line 931 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_26, check_hlds__inst_util__ConsIdB_2);
            }
#line 931 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 933 "inst_util.m"
              {
#line 933 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_28;
#line 933 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 933 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;

#line 932 "inst_util.m"
                {
#line 932 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__ArgsA_27, check_hlds__inst_util__ArgsB_3, check_hlds__inst_util__LivesB_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Args_28, check_hlds__inst_util__HeadVar__7_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 933 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 933 "inst_util.m"
                  {
#line 934 "inst_util.m"
                    check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "inst_util.m"
                    {
#line 934 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_26));
#line 934 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 1) = ((MR_Box) (check_hlds__inst_util__Args_28));
#line 934 "inst_util.m"
                    }
#line 934 "inst_util.m"
                    {
#line 934 "inst_util.m"
                      MR_Word base;
#line 934 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 934 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 934 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 934 "inst_util.m"
                    }
#line 934 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 933 "inst_util.m"
                  }
#line 933 "inst_util.m"
              }
#line 931 "inst_util.m"
            else
#line 936 "inst_util.m"
              {
#line 936 "inst_util.m"
                /* direct tailcall eliminated */
#line 936 "inst_util.m"
                {
#line 936 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInstsA_18;

#line 936 "inst_util.m"
                  check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 936 "inst_util.m"
                }
#line 936 "inst_util.m"
                continue;
#line 936 "inst_util.m"
              }
#line 929 "inst_util.m"
          }
#line 926 "inst_util.m"
        return check_hlds__inst_util__succeeded;
#line 926 "inst_util.m"
      }
#line 926 "inst_util.m"
      break;
#line 926 "inst_util.m"
    }
#line 921 "inst_util.m"
}

#line 878 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 878 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 878 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 878 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 878 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 878 "inst_util.m"
{
#line 883 "inst_util.m"
  {
#line 883 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 883 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "inst_util.m"
      {
#line 883 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "inst_util.m"
          {
#line 883 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 883 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 6;
#line 884 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 883 "inst_util.m"
          }
#line 883 "inst_util.m"
        else
#line 885 "inst_util.m"
          {
#line 885 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 886 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 885 "inst_util.m"
          }
#line 883 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 883 "inst_util.m"
      }
#line 883 "inst_util.m"
    else
#line 883 "inst_util.m"
      {
#line 883 "inst_util.m"
        MR_Word check_hlds__inst_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 883 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));

#line 883 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "inst_util.m"
          {
#line 887 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 888 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 887 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 887 "inst_util.m"
          }
#line 883 "inst_util.m"
        else
#line 891 "inst_util.m"
          {
#line 891 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 891 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 891 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 0)));
#line 891 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 1)));
#line 891 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 0)));
#line 891 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 1)));

#line 894 "inst_util.m"
            {
#line 894 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
            }
#line 894 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 896 "inst_util.m"
              {
#line 896 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_41;
#line 896 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_42;
#line 896 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_43;
#line 896 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism2_44;
#line 896 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 902 "inst_util.m"
                MR_Word check_hlds__inst_util__V_50_50;
#line 902 "inst_util.m"
                MR_Word check_hlds__inst_util__V_60_60;
#line 902 "inst_util.m"
                MR_Word check_hlds__inst_util__V_45_45;

#line 895 "inst_util.m"
                {
#line 895 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__ArgsA_38, check_hlds__inst_util__ArgsB_40, check_hlds__inst_util__Live_1, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Args_41, &check_hlds__inst_util__Detism1_42, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                }
#line 896 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 896 "inst_util.m"
                  {
#line 897 "inst_util.m"
                    {
#line 897 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInstsTail_43, &check_hlds__inst_util__Detism2_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 896 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 896 "inst_util.m"
                      {
#line 902 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Integer) 0;
#line 902 "inst_util.m"
                        {
#line 902 "inst_util.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism1_42, &check_hlds__inst_util__V_45_45, &check_hlds__inst_util__V_60_60);
                        }
#line 902 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_50_50 == check_hlds__inst_util__V_60_60);
#line 902 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 903 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = check_hlds__inst_util__BoundInstsTail_43;
#line 902 "inst_util.m"
                        else
#line 905 "inst_util.m"
                          {
#line 905 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_51_51;

#line 905 "inst_util.m"
                            {
#line 905 "inst_util.m"
                              check_hlds__inst_util__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 905 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_37));
#line 905 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 1) = ((MR_Box) (check_hlds__inst_util__Args_41));
#line 905 "inst_util.m"
                            }
#line 905 "inst_util.m"
                            {
#line 905 "inst_util.m"
                              MR_Word base;
#line 905 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "inst_util.m"
                              *check_hlds__inst_util__HeadVar__5_5 = base;
#line 905 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 905 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_43));
#line 905 "inst_util.m"
                            }
#line 905 "inst_util.m"
                          }
#line 907 "inst_util.m"
                        {
#line 907 "inst_util.m"
                          parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_42, check_hlds__inst_util__Detism2_44, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 907 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 896 "inst_util.m"
                      }
#line 896 "inst_util.m"
                  }
#line 896 "inst_util.m"
              }
#line 894 "inst_util.m"
            else
#line 917 "inst_util.m"
              {
#line 917 "inst_util.m"
                MR_Word check_hlds__inst_util__V_57_57;
#line 917 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_58;
#line 909 "inst_util.m"
                MR_Word check_hlds__inst_util__V_61_61;

#line 909 "inst_util.m"
                {
#line 909 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_61_61, check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
                }
#line 909 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_61_61);
#line 909 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 910 "inst_util.m"
                  {
#line 910 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__HeadVar__3_3, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 909 "inst_util.m"
                else
#line 914 "inst_util.m"
                  {
#line 914 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 917 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 917 "inst_util.m"
                  {
#line 918 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Integer) 7;
#line 918 "inst_util.m"
                    {
#line 918 "inst_util.m"
                      parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_58, check_hlds__inst_util__V_57_57, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 918 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 917 "inst_util.m"
                  }
#line 917 "inst_util.m"
              }
#line 891 "inst_util.m"
          }
#line 883 "inst_util.m"
      }
#line 883 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 883 "inst_util.m"
  }
#line 878 "inst_util.m"
}

#line 843 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 843 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 843 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 843 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 843 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
#line 843 "inst_util.m"
{
#line 850 "inst_util.m"
  {
#line 850 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 850 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 850 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
      {
#line 856 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 856 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
#line 856 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 856 "inst_util.m"
      }
#line 850 "inst_util.m"
    else
#line 860 "inst_util.m"
      {
#line 860 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism0_16;
#line 867 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdA_17;
#line 867 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdB_19;
#line 867 "inst_util.m"
        MR_Word check_hlds__inst_util__V_26_26;
#line 867 "inst_util.m"
        MR_Word check_hlds__inst_util__V_27_27;
#line 867 "inst_util.m"
        MR_Word check_hlds__inst_util__V_28_28;
#line 867 "inst_util.m"
        MR_Word check_hlds__inst_util__V_29_29;
#line 867 "inst_util.m"
        MR_Word check_hlds__inst_util__V_18_18;
#line 868 "inst_util.m"
        MR_Word check_hlds__inst_util__V_20_20;

#line 859 "inst_util.m"
        {
#line 859 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_10, check_hlds__inst_util__BoundInstsB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__BoundInsts_13, &check_hlds__inst_util__Detism0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
        }
#line 860 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 860 "inst_util.m"
          {
#line 867 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_10)) == (MR_mktag((MR_Integer) 1)));
#line 867 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 867 "inst_util.m"
              {
#line 867 "inst_util.m"
                check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 0)));
#line 867 "inst_util.m"
                check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 1)));
#line 867 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 867 "inst_util.m"
                  {
#line 867 "inst_util.m"
                    check_hlds__inst_util__ConsIdA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 0)));
#line 867 "inst_util.m"
                    check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 1)));
#line 868 "inst_util.m"
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_11)) == (MR_mktag((MR_Integer) 1)));
#line 868 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 868 "inst_util.m"
                      {
#line 868 "inst_util.m"
                        check_hlds__inst_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 0)));
#line 868 "inst_util.m"
                        check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 1)));
#line 868 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 867 "inst_util.m"
                          {
#line 868 "inst_util.m"
                            check_hlds__inst_util__ConsIdB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 0)));
#line 868 "inst_util.m"
                            check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 1)));
#line 869 "inst_util.m"
                            {
#line 869 "inst_util.m"
                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_17, check_hlds__inst_util__ConsIdB_19);
                            }
#line 867 "inst_util.m"
                          }
#line 868 "inst_util.m"
                      }
#line 867 "inst_util.m"
                  }
#line 867 "inst_util.m"
              }
#line 866 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 871 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_16;
#line 866 "inst_util.m"
            else
#line 873 "inst_util.m"
              {
#line 873 "inst_util.m"
                MR_Word check_hlds__inst_util__MaxSoln_22;
#line 873 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;

#line 873 "inst_util.m"
                {
#line 873 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_16, &check_hlds__inst_util__V_21_21, &check_hlds__inst_util__MaxSoln_22);
                }
#line 874 "inst_util.m"
                {
#line 874 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_14, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_22);
                }
#line 873 "inst_util.m"
              }
#line 866 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 860 "inst_util.m"
          }
#line 860 "inst_util.m"
      }
#line 850 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 850 "inst_util.m"
  }
#line 843 "inst_util.m"
}

#line 718 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 718 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 718 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 718 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 718 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40)
#line 718 "inst_util.m"
{
#line 730 "inst_util.m"
  {
#line 730 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 730 "inst_util.m"
#line 730 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) {
#line 730 "inst_util.m"
      default:
#line 730 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 730 "inst_util.m"
        break;
#line 730 "inst_util.m"
      case (MR_Integer) 0:
#line 730 "inst_util.m"
#line 730 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_13)) {
#line 730 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 730 "inst_util.m"
          case (MR_Integer) 0:
#line 731 "inst_util.m"
            {
#line 731 "inst_util.m"
              MR_Word check_hlds__inst_util__ArgInsts_22;
#line 731 "inst_util.m"
              MR_Word check_hlds__inst_util__V_61_61;
#line 731 "inst_util.m"
              MR_Word check_hlds__inst_util__V_62_62;
#line 731 "inst_util.m"
              MR_Word check_hlds__inst_util__V_63_63;
#line 731 "inst_util.m"
              MR_Word check_hlds__inst_util__V_64_64;
#line 731 "inst_util.m"
              MR_Word check_hlds__inst_util__V_65_65;

#line 738 "inst_util.m"
#line 738 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 738 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 738 "inst_util.m"
                case (MR_Integer) 1:
#line 739 "inst_util.m"
                  {
#line 740 "inst_util.m"
                    check_hlds__inst_util__ArgInsts_22 = check_hlds__inst_util__ArgInstsB_15;
#line 739 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 739 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 739 "inst_util.m"
                  }
#line 738 "inst_util.m"
                  break;
#line 738 "inst_util.m"
                case (MR_Integer) 0:
#line 733 "inst_util.m"
                  {
#line 734 "inst_util.m"
                    {
#line 734 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39);
                    }
#line 733 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 733 "inst_util.m"
                      {
#line 736 "inst_util.m"
                        {
#line 736 "inst_util.m"
                          check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, &check_hlds__inst_util__ArgInsts_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                        }
#line 736 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 733 "inst_util.m"
                      }
#line 733 "inst_util.m"
                  }
#line 738 "inst_util.m"
                  break;
#line 738 "inst_util.m"
              }
#line 731 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 731 "inst_util.m"
                {
#line 743 "inst_util.m"
                  check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 743 "inst_util.m"
                  check_hlds__inst_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 744 "inst_util.m"
                  check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 745 "inst_util.m"
                  *check_hlds__inst_util__Detism_20 = (MR_Integer) 0;
#line 744 "inst_util.m"
                  {
#line 744 "inst_util.m"
                    check_hlds__inst_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 744 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_22));
#line 744 "inst_util.m"
                  }
#line 744 "inst_util.m"
                  {
#line 744 "inst_util.m"
                    check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 0) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 744 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 1) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 744 "inst_util.m"
                  }
#line 743 "inst_util.m"
                  {
#line 743 "inst_util.m"
                    MR_Word base;
#line 743 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 743 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 743 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 743 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_61_61));
#line 743 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_62_62));
#line 743 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 743 "inst_util.m"
                  }
#line 743 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 731 "inst_util.m"
                }
#line 731 "inst_util.m"
            }
#line 730 "inst_util.m"
            break;
#line 730 "inst_util.m"
          case (MR_Integer) 1:
#line 727 "inst_util.m"
            {
#line 728 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 729 "inst_util.m"
              *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 727 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 727 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 727 "inst_util.m"
            }
#line 730 "inst_util.m"
            break;
#line 730 "inst_util.m"
        }
#line 730 "inst_util.m"
        break;
#line 730 "inst_util.m"
      case (MR_Integer) 2:
#line 747 "inst_util.m"
        {
#line 747 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 0)));
#line 747 "inst_util.m"
          MR_Word check_hlds__inst_util__V_56_56;
#line 747 "inst_util.m"
          MR_Word check_hlds__inst_util__V_57_57;
#line 747 "inst_util.m"
          MR_Word check_hlds__inst_util__V_58_58;
#line 747 "inst_util.m"
          MR_Word check_hlds__inst_util__V_59_59;
#line 747 "inst_util.m"
          MR_Word check_hlds__inst_util__ArgInsts_66;
#line 747 "inst_util.m"
          MR_Word check_hlds__inst_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));

#line 750 "inst_util.m"
          {
#line 750 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__Type_18);
          }
#line 750 "inst_util.m"
          check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 747 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 747 "inst_util.m"
            {
#line 755 "inst_util.m"
#line 755 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 755 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 755 "inst_util.m"
                case (MR_Integer) 1:
#line 757 "inst_util.m"
                  {
#line 757 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 755 "inst_util.m"
                  break;
#line 755 "inst_util.m"
                case (MR_Integer) 0:
#line 753 "inst_util.m"
                  {
#line 753 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 755 "inst_util.m"
                  break;
#line 755 "inst_util.m"
              }
#line 747 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 747 "inst_util.m"
                {
#line 761 "inst_util.m"
                  check_hlds__inst_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "inst_util.m"
                  check_hlds__inst_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "inst_util.m"
                  {
#line 762 "inst_util.m"
                    check_hlds__inst_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 762 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_66));
#line 762 "inst_util.m"
                  }
#line 762 "inst_util.m"
                  {
#line 762 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 0) = ((MR_Box) (check_hlds__inst_util__V_58_58));
#line 762 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 1) = ((MR_Box) (check_hlds__inst_util__V_59_59));
#line 762 "inst_util.m"
                  }
#line 761 "inst_util.m"
                  {
#line 761 "inst_util.m"
                    MR_Word base;
#line 761 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 761 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 761 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 761 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_23));
#line 761 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_56_56));
#line 761 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 761 "inst_util.m"
                  }
#line 761 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 747 "inst_util.m"
                }
#line 747 "inst_util.m"
            }
#line 747 "inst_util.m"
        }
#line 730 "inst_util.m"
        break;
#line 730 "inst_util.m"
      case (MR_Integer) 3:
#line 730 "inst_util.m"
#line 730 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) {
#line 730 "inst_util.m"
          default:
#line 730 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 730 "inst_util.m"
            break;
#line 730 "inst_util.m"
          case (MR_Integer) 0:
#line 764 "inst_util.m"
            {
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 3)));
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_28;
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__V_53_53;
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResultsA_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 769 "inst_util.m"
#line 769 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 769 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 769 "inst_util.m"
                case (MR_Integer) 1:
#line 770 "inst_util.m"
                  {
#line 770 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_29;
#line 770 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_48_48;

#line 771 "inst_util.m"
                    {
#line 771 "inst_util.m"
                      check_hlds__inst_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 771 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (check_hlds__inst_util__ArgInstsB_15));
#line 771 "inst_util.m"
                    }
#line 771 "inst_util.m"
                    {
#line 771 "inst_util.m"
                      check_hlds__inst_util__BoundInstsB_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 0) = ((MR_Box) (check_hlds__inst_util__V_48_48));
#line 771 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "inst_util.m"
                    }
#line 850 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
                      {
#line 856 "inst_util.m"
                        check_hlds__inst_util__BoundInsts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "inst_util.m"
                        *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 856 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 856 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 856 "inst_util.m"
                      }
#line 850 "inst_util.m"
                    else
#line 860 "inst_util.m"
                      {
#line 860 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism0_78;
#line 867 "inst_util.m"
                        MR_Word check_hlds__inst_util__ConsIdA_79;
#line 867 "inst_util.m"
                        MR_Word check_hlds__inst_util__ConsIdB_81;
#line 867 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_86_86;
#line 867 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_87_87;
#line 867 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_88_88;
#line 867 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_89_89;
#line 867 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_80_80;
#line 868 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_82_82;

#line 859 "inst_util.m"
                        {
#line 859 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0((MR_Integer) 1, check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__BoundInstsB_29, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, &check_hlds__inst_util__Detism0_78, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                        }
#line 860 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 860 "inst_util.m"
                          {
#line 867 "inst_util.m"
                            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_27)) == (MR_mktag((MR_Integer) 1)));
#line 867 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 867 "inst_util.m"
                              {
#line 867 "inst_util.m"
                                check_hlds__inst_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 0)));
#line 867 "inst_util.m"
                                check_hlds__inst_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 1)));
#line 867 "inst_util.m"
                                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "inst_util.m"
                                if (check_hlds__inst_util__succeeded)
#line 867 "inst_util.m"
                                  {
#line 867 "inst_util.m"
                                    check_hlds__inst_util__ConsIdA_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 0)));
#line 867 "inst_util.m"
                                    check_hlds__inst_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 1)));
#line 868 "inst_util.m"
                                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_29)) == (MR_mktag((MR_Integer) 1)));
#line 868 "inst_util.m"
                                    if (check_hlds__inst_util__succeeded)
#line 868 "inst_util.m"
                                      {
#line 868 "inst_util.m"
                                        check_hlds__inst_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 0)));
#line 868 "inst_util.m"
                                        check_hlds__inst_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 1)));
#line 868 "inst_util.m"
                                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "inst_util.m"
                                        if (check_hlds__inst_util__succeeded)
#line 867 "inst_util.m"
                                          {
#line 868 "inst_util.m"
                                            check_hlds__inst_util__ConsIdB_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 0)));
#line 868 "inst_util.m"
                                            check_hlds__inst_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 1)));
#line 869 "inst_util.m"
                                            {
#line 869 "inst_util.m"
                                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_79, check_hlds__inst_util__ConsIdB_81);
                                            }
#line 867 "inst_util.m"
                                          }
#line 868 "inst_util.m"
                                      }
#line 867 "inst_util.m"
                                  }
#line 867 "inst_util.m"
                              }
#line 866 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 871 "inst_util.m"
                              *check_hlds__inst_util__Detism_20 = check_hlds__inst_util__Detism0_78;
#line 866 "inst_util.m"
                            else
#line 873 "inst_util.m"
                              {
#line 873 "inst_util.m"
                                MR_Word check_hlds__inst_util__MaxSoln_84;
#line 873 "inst_util.m"
                                MR_Word check_hlds__inst_util__V_83_83;

#line 873 "inst_util.m"
                                {
#line 873 "inst_util.m"
                                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_78, &check_hlds__inst_util__V_83_83, &check_hlds__inst_util__MaxSoln_84);
                                }
#line 874 "inst_util.m"
                                {
#line 874 "inst_util.m"
                                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_20, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_84);
                                }
#line 873 "inst_util.m"
                              }
#line 866 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 860 "inst_util.m"
                          }
#line 860 "inst_util.m"
                      }
#line 770 "inst_util.m"
                  }
#line 769 "inst_util.m"
                  break;
#line 769 "inst_util.m"
                case (MR_Integer) 0:
#line 767 "inst_util.m"
                  {
#line 767 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 769 "inst_util.m"
                  break;
#line 769 "inst_util.m"
              }
#line 764 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 764 "inst_util.m"
                {
#line 776 "inst_util.m"
                  check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "inst_util.m"
                  {
#line 776 "inst_util.m"
                    MR_Word base;
#line 776 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 776 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 776 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 776 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_25));
#line 776 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 776 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_28));
#line 776 "inst_util.m"
                  }
#line 776 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 764 "inst_util.m"
                }
#line 764 "inst_util.m"
            }
#line 730 "inst_util.m"
            break;
#line 730 "inst_util.m"
          case (MR_Integer) 1:
#line 778 "inst_util.m"
            {
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__V_44_44;
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__V_45_45;
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__V_46_46;
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__V_47_47;
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__ArgInsts_67;
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 783 "inst_util.m"
#line 783 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 783 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 783 "inst_util.m"
                case (MR_Integer) 1:
#line 785 "inst_util.m"
                  {
#line 785 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 783 "inst_util.m"
                  break;
#line 783 "inst_util.m"
                case (MR_Integer) 0:
#line 781 "inst_util.m"
                  {
#line 781 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 783 "inst_util.m"
                  break;
#line 783 "inst_util.m"
              }
#line 778 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 778 "inst_util.m"
                {
#line 789 "inst_util.m"
                  check_hlds__inst_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 790 "inst_util.m"
                  check_hlds__inst_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 790 "inst_util.m"
                  {
#line 790 "inst_util.m"
                    check_hlds__inst_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 790 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_67));
#line 790 "inst_util.m"
                  }
#line 790 "inst_util.m"
                  {
#line 790 "inst_util.m"
                    check_hlds__inst_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 0) = ((MR_Box) (check_hlds__inst_util__V_46_46));
#line 790 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 1) = ((MR_Box) (check_hlds__inst_util__V_47_47));
#line 790 "inst_util.m"
                  }
#line 789 "inst_util.m"
                  {
#line 789 "inst_util.m"
                    MR_Word base;
#line 789 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 789 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 789 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 789 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_68));
#line 789 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_44_44));
#line 789 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_45_45));
#line 789 "inst_util.m"
                  }
#line 789 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 778 "inst_util.m"
                }
#line 778 "inst_util.m"
            }
#line 730 "inst_util.m"
            break;
#line 730 "inst_util.m"
          case (MR_Integer) 3:
#line 792 "inst_util.m"
            {
#line 792 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 792 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInstA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));
#line 792 "inst_util.m"
              MR_Word check_hlds__inst_util__Inst0_33;

#line 793 "inst_util.m"
              {
#line 793 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__SubInstA_32, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, &check_hlds__inst_util__Inst0_33, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
              }
#line 792 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 792 "inst_util.m"
                {
#line 795 "inst_util.m"
                  {
#line 795 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_33, check_hlds__inst_util__SubInstA_32, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 795 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 797 "inst_util.m"
                    {
#line 797 "inst_util.m"
                      MR_Word base;
#line 797 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 797 "inst_util.m"
                      *check_hlds__inst_util__Inst_19 = base;
#line 797 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 797 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_31));
#line 797 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_33));
#line 797 "inst_util.m"
                    }
#line 795 "inst_util.m"
                  else
#line 811 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = check_hlds__inst_util__Inst0_33;
#line 795 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 792 "inst_util.m"
                }
#line 792 "inst_util.m"
            }
#line 730 "inst_util.m"
            break;
#line 730 "inst_util.m"
        }
#line 730 "inst_util.m"
        break;
#line 730 "inst_util.m"
    }
#line 730 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 730 "inst_util.m"
  }
#line 718 "inst_util.m"
}

#line 697 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 697 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 697 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 697 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 697 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 697 "inst_util.m"
{
#line 701 "inst_util.m"
  {
#line 701 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 701 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "inst_util.m"
      {
#line 701 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 701 "inst_util.m"
          {
#line 701 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 701 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 701 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 701 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 701 "inst_util.m"
          }
#line 701 "inst_util.m"
      }
#line 701 "inst_util.m"
    else
#line 703 "inst_util.m"
      {
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_16;
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_17;
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 703 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 702 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 702 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 702 "inst_util.m"
          {
#line 702 "inst_util.m"
            check_hlds__inst_util__InstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 702 "inst_util.m"
            check_hlds__inst_util__InstsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 704 "inst_util.m"
            {
#line 704 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_3, check_hlds__inst_util__InstA_14, check_hlds__inst_util__InstB_16, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
#line 703 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 703 "inst_util.m"
              {
#line 706 "inst_util.m"
                {
#line 706 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__InstsA_15, check_hlds__inst_util__InstsB_17, check_hlds__inst_util__Live_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                }
#line 703 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 703 "inst_util.m"
                  {
#line 703 "inst_util.m"
                    {
#line 703 "inst_util.m"
                      MR_Word base;
#line 703 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__5_5 = base;
#line 703 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 703 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 703 "inst_util.m"
                    }
#line 708 "inst_util.m"
                    {
#line 708 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 708 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 703 "inst_util.m"
                  }
#line 703 "inst_util.m"
              }
#line 702 "inst_util.m"
          }
#line 703 "inst_util.m"
      }
#line 701 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 701 "inst_util.m"
  }
#line 697 "inst_util.m"
}

#line 280 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 280 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 280 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 280 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 280 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64)
#line 280 "inst_util.m"
{
#line 290 "inst_util.m"
  {
#line 290 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 290 "inst_util.m"
#line 290 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) {
#line 290 "inst_util.m"
      default:
#line 290 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 290 "inst_util.m"
        break;
#line 290 "inst_util.m"
      case (MR_Integer) 0:
#line 290 "inst_util.m"
#line 290 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_10)) {
#line 290 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 290 "inst_util.m"
          case (MR_Integer) 0:
#line 348 "inst_util.m"
#line 348 "inst_util.m"
            switch (check_hlds__inst_util__Live_9) {
#line 348 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 348 "inst_util.m"
              case (MR_Integer) 1:
#line 349 "inst_util.m"
                {
#line 350 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstB_11;
#line 351 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 349 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 349 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 349 "inst_util.m"
                }
#line 348 "inst_util.m"
                break;
#line 348 "inst_util.m"
              case (MR_Integer) 0:
#line 299 "inst_util.m"
#line 299 "inst_util.m"
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 299 "inst_util.m"
                  default:
#line 299 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 299 "inst_util.m"
                    break;
#line 299 "inst_util.m"
                  case (MR_Integer) 0:
#line 299 "inst_util.m"
#line 299 "inst_util.m"
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 299 "inst_util.m"
                      default:
#line 299 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 299 "inst_util.m"
                        break;
#line 299 "inst_util.m"
                      case (MR_Integer) 1:
#line 296 "inst_util.m"
                        {
#line 297 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 298 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 296 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 296 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 296 "inst_util.m"
                        }
#line 299 "inst_util.m"
                        break;
#line 299 "inst_util.m"
                    }
#line 299 "inst_util.m"
                    break;
#line 299 "inst_util.m"
                  case (MR_Integer) 2:
#line 324 "inst_util.m"
                    {
#line 324 "inst_util.m"
                      MR_Word check_hlds__inst_util__HOInstInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 324 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 324 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_116;

#line 325 "inst_util.m"
                      {
#line 325 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_115, &check_hlds__inst_util__Uniq_116);
                      }
#line 324 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 324 "inst_util.m"
                        {
#line 327 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 324 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 326 "inst_util.m"
                          {
#line 326 "inst_util.m"
                            MR_Word base;
#line 326 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 326 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_116));
#line 326 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_22));
#line 326 "inst_util.m"
                          }
#line 326 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 324 "inst_util.m"
                        }
#line 324 "inst_util.m"
                    }
#line 299 "inst_util.m"
                    break;
#line 299 "inst_util.m"
                  case (MR_Integer) 3:
#line 299 "inst_util.m"
#line 299 "inst_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 299 "inst_util.m"
                      default:
#line 299 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 299 "inst_util.m"
                        break;
#line 299 "inst_util.m"
                      case (MR_Integer) 0:
#line 303 "inst_util.m"
                        {
#line 303 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 303 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstResultsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 303 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInstsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 303 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_19;
#line 303 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInsts_20;

#line 304 "inst_util.m"
                          {
#line 304 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_16, &check_hlds__inst_util__Uniq_19);
                          }
#line 303 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 303 "inst_util.m"
                            {
#line 306 "inst_util.m"
                              {
#line 306 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_17, check_hlds__inst_util__BoundInstsB_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                              }
#line 303 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 303 "inst_util.m"
                                {
#line 310 "inst_util.m"
#line 310 "inst_util.m"
                                  switch (check_hlds__inst_util__UniqB_16) {
#line 310 "inst_util.m"
                                    default:
#line 310 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 310 "inst_util.m"
                                      break;
#line 310 "inst_util.m"
                                    case (MR_Integer) 2:
#line 310 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 310 "inst_util.m"
                                      break;
#line 310 "inst_util.m"
                                    case (MR_Integer) 1:
#line 310 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 310 "inst_util.m"
                                      break;
#line 310 "inst_util.m"
                                  }
#line 310 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 311 "inst_util.m"
                                    {
#line 311 "inst_util.m"
                                      check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsB_18, &check_hlds__inst_util__BoundInsts_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                    }
#line 310 "inst_util.m"
                                  else
#line 314 "inst_util.m"
                                    {
#line 314 "inst_util.m"
                                      check_hlds__inst_util__BoundInsts_20 = check_hlds__inst_util__BoundInstsB_18;
#line 314 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 314 "inst_util.m"
                                    }
#line 317 "inst_util.m"
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 316 "inst_util.m"
                                  {
#line 316 "inst_util.m"
                                    MR_Word base;
#line 316 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 316 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 316 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 316 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_19));
#line 316 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_17));
#line 316 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_20));
#line 316 "inst_util.m"
                                  }
#line 316 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 303 "inst_util.m"
                                }
#line 303 "inst_util.m"
                            }
#line 303 "inst_util.m"
                        }
#line 299 "inst_util.m"
                        break;
#line 299 "inst_util.m"
                      case (MR_Integer) 1:
#line 319 "inst_util.m"
                        {
#line 319 "inst_util.m"
                          MR_Word check_hlds__inst_util__HOInstInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 319 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 319 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_114;

#line 320 "inst_util.m"
                          {
#line 320 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_113, &check_hlds__inst_util__Uniq_114);
                          }
#line 319 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 319 "inst_util.m"
                            {
#line 322 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 319 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 321 "inst_util.m"
                              {
#line 321 "inst_util.m"
                                MR_Word base;
#line 321 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 321 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 321 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 321 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_114));
#line 321 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoB_21));
#line 321 "inst_util.m"
                              }
#line 321 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 319 "inst_util.m"
                            }
#line 319 "inst_util.m"
                        }
#line 299 "inst_util.m"
                        break;
#line 299 "inst_util.m"
                      case (MR_Integer) 3:
#line 329 "inst_util.m"
                        {
#line 329 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 329 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 330 "inst_util.m"
                          {
#line 330 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_23, check_hlds__inst_util__SubInstB_24, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 329 "inst_util.m"
                        }
#line 299 "inst_util.m"
                        break;
#line 299 "inst_util.m"
                    }
#line 299 "inst_util.m"
                    break;
#line 299 "inst_util.m"
                }
#line 348 "inst_util.m"
                break;
#line 348 "inst_util.m"
            }
#line 290 "inst_util.m"
            break;
#line 290 "inst_util.m"
          case (MR_Integer) 1:
#line 287 "inst_util.m"
            {
#line 288 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 289 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 287 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 287 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 287 "inst_util.m"
            }
#line 290 "inst_util.m"
            break;
#line 290 "inst_util.m"
        }
#line 290 "inst_util.m"
        break;
#line 290 "inst_util.m"
      case (MR_Integer) 2:
#line 545 "inst_util.m"
        {
#line 545 "inst_util.m"
          MR_Word check_hlds__inst_util__UniqA_298 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 0)));
#line 545 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfoA_303 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 550 "inst_util.m"
          if ((check_hlds__inst_util__HOInstInfoA_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "inst_util.m"
            {
#line 548 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
#line 550 "inst_util.m"
          else
#line 557 "inst_util.m"
#line 557 "inst_util.m"
            switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 557 "inst_util.m"
              default:
#line 557 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 557 "inst_util.m"
                break;
#line 557 "inst_util.m"
              case (MR_Integer) 0:
#line 557 "inst_util.m"
#line 557 "inst_util.m"
                switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 557 "inst_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 557 "inst_util.m"
                  case (MR_Integer) 0:
#line 558 "inst_util.m"
                    {
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_224;

#line 562 "inst_util.m"
#line 562 "inst_util.m"
                      switch (check_hlds__inst_util__Live_9) {
#line 562 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 562 "inst_util.m"
                        case (MR_Integer) 1:
#line 564 "inst_util.m"
                          {
#line 564 "inst_util.m"
                            check_hlds__inst_util__Uniq_224 = check_hlds__inst_util__UniqA_298;
#line 564 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 564 "inst_util.m"
                          }
#line 562 "inst_util.m"
                          break;
#line 562 "inst_util.m"
                        case (MR_Integer) 0:
#line 560 "inst_util.m"
                          {
#line 561 "inst_util.m"
                            {
#line 561 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, &check_hlds__inst_util__Uniq_224);
                            }
#line 560 "inst_util.m"
                          }
#line 562 "inst_util.m"
                          break;
#line 562 "inst_util.m"
                      }
#line 558 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 558 "inst_util.m"
                        {
#line 567 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 558 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 566 "inst_util.m"
                          {
#line 566 "inst_util.m"
                            MR_Word base;
#line 566 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 566 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_224));
#line 566 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 566 "inst_util.m"
                          }
#line 566 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 558 "inst_util.m"
                        }
#line 558 "inst_util.m"
                    }
#line 557 "inst_util.m"
                    break;
#line 557 "inst_util.m"
                  case (MR_Integer) 1:
#line 554 "inst_util.m"
                    {
#line 555 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 556 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 554 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 554 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 554 "inst_util.m"
                    }
#line 557 "inst_util.m"
                    break;
#line 557 "inst_util.m"
                }
#line 557 "inst_util.m"
                break;
#line 557 "inst_util.m"
              case (MR_Integer) 2:
#line 587 "inst_util.m"
                {
#line 587 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_67_67;
#line 587 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_237;
#line 587 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_238;
#line 587 "inst_util.m"
                  MR_Word check_hlds__inst_util___HOInstInfoB_236;

#line 593 "inst_util.m"
#line 593 "inst_util.m"
                  switch (check_hlds__inst_util__Live_9) {
#line 593 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 593 "inst_util.m"
                    case (MR_Integer) 1:
#line 594 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 593 "inst_util.m"
                      break;
#line 593 "inst_util.m"
                    case (MR_Integer) 0:
#line 592 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 593 "inst_util.m"
                      break;
#line 593 "inst_util.m"
                  }
#line 587 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 587 "inst_util.m"
                    {
#line 587 "inst_util.m"
                      check_hlds__inst_util__UniqB_237 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 587 "inst_util.m"
                      check_hlds__inst_util___HOInstInfoB_236 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 596 "inst_util.m"
                      check_hlds__inst_util__V_67_67 = (MR_Integer) 1;
#line 596 "inst_util.m"
                      {
#line 596 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_67_67, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_237, &check_hlds__inst_util__Uniq_238);
                      }
#line 587 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 587 "inst_util.m"
                        {
#line 598 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 587 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 597 "inst_util.m"
                          {
#line 597 "inst_util.m"
                            MR_Word base;
#line 597 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 597 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_238));
#line 597 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 597 "inst_util.m"
                          }
#line 597 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 587 "inst_util.m"
                        }
#line 587 "inst_util.m"
                    }
#line 587 "inst_util.m"
                }
#line 557 "inst_util.m"
                break;
#line 557 "inst_util.m"
              case (MR_Integer) 3:
#line 557 "inst_util.m"
#line 557 "inst_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 557 "inst_util.m"
                  default:
#line 557 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 557 "inst_util.m"
                    break;
#line 557 "inst_util.m"
                  case (MR_Integer) 0:
#line 569 "inst_util.m"
                    {
#line 569 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_71_71;
#line 569 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_72_72;
#line 569 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 569 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInstsB_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 569 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_228;
#line 569 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInsts_229;
#line 569 "inst_util.m"
                      MR_Word check_hlds__inst_util__Detism1_231;
#line 569 "inst_util.m"
                      MR_Word check_hlds__inst_util___InstResultsB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 571 "inst_util.m"
                      {
#line 571 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_226, &check_hlds__inst_util__Uniq_228);
                      }
#line 569 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 569 "inst_util.m"
                        {
#line 572 "inst_util.m"
                          {
#line 572 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_227, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_229, &check_hlds__inst_util__Detism1_231, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 569 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 569 "inst_util.m"
                            {
#line 576 "inst_util.m"
                              check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 577 "inst_util.m"
                              check_hlds__inst_util__V_72_72 = (MR_Integer) 1;
#line 576 "inst_util.m"
                              {
#line 576 "inst_util.m"
                                MR_Word base;
#line 576 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 576 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 576 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 576 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_228));
#line 576 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 576 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_229));
#line 576 "inst_util.m"
                              }
#line 577 "inst_util.m"
                              {
#line 577 "inst_util.m"
                                parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_231, check_hlds__inst_util__V_72_72, check_hlds__inst_util__Detism_14);
                              }
#line 577 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 569 "inst_util.m"
                            }
#line 569 "inst_util.m"
                        }
#line 569 "inst_util.m"
                    }
#line 557 "inst_util.m"
                    break;
#line 557 "inst_util.m"
                  case (MR_Integer) 1:
#line 579 "inst_util.m"
                    {
#line 579 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_68_68;
#line 579 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_233;
#line 579 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_234;
#line 579 "inst_util.m"
                      MR_Word check_hlds__inst_util___HOInstInfoB_232;

#line 582 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 579 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 579 "inst_util.m"
                        {
#line 579 "inst_util.m"
                          check_hlds__inst_util__UniqB_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 579 "inst_util.m"
                          check_hlds__inst_util___HOInstInfoB_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 583 "inst_util.m"
                          check_hlds__inst_util__V_68_68 = (MR_Integer) 1;
#line 583 "inst_util.m"
                          {
#line 583 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_68_68, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_233, &check_hlds__inst_util__Uniq_234);
                          }
#line 579 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 579 "inst_util.m"
                            {
#line 585 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 579 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 584 "inst_util.m"
                              {
#line 584 "inst_util.m"
                                MR_Word base;
#line 584 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 584 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 584 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 584 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_234));
#line 584 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 584 "inst_util.m"
                              }
#line 584 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 579 "inst_util.m"
                            }
#line 579 "inst_util.m"
                        }
#line 579 "inst_util.m"
                    }
#line 557 "inst_util.m"
                    break;
#line 557 "inst_util.m"
                  case (MR_Integer) 3:
#line 600 "inst_util.m"
                    {
#line 600 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstVarsB_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 600 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInstB_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 601 "inst_util.m"
                      {
#line 601 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_240, check_hlds__inst_util__SubInstB_241, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                      }
#line 600 "inst_util.m"
                    }
#line 557 "inst_util.m"
                    break;
#line 557 "inst_util.m"
                }
#line 557 "inst_util.m"
                break;
#line 557 "inst_util.m"
            }
#line 545 "inst_util.m"
        }
#line 290 "inst_util.m"
        break;
#line 290 "inst_util.m"
      case (MR_Integer) 3:
#line 290 "inst_util.m"
#line 290 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) {
#line 290 "inst_util.m"
          default:
#line 290 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 290 "inst_util.m"
            break;
#line 290 "inst_util.m"
          case (MR_Integer) 0:
#line 354 "inst_util.m"
            {
#line 354 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 354 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResultsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 354 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 3)));

#line 360 "inst_util.m"
#line 360 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 360 "inst_util.m"
                default:
#line 360 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 360 "inst_util.m"
                  break;
#line 360 "inst_util.m"
                case (MR_Integer) 0:
#line 360 "inst_util.m"
#line 360 "inst_util.m"
                  switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 360 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 360 "inst_util.m"
                    case (MR_Integer) 0:
#line 361 "inst_util.m"
                      {
#line 361 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_117;
#line 361 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_118;

#line 370 "inst_util.m"
#line 370 "inst_util.m"
                        switch (check_hlds__inst_util__Live_9) {
#line 370 "inst_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 370 "inst_util.m"
                          case (MR_Integer) 1:
#line 371 "inst_util.m"
                            {
#line 373 "inst_util.m"
                              {
#line 373 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, check_hlds__inst_util__UniqA_30, (MR_Integer) 1, &check_hlds__inst_util__Uniq_117);
                              }
#line 371 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 371 "inst_util.m"
                                {
#line 374 "inst_util.m"
                                  check_hlds__inst_util__BoundInsts_118 = check_hlds__inst_util__BoundInstsA_32;
#line 371 "inst_util.m"
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 371 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 371 "inst_util.m"
                                }
#line 371 "inst_util.m"
                            }
#line 370 "inst_util.m"
                            break;
#line 370 "inst_util.m"
                          case (MR_Integer) 0:
#line 363 "inst_util.m"
                            {
#line 364 "inst_util.m"
                              {
#line 364 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, &check_hlds__inst_util__Uniq_117);
                              }
#line 363 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 363 "inst_util.m"
                                {
#line 366 "inst_util.m"
                                  {
#line 366 "inst_util.m"
                                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_31, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                                  }
#line 363 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 363 "inst_util.m"
                                    {
#line 368 "inst_util.m"
                                      {
#line 368 "inst_util.m"
                                        check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsA_32, &check_hlds__inst_util__BoundInsts_118, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
#line 368 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 363 "inst_util.m"
                                    }
#line 363 "inst_util.m"
                                }
#line 363 "inst_util.m"
                            }
#line 370 "inst_util.m"
                            break;
#line 370 "inst_util.m"
                        }
#line 361 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 361 "inst_util.m"
                          {
#line 377 "inst_util.m"
                            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 376 "inst_util.m"
                            {
#line 376 "inst_util.m"
                              MR_Word base;
#line 376 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 376 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 376 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 376 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_117));
#line 376 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 376 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_118));
#line 376 "inst_util.m"
                            }
#line 376 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 361 "inst_util.m"
                          }
#line 361 "inst_util.m"
                      }
#line 360 "inst_util.m"
                      break;
#line 360 "inst_util.m"
                    case (MR_Integer) 1:
#line 357 "inst_util.m"
                      {
#line 358 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 359 "inst_util.m"
                        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 357 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 357 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 357 "inst_util.m"
                      }
#line 360 "inst_util.m"
                      break;
#line 360 "inst_util.m"
                  }
#line 360 "inst_util.m"
                  break;
#line 360 "inst_util.m"
                case (MR_Integer) 2:
#line 415 "inst_util.m"
                  {
#line 415 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_87_87;
#line 415 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_89_89;
#line 415 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_90_90;
#line 415 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 415 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_132;
#line 415 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInsts_133;
#line 415 "inst_util.m"
                    MR_Word check_hlds__inst_util__Detism1_134;
#line 415 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 416 "inst_util.m"
                    {
#line 416 "inst_util.m"
                      check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                    }
#line 417 "inst_util.m"
                    {
#line 417 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_131, &check_hlds__inst_util__Uniq_132);
                    }
#line 415 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 415 "inst_util.m"
                      {
#line 419 "inst_util.m"
                        check_hlds__inst_util__V_87_87 = (MR_Integer) 0;
#line 419 "inst_util.m"
                        {
#line 419 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__V_87_87, check_hlds__inst_util__UniqB_131, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_133, &check_hlds__inst_util__Detism1_134, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 415 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 415 "inst_util.m"
                          {
#line 422 "inst_util.m"
                            check_hlds__inst_util__V_89_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 423 "inst_util.m"
                            check_hlds__inst_util__V_90_90 = (MR_Integer) 1;
#line 422 "inst_util.m"
                            {
#line 422 "inst_util.m"
                              MR_Word base;
#line 422 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 422 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 422 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 422 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_132));
#line 422 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_89_89));
#line 422 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_133));
#line 422 "inst_util.m"
                            }
#line 423 "inst_util.m"
                            {
#line 423 "inst_util.m"
                              parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_134, check_hlds__inst_util__V_90_90, check_hlds__inst_util__Detism_14);
                            }
#line 423 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 415 "inst_util.m"
                          }
#line 415 "inst_util.m"
                      }
#line 415 "inst_util.m"
                  }
#line 360 "inst_util.m"
                  break;
#line 360 "inst_util.m"
                case (MR_Integer) 3:
#line 360 "inst_util.m"
#line 360 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 360 "inst_util.m"
                    default:
#line 360 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 360 "inst_util.m"
                      break;
#line 360 "inst_util.m"
                    case (MR_Integer) 0:
#line 379 "inst_util.m"
                      {
#line 379 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_96_96;
#line 379 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 379 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 379 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_121;
#line 379 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_122;
#line 379 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 380 "inst_util.m"
                        {
#line 380 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__BoundInstsB_120, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_122, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 379 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 379 "inst_util.m"
                          {
#line 382 "inst_util.m"
                            {
#line 382 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, *check_hlds__inst_util__Detism_14, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_119, &check_hlds__inst_util__Uniq_121);
                            }
#line 379 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 379 "inst_util.m"
                              {
#line 384 "inst_util.m"
                                check_hlds__inst_util__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "inst_util.m"
                                {
#line 384 "inst_util.m"
                                  MR_Word base;
#line 384 "inst_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 384 "inst_util.m"
                                  *check_hlds__inst_util__Inst_13 = base;
#line 384 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 384 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_121));
#line 384 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_96_96));
#line 384 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_122));
#line 384 "inst_util.m"
                                }
#line 384 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 379 "inst_util.m"
                              }
#line 379 "inst_util.m"
                          }
#line 379 "inst_util.m"
                      }
#line 360 "inst_util.m"
                      break;
#line 360 "inst_util.m"
                    case (MR_Integer) 1:
#line 386 "inst_util.m"
                      {
#line 386 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism1_35;
#line 386 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_94_94;
#line 386 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 386 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_129;
#line 386 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 387 "inst_util.m"
                        {
#line 387 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_128, &check_hlds__inst_util__Uniq_129);
                        }
#line 386 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 386 "inst_util.m"
                          {
#line 392 "inst_util.m"
#line 392 "inst_util.m"
                            switch (MR_tag((MR_Word) check_hlds__inst_util__InstResultsA_31)) {
#line 392 "inst_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 392 "inst_util.m"
                              case (MR_Integer) 0:
#line 392 "inst_util.m"
#line 392 "inst_util.m"
                                switch (MR_unmkbody(check_hlds__inst_util__InstResultsA_31)) {
#line 392 "inst_util.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 392 "inst_util.m"
                                  case (MR_Integer) 0:
#line 408 "inst_util.m"
                                    {
#line 408 "inst_util.m"
                                      MR_Word check_hlds__inst_util__BoundInsts_126;

#line 409 "inst_util.m"
                                      {
#line 409 "inst_util.m"
                                        check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_126, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
#line 408 "inst_util.m"
                                      if (check_hlds__inst_util__succeeded)
#line 408 "inst_util.m"
                                        {
#line 411 "inst_util.m"
                                          {
#line 411 "inst_util.m"
                                            MR_Word base;
#line 411 "inst_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 411 "inst_util.m"
                                            *check_hlds__inst_util__Inst_13 = base;
#line 411 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 411 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 411 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 411 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_126));
#line 411 "inst_util.m"
                                          }
#line 411 "inst_util.m"
                                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 408 "inst_util.m"
                                        }
#line 408 "inst_util.m"
                                    }
#line 392 "inst_util.m"
                                    break;
#line 392 "inst_util.m"
                                  case (MR_Integer) 1:
#line 389 "inst_util.m"
                                    {
#line 390 "inst_util.m"
                                      *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 391 "inst_util.m"
                                      check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 389 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 389 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 389 "inst_util.m"
                                    }
#line 392 "inst_util.m"
                                    break;
#line 392 "inst_util.m"
                                }
#line 392 "inst_util.m"
                                break;
#line 392 "inst_util.m"
                              case (MR_Integer) 1:
#line 394 "inst_util.m"
                                {
#line 394 "inst_util.m"
                                  MR_Word check_hlds__inst_util__GroundnessResultA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 0)));
#line 393 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 1)));
#line 393 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 2)));
#line 393 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 3)));
#line 393 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 4)));
#line 393 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 5)));

#line 399 "inst_util.m"
#line 399 "inst_util.m"
                                  switch (check_hlds__inst_util__GroundnessResultA_36) {
#line 399 "inst_util.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 399 "inst_util.m"
                                    case (MR_Integer) 2:
#line 399 "inst_util.m"
                                    case (MR_Integer) 0:
#line 402 "inst_util.m"
                                      {
#line 402 "inst_util.m"
                                        MR_Word check_hlds__inst_util__BoundInsts_123;

#line 403 "inst_util.m"
                                        {
#line 403 "inst_util.m"
                                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_123, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                        }
#line 402 "inst_util.m"
                                        if (check_hlds__inst_util__succeeded)
#line 402 "inst_util.m"
                                          {
#line 405 "inst_util.m"
                                            {
#line 405 "inst_util.m"
                                              MR_Word base;
#line 405 "inst_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 405 "inst_util.m"
                                              *check_hlds__inst_util__Inst_13 = base;
#line 405 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 405 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 405 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 405 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_123));
#line 405 "inst_util.m"
                                            }
#line 405 "inst_util.m"
                                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 402 "inst_util.m"
                                          }
#line 402 "inst_util.m"
                                      }
#line 399 "inst_util.m"
                                      break;
#line 399 "inst_util.m"
                                    case (MR_Integer) 1:
#line 396 "inst_util.m"
                                      {
#line 397 "inst_util.m"
                                        *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 398 "inst_util.m"
                                        check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 396 "inst_util.m"
                                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 396 "inst_util.m"
                                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 396 "inst_util.m"
                                      }
#line 399 "inst_util.m"
                                      break;
#line 399 "inst_util.m"
                                  }
#line 394 "inst_util.m"
                                }
#line 392 "inst_util.m"
                                break;
#line 392 "inst_util.m"
                            }
#line 386 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 386 "inst_util.m"
                              {
#line 413 "inst_util.m"
                                check_hlds__inst_util__V_94_94 = (MR_Integer) 1;
#line 413 "inst_util.m"
                                {
#line 413 "inst_util.m"
                                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_35, check_hlds__inst_util__V_94_94, check_hlds__inst_util__Detism_14);
                                }
#line 413 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 386 "inst_util.m"
                              }
#line 386 "inst_util.m"
                          }
#line 386 "inst_util.m"
                      }
#line 360 "inst_util.m"
                      break;
#line 360 "inst_util.m"
                    case (MR_Integer) 3:
#line 425 "inst_util.m"
                      {
#line 425 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstVarsB_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 425 "inst_util.m"
                        MR_Word check_hlds__inst_util__SubInstB_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 426 "inst_util.m"
                        {
#line 426 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_135, check_hlds__inst_util__SubInstB_136, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 425 "inst_util.m"
                      }
#line 360 "inst_util.m"
                      break;
#line 360 "inst_util.m"
                  }
#line 360 "inst_util.m"
                  break;
#line 360 "inst_util.m"
              }
#line 354 "inst_util.m"
            }
#line 290 "inst_util.m"
            break;
#line 290 "inst_util.m"
          case (MR_Integer) 1:
#line 465 "inst_util.m"
            {
#line 465 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfoA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 465 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 470 "inst_util.m"
              if ((check_hlds__inst_util__HOInstInfoA_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "inst_util.m"
                {
#line 468 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                }
#line 470 "inst_util.m"
              else
#line 477 "inst_util.m"
#line 477 "inst_util.m"
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 477 "inst_util.m"
                  default:
#line 477 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 477 "inst_util.m"
                    break;
#line 477 "inst_util.m"
                  case (MR_Integer) 0:
#line 477 "inst_util.m"
#line 477 "inst_util.m"
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 477 "inst_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 477 "inst_util.m"
                      case (MR_Integer) 0:
#line 478 "inst_util.m"
                        {
#line 478 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_155;

#line 482 "inst_util.m"
#line 482 "inst_util.m"
                          switch (check_hlds__inst_util__Live_9) {
#line 482 "inst_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 482 "inst_util.m"
                            case (MR_Integer) 1:
#line 484 "inst_util.m"
                              {
#line 484 "inst_util.m"
                                check_hlds__inst_util__Uniq_155 = check_hlds__inst_util__UniqA_219;
#line 484 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 484 "inst_util.m"
                              }
#line 482 "inst_util.m"
                              break;
#line 482 "inst_util.m"
                            case (MR_Integer) 0:
#line 480 "inst_util.m"
                              {
#line 481 "inst_util.m"
                                {
#line 481 "inst_util.m"
                                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, &check_hlds__inst_util__Uniq_155);
                                }
#line 480 "inst_util.m"
                              }
#line 482 "inst_util.m"
                              break;
#line 482 "inst_util.m"
                          }
#line 478 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 478 "inst_util.m"
                            {
#line 487 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 478 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 486 "inst_util.m"
                              {
#line 486 "inst_util.m"
                                MR_Word base;
#line 486 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 486 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 486 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 486 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_155));
#line 486 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 486 "inst_util.m"
                              }
#line 486 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 478 "inst_util.m"
                            }
#line 478 "inst_util.m"
                        }
#line 477 "inst_util.m"
                        break;
#line 477 "inst_util.m"
                      case (MR_Integer) 1:
#line 474 "inst_util.m"
                        {
#line 475 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 476 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 474 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 474 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 474 "inst_util.m"
                        }
#line 477 "inst_util.m"
                        break;
#line 477 "inst_util.m"
                    }
#line 477 "inst_util.m"
                    break;
#line 477 "inst_util.m"
                  case (MR_Integer) 2:
#line 511 "inst_util.m"
                    {
#line 511 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_77_77;
#line 511 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 511 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_165;
#line 511 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 515 "inst_util.m"
#line 515 "inst_util.m"
                      switch (check_hlds__inst_util__Live_9) {
#line 515 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 515 "inst_util.m"
                        case (MR_Integer) 1:
#line 517 "inst_util.m"
                          {
#line 517 "inst_util.m"
                            {
#line 517 "inst_util.m"
                              check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                            }
#line 517 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 517 "inst_util.m"
                          }
#line 515 "inst_util.m"
                          break;
#line 515 "inst_util.m"
                        case (MR_Integer) 0:
#line 514 "inst_util.m"
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 515 "inst_util.m"
                          break;
#line 515 "inst_util.m"
                      }
#line 511 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 511 "inst_util.m"
                        {
#line 519 "inst_util.m"
                          check_hlds__inst_util__V_77_77 = (MR_Integer) 1;
#line 519 "inst_util.m"
                          {
#line 519 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_77_77, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_164, &check_hlds__inst_util__Uniq_165);
                          }
#line 511 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 511 "inst_util.m"
                            {
#line 521 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 511 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 520 "inst_util.m"
                              {
#line 520 "inst_util.m"
                                MR_Word base;
#line 520 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 520 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 520 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 520 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_165));
#line 520 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 520 "inst_util.m"
                              }
#line 520 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 511 "inst_util.m"
                            }
#line 511 "inst_util.m"
                        }
#line 511 "inst_util.m"
                    }
#line 477 "inst_util.m"
                    break;
#line 477 "inst_util.m"
                  case (MR_Integer) 3:
#line 477 "inst_util.m"
#line 477 "inst_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 477 "inst_util.m"
                      default:
#line 477 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 477 "inst_util.m"
                        break;
#line 477 "inst_util.m"
                      case (MR_Integer) 0:
#line 489 "inst_util.m"
                        {
#line 489 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_81_81;
#line 489 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 489 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstResultsB_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 489 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInstsB_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 489 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_159;
#line 489 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInsts_160;
#line 489 "inst_util.m"
                          MR_Word check_hlds__inst_util__Detism1_161;

#line 491 "inst_util.m"
                          {
#line 491 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_156, &check_hlds__inst_util__Uniq_159);
                          }
#line 489 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 489 "inst_util.m"
                            {
#line 492 "inst_util.m"
                              {
#line 492 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_158, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_160, &check_hlds__inst_util__Detism1_161, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                              }
#line 489 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 489 "inst_util.m"
                                {
#line 495 "inst_util.m"
                                  check_hlds__inst_util__V_81_81 = (MR_Integer) 1;
#line 494 "inst_util.m"
                                  {
#line 494 "inst_util.m"
                                    MR_Word base;
#line 494 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 494 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 494 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 494 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_159));
#line 494 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_157));
#line 494 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_160));
#line 494 "inst_util.m"
                                  }
#line 495 "inst_util.m"
                                  {
#line 495 "inst_util.m"
                                    parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_161, check_hlds__inst_util__V_81_81, check_hlds__inst_util__Detism_14);
                                  }
#line 495 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 489 "inst_util.m"
                                }
#line 489 "inst_util.m"
                            }
#line 489 "inst_util.m"
                        }
#line 477 "inst_util.m"
                        break;
#line 477 "inst_util.m"
                      case (MR_Integer) 1:
#line 497 "inst_util.m"
                        {
#line 497 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_78_78;
#line 497 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_162;
#line 497 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_163;
#line 497 "inst_util.m"
                          MR_Word check_hlds__inst_util___HOInstInfoB_50;

#line 500 "inst_util.m"
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 497 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 497 "inst_util.m"
                            {
#line 497 "inst_util.m"
                              check_hlds__inst_util__UniqB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 497 "inst_util.m"
                              check_hlds__inst_util___HOInstInfoB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 507 "inst_util.m"
                              check_hlds__inst_util__V_78_78 = (MR_Integer) 1;
#line 507 "inst_util.m"
                              {
#line 507 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_78_78, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_162, &check_hlds__inst_util__Uniq_163);
                              }
#line 497 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 497 "inst_util.m"
                                {
#line 509 "inst_util.m"
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 497 "inst_util.m"
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 508 "inst_util.m"
                                  {
#line 508 "inst_util.m"
                                    MR_Word base;
#line 508 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 508 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 508 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 508 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_163));
#line 508 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 508 "inst_util.m"
                                  }
#line 508 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 497 "inst_util.m"
                                }
#line 497 "inst_util.m"
                            }
#line 497 "inst_util.m"
                        }
#line 477 "inst_util.m"
                        break;
#line 477 "inst_util.m"
                      case (MR_Integer) 3:
#line 523 "inst_util.m"
                        {
#line 523 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 523 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 524 "inst_util.m"
                          {
#line 524 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_166, check_hlds__inst_util__SubInstB_167, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 523 "inst_util.m"
                        }
#line 477 "inst_util.m"
                        break;
#line 477 "inst_util.m"
                    }
#line 477 "inst_util.m"
                    break;
#line 477 "inst_util.m"
                }
#line 465 "inst_util.m"
            }
#line 290 "inst_util.m"
            break;
#line 290 "inst_util.m"
          case (MR_Integer) 3:
#line 622 "inst_util.m"
            {
#line 622 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVarsA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 622 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInstA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));

#line 623 "inst_util.m"
              {
#line 623 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsA_58, check_hlds__inst_util__SubInstA_59, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
              }
#line 622 "inst_util.m"
            }
#line 290 "inst_util.m"
            break;
#line 290 "inst_util.m"
        }
#line 290 "inst_util.m"
        break;
#line 290 "inst_util.m"
    }
#line 290 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 290 "inst_util.m"
  }
#line 280 "inst_util.m"
}

#line 255 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 255 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 255 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 255 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 255 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21)
#line 255 "inst_util.m"
{
#line 260 "inst_util.m"
  {
#line 260 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 260 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_16;
#line 260 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_17;
#line 260 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;
#line 267 "inst_util.m"
    MR_Word check_hlds__inst_util__V_23_23;
#line 267 "inst_util.m"
    MR_Word check_hlds__inst_util__V_24_24;
#line 267 "inst_util.m"
    MR_Word check_hlds__inst_util__V_19_19;

#line 261 "inst_util.m"
    {
#line 261 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstA_10, &check_hlds__inst_util__ExpandedInstA_16);
    }
#line 262 "inst_util.m"
    {
#line 262 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstB_11, &check_hlds__inst_util__ExpandedInstB_17);
    }
#line 263 "inst_util.m"
    {
#line 263 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__ExpandedInstA_16, check_hlds__inst_util__ExpandedInstB_17, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);
    }
#line 260 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 260 "inst_util.m"
      {
#line 267 "inst_util.m"
        check_hlds__inst_util__V_23_23 = (MR_Integer) 0;
#line 267 "inst_util.m"
        {
#line 267 "inst_util.m"
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__inst_util__Detism_14, &check_hlds__inst_util__V_19_19, &check_hlds__inst_util__V_24_24);
        }
#line 267 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_23_23 == check_hlds__inst_util__V_24_24);
#line 267 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 268 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 267 "inst_util.m"
        else
#line 270 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_18;
#line 267 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 260 "inst_util.m"
      }
#line 260 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 260 "inst_util.m"
  }
#line 255 "inst_util.m"
}

#line 137 "inst_util.m"
MR_Word MR_CALL 
check_hlds__inst_util__inst_may_restrict_cons_ids_2_f_0(
#line 137 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_4,
#line 137 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_5)
#line 137 "inst_util.m"
{
#line 2299 "inst_util.m"
  while (MR_TRUE)
#line 2299 "inst_util.m"
    {
#line 2299 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2299 "inst_util.m"
      {
#line 2299 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2299 "inst_util.m"
        MR_Word check_hlds__inst_util__MayRestrict_6;

#line 2299 "inst_util.m"
#line 2299 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) {
#line 2299 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2299 "inst_util.m"
          case (MR_Integer) 0:
#line 2307 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2299 "inst_util.m"
            break;
#line 2299 "inst_util.m"
          case (MR_Integer) 1:
#line 2307 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2299 "inst_util.m"
            break;
#line 2299 "inst_util.m"
          case (MR_Integer) 2:
#line 2300 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2299 "inst_util.m"
            break;
#line 2299 "inst_util.m"
          case (MR_Integer) 3:
#line 2299 "inst_util.m"
#line 2299 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) {
#line 2299 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2299 "inst_util.m"
              case (MR_Integer) 0:
#line 2299 "inst_util.m"
              case (MR_Integer) 2:
#line 2299 "inst_util.m"
              case (MR_Integer) 3:
#line 2299 "inst_util.m"
              case (MR_Integer) 5:
#line 2300 "inst_util.m"
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2299 "inst_util.m"
                break;
#line 2299 "inst_util.m"
              case (MR_Integer) 1:
#line 2307 "inst_util.m"
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2299 "inst_util.m"
                break;
#line 2299 "inst_util.m"
              case (MR_Integer) 4:
#line 2309 "inst_util.m"
                {
#line 2309 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 1)));
#line 2309 "inst_util.m"
                  MR_Word check_hlds__inst_util__NewInst_21;

#line 2310 "inst_util.m"
                  {
#line 2310 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_20, &check_hlds__inst_util__NewInst_21);
                  }
#line 2311 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2311 "inst_util.m"
                  {
#line 2311 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_5 = check_hlds__inst_util__NewInst_21;

#line 2311 "inst_util.m"
                    check_hlds__inst_util__Inst_5 = check_hlds__inst_util__Inst__tmp_copy_5;
#line 2311 "inst_util.m"
                  }
#line 2311 "inst_util.m"
                  continue;
#line 2309 "inst_util.m"
                }
#line 2299 "inst_util.m"
                break;
#line 2299 "inst_util.m"
            }
#line 2299 "inst_util.m"
            break;
#line 2299 "inst_util.m"
        }
#line 2299 "inst_util.m"
        return check_hlds__inst_util__MayRestrict_6;
#line 2299 "inst_util.m"
      }
#line 2299 "inst_util.m"
      break;
#line 2299 "inst_util.m"
    }
#line 137 "inst_util.m"
}

#line 132 "inst_util.m"
MR_Word MR_CALL 
check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(
#line 132 "inst_util.m"
  MR_Integer check_hlds__inst_util__Arity_3)
#line 132 "inst_util.m"
{
#line 2283 "inst_util.m"
  {
#line 2283 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2283 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_4;
#line 2283 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_16_16;
#line 2283 "inst_util.m"
    MR_Word check_hlds__inst_util__InMode_5;
#line 2283 "inst_util.m"
    MR_Word check_hlds__inst_util__OutMode_6;
#line 2283 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_7;
#line 2283 "inst_util.m"
    MR_Word check_hlds__inst_util__V_8_8;
#line 2283 "inst_util.m"
    MR_Integer check_hlds__inst_util__V_9_9;
#line 2283 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2284 "inst_util.m"
    {
#line 2284 "inst_util.m"
      parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__inst_util__InMode_5);
    }
#line 2285 "inst_util.m"
    {
#line 2285 "inst_util.m"
      parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__inst_util__OutMode_6);
    }
#line 11342 "check_hlds.inst_util.c"
    check_hlds__inst_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2286 "inst_util.m"
    check_hlds__inst_util__V_9_9 = (check_hlds__inst_util__Arity_3 - (MR_Integer) 1);
#line 2286 "inst_util.m"
    {
#line 2286 "inst_util.m"
      check_hlds__inst_util__V_8_8 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_9_9, ((MR_Box) (check_hlds__inst_util__InMode_5)));
    }
#line 2286 "inst_util.m"
    {
#line 2286 "inst_util.m"
      check_hlds__inst_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2286 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 0) = ((MR_Box) (check_hlds__inst_util__OutMode_6));
#line 2286 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2286 "inst_util.m"
    }
#line 2286 "inst_util.m"
    {
#line 2286 "inst_util.m"
      check_hlds__inst_util__ArgModes_7 = mercury__list__f_43_43_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_8_8, check_hlds__inst_util__V_11_11);
    }
#line 2287 "inst_util.m"
    {
#line 2287 "inst_util.m"
      check_hlds__inst_util__PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2287 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 2287 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 1) = ((MR_Box) (check_hlds__inst_util__ArgModes_7));
#line 2287 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2287 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2287 "inst_util.m"
    }
#line 2283 "inst_util.m"
    return check_hlds__inst_util__PredInstInfo_4;
#line 2283 "inst_util.m"
  }
#line 132 "inst_util.m"
}

#line 127 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__var_inst_contains_any_3_p_0(
#line 127 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_4,
#line 127 "inst_util.m"
  MR_Word check_hlds__inst_util__Instmap_5,
#line 127 "inst_util.m"
  MR_Word check_hlds__inst_util__Var_6)
#line 127 "inst_util.m"
{
#line 2277 "inst_util.m"
  {
#line 2277 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2277 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst_7;
#line 2277 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_10;
#line 2277 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2278 "inst_util.m"
    {
#line 2278 "inst_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__inst_util__Instmap_5, check_hlds__inst_util__Var_6, &check_hlds__inst_util__Inst_7);
    }
#line 2185 "inst_util.m"
    {
#line 2185 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_10);
    }
#line 2186 "inst_util.m"
    {
#line 2186 "inst_util.m"
      check_hlds__inst_util__V_11_11 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__Inst_7, check_hlds__inst_util__Expansions_10);
    }
#line 2186 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_11_11 == (MR_Integer) 1);
#line 2277 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2277 "inst_util.m"
  }
#line 127 "inst_util.m"
}

#line 123 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__inst_contains_any_2_p_0(
#line 123 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 123 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_4)
#line 123 "inst_util.m"
{
#line 2184 "inst_util.m"
  {
#line 2184 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2184 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_5;
#line 2184 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2185 "inst_util.m"
    {
#line 2185 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_5);
    }
#line 2186 "inst_util.m"
    {
#line 2186 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions_5);
    }
#line 2186 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2184 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2184 "inst_util.m"
  }
#line 123 "inst_util.m"
}

#line 116 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_6_p_0(
#line 116 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 116 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 116 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 116 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 116 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31,
#line 116 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32)
#line 116 "inst_util.m"
{
#line 1738 "inst_util.m"
  {
#line 1738 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1739 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 1739 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;
#line 1739 "inst_util.m"
    MR_Word check_hlds__inst_util__V_14_14;
#line 1740 "inst_util.m"
    MR_Word check_hlds__inst_util__V_15_15;
#line 1740 "inst_util.m"
    MR_Word check_hlds__inst_util__V_16_16;
#line 1740 "inst_util.m"
    MR_Word check_hlds__inst_util__V_17_17;

#line 1739 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1739 "inst_util.m"
      {
#line 1739 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1739 "inst_util.m"
        check_hlds__inst_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1739 "inst_util.m"
        check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1740 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1740 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1740 "inst_util.m"
          {
#line 1740 "inst_util.m"
            check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1740 "inst_util.m"
            check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1740 "inst_util.m"
            check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1740 "inst_util.m"
          }
#line 1739 "inst_util.m"
      }
#line 1738 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1742 "inst_util.m"
      {
#line 1742 "inst_util.m"
        check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
      }
#line 1738 "inst_util.m"
    else
#line 1745 "inst_util.m"
      {
#line 1745 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_18;
#line 1745 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable0_19;
#line 1745 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstInfo_20;
#line 1745 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstName_21;
#line 1745 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeMergedInst_22;
#line 1745 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable1_23;
#line 1745 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_25;

#line 1745 "inst_util.m"
        {
#line 1745 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__InstTable0_18);
        }
#line 1746 "inst_util.m"
        {
#line 1746 "inst_util.m"
          hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__MergeInstTable0_19);
        }
#line 1747 "inst_util.m"
        {
#line 1747 "inst_util.m"
          check_hlds__inst_util__MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1747 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1747 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1747 "inst_util.m"
        }
#line 1748 "inst_util.m"
        {
#line 1748 "inst_util.m"
          check_hlds__inst_util__MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1748 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1748 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1748 "inst_util.m"
        }
#line 1749 "inst_util.m"
        {
#line 1749 "inst_util.m"
          hlds__hlds_data__search_insert_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, &check_hlds__inst_util__MaybeMaybeMergedInst_22, check_hlds__inst_util__MergeInstTable0_19, &check_hlds__inst_util__MergeInstTable1_23);
        }
#line 1759 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeMergedInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1760 "inst_util.m"
          {
#line 1760 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_26;
#line 1760 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_27;
#line 1760 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable2_28;
#line 1760 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable3_29;
#line 1760 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable3_30;
#line 1760 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34;
#line 1760 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35;
#line 1760 "inst_util.m"
            MR_Word check_hlds__inst_util__V_36_36;

#line 1763 "inst_util.m"
            {
#line 1763 "inst_util.m"
              hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable1_23, check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__InstTable1_26);
            }
#line 1765 "inst_util.m"
            {
#line 1765 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34);
            }
#line 1768 "inst_util.m"
            {
#line 1768 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35);
            }
#line 1760 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1760 "inst_util.m"
              {
#line 1771 "inst_util.m"
                {
#line 1771 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__inst_util__InstTable2_27);
                }
#line 1772 "inst_util.m"
                {
#line 1772 "inst_util.m"
                  hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__MergeInstTable2_28);
                }
#line 1773 "inst_util.m"
                {
#line 1773 "inst_util.m"
                  check_hlds__inst_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_36_36, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_25));
#line 1773 "inst_util.m"
                }
#line 1773 "inst_util.m"
                {
#line 1773 "inst_util.m"
                  hlds__hlds_data__det_update_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, check_hlds__inst_util__V_36_36, check_hlds__inst_util__MergeInstTable2_28, &check_hlds__inst_util__MergeInstTable3_29);
                }
#line 1775 "inst_util.m"
                {
#line 1775 "inst_util.m"
                  hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable3_29, check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__InstTable3_30);
                }
#line 1777 "inst_util.m"
                {
#line 1777 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable3_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
                }
#line 1777 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1760 "inst_util.m"
              }
#line 1760 "inst_util.m"
          }
#line 1759 "inst_util.m"
        else
#line 1752 "inst_util.m"
          {
#line 1752 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeMergedInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeMergedInst_22, (MR_Integer) 0)));

#line 1755 "inst_util.m"
            if ((check_hlds__inst_util__MaybeMergedInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1757 "inst_util.m"
              {
#line 1757 "inst_util.m"
                check_hlds__inst_util__Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1757 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1757 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1757 "inst_util.m"
              }
#line 1755 "inst_util.m"
            else
#line 1754 "inst_util.m"
              check_hlds__inst_util__Inst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMergedInst_24, (MR_Integer) 0)));
#line 1752 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31;
#line 1752 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1752 "inst_util.m"
          }
#line 1745 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1745 "inst_util.m"
          {
#line 1780 "inst_util.m"
            {
#line 1780 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_25, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32, check_hlds__inst_util__MergeInstName_21);
            }
#line 1780 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1781 "inst_util.m"
              {
#line 1781 "inst_util.m"
                MR_Word base;
#line 1781 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = base;
#line 1781 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1781 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1781 "inst_util.m"
              }
#line 1780 "inst_util.m"
            else
#line 1783 "inst_util.m"
              *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_25;
#line 1780 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1745 "inst_util.m"
          }
#line 1745 "inst_util.m"
      }
#line 1738 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1738 "inst_util.m"
  }
#line 116 "inst_util.m"
}

#line 104 "inst_util.m"
void MR_CALL 
check_hlds__inst_util__make_shared_inst_list_4_p_0(
#line 104 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 104 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 104 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 104 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 104 "inst_util.m"
{
#line 1456 "inst_util.m"
  {
#line 1456 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1456 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1456 "inst_util.m"
      {
#line 1456 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1456 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1456 "inst_util.m"
      }
#line 1456 "inst_util.m"
    else
#line 1457 "inst_util.m"
      {
#line 1457 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1457 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1457 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1457 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1457 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1458 "inst_util.m"
        {
#line 1458 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1459 "inst_util.m"
        {
#line 1459 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1457 "inst_util.m"
        {
#line 1457 "inst_util.m"
          MR_Word base;
#line 1457 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1457 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1457 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1457 "inst_util.m"
        }
#line 1457 "inst_util.m"
      }
#line 1456 "inst_util.m"
  }
#line 104 "inst_util.m"
}

#line 96 "inst_util.m"
void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(
#line 96 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 96 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 96 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35,
#line 96 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36)
#line 96 "inst_util.m"
{
#line 1603 "inst_util.m"
  {
#line 1603 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1603 "inst_util.m"
#line 1603 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
#line 1603 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1603 "inst_util.m"
      case (MR_Integer) 0:
#line 1603 "inst_util.m"
        {
#line 1604 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1603 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1603 "inst_util.m"
        }
#line 1603 "inst_util.m"
        break;
#line 1603 "inst_util.m"
      case (MR_Integer) 1:
#line 1603 "inst_util.m"
        {
#line 1604 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1603 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1603 "inst_util.m"
        }
#line 1603 "inst_util.m"
        break;
#line 1603 "inst_util.m"
      case (MR_Integer) 2:
#line 1606 "inst_util.m"
        {
#line 1606 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1606 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1606 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[0 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1608 "inst_util.m"
          {
#line 1608 "inst_util.m"
            MR_Word base;
#line 1608 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1608 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1608 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1608 "inst_util.m"
          }
#line 1606 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1606 "inst_util.m"
        }
#line 1603 "inst_util.m"
        break;
#line 1603 "inst_util.m"
      case (MR_Integer) 3:
#line 1603 "inst_util.m"
#line 1603 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
#line 1603 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1603 "inst_util.m"
          case (MR_Integer) 0:
#line 1610 "inst_util.m"
            {
#line 1610 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1610 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1610 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1610 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_51 = ((&check_hlds__inst_util_vector_common_2[5 + check_hlds__inst_util__Uniq0_50]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
#line 1610 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));

#line 1613 "inst_util.m"
              {
#line 1613 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1615 "inst_util.m"
              {
#line 1615 "inst_util.m"
                MR_Word base;
#line 1615 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1615 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1615 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1615 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_51));
#line 1615 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1615 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1615 "inst_util.m"
              }
#line 1610 "inst_util.m"
            }
#line 1603 "inst_util.m"
            break;
#line 1603 "inst_util.m"
          case (MR_Integer) 1:
#line 1617 "inst_util.m"
            {
#line 1617 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1617 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1617 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_53 = ((&check_hlds__inst_util_vector_common_2[10 + check_hlds__inst_util__Uniq0_52]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1619 "inst_util.m"
              {
#line 1619 "inst_util.m"
                MR_Word base;
#line 1619 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1619 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1619 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1619 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_53));
#line 1619 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1619 "inst_util.m"
              }
#line 1617 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1617 "inst_util.m"
            }
#line 1603 "inst_util.m"
            break;
#line 1603 "inst_util.m"
          case (MR_Integer) 2:
#line 1621 "inst_util.m"
            {
#line 1622 "inst_util.m"
              {
#line 1622 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
#line 1622 "inst_util.m"
                return;
              }
#line 1621 "inst_util.m"
            }
#line 1603 "inst_util.m"
            break;
#line 1603 "inst_util.m"
          case (MR_Integer) 3:
#line 1624 "inst_util.m"
            {
#line 1624 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1624 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1624 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst_19;

#line 1625 "inst_util.m"
              {
#line 1625 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1626 "inst_util.m"
              {
#line 1626 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1626 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1627 "inst_util.m"
                {
#line 1627 "inst_util.m"
                  MR_Word base;
#line 1627 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1627 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1627 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1627 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1627 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst_19));
#line 1627 "inst_util.m"
                }
#line 1626 "inst_util.m"
              else
#line 1629 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst_19;
#line 1624 "inst_util.m"
            }
#line 1603 "inst_util.m"
            break;
#line 1603 "inst_util.m"
          case (MR_Integer) 4:
#line 1635 "inst_util.m"
            {
#line 1635 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1635 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_23;
#line 1635 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInstTable0_24;
#line 1635 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1635 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInstTable1_26;
#line 1635 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInst_28;

#line 1637 "inst_util.m"
              {
#line 1637 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__InstTable0_23);
              }
#line 1638 "inst_util.m"
              {
#line 1638 "inst_util.m"
                hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__MostlyUniqInstTable0_24);
              }
#line 1639 "inst_util.m"
              {
#line 1639 "inst_util.m"
                hlds__hlds_data__search_insert_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__MostlyUniqInstTable0_24, &check_hlds__inst_util__MostlyUniqInstTable1_26);
              }
#line 1649 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1650 "inst_util.m"
                {
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_29;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_30;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_31;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable2_32;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable_33;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_34;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_39_39;
#line 1650 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_54;

#line 1653 "inst_util.m"
                  {
#line 1653 "inst_util.m"
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
#line 1655 "inst_util.m"
                  {
#line 1655 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
#line 1659 "inst_util.m"
                  {
#line 1659 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_54);
                  }
#line 1660 "inst_util.m"
                  {
#line 1660 "inst_util.m"
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__SubInst0_54, &check_hlds__inst_util__SubInst1_30);
                  }
#line 1661 "inst_util.m"
                  {
#line 1661 "inst_util.m"
                    check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst1_30, &check_hlds__inst_util__MostlyUniqInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38);
                  }
#line 1666 "inst_util.m"
                  {
#line 1666 "inst_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__inst_util__InstTable2_31);
                  }
#line 1667 "inst_util.m"
                  {
#line 1667 "inst_util.m"
                    hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__MostlyUniqInstTable2_32);
                  }
#line 1668 "inst_util.m"
                  {
#line 1668 "inst_util.m"
                    check_hlds__inst_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1668 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_39_39, 0) = ((MR_Box) (check_hlds__inst_util__MostlyUniqInst_28));
#line 1668 "inst_util.m"
                  }
#line 1668 "inst_util.m"
                  {
#line 1668 "inst_util.m"
                    hlds__hlds_data__det_update_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_39_39, check_hlds__inst_util__MostlyUniqInstTable2_32, &check_hlds__inst_util__MostlyUniqInstTable_33);
                  }
#line 1670 "inst_util.m"
                  {
#line 1670 "inst_util.m"
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable_33, check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__InstTable_34);
                  }
#line 1672 "inst_util.m"
                  {
#line 1672 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
                  }
#line 1650 "inst_util.m"
                }
#line 1649 "inst_util.m"
              else
#line 1642 "inst_util.m"
                {
#line 1642 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1645 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1647 "inst_util.m"
                    check_hlds__inst_util__MostlyUniqInst_28 = check_hlds__inst_util__Inst0_5;
#line 1645 "inst_util.m"
                  else
#line 1644 "inst_util.m"
                    check_hlds__inst_util__MostlyUniqInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1642 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1642 "inst_util.m"
                }
#line 1676 "inst_util.m"
              {
#line 1676 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__MostlyUniqInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36, check_hlds__inst_util__InstName_22);
              }
#line 1675 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1678 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1675 "inst_util.m"
              else
#line 1680 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__MostlyUniqInst_28;
#line 1635 "inst_util.m"
            }
#line 1603 "inst_util.m"
            break;
#line 1603 "inst_util.m"
          case (MR_Integer) 5:
#line 1632 "inst_util.m"
            {
#line 1633 "inst_util.m"
              {
#line 1633 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
#line 1633 "inst_util.m"
                return;
              }
#line 1632 "inst_util.m"
            }
#line 1603 "inst_util.m"
            break;
#line 1603 "inst_util.m"
        }
#line 1603 "inst_util.m"
        break;
#line 1603 "inst_util.m"
    }
#line 1603 "inst_util.m"
  }
#line 96 "inst_util.m"
}

#line 86 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(
#line 86 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 86 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA0_13,
#line 86 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 86 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 86 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 86 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 86 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 86 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 86 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 86 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 86 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
#line 86 "inst_util.m"
{
#line 713 "inst_util.m"
  {
#line 713 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 713 "inst_util.m"
    MR_Word check_hlds__inst_util__InstA_22;

#line 714 "inst_util.m"
    {
#line 714 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__InstA0_13, &check_hlds__inst_util__InstA_22);
    }
#line 715 "inst_util.m"
    {
#line 715 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__InstA_22, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, check_hlds__inst_util__Inst_19, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
    }
#line 713 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 713 "inst_util.m"
  }
#line 86 "inst_util.m"
}

#line 79 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_8_p_0(
#line 79 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 79 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 79 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 79 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 79 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 79 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 79 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29,
#line 79 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30)
#line 79 "inst_util.m"
{
#line 181 "inst_util.m"
  {
#line 181 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 181 "inst_util.m"
    MR_Word check_hlds__inst_util__InstTable0_16;
#line 181 "inst_util.m"
    MR_Word check_hlds__inst_util__UnifyInstTable0_17;

#line 183 "inst_util.m"
    {
#line 183 "inst_util.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__InstTable0_16);
    }
#line 184 "inst_util.m"
    {
#line 184 "inst_util.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__UnifyInstTable0_17);
    }
#line 203 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 204 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 207 "inst_util.m"
      {
#line 207 "inst_util.m"
        check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
      }
#line 202 "inst_util.m"
    else
#line 210 "inst_util.m"
      {
#line 210 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstInfo_18;
#line 210 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstName_19;
#line 210 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_20;
#line 210 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstTable1_21;
#line 210 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_23;

#line 210 "inst_util.m"
        {
#line 210 "inst_util.m"
          check_hlds__inst_util__UnifyInstInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 210 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 210 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 210 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 210 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 210 "inst_util.m"
        }
#line 211 "inst_util.m"
        {
#line 211 "inst_util.m"
          check_hlds__inst_util__UnifyInstName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 211 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 211 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 211 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 211 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 211 "inst_util.m"
        }
#line 212 "inst_util.m"
        {
#line 212 "inst_util.m"
          hlds__hlds_data__search_insert_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, &check_hlds__inst_util__MaybeMaybeInst_20, check_hlds__inst_util__UnifyInstTable0_17, &check_hlds__inst_util__UnifyInstTable1_21);
        }
#line 228 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "inst_util.m"
          {
#line 229 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_24;
#line 229 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_25;
#line 229 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable2_26;
#line 229 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable_27;
#line 229 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_28;
#line 229 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32;
#line 229 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;
#line 229 "inst_util.m"
            MR_Word check_hlds__inst_util__V_34_34;

#line 232 "inst_util.m"
            {
#line 232 "inst_util.m"
              hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable1_21, check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__InstTable1_24);
            }
#line 234 "inst_util.m"
            {
#line 234 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32);
            }
#line 236 "inst_util.m"
            {
#line 236 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_23, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 229 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 229 "inst_util.m"
              {
#line 240 "inst_util.m"
                {
#line 240 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__inst_util__InstTable2_25);
                }
#line 241 "inst_util.m"
                {
#line 241 "inst_util.m"
                  hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__UnifyInstTable2_26);
                }
#line 242 "inst_util.m"
                {
#line 242 "inst_util.m"
                  check_hlds__inst_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_23));
#line 242 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 242 "inst_util.m"
                }
#line 242 "inst_util.m"
                {
#line 242 "inst_util.m"
                  hlds__hlds_data__det_update_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, check_hlds__inst_util__V_34_34, check_hlds__inst_util__UnifyInstTable2_26, &check_hlds__inst_util__UnifyInstTable_27);
                }
#line 244 "inst_util.m"
                {
#line 244 "inst_util.m"
                  hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable_27, check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__InstTable_28);
                }
#line 245 "inst_util.m"
                {
#line 245 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
                }
#line 245 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 229 "inst_util.m"
              }
#line 229 "inst_util.m"
          }
#line 228 "inst_util.m"
        else
#line 215 "inst_util.m"
          {
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_20, (MR_Integer) 0)));

#line 218 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "inst_util.m"
              {
#line 220 "inst_util.m"
                {
#line 220 "inst_util.m"
                  check_hlds__inst_util__Inst0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 220 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 220 "inst_util.m"
                }
#line 226 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 219 "inst_util.m"
              }
#line 218 "inst_util.m"
            else
#line 217 "inst_util.m"
              {
#line 217 "inst_util.m"
                check_hlds__inst_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 0)));
#line 217 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 1)));
#line 217 "inst_util.m"
              }
#line 215 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29;
#line 215 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 215 "inst_util.m"
          }
#line 210 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 210 "inst_util.m"
          {
#line 248 "inst_util.m"
            {
#line 248 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_23, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30, check_hlds__inst_util__UnifyInstName_19);
            }
#line 248 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 249 "inst_util.m"
              {
#line 249 "inst_util.m"
                MR_Word base;
#line 249 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 249 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 249 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 249 "inst_util.m"
              }
#line 248 "inst_util.m"
            else
#line 251 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_23;
#line 248 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 210 "inst_util.m"
          }
#line 210 "inst_util.m"
      }
#line 181 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 181 "inst_util.m"
  }
#line 79 "inst_util.m"
}

#line 65 "inst_util.m"
void MR_CALL 
check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(
#line 65 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_4,
#line 65 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_0_8,
#line 65 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Inst_9)
#line 65 "inst_util.m"
{
#line 170 "inst_util.m"
  {
#line 170 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 170 "inst_util.m"
    MR_Word check_hlds__inst_util__InstName_6;

#line 170 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 170 "inst_util.m"
      {
#line 170 "inst_util.m"
        check_hlds__inst_util__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 1)));
#line 171 "inst_util.m"
        {
#line 171 "inst_util.m"
          MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_10_10;

#line 171 "inst_util.m"
          {
#line 171 "inst_util.m"
            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_6, &check_hlds__inst_util__STATE_VARIABLE_Inst_10_10);
          }
#line 172 "inst_util.m"
          {
#line 172 "inst_util.m"
            check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__STATE_VARIABLE_Inst_10_10, check_hlds__inst_util__STATE_VARIABLE_Inst_9);
          }
#line 171 "inst_util.m"
        }
#line 170 "inst_util.m"
      }
#line 170 "inst_util.m"
    else
#line 173 "inst_util.m"
      {
#line 173 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_12_12;
#line 173 "inst_util.m"
        MR_Word check_hlds__inst_util__V_7_7;

#line 173 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 173 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 173 "inst_util.m"
          {
#line 173 "inst_util.m"
            check_hlds__inst_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 1)));
#line 173 "inst_util.m"
            check_hlds__inst_util__STATE_VARIABLE_Inst_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 2)));
#line 174 "inst_util.m"
            {
#line 174 "inst_util.m"
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__STATE_VARIABLE_Inst_12_12, check_hlds__inst_util__STATE_VARIABLE_Inst_9);
            }
#line 173 "inst_util.m"
          }
#line 173 "inst_util.m"
        else
#line 173 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_Inst_9 = check_hlds__inst_util__STATE_VARIABLE_Inst_0_8;
#line 173 "inst_util.m"
      }
#line 170 "inst_util.m"
  }
#line 65 "inst_util.m"
}

#line 59 "inst_util.m"
void MR_CALL 
check_hlds__inst_util__inst_expand_3_p_0(
#line 59 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_4,
#line 59 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_0_7,
#line 59 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Inst_8)
#line 59 "inst_util.m"
{
#line 162 "inst_util.m"
  while (MR_TRUE)
#line 162 "inst_util.m"
    {
#line 162 "inst_util.m"
      /* tailcall optimized into a loop */
#line 162 "inst_util.m"
      {
#line 162 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 162 "inst_util.m"
        MR_Word check_hlds__inst_util__InstName_6;

#line 162 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 162 "inst_util.m"
          {
#line 162 "inst_util.m"
            check_hlds__inst_util__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_7, (MR_Integer) 1)));
#line 163 "inst_util.m"
            {
#line 163 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_9_9;

#line 163 "inst_util.m"
              {
#line 163 "inst_util.m"
                check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_6, &check_hlds__inst_util__STATE_VARIABLE_Inst_9_9);
              }
#line 164 "inst_util.m"
              /* direct tailcall eliminated */
#line 164 "inst_util.m"
              {
#line 164 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_0__tmp_copy_7 = check_hlds__inst_util__STATE_VARIABLE_Inst_9_9;

#line 164 "inst_util.m"
                check_hlds__inst_util__STATE_VARIABLE_Inst_0_7 = check_hlds__inst_util__STATE_VARIABLE_Inst_0__tmp_copy_7;
#line 164 "inst_util.m"
              }
#line 164 "inst_util.m"
              continue;
#line 163 "inst_util.m"
            }
#line 162 "inst_util.m"
          }
#line 162 "inst_util.m"
        else
#line 162 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_Inst_8 = check_hlds__inst_util__STATE_VARIABLE_Inst_0_7;
#line 162 "inst_util.m"
      }
#line 162 "inst_util.m"
      break;
#line 162 "inst_util.m"
    }
#line 59 "inst_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_util. */
