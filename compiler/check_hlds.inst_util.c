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
#include "check_hlds.inst_match.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 1700 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

#line 2348 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2348 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2348 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2348 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2334 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2334 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2334 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2334 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2279 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2279 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2279 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2279 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2235 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2235 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2235 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2235 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2218 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2218 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2218 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2218 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2162 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2162 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2162 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2162 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2118 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2118 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2118 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2118 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2118 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2118 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2118 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);

#line 2101 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2101 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2101 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2101 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2101 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2101 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2101 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);

#line 2057 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2057 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2057 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);

#line 2015 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2015 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2015 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2015 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2015 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2015 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2015 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11);

#line 2006 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2006 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2006 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2006 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2006 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2006 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2006 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 1994 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 1994 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1994 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1994 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1994 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1994 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1994 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 1985 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 1985 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 1985 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 1985 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 1985 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1985 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10);

#line 1954 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1954 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1954 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1954 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1954 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1954 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13);

#line 1945 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1945 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1945 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1945 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6);

#line 1817 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1817 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1817 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1817 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1817 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1817 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1817 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);

#line 1789 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1789 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1789 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1789 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1789 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1789 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1789 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);

#line 1769 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1769 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1769 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1769 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1769 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1769 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1769 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);

#line 1685 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1685 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1685 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1685 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1685 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1674 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1674 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1674 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1674 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1674 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1569 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1569 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1569 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1569 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1569 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1448 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1448 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1448 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1448 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1448 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);

#line 1421 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1421 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1421 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1421 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1421 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1421 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);

#line 1401 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1401 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1401 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1401 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 1390 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
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

#line 1374 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1374 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1374 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1374 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1267 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1267 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1267 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1267 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);

#line 1246 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1246 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1246 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1246 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1143 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1143 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1143 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1143 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);

#line 1128 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1128 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1128 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1128 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1109 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1109 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1109 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1109 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 992 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 992 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12);

#line 945 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 945 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 945 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 945 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);

#line 929 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 929 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 929 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 929 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 910 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 910 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 910 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 910 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 867 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 867 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 867 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 867 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 832 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 832 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 832 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 832 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);

#line 707 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 707 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 707 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 707 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);

#line 686 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 686 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 686 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 686 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 269 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 269 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 269 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 269 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);

#line 244 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 244 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 244 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 244 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);


static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_3[1][3];


#line 1668 "inst_util.m"
/* sealed */ struct check_hlds__inst_util__vector_common_type_2_0_s {
#line 1668 "inst_util.m"
  const MR_Word check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
#line 1668 "inst_util.m"
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



#line 1700 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
#line 1700 "inst_util.m"
{
#line 1702 "inst_util.m"
  {
#line 1702 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1702 "inst_util.m"
  }
#line 1700 "inst_util.m"
}

#line 2348 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2348 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2348 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2348 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2348 "inst_util.m"
{
#line 2351 "inst_util.m"
  while (MR_TRUE)
#line 2351 "inst_util.m"
    {
#line 2351 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2351 "inst_util.m"
      {
#line 2351 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2351 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2351 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2351 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2351 "inst_util.m"
        else
#line 2353 "inst_util.m"
          {
#line 2353 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2353 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2353 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2353 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_14;
#line 2354 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2355 "inst_util.m"
            {
#line 2355 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_14 = check_hlds__inst_util__inst_list_contains_any_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2360 "inst_util.m"
#line 2360 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsAny_14) {
#line 2360 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2360 "inst_util.m"
              case (MR_Integer) 0:
#line 2362 "inst_util.m"
                {
#line 2362 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2362 "inst_util.m"
                  {
#line 2362 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2362 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2362 "inst_util.m"
                  }
#line 2362 "inst_util.m"
                  continue;
#line 2362 "inst_util.m"
                }
#line 2360 "inst_util.m"
                break;
#line 2360 "inst_util.m"
              case (MR_Integer) 1:
#line 2359 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2360 "inst_util.m"
                break;
#line 2360 "inst_util.m"
            }
#line 2353 "inst_util.m"
          }
#line 2351 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2351 "inst_util.m"
      }
#line 2351 "inst_util.m"
      break;
#line 2351 "inst_util.m"
    }
#line 2348 "inst_util.m"
}

#line 2334 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2334 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2334 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2334 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2334 "inst_util.m"
{
#line 2337 "inst_util.m"
  while (MR_TRUE)
#line 2337 "inst_util.m"
    {
#line 2337 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2337 "inst_util.m"
      {
#line 2337 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2337 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2337 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2337 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2337 "inst_util.m"
        else
#line 2338 "inst_util.m"
          {
#line 2338 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2338 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2338 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_12;

#line 2339 "inst_util.m"
            {
#line 2339 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_12 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2343 "inst_util.m"
#line 2343 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsAny_12) {
#line 2343 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2343 "inst_util.m"
              case (MR_Integer) 0:
#line 2345 "inst_util.m"
                {
#line 2345 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2345 "inst_util.m"
                  {
#line 2345 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2345 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2345 "inst_util.m"
                  }
#line 2345 "inst_util.m"
                  continue;
#line 2345 "inst_util.m"
                }
#line 2343 "inst_util.m"
                break;
#line 2343 "inst_util.m"
              case (MR_Integer) 1:
#line 2342 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2343 "inst_util.m"
                break;
#line 2343 "inst_util.m"
            }
#line 2338 "inst_util.m"
          }
#line 2337 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2337 "inst_util.m"
      }
#line 2337 "inst_util.m"
      break;
#line 2337 "inst_util.m"
    }
#line 2334 "inst_util.m"
}

#line 2279 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2279 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2279 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2279 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2279 "inst_util.m"
{
#line 2283 "inst_util.m"
  while (MR_TRUE)
#line 2283 "inst_util.m"
    {
#line 2283 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2283 "inst_util.m"
      {
#line 2283 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2283 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsAny_8;

#line 2283 "inst_util.m"
#line 2283 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) {
#line 2283 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2283 "inst_util.m"
          case (MR_Integer) 0:
#line 2331 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2283 "inst_util.m"
            break;
#line 2283 "inst_util.m"
          case (MR_Integer) 1:
#line 2331 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2283 "inst_util.m"
            break;
#line 2283 "inst_util.m"
          case (MR_Integer) 2:
#line 2284 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2283 "inst_util.m"
            break;
#line 2283 "inst_util.m"
          case (MR_Integer) 3:
#line 2283 "inst_util.m"
#line 2283 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) {
#line 2283 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2283 "inst_util.m"
              case (MR_Integer) 0:
#line 2286 "inst_util.m"
                {
#line 2286 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2286 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2286 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2290 "inst_util.m"
#line 2290 "inst_util.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_util__InstResults_12)) {
#line 2290 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2290 "inst_util.m"
                    case (MR_Integer) 0:
#line 2290 "inst_util.m"
#line 2290 "inst_util.m"
                      switch (MR_unmkbody(check_hlds__inst_util__InstResults_12)) {
#line 2290 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2290 "inst_util.m"
                        case (MR_Integer) 0:
#line 2305 "inst_util.m"
                          {
#line 2305 "inst_util.m"
                            return check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                          }
#line 2290 "inst_util.m"
                          break;
#line 2290 "inst_util.m"
                        case (MR_Integer) 1:
#line 2289 "inst_util.m"
                          check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2290 "inst_util.m"
                          break;
#line 2290 "inst_util.m"
                      }
#line 2290 "inst_util.m"
                      break;
#line 2290 "inst_util.m"
                    case (MR_Integer) 1:
#line 2291 "inst_util.m"
                      {
#line 2291 "inst_util.m"
                        MR_Word check_hlds__inst_util__AnyResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 1)));
#line 2291 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 0)));
#line 2291 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 2)));
#line 2291 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 3)));
#line 2291 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 4)));
#line 2291 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 5)));

#line 2295 "inst_util.m"
#line 2295 "inst_util.m"
                        switch (check_hlds__inst_util__AnyResults_15) {
#line 2295 "inst_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 2295 "inst_util.m"
                          case (MR_Integer) 2:
#line 2300 "inst_util.m"
                            {
#line 2300 "inst_util.m"
                              return check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                            }
#line 2295 "inst_util.m"
                            break;
#line 2295 "inst_util.m"
                          case (MR_Integer) 1:
#line 2297 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2295 "inst_util.m"
                            break;
#line 2295 "inst_util.m"
                          case (MR_Integer) 0:
#line 2294 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2295 "inst_util.m"
                            break;
#line 2295 "inst_util.m"
                        }
#line 2291 "inst_util.m"
                      }
#line 2290 "inst_util.m"
                      break;
#line 2290 "inst_util.m"
                  }
#line 2286 "inst_util.m"
                }
#line 2283 "inst_util.m"
                break;
#line 2283 "inst_util.m"
              case (MR_Integer) 1:
#line 2283 "inst_util.m"
              case (MR_Integer) 5:
#line 2331 "inst_util.m"
                check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2283 "inst_util.m"
                break;
#line 2283 "inst_util.m"
              case (MR_Integer) 2:
#line 2309 "inst_util.m"
                {
#line 2310 "inst_util.m"
                  {
#line 2310 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 2309 "inst_util.m"
                }
#line 2283 "inst_util.m"
                break;
#line 2283 "inst_util.m"
              case (MR_Integer) 3:
#line 2322 "inst_util.m"
                {
#line 2322 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2322 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2323 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2323 "inst_util.m"
                  {
#line 2323 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2323 "inst_util.m"
                    check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2323 "inst_util.m"
                  }
#line 2323 "inst_util.m"
                  continue;
#line 2322 "inst_util.m"
                }
#line 2283 "inst_util.m"
                break;
#line 2283 "inst_util.m"
              case (MR_Integer) 4:
#line 2312 "inst_util.m"
                {
#line 2312 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2313 "inst_util.m"
                  {
#line 2313 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
#line 2315 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2314 "inst_util.m"
                    check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2315 "inst_util.m"
                  else
#line 2316 "inst_util.m"
                    {
#line 2316 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_22;
#line 2316 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2316 "inst_util.m"
                      {
#line 2316 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                      }
#line 2317 "inst_util.m"
                      {
#line 2317 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                      }
#line 2318 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2318 "inst_util.m"
                      {
#line 2318 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2318 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2318 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2318 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2318 "inst_util.m"
                      }
#line 2318 "inst_util.m"
                      continue;
#line 2316 "inst_util.m"
                    }
#line 2312 "inst_util.m"
                }
#line 2283 "inst_util.m"
                break;
#line 2283 "inst_util.m"
            }
#line 2283 "inst_util.m"
            break;
#line 2283 "inst_util.m"
        }
#line 2283 "inst_util.m"
        return check_hlds__inst_util__ContainsAny_8;
#line 2283 "inst_util.m"
      }
#line 2283 "inst_util.m"
      break;
#line 2283 "inst_util.m"
    }
#line 2279 "inst_util.m"
}

#line 2235 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2235 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2235 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2235 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2235 "inst_util.m"
{
#line 2239 "inst_util.m"
  while (MR_TRUE)
#line 2239 "inst_util.m"
    {
#line 2239 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2239 "inst_util.m"
      {
#line 2239 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2239 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2239 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2239 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2239 "inst_util.m"
        else
#line 2241 "inst_util.m"
          {
#line 2241 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2241 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2241 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2241 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_14;
#line 2242 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2243 "inst_util.m"
            {
#line 2243 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_14 = check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2248 "inst_util.m"
#line 2248 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsNonstd_14) {
#line 2248 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2248 "inst_util.m"
              case (MR_Integer) 0:
#line 2250 "inst_util.m"
                {
#line 2250 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2250 "inst_util.m"
                  {
#line 2250 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2250 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2250 "inst_util.m"
                  }
#line 2250 "inst_util.m"
                  continue;
#line 2250 "inst_util.m"
                }
#line 2248 "inst_util.m"
                break;
#line 2248 "inst_util.m"
              case (MR_Integer) 1:
#line 2247 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2248 "inst_util.m"
                break;
#line 2248 "inst_util.m"
            }
#line 2241 "inst_util.m"
          }
#line 2239 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2239 "inst_util.m"
      }
#line 2239 "inst_util.m"
      break;
#line 2239 "inst_util.m"
    }
#line 2235 "inst_util.m"
}

#line 2218 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2218 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2218 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2218 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2218 "inst_util.m"
{
#line 2221 "inst_util.m"
  while (MR_TRUE)
#line 2221 "inst_util.m"
    {
#line 2221 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2221 "inst_util.m"
      {
#line 2221 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2221 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2221 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2221 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2221 "inst_util.m"
        else
#line 2223 "inst_util.m"
          {
#line 2223 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2223 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2223 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_12;

#line 2224 "inst_util.m"
            {
#line 2224 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_12 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2229 "inst_util.m"
#line 2229 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsNonstd_12) {
#line 2229 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2229 "inst_util.m"
              case (MR_Integer) 0:
#line 2231 "inst_util.m"
                {
#line 2231 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2231 "inst_util.m"
                  {
#line 2231 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2231 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2231 "inst_util.m"
                  }
#line 2231 "inst_util.m"
                  continue;
#line 2231 "inst_util.m"
                }
#line 2229 "inst_util.m"
                break;
#line 2229 "inst_util.m"
              case (MR_Integer) 1:
#line 2228 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2229 "inst_util.m"
                break;
#line 2229 "inst_util.m"
            }
#line 2223 "inst_util.m"
          }
#line 2221 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2221 "inst_util.m"
      }
#line 2221 "inst_util.m"
      break;
#line 2221 "inst_util.m"
    }
#line 2218 "inst_util.m"
}

#line 2162 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2162 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2162 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2162 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2162 "inst_util.m"
{
#line 2168 "inst_util.m"
  while (MR_TRUE)
#line 2168 "inst_util.m"
    {
#line 2168 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2168 "inst_util.m"
      {
#line 2168 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2168 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsNonstd_8;

#line 2168 "inst_util.m"
#line 2168 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) {
#line 2168 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2168 "inst_util.m"
          case (MR_Integer) 0:
#line 2209 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2168 "inst_util.m"
            break;
#line 2168 "inst_util.m"
          case (MR_Integer) 1:
#line 2209 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2168 "inst_util.m"
            break;
#line 2168 "inst_util.m"
          case (MR_Integer) 2:
#line 2215 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2168 "inst_util.m"
            break;
#line 2168 "inst_util.m"
          case (MR_Integer) 3:
#line 2168 "inst_util.m"
#line 2168 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) {
#line 2168 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2168 "inst_util.m"
              case (MR_Integer) 0:
#line 2175 "inst_util.m"
                {
#line 2175 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2175 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2175 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2179 "inst_util.m"
#line 2179 "inst_util.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_util__InstResults_12)) {
#line 2179 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2179 "inst_util.m"
                    case (MR_Integer) 0:
#line 2179 "inst_util.m"
#line 2179 "inst_util.m"
                      switch (MR_unmkbody(check_hlds__inst_util__InstResults_12)) {
#line 2179 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2179 "inst_util.m"
                        case (MR_Integer) 0:
#line 2183 "inst_util.m"
                          {
#line 2183 "inst_util.m"
                            return check_hlds__inst_util__ContainsNonstd_8 = check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                          }
#line 2179 "inst_util.m"
                          break;
#line 2179 "inst_util.m"
                        case (MR_Integer) 1:
#line 2178 "inst_util.m"
                          check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2179 "inst_util.m"
                          break;
#line 2179 "inst_util.m"
                      }
#line 2179 "inst_util.m"
                      break;
#line 2179 "inst_util.m"
                    case (MR_Integer) 1:
#line 2183 "inst_util.m"
                      {
#line 2183 "inst_util.m"
                        return check_hlds__inst_util__ContainsNonstd_8 = check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                      }
#line 2179 "inst_util.m"
                      break;
#line 2179 "inst_util.m"
                  }
#line 2175 "inst_util.m"
                }
#line 2168 "inst_util.m"
                break;
#line 2168 "inst_util.m"
              case (MR_Integer) 1:
#line 2168 "inst_util.m"
                {
#line 2168 "inst_util.m"
                  MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2168 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2169 "inst_util.m"
                  {
#line 2169 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__HOInstInfo_10);
                  }
#line 2171 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2170 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 1;
#line 2171 "inst_util.m"
                  else
#line 2172 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2168 "inst_util.m"
                }
#line 2168 "inst_util.m"
                break;
#line 2168 "inst_util.m"
              case (MR_Integer) 2:
#line 2187 "inst_util.m"
                {
#line 2188 "inst_util.m"
                  {
#line 2188 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_nonstandard_func_mode_2\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 2187 "inst_util.m"
                }
#line 2168 "inst_util.m"
                break;
#line 2168 "inst_util.m"
              case (MR_Integer) 3:
#line 2200 "inst_util.m"
                {
#line 2200 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2200 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2201 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2201 "inst_util.m"
                  {
#line 2201 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2201 "inst_util.m"
                    check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2201 "inst_util.m"
                  }
#line 2201 "inst_util.m"
                  continue;
#line 2200 "inst_util.m"
                }
#line 2168 "inst_util.m"
                break;
#line 2168 "inst_util.m"
              case (MR_Integer) 4:
#line 2190 "inst_util.m"
                {
#line 2190 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2191 "inst_util.m"
                  {
#line 2191 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
#line 2193 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2192 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2193 "inst_util.m"
                  else
#line 2194 "inst_util.m"
                    {
#line 2194 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_22;
#line 2194 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2194 "inst_util.m"
                      {
#line 2194 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                      }
#line 2195 "inst_util.m"
                      {
#line 2195 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                      }
#line 2196 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2196 "inst_util.m"
                      {
#line 2196 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2196 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2196 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2196 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2196 "inst_util.m"
                      }
#line 2196 "inst_util.m"
                      continue;
#line 2194 "inst_util.m"
                    }
#line 2190 "inst_util.m"
                }
#line 2168 "inst_util.m"
                break;
#line 2168 "inst_util.m"
              case (MR_Integer) 5:
#line 2209 "inst_util.m"
                check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2168 "inst_util.m"
                break;
#line 2168 "inst_util.m"
            }
#line 2168 "inst_util.m"
            break;
#line 2168 "inst_util.m"
        }
#line 2168 "inst_util.m"
        return check_hlds__inst_util__ContainsNonstd_8;
#line 2168 "inst_util.m"
      }
#line 2168 "inst_util.m"
      break;
#line 2168 "inst_util.m"
    }
#line 2162 "inst_util.m"
}

#line 2118 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2118 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2118 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2118 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2118 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2118 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2118 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27)
#line 2118 "inst_util.m"
{
#line 2125 "inst_util.m"
  {
#line 2125 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2125 "inst_util.m"
    if ((check_hlds__inst_util__BoundInstsA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2125 "inst_util.m"
      {
#line 2126 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsB_8;
#line 2125 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2125 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2125 "inst_util.m"
      }
#line 2125 "inst_util.m"
    else
#line 2125 "inst_util.m"
      {
#line 2125 "inst_util.m"
        MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 1)));
#line 2125 "inst_util.m"
        MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 0)));

#line 2125 "inst_util.m"
        if ((check_hlds__inst_util__BoundInstsB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2128 "inst_util.m"
          {
#line 2130 "inst_util.m"
            *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsA_7;
#line 2128 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2128 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2128 "inst_util.m"
          }
#line 2125 "inst_util.m"
        else
#line 2132 "inst_util.m"
          {
#line 2132 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 0)));
#line 2132 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsTailB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 1)));
#line 2132 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 0)));
#line 2132 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 1)));
#line 2132 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 0)));
#line 2132 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 1)));

#line 2136 "inst_util.m"
            {
#line 2136 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
            }
#line 2144 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2138 "inst_util.m"
              {
#line 2138 "inst_util.m"
                MR_Word check_hlds__inst_util__MaybeTypes_22;
#line 2138 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_23;
#line 2138 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInst_24;
#line 2138 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_25;
#line 2138 "inst_util.m"
                MR_Integer check_hlds__inst_util__V_28_28;
#line 2138 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29;

#line 2138 "inst_util.m"
                {
#line 2138 "inst_util.m"
                  check_hlds__inst_util__V_28_28 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_util__ArgsA_19);
                }
#line 2137 "inst_util.m"
                {
#line 2137 "inst_util.m"
                  check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__V_28_28, &check_hlds__inst_util__MaybeTypes_22);
                }
#line 2139 "inst_util.m"
                {
#line 2139 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_19, check_hlds__inst_util__ArgsB_21, check_hlds__inst_util__MaybeTypes_22, &check_hlds__inst_util__Args_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 2138 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2138 "inst_util.m"
                  {
#line 2140 "inst_util.m"
                    {
#line 2140 "inst_util.m"
                      check_hlds__inst_util__BoundInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2140 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_18));
#line 2140 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 1) = ((MR_Box) (check_hlds__inst_util__Args_23));
#line 2140 "inst_util.m"
                    }
#line 2141 "inst_util.m"
                    {
#line 2141 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2138 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2138 "inst_util.m"
                      {
#line 2143 "inst_util.m"
                        {
#line 2143 "inst_util.m"
                          MR_Word base;
#line 2143 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2143 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_24));
#line 2143 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_25));
#line 2143 "inst_util.m"
                        }
#line 2143 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2138 "inst_util.m"
                      }
#line 2138 "inst_util.m"
                  }
#line 2138 "inst_util.m"
              }
#line 2144 "inst_util.m"
            else
#line 2148 "inst_util.m"
              {
#line 2144 "inst_util.m"
                MR_Word check_hlds__inst_util__V_39_39;

#line 2144 "inst_util.m"
                {
#line 2144 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_39_39, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
                }
#line 2144 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_39_39);
#line 2148 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2146 "inst_util.m"
                  {
#line 2146 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_34;

#line 2145 "inst_util.m"
                    {
#line 2145 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2146 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2146 "inst_util.m"
                      {
#line 2147 "inst_util.m"
                        {
#line 2147 "inst_util.m"
                          MR_Word base;
#line 2147 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2147 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2147 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_41_41));
#line 2147 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_34));
#line 2147 "inst_util.m"
                        }
#line 2147 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2146 "inst_util.m"
                      }
#line 2146 "inst_util.m"
                  }
#line 2148 "inst_util.m"
                else
#line 2150 "inst_util.m"
                  {
#line 2150 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_35;

#line 2149 "inst_util.m"
                    {
#line 2149 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__BoundInstsA_7, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2150 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2150 "inst_util.m"
                      {
#line 2151 "inst_util.m"
                        {
#line 2151 "inst_util.m"
                          MR_Word base;
#line 2151 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2151 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2151 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInstB_16));
#line 2151 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_35));
#line 2151 "inst_util.m"
                        }
#line 2151 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2150 "inst_util.m"
                      }
#line 2150 "inst_util.m"
                  }
#line 2148 "inst_util.m"
              }
#line 2132 "inst_util.m"
          }
#line 2125 "inst_util.m"
      }
#line 2125 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2125 "inst_util.m"
  }
#line 2118 "inst_util.m"
}

#line 2101 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2101 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2101 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2101 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2101 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2101 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2101 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6)
#line 2101 "inst_util.m"
{
#line 2105 "inst_util.m"
  {
#line 2105 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2105 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2105 "inst_util.m"
      {
#line 2105 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2105 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2105 "inst_util.m"
          {
#line 2105 "inst_util.m"
            *check_hlds__inst_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2105 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 2105 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2105 "inst_util.m"
          }
#line 2105 "inst_util.m"
      }
#line 2105 "inst_util.m"
    else
#line 2107 "inst_util.m"
      {
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgB_13;
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsB_14;
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeType_15;
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeTypes_16;
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__Arg_17;
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__Args_18;
#line 2107 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22;

#line 2106 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2106 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2106 "inst_util.m"
          {
#line 2106 "inst_util.m"
            check_hlds__inst_util__ArgB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2106 "inst_util.m"
            check_hlds__inst_util__ArgsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2106 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 2106 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2106 "inst_util.m"
              {
#line 2106 "inst_util.m"
                check_hlds__inst_util__MaybeType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 2106 "inst_util.m"
                check_hlds__inst_util__MaybeTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 2108 "inst_util.m"
                {
#line 2108 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__ArgA_11, check_hlds__inst_util__ArgB_13, check_hlds__inst_util__MaybeType_15, &check_hlds__inst_util__Arg_17, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22);
                }
#line 2107 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2107 "inst_util.m"
                  {
#line 2109 "inst_util.m"
                    {
#line 2109 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_12, check_hlds__inst_util__ArgsB_14, check_hlds__inst_util__MaybeTypes_16, &check_hlds__inst_util__Args_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);
                    }
#line 2107 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2107 "inst_util.m"
                      {
#line 2107 "inst_util.m"
                        {
#line 2107 "inst_util.m"
                          MR_Word base;
#line 2107 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__4_4 = base;
#line 2107 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Arg_17));
#line 2107 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Args_18));
#line 2107 "inst_util.m"
                        }
#line 2107 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2107 "inst_util.m"
                      }
#line 2107 "inst_util.m"
                  }
#line 2106 "inst_util.m"
              }
#line 2106 "inst_util.m"
          }
#line 2107 "inst_util.m"
      }
#line 2105 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2105 "inst_util.m"
  }
#line 2101 "inst_util.m"
}

#line 2057 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2057 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2057 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2057 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26)
#line 2057 "inst_util.m"
{
#line 2069 "inst_util.m"
  {
#line 2069 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2064 "inst_util.m"
    {
#line 2064 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
    }
#line 2069 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2067 "inst_util.m"
      {
#line 2067 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_16;
#line 2067 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_51;
#line 2067 "inst_util.m"
        MR_Word check_hlds__inst_util__Expansions0_52;
#line 1991 "inst_util.m"
        MR_Word check_hlds__inst_util___Expansions_53;

#line 1948 "inst_util.m"
        {
#line 1948 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
        }
#line 1950 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1949 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqA_9;
#line 1950 "inst_util.m"
        else
#line 1951 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqB_12;
#line 1990 "inst_util.m"
        {
#line 1990 "inst_util.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_52);
        }
#line 1991 "inst_util.m"
        {
#line 1991 "inst_util.m"
          check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_51, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_52, &check_hlds__inst_util___Expansions_53, &check_hlds__inst_util__Uniq_16);
        }
#line 2068 "inst_util.m"
        {
#line 2068 "inst_util.m"
          MR_Word base;
#line 2068 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "inst_util.m"
          *check_hlds__inst_util__Result_14 = base;
#line 2068 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2068 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_16));
#line 2068 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2068 "inst_util.m"
        }
#line 2067 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2067 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2067 "inst_util.m"
      }
#line 2069 "inst_util.m"
    else
#line 2071 "inst_util.m"
      {
#line 2070 "inst_util.m"
        {
#line 2070 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
        }
#line 2071 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2092 "inst_util.m"
          {
#line 2092 "inst_util.m"
            if ((check_hlds__inst_util__MaybeType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2093 "inst_util.m"
              {
#line 2093 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_39;
#line 2093 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq0_63;
#line 2093 "inst_util.m"
                MR_Word check_hlds__inst_util__Expansions0_64;
#line 1991 "inst_util.m"
                MR_Word check_hlds__inst_util___Expansions_65;

#line 1948 "inst_util.m"
                {
#line 1948 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
                }
#line 1950 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1949 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqA_9;
#line 1950 "inst_util.m"
                else
#line 1951 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqB_12;
#line 1990 "inst_util.m"
                {
#line 1990 "inst_util.m"
                  mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_64);
                }
#line 1991 "inst_util.m"
                {
#line 1991 "inst_util.m"
                  check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_64, &check_hlds__inst_util___Expansions_65, &check_hlds__inst_util__Uniq_39);
                }
#line 2095 "inst_util.m"
                {
#line 2095 "inst_util.m"
                  MR_Word base;
#line 2095 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2095 "inst_util.m"
                  *check_hlds__inst_util__Result_14 = base;
#line 2095 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_39));
#line 2095 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2095 "inst_util.m"
                }
#line 2093 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2093 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2093 "inst_util.m"
              }
#line 2092 "inst_util.m"
            else
#line 2075 "inst_util.m"
              {
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_42_42;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_43_43;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_44_44;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_45_45;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeType_13, (MR_Integer) 0)));
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__Constructors_18;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtor_19;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB0_20;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB_21;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__InstResultsB_22;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__InstA_23;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__InstB_24;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_31_31;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_34_34;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_35_35;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_36_36;
#line 2075 "inst_util.m"
                MR_Word check_hlds__inst_util__V_37_37;

#line 2076 "inst_util.m"
                {
#line 2076 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Type_17, &check_hlds__inst_util__Constructors_18);
                }
#line 2075 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2075 "inst_util.m"
                  {
#line 2077 "inst_util.m"
                    {
#line 2077 "inst_util.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_util__Type_17, &check_hlds__inst_util__TypeCtor_19);
                    }
#line 2078 "inst_util.m"
                    {
#line 2078 "inst_util.m"
                      check_hlds__mode_util__constructors_to_bound_insts_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__UniqB_12, check_hlds__inst_util__TypeCtor_19, check_hlds__inst_util__Constructors_18, &check_hlds__inst_util__BoundInstsB0_20);
                    }
#line 2442 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 2080 "inst_util.m"
                    {
#line 2080 "inst_util.m"
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__inst_util__TypeCtorInfo_42_42, check_hlds__inst_util__BoundInstsB0_20, &check_hlds__inst_util__BoundInstsB_21);
                    }
#line 2082 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = (MR_Integer) 1;
#line 2083 "inst_util.m"
                    check_hlds__inst_util__V_30_30 = (MR_Integer) 0;
#line 2453 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 2084 "inst_util.m"
                    {
#line 2084 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_43_43);
                    }
#line 2460 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_44_44 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 2084 "inst_util.m"
                    {
#line 2084 "inst_util.m"
                      check_hlds__inst_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_31_31, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 2084 "inst_util.m"
                    }
#line 2085 "inst_util.m"
                    {
#line 2085 "inst_util.m"
                      check_hlds__inst_util__V_34_34 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeInfo_44_44);
                    }
#line 2475 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 2085 "inst_util.m"
                    {
#line 2085 "inst_util.m"
                      check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_33_33, 0) = ((MR_Box) (check_hlds__inst_util__V_34_34));
#line 2085 "inst_util.m"
                    }
#line 2086 "inst_util.m"
                    {
#line 2086 "inst_util.m"
                      check_hlds__inst_util__V_36_36 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_45_45);
                    }
#line 2086 "inst_util.m"
                    {
#line 2086 "inst_util.m"
                      check_hlds__inst_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_35_35, 0) = ((MR_Box) (check_hlds__inst_util__V_36_36));
#line 2086 "inst_util.m"
                    }
#line 2087 "inst_util.m"
                    check_hlds__inst_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_util__TypeCtor_19);
#line 2081 "inst_util.m"
                    {
#line 2081 "inst_util.m"
                      check_hlds__inst_util__InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 0) = ((MR_Box) (check_hlds__inst_util__V_29_29));
#line 2081 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 1) = ((MR_Box) (check_hlds__inst_util__V_30_30));
#line 2081 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 2) = ((MR_Box) (check_hlds__inst_util__V_31_31));
#line 2081 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 3) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 2081 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 4) = ((MR_Box) (check_hlds__inst_util__V_35_35));
#line 2081 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 5) = ((MR_Box) (check_hlds__inst_util__V_37_37));
#line 2081 "inst_util.m"
                    }
#line 2089 "inst_util.m"
                    {
#line 2089 "inst_util.m"
                      check_hlds__inst_util__InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2089 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2089 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_9));
#line 2089 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_10));
#line 2089 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsA_11));
#line 2089 "inst_util.m"
                    }
#line 2090 "inst_util.m"
                    {
#line 2090 "inst_util.m"
                      check_hlds__inst_util__InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2090 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2090 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 1) = ((MR_Box) (check_hlds__inst_util__UniqB_12));
#line 2090 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_22));
#line 2090 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsB_21));
#line 2090 "inst_util.m"
                    }
#line 2091 "inst_util.m"
                    {
#line 2091 "inst_util.m"
                      return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_23, check_hlds__inst_util__InstB_24, check_hlds__inst_util__MaybeType_13, check_hlds__inst_util__Result_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);
                    }
#line 2075 "inst_util.m"
                  }
#line 2075 "inst_util.m"
              }
#line 2092 "inst_util.m"
          }
#line 2071 "inst_util.m"
      }
#line 2069 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2069 "inst_util.m"
  }
#line 2057 "inst_util.m"
}

#line 2015 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2015 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2015 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2015 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2015 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2015 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2015 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11)
#line 2015 "inst_util.m"
{
#line 2023 "inst_util.m"
  while (MR_TRUE)
#line 2023 "inst_util.m"
    {
#line 2023 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2023 "inst_util.m"
      {
#line 2023 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2023 "inst_util.m"
#line 2023 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
#line 2023 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2023 "inst_util.m"
          case (MR_Integer) 0:
#line 2023 "inst_util.m"
            {
#line 2024 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2023 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2023 "inst_util.m"
            }
#line 2023 "inst_util.m"
            break;
#line 2023 "inst_util.m"
          case (MR_Integer) 1:
#line 2023 "inst_util.m"
            {
#line 2024 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2023 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2023 "inst_util.m"
            }
#line 2023 "inst_util.m"
            break;
#line 2023 "inst_util.m"
          case (MR_Integer) 2:
#line 2028 "inst_util.m"
            {
#line 2028 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));
#line 2027 "inst_util.m"
              MR_Word check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1948 "inst_util.m"
              {
#line 1948 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_13, check_hlds__inst_util__UniqB_8);
              }
#line 1950 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1949 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1950 "inst_util.m"
              else
#line 1951 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_13;
#line 2028 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2028 "inst_util.m"
            }
#line 2023 "inst_util.m"
            break;
#line 2023 "inst_util.m"
          case (MR_Integer) 3:
#line 2023 "inst_util.m"
#line 2023 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
#line 2023 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2023 "inst_util.m"
              case (MR_Integer) 0:
#line 2034 "inst_util.m"
                {
#line 2034 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInstsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 2034 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq0_20;
#line 2034 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2034 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstResultsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1948 "inst_util.m"
                  {
#line 1948 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_36, check_hlds__inst_util__UniqB_8);
                  }
#line 1950 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1949 "inst_util.m"
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqB_8;
#line 1950 "inst_util.m"
                  else
#line 1951 "inst_util.m"
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqA_36;
#line 2036 "inst_util.m"
                  {
#line 2036 "inst_util.m"
                    check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_19, check_hlds__inst_util__Uniq0_20, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_util__STATE_VARIABLE_Expansions_27, check_hlds__inst_util__Uniq_11);
#line 2036 "inst_util.m"
                    return;
                  }
#line 2034 "inst_util.m"
                }
#line 2023 "inst_util.m"
                break;
#line 2023 "inst_util.m"
              case (MR_Integer) 1:
#line 2028 "inst_util.m"
                {
#line 2028 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2026 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1948 "inst_util.m"
                  {
#line 1948 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_39, check_hlds__inst_util__UniqB_8);
                  }
#line 1950 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1949 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1950 "inst_util.m"
                  else
#line 1951 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_39;
#line 2028 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2028 "inst_util.m"
                }
#line 2023 "inst_util.m"
                break;
#line 2023 "inst_util.m"
              case (MR_Integer) 2:
#line 2048 "inst_util.m"
                {
#line 2049 "inst_util.m"
                  {
#line 2049 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", (MR_String) "inst_var");
#line 2049 "inst_util.m"
                    return;
                  }
#line 2048 "inst_util.m"
                }
#line 2023 "inst_util.m"
                break;
#line 2023 "inst_util.m"
              case (MR_Integer) 3:
#line 2051 "inst_util.m"
                {
#line 2051 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInstA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 2051 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2052 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2052 "inst_util.m"
                  {
#line 2052 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__SubInstA_25;

#line 2052 "inst_util.m"
                    check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2052 "inst_util.m"
                  }
#line 2052 "inst_util.m"
                  continue;
#line 2051 "inst_util.m"
                }
#line 2023 "inst_util.m"
                break;
#line 2023 "inst_util.m"
              case (MR_Integer) 4:
#line 2039 "inst_util.m"
                {
#line 2039 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2040 "inst_util.m"
                  {
#line 2040 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26);
                  }
#line 2042 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2041 "inst_util.m"
                    {
#line 2041 "inst_util.m"
                      *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2041 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2041 "inst_util.m"
                    }
#line 2042 "inst_util.m"
                  else
#line 2043 "inst_util.m"
                    {
#line 2043 "inst_util.m"
                      MR_Word check_hlds__inst_util__Inst_22;
#line 2043 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2043 "inst_util.m"
                      {
#line 2043 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32);
                      }
#line 2044 "inst_util.m"
                      {
#line 2044 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__Inst_22);
                      }
#line 2045 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2045 "inst_util.m"
                      {
#line 2045 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__Inst_22;
#line 2045 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2045 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26;
#line 2045 "inst_util.m"
                        check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2045 "inst_util.m"
                      }
#line 2045 "inst_util.m"
                      continue;
#line 2043 "inst_util.m"
                    }
#line 2039 "inst_util.m"
                }
#line 2023 "inst_util.m"
                break;
#line 2023 "inst_util.m"
              case (MR_Integer) 5:
#line 2031 "inst_util.m"
                {
#line 1948 "inst_util.m"
                  {
#line 1948 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_8);
                  }
#line 1950 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1949 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1950 "inst_util.m"
                  else
#line 1951 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 2031 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2031 "inst_util.m"
                }
#line 2023 "inst_util.m"
                break;
#line 2023 "inst_util.m"
            }
#line 2023 "inst_util.m"
            break;
#line 2023 "inst_util.m"
        }
#line 2023 "inst_util.m"
      }
#line 2023 "inst_util.m"
      break;
#line 2023 "inst_util.m"
    }
#line 2015 "inst_util.m"
}

#line 2006 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2006 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2006 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2006 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2006 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2006 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2006 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 2006 "inst_util.m"
{
#line 2010 "inst_util.m"
  while (MR_TRUE)
#line 2010 "inst_util.m"
    {
#line 2010 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2010 "inst_util.m"
      {
#line 2010 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2010 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2010 "inst_util.m"
          {
#line 2010 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 2010 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 2010 "inst_util.m"
          }
#line 2010 "inst_util.m"
        else
#line 2011 "inst_util.m"
          {
#line 2011 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2011 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2011 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_18;
#line 2011 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2012 "inst_util.m"
            {
#line 2012 "inst_util.m"
              check_hlds__inst_util__merge_inst_uniq_6_p_0(check_hlds__inst_util__Inst_12, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21, &check_hlds__inst_util__Uniq1_18);
            }
#line 2013 "inst_util.m"
            /* direct tailcall eliminated */
#line 2013 "inst_util.m"
            {
#line 2013 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__Insts_13;
#line 2013 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_18;
#line 2013 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2013 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2013 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2013 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2013 "inst_util.m"
            }
#line 2013 "inst_util.m"
            continue;
#line 2011 "inst_util.m"
          }
#line 2010 "inst_util.m"
      }
#line 2010 "inst_util.m"
      break;
#line 2010 "inst_util.m"
    }
#line 2006 "inst_util.m"
}

#line 1994 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 1994 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1994 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1994 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1994 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1994 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1994 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 1994 "inst_util.m"
{
#line 1998 "inst_util.m"
  while (MR_TRUE)
#line 1998 "inst_util.m"
    {
#line 1998 "inst_util.m"
      /* tailcall optimized into a loop */
#line 1998 "inst_util.m"
      {
#line 1998 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 1998 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1998 "inst_util.m"
          {
#line 1998 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 1998 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 1998 "inst_util.m"
          }
#line 1998 "inst_util.m"
        else
#line 2000 "inst_util.m"
          {
#line 2000 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2000 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2000 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 1)));
#line 2000 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_20;
#line 2000 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;
#line 2001 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 0)));

#line 2002 "inst_util.m"
            {
#line 2002 "inst_util.m"
              check_hlds__inst_util__merge_inst_list_uniq_6_p_0(check_hlds__inst_util__ArgInsts_19, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23, &check_hlds__inst_util__Uniq1_20);
            }
#line 2003 "inst_util.m"
            /* direct tailcall eliminated */
#line 2003 "inst_util.m"
            {
#line 2003 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInsts_13;
#line 2003 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_20;
#line 2003 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;

#line 2003 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2003 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2003 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2003 "inst_util.m"
            }
#line 2003 "inst_util.m"
            continue;
#line 2000 "inst_util.m"
          }
#line 1998 "inst_util.m"
      }
#line 1998 "inst_util.m"
      break;
#line 1998 "inst_util.m"
    }
#line 1994 "inst_util.m"
}

#line 1985 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 1985 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 1985 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 1985 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 1985 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1985 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10)
#line 1985 "inst_util.m"
{
#line 1988 "inst_util.m"
  {
#line 1988 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1988 "inst_util.m"
    MR_Word check_hlds__inst_util__Uniq0_11;
#line 1988 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_12;
#line 1991 "inst_util.m"
    MR_Word check_hlds__inst_util___Expansions_13;

#line 1948 "inst_util.m"
    {
#line 1948 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_6, check_hlds__inst_util__UniqB_7);
    }
#line 1950 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1949 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqB_7;
#line 1950 "inst_util.m"
    else
#line 1951 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqA_6;
#line 1990 "inst_util.m"
    {
#line 1990 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_12);
    }
#line 1991 "inst_util.m"
    {
#line 1991 "inst_util.m"
      check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__Uniq0_11, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__Expansions0_12, &check_hlds__inst_util___Expansions_13, check_hlds__inst_util__Uniq_10);
    }
#line 1988 "inst_util.m"
  }
#line 1985 "inst_util.m"
}

#line 1954 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1954 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1954 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1954 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1954 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1954 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13)
#line 1954 "inst_util.m"
{
#line 1957 "inst_util.m"
  {
#line 1957 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1976 "inst_util.m"
    MR_Word check_hlds__inst_util__PredA_10;
#line 1976 "inst_util.m"
    MR_Word check_hlds__inst_util__PredB_11;

#line 1959 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1959 "inst_util.m"
      {
#line 1959 "inst_util.m"
        check_hlds__inst_util__PredA_10 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoA_6), (MR_Integer) 1);
#line 1960 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoB_7)) == (MR_mktag((MR_Integer) 1)));
#line 1960 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1960 "inst_util.m"
          check_hlds__inst_util__PredB_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoB_7), (MR_Integer) 1);
#line 1959 "inst_util.m"
      }
#line 1976 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1967 "inst_util.m"
      {
#line 1965 "inst_util.m"
        {
#line 1965 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__PredB_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
        }
#line 1967 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1966 "inst_util.m"
          {
#line 1966 "inst_util.m"
            *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoB_7;
#line 1966 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1966 "inst_util.m"
          }
#line 1967 "inst_util.m"
        else
#line 1969 "inst_util.m"
          {
#line 1967 "inst_util.m"
            {
#line 1967 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__PredA_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
            }
#line 1969 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1968 "inst_util.m"
              {
#line 1968 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoA_6;
#line 1968 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1968 "inst_util.m"
              }
#line 1969 "inst_util.m"
            else
#line 1972 "inst_util.m"
              {
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_22;
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 1)));
#line 2256 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_19;
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 0)));
#line 2257 "inst_util.m"
                MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 2)));
#line 2257 "inst_util.m"
                MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 3)));
#line 2259 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_31;
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_25;
#line 2256 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_28;
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2257 "inst_util.m"
                MR_Word check_hlds__inst_util__V_26_26;
#line 2257 "inst_util.m"
                MR_Word check_hlds__inst_util__V_27_27;
#line 2259 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;

#line 2257 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_20_20 == (MR_Integer) 1);
#line 2256 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2256 "inst_util.m"
                  {
#line 3215 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_11_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2258 "inst_util.m"
                    {
#line 2258 "inst_util.m"
                      check_hlds__inst_util__Arity_19 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_22, check_hlds__inst_util__ArgModes_16);
                    }
#line 2260 "inst_util.m"
                    {
#line 2260 "inst_util.m"
                      check_hlds__inst_util__V_21_21 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_19);
                    }
#line 2259 "inst_util.m"
                    {
#line 2259 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__V_21_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                    }
#line 2259 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2256 "inst_util.m"
                  }
#line 1972 "inst_util.m"
                check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1972 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1972 "inst_util.m"
                  {
#line 2257 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 0)));
#line 2257 "inst_util.m"
                    check_hlds__inst_util__ArgModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 1)));
#line 2257 "inst_util.m"
                    check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 2)));
#line 2257 "inst_util.m"
                    check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 3)));
#line 2257 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == (MR_Integer) 1);
#line 2256 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2256 "inst_util.m"
                      {
#line 3256 "check_hlds.inst_util.c"
                        check_hlds__inst_util__TypeCtorInfo_11_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2258 "inst_util.m"
                        {
#line 2258 "inst_util.m"
                          check_hlds__inst_util__Arity_28 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_31, check_hlds__inst_util__ArgModes_25);
                        }
#line 2260 "inst_util.m"
                        {
#line 2260 "inst_util.m"
                          check_hlds__inst_util__V_30_30 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_28);
                        }
#line 2259 "inst_util.m"
                        {
#line 2259 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__V_30_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                        }
#line 2259 "inst_util.m"
                        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2256 "inst_util.m"
                      }
#line 1973 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1972 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1972 "inst_util.m"
                      {
#line 1974 "inst_util.m"
                        *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1974 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1972 "inst_util.m"
                      }
#line 1972 "inst_util.m"
                  }
#line 1972 "inst_util.m"
              }
#line 1969 "inst_util.m"
          }
#line 1967 "inst_util.m"
      }
#line 1976 "inst_util.m"
    else
#line 1977 "inst_util.m"
      {
#line 1977 "inst_util.m"
        {
#line 1977 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoA_6);
        }
#line 1977 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1977 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1977 "inst_util.m"
          {
#line 1978 "inst_util.m"
            {
#line 1978 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoB_7);
            }
#line 1978 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1977 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1977 "inst_util.m"
              {
#line 1979 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1979 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1977 "inst_util.m"
              }
#line 1977 "inst_util.m"
          }
#line 1977 "inst_util.m"
      }
#line 1957 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1957 "inst_util.m"
      {
#line 1957 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12;
#line 1957 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1957 "inst_util.m"
      }
#line 1957 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1957 "inst_util.m"
  }
#line 1954 "inst_util.m"
}

#line 1945 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1945 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1945 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1945 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6)
#line 1945 "inst_util.m"
{
#line 1950 "inst_util.m"
  {
#line 1950 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1948 "inst_util.m"
    {
#line 1948 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_4, check_hlds__inst_util__UniqB_5);
    }
#line 1950 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1949 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqB_5;
#line 1950 "inst_util.m"
    else
#line 1951 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqA_4;
#line 1950 "inst_util.m"
  }
#line 1945 "inst_util.m"
}

#line 1817 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1817 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1817 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1817 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1817 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1817 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1817 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41)
#line 1817 "inst_util.m"
{
#line 1832 "inst_util.m"
  {
#line 1832 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
#line 1832 "inst_util.m"
      default:
#line 1832 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
        break;
#line 1832 "inst_util.m"
      case (MR_Integer) 0:
#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_7)) {
#line 1832 "inst_util.m"
          default:
#line 1832 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
            break;
#line 1832 "inst_util.m"
          case (MR_Integer) 0:
#line 1832 "inst_util.m"
            if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1906 "inst_util.m"
              {
#line 1908 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1906 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1906 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1906 "inst_util.m"
              }
#line 1832 "inst_util.m"
            else
#line 1832 "inst_util.m"
            if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1872 "inst_util.m"
              {
#line 1872 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1873 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1876 "inst_util.m"
#line 1876 "inst_util.m"
                switch (check_hlds__inst_util__Uniq_73) {
#line 1876 "inst_util.m"
                  default:
#line 1876 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 1876 "inst_util.m"
                    break;
#line 1876 "inst_util.m"
                  case (MR_Integer) 3:
#line 1876 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1876 "inst_util.m"
                    break;
#line 1876 "inst_util.m"
                  case (MR_Integer) 4:
#line 1876 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1876 "inst_util.m"
                    break;
#line 1876 "inst_util.m"
                }
#line 1872 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1872 "inst_util.m"
                  {
#line 1877 "inst_util.m"
                    *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstB_8;
#line 1872 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1872 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1872 "inst_util.m"
                  }
#line 1872 "inst_util.m"
              }
#line 1832 "inst_util.m"
            else
#line 1832 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
            break;
#line 1832 "inst_util.m"
        }
#line 1832 "inst_util.m"
        break;
#line 1832 "inst_util.m"
      case (MR_Integer) 2:
#line 1832 "inst_util.m"
        {
#line 1832 "inst_util.m"
          MR_Word check_hlds__inst_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1832 "inst_util.m"
          MR_Word check_hlds__inst_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));

#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
          switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1832 "inst_util.m"
            default:
#line 1832 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
              break;
#line 1832 "inst_util.m"
            case (MR_Integer) 0:
#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
              switch (MR_unmkbody(check_hlds__inst_util__InstB_8)) {
#line 1832 "inst_util.m"
                default:
#line 1832 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
                case (MR_Integer) 0:
#line 1838 "inst_util.m"
                  {
#line 1842 "inst_util.m"
#line 1842 "inst_util.m"
                    switch (check_hlds__inst_util__V_110_110) {
#line 1842 "inst_util.m"
                      default:
#line 1842 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1842 "inst_util.m"
                        break;
#line 1842 "inst_util.m"
                      case (MR_Integer) 3:
#line 1842 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1842 "inst_util.m"
                        break;
#line 1842 "inst_util.m"
                      case (MR_Integer) 4:
#line 1842 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1842 "inst_util.m"
                        break;
#line 1842 "inst_util.m"
                    }
#line 1838 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1838 "inst_util.m"
                      {
#line 1843 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstA_7;
#line 1838 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1838 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1838 "inst_util.m"
                      }
#line 1838 "inst_util.m"
                  }
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
              }
#line 1832 "inst_util.m"
              break;
#line 1832 "inst_util.m"
            case (MR_Integer) 2:
#line 1832 "inst_util.m"
              {
#line 1832 "inst_util.m"
                MR_Word check_hlds__inst_util__UniqB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1832 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfoB_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1832 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_16;
#line 1832 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_17;

#line 1834 "inst_util.m"
                {
#line 1834 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_15, &check_hlds__inst_util__HOInstInfo_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1832 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1832 "inst_util.m"
                  {
#line 1835 "inst_util.m"
                    {
#line 1835 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_14, &check_hlds__inst_util__Uniq_17);
                    }
#line 1836 "inst_util.m"
                    {
#line 1836 "inst_util.m"
                      MR_Word base;
#line 1836 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = base;
#line 1836 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_17));
#line 1836 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_16));
#line 1836 "inst_util.m"
                    }
#line 1836 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1832 "inst_util.m"
                  }
#line 1832 "inst_util.m"
              }
#line 1832 "inst_util.m"
              break;
#line 1832 "inst_util.m"
            case (MR_Integer) 3:
#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1832 "inst_util.m"
                default:
#line 1832 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
                case (MR_Integer) 0:
#line 1845 "inst_util.m"
                  {
#line 1845 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstResultsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1845 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1845 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_57_57;
#line 1845 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1845 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_63;

#line 1847 "inst_util.m"
                    {
#line 1847 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_62, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_63);
                    }
#line 1850 "inst_util.m"
#line 1850 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_63) {
#line 1850 "inst_util.m"
                      default:
#line 1850 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1850 "inst_util.m"
                        break;
#line 1850 "inst_util.m"
                      case (MR_Integer) 3:
#line 1850 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1850 "inst_util.m"
                        break;
#line 1850 "inst_util.m"
                      case (MR_Integer) 4:
#line 1850 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1850 "inst_util.m"
                        break;
#line 1850 "inst_util.m"
                    }
#line 1852 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1851 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1852 "inst_util.m"
                    else
#line 1853 "inst_util.m"
                      {
#line 1853 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_19, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1845 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1845 "inst_util.m"
                      {
#line 1856 "inst_util.m"
                        check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1845 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1856 "inst_util.m"
                        {
#line 1856 "inst_util.m"
                          MR_Word base;
#line 1856 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1856 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_63));
#line 1856 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 1856 "inst_util.m"
                        }
#line 1856 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1845 "inst_util.m"
                      }
#line 1845 "inst_util.m"
                  }
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
                case (MR_Integer) 1:
#line 1858 "inst_util.m"
                  {
#line 1858 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1858 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1858 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_68;
#line 1858 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_69;

#line 1860 "inst_util.m"
                    {
#line 1860 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_67, &check_hlds__inst_util__HOInstInfo_68, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1858 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1858 "inst_util.m"
                      {
#line 1861 "inst_util.m"
                        {
#line 1861 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_66, &check_hlds__inst_util__Uniq_69);
                        }
#line 1862 "inst_util.m"
                        {
#line 1862 "inst_util.m"
                          MR_Word base;
#line 1862 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1862 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1862 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_68));
#line 1862 "inst_util.m"
                        }
#line 1862 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1858 "inst_util.m"
                      }
#line 1858 "inst_util.m"
                  }
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
                case (MR_Integer) 5:
#line 1864 "inst_util.m"
                  {
#line 1864 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_55_55;
#line 1864 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_71;

#line 1866 "inst_util.m"
                    {
#line 1866 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, (MR_Integer) 0, &check_hlds__inst_util__Uniq_71);
                    }
#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_71) {
#line 1869 "inst_util.m"
                      default:
#line 1869 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
                        break;
#line 1869 "inst_util.m"
                      case (MR_Integer) 3:
#line 1869 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1869 "inst_util.m"
                        break;
#line 1869 "inst_util.m"
                      case (MR_Integer) 4:
#line 1869 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1869 "inst_util.m"
                        break;
#line 1869 "inst_util.m"
                    }
#line 1864 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1864 "inst_util.m"
                      {
#line 1870 "inst_util.m"
                        check_hlds__inst_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1864 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1870 "inst_util.m"
                        {
#line 1870 "inst_util.m"
                          MR_Word base;
#line 1870 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1870 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_71));
#line 1870 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_55_55));
#line 1870 "inst_util.m"
                        }
#line 1870 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1864 "inst_util.m"
                      }
#line 1864 "inst_util.m"
                  }
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
              }
#line 1832 "inst_util.m"
              break;
#line 1832 "inst_util.m"
          }
#line 1832 "inst_util.m"
        }
#line 1832 "inst_util.m"
        break;
#line 1832 "inst_util.m"
      case (MR_Integer) 3:
#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
#line 1832 "inst_util.m"
          default:
#line 1832 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
            break;
#line 1832 "inst_util.m"
          case (MR_Integer) 0:
#line 1832 "inst_util.m"
            {
#line 1832 "inst_util.m"
              MR_Word check_hlds__inst_util__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1832 "inst_util.m"
              MR_Word check_hlds__inst_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1832 "inst_util.m"
              MR_Word check_hlds__inst_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1832 "inst_util.m"
                default:
#line 1832 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
                case (MR_Integer) 2:
#line 1879 "inst_util.m"
                  {
#line 1879 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_53_53;
#line 1879 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1879 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_76;
#line 1880 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1881 "inst_util.m"
                    {
#line 1881 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__UniqB_75, check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_76);
                    }
#line 1884 "inst_util.m"
#line 1884 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_76) {
#line 1884 "inst_util.m"
                      default:
#line 1884 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1884 "inst_util.m"
                        break;
#line 1884 "inst_util.m"
                      case (MR_Integer) 3:
#line 1884 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1884 "inst_util.m"
                        break;
#line 1884 "inst_util.m"
                      case (MR_Integer) 4:
#line 1884 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1884 "inst_util.m"
                        break;
#line 1884 "inst_util.m"
                    }
#line 1886 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1885 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1886 "inst_util.m"
                    else
#line 1887 "inst_util.m"
                      {
#line 1887 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1879 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1879 "inst_util.m"
                      {
#line 1890 "inst_util.m"
                        check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1879 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1890 "inst_util.m"
                        {
#line 1890 "inst_util.m"
                          MR_Word base;
#line 1890 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1890 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
#line 1890 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 1890 "inst_util.m"
                        }
#line 1890 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1879 "inst_util.m"
                      }
#line 1879 "inst_util.m"
                  }
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
                case (MR_Integer) 3:
#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1832 "inst_util.m"
                    default:
#line 1832 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
                      break;
#line 1832 "inst_util.m"
                    case (MR_Integer) 0:
#line 1910 "inst_util.m"
                      {
#line 1910 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_32;
#line 1910 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_49_49;
#line 1910 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1910 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_87;
#line 1910 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1911 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1912 "inst_util.m"
                        {
#line 1912 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__UniqB_86, &check_hlds__inst_util__Uniq_87);
                        }
#line 1913 "inst_util.m"
                        {
#line 1913 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_111_111, check_hlds__inst_util__BoundInstsB_88, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInsts_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1910 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1910 "inst_util.m"
                          {
#line 1916 "inst_util.m"
                            check_hlds__inst_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1916 "inst_util.m"
                            {
#line 1916 "inst_util.m"
                              MR_Word base;
#line 1916 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1916 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1916 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_87));
#line 1916 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_49_49));
#line 1916 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_32));
#line 1916 "inst_util.m"
                            }
#line 1916 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1910 "inst_util.m"
                          }
#line 1910 "inst_util.m"
                      }
#line 1832 "inst_util.m"
                      break;
#line 1832 "inst_util.m"
                    case (MR_Integer) 1:
#line 1918 "inst_util.m"
                      {
#line 1918 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1919 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1920 "inst_util.m"
                        {
#line 1920 "inst_util.m"
                          return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__UniqB_91, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1918 "inst_util.m"
                      }
#line 1832 "inst_util.m"
                      break;
#line 1832 "inst_util.m"
                  }
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
              }
#line 1832 "inst_util.m"
            }
#line 1832 "inst_util.m"
            break;
#line 1832 "inst_util.m"
          case (MR_Integer) 1:
#line 1832 "inst_util.m"
            {
#line 1832 "inst_util.m"
              MR_Word check_hlds__inst_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1832 "inst_util.m"
              MR_Word check_hlds__inst_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1832 "inst_util.m"
                default:
#line 1832 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
                case (MR_Integer) 2:
#line 1892 "inst_util.m"
                  {
#line 1892 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1892 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1892 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_81;
#line 1892 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_82;

#line 1894 "inst_util.m"
                    {
#line 1894 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_80, &check_hlds__inst_util__HOInstInfo_81, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1892 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1892 "inst_util.m"
                      {
#line 1895 "inst_util.m"
                        {
#line 1895 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_79, &check_hlds__inst_util__Uniq_82);
                        }
#line 1896 "inst_util.m"
                        {
#line 1896 "inst_util.m"
                          MR_Word base;
#line 1896 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1896 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_82));
#line 1896 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_81));
#line 1896 "inst_util.m"
                        }
#line 1896 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1892 "inst_util.m"
                      }
#line 1892 "inst_util.m"
                  }
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
                case (MR_Integer) 3:
#line 1832 "inst_util.m"
#line 1832 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1832 "inst_util.m"
                    default:
#line 1832 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
                      break;
#line 1832 "inst_util.m"
                    case (MR_Integer) 0:
#line 1923 "inst_util.m"
                      {
#line 1923 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1923 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstResultsB_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1923 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));

#line 1925 "inst_util.m"
                        {
#line 1925 "inst_util.m"
                          return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__UniqB_95, check_hlds__inst_util__InstResultsB_96, check_hlds__inst_util__BoundInstsB_97, check_hlds__inst_util__V_115_115, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1923 "inst_util.m"
                      }
#line 1832 "inst_util.m"
                      break;
#line 1832 "inst_util.m"
                    case (MR_Integer) 1:
#line 1928 "inst_util.m"
                      {
#line 1928 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1928 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfoB_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1928 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfo_102;
#line 1928 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_103;

#line 1930 "inst_util.m"
                        {
#line 1930 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_101, &check_hlds__inst_util__HOInstInfo_102, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1928 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1928 "inst_util.m"
                          {
#line 1931 "inst_util.m"
                            {
#line 1931 "inst_util.m"
                              check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_100, &check_hlds__inst_util__Uniq_103);
                            }
#line 1932 "inst_util.m"
                            {
#line 1932 "inst_util.m"
                              MR_Word base;
#line 1932 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1932 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1932 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1932 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_103));
#line 1932 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_102));
#line 1932 "inst_util.m"
                            }
#line 1932 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1928 "inst_util.m"
                          }
#line 1928 "inst_util.m"
                      }
#line 1832 "inst_util.m"
                      break;
#line 1832 "inst_util.m"
                  }
#line 1832 "inst_util.m"
                  break;
#line 1832 "inst_util.m"
              }
#line 1832 "inst_util.m"
            }
#line 1832 "inst_util.m"
            break;
#line 1832 "inst_util.m"
          case (MR_Integer) 5:
#line 1832 "inst_util.m"
            {
#line 1832 "inst_util.m"
              MR_Word check_hlds__inst_util__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1832 "inst_util.m"
              MR_Word check_hlds__inst_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1832 "inst_util.m"
              if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1898 "inst_util.m"
                {
#line 1898 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_51_51;
#line 1898 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1898 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_84;
#line 1899 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1900 "inst_util.m"
                  {
#line 1900 "inst_util.m"
                    check_hlds__inst_util__merge_uniq_3_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_83, &check_hlds__inst_util__Uniq_84);
                  }
#line 1903 "inst_util.m"
#line 1903 "inst_util.m"
                  switch (check_hlds__inst_util__Uniq_84) {
#line 1903 "inst_util.m"
                    default:
#line 1903 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1903 "inst_util.m"
                      break;
#line 1903 "inst_util.m"
                    case (MR_Integer) 3:
#line 1903 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1903 "inst_util.m"
                      break;
#line 1903 "inst_util.m"
                    case (MR_Integer) 4:
#line 1903 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1903 "inst_util.m"
                      break;
#line 1903 "inst_util.m"
                  }
#line 1898 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1898 "inst_util.m"
                    {
#line 1904 "inst_util.m"
                      check_hlds__inst_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1898 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1904 "inst_util.m"
                      {
#line 1904 "inst_util.m"
                        MR_Word base;
#line 1904 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1904 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_84));
#line 1904 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 1904 "inst_util.m"
                      }
#line 1904 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1898 "inst_util.m"
                    }
#line 1898 "inst_util.m"
                }
#line 1832 "inst_util.m"
              else
#line 1832 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1934 "inst_util.m"
                {
#line 1934 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeInfo_104_104;
#line 1934 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeCtorInfo_105_105;
#line 1934 "inst_util.m"
                  MR_Word check_hlds__inst_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1934 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeTypes_38;
#line 1934 "inst_util.m"
                  MR_Word check_hlds__inst_util__Args_39;
#line 1934 "inst_util.m"
                  MR_Integer check_hlds__inst_util__V_42_42;
#line 1934 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_43_43;
#line 1934 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1935 "inst_util.m"
                  {
#line 1935 "inst_util.m"
                    check_hlds__inst_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_util__V_108_108, check_hlds__inst_util__V_106_106);
                  }
#line 1934 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1934 "inst_util.m"
                    {
#line 4324 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeInfo_104_104 = (MR_Word) &check_hlds__inst_util_scalar_common_1[1];
#line 4326 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1937 "inst_util.m"
                      {
#line 1937 "inst_util.m"
                        check_hlds__inst_util__V_42_42 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_105_105, check_hlds__inst_util__V_107_107);
                      }
#line 1937 "inst_util.m"
                      check_hlds__inst_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1937 "inst_util.m"
                      {
#line 1937 "inst_util.m"
                        check_hlds__inst_util__MaybeTypes_38 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeInfo_104_104, check_hlds__inst_util__V_42_42, ((MR_Box) (check_hlds__inst_util__V_43_43)));
                      }
#line 1938 "inst_util.m"
                      {
#line 1938 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__V_107_107, check_hlds__inst_util__ArgsB_37, check_hlds__inst_util__MaybeTypes_38, &check_hlds__inst_util__Args_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
#line 1934 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1934 "inst_util.m"
                        {
#line 1939 "inst_util.m"
                          {
#line 1939 "inst_util.m"
                            MR_Word base;
#line 1939 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "inst_util.m"
                            *check_hlds__inst_util__Inst_10 = base;
#line 1939 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1939 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_108_108));
#line 1939 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Args_39));
#line 1939 "inst_util.m"
                          }
#line 1939 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1934 "inst_util.m"
                        }
#line 1934 "inst_util.m"
                    }
#line 1934 "inst_util.m"
                }
#line 1832 "inst_util.m"
              else
#line 1832 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 1832 "inst_util.m"
            }
#line 1832 "inst_util.m"
            break;
#line 1832 "inst_util.m"
        }
#line 1832 "inst_util.m"
        break;
#line 1832 "inst_util.m"
    }
#line 1832 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1832 "inst_util.m"
  }
#line 1817 "inst_util.m"
}

#line 1789 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1789 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1789 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1789 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1789 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1789 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1789 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20)
#line 1789 "inst_util.m"
{
#line 1809 "inst_util.m"
  {
#line 1809 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1809 "inst_util.m"
    MR_Word check_hlds__inst_util__InstVarsA_12;
#line 1809 "inst_util.m"
    MR_Word check_hlds__inst_util__SubInstA_13;

#line 1793 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1793 "inst_util.m"
      {
#line 1793 "inst_util.m"
        check_hlds__inst_util__InstVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1793 "inst_util.m"
        check_hlds__inst_util__SubInstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1806 "inst_util.m"
        {
#line 1806 "inst_util.m"
          MR_Word check_hlds__inst_util__InstVarsB_14;
#line 1806 "inst_util.m"
          MR_Word check_hlds__inst_util__SubInstB_15;

#line 1794 "inst_util.m"
          check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1794 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1794 "inst_util.m"
            {
#line 1794 "inst_util.m"
              check_hlds__inst_util__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1794 "inst_util.m"
              check_hlds__inst_util__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1795 "inst_util.m"
              {
#line 1795 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_26_26;
#line 1795 "inst_util.m"
                MR_Word check_hlds__inst_util__Inst0_16;
#line 1795 "inst_util.m"
                MR_Word check_hlds__inst_util__InstVars_17;

#line 1795 "inst_util.m"
                {
#line 1795 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__SubInstB_15, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
                }
#line 1795 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1795 "inst_util.m"
                  {
#line 4463 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_26_26 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 1796 "inst_util.m"
                    {
#line 1796 "inst_util.m"
                      mercury__set__intersect_3_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVarsA_12, check_hlds__inst_util__InstVarsB_14, &check_hlds__inst_util__InstVars_17);
                    }
#line 1797 "inst_util.m"
                    {
#line 1797 "inst_util.m"
                      check_hlds__inst_util__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVars_17);
                    }
#line 1803 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1798 "inst_util.m"
                      {
#line 1798 "inst_util.m"
                        MR_Word base;
#line 1798 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1798 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1798 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1798 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1798 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_16));
#line 1798 "inst_util.m"
                      }
#line 1803 "inst_util.m"
                    else
#line 1804 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_16;
#line 1803 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1795 "inst_util.m"
                  }
#line 1795 "inst_util.m"
              }
#line 1794 "inst_util.m"
            }
#line 1794 "inst_util.m"
          else
#line 1807 "inst_util.m"
            {
#line 1807 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1806 "inst_util.m"
        }
#line 1793 "inst_util.m"
      }
#line 1793 "inst_util.m"
    else
#line 1813 "inst_util.m"
      {
#line 1813 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInstB_25;
#line 1809 "inst_util.m"
        MR_Word check_hlds__inst_util___InstVarsB_18;

#line 1809 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1809 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1809 "inst_util.m"
          {
#line 1809 "inst_util.m"
            check_hlds__inst_util___InstVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1809 "inst_util.m"
            check_hlds__inst_util__SubInstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1812 "inst_util.m"
            {
#line 1812 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__SubInstB_25, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1809 "inst_util.m"
          }
#line 1809 "inst_util.m"
        else
#line 1814 "inst_util.m"
          {
#line 1814 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
          }
#line 1813 "inst_util.m"
      }
#line 1809 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1809 "inst_util.m"
  }
#line 1789 "inst_util.m"
}

#line 1769 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1769 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1769 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1769 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1769 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1769 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1769 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15)
#line 1769 "inst_util.m"
{
#line 1772 "inst_util.m"
  {
#line 1772 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1772 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_12;
#line 1772 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_13;

#line 1778 "inst_util.m"
    {
#line 1778 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstA_7, &check_hlds__inst_util__ExpandedInstA_12);
    }
#line 1779 "inst_util.m"
    {
#line 1779 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstB_8, &check_hlds__inst_util__ExpandedInstB_13);
    }
#line 1780 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1782 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1781 "inst_util.m"
      {
#line 1781 "inst_util.m"
        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstA_12;
#line 1781 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1781 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1781 "inst_util.m"
      }
#line 1782 "inst_util.m"
    else
#line 1784 "inst_util.m"
      {
#line 1782 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstA_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1784 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1783 "inst_util.m"
          {
#line 1783 "inst_util.m"
            *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstB_13;
#line 1783 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1783 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1783 "inst_util.m"
          }
#line 1784 "inst_util.m"
        else
#line 1785 "inst_util.m"
          {
#line 1785 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(check_hlds__inst_util__ExpandedInstA_12, check_hlds__inst_util__ExpandedInstB_13, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);
          }
#line 1784 "inst_util.m"
      }
#line 1772 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1772 "inst_util.m"
  }
#line 1769 "inst_util.m"
}

#line 1685 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1685 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1685 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1685 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1685 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1685 "inst_util.m"
{
#line 1688 "inst_util.m"
  {
#line 1688 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1688 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1688 "inst_util.m"
      {
#line 1688 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1688 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1688 "inst_util.m"
      }
#line 1688 "inst_util.m"
    else
#line 1689 "inst_util.m"
      {
#line 1689 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1689 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1689 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1689 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1689 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1690 "inst_util.m"
        {
#line 1690 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1691 "inst_util.m"
        {
#line 1691 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1689 "inst_util.m"
        {
#line 1689 "inst_util.m"
          MR_Word base;
#line 1689 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1689 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1689 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1689 "inst_util.m"
        }
#line 1689 "inst_util.m"
      }
#line 1688 "inst_util.m"
  }
#line 1685 "inst_util.m"
}

#line 1674 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1674 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1674 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1674 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1674 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1674 "inst_util.m"
{
#line 1677 "inst_util.m"
  {
#line 1677 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1677 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1677 "inst_util.m"
      {
#line 1677 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1677 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1677 "inst_util.m"
      }
#line 1677 "inst_util.m"
    else
#line 1679 "inst_util.m"
      {
#line 1679 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1679 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1679 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1679 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1679 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1679 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1679 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1679 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1681 "inst_util.m"
        {
#line 1681 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1682 "inst_util.m"
        {
#line 1682 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1682 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1682 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1682 "inst_util.m"
        }
#line 1683 "inst_util.m"
        {
#line 1683 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1678 "inst_util.m"
        {
#line 1678 "inst_util.m"
          MR_Word base;
#line 1678 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1678 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1678 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1678 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1678 "inst_util.m"
        }
#line 1679 "inst_util.m"
      }
#line 1677 "inst_util.m"
  }
#line 1674 "inst_util.m"
}

#line 1569 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1569 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1569 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1569 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1569 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1569 "inst_util.m"
{
#line 1572 "inst_util.m"
  {
#line 1572 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1572 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1572 "inst_util.m"
      {
#line 1572 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1572 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1572 "inst_util.m"
      }
#line 1572 "inst_util.m"
    else
#line 1574 "inst_util.m"
      {
#line 1574 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1574 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1574 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1574 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1574 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1574 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1574 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1574 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1576 "inst_util.m"
        {
#line 1576 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1577 "inst_util.m"
        {
#line 1577 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1577 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1577 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1577 "inst_util.m"
        }
#line 1578 "inst_util.m"
        {
#line 1578 "inst_util.m"
          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1573 "inst_util.m"
        {
#line 1573 "inst_util.m"
          MR_Word base;
#line 1573 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1573 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1573 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1573 "inst_util.m"
        }
#line 1574 "inst_util.m"
      }
#line 1572 "inst_util.m"
  }
#line 1569 "inst_util.m"
}

#line 1448 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1448 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1448 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1448 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1448 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35)
#line 1448 "inst_util.m"
{
#line 1453 "inst_util.m"
  {
#line 1453 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1453 "inst_util.m"
#line 1453 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
#line 1453 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1453 "inst_util.m"
      case (MR_Integer) 0:
#line 1453 "inst_util.m"
#line 1453 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_5)) {
#line 1453 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1453 "inst_util.m"
          case (MR_Integer) 0:
#line 1456 "inst_util.m"
            {
#line 1458 "inst_util.m"
              {
#line 1458 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
#line 1458 "inst_util.m"
                return;
              }
#line 1456 "inst_util.m"
            }
#line 1453 "inst_util.m"
            break;
#line 1453 "inst_util.m"
          case (MR_Integer) 1:
#line 1453 "inst_util.m"
            {
#line 1454 "inst_util.m"
              *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1453 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1453 "inst_util.m"
            }
#line 1453 "inst_util.m"
            break;
#line 1453 "inst_util.m"
        }
#line 1453 "inst_util.m"
        break;
#line 1453 "inst_util.m"
      case (MR_Integer) 1:
#line 1460 "inst_util.m"
        {
#line 1462 "inst_util.m"
          {
#line 1462 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
#line 1462 "inst_util.m"
            return;
          }
#line 1460 "inst_util.m"
        }
#line 1453 "inst_util.m"
        break;
#line 1453 "inst_util.m"
      case (MR_Integer) 2:
#line 1464 "inst_util.m"
        {
#line 1464 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1464 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1464 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[15 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1466 "inst_util.m"
          {
#line 1466 "inst_util.m"
            MR_Word base;
#line 1466 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1466 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1466 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1466 "inst_util.m"
          }
#line 1464 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1464 "inst_util.m"
        }
#line 1453 "inst_util.m"
        break;
#line 1453 "inst_util.m"
      case (MR_Integer) 3:
#line 1453 "inst_util.m"
#line 1453 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
#line 1453 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1453 "inst_util.m"
          case (MR_Integer) 0:
#line 1468 "inst_util.m"
            {
#line 1468 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1468 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1468 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1468 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1468 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_55 = ((&check_hlds__inst_util_vector_common_2[20 + check_hlds__inst_util__Uniq0_54]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1494 "inst_util.m"
              {
#line 1494 "inst_util.m"
                check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1495 "inst_util.m"
              {
#line 1495 "inst_util.m"
                MR_Word base;
#line 1495 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1495 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1495 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_55));
#line 1495 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_12));
#line 1495 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1495 "inst_util.m"
              }
#line 1468 "inst_util.m"
            }
#line 1453 "inst_util.m"
            break;
#line 1453 "inst_util.m"
          case (MR_Integer) 1:
#line 1497 "inst_util.m"
            {
#line 1497 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1497 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1497 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_57 = ((&check_hlds__inst_util_vector_common_2[25 + check_hlds__inst_util__Uniq0_56]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1499 "inst_util.m"
              {
#line 1499 "inst_util.m"
                MR_Word base;
#line 1499 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1499 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1499 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_57));
#line 1499 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1499 "inst_util.m"
              }
#line 1497 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1497 "inst_util.m"
            }
#line 1453 "inst_util.m"
            break;
#line 1453 "inst_util.m"
          case (MR_Integer) 2:
#line 1501 "inst_util.m"
            {
#line 1502 "inst_util.m"
              {
#line 1502 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
#line 1502 "inst_util.m"
                return;
              }
#line 1501 "inst_util.m"
            }
#line 1453 "inst_util.m"
            break;
#line 1453 "inst_util.m"
          case (MR_Integer) 3:
#line 1504 "inst_util.m"
            {
#line 1504 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1504 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1504 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst1_19;

#line 1505 "inst_util.m"
              {
#line 1505 "inst_util.m"
                check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1506 "inst_util.m"
              {
#line 1506 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1506 "inst_util.m"
              check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1508 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1507 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst1_19;
#line 1508 "inst_util.m"
              else
#line 1509 "inst_util.m"
                {
#line 1509 "inst_util.m"
                  MR_Word base;
#line 1509 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1509 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1509 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1509 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst1_19));
#line 1509 "inst_util.m"
                }
#line 1504 "inst_util.m"
            }
#line 1453 "inst_util.m"
            break;
#line 1453 "inst_util.m"
          case (MR_Integer) 4:
#line 1515 "inst_util.m"
            {
#line 1515 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1515 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_23;
#line 1515 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInstTable0_24;
#line 1515 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1515 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInstTable1_26;
#line 1515 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInst_28;

#line 1517 "inst_util.m"
              {
#line 1517 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__InstTable0_23);
              }
#line 1518 "inst_util.m"
              {
#line 1518 "inst_util.m"
                hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__SharedInstTable0_24);
              }
#line 1519 "inst_util.m"
              {
#line 1519 "inst_util.m"
                hlds__hlds_data__search_insert_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__SharedInstTable0_24, &check_hlds__inst_util__SharedInstTable1_26);
              }
#line 1529 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "inst_util.m"
                {
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_29;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_30;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__SharedInstTable2_31;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__SharedInstTable_32;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_33;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_38_38;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_58;
#line 1530 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_59;

#line 1533 "inst_util.m"
                  {
#line 1533 "inst_util.m"
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
#line 1535 "inst_util.m"
                  {
#line 1535 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36);
                  }
#line 1539 "inst_util.m"
                  {
#line 1539 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_58);
                  }
#line 1540 "inst_util.m"
                  {
#line 1540 "inst_util.m"
                    check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__SubInst0_58, &check_hlds__inst_util__SubInst1_59);
                  }
#line 1541 "inst_util.m"
                  {
#line 1541 "inst_util.m"
                    check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst1_59, &check_hlds__inst_util__SharedInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
#line 1545 "inst_util.m"
                  {
#line 1545 "inst_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__InstTable2_30);
                  }
#line 1546 "inst_util.m"
                  {
#line 1546 "inst_util.m"
                    hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__SharedInstTable2_31);
                  }
#line 1547 "inst_util.m"
                  {
#line 1547 "inst_util.m"
                    check_hlds__inst_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_38_38, 0) = ((MR_Box) (check_hlds__inst_util__SharedInst_28));
#line 1547 "inst_util.m"
                  }
#line 1547 "inst_util.m"
                  {
#line 1547 "inst_util.m"
                    hlds__hlds_data__det_update_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_38_38, check_hlds__inst_util__SharedInstTable2_31, &check_hlds__inst_util__SharedInstTable_32);
                  }
#line 1549 "inst_util.m"
                  {
#line 1549 "inst_util.m"
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable_32, check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__InstTable_33);
                  }
#line 1551 "inst_util.m"
                  {
#line 1551 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                  }
#line 1530 "inst_util.m"
                }
#line 1529 "inst_util.m"
              else
#line 1522 "inst_util.m"
                {
#line 1522 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1525 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "inst_util.m"
                    check_hlds__inst_util__SharedInst_28 = check_hlds__inst_util__Inst0_5;
#line 1525 "inst_util.m"
                  else
#line 1524 "inst_util.m"
                    check_hlds__inst_util__SharedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1522 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1522 "inst_util.m"
                }
#line 1554 "inst_util.m"
              {
#line 1554 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__SharedInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35, check_hlds__inst_util__InstName_22);
              }
#line 1556 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1555 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1556 "inst_util.m"
              else
#line 1557 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SharedInst_28;
#line 1515 "inst_util.m"
            }
#line 1453 "inst_util.m"
            break;
#line 1453 "inst_util.m"
          case (MR_Integer) 5:
#line 1512 "inst_util.m"
            {
#line 1513 "inst_util.m"
              {
#line 1513 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
#line 1513 "inst_util.m"
                return;
              }
#line 1512 "inst_util.m"
            }
#line 1453 "inst_util.m"
            break;
#line 1453 "inst_util.m"
        }
#line 1453 "inst_util.m"
        break;
#line 1453 "inst_util.m"
    }
#line 1453 "inst_util.m"
  }
#line 1448 "inst_util.m"
}

#line 1421 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1421 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1421 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1421 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1421 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1421 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5)
#line 1421 "inst_util.m"
{
#line 1424 "inst_util.m"
  {
#line 1424 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1424 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1424 "inst_util.m"
      if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1424 "inst_util.m"
        {
#line 1424 "inst_util.m"
          *check_hlds__inst_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1424 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1424 "inst_util.m"
        }
#line 1424 "inst_util.m"
      else
#line 1435 "inst_util.m"
        {
#line 1436 "inst_util.m"
          {
#line 1436 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1436 "inst_util.m"
            return;
          }
#line 1435 "inst_util.m"
        }
#line 1424 "inst_util.m"
    else
#line 1424 "inst_util.m"
      {
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1424 "inst_util.m"
        MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1424 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1437 "inst_util.m"
          {
#line 1438 "inst_util.m"
            {
#line 1438 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1438 "inst_util.m"
              return;
            }
#line 1437 "inst_util.m"
          }
#line 1424 "inst_util.m"
        else
#line 1426 "inst_util.m"
          {
#line 1426 "inst_util.m"
            MR_Word check_hlds__inst_util__Live_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1426 "inst_util.m"
            MR_Word check_hlds__inst_util__Lives_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1426 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_13;
#line 1426 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_14;
#line 1426 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1430 "inst_util.m"
#line 1430 "inst_util.m"
            switch (check_hlds__inst_util__Live_11) {
#line 1430 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1430 "inst_util.m"
              case (MR_Integer) 1:
#line 1431 "inst_util.m"
                {
#line 1432 "inst_util.m"
                  check_hlds__inst_util__Inst_13 = check_hlds__inst_util__V_37_37;
#line 1431 "inst_util.m"
                  check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1431 "inst_util.m"
                }
#line 1430 "inst_util.m"
                break;
#line 1430 "inst_util.m"
              case (MR_Integer) 0:
#line 1428 "inst_util.m"
                {
#line 1428 "inst_util.m"
                  check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__V_37_37, &check_hlds__inst_util__Inst_13, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
                }
#line 1430 "inst_util.m"
                break;
#line 1430 "inst_util.m"
            }
#line 1434 "inst_util.m"
            {
#line 1434 "inst_util.m"
              check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__V_36_36, check_hlds__inst_util__Lives_12, &check_hlds__inst_util__Insts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);
            }
#line 1426 "inst_util.m"
            {
#line 1426 "inst_util.m"
              MR_Word base;
#line 1426 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "inst_util.m"
              *check_hlds__inst_util__HeadVar__3_3 = base;
#line 1426 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_13));
#line 1426 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_14));
#line 1426 "inst_util.m"
            }
#line 1426 "inst_util.m"
          }
#line 1424 "inst_util.m"
      }
#line 1424 "inst_util.m"
  }
#line 1421 "inst_util.m"
}

#line 1401 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1401 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1401 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1401 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1401 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1401 "inst_util.m"
{
#line 1406 "inst_util.m"
  {
#line 1406 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1406 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1406 "inst_util.m"
      {
#line 1406 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1406 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1406 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1406 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1406 "inst_util.m"
      }
#line 1406 "inst_util.m"
    else
#line 1408 "inst_util.m"
      {
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1408 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1407 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1407 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1407 "inst_util.m"
          {
#line 1407 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1407 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1409 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1409 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1409 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1411 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1410 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1411 "inst_util.m"
            else
#line 1412 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1414 "inst_util.m"
            {
#line 1414 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1408 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1408 "inst_util.m"
              {
#line 1415 "inst_util.m"
                {
#line 1415 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1408 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1408 "inst_util.m"
                  {
#line 1408 "inst_util.m"
                    {
#line 1408 "inst_util.m"
                      MR_Word base;
#line 1408 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1408 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1408 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1408 "inst_util.m"
                    }
#line 1417 "inst_util.m"
                    {
#line 1417 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1417 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1408 "inst_util.m"
                  }
#line 1408 "inst_util.m"
              }
#line 1407 "inst_util.m"
          }
#line 1408 "inst_util.m"
      }
#line 1406 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1406 "inst_util.m"
  }
#line 1401 "inst_util.m"
}

#line 1390 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
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
#line 1394 "inst_util.m"
  {
#line 1394 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1394 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1394 "inst_util.m"
      {
#line 1394 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1394 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1394 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1394 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1394 "inst_util.m"
      }
#line 1394 "inst_util.m"
    else
#line 1396 "inst_util.m"
      {
#line 1396 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1396 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1396 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1396 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1396 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1396 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1396 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1397 "inst_util.m"
        {
#line 1397 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1396 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1396 "inst_util.m"
          {
#line 1398 "inst_util.m"
            {
#line 1398 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1396 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1396 "inst_util.m"
              {
#line 1395 "inst_util.m"
                {
#line 1395 "inst_util.m"
                  MR_Word base;
#line 1395 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1395 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1395 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1395 "inst_util.m"
                }
#line 1399 "inst_util.m"
                {
#line 1399 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1399 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1396 "inst_util.m"
              }
#line 1396 "inst_util.m"
          }
#line 1396 "inst_util.m"
      }
#line 1394 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1394 "inst_util.m"
  }
#line 1390 "inst_util.m"
}

#line 1374 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1374 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1374 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1374 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1374 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1374 "inst_util.m"
{
#line 1379 "inst_util.m"
  {
#line 1379 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1379 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1379 "inst_util.m"
      {
#line 1379 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1379 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1379 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1379 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1379 "inst_util.m"
      }
#line 1379 "inst_util.m"
    else
#line 1381 "inst_util.m"
      {
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_20;
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_21;
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 0)));
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 1)));
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1381 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1383 "inst_util.m"
        {
#line 1383 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1381 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1381 "inst_util.m"
          {
#line 1385 "inst_util.m"
            {
#line 1385 "inst_util.m"
              check_hlds__inst_util__Bound_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1385 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1385 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1385 "inst_util.m"
            }
#line 1386 "inst_util.m"
            {
#line 1386 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__Bounds0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Bounds_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1381 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1381 "inst_util.m"
              {
#line 1381 "inst_util.m"
                {
#line 1381 "inst_util.m"
                  MR_Word base;
#line 1381 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1381 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_20));
#line 1381 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_21));
#line 1381 "inst_util.m"
                }
#line 1388 "inst_util.m"
                {
#line 1388 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1388 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1381 "inst_util.m"
              }
#line 1381 "inst_util.m"
          }
#line 1381 "inst_util.m"
      }
#line 1379 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1379 "inst_util.m"
  }
#line 1374 "inst_util.m"
}

#line 1267 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1267 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1267 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1267 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1267 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47)
#line 1267 "inst_util.m"
{
#line 1273 "inst_util.m"
  {
#line 1273 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1273 "inst_util.m"
#line 1273 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
#line 1273 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1273 "inst_util.m"
      case (MR_Integer) 0:
#line 1273 "inst_util.m"
#line 1273 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
#line 1273 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1273 "inst_util.m"
          case (MR_Integer) 0:
#line 1283 "inst_util.m"
            {
#line 1283 "inst_util.m"
              MR_Word check_hlds__inst_util__V_71_71;
#line 1283 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_73;

#line 1284 "inst_util.m"
              {
#line 1284 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_73);
              }
#line 1283 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1283 "inst_util.m"
                {
#line 1285 "inst_util.m"
                  check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1286 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1283 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1285 "inst_util.m"
                  {
#line 1285 "inst_util.m"
                    MR_Word base;
#line 1285 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1285 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_73));
#line 1285 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 1285 "inst_util.m"
                  }
#line 1285 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1283 "inst_util.m"
                }
#line 1283 "inst_util.m"
            }
#line 1273 "inst_util.m"
            break;
#line 1273 "inst_util.m"
          case (MR_Integer) 1:
#line 1273 "inst_util.m"
            {
#line 1274 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1275 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1273 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1273 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1273 "inst_util.m"
            }
#line 1273 "inst_util.m"
            break;
#line 1273 "inst_util.m"
        }
#line 1273 "inst_util.m"
        break;
#line 1273 "inst_util.m"
      case (MR_Integer) 1:
#line 1288 "inst_util.m"
        {
#line 1288 "inst_util.m"
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1288 "inst_util.m"
          MR_Word check_hlds__inst_util__Any_20;
#line 1288 "inst_util.m"
          MR_Word check_hlds__inst_util__V_65_65;
#line 1288 "inst_util.m"
          MR_Word check_hlds__inst_util__V_67_67;

#line 1293 "inst_util.m"
          {
#line 1293 "inst_util.m"
            check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_67_67, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1293 "inst_util.m"
          }
#line 1293 "inst_util.m"
          {
#line 1293 "inst_util.m"
            check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 0) = ((MR_Box) (check_hlds__inst_util__Live_10));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 3) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1293 "inst_util.m"
          }
#line 1293 "inst_util.m"
          {
#line 1293 "inst_util.m"
            check_hlds__inst_util__Any_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 1) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1293 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 2) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 1293 "inst_util.m"
          }
#line 1294 "inst_util.m"
          {
#line 1294 "inst_util.m"
            MR_Word base;
#line 1294 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = base;
#line 1294 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1294 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Any_20));
#line 1294 "inst_util.m"
          }
#line 1295 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1288 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1288 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1288 "inst_util.m"
        }
#line 1273 "inst_util.m"
        break;
#line 1273 "inst_util.m"
      case (MR_Integer) 2:
#line 1277 "inst_util.m"
        {
#line 1277 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1277 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1277 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_18;

#line 1279 "inst_util.m"
          {
#line 1279 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
#line 1277 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1277 "inst_util.m"
            {
#line 1281 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1277 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1280 "inst_util.m"
              {
#line 1280 "inst_util.m"
                MR_Word base;
#line 1280 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1280 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1280 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1280 "inst_util.m"
              }
#line 1280 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1277 "inst_util.m"
            }
#line 1277 "inst_util.m"
        }
#line 1273 "inst_util.m"
        break;
#line 1273 "inst_util.m"
      case (MR_Integer) 3:
#line 1273 "inst_util.m"
#line 1273 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
#line 1273 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1273 "inst_util.m"
          case (MR_Integer) 0:
#line 1297 "inst_util.m"
            {
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_23;
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__Detism1_24;
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__V_63_63;
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__V_64_64;
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_75;
#line 1297 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResults0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));

#line 1299 "inst_util.m"
              {
#line 1299 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_74, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
#line 1297 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1297 "inst_util.m"
                {
#line 1300 "inst_util.m"
                  {
#line 1300 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_22, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_23, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                  }
#line 1297 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1297 "inst_util.m"
                    {
#line 1303 "inst_util.m"
                      check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1304 "inst_util.m"
                      check_hlds__inst_util__V_64_64 = (MR_Integer) 1;
#line 1303 "inst_util.m"
                      {
#line 1303 "inst_util.m"
                        MR_Word base;
#line 1303 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 1303 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1303 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1303 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 1303 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_23));
#line 1303 "inst_util.m"
                      }
#line 1304 "inst_util.m"
                      {
#line 1304 "inst_util.m"
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__V_64_64, check_hlds__inst_util__Detism_14);
                      }
#line 1304 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1297 "inst_util.m"
                    }
#line 1297 "inst_util.m"
                }
#line 1297 "inst_util.m"
            }
#line 1273 "inst_util.m"
            break;
#line 1273 "inst_util.m"
          case (MR_Integer) 1:
#line 1306 "inst_util.m"
            {
#line 1306 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1306 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1306 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_77;

#line 1308 "inst_util.m"
              {
#line 1308 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_76, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_77);
              }
#line 1306 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1306 "inst_util.m"
                {
#line 1310 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1306 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1309 "inst_util.m"
                  {
#line 1309 "inst_util.m"
                    MR_Word base;
#line 1309 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1309 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1309 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_77));
#line 1309 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_25));
#line 1309 "inst_util.m"
                  }
#line 1309 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1306 "inst_util.m"
                }
#line 1306 "inst_util.m"
            }
#line 1273 "inst_util.m"
            break;
#line 1273 "inst_util.m"
          case (MR_Integer) 2:
#line 1312 "inst_util.m"
            {
#line 1313 "inst_util.m"
              {
#line 1313 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_any_inst\'/8", (MR_String) "free inst var");
              }
#line 1312 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1312 "inst_util.m"
            }
#line 1273 "inst_util.m"
            break;
#line 1273 "inst_util.m"
          case (MR_Integer) 3:
#line 1315 "inst_util.m"
            {
#line 1315 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1315 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1315 "inst_util.m"
              MR_Word check_hlds__inst_util__V_54_54;

#line 1317 "inst_util.m"
              {
#line 1317 "inst_util.m"
                check_hlds__inst_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_54_54, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1317 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1317 "inst_util.m"
              }
#line 1316 "inst_util.m"
              {
#line 1316 "inst_util.m"
                return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_27, check_hlds__inst_util__SubInst0_28, check_hlds__inst_util__V_54_54, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
              }
#line 1315 "inst_util.m"
            }
#line 1273 "inst_util.m"
            break;
#line 1273 "inst_util.m"
          case (MR_Integer) 4:
#line 1323 "inst_util.m"
            {
#line 1323 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1323 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_32;
#line 1323 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstTable0_33;
#line 1323 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstInfo_34;
#line 1323 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstName_35;
#line 1323 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_36;
#line 1323 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstTable1_37;
#line 1323 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInst_39;

#line 1325 "inst_util.m"
              {
#line 1325 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__InstTable0_32);
              }
#line 1326 "inst_util.m"
              {
#line 1326 "inst_util.m"
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__AnyInstTable0_33);
              }
#line 1327 "inst_util.m"
              {
#line 1327 "inst_util.m"
                check_hlds__inst_util__AnyInstInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_34, 0) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1327 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_34, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1327 "inst_util.m"
              }
#line 1328 "inst_util.m"
              {
#line 1328 "inst_util.m"
                check_hlds__inst_util__AnyInstName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1328 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 1) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1328 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1328 "inst_util.m"
              }
#line 1329 "inst_util.m"
              {
#line 1329 "inst_util.m"
                hlds__hlds_data__search_insert_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_34, &check_hlds__inst_util__MaybeMaybeInst_36, check_hlds__inst_util__AnyInstTable0_33, &check_hlds__inst_util__AnyInstTable1_37);
              }
#line 1343 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1344 "inst_util.m"
                {
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_40;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_41;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_42;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__AnyInstTable2_43;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__AnyInstTable_44;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_45;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_50_50;
#line 1344 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_78;

#line 1347 "inst_util.m"
                  {
#line 1347 "inst_util.m"
                    hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable1_37, check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__InstTable1_40);
                  }
#line 1348 "inst_util.m"
                  {
#line 1348 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                  }
#line 1352 "inst_util.m"
                  {
#line 1352 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__InstName_31, &check_hlds__inst_util__SubInst0_78);
                  }
#line 1353 "inst_util.m"
                  {
#line 1353 "inst_util.m"
                    check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__SubInst0_78, &check_hlds__inst_util__SubInst1_41);
                  }
#line 1354 "inst_util.m"
                  {
#line 1354 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__SubInst1_41, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__AnyInst_39, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49);
                  }
#line 1344 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1344 "inst_util.m"
                    {
#line 1359 "inst_util.m"
                      {
#line 1359 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, &check_hlds__inst_util__InstTable2_42);
                      }
#line 1360 "inst_util.m"
                      {
#line 1360 "inst_util.m"
                        hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__AnyInstTable2_43);
                      }
#line 1361 "inst_util.m"
                      {
#line 1361 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_50_50, 0) = ((MR_Box) (check_hlds__inst_util__AnyInst_39));
#line 1361 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_50_50, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1361 "inst_util.m"
                      }
#line 1361 "inst_util.m"
                      {
#line 1361 "inst_util.m"
                        hlds__hlds_data__det_update_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_34, check_hlds__inst_util__V_50_50, check_hlds__inst_util__AnyInstTable2_43, &check_hlds__inst_util__AnyInstTable_44);
                      }
#line 1363 "inst_util.m"
                      {
#line 1363 "inst_util.m"
                        hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable_44, check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__InstTable_45);
                      }
#line 1364 "inst_util.m"
                      {
#line 1364 "inst_util.m"
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_45, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                      }
#line 1364 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1344 "inst_util.m"
                    }
#line 1344 "inst_util.m"
                }
#line 1343 "inst_util.m"
              else
#line 1332 "inst_util.m"
                {
#line 1332 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_36, (MR_Integer) 0)));

#line 1335 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1336 "inst_util.m"
                    {
#line 1337 "inst_util.m"
                      {
#line 1337 "inst_util.m"
                        check_hlds__inst_util__AnyInst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1337 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_39, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_35));
#line 1337 "inst_util.m"
                      }
#line 1338 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1336 "inst_util.m"
                    }
#line 1335 "inst_util.m"
                  else
#line 1334 "inst_util.m"
                    {
#line 1334 "inst_util.m"
                      check_hlds__inst_util__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_38, (MR_Integer) 0)));
#line 1334 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_38, (MR_Integer) 1)));
#line 1334 "inst_util.m"
                    }
#line 1332 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1332 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1332 "inst_util.m"
                }
#line 1323 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1323 "inst_util.m"
                {
#line 1367 "inst_util.m"
                  {
#line 1367 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__AnyInst_39, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47, check_hlds__inst_util__AnyInstName_35);
                  }
#line 1369 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1368 "inst_util.m"
                    {
#line 1368 "inst_util.m"
                      MR_Word base;
#line 1368 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 1368 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1368 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_35));
#line 1368 "inst_util.m"
                    }
#line 1369 "inst_util.m"
                  else
#line 1370 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__AnyInst_39;
#line 1369 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1323 "inst_util.m"
                }
#line 1323 "inst_util.m"
            }
#line 1273 "inst_util.m"
            break;
#line 1273 "inst_util.m"
          case (MR_Integer) 5:
#line 1319 "inst_util.m"
            {
#line 1320 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_util_scalar_common_1[2]);
#line 1321 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1319 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1319 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1319 "inst_util.m"
            }
#line 1273 "inst_util.m"
            break;
#line 1273 "inst_util.m"
        }
#line 1273 "inst_util.m"
        break;
#line 1273 "inst_util.m"
    }
#line 1273 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1273 "inst_util.m"
  }
#line 1267 "inst_util.m"
}

#line 1246 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1246 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1246 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1246 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1246 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1246 "inst_util.m"
{
#line 1251 "inst_util.m"
  {
#line 1251 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1251 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1251 "inst_util.m"
      {
#line 1251 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1251 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1251 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1251 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1251 "inst_util.m"
      }
#line 1251 "inst_util.m"
    else
#line 1253 "inst_util.m"
      {
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst_20;
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_21;
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 0)));
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 1)));
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1253 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1255 "inst_util.m"
        {
#line 1255 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1253 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1253 "inst_util.m"
          {
#line 1257 "inst_util.m"
            {
#line 1257 "inst_util.m"
              check_hlds__inst_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1257 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1257 "inst_util.m"
            }
#line 1258 "inst_util.m"
            {
#line 1258 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInsts_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1253 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1253 "inst_util.m"
              {
#line 1253 "inst_util.m"
                {
#line 1253 "inst_util.m"
                  MR_Word base;
#line 1253 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1253 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_20));
#line 1253 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInsts_21));
#line 1253 "inst_util.m"
                }
#line 1260 "inst_util.m"
                {
#line 1260 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1260 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1253 "inst_util.m"
              }
#line 1253 "inst_util.m"
          }
#line 1253 "inst_util.m"
      }
#line 1251 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1251 "inst_util.m"
  }
#line 1246 "inst_util.m"
}

#line 1143 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1143 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1143 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1143 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1143 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45)
#line 1143 "inst_util.m"
{
#line 1149 "inst_util.m"
  {
#line 1149 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1149 "inst_util.m"
#line 1149 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
#line 1149 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1149 "inst_util.m"
      case (MR_Integer) 0:
#line 1149 "inst_util.m"
#line 1149 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
#line 1149 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1149 "inst_util.m"
          case (MR_Integer) 0:
#line 1158 "inst_util.m"
            {
#line 1158 "inst_util.m"
              MR_Word check_hlds__inst_util__V_67_67;
#line 1158 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_69;

#line 1159 "inst_util.m"
              {
#line 1159 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_69);
              }
#line 1158 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1158 "inst_util.m"
                {
#line 1160 "inst_util.m"
                  check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1161 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1158 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1160 "inst_util.m"
                  {
#line 1160 "inst_util.m"
                    MR_Word base;
#line 1160 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1160 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1160 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1160 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1160 "inst_util.m"
                  }
#line 1160 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1158 "inst_util.m"
                }
#line 1158 "inst_util.m"
            }
#line 1149 "inst_util.m"
            break;
#line 1149 "inst_util.m"
          case (MR_Integer) 1:
#line 1149 "inst_util.m"
            {
#line 1150 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1151 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1149 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1149 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1149 "inst_util.m"
            }
#line 1149 "inst_util.m"
            break;
#line 1149 "inst_util.m"
        }
#line 1149 "inst_util.m"
        break;
#line 1149 "inst_util.m"
      case (MR_Integer) 1:
#line 1163 "inst_util.m"
        {
#line 1163 "inst_util.m"
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1163 "inst_util.m"
          MR_Word check_hlds__inst_util__V_64_64;
#line 1163 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_70;

#line 1164 "inst_util.m"
          {
#line 1164 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_70);
          }
#line 1163 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1163 "inst_util.m"
            {
#line 1166 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1163 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1165 "inst_util.m"
              {
#line 1165 "inst_util.m"
                check_hlds__inst_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1165 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_70));
#line 1165 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 2) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1165 "inst_util.m"
              }
#line 1165 "inst_util.m"
              {
#line 1165 "inst_util.m"
                MR_Word base;
#line 1165 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1165 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1165 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 1165 "inst_util.m"
              }
#line 1165 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1163 "inst_util.m"
            }
#line 1163 "inst_util.m"
        }
#line 1149 "inst_util.m"
        break;
#line 1149 "inst_util.m"
      case (MR_Integer) 2:
#line 1153 "inst_util.m"
        {
#line 1153 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1153 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1153 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_18;

#line 1154 "inst_util.m"
          {
#line 1154 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
#line 1153 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1153 "inst_util.m"
            {
#line 1156 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1153 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1155 "inst_util.m"
              {
#line 1155 "inst_util.m"
                MR_Word base;
#line 1155 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1155 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1155 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1155 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1155 "inst_util.m"
              }
#line 1155 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1153 "inst_util.m"
            }
#line 1153 "inst_util.m"
        }
#line 1149 "inst_util.m"
        break;
#line 1149 "inst_util.m"
      case (MR_Integer) 3:
#line 1149 "inst_util.m"
#line 1149 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
#line 1149 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1149 "inst_util.m"
          case (MR_Integer) 0:
#line 1168 "inst_util.m"
            {
#line 1168 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1168 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1168 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_22;
#line 1168 "inst_util.m"
              MR_Word check_hlds__inst_util__Detism1_23;
#line 1168 "inst_util.m"
              MR_Word check_hlds__inst_util__V_61_61;
#line 1168 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1168 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_72;

#line 1169 "inst_util.m"
              {
#line 1169 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_71, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_72);
              }
#line 1168 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1168 "inst_util.m"
                {
#line 1170 "inst_util.m"
                  {
#line 1170 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_21, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_22, &check_hlds__inst_util__Detism1_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                  }
#line 1168 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1168 "inst_util.m"
                    {
#line 1173 "inst_util.m"
                      check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 1172 "inst_util.m"
                      {
#line 1172 "inst_util.m"
                        MR_Word base;
#line 1172 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 1172 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1172 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_72));
#line 1172 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_20));
#line 1172 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_22));
#line 1172 "inst_util.m"
                      }
#line 1173 "inst_util.m"
                      {
#line 1173 "inst_util.m"
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_23, check_hlds__inst_util__V_61_61, check_hlds__inst_util__Detism_14);
                      }
#line 1173 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1168 "inst_util.m"
                    }
#line 1168 "inst_util.m"
                }
#line 1168 "inst_util.m"
            }
#line 1149 "inst_util.m"
            break;
#line 1149 "inst_util.m"
          case (MR_Integer) 1:
#line 1175 "inst_util.m"
            {
#line 1175 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1175 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1175 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_75;

#line 1176 "inst_util.m"
              {
#line 1176 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_73, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
#line 1175 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1175 "inst_util.m"
                {
#line 1178 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1175 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1177 "inst_util.m"
                  {
#line 1177 "inst_util.m"
                    MR_Word base;
#line 1177 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1177 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1177 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1177 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_74));
#line 1177 "inst_util.m"
                  }
#line 1177 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1175 "inst_util.m"
                }
#line 1175 "inst_util.m"
            }
#line 1149 "inst_util.m"
            break;
#line 1149 "inst_util.m"
          case (MR_Integer) 2:
#line 1180 "inst_util.m"
            {
#line 1181 "inst_util.m"
              {
#line 1181 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_ground_inst\'/8", (MR_String) "free inst var");
              }
#line 1180 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1180 "inst_util.m"
            }
#line 1149 "inst_util.m"
            break;
#line 1149 "inst_util.m"
          case (MR_Integer) 3:
#line 1183 "inst_util.m"
            {
#line 1183 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1183 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1183 "inst_util.m"
              MR_Word check_hlds__inst_util__V_52_52;

#line 1185 "inst_util.m"
              {
#line 1185 "inst_util.m"
                check_hlds__inst_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1185 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 1) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1185 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1185 "inst_util.m"
              }
#line 1184 "inst_util.m"
              {
#line 1184 "inst_util.m"
                return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_25, check_hlds__inst_util__SubInst0_26, check_hlds__inst_util__V_52_52, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
              }
#line 1183 "inst_util.m"
            }
#line 1149 "inst_util.m"
            break;
#line 1149 "inst_util.m"
          case (MR_Integer) 4:
#line 1191 "inst_util.m"
            {
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_30;
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstTable0_31;
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstInfo_32;
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstName_33;
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_34;
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstTable1_35;
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInst_37;

#line 1193 "inst_util.m"
              {
#line 1193 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__InstTable0_30);
              }
#line 1194 "inst_util.m"
              {
#line 1194 "inst_util.m"
                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__GroundInstTable0_31);
              }
#line 1195 "inst_util.m"
              {
#line 1195 "inst_util.m"
                check_hlds__inst_util__GroundInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 0) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1195 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1195 "inst_util.m"
              }
#line 1196 "inst_util.m"
              {
#line 1196 "inst_util.m"
                check_hlds__inst_util__GroundInstName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1196 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 1) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1196 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1196 "inst_util.m"
              }
#line 1197 "inst_util.m"
              {
#line 1197 "inst_util.m"
                hlds__hlds_data__search_insert_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, &check_hlds__inst_util__MaybeMaybeInst_34, check_hlds__inst_util__GroundInstTable0_31, &check_hlds__inst_util__GroundInstTable1_35);
              }
#line 1211 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "inst_util.m"
                {
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_38;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_39;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_40;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__GroundInstTable2_41;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__GroundInstTable_42;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_43;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_48_48;
#line 1212 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_76;

#line 1215 "inst_util.m"
                  {
#line 1215 "inst_util.m"
                    hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable1_35, check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__InstTable1_38);
                  }
#line 1217 "inst_util.m"
                  {
#line 1217 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46);
                  }
#line 1221 "inst_util.m"
                  {
#line 1221 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__InstName_29, &check_hlds__inst_util__SubInst0_76);
                  }
#line 1222 "inst_util.m"
                  {
#line 1222 "inst_util.m"
                    check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__SubInst0_76, &check_hlds__inst_util__SubInst1_39);
                  }
#line 1223 "inst_util.m"
                  {
#line 1223 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__SubInst1_39, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__GroundInst_37, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47);
                  }
#line 1212 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1212 "inst_util.m"
                    {
#line 1229 "inst_util.m"
                      {
#line 1229 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, &check_hlds__inst_util__InstTable2_40);
                      }
#line 1230 "inst_util.m"
                      {
#line 1230 "inst_util.m"
                        hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__GroundInstTable2_41);
                      }
#line 1232 "inst_util.m"
                      {
#line 1232 "inst_util.m"
                        check_hlds__inst_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__GroundInst_37));
#line 1232 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1232 "inst_util.m"
                      }
#line 1231 "inst_util.m"
                      {
#line 1231 "inst_util.m"
                        hlds__hlds_data__det_update_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, check_hlds__inst_util__V_48_48, check_hlds__inst_util__GroundInstTable2_41, &check_hlds__inst_util__GroundInstTable_42);
                      }
#line 1234 "inst_util.m"
                      {
#line 1234 "inst_util.m"
                        hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable_42, check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__InstTable_43);
                      }
#line 1236 "inst_util.m"
                      {
#line 1236 "inst_util.m"
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_43, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                      }
#line 1236 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1212 "inst_util.m"
                    }
#line 1212 "inst_util.m"
                }
#line 1211 "inst_util.m"
              else
#line 1200 "inst_util.m"
                {
#line 1200 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_34, (MR_Integer) 0)));

#line 1203 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "inst_util.m"
                    {
#line 1205 "inst_util.m"
                      {
#line 1205 "inst_util.m"
                        check_hlds__inst_util__GroundInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1205 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1205 "inst_util.m"
                      }
#line 1206 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1204 "inst_util.m"
                    }
#line 1203 "inst_util.m"
                  else
#line 1202 "inst_util.m"
                    {
#line 1202 "inst_util.m"
                      check_hlds__inst_util__GroundInst_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 0)));
#line 1202 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 1)));
#line 1202 "inst_util.m"
                    }
#line 1200 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1200 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1200 "inst_util.m"
                }
#line 1191 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1191 "inst_util.m"
                {
#line 1239 "inst_util.m"
                  {
#line 1239 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__GroundInst_37, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45, check_hlds__inst_util__GroundInstName_33);
                  }
#line 1241 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1240 "inst_util.m"
                    {
#line 1240 "inst_util.m"
                      MR_Word base;
#line 1240 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 1240 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1240 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1240 "inst_util.m"
                    }
#line 1241 "inst_util.m"
                  else
#line 1242 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__GroundInst_37;
#line 1241 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1191 "inst_util.m"
                }
#line 1191 "inst_util.m"
            }
#line 1149 "inst_util.m"
            break;
#line 1149 "inst_util.m"
          case (MR_Integer) 5:
#line 1187 "inst_util.m"
            {
#line 1188 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__inst_util_scalar_common_3[0]);
#line 1189 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1187 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1187 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1187 "inst_util.m"
            }
#line 1149 "inst_util.m"
            break;
#line 1149 "inst_util.m"
        }
#line 1149 "inst_util.m"
        break;
#line 1149 "inst_util.m"
    }
#line 1149 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1149 "inst_util.m"
  }
#line 1143 "inst_util.m"
}

#line 1128 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1128 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1128 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1128 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1128 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1128 "inst_util.m"
{
#line 1132 "inst_util.m"
  {
#line 1132 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1132 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1132 "inst_util.m"
      {
#line 1132 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1132 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1132 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1132 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1132 "inst_util.m"
      }
#line 1132 "inst_util.m"
    else
#line 1134 "inst_util.m"
      {
#line 1134 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1134 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1134 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1134 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1134 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1134 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1134 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1135 "inst_util.m"
        {
#line 1135 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1134 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1134 "inst_util.m"
          {
#line 1136 "inst_util.m"
            {
#line 1136 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1134 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1134 "inst_util.m"
              {
#line 1133 "inst_util.m"
                {
#line 1133 "inst_util.m"
                  MR_Word base;
#line 1133 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1133 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1133 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1133 "inst_util.m"
                }
#line 1138 "inst_util.m"
                {
#line 1138 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1138 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1134 "inst_util.m"
              }
#line 1134 "inst_util.m"
          }
#line 1134 "inst_util.m"
      }
#line 1132 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1132 "inst_util.m"
  }
#line 1128 "inst_util.m"
}

#line 1109 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1109 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1109 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1109 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1109 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1109 "inst_util.m"
{
#line 1114 "inst_util.m"
  {
#line 1114 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1114 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1114 "inst_util.m"
      {
#line 1114 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1114 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1114 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1114 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1114 "inst_util.m"
      }
#line 1114 "inst_util.m"
    else
#line 1116 "inst_util.m"
      {
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1116 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1115 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1115 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1115 "inst_util.m"
          {
#line 1115 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1115 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1117 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1117 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1117 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1119 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1118 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1119 "inst_util.m"
            else
#line 1120 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1122 "inst_util.m"
            {
#line 1122 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1116 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1116 "inst_util.m"
              {
#line 1124 "inst_util.m"
                {
#line 1124 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1116 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1116 "inst_util.m"
                  {
#line 1116 "inst_util.m"
                    {
#line 1116 "inst_util.m"
                      MR_Word base;
#line 1116 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1116 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1116 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1116 "inst_util.m"
                    }
#line 1126 "inst_util.m"
                    {
#line 1126 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1126 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1116 "inst_util.m"
                  }
#line 1116 "inst_util.m"
              }
#line 1115 "inst_util.m"
          }
#line 1116 "inst_util.m"
      }
#line 1114 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1114 "inst_util.m"
  }
#line 1109 "inst_util.m"
}

#line 992 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 992 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 992 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12)
#line 992 "inst_util.m"
{
#line 1015 "inst_util.m"
  {
#line 1015 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1015 "inst_util.m"
#line 1015 "inst_util.m"
    switch (check_hlds__inst_util__UniqA_10) {
#line 1015 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1015 "inst_util.m"
      case (MR_Integer) 3:
#line 1086 "inst_util.m"
        {
#line 1102 "inst_util.m"
#line 1102 "inst_util.m"
          switch (check_hlds__inst_util__Live_7) {
#line 1102 "inst_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "inst_util.m"
            case (MR_Integer) 1:
#line 1102 "inst_util.m"
              {
#line 1104 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1102 "inst_util.m"
                if (!(check_hlds__inst_util__succeeded))
#line 1105 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1102 "inst_util.m"
              }
#line 1102 "inst_util.m"
              break;
#line 1102 "inst_util.m"
            case (MR_Integer) 0:
#line 1102 "inst_util.m"
              {
#line 1103 "inst_util.m"
                {
#line 1103 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
#line 1102 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1102 "inst_util.m"
              }
#line 1102 "inst_util.m"
              break;
#line 1102 "inst_util.m"
          }
#line 1086 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1086 "inst_util.m"
            {
#line 1088 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1088 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1086 "inst_util.m"
            }
#line 1086 "inst_util.m"
        }
#line 1015 "inst_util.m"
        break;
#line 1015 "inst_util.m"
      case (MR_Integer) 4:
#line 1090 "inst_util.m"
        {
#line 1102 "inst_util.m"
#line 1102 "inst_util.m"
          switch (check_hlds__inst_util__Live_7) {
#line 1102 "inst_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "inst_util.m"
            case (MR_Integer) 1:
#line 1102 "inst_util.m"
              {
#line 1104 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1102 "inst_util.m"
                if (!(check_hlds__inst_util__succeeded))
#line 1105 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1102 "inst_util.m"
              }
#line 1102 "inst_util.m"
              break;
#line 1102 "inst_util.m"
            case (MR_Integer) 0:
#line 1102 "inst_util.m"
              {
#line 1103 "inst_util.m"
                {
#line 1103 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
#line 1102 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1102 "inst_util.m"
              }
#line 1102 "inst_util.m"
              break;
#line 1102 "inst_util.m"
          }
#line 1090 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1090 "inst_util.m"
            {
#line 1092 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__UniqB_11 == (MR_Integer) 3);
#line 1094 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1093 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1094 "inst_util.m"
              else
#line 1095 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1094 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1090 "inst_util.m"
            }
#line 1090 "inst_util.m"
        }
#line 1015 "inst_util.m"
        break;
#line 1015 "inst_util.m"
      case (MR_Integer) 2:
#line 1056 "inst_util.m"
#line 1056 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1056 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1056 "inst_util.m"
          case (MR_Integer) 3:
#line 1077 "inst_util.m"
            {
#line 1102 "inst_util.m"
#line 1102 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1102 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "inst_util.m"
                case (MR_Integer) 1:
#line 1102 "inst_util.m"
                  {
#line 1104 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1102 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1105 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
                case (MR_Integer) 0:
#line 1102 "inst_util.m"
                  {
#line 1103 "inst_util.m"
                    {
#line 1103 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1102 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
              }
#line 1077 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1077 "inst_util.m"
                {
#line 1079 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1079 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1077 "inst_util.m"
                }
#line 1077 "inst_util.m"
            }
#line 1056 "inst_util.m"
            break;
#line 1056 "inst_util.m"
          case (MR_Integer) 4:
#line 1081 "inst_util.m"
            {
#line 1102 "inst_util.m"
#line 1102 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1102 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "inst_util.m"
                case (MR_Integer) 1:
#line 1102 "inst_util.m"
                  {
#line 1104 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1102 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1105 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
                case (MR_Integer) 0:
#line 1102 "inst_util.m"
                  {
#line 1103 "inst_util.m"
                    {
#line 1103 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1102 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
              }
#line 1081 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1081 "inst_util.m"
                {
#line 1083 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1083 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1081 "inst_util.m"
                }
#line 1081 "inst_util.m"
            }
#line 1056 "inst_util.m"
            break;
#line 1056 "inst_util.m"
          case (MR_Integer) 2:
#line 1072 "inst_util.m"
            {
#line 1072 "inst_util.m"
#line 1072 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1072 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1072 "inst_util.m"
                case (MR_Integer) 1:
#line 1074 "inst_util.m"
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
#line 1056 "inst_util.m"
            break;
#line 1056 "inst_util.m"
          case (MR_Integer) 0:
#line 1055 "inst_util.m"
            {
#line 1055 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1055 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1055 "inst_util.m"
            }
#line 1056 "inst_util.m"
            break;
#line 1056 "inst_util.m"
          case (MR_Integer) 1:
#line 1061 "inst_util.m"
            {
#line 1061 "inst_util.m"
#line 1061 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1061 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1061 "inst_util.m"
                case (MR_Integer) 1:
#line 1065 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1061 "inst_util.m"
                  break;
#line 1061 "inst_util.m"
                case (MR_Integer) 0:
#line 1060 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1061 "inst_util.m"
                  break;
#line 1061 "inst_util.m"
              }
#line 1061 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1061 "inst_util.m"
            }
#line 1056 "inst_util.m"
            break;
#line 1056 "inst_util.m"
        }
#line 1015 "inst_util.m"
        break;
#line 1015 "inst_util.m"
      case (MR_Integer) 0:
#line 1006 "inst_util.m"
#line 1006 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1006 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1006 "inst_util.m"
          case (MR_Integer) 3:
#line 1007 "inst_util.m"
            {
#line 1102 "inst_util.m"
#line 1102 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1102 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "inst_util.m"
                case (MR_Integer) 1:
#line 1102 "inst_util.m"
                  {
#line 1104 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1102 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1105 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
                case (MR_Integer) 0:
#line 1102 "inst_util.m"
                  {
#line 1103 "inst_util.m"
                    {
#line 1103 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1102 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
              }
#line 1007 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1007 "inst_util.m"
                {
#line 1009 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1009 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1007 "inst_util.m"
                }
#line 1007 "inst_util.m"
            }
#line 1006 "inst_util.m"
            break;
#line 1006 "inst_util.m"
          case (MR_Integer) 4:
#line 1011 "inst_util.m"
            {
#line 1102 "inst_util.m"
#line 1102 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1102 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "inst_util.m"
                case (MR_Integer) 1:
#line 1102 "inst_util.m"
                  {
#line 1104 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1102 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1105 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
                case (MR_Integer) 0:
#line 1102 "inst_util.m"
                  {
#line 1103 "inst_util.m"
                    {
#line 1103 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1102 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
              }
#line 1011 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1011 "inst_util.m"
                {
#line 1013 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1013 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1011 "inst_util.m"
                }
#line 1011 "inst_util.m"
            }
#line 1006 "inst_util.m"
            break;
#line 1006 "inst_util.m"
          case (MR_Integer) 2:
#line 1006 "inst_util.m"
          case (MR_Integer) 0:
#line 1006 "inst_util.m"
          case (MR_Integer) 1:
#line 1005 "inst_util.m"
            {
#line 1005 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1005 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1005 "inst_util.m"
            }
#line 1006 "inst_util.m"
            break;
#line 1006 "inst_util.m"
        }
#line 1015 "inst_util.m"
        break;
#line 1015 "inst_util.m"
      case (MR_Integer) 1:
#line 1021 "inst_util.m"
#line 1021 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1021 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1021 "inst_util.m"
          case (MR_Integer) 3:
#line 1042 "inst_util.m"
            {
#line 1102 "inst_util.m"
#line 1102 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1102 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "inst_util.m"
                case (MR_Integer) 1:
#line 1102 "inst_util.m"
                  {
#line 1104 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1102 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1105 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
                case (MR_Integer) 0:
#line 1102 "inst_util.m"
                  {
#line 1103 "inst_util.m"
                    {
#line 1103 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1102 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
              }
#line 1042 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1042 "inst_util.m"
                {
#line 1044 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1044 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1042 "inst_util.m"
                }
#line 1042 "inst_util.m"
            }
#line 1021 "inst_util.m"
            break;
#line 1021 "inst_util.m"
          case (MR_Integer) 4:
#line 1046 "inst_util.m"
            {
#line 1102 "inst_util.m"
#line 1102 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1102 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "inst_util.m"
                case (MR_Integer) 1:
#line 1102 "inst_util.m"
                  {
#line 1104 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1102 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1105 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
                case (MR_Integer) 0:
#line 1102 "inst_util.m"
                  {
#line 1103 "inst_util.m"
                    {
#line 1103 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1102 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1102 "inst_util.m"
                  }
#line 1102 "inst_util.m"
                  break;
#line 1102 "inst_util.m"
              }
#line 1046 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1046 "inst_util.m"
                {
#line 1048 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1048 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1046 "inst_util.m"
                }
#line 1046 "inst_util.m"
            }
#line 1021 "inst_util.m"
            break;
#line 1021 "inst_util.m"
          case (MR_Integer) 2:
#line 1035 "inst_util.m"
            {
#line 1035 "inst_util.m"
#line 1035 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1035 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1035 "inst_util.m"
                case (MR_Integer) 1:
#line 1039 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1035 "inst_util.m"
                  break;
#line 1035 "inst_util.m"
                case (MR_Integer) 0:
#line 1034 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1035 "inst_util.m"
                  break;
#line 1035 "inst_util.m"
              }
#line 1035 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1035 "inst_util.m"
            }
#line 1021 "inst_util.m"
            break;
#line 1021 "inst_util.m"
          case (MR_Integer) 0:
#line 1020 "inst_util.m"
            {
#line 1020 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1020 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1020 "inst_util.m"
            }
#line 1021 "inst_util.m"
            break;
#line 1021 "inst_util.m"
          case (MR_Integer) 1:
#line 1026 "inst_util.m"
            {
#line 1026 "inst_util.m"
#line 1026 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1026 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1026 "inst_util.m"
                case (MR_Integer) 1:
#line 1028 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 1;
#line 1026 "inst_util.m"
                  break;
#line 1026 "inst_util.m"
                case (MR_Integer) 0:
#line 1025 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1026 "inst_util.m"
                  break;
#line 1026 "inst_util.m"
              }
#line 1026 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1026 "inst_util.m"
            }
#line 1021 "inst_util.m"
            break;
#line 1021 "inst_util.m"
        }
#line 1015 "inst_util.m"
        break;
#line 1015 "inst_util.m"
    }
#line 1015 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1015 "inst_util.m"
  }
#line 992 "inst_util.m"
}

#line 945 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 945 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 945 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 945 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 945 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22)
#line 945 "inst_util.m"
{
#line 950 "inst_util.m"
  {
#line 950 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 950 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;

#line 951 "inst_util.m"
    {
#line 951 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__SubInstA_12, check_hlds__inst_util__InstB_13, check_hlds__inst_util__Real_14, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
    }
#line 950 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 950 "inst_util.m"
      {
#line 953 "inst_util.m"
        {
#line 953 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_18, check_hlds__inst_util__SubInstA_12, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
        }
#line 953 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 957 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 956 "inst_util.m"
          *check_hlds__inst_util__Inst_15 = check_hlds__inst_util__Inst0_18;
#line 957 "inst_util.m"
        else
#line 960 "inst_util.m"
          {
#line 960 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVars0_19;
#line 960 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_20;

#line 957 "inst_util.m"
            check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 957 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 957 "inst_util.m"
              {
#line 957 "inst_util.m"
                check_hlds__inst_util__InstVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 1)));
#line 957 "inst_util.m"
                check_hlds__inst_util__SubInst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 2)));
#line 959 "inst_util.m"
                {
#line 959 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_24_24;

#line 959 "inst_util.m"
                  {
#line 959 "inst_util.m"
                    check_hlds__inst_util__V_24_24 = mercury__set__union_2_f_0((MR_Word) &check_hlds__inst_util_scalar_common_1[0], check_hlds__inst_util__InstVars0_19, check_hlds__inst_util__InstVarsA_11);
                  }
#line 959 "inst_util.m"
                  {
#line 959 "inst_util.m"
                    MR_Word base;
#line 959 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 959 "inst_util.m"
                    *check_hlds__inst_util__Inst_15 = base;
#line 959 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 959 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_24_24));
#line 959 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst0_20));
#line 959 "inst_util.m"
                  }
#line 959 "inst_util.m"
                }
#line 957 "inst_util.m"
              }
#line 957 "inst_util.m"
            else
#line 962 "inst_util.m"
              {
#line 962 "inst_util.m"
                MR_Word base;
#line 962 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 962 "inst_util.m"
                *check_hlds__inst_util__Inst_15 = base;
#line 962 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 962 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVarsA_11));
#line 962 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_18));
#line 962 "inst_util.m"
              }
#line 960 "inst_util.m"
          }
#line 957 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 950 "inst_util.m"
      }
#line 950 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 950 "inst_util.m"
  }
#line 945 "inst_util.m"
}

#line 929 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 929 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 929 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 929 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 929 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 929 "inst_util.m"
{
#line 934 "inst_util.m"
  {
#line 934 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 934 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "inst_util.m"
      {
#line 934 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 934 "inst_util.m"
          {
#line 934 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 934 "inst_util.m"
              {
#line 934 "inst_util.m"
                *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "inst_util.m"
                *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 934 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 934 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 934 "inst_util.m"
              }
#line 934 "inst_util.m"
          }
#line 934 "inst_util.m"
      }
#line 934 "inst_util.m"
    else
#line 936 "inst_util.m"
      {
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_15;
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_16;
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__Live_17;
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__Lives_18;
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 936 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 935 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 935 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 935 "inst_util.m"
          {
#line 935 "inst_util.m"
            check_hlds__inst_util__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 935 "inst_util.m"
            check_hlds__inst_util__InstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 936 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 936 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 936 "inst_util.m"
              {
#line 936 "inst_util.m"
                check_hlds__inst_util__Live_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 936 "inst_util.m"
                check_hlds__inst_util__Lives_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 937 "inst_util.m"
                {
#line 937 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_17, check_hlds__inst_util__InstA_13, check_hlds__inst_util__InstB_15, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
                }
#line 936 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 936 "inst_util.m"
                  {
#line 939 "inst_util.m"
                    {
#line 939 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__InstsA_14, check_hlds__inst_util__InstsB_16, check_hlds__inst_util__Lives_18, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 936 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 936 "inst_util.m"
                      {
#line 936 "inst_util.m"
                        {
#line 936 "inst_util.m"
                          MR_Word base;
#line 936 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = base;
#line 936 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 936 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 936 "inst_util.m"
                        }
#line 941 "inst_util.m"
                        {
#line 941 "inst_util.m"
                          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 941 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 936 "inst_util.m"
                      }
#line 936 "inst_util.m"
                  }
#line 936 "inst_util.m"
              }
#line 935 "inst_util.m"
          }
#line 936 "inst_util.m"
      }
#line 934 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 934 "inst_util.m"
  }
#line 929 "inst_util.m"
}

#line 910 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 910 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 910 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 910 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 910 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 910 "inst_util.m"
{
#line 915 "inst_util.m"
  while (MR_TRUE)
#line 915 "inst_util.m"
    {
#line 915 "inst_util.m"
      /* tailcall optimized into a loop */
#line 915 "inst_util.m"
      {
#line 915 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 915 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "inst_util.m"
          {
#line 915 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 915 "inst_util.m"
            *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 7;
#line 916 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 915 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 915 "inst_util.m"
          }
#line 915 "inst_util.m"
        else
#line 918 "inst_util.m"
          {
#line 918 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 918 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 918 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 0)));
#line 918 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 1)));

#line 920 "inst_util.m"
            {
#line 920 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_26, check_hlds__inst_util__ConsIdB_2);
            }
#line 924 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 922 "inst_util.m"
              {
#line 922 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_28;
#line 922 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 922 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;

#line 921 "inst_util.m"
                {
#line 921 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__ArgsA_27, check_hlds__inst_util__ArgsB_3, check_hlds__inst_util__LivesB_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Args_28, check_hlds__inst_util__HeadVar__7_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 922 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 922 "inst_util.m"
                  {
#line 923 "inst_util.m"
                    check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 923 "inst_util.m"
                    {
#line 923 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 923 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_26));
#line 923 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 1) = ((MR_Box) (check_hlds__inst_util__Args_28));
#line 923 "inst_util.m"
                    }
#line 923 "inst_util.m"
                    {
#line 923 "inst_util.m"
                      MR_Word base;
#line 923 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 923 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 923 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 923 "inst_util.m"
                    }
#line 923 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 922 "inst_util.m"
                  }
#line 922 "inst_util.m"
              }
#line 924 "inst_util.m"
            else
#line 925 "inst_util.m"
              {
#line 925 "inst_util.m"
                /* direct tailcall eliminated */
#line 925 "inst_util.m"
                {
#line 925 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInstsA_18;

#line 925 "inst_util.m"
                  check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 925 "inst_util.m"
                }
#line 925 "inst_util.m"
                continue;
#line 925 "inst_util.m"
              }
#line 918 "inst_util.m"
          }
#line 915 "inst_util.m"
        return check_hlds__inst_util__succeeded;
#line 915 "inst_util.m"
      }
#line 915 "inst_util.m"
      break;
#line 915 "inst_util.m"
    }
#line 910 "inst_util.m"
}

#line 867 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 867 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 867 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 867 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 867 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 867 "inst_util.m"
{
#line 872 "inst_util.m"
  {
#line 872 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 872 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "inst_util.m"
      {
#line 872 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "inst_util.m"
          {
#line 872 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 6;
#line 873 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 872 "inst_util.m"
          }
#line 872 "inst_util.m"
        else
#line 874 "inst_util.m"
          {
#line 874 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 874 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 875 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 874 "inst_util.m"
          }
#line 872 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 872 "inst_util.m"
      }
#line 872 "inst_util.m"
    else
#line 872 "inst_util.m"
      {
#line 872 "inst_util.m"
        MR_Word check_hlds__inst_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 872 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));

#line 872 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "inst_util.m"
          {
#line 876 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 876 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 877 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 876 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 876 "inst_util.m"
          }
#line 872 "inst_util.m"
        else
#line 880 "inst_util.m"
          {
#line 880 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 880 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 880 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 0)));
#line 880 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 1)));
#line 880 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 0)));
#line 880 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 1)));

#line 883 "inst_util.m"
            {
#line 883 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
            }
#line 897 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 885 "inst_util.m"
              {
#line 885 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_41;
#line 885 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_42;
#line 885 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_43;
#line 885 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism2_44;
#line 885 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 891 "inst_util.m"
                MR_Word check_hlds__inst_util__V_50_50;
#line 891 "inst_util.m"
                MR_Word check_hlds__inst_util__V_60_60;
#line 891 "inst_util.m"
                MR_Word check_hlds__inst_util__V_45_45;

#line 884 "inst_util.m"
                {
#line 884 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__ArgsA_38, check_hlds__inst_util__ArgsB_40, check_hlds__inst_util__Live_1, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Args_41, &check_hlds__inst_util__Detism1_42, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                }
#line 885 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 885 "inst_util.m"
                  {
#line 886 "inst_util.m"
                    {
#line 886 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInstsTail_43, &check_hlds__inst_util__Detism2_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 885 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 885 "inst_util.m"
                      {
#line 891 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Integer) 0;
#line 891 "inst_util.m"
                        {
#line 891 "inst_util.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism1_42, &check_hlds__inst_util__V_45_45, &check_hlds__inst_util__V_60_60);
                        }
#line 891 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_50_50 == check_hlds__inst_util__V_60_60);
#line 893 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 892 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = check_hlds__inst_util__BoundInstsTail_43;
#line 893 "inst_util.m"
                        else
#line 894 "inst_util.m"
                          {
#line 894 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_51_51;

#line 894 "inst_util.m"
                            {
#line 894 "inst_util.m"
                              check_hlds__inst_util__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_37));
#line 894 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 1) = ((MR_Box) (check_hlds__inst_util__Args_41));
#line 894 "inst_util.m"
                            }
#line 894 "inst_util.m"
                            {
#line 894 "inst_util.m"
                              MR_Word base;
#line 894 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "inst_util.m"
                              *check_hlds__inst_util__HeadVar__5_5 = base;
#line 894 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 894 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_43));
#line 894 "inst_util.m"
                            }
#line 894 "inst_util.m"
                          }
#line 896 "inst_util.m"
                        {
#line 896 "inst_util.m"
                          parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_42, check_hlds__inst_util__Detism2_44, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 896 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 885 "inst_util.m"
                      }
#line 885 "inst_util.m"
                  }
#line 885 "inst_util.m"
              }
#line 897 "inst_util.m"
            else
#line 906 "inst_util.m"
              {
#line 906 "inst_util.m"
                MR_Word check_hlds__inst_util__V_57_57;
#line 906 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_58;
#line 898 "inst_util.m"
                MR_Word check_hlds__inst_util__V_61_61;

#line 898 "inst_util.m"
                {
#line 898 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_61_61, check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
                }
#line 898 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_61_61);
#line 902 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 899 "inst_util.m"
                  {
#line 899 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__HeadVar__3_3, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 902 "inst_util.m"
                else
#line 903 "inst_util.m"
                  {
#line 903 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 906 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 906 "inst_util.m"
                  {
#line 907 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Integer) 7;
#line 907 "inst_util.m"
                    {
#line 907 "inst_util.m"
                      parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_58, check_hlds__inst_util__V_57_57, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 907 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 906 "inst_util.m"
                  }
#line 906 "inst_util.m"
              }
#line 880 "inst_util.m"
          }
#line 872 "inst_util.m"
      }
#line 872 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 872 "inst_util.m"
  }
#line 867 "inst_util.m"
}

#line 832 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 832 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 832 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 832 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 832 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
#line 832 "inst_util.m"
{
#line 847 "inst_util.m"
  {
#line 847 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 839 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 839 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 845 "inst_util.m"
      {
#line 845 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 845 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
#line 845 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 845 "inst_util.m"
      }
#line 847 "inst_util.m"
    else
#line 849 "inst_util.m"
      {
#line 849 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism0_16;
#line 856 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdA_17;
#line 856 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdB_19;
#line 856 "inst_util.m"
        MR_Word check_hlds__inst_util__V_26_26;
#line 856 "inst_util.m"
        MR_Word check_hlds__inst_util__V_27_27;
#line 856 "inst_util.m"
        MR_Word check_hlds__inst_util__V_28_28;
#line 856 "inst_util.m"
        MR_Word check_hlds__inst_util__V_29_29;
#line 856 "inst_util.m"
        MR_Word check_hlds__inst_util__V_18_18;
#line 857 "inst_util.m"
        MR_Word check_hlds__inst_util__V_20_20;

#line 848 "inst_util.m"
        {
#line 848 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_10, check_hlds__inst_util__BoundInstsB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__BoundInsts_13, &check_hlds__inst_util__Detism0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
        }
#line 849 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 849 "inst_util.m"
          {
#line 856 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_10)) == (MR_mktag((MR_Integer) 1)));
#line 856 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
              {
#line 856 "inst_util.m"
                check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 0)));
#line 856 "inst_util.m"
                check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 1)));
#line 856 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
                  {
#line 856 "inst_util.m"
                    check_hlds__inst_util__ConsIdA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 0)));
#line 856 "inst_util.m"
                    check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 1)));
#line 857 "inst_util.m"
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_11)) == (MR_mktag((MR_Integer) 1)));
#line 857 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 857 "inst_util.m"
                      {
#line 857 "inst_util.m"
                        check_hlds__inst_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 0)));
#line 857 "inst_util.m"
                        check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 1)));
#line 857 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
                          {
#line 857 "inst_util.m"
                            check_hlds__inst_util__ConsIdB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 0)));
#line 857 "inst_util.m"
                            check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 1)));
#line 858 "inst_util.m"
                            {
#line 858 "inst_util.m"
                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_17, check_hlds__inst_util__ConsIdB_19);
                            }
#line 856 "inst_util.m"
                          }
#line 857 "inst_util.m"
                      }
#line 856 "inst_util.m"
                  }
#line 856 "inst_util.m"
              }
#line 861 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 860 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_16;
#line 861 "inst_util.m"
            else
#line 862 "inst_util.m"
              {
#line 862 "inst_util.m"
                MR_Word check_hlds__inst_util__MaxSoln_22;
#line 862 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;

#line 862 "inst_util.m"
                {
#line 862 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_16, &check_hlds__inst_util__V_21_21, &check_hlds__inst_util__MaxSoln_22);
                }
#line 863 "inst_util.m"
                {
#line 863 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_14, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_22);
                }
#line 862 "inst_util.m"
              }
#line 861 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 849 "inst_util.m"
          }
#line 849 "inst_util.m"
      }
#line 847 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 847 "inst_util.m"
  }
#line 832 "inst_util.m"
}

#line 707 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 707 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 707 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 707 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 707 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40)
#line 707 "inst_util.m"
{
#line 719 "inst_util.m"
  {
#line 719 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 719 "inst_util.m"
#line 719 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) {
#line 719 "inst_util.m"
      default:
#line 719 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 719 "inst_util.m"
        break;
#line 719 "inst_util.m"
      case (MR_Integer) 0:
#line 719 "inst_util.m"
#line 719 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_13)) {
#line 719 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 719 "inst_util.m"
          case (MR_Integer) 0:
#line 720 "inst_util.m"
            {
#line 720 "inst_util.m"
              MR_Word check_hlds__inst_util__ArgInsts_22;
#line 720 "inst_util.m"
              MR_Word check_hlds__inst_util__V_61_61;
#line 720 "inst_util.m"
              MR_Word check_hlds__inst_util__V_62_62;
#line 720 "inst_util.m"
              MR_Word check_hlds__inst_util__V_63_63;
#line 720 "inst_util.m"
              MR_Word check_hlds__inst_util__V_64_64;
#line 720 "inst_util.m"
              MR_Word check_hlds__inst_util__V_65_65;

#line 727 "inst_util.m"
#line 727 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 727 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 727 "inst_util.m"
                case (MR_Integer) 1:
#line 728 "inst_util.m"
                  {
#line 729 "inst_util.m"
                    check_hlds__inst_util__ArgInsts_22 = check_hlds__inst_util__ArgInstsB_15;
#line 728 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 728 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 728 "inst_util.m"
                  }
#line 727 "inst_util.m"
                  break;
#line 727 "inst_util.m"
                case (MR_Integer) 0:
#line 722 "inst_util.m"
                  {
#line 723 "inst_util.m"
                    {
#line 723 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39);
                    }
#line 722 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 722 "inst_util.m"
                      {
#line 725 "inst_util.m"
                        {
#line 725 "inst_util.m"
                          check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, &check_hlds__inst_util__ArgInsts_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                        }
#line 725 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 722 "inst_util.m"
                      }
#line 722 "inst_util.m"
                  }
#line 727 "inst_util.m"
                  break;
#line 727 "inst_util.m"
              }
#line 720 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 720 "inst_util.m"
                {
#line 732 "inst_util.m"
                  check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 732 "inst_util.m"
                  check_hlds__inst_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 733 "inst_util.m"
                  check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "inst_util.m"
                  *check_hlds__inst_util__Detism_20 = (MR_Integer) 0;
#line 733 "inst_util.m"
                  {
#line 733 "inst_util.m"
                    check_hlds__inst_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 733 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 733 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_22));
#line 733 "inst_util.m"
                  }
#line 733 "inst_util.m"
                  {
#line 733 "inst_util.m"
                    check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 0) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 733 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 1) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 733 "inst_util.m"
                  }
#line 732 "inst_util.m"
                  {
#line 732 "inst_util.m"
                    MR_Word base;
#line 732 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 732 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 732 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 732 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_61_61));
#line 732 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_62_62));
#line 732 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 732 "inst_util.m"
                  }
#line 732 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 720 "inst_util.m"
                }
#line 720 "inst_util.m"
            }
#line 719 "inst_util.m"
            break;
#line 719 "inst_util.m"
          case (MR_Integer) 1:
#line 716 "inst_util.m"
            {
#line 717 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 718 "inst_util.m"
              *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 716 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 716 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 716 "inst_util.m"
            }
#line 719 "inst_util.m"
            break;
#line 719 "inst_util.m"
        }
#line 719 "inst_util.m"
        break;
#line 719 "inst_util.m"
      case (MR_Integer) 2:
#line 736 "inst_util.m"
        {
#line 736 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 0)));
#line 736 "inst_util.m"
          MR_Word check_hlds__inst_util__V_56_56;
#line 736 "inst_util.m"
          MR_Word check_hlds__inst_util__V_57_57;
#line 736 "inst_util.m"
          MR_Word check_hlds__inst_util__V_58_58;
#line 736 "inst_util.m"
          MR_Word check_hlds__inst_util__V_59_59;
#line 736 "inst_util.m"
          MR_Word check_hlds__inst_util__ArgInsts_66;
#line 736 "inst_util.m"
          MR_Word check_hlds__inst_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));

#line 739 "inst_util.m"
          {
#line 739 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__Type_18);
          }
#line 739 "inst_util.m"
          check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 736 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 736 "inst_util.m"
            {
#line 744 "inst_util.m"
#line 744 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 744 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 744 "inst_util.m"
                case (MR_Integer) 1:
#line 746 "inst_util.m"
                  {
#line 746 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 744 "inst_util.m"
                  break;
#line 744 "inst_util.m"
                case (MR_Integer) 0:
#line 742 "inst_util.m"
                  {
#line 742 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 744 "inst_util.m"
                  break;
#line 744 "inst_util.m"
              }
#line 736 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 736 "inst_util.m"
                {
#line 750 "inst_util.m"
                  check_hlds__inst_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 751 "inst_util.m"
                  check_hlds__inst_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 751 "inst_util.m"
                  {
#line 751 "inst_util.m"
                    check_hlds__inst_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 751 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 751 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_66));
#line 751 "inst_util.m"
                  }
#line 751 "inst_util.m"
                  {
#line 751 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 0) = ((MR_Box) (check_hlds__inst_util__V_58_58));
#line 751 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 1) = ((MR_Box) (check_hlds__inst_util__V_59_59));
#line 751 "inst_util.m"
                  }
#line 750 "inst_util.m"
                  {
#line 750 "inst_util.m"
                    MR_Word base;
#line 750 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 750 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 750 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 750 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_23));
#line 750 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_56_56));
#line 750 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 750 "inst_util.m"
                  }
#line 750 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 736 "inst_util.m"
                }
#line 736 "inst_util.m"
            }
#line 736 "inst_util.m"
        }
#line 719 "inst_util.m"
        break;
#line 719 "inst_util.m"
      case (MR_Integer) 3:
#line 719 "inst_util.m"
#line 719 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) {
#line 719 "inst_util.m"
          default:
#line 719 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 719 "inst_util.m"
            break;
#line 719 "inst_util.m"
          case (MR_Integer) 0:
#line 753 "inst_util.m"
            {
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 3)));
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_28;
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__V_53_53;
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResultsA_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 758 "inst_util.m"
#line 758 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 758 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 758 "inst_util.m"
                case (MR_Integer) 1:
#line 759 "inst_util.m"
                  {
#line 759 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_29;
#line 759 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_48_48;

#line 760 "inst_util.m"
                    {
#line 760 "inst_util.m"
                      check_hlds__inst_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 760 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (check_hlds__inst_util__ArgInstsB_15));
#line 760 "inst_util.m"
                    }
#line 760 "inst_util.m"
                    {
#line 760 "inst_util.m"
                      check_hlds__inst_util__BoundInstsB_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 0) = ((MR_Box) (check_hlds__inst_util__V_48_48));
#line 760 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "inst_util.m"
                    }
#line 839 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 845 "inst_util.m"
                      {
#line 845 "inst_util.m"
                        check_hlds__inst_util__BoundInsts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "inst_util.m"
                        *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 845 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 845 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 845 "inst_util.m"
                      }
#line 847 "inst_util.m"
                    else
#line 849 "inst_util.m"
                      {
#line 849 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism0_78;
#line 856 "inst_util.m"
                        MR_Word check_hlds__inst_util__ConsIdA_79;
#line 856 "inst_util.m"
                        MR_Word check_hlds__inst_util__ConsIdB_81;
#line 856 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_86_86;
#line 856 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_87_87;
#line 856 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_88_88;
#line 856 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_89_89;
#line 856 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_80_80;
#line 857 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_82_82;

#line 848 "inst_util.m"
                        {
#line 848 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0((MR_Integer) 1, check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__BoundInstsB_29, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, &check_hlds__inst_util__Detism0_78, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                        }
#line 849 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 849 "inst_util.m"
                          {
#line 856 "inst_util.m"
                            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_27)) == (MR_mktag((MR_Integer) 1)));
#line 856 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
                              {
#line 856 "inst_util.m"
                                check_hlds__inst_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 0)));
#line 856 "inst_util.m"
                                check_hlds__inst_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 1)));
#line 856 "inst_util.m"
                                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "inst_util.m"
                                if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
                                  {
#line 856 "inst_util.m"
                                    check_hlds__inst_util__ConsIdA_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 0)));
#line 856 "inst_util.m"
                                    check_hlds__inst_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 1)));
#line 857 "inst_util.m"
                                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_29)) == (MR_mktag((MR_Integer) 1)));
#line 857 "inst_util.m"
                                    if (check_hlds__inst_util__succeeded)
#line 857 "inst_util.m"
                                      {
#line 857 "inst_util.m"
                                        check_hlds__inst_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 0)));
#line 857 "inst_util.m"
                                        check_hlds__inst_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 1)));
#line 857 "inst_util.m"
                                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "inst_util.m"
                                        if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
                                          {
#line 857 "inst_util.m"
                                            check_hlds__inst_util__ConsIdB_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 0)));
#line 857 "inst_util.m"
                                            check_hlds__inst_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 1)));
#line 858 "inst_util.m"
                                            {
#line 858 "inst_util.m"
                                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_79, check_hlds__inst_util__ConsIdB_81);
                                            }
#line 856 "inst_util.m"
                                          }
#line 857 "inst_util.m"
                                      }
#line 856 "inst_util.m"
                                  }
#line 856 "inst_util.m"
                              }
#line 861 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 860 "inst_util.m"
                              *check_hlds__inst_util__Detism_20 = check_hlds__inst_util__Detism0_78;
#line 861 "inst_util.m"
                            else
#line 862 "inst_util.m"
                              {
#line 862 "inst_util.m"
                                MR_Word check_hlds__inst_util__MaxSoln_84;
#line 862 "inst_util.m"
                                MR_Word check_hlds__inst_util__V_83_83;

#line 862 "inst_util.m"
                                {
#line 862 "inst_util.m"
                                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_78, &check_hlds__inst_util__V_83_83, &check_hlds__inst_util__MaxSoln_84);
                                }
#line 863 "inst_util.m"
                                {
#line 863 "inst_util.m"
                                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_20, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_84);
                                }
#line 862 "inst_util.m"
                              }
#line 861 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 849 "inst_util.m"
                          }
#line 849 "inst_util.m"
                      }
#line 759 "inst_util.m"
                  }
#line 758 "inst_util.m"
                  break;
#line 758 "inst_util.m"
                case (MR_Integer) 0:
#line 756 "inst_util.m"
                  {
#line 756 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 758 "inst_util.m"
                  break;
#line 758 "inst_util.m"
              }
#line 753 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 753 "inst_util.m"
                {
#line 765 "inst_util.m"
                  check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "inst_util.m"
                  {
#line 765 "inst_util.m"
                    MR_Word base;
#line 765 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 765 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 765 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 765 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_25));
#line 765 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 765 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_28));
#line 765 "inst_util.m"
                  }
#line 765 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 753 "inst_util.m"
                }
#line 753 "inst_util.m"
            }
#line 719 "inst_util.m"
            break;
#line 719 "inst_util.m"
          case (MR_Integer) 1:
#line 767 "inst_util.m"
            {
#line 767 "inst_util.m"
              MR_Word check_hlds__inst_util__V_44_44;
#line 767 "inst_util.m"
              MR_Word check_hlds__inst_util__V_45_45;
#line 767 "inst_util.m"
              MR_Word check_hlds__inst_util__V_46_46;
#line 767 "inst_util.m"
              MR_Word check_hlds__inst_util__V_47_47;
#line 767 "inst_util.m"
              MR_Word check_hlds__inst_util__ArgInsts_67;
#line 767 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 767 "inst_util.m"
              MR_Word check_hlds__inst_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 772 "inst_util.m"
#line 772 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 772 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 772 "inst_util.m"
                case (MR_Integer) 1:
#line 774 "inst_util.m"
                  {
#line 774 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 772 "inst_util.m"
                  break;
#line 772 "inst_util.m"
                case (MR_Integer) 0:
#line 770 "inst_util.m"
                  {
#line 770 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 772 "inst_util.m"
                  break;
#line 772 "inst_util.m"
              }
#line 767 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 767 "inst_util.m"
                {
#line 778 "inst_util.m"
                  check_hlds__inst_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 779 "inst_util.m"
                  check_hlds__inst_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 779 "inst_util.m"
                  {
#line 779 "inst_util.m"
                    check_hlds__inst_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 779 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 779 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_67));
#line 779 "inst_util.m"
                  }
#line 779 "inst_util.m"
                  {
#line 779 "inst_util.m"
                    check_hlds__inst_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 0) = ((MR_Box) (check_hlds__inst_util__V_46_46));
#line 779 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 1) = ((MR_Box) (check_hlds__inst_util__V_47_47));
#line 779 "inst_util.m"
                  }
#line 778 "inst_util.m"
                  {
#line 778 "inst_util.m"
                    MR_Word base;
#line 778 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 778 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 778 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 778 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_68));
#line 778 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_44_44));
#line 778 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_45_45));
#line 778 "inst_util.m"
                  }
#line 778 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 767 "inst_util.m"
                }
#line 767 "inst_util.m"
            }
#line 719 "inst_util.m"
            break;
#line 719 "inst_util.m"
          case (MR_Integer) 3:
#line 781 "inst_util.m"
            {
#line 781 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 781 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInstA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));
#line 781 "inst_util.m"
              MR_Word check_hlds__inst_util__Inst0_33;

#line 782 "inst_util.m"
              {
#line 782 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__SubInstA_32, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, &check_hlds__inst_util__Inst0_33, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
              }
#line 781 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 781 "inst_util.m"
                {
#line 784 "inst_util.m"
                  {
#line 784 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_33, check_hlds__inst_util__SubInstA_32, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 787 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 786 "inst_util.m"
                    {
#line 786 "inst_util.m"
                      MR_Word base;
#line 786 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 786 "inst_util.m"
                      *check_hlds__inst_util__Inst_19 = base;
#line 786 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 786 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_31));
#line 786 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_33));
#line 786 "inst_util.m"
                    }
#line 787 "inst_util.m"
                  else
#line 800 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = check_hlds__inst_util__Inst0_33;
#line 787 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 781 "inst_util.m"
                }
#line 781 "inst_util.m"
            }
#line 719 "inst_util.m"
            break;
#line 719 "inst_util.m"
        }
#line 719 "inst_util.m"
        break;
#line 719 "inst_util.m"
    }
#line 719 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 719 "inst_util.m"
  }
#line 707 "inst_util.m"
}

#line 686 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 686 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 686 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 686 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 686 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 686 "inst_util.m"
{
#line 690 "inst_util.m"
  {
#line 690 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 690 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 690 "inst_util.m"
      {
#line 690 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 690 "inst_util.m"
          {
#line 690 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 690 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 690 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 690 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 690 "inst_util.m"
          }
#line 690 "inst_util.m"
      }
#line 690 "inst_util.m"
    else
#line 692 "inst_util.m"
      {
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_16;
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_17;
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 692 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 691 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 691 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 691 "inst_util.m"
          {
#line 691 "inst_util.m"
            check_hlds__inst_util__InstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 691 "inst_util.m"
            check_hlds__inst_util__InstsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 693 "inst_util.m"
            {
#line 693 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_3, check_hlds__inst_util__InstA_14, check_hlds__inst_util__InstB_16, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
#line 692 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 692 "inst_util.m"
              {
#line 695 "inst_util.m"
                {
#line 695 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__InstsA_15, check_hlds__inst_util__InstsB_17, check_hlds__inst_util__Live_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                }
#line 692 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 692 "inst_util.m"
                  {
#line 692 "inst_util.m"
                    {
#line 692 "inst_util.m"
                      MR_Word base;
#line 692 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__5_5 = base;
#line 692 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 692 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 692 "inst_util.m"
                    }
#line 697 "inst_util.m"
                    {
#line 697 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 697 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 692 "inst_util.m"
                  }
#line 692 "inst_util.m"
              }
#line 691 "inst_util.m"
          }
#line 692 "inst_util.m"
      }
#line 690 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 690 "inst_util.m"
  }
#line 686 "inst_util.m"
}

#line 269 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 269 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 269 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 269 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 269 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64)
#line 269 "inst_util.m"
{
#line 279 "inst_util.m"
  {
#line 279 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 279 "inst_util.m"
#line 279 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) {
#line 279 "inst_util.m"
      default:
#line 279 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 279 "inst_util.m"
        break;
#line 279 "inst_util.m"
      case (MR_Integer) 0:
#line 279 "inst_util.m"
#line 279 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_10)) {
#line 279 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 279 "inst_util.m"
          case (MR_Integer) 0:
#line 337 "inst_util.m"
#line 337 "inst_util.m"
            switch (check_hlds__inst_util__Live_9) {
#line 337 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 337 "inst_util.m"
              case (MR_Integer) 1:
#line 338 "inst_util.m"
                {
#line 339 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstB_11;
#line 340 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 338 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 338 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 338 "inst_util.m"
                }
#line 337 "inst_util.m"
                break;
#line 337 "inst_util.m"
              case (MR_Integer) 0:
#line 288 "inst_util.m"
#line 288 "inst_util.m"
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 288 "inst_util.m"
                  default:
#line 288 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 288 "inst_util.m"
                    break;
#line 288 "inst_util.m"
                  case (MR_Integer) 0:
#line 288 "inst_util.m"
#line 288 "inst_util.m"
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 288 "inst_util.m"
                      default:
#line 288 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 288 "inst_util.m"
                        break;
#line 288 "inst_util.m"
                      case (MR_Integer) 1:
#line 285 "inst_util.m"
                        {
#line 286 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 287 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 285 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 285 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 285 "inst_util.m"
                        }
#line 288 "inst_util.m"
                        break;
#line 288 "inst_util.m"
                    }
#line 288 "inst_util.m"
                    break;
#line 288 "inst_util.m"
                  case (MR_Integer) 2:
#line 313 "inst_util.m"
                    {
#line 313 "inst_util.m"
                      MR_Word check_hlds__inst_util__HOInstInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 313 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 313 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_116;

#line 314 "inst_util.m"
                      {
#line 314 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_115, &check_hlds__inst_util__Uniq_116);
                      }
#line 313 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 313 "inst_util.m"
                        {
#line 316 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 313 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 315 "inst_util.m"
                          {
#line 315 "inst_util.m"
                            MR_Word base;
#line 315 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 315 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_116));
#line 315 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_22));
#line 315 "inst_util.m"
                          }
#line 315 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 313 "inst_util.m"
                        }
#line 313 "inst_util.m"
                    }
#line 288 "inst_util.m"
                    break;
#line 288 "inst_util.m"
                  case (MR_Integer) 3:
#line 288 "inst_util.m"
#line 288 "inst_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 288 "inst_util.m"
                      default:
#line 288 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 288 "inst_util.m"
                        break;
#line 288 "inst_util.m"
                      case (MR_Integer) 0:
#line 292 "inst_util.m"
                        {
#line 292 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 292 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstResultsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 292 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInstsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 292 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_19;
#line 292 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInsts_20;

#line 293 "inst_util.m"
                          {
#line 293 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_16, &check_hlds__inst_util__Uniq_19);
                          }
#line 292 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 292 "inst_util.m"
                            {
#line 295 "inst_util.m"
                              {
#line 295 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_17, check_hlds__inst_util__BoundInstsB_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                              }
#line 292 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 292 "inst_util.m"
                                {
#line 299 "inst_util.m"
#line 299 "inst_util.m"
                                  switch (check_hlds__inst_util__UniqB_16) {
#line 299 "inst_util.m"
                                    default:
#line 299 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 299 "inst_util.m"
                                      break;
#line 299 "inst_util.m"
                                    case (MR_Integer) 2:
#line 299 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 299 "inst_util.m"
                                      break;
#line 299 "inst_util.m"
                                    case (MR_Integer) 1:
#line 299 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 299 "inst_util.m"
                                      break;
#line 299 "inst_util.m"
                                  }
#line 302 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 300 "inst_util.m"
                                    {
#line 300 "inst_util.m"
                                      check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsB_18, &check_hlds__inst_util__BoundInsts_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                    }
#line 302 "inst_util.m"
                                  else
#line 303 "inst_util.m"
                                    {
#line 303 "inst_util.m"
                                      check_hlds__inst_util__BoundInsts_20 = check_hlds__inst_util__BoundInstsB_18;
#line 303 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 303 "inst_util.m"
                                    }
#line 306 "inst_util.m"
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 305 "inst_util.m"
                                  {
#line 305 "inst_util.m"
                                    MR_Word base;
#line 305 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 305 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 305 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 305 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_19));
#line 305 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_17));
#line 305 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_20));
#line 305 "inst_util.m"
                                  }
#line 305 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 292 "inst_util.m"
                                }
#line 292 "inst_util.m"
                            }
#line 292 "inst_util.m"
                        }
#line 288 "inst_util.m"
                        break;
#line 288 "inst_util.m"
                      case (MR_Integer) 1:
#line 308 "inst_util.m"
                        {
#line 308 "inst_util.m"
                          MR_Word check_hlds__inst_util__HOInstInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 308 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 308 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_114;

#line 309 "inst_util.m"
                          {
#line 309 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_113, &check_hlds__inst_util__Uniq_114);
                          }
#line 308 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 308 "inst_util.m"
                            {
#line 311 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 308 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 310 "inst_util.m"
                              {
#line 310 "inst_util.m"
                                MR_Word base;
#line 310 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 310 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 310 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_114));
#line 310 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoB_21));
#line 310 "inst_util.m"
                              }
#line 310 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 308 "inst_util.m"
                            }
#line 308 "inst_util.m"
                        }
#line 288 "inst_util.m"
                        break;
#line 288 "inst_util.m"
                      case (MR_Integer) 3:
#line 318 "inst_util.m"
                        {
#line 318 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 318 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 319 "inst_util.m"
                          {
#line 319 "inst_util.m"
                            return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_23, check_hlds__inst_util__SubInstB_24, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 318 "inst_util.m"
                        }
#line 288 "inst_util.m"
                        break;
#line 288 "inst_util.m"
                    }
#line 288 "inst_util.m"
                    break;
#line 288 "inst_util.m"
                }
#line 337 "inst_util.m"
                break;
#line 337 "inst_util.m"
            }
#line 279 "inst_util.m"
            break;
#line 279 "inst_util.m"
          case (MR_Integer) 1:
#line 276 "inst_util.m"
            {
#line 277 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 278 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 276 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 276 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 276 "inst_util.m"
            }
#line 279 "inst_util.m"
            break;
#line 279 "inst_util.m"
        }
#line 279 "inst_util.m"
        break;
#line 279 "inst_util.m"
      case (MR_Integer) 2:
#line 534 "inst_util.m"
        {
#line 534 "inst_util.m"
          MR_Word check_hlds__inst_util__UniqA_298 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 0)));
#line 534 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfoA_303 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 539 "inst_util.m"
          if ((check_hlds__inst_util__HOInstInfoA_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "inst_util.m"
            {
#line 537 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
#line 539 "inst_util.m"
          else
#line 546 "inst_util.m"
#line 546 "inst_util.m"
            switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 546 "inst_util.m"
              default:
#line 546 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 546 "inst_util.m"
                break;
#line 546 "inst_util.m"
              case (MR_Integer) 0:
#line 546 "inst_util.m"
#line 546 "inst_util.m"
                switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 546 "inst_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 546 "inst_util.m"
                  case (MR_Integer) 0:
#line 547 "inst_util.m"
                    {
#line 547 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_224;

#line 551 "inst_util.m"
#line 551 "inst_util.m"
                      switch (check_hlds__inst_util__Live_9) {
#line 551 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 551 "inst_util.m"
                        case (MR_Integer) 1:
#line 553 "inst_util.m"
                          {
#line 553 "inst_util.m"
                            check_hlds__inst_util__Uniq_224 = check_hlds__inst_util__UniqA_298;
#line 553 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 553 "inst_util.m"
                          }
#line 551 "inst_util.m"
                          break;
#line 551 "inst_util.m"
                        case (MR_Integer) 0:
#line 549 "inst_util.m"
                          {
#line 550 "inst_util.m"
                            {
#line 550 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, &check_hlds__inst_util__Uniq_224);
                            }
#line 549 "inst_util.m"
                          }
#line 551 "inst_util.m"
                          break;
#line 551 "inst_util.m"
                      }
#line 547 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 547 "inst_util.m"
                        {
#line 556 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 547 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 555 "inst_util.m"
                          {
#line 555 "inst_util.m"
                            MR_Word base;
#line 555 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 555 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_224));
#line 555 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 555 "inst_util.m"
                          }
#line 555 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 547 "inst_util.m"
                        }
#line 547 "inst_util.m"
                    }
#line 546 "inst_util.m"
                    break;
#line 546 "inst_util.m"
                  case (MR_Integer) 1:
#line 543 "inst_util.m"
                    {
#line 544 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 545 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 543 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 543 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 543 "inst_util.m"
                    }
#line 546 "inst_util.m"
                    break;
#line 546 "inst_util.m"
                }
#line 546 "inst_util.m"
                break;
#line 546 "inst_util.m"
              case (MR_Integer) 2:
#line 576 "inst_util.m"
                {
#line 576 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_67_67;
#line 576 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_237;
#line 576 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_238;
#line 576 "inst_util.m"
                  MR_Word check_hlds__inst_util___HOInstInfoB_236;

#line 582 "inst_util.m"
#line 582 "inst_util.m"
                  switch (check_hlds__inst_util__Live_9) {
#line 582 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 582 "inst_util.m"
                    case (MR_Integer) 1:
#line 583 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 582 "inst_util.m"
                      break;
#line 582 "inst_util.m"
                    case (MR_Integer) 0:
#line 581 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 582 "inst_util.m"
                      break;
#line 582 "inst_util.m"
                  }
#line 576 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 576 "inst_util.m"
                    {
#line 576 "inst_util.m"
                      check_hlds__inst_util__UniqB_237 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 576 "inst_util.m"
                      check_hlds__inst_util___HOInstInfoB_236 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 585 "inst_util.m"
                      check_hlds__inst_util__V_67_67 = (MR_Integer) 1;
#line 585 "inst_util.m"
                      {
#line 585 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_67_67, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_237, &check_hlds__inst_util__Uniq_238);
                      }
#line 576 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 576 "inst_util.m"
                        {
#line 587 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 576 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 586 "inst_util.m"
                          {
#line 586 "inst_util.m"
                            MR_Word base;
#line 586 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 586 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_238));
#line 586 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 586 "inst_util.m"
                          }
#line 586 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 576 "inst_util.m"
                        }
#line 576 "inst_util.m"
                    }
#line 576 "inst_util.m"
                }
#line 546 "inst_util.m"
                break;
#line 546 "inst_util.m"
              case (MR_Integer) 3:
#line 546 "inst_util.m"
#line 546 "inst_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 546 "inst_util.m"
                  default:
#line 546 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 546 "inst_util.m"
                    break;
#line 546 "inst_util.m"
                  case (MR_Integer) 0:
#line 558 "inst_util.m"
                    {
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_71_71;
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_72_72;
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInstsB_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_228;
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInsts_229;
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util__Detism1_231;
#line 558 "inst_util.m"
                      MR_Word check_hlds__inst_util___InstResultsB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 560 "inst_util.m"
                      {
#line 560 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_226, &check_hlds__inst_util__Uniq_228);
                      }
#line 558 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 558 "inst_util.m"
                        {
#line 561 "inst_util.m"
                          {
#line 561 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_227, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_229, &check_hlds__inst_util__Detism1_231, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 558 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 558 "inst_util.m"
                            {
#line 565 "inst_util.m"
                              check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "inst_util.m"
                              check_hlds__inst_util__V_72_72 = (MR_Integer) 1;
#line 565 "inst_util.m"
                              {
#line 565 "inst_util.m"
                                MR_Word base;
#line 565 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 565 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 565 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 565 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_228));
#line 565 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 565 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_229));
#line 565 "inst_util.m"
                              }
#line 566 "inst_util.m"
                              {
#line 566 "inst_util.m"
                                parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_231, check_hlds__inst_util__V_72_72, check_hlds__inst_util__Detism_14);
                              }
#line 566 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 558 "inst_util.m"
                            }
#line 558 "inst_util.m"
                        }
#line 558 "inst_util.m"
                    }
#line 546 "inst_util.m"
                    break;
#line 546 "inst_util.m"
                  case (MR_Integer) 1:
#line 568 "inst_util.m"
                    {
#line 568 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_68_68;
#line 568 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_233;
#line 568 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_234;
#line 568 "inst_util.m"
                      MR_Word check_hlds__inst_util___HOInstInfoB_232;

#line 571 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 568 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 568 "inst_util.m"
                        {
#line 568 "inst_util.m"
                          check_hlds__inst_util__UniqB_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 568 "inst_util.m"
                          check_hlds__inst_util___HOInstInfoB_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 572 "inst_util.m"
                          check_hlds__inst_util__V_68_68 = (MR_Integer) 1;
#line 572 "inst_util.m"
                          {
#line 572 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_68_68, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_233, &check_hlds__inst_util__Uniq_234);
                          }
#line 568 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 568 "inst_util.m"
                            {
#line 574 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 568 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 573 "inst_util.m"
                              {
#line 573 "inst_util.m"
                                MR_Word base;
#line 573 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 573 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 573 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 573 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_234));
#line 573 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 573 "inst_util.m"
                              }
#line 573 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 568 "inst_util.m"
                            }
#line 568 "inst_util.m"
                        }
#line 568 "inst_util.m"
                    }
#line 546 "inst_util.m"
                    break;
#line 546 "inst_util.m"
                  case (MR_Integer) 3:
#line 589 "inst_util.m"
                    {
#line 589 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstVarsB_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 589 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInstB_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 590 "inst_util.m"
                      {
#line 590 "inst_util.m"
                        return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_240, check_hlds__inst_util__SubInstB_241, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                      }
#line 589 "inst_util.m"
                    }
#line 546 "inst_util.m"
                    break;
#line 546 "inst_util.m"
                }
#line 546 "inst_util.m"
                break;
#line 546 "inst_util.m"
            }
#line 534 "inst_util.m"
        }
#line 279 "inst_util.m"
        break;
#line 279 "inst_util.m"
      case (MR_Integer) 3:
#line 279 "inst_util.m"
#line 279 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) {
#line 279 "inst_util.m"
          default:
#line 279 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 279 "inst_util.m"
            break;
#line 279 "inst_util.m"
          case (MR_Integer) 0:
#line 343 "inst_util.m"
            {
#line 343 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 343 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResultsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 343 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 3)));

#line 349 "inst_util.m"
#line 349 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 349 "inst_util.m"
                default:
#line 349 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 349 "inst_util.m"
                  break;
#line 349 "inst_util.m"
                case (MR_Integer) 0:
#line 349 "inst_util.m"
#line 349 "inst_util.m"
                  switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 349 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 349 "inst_util.m"
                    case (MR_Integer) 0:
#line 350 "inst_util.m"
                      {
#line 350 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_117;
#line 350 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_118;

#line 359 "inst_util.m"
#line 359 "inst_util.m"
                        switch (check_hlds__inst_util__Live_9) {
#line 359 "inst_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 359 "inst_util.m"
                          case (MR_Integer) 1:
#line 360 "inst_util.m"
                            {
#line 362 "inst_util.m"
                              {
#line 362 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, check_hlds__inst_util__UniqA_30, (MR_Integer) 1, &check_hlds__inst_util__Uniq_117);
                              }
#line 360 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 360 "inst_util.m"
                                {
#line 363 "inst_util.m"
                                  check_hlds__inst_util__BoundInsts_118 = check_hlds__inst_util__BoundInstsA_32;
#line 360 "inst_util.m"
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 360 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 360 "inst_util.m"
                                }
#line 360 "inst_util.m"
                            }
#line 359 "inst_util.m"
                            break;
#line 359 "inst_util.m"
                          case (MR_Integer) 0:
#line 352 "inst_util.m"
                            {
#line 353 "inst_util.m"
                              {
#line 353 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, &check_hlds__inst_util__Uniq_117);
                              }
#line 352 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 352 "inst_util.m"
                                {
#line 355 "inst_util.m"
                                  {
#line 355 "inst_util.m"
                                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_31, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                                  }
#line 352 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 352 "inst_util.m"
                                    {
#line 357 "inst_util.m"
                                      {
#line 357 "inst_util.m"
                                        check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsA_32, &check_hlds__inst_util__BoundInsts_118, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
#line 357 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 352 "inst_util.m"
                                    }
#line 352 "inst_util.m"
                                }
#line 352 "inst_util.m"
                            }
#line 359 "inst_util.m"
                            break;
#line 359 "inst_util.m"
                        }
#line 350 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 350 "inst_util.m"
                          {
#line 366 "inst_util.m"
                            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 365 "inst_util.m"
                            {
#line 365 "inst_util.m"
                              MR_Word base;
#line 365 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 365 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 365 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 365 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_117));
#line 365 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 365 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_118));
#line 365 "inst_util.m"
                            }
#line 365 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 350 "inst_util.m"
                          }
#line 350 "inst_util.m"
                      }
#line 349 "inst_util.m"
                      break;
#line 349 "inst_util.m"
                    case (MR_Integer) 1:
#line 346 "inst_util.m"
                      {
#line 347 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 348 "inst_util.m"
                        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 346 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 346 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 346 "inst_util.m"
                      }
#line 349 "inst_util.m"
                      break;
#line 349 "inst_util.m"
                  }
#line 349 "inst_util.m"
                  break;
#line 349 "inst_util.m"
                case (MR_Integer) 2:
#line 404 "inst_util.m"
                  {
#line 404 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_87_87;
#line 404 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_89_89;
#line 404 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_90_90;
#line 404 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 404 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_132;
#line 404 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInsts_133;
#line 404 "inst_util.m"
                    MR_Word check_hlds__inst_util__Detism1_134;
#line 404 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 405 "inst_util.m"
                    {
#line 405 "inst_util.m"
                      check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                    }
#line 406 "inst_util.m"
                    {
#line 406 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_131, &check_hlds__inst_util__Uniq_132);
                    }
#line 404 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 404 "inst_util.m"
                      {
#line 408 "inst_util.m"
                        check_hlds__inst_util__V_87_87 = (MR_Integer) 0;
#line 408 "inst_util.m"
                        {
#line 408 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__V_87_87, check_hlds__inst_util__UniqB_131, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_133, &check_hlds__inst_util__Detism1_134, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 404 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 404 "inst_util.m"
                          {
#line 411 "inst_util.m"
                            check_hlds__inst_util__V_89_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "inst_util.m"
                            check_hlds__inst_util__V_90_90 = (MR_Integer) 1;
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
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_132));
#line 411 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_89_89));
#line 411 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_133));
#line 411 "inst_util.m"
                            }
#line 412 "inst_util.m"
                            {
#line 412 "inst_util.m"
                              parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_134, check_hlds__inst_util__V_90_90, check_hlds__inst_util__Detism_14);
                            }
#line 412 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 404 "inst_util.m"
                          }
#line 404 "inst_util.m"
                      }
#line 404 "inst_util.m"
                  }
#line 349 "inst_util.m"
                  break;
#line 349 "inst_util.m"
                case (MR_Integer) 3:
#line 349 "inst_util.m"
#line 349 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 349 "inst_util.m"
                    default:
#line 349 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 349 "inst_util.m"
                      break;
#line 349 "inst_util.m"
                    case (MR_Integer) 0:
#line 368 "inst_util.m"
                      {
#line 368 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_96_96;
#line 368 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 368 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 368 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_121;
#line 368 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_122;
#line 368 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 369 "inst_util.m"
                        {
#line 369 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__BoundInstsB_120, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_122, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 368 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 368 "inst_util.m"
                          {
#line 371 "inst_util.m"
                            {
#line 371 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, *check_hlds__inst_util__Detism_14, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_119, &check_hlds__inst_util__Uniq_121);
                            }
#line 368 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 368 "inst_util.m"
                              {
#line 373 "inst_util.m"
                                check_hlds__inst_util__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "inst_util.m"
                                {
#line 373 "inst_util.m"
                                  MR_Word base;
#line 373 "inst_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 373 "inst_util.m"
                                  *check_hlds__inst_util__Inst_13 = base;
#line 373 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 373 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_121));
#line 373 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_96_96));
#line 373 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_122));
#line 373 "inst_util.m"
                                }
#line 373 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 368 "inst_util.m"
                              }
#line 368 "inst_util.m"
                          }
#line 368 "inst_util.m"
                      }
#line 349 "inst_util.m"
                      break;
#line 349 "inst_util.m"
                    case (MR_Integer) 1:
#line 375 "inst_util.m"
                      {
#line 375 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism1_35;
#line 375 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_94_94;
#line 375 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 375 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_129;
#line 375 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 376 "inst_util.m"
                        {
#line 376 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_128, &check_hlds__inst_util__Uniq_129);
                        }
#line 375 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 375 "inst_util.m"
                          {
#line 381 "inst_util.m"
#line 381 "inst_util.m"
                            switch (MR_tag((MR_Word) check_hlds__inst_util__InstResultsA_31)) {
#line 381 "inst_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 381 "inst_util.m"
                              case (MR_Integer) 0:
#line 381 "inst_util.m"
#line 381 "inst_util.m"
                                switch (MR_unmkbody(check_hlds__inst_util__InstResultsA_31)) {
#line 381 "inst_util.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 381 "inst_util.m"
                                  case (MR_Integer) 0:
#line 397 "inst_util.m"
                                    {
#line 397 "inst_util.m"
                                      MR_Word check_hlds__inst_util__BoundInsts_126;

#line 398 "inst_util.m"
                                      {
#line 398 "inst_util.m"
                                        check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_126, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
#line 397 "inst_util.m"
                                      if (check_hlds__inst_util__succeeded)
#line 397 "inst_util.m"
                                        {
#line 400 "inst_util.m"
                                          {
#line 400 "inst_util.m"
                                            MR_Word base;
#line 400 "inst_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 400 "inst_util.m"
                                            *check_hlds__inst_util__Inst_13 = base;
#line 400 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 400 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 400 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 400 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_126));
#line 400 "inst_util.m"
                                          }
#line 400 "inst_util.m"
                                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 397 "inst_util.m"
                                        }
#line 397 "inst_util.m"
                                    }
#line 381 "inst_util.m"
                                    break;
#line 381 "inst_util.m"
                                  case (MR_Integer) 1:
#line 378 "inst_util.m"
                                    {
#line 379 "inst_util.m"
                                      *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 380 "inst_util.m"
                                      check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 378 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 378 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 378 "inst_util.m"
                                    }
#line 381 "inst_util.m"
                                    break;
#line 381 "inst_util.m"
                                }
#line 381 "inst_util.m"
                                break;
#line 381 "inst_util.m"
                              case (MR_Integer) 1:
#line 383 "inst_util.m"
                                {
#line 383 "inst_util.m"
                                  MR_Word check_hlds__inst_util__GroundnessResultA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 0)));
#line 382 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 1)));
#line 382 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 2)));
#line 382 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 3)));
#line 382 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 4)));
#line 382 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 5)));

#line 388 "inst_util.m"
#line 388 "inst_util.m"
                                  switch (check_hlds__inst_util__GroundnessResultA_36) {
#line 388 "inst_util.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 388 "inst_util.m"
                                    case (MR_Integer) 2:
#line 388 "inst_util.m"
                                    case (MR_Integer) 0:
#line 391 "inst_util.m"
                                      {
#line 391 "inst_util.m"
                                        MR_Word check_hlds__inst_util__BoundInsts_123;

#line 392 "inst_util.m"
                                        {
#line 392 "inst_util.m"
                                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_123, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                        }
#line 391 "inst_util.m"
                                        if (check_hlds__inst_util__succeeded)
#line 391 "inst_util.m"
                                          {
#line 394 "inst_util.m"
                                            {
#line 394 "inst_util.m"
                                              MR_Word base;
#line 394 "inst_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 394 "inst_util.m"
                                              *check_hlds__inst_util__Inst_13 = base;
#line 394 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 394 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 394 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 394 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_123));
#line 394 "inst_util.m"
                                            }
#line 394 "inst_util.m"
                                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 391 "inst_util.m"
                                          }
#line 391 "inst_util.m"
                                      }
#line 388 "inst_util.m"
                                      break;
#line 388 "inst_util.m"
                                    case (MR_Integer) 1:
#line 385 "inst_util.m"
                                      {
#line 386 "inst_util.m"
                                        *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 387 "inst_util.m"
                                        check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 385 "inst_util.m"
                                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 385 "inst_util.m"
                                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 385 "inst_util.m"
                                      }
#line 388 "inst_util.m"
                                      break;
#line 388 "inst_util.m"
                                  }
#line 383 "inst_util.m"
                                }
#line 381 "inst_util.m"
                                break;
#line 381 "inst_util.m"
                            }
#line 375 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 375 "inst_util.m"
                              {
#line 402 "inst_util.m"
                                check_hlds__inst_util__V_94_94 = (MR_Integer) 1;
#line 402 "inst_util.m"
                                {
#line 402 "inst_util.m"
                                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_35, check_hlds__inst_util__V_94_94, check_hlds__inst_util__Detism_14);
                                }
#line 402 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 375 "inst_util.m"
                              }
#line 375 "inst_util.m"
                          }
#line 375 "inst_util.m"
                      }
#line 349 "inst_util.m"
                      break;
#line 349 "inst_util.m"
                    case (MR_Integer) 3:
#line 414 "inst_util.m"
                      {
#line 414 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstVarsB_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 414 "inst_util.m"
                        MR_Word check_hlds__inst_util__SubInstB_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 415 "inst_util.m"
                        {
#line 415 "inst_util.m"
                          return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_135, check_hlds__inst_util__SubInstB_136, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 414 "inst_util.m"
                      }
#line 349 "inst_util.m"
                      break;
#line 349 "inst_util.m"
                  }
#line 349 "inst_util.m"
                  break;
#line 349 "inst_util.m"
              }
#line 343 "inst_util.m"
            }
#line 279 "inst_util.m"
            break;
#line 279 "inst_util.m"
          case (MR_Integer) 1:
#line 454 "inst_util.m"
            {
#line 454 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfoA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 454 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 459 "inst_util.m"
              if ((check_hlds__inst_util__HOInstInfoA_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "inst_util.m"
                {
#line 457 "inst_util.m"
                  return check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                }
#line 459 "inst_util.m"
              else
#line 466 "inst_util.m"
#line 466 "inst_util.m"
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 466 "inst_util.m"
                  default:
#line 466 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 466 "inst_util.m"
                    break;
#line 466 "inst_util.m"
                  case (MR_Integer) 0:
#line 466 "inst_util.m"
#line 466 "inst_util.m"
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 466 "inst_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 466 "inst_util.m"
                      case (MR_Integer) 0:
#line 467 "inst_util.m"
                        {
#line 467 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_155;

#line 471 "inst_util.m"
#line 471 "inst_util.m"
                          switch (check_hlds__inst_util__Live_9) {
#line 471 "inst_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 471 "inst_util.m"
                            case (MR_Integer) 1:
#line 473 "inst_util.m"
                              {
#line 473 "inst_util.m"
                                check_hlds__inst_util__Uniq_155 = check_hlds__inst_util__UniqA_219;
#line 473 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 473 "inst_util.m"
                              }
#line 471 "inst_util.m"
                              break;
#line 471 "inst_util.m"
                            case (MR_Integer) 0:
#line 469 "inst_util.m"
                              {
#line 470 "inst_util.m"
                                {
#line 470 "inst_util.m"
                                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, &check_hlds__inst_util__Uniq_155);
                                }
#line 469 "inst_util.m"
                              }
#line 471 "inst_util.m"
                              break;
#line 471 "inst_util.m"
                          }
#line 467 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 467 "inst_util.m"
                            {
#line 476 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 467 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 475 "inst_util.m"
                              {
#line 475 "inst_util.m"
                                MR_Word base;
#line 475 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 475 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 475 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 475 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_155));
#line 475 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 475 "inst_util.m"
                              }
#line 475 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 467 "inst_util.m"
                            }
#line 467 "inst_util.m"
                        }
#line 466 "inst_util.m"
                        break;
#line 466 "inst_util.m"
                      case (MR_Integer) 1:
#line 463 "inst_util.m"
                        {
#line 464 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 465 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 463 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 463 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 463 "inst_util.m"
                        }
#line 466 "inst_util.m"
                        break;
#line 466 "inst_util.m"
                    }
#line 466 "inst_util.m"
                    break;
#line 466 "inst_util.m"
                  case (MR_Integer) 2:
#line 500 "inst_util.m"
                    {
#line 500 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_77_77;
#line 500 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 500 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_165;
#line 500 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 504 "inst_util.m"
#line 504 "inst_util.m"
                      switch (check_hlds__inst_util__Live_9) {
#line 504 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 504 "inst_util.m"
                        case (MR_Integer) 1:
#line 506 "inst_util.m"
                          {
#line 506 "inst_util.m"
                            {
#line 506 "inst_util.m"
                              check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                            }
#line 506 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 506 "inst_util.m"
                          }
#line 504 "inst_util.m"
                          break;
#line 504 "inst_util.m"
                        case (MR_Integer) 0:
#line 503 "inst_util.m"
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 504 "inst_util.m"
                          break;
#line 504 "inst_util.m"
                      }
#line 500 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 500 "inst_util.m"
                        {
#line 508 "inst_util.m"
                          check_hlds__inst_util__V_77_77 = (MR_Integer) 1;
#line 508 "inst_util.m"
                          {
#line 508 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_77_77, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_164, &check_hlds__inst_util__Uniq_165);
                          }
#line 500 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 500 "inst_util.m"
                            {
#line 510 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 500 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 509 "inst_util.m"
                              {
#line 509 "inst_util.m"
                                MR_Word base;
#line 509 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 509 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 509 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 509 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_165));
#line 509 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 509 "inst_util.m"
                              }
#line 509 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 500 "inst_util.m"
                            }
#line 500 "inst_util.m"
                        }
#line 500 "inst_util.m"
                    }
#line 466 "inst_util.m"
                    break;
#line 466 "inst_util.m"
                  case (MR_Integer) 3:
#line 466 "inst_util.m"
#line 466 "inst_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 466 "inst_util.m"
                      default:
#line 466 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 466 "inst_util.m"
                        break;
#line 466 "inst_util.m"
                      case (MR_Integer) 0:
#line 478 "inst_util.m"
                        {
#line 478 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_81_81;
#line 478 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 478 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstResultsB_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 478 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInstsB_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 478 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_159;
#line 478 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInsts_160;
#line 478 "inst_util.m"
                          MR_Word check_hlds__inst_util__Detism1_161;

#line 480 "inst_util.m"
                          {
#line 480 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_156, &check_hlds__inst_util__Uniq_159);
                          }
#line 478 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 478 "inst_util.m"
                            {
#line 481 "inst_util.m"
                              {
#line 481 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_158, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_160, &check_hlds__inst_util__Detism1_161, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                              }
#line 478 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 478 "inst_util.m"
                                {
#line 484 "inst_util.m"
                                  check_hlds__inst_util__V_81_81 = (MR_Integer) 1;
#line 483 "inst_util.m"
                                  {
#line 483 "inst_util.m"
                                    MR_Word base;
#line 483 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 483 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 483 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 483 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_159));
#line 483 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_157));
#line 483 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_160));
#line 483 "inst_util.m"
                                  }
#line 484 "inst_util.m"
                                  {
#line 484 "inst_util.m"
                                    parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_161, check_hlds__inst_util__V_81_81, check_hlds__inst_util__Detism_14);
                                  }
#line 484 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 478 "inst_util.m"
                                }
#line 478 "inst_util.m"
                            }
#line 478 "inst_util.m"
                        }
#line 466 "inst_util.m"
                        break;
#line 466 "inst_util.m"
                      case (MR_Integer) 1:
#line 486 "inst_util.m"
                        {
#line 486 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_78_78;
#line 486 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_162;
#line 486 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_163;
#line 486 "inst_util.m"
                          MR_Word check_hlds__inst_util___HOInstInfoB_50;

#line 489 "inst_util.m"
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 486 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 486 "inst_util.m"
                            {
#line 486 "inst_util.m"
                              check_hlds__inst_util__UniqB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 486 "inst_util.m"
                              check_hlds__inst_util___HOInstInfoB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 496 "inst_util.m"
                              check_hlds__inst_util__V_78_78 = (MR_Integer) 1;
#line 496 "inst_util.m"
                              {
#line 496 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_78_78, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_162, &check_hlds__inst_util__Uniq_163);
                              }
#line 486 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 486 "inst_util.m"
                                {
#line 498 "inst_util.m"
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 486 "inst_util.m"
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 497 "inst_util.m"
                                  {
#line 497 "inst_util.m"
                                    MR_Word base;
#line 497 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 497 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 497 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 497 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_163));
#line 497 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 497 "inst_util.m"
                                  }
#line 497 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 486 "inst_util.m"
                                }
#line 486 "inst_util.m"
                            }
#line 486 "inst_util.m"
                        }
#line 466 "inst_util.m"
                        break;
#line 466 "inst_util.m"
                      case (MR_Integer) 3:
#line 512 "inst_util.m"
                        {
#line 512 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 512 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 513 "inst_util.m"
                          {
#line 513 "inst_util.m"
                            return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_166, check_hlds__inst_util__SubInstB_167, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 512 "inst_util.m"
                        }
#line 466 "inst_util.m"
                        break;
#line 466 "inst_util.m"
                    }
#line 466 "inst_util.m"
                    break;
#line 466 "inst_util.m"
                }
#line 454 "inst_util.m"
            }
#line 279 "inst_util.m"
            break;
#line 279 "inst_util.m"
          case (MR_Integer) 3:
#line 611 "inst_util.m"
            {
#line 611 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVarsA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 611 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInstA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));

#line 612 "inst_util.m"
              {
#line 612 "inst_util.m"
                return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsA_58, check_hlds__inst_util__SubInstA_59, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
              }
#line 611 "inst_util.m"
            }
#line 279 "inst_util.m"
            break;
#line 279 "inst_util.m"
        }
#line 279 "inst_util.m"
        break;
#line 279 "inst_util.m"
    }
#line 279 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 279 "inst_util.m"
  }
#line 269 "inst_util.m"
}

#line 244 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 244 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 244 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 244 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 244 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21)
#line 244 "inst_util.m"
{
#line 249 "inst_util.m"
  {
#line 249 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 249 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_16;
#line 249 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_17;
#line 249 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;
#line 256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_23_23;
#line 256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_24_24;
#line 256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_19_19;

#line 250 "inst_util.m"
    {
#line 250 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstA_10, &check_hlds__inst_util__ExpandedInstA_16);
    }
#line 251 "inst_util.m"
    {
#line 251 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstB_11, &check_hlds__inst_util__ExpandedInstB_17);
    }
#line 252 "inst_util.m"
    {
#line 252 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__ExpandedInstA_16, check_hlds__inst_util__ExpandedInstB_17, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);
    }
#line 249 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 249 "inst_util.m"
      {
#line 256 "inst_util.m"
        check_hlds__inst_util__V_23_23 = (MR_Integer) 0;
#line 256 "inst_util.m"
        {
#line 256 "inst_util.m"
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__inst_util__Detism_14, &check_hlds__inst_util__V_19_19, &check_hlds__inst_util__V_24_24);
        }
#line 256 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_23_23 == check_hlds__inst_util__V_24_24);
#line 258 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 257 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 258 "inst_util.m"
        else
#line 259 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_18;
#line 258 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 249 "inst_util.m"
      }
#line 249 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 249 "inst_util.m"
  }
#line 244 "inst_util.m"
}

#line 144 "inst_util.m"
MR_Word MR_CALL 
check_hlds__inst_util__inst_may_restrict_cons_ids_2_f_0(
#line 144 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_4,
#line 144 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_5)
#line 144 "inst_util.m"
{
#line 2381 "inst_util.m"
  while (MR_TRUE)
#line 2381 "inst_util.m"
    {
#line 2381 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2381 "inst_util.m"
      {
#line 2381 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2381 "inst_util.m"
        MR_Word check_hlds__inst_util__MayRestrict_6;

#line 2381 "inst_util.m"
#line 2381 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) {
#line 2381 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2381 "inst_util.m"
          case (MR_Integer) 0:
#line 2389 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2381 "inst_util.m"
            break;
#line 2381 "inst_util.m"
          case (MR_Integer) 1:
#line 2389 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2381 "inst_util.m"
            break;
#line 2381 "inst_util.m"
          case (MR_Integer) 2:
#line 2382 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2381 "inst_util.m"
            break;
#line 2381 "inst_util.m"
          case (MR_Integer) 3:
#line 2381 "inst_util.m"
#line 2381 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) {
#line 2381 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2381 "inst_util.m"
              case (MR_Integer) 0:
#line 2381 "inst_util.m"
              case (MR_Integer) 2:
#line 2381 "inst_util.m"
              case (MR_Integer) 3:
#line 2381 "inst_util.m"
              case (MR_Integer) 5:
#line 2382 "inst_util.m"
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2381 "inst_util.m"
                break;
#line 2381 "inst_util.m"
              case (MR_Integer) 1:
#line 2389 "inst_util.m"
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2381 "inst_util.m"
                break;
#line 2381 "inst_util.m"
              case (MR_Integer) 4:
#line 2391 "inst_util.m"
                {
#line 2391 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 1)));
#line 2391 "inst_util.m"
                  MR_Word check_hlds__inst_util__NewInst_21;

#line 2392 "inst_util.m"
                  {
#line 2392 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_20, &check_hlds__inst_util__NewInst_21);
                  }
#line 2393 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2393 "inst_util.m"
                  {
#line 2393 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_5 = check_hlds__inst_util__NewInst_21;

#line 2393 "inst_util.m"
                    check_hlds__inst_util__Inst_5 = check_hlds__inst_util__Inst__tmp_copy_5;
#line 2393 "inst_util.m"
                  }
#line 2393 "inst_util.m"
                  continue;
#line 2391 "inst_util.m"
                }
#line 2381 "inst_util.m"
                break;
#line 2381 "inst_util.m"
            }
#line 2381 "inst_util.m"
            break;
#line 2381 "inst_util.m"
        }
#line 2381 "inst_util.m"
        return check_hlds__inst_util__MayRestrict_6;
#line 2381 "inst_util.m"
      }
#line 2381 "inst_util.m"
      break;
#line 2381 "inst_util.m"
    }
#line 144 "inst_util.m"
}

#line 139 "inst_util.m"
MR_Word MR_CALL 
check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(
#line 139 "inst_util.m"
  MR_Integer check_hlds__inst_util__Arity_3)
#line 139 "inst_util.m"
{
#line 2266 "inst_util.m"
  {
#line 2266 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2266 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_4;
#line 2266 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_16_16;
#line 2266 "inst_util.m"
    MR_Word check_hlds__inst_util__InMode_5;
#line 2266 "inst_util.m"
    MR_Word check_hlds__inst_util__OutMode_6;
#line 2266 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_7;
#line 2266 "inst_util.m"
    MR_Word check_hlds__inst_util__V_8_8;
#line 2266 "inst_util.m"
    MR_Integer check_hlds__inst_util__V_9_9;
#line 2266 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2267 "inst_util.m"
    {
#line 2267 "inst_util.m"
      parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__inst_util__InMode_5);
    }
#line 2268 "inst_util.m"
    {
#line 2268 "inst_util.m"
      parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__inst_util__OutMode_6);
    }
#line 11878 "check_hlds.inst_util.c"
    check_hlds__inst_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2269 "inst_util.m"
    check_hlds__inst_util__V_9_9 = (check_hlds__inst_util__Arity_3 - (MR_Integer) 1);
#line 2269 "inst_util.m"
    {
#line 2269 "inst_util.m"
      check_hlds__inst_util__V_8_8 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_9_9, ((MR_Box) (check_hlds__inst_util__InMode_5)));
    }
#line 2269 "inst_util.m"
    {
#line 2269 "inst_util.m"
      check_hlds__inst_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2269 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 0) = ((MR_Box) (check_hlds__inst_util__OutMode_6));
#line 2269 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2269 "inst_util.m"
    }
#line 2269 "inst_util.m"
    {
#line 2269 "inst_util.m"
      check_hlds__inst_util__ArgModes_7 = mercury__list__f_43_43_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_8_8, check_hlds__inst_util__V_11_11);
    }
#line 2270 "inst_util.m"
    {
#line 2270 "inst_util.m"
      check_hlds__inst_util__PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2270 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 2270 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 1) = ((MR_Box) (check_hlds__inst_util__ArgModes_7));
#line 2270 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2270 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2270 "inst_util.m"
    }
#line 2266 "inst_util.m"
    return check_hlds__inst_util__PredInstInfo_4;
#line 2266 "inst_util.m"
  }
#line 139 "inst_util.m"
}

#line 134 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(
#line 134 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 134 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfo_4)
#line 134 "inst_util.m"
{
#line 2262 "inst_util.m"
  {
#line 2262 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 2262 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_14;
#line 2262 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_5;
#line 2262 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_8;
#line 2262 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_11;
#line 2262 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 2257 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9;
#line 2257 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;
#line 2259 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;

#line 2263 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2263 "inst_util.m"
      {
#line 2263 "inst_util.m"
        check_hlds__inst_util__PredInstInfo_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfo_4), (MR_Integer) 1);
#line 2257 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 0)));
#line 2257 "inst_util.m"
        check_hlds__inst_util__ArgModes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 1)));
#line 2257 "inst_util.m"
        check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 2)));
#line 2257 "inst_util.m"
        check_hlds__inst_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 3)));
#line 2257 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_12_12 == (MR_Integer) 1);
#line 2262 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2262 "inst_util.m"
          {
#line 11973 "check_hlds.inst_util.c"
            check_hlds__inst_util__TypeCtorInfo_11_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2258 "inst_util.m"
            {
#line 2258 "inst_util.m"
              check_hlds__inst_util__Arity_11 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_14, check_hlds__inst_util__ArgModes_8);
            }
#line 2260 "inst_util.m"
            {
#line 2260 "inst_util.m"
              check_hlds__inst_util__V_13_13 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_11);
            }
#line 2259 "inst_util.m"
            {
#line 2259 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_5, check_hlds__inst_util__V_13_13, check_hlds__inst_util__ModuleInfo_3);
            }
#line 2259 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2262 "inst_util.m"
          }
#line 2263 "inst_util.m"
      }
#line 2262 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2262 "inst_util.m"
  }
#line 134 "inst_util.m"
}

#line 128 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_p_0(
#line 128 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 128 "inst_util.m"
  MR_Word check_hlds__inst_util__PredInstInfo_4)
#line 128 "inst_util.m"
{
#line 2256 "inst_util.m"
  {
#line 2256 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_11;
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 1)));
#line 2256 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_8;
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 0)));
#line 2257 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 2)));
#line 2257 "inst_util.m"
    MR_Word check_hlds__inst_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 3)));
#line 2259 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;

#line 2257 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_9_9 == (MR_Integer) 1);
#line 2256 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2256 "inst_util.m"
      {
#line 12037 "check_hlds.inst_util.c"
        check_hlds__inst_util__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2258 "inst_util.m"
        {
#line 2258 "inst_util.m"
          check_hlds__inst_util__Arity_8 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_11, check_hlds__inst_util__ArgModes_5);
        }
#line 2260 "inst_util.m"
        {
#line 2260 "inst_util.m"
          check_hlds__inst_util__V_10_10 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_8);
        }
#line 2259 "inst_util.m"
        {
#line 2259 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_4, check_hlds__inst_util__V_10_10, check_hlds__inst_util__ModuleInfo_3);
        }
#line 2259 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2256 "inst_util.m"
      }
#line 2256 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2256 "inst_util.m"
  }
#line 128 "inst_util.m"
}

#line 122 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__var_inst_contains_any_3_p_0(
#line 122 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_4,
#line 122 "inst_util.m"
  MR_Word check_hlds__inst_util__Instmap_5,
#line 122 "inst_util.m"
  MR_Word check_hlds__inst_util__Var_6)
#line 122 "inst_util.m"
{
#line 2368 "inst_util.m"
  {
#line 2368 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2368 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst_7;
#line 2368 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_10;
#line 2368 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2369 "inst_util.m"
    {
#line 2369 "inst_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__inst_util__Instmap_5, check_hlds__inst_util__Var_6, &check_hlds__inst_util__Inst_7);
    }
#line 2276 "inst_util.m"
    {
#line 2276 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_10);
    }
#line 2277 "inst_util.m"
    {
#line 2277 "inst_util.m"
      check_hlds__inst_util__V_11_11 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__Inst_7, check_hlds__inst_util__Expansions_10);
    }
#line 2277 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_11_11 == (MR_Integer) 1);
#line 2368 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2368 "inst_util.m"
  }
#line 122 "inst_util.m"
}

#line 118 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__inst_contains_any_2_p_0(
#line 118 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 118 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_4)
#line 118 "inst_util.m"
{
#line 2275 "inst_util.m"
  {
#line 2275 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2275 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_5;
#line 2275 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2276 "inst_util.m"
    {
#line 2276 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_5);
    }
#line 2277 "inst_util.m"
    {
#line 2277 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions_5);
    }
#line 2277 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2275 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2275 "inst_util.m"
  }
#line 118 "inst_util.m"
}

#line 113 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_p_0(
#line 113 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 113 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_4)
#line 113 "inst_util.m"
{
#line 2158 "inst_util.m"
  {
#line 2158 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2158 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_5;
#line 2158 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2159 "inst_util.m"
    {
#line 2159 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_5);
    }
#line 2160 "inst_util.m"
    {
#line 2160 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions0_5);
    }
#line 2160 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2158 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2158 "inst_util.m"
  }
#line 113 "inst_util.m"
}

#line 101 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_6_p_0(
#line 101 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 101 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 101 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 101 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 101 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31,
#line 101 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32)
#line 101 "inst_util.m"
{
#line 1725 "inst_util.m"
  {
#line 1725 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1721 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 1721 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;
#line 1721 "inst_util.m"
    MR_Word check_hlds__inst_util__V_14_14;
#line 1722 "inst_util.m"
    MR_Word check_hlds__inst_util__V_15_15;
#line 1722 "inst_util.m"
    MR_Word check_hlds__inst_util__V_16_16;
#line 1722 "inst_util.m"
    MR_Word check_hlds__inst_util__V_17_17;

#line 1721 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1721 "inst_util.m"
      {
#line 1721 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1721 "inst_util.m"
        check_hlds__inst_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1721 "inst_util.m"
        check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1722 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1722 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1722 "inst_util.m"
          {
#line 1722 "inst_util.m"
            check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1722 "inst_util.m"
            check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1722 "inst_util.m"
            check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1722 "inst_util.m"
          }
#line 1721 "inst_util.m"
      }
#line 1725 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1724 "inst_util.m"
      {
#line 1724 "inst_util.m"
        return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
      }
#line 1725 "inst_util.m"
    else
#line 1727 "inst_util.m"
      {
#line 1727 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_18;
#line 1727 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable0_19;
#line 1727 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstInfo_20;
#line 1727 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstName_21;
#line 1727 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeMergedInst_22;
#line 1727 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable1_23;
#line 1727 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_25;

#line 1727 "inst_util.m"
        {
#line 1727 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__InstTable0_18);
        }
#line 1728 "inst_util.m"
        {
#line 1728 "inst_util.m"
          hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__MergeInstTable0_19);
        }
#line 1729 "inst_util.m"
        {
#line 1729 "inst_util.m"
          check_hlds__inst_util__MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1729 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1729 "inst_util.m"
        }
#line 1730 "inst_util.m"
        {
#line 1730 "inst_util.m"
          check_hlds__inst_util__MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1730 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1730 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1730 "inst_util.m"
        }
#line 1731 "inst_util.m"
        {
#line 1731 "inst_util.m"
          hlds__hlds_data__search_insert_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, &check_hlds__inst_util__MaybeMaybeMergedInst_22, check_hlds__inst_util__MergeInstTable0_19, &check_hlds__inst_util__MergeInstTable1_23);
        }
#line 1741 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeMergedInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1742 "inst_util.m"
          {
#line 1742 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_26;
#line 1742 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_27;
#line 1742 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable2_28;
#line 1742 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable3_29;
#line 1742 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable3_30;
#line 1742 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34;
#line 1742 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35;
#line 1742 "inst_util.m"
            MR_Word check_hlds__inst_util__V_36_36;

#line 1745 "inst_util.m"
            {
#line 1745 "inst_util.m"
              hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable1_23, check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__InstTable1_26);
            }
#line 1747 "inst_util.m"
            {
#line 1747 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34);
            }
#line 1750 "inst_util.m"
            {
#line 1750 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35);
            }
#line 1742 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1742 "inst_util.m"
              {
#line 1753 "inst_util.m"
                {
#line 1753 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__inst_util__InstTable2_27);
                }
#line 1754 "inst_util.m"
                {
#line 1754 "inst_util.m"
                  hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__MergeInstTable2_28);
                }
#line 1755 "inst_util.m"
                {
#line 1755 "inst_util.m"
                  check_hlds__inst_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1755 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_36_36, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_25));
#line 1755 "inst_util.m"
                }
#line 1755 "inst_util.m"
                {
#line 1755 "inst_util.m"
                  hlds__hlds_data__det_update_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, check_hlds__inst_util__V_36_36, check_hlds__inst_util__MergeInstTable2_28, &check_hlds__inst_util__MergeInstTable3_29);
                }
#line 1757 "inst_util.m"
                {
#line 1757 "inst_util.m"
                  hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable3_29, check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__InstTable3_30);
                }
#line 1759 "inst_util.m"
                {
#line 1759 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable3_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
                }
#line 1759 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1742 "inst_util.m"
              }
#line 1742 "inst_util.m"
          }
#line 1741 "inst_util.m"
        else
#line 1734 "inst_util.m"
          {
#line 1734 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeMergedInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeMergedInst_22, (MR_Integer) 0)));

#line 1737 "inst_util.m"
            if ((check_hlds__inst_util__MaybeMergedInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1739 "inst_util.m"
              {
#line 1739 "inst_util.m"
                check_hlds__inst_util__Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1739 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1739 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1739 "inst_util.m"
              }
#line 1737 "inst_util.m"
            else
#line 1736 "inst_util.m"
              check_hlds__inst_util__Inst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMergedInst_24, (MR_Integer) 0)));
#line 1734 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31;
#line 1734 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1734 "inst_util.m"
          }
#line 1727 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1727 "inst_util.m"
          {
#line 1762 "inst_util.m"
            {
#line 1762 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_25, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32, check_hlds__inst_util__MergeInstName_21);
            }
#line 1764 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1763 "inst_util.m"
              {
#line 1763 "inst_util.m"
                MR_Word base;
#line 1763 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1763 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = base;
#line 1763 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1763 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1763 "inst_util.m"
              }
#line 1764 "inst_util.m"
            else
#line 1765 "inst_util.m"
              *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_25;
#line 1764 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1727 "inst_util.m"
          }
#line 1727 "inst_util.m"
      }
#line 1725 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1725 "inst_util.m"
  }
#line 101 "inst_util.m"
}

#line 89 "inst_util.m"
void MR_CALL 
check_hlds__inst_util__make_shared_inst_list_4_p_0(
#line 89 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 89 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 89 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 89 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 89 "inst_util.m"
{
#line 1440 "inst_util.m"
  {
#line 1440 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1440 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1440 "inst_util.m"
      {
#line 1440 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1440 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1440 "inst_util.m"
      }
#line 1440 "inst_util.m"
    else
#line 1441 "inst_util.m"
      {
#line 1441 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1441 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1441 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1441 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1441 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1442 "inst_util.m"
        {
#line 1442 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1443 "inst_util.m"
        {
#line 1443 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1441 "inst_util.m"
        {
#line 1441 "inst_util.m"
          MR_Word base;
#line 1441 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1441 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1441 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1441 "inst_util.m"
        }
#line 1441 "inst_util.m"
      }
#line 1440 "inst_util.m"
  }
#line 89 "inst_util.m"
}

#line 81 "inst_util.m"
void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(
#line 81 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 81 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 81 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35,
#line 81 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36)
#line 81 "inst_util.m"
{
#line 1587 "inst_util.m"
  {
#line 1587 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1587 "inst_util.m"
#line 1587 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
#line 1587 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1587 "inst_util.m"
      case (MR_Integer) 0:
#line 1587 "inst_util.m"
        {
#line 1588 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1587 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1587 "inst_util.m"
        }
#line 1587 "inst_util.m"
        break;
#line 1587 "inst_util.m"
      case (MR_Integer) 1:
#line 1587 "inst_util.m"
        {
#line 1588 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1587 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1587 "inst_util.m"
        }
#line 1587 "inst_util.m"
        break;
#line 1587 "inst_util.m"
      case (MR_Integer) 2:
#line 1590 "inst_util.m"
        {
#line 1590 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1590 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1590 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[0 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1592 "inst_util.m"
          {
#line 1592 "inst_util.m"
            MR_Word base;
#line 1592 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1592 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1592 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1592 "inst_util.m"
          }
#line 1590 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1590 "inst_util.m"
        }
#line 1587 "inst_util.m"
        break;
#line 1587 "inst_util.m"
      case (MR_Integer) 3:
#line 1587 "inst_util.m"
#line 1587 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
#line 1587 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1587 "inst_util.m"
          case (MR_Integer) 0:
#line 1594 "inst_util.m"
            {
#line 1594 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1594 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1594 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1594 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_51 = ((&check_hlds__inst_util_vector_common_2[5 + check_hlds__inst_util__Uniq0_50]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
#line 1594 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));

#line 1597 "inst_util.m"
              {
#line 1597 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1599 "inst_util.m"
              {
#line 1599 "inst_util.m"
                MR_Word base;
#line 1599 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1599 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1599 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1599 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_51));
#line 1599 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1599 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1599 "inst_util.m"
              }
#line 1594 "inst_util.m"
            }
#line 1587 "inst_util.m"
            break;
#line 1587 "inst_util.m"
          case (MR_Integer) 1:
#line 1601 "inst_util.m"
            {
#line 1601 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1601 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1601 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_53 = ((&check_hlds__inst_util_vector_common_2[10 + check_hlds__inst_util__Uniq0_52]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1603 "inst_util.m"
              {
#line 1603 "inst_util.m"
                MR_Word base;
#line 1603 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1603 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1603 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1603 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_53));
#line 1603 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1603 "inst_util.m"
              }
#line 1601 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1601 "inst_util.m"
            }
#line 1587 "inst_util.m"
            break;
#line 1587 "inst_util.m"
          case (MR_Integer) 2:
#line 1605 "inst_util.m"
            {
#line 1606 "inst_util.m"
              {
#line 1606 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
#line 1606 "inst_util.m"
                return;
              }
#line 1605 "inst_util.m"
            }
#line 1587 "inst_util.m"
            break;
#line 1587 "inst_util.m"
          case (MR_Integer) 3:
#line 1608 "inst_util.m"
            {
#line 1608 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1608 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1608 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst_19;

#line 1609 "inst_util.m"
              {
#line 1609 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1610 "inst_util.m"
              {
#line 1610 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1610 "inst_util.m"
              check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1612 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1611 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst_19;
#line 1612 "inst_util.m"
              else
#line 1613 "inst_util.m"
                {
#line 1613 "inst_util.m"
                  MR_Word base;
#line 1613 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1613 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1613 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1613 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1613 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst_19));
#line 1613 "inst_util.m"
                }
#line 1608 "inst_util.m"
            }
#line 1587 "inst_util.m"
            break;
#line 1587 "inst_util.m"
          case (MR_Integer) 4:
#line 1619 "inst_util.m"
            {
#line 1619 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1619 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_23;
#line 1619 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInstTable0_24;
#line 1619 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1619 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInstTable1_26;
#line 1619 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInst_28;

#line 1621 "inst_util.m"
              {
#line 1621 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__InstTable0_23);
              }
#line 1622 "inst_util.m"
              {
#line 1622 "inst_util.m"
                hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__MostlyUniqInstTable0_24);
              }
#line 1623 "inst_util.m"
              {
#line 1623 "inst_util.m"
                hlds__hlds_data__search_insert_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__MostlyUniqInstTable0_24, &check_hlds__inst_util__MostlyUniqInstTable1_26);
              }
#line 1633 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1634 "inst_util.m"
                {
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_29;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_30;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_31;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable2_32;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable_33;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_34;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_39_39;
#line 1634 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_54;

#line 1637 "inst_util.m"
                  {
#line 1637 "inst_util.m"
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
#line 1639 "inst_util.m"
                  {
#line 1639 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
#line 1643 "inst_util.m"
                  {
#line 1643 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_54);
                  }
#line 1644 "inst_util.m"
                  {
#line 1644 "inst_util.m"
                    check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__SubInst0_54, &check_hlds__inst_util__SubInst1_30);
                  }
#line 1645 "inst_util.m"
                  {
#line 1645 "inst_util.m"
                    check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst1_30, &check_hlds__inst_util__MostlyUniqInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38);
                  }
#line 1650 "inst_util.m"
                  {
#line 1650 "inst_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__inst_util__InstTable2_31);
                  }
#line 1651 "inst_util.m"
                  {
#line 1651 "inst_util.m"
                    hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__MostlyUniqInstTable2_32);
                  }
#line 1652 "inst_util.m"
                  {
#line 1652 "inst_util.m"
                    check_hlds__inst_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_39_39, 0) = ((MR_Box) (check_hlds__inst_util__MostlyUniqInst_28));
#line 1652 "inst_util.m"
                  }
#line 1652 "inst_util.m"
                  {
#line 1652 "inst_util.m"
                    hlds__hlds_data__det_update_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_39_39, check_hlds__inst_util__MostlyUniqInstTable2_32, &check_hlds__inst_util__MostlyUniqInstTable_33);
                  }
#line 1654 "inst_util.m"
                  {
#line 1654 "inst_util.m"
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable_33, check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__InstTable_34);
                  }
#line 1656 "inst_util.m"
                  {
#line 1656 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
                  }
#line 1634 "inst_util.m"
                }
#line 1633 "inst_util.m"
              else
#line 1626 "inst_util.m"
                {
#line 1626 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1629 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1631 "inst_util.m"
                    check_hlds__inst_util__MostlyUniqInst_28 = check_hlds__inst_util__Inst0_5;
#line 1629 "inst_util.m"
                  else
#line 1628 "inst_util.m"
                    check_hlds__inst_util__MostlyUniqInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1626 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1626 "inst_util.m"
                }
#line 1659 "inst_util.m"
              {
#line 1659 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__MostlyUniqInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36, check_hlds__inst_util__InstName_22);
              }
#line 1661 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1660 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1661 "inst_util.m"
              else
#line 1662 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__MostlyUniqInst_28;
#line 1619 "inst_util.m"
            }
#line 1587 "inst_util.m"
            break;
#line 1587 "inst_util.m"
          case (MR_Integer) 5:
#line 1616 "inst_util.m"
            {
#line 1617 "inst_util.m"
              {
#line 1617 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
#line 1617 "inst_util.m"
                return;
              }
#line 1616 "inst_util.m"
            }
#line 1587 "inst_util.m"
            break;
#line 1587 "inst_util.m"
        }
#line 1587 "inst_util.m"
        break;
#line 1587 "inst_util.m"
    }
#line 1587 "inst_util.m"
  }
#line 81 "inst_util.m"
}

#line 71 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(
#line 71 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 71 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA0_13,
#line 71 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 71 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 71 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 71 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 71 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 71 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 71 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 71 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 71 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
#line 71 "inst_util.m"
{
#line 702 "inst_util.m"
  {
#line 702 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 702 "inst_util.m"
    MR_Word check_hlds__inst_util__InstA_22;

#line 703 "inst_util.m"
    {
#line 703 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__InstA0_13, &check_hlds__inst_util__InstA_22);
    }
#line 704 "inst_util.m"
    {
#line 704 "inst_util.m"
      return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__InstA_22, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, check_hlds__inst_util__Inst_19, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
    }
#line 702 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 702 "inst_util.m"
  }
#line 71 "inst_util.m"
}

#line 64 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_8_p_0(
#line 64 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 64 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 64 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 64 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 64 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 64 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 64 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29,
#line 64 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30)
#line 64 "inst_util.m"
{
#line 170 "inst_util.m"
  {
#line 170 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 170 "inst_util.m"
    MR_Word check_hlds__inst_util__InstTable0_16;
#line 170 "inst_util.m"
    MR_Word check_hlds__inst_util__UnifyInstTable0_17;

#line 172 "inst_util.m"
    {
#line 172 "inst_util.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__InstTable0_16);
    }
#line 173 "inst_util.m"
    {
#line 173 "inst_util.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__UnifyInstTable0_17);
    }
#line 192 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 193 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 196 "inst_util.m"
      {
#line 196 "inst_util.m"
        return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
      }
#line 198 "inst_util.m"
    else
#line 199 "inst_util.m"
      {
#line 199 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstInfo_18;
#line 199 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstName_19;
#line 199 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_20;
#line 199 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstTable1_21;
#line 199 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_23;

#line 199 "inst_util.m"
        {
#line 199 "inst_util.m"
          check_hlds__inst_util__UnifyInstInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 199 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 199 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 199 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 199 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 199 "inst_util.m"
        }
#line 200 "inst_util.m"
        {
#line 200 "inst_util.m"
          check_hlds__inst_util__UnifyInstName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 200 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 200 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 200 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 200 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 200 "inst_util.m"
        }
#line 201 "inst_util.m"
        {
#line 201 "inst_util.m"
          hlds__hlds_data__search_insert_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, &check_hlds__inst_util__MaybeMaybeInst_20, check_hlds__inst_util__UnifyInstTable0_17, &check_hlds__inst_util__UnifyInstTable1_21);
        }
#line 217 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "inst_util.m"
          {
#line 218 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_24;
#line 218 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_25;
#line 218 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable2_26;
#line 218 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable_27;
#line 218 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_28;
#line 218 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32;
#line 218 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;
#line 218 "inst_util.m"
            MR_Word check_hlds__inst_util__V_34_34;

#line 221 "inst_util.m"
            {
#line 221 "inst_util.m"
              hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable1_21, check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__InstTable1_24);
            }
#line 223 "inst_util.m"
            {
#line 223 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32);
            }
#line 225 "inst_util.m"
            {
#line 225 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_23, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 218 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 218 "inst_util.m"
              {
#line 229 "inst_util.m"
                {
#line 229 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__inst_util__InstTable2_25);
                }
#line 230 "inst_util.m"
                {
#line 230 "inst_util.m"
                  hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__UnifyInstTable2_26);
                }
#line 231 "inst_util.m"
                {
#line 231 "inst_util.m"
                  check_hlds__inst_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_23));
#line 231 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 231 "inst_util.m"
                }
#line 231 "inst_util.m"
                {
#line 231 "inst_util.m"
                  hlds__hlds_data__det_update_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, check_hlds__inst_util__V_34_34, check_hlds__inst_util__UnifyInstTable2_26, &check_hlds__inst_util__UnifyInstTable_27);
                }
#line 233 "inst_util.m"
                {
#line 233 "inst_util.m"
                  hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable_27, check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__InstTable_28);
                }
#line 234 "inst_util.m"
                {
#line 234 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
                }
#line 234 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 218 "inst_util.m"
              }
#line 218 "inst_util.m"
          }
#line 217 "inst_util.m"
        else
#line 204 "inst_util.m"
          {
#line 204 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_20, (MR_Integer) 0)));

#line 207 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "inst_util.m"
              {
#line 209 "inst_util.m"
                {
#line 209 "inst_util.m"
                  check_hlds__inst_util__Inst0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 209 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 209 "inst_util.m"
                }
#line 215 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 208 "inst_util.m"
              }
#line 207 "inst_util.m"
            else
#line 206 "inst_util.m"
              {
#line 206 "inst_util.m"
                check_hlds__inst_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 0)));
#line 206 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 1)));
#line 206 "inst_util.m"
              }
#line 204 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29;
#line 204 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 204 "inst_util.m"
          }
#line 199 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 199 "inst_util.m"
          {
#line 237 "inst_util.m"
            {
#line 237 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_23, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30, check_hlds__inst_util__UnifyInstName_19);
            }
#line 239 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 238 "inst_util.m"
              {
#line 238 "inst_util.m"
                MR_Word base;
#line 238 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 238 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 238 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 238 "inst_util.m"
              }
#line 239 "inst_util.m"
            else
#line 240 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_23;
#line 239 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 199 "inst_util.m"
          }
#line 199 "inst_util.m"
      }
#line 170 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 170 "inst_util.m"
  }
#line 64 "inst_util.m"
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
