/*
** Automatically generated from `inst_util.m'
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
#include "hlds.status.mih"
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




#line 1697 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

#line 2345 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2345 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2345 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2345 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2331 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2331 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2331 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2331 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2276 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2276 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2276 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2276 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2232 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2232 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2232 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2232 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2215 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2215 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2215 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2215 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2159 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2159 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2159 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2159 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2115 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2115 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2115 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2115 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2115 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2115 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2115 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);

#line 2098 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2098 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2098 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2098 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2098 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2098 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2098 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);

#line 2054 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2054 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2054 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);

#line 2012 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2012 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2012 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2012 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2012 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2012 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2012 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11);

#line 2003 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2003 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2003 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2003 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2003 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2003 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2003 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 1991 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1991 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1991 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 1982 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1982 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10);

#line 1951 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1951 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1951 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1951 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1951 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1951 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13);

#line 1942 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1942 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1942 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1942 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6);

#line 1814 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1814 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1814 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1814 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1814 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1814 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1814 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);

#line 1786 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1786 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1786 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1786 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1786 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1786 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1786 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);

#line 1766 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1766 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1766 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1766 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1766 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1766 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1766 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);

#line 1682 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1682 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1682 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1682 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1682 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1671 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1671 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1671 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1671 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1671 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1566 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1566 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1566 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1566 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1566 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1445 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1445 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1445 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1445 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1445 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);

#line 1418 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1418 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1418 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1418 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1418 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1418 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);

#line 1398 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1398 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1398 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1398 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 1387 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1387 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1387 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1387 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1371 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1371 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1371 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1371 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1264 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1264 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1264 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1264 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);

#line 1243 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1243 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1243 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1243 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1140 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1140 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1140 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1140 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);

#line 1125 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1125 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1125 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1125 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1106 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 989 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 989 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12);

#line 942 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 942 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 942 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 942 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);

#line 926 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 926 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 926 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 926 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 907 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 864 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 864 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 864 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 864 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 829 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 829 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 829 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 829 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);

#line 704 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 704 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 704 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 704 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);

#line 683 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 266 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 266 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 266 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 266 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);

#line 241 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 241 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 241 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 241 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);


static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_3[1][3];


#line 1665 "inst_util.m"
/* sealed */ struct check_hlds__inst_util__vector_common_type_2_0_s {
#line 1665 "inst_util.m"
  const MR_Word check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
#line 1665 "inst_util.m"
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



#line 1697 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
#line 1697 "inst_util.m"
{
#line 1699 "inst_util.m"
  {
#line 1699 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1699 "inst_util.m"
  }
#line 1697 "inst_util.m"
}

#line 2345 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2345 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2345 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2345 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2345 "inst_util.m"
{
#line 2348 "inst_util.m"
  while (MR_TRUE)
#line 2348 "inst_util.m"
    {
#line 2348 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2348 "inst_util.m"
      {
#line 2348 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2348 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2348 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2348 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2348 "inst_util.m"
        else
#line 2350 "inst_util.m"
          {
#line 2350 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2350 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2350 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2350 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_14;
#line 2351 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2352 "inst_util.m"
            {
#line 2352 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_14 = check_hlds__inst_util__inst_list_contains_any_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2357 "inst_util.m"
#line 2357 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsAny_14) {
#line 2357 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2357 "inst_util.m"
              case (MR_Integer) 0:
#line 2359 "inst_util.m"
                {
#line 2359 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2359 "inst_util.m"
                  {
#line 2359 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2359 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2359 "inst_util.m"
                  }
#line 2359 "inst_util.m"
                  continue;
#line 2359 "inst_util.m"
                }
#line 2357 "inst_util.m"
                break;
#line 2357 "inst_util.m"
              case (MR_Integer) 1:
#line 2356 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2357 "inst_util.m"
                break;
#line 2357 "inst_util.m"
            }
#line 2350 "inst_util.m"
          }
#line 2348 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2348 "inst_util.m"
      }
#line 2348 "inst_util.m"
      break;
#line 2348 "inst_util.m"
    }
#line 2345 "inst_util.m"
}

#line 2331 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2331 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2331 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2331 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2331 "inst_util.m"
{
#line 2334 "inst_util.m"
  while (MR_TRUE)
#line 2334 "inst_util.m"
    {
#line 2334 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2334 "inst_util.m"
      {
#line 2334 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2334 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2334 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2334 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2334 "inst_util.m"
        else
#line 2335 "inst_util.m"
          {
#line 2335 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2335 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2335 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_12;

#line 2336 "inst_util.m"
            {
#line 2336 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_12 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2340 "inst_util.m"
#line 2340 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsAny_12) {
#line 2340 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2340 "inst_util.m"
              case (MR_Integer) 0:
#line 2342 "inst_util.m"
                {
#line 2342 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2342 "inst_util.m"
                  {
#line 2342 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2342 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2342 "inst_util.m"
                  }
#line 2342 "inst_util.m"
                  continue;
#line 2342 "inst_util.m"
                }
#line 2340 "inst_util.m"
                break;
#line 2340 "inst_util.m"
              case (MR_Integer) 1:
#line 2339 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2340 "inst_util.m"
                break;
#line 2340 "inst_util.m"
            }
#line 2335 "inst_util.m"
          }
#line 2334 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2334 "inst_util.m"
      }
#line 2334 "inst_util.m"
      break;
#line 2334 "inst_util.m"
    }
#line 2331 "inst_util.m"
}

#line 2276 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2276 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2276 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2276 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2276 "inst_util.m"
{
#line 2280 "inst_util.m"
  while (MR_TRUE)
#line 2280 "inst_util.m"
    {
#line 2280 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2280 "inst_util.m"
      {
#line 2280 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2280 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsAny_8;

#line 2280 "inst_util.m"
#line 2280 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) {
#line 2280 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2280 "inst_util.m"
          case (MR_Integer) 0:
#line 2328 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2280 "inst_util.m"
            break;
#line 2280 "inst_util.m"
          case (MR_Integer) 1:
#line 2328 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2280 "inst_util.m"
            break;
#line 2280 "inst_util.m"
          case (MR_Integer) 2:
#line 2281 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2280 "inst_util.m"
            break;
#line 2280 "inst_util.m"
          case (MR_Integer) 3:
#line 2280 "inst_util.m"
#line 2280 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) {
#line 2280 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2280 "inst_util.m"
              case (MR_Integer) 0:
#line 2283 "inst_util.m"
                {
#line 2283 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2283 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2283 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2287 "inst_util.m"
#line 2287 "inst_util.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_util__InstResults_12)) {
#line 2287 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2287 "inst_util.m"
                    case (MR_Integer) 0:
#line 2287 "inst_util.m"
#line 2287 "inst_util.m"
                      switch (MR_unmkbody(check_hlds__inst_util__InstResults_12)) {
#line 2287 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2287 "inst_util.m"
                        case (MR_Integer) 0:
#line 2302 "inst_util.m"
                          {
#line 2302 "inst_util.m"
                            return check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                          }
#line 2287 "inst_util.m"
                          break;
#line 2287 "inst_util.m"
                        case (MR_Integer) 1:
#line 2286 "inst_util.m"
                          check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2287 "inst_util.m"
                          break;
#line 2287 "inst_util.m"
                      }
#line 2287 "inst_util.m"
                      break;
#line 2287 "inst_util.m"
                    case (MR_Integer) 1:
#line 2288 "inst_util.m"
                      {
#line 2288 "inst_util.m"
                        MR_Word check_hlds__inst_util__AnyResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 1)));
#line 2288 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 0)));
#line 2288 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 2)));
#line 2288 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 3)));
#line 2288 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 4)));
#line 2288 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 5)));

#line 2292 "inst_util.m"
#line 2292 "inst_util.m"
                        switch (check_hlds__inst_util__AnyResults_15) {
#line 2292 "inst_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 2292 "inst_util.m"
                          case (MR_Integer) 2:
#line 2297 "inst_util.m"
                            {
#line 2297 "inst_util.m"
                              return check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                            }
#line 2292 "inst_util.m"
                            break;
#line 2292 "inst_util.m"
                          case (MR_Integer) 1:
#line 2294 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2292 "inst_util.m"
                            break;
#line 2292 "inst_util.m"
                          case (MR_Integer) 0:
#line 2291 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2292 "inst_util.m"
                            break;
#line 2292 "inst_util.m"
                        }
#line 2288 "inst_util.m"
                      }
#line 2287 "inst_util.m"
                      break;
#line 2287 "inst_util.m"
                  }
#line 2283 "inst_util.m"
                }
#line 2280 "inst_util.m"
                break;
#line 2280 "inst_util.m"
              case (MR_Integer) 1:
#line 2280 "inst_util.m"
              case (MR_Integer) 5:
#line 2328 "inst_util.m"
                check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2280 "inst_util.m"
                break;
#line 2280 "inst_util.m"
              case (MR_Integer) 2:
#line 2306 "inst_util.m"
                {
#line 2307 "inst_util.m"
                  {
#line 2307 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 2306 "inst_util.m"
                }
#line 2280 "inst_util.m"
                break;
#line 2280 "inst_util.m"
              case (MR_Integer) 3:
#line 2319 "inst_util.m"
                {
#line 2319 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2319 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2320 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2320 "inst_util.m"
                  {
#line 2320 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2320 "inst_util.m"
                    check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2320 "inst_util.m"
                  }
#line 2320 "inst_util.m"
                  continue;
#line 2319 "inst_util.m"
                }
#line 2280 "inst_util.m"
                break;
#line 2280 "inst_util.m"
              case (MR_Integer) 4:
#line 2309 "inst_util.m"
                {
#line 2309 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2310 "inst_util.m"
                  {
#line 2310 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
#line 2312 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2311 "inst_util.m"
                    check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2312 "inst_util.m"
                  else
#line 2313 "inst_util.m"
                    {
#line 2313 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_22;
#line 2313 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2313 "inst_util.m"
                      {
#line 2313 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                      }
#line 2314 "inst_util.m"
                      {
#line 2314 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                      }
#line 2315 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2315 "inst_util.m"
                      {
#line 2315 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2315 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2315 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2315 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2315 "inst_util.m"
                      }
#line 2315 "inst_util.m"
                      continue;
#line 2313 "inst_util.m"
                    }
#line 2309 "inst_util.m"
                }
#line 2280 "inst_util.m"
                break;
#line 2280 "inst_util.m"
            }
#line 2280 "inst_util.m"
            break;
#line 2280 "inst_util.m"
        }
#line 2280 "inst_util.m"
        return check_hlds__inst_util__ContainsAny_8;
#line 2280 "inst_util.m"
      }
#line 2280 "inst_util.m"
      break;
#line 2280 "inst_util.m"
    }
#line 2276 "inst_util.m"
}

#line 2232 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2232 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2232 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2232 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2232 "inst_util.m"
{
#line 2236 "inst_util.m"
  while (MR_TRUE)
#line 2236 "inst_util.m"
    {
#line 2236 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2236 "inst_util.m"
      {
#line 2236 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2236 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2236 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2236 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2236 "inst_util.m"
        else
#line 2238 "inst_util.m"
          {
#line 2238 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2238 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2238 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2238 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_14;
#line 2239 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2240 "inst_util.m"
            {
#line 2240 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_14 = check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2245 "inst_util.m"
#line 2245 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsNonstd_14) {
#line 2245 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2245 "inst_util.m"
              case (MR_Integer) 0:
#line 2247 "inst_util.m"
                {
#line 2247 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2247 "inst_util.m"
                  {
#line 2247 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2247 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2247 "inst_util.m"
                  }
#line 2247 "inst_util.m"
                  continue;
#line 2247 "inst_util.m"
                }
#line 2245 "inst_util.m"
                break;
#line 2245 "inst_util.m"
              case (MR_Integer) 1:
#line 2244 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2245 "inst_util.m"
                break;
#line 2245 "inst_util.m"
            }
#line 2238 "inst_util.m"
          }
#line 2236 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2236 "inst_util.m"
      }
#line 2236 "inst_util.m"
      break;
#line 2236 "inst_util.m"
    }
#line 2232 "inst_util.m"
}

#line 2215 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2215 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2215 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2215 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2215 "inst_util.m"
{
#line 2218 "inst_util.m"
  while (MR_TRUE)
#line 2218 "inst_util.m"
    {
#line 2218 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2218 "inst_util.m"
      {
#line 2218 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2218 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2218 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2218 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2218 "inst_util.m"
        else
#line 2220 "inst_util.m"
          {
#line 2220 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2220 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2220 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_12;

#line 2221 "inst_util.m"
            {
#line 2221 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_12 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2226 "inst_util.m"
#line 2226 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsNonstd_12) {
#line 2226 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2226 "inst_util.m"
              case (MR_Integer) 0:
#line 2228 "inst_util.m"
                {
#line 2228 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2228 "inst_util.m"
                  {
#line 2228 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2228 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2228 "inst_util.m"
                  }
#line 2228 "inst_util.m"
                  continue;
#line 2228 "inst_util.m"
                }
#line 2226 "inst_util.m"
                break;
#line 2226 "inst_util.m"
              case (MR_Integer) 1:
#line 2225 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2226 "inst_util.m"
                break;
#line 2226 "inst_util.m"
            }
#line 2220 "inst_util.m"
          }
#line 2218 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2218 "inst_util.m"
      }
#line 2218 "inst_util.m"
      break;
#line 2218 "inst_util.m"
    }
#line 2215 "inst_util.m"
}

#line 2159 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2159 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2159 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2159 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2159 "inst_util.m"
{
#line 2165 "inst_util.m"
  while (MR_TRUE)
#line 2165 "inst_util.m"
    {
#line 2165 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2165 "inst_util.m"
      {
#line 2165 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2165 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsNonstd_8;

#line 2165 "inst_util.m"
#line 2165 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) {
#line 2165 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2165 "inst_util.m"
          case (MR_Integer) 0:
#line 2206 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2165 "inst_util.m"
            break;
#line 2165 "inst_util.m"
          case (MR_Integer) 1:
#line 2206 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2165 "inst_util.m"
            break;
#line 2165 "inst_util.m"
          case (MR_Integer) 2:
#line 2212 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2165 "inst_util.m"
            break;
#line 2165 "inst_util.m"
          case (MR_Integer) 3:
#line 2165 "inst_util.m"
#line 2165 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) {
#line 2165 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2165 "inst_util.m"
              case (MR_Integer) 0:
#line 2172 "inst_util.m"
                {
#line 2172 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2172 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2172 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2176 "inst_util.m"
#line 2176 "inst_util.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_util__InstResults_12)) {
#line 2176 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2176 "inst_util.m"
                    case (MR_Integer) 0:
#line 2176 "inst_util.m"
#line 2176 "inst_util.m"
                      switch (MR_unmkbody(check_hlds__inst_util__InstResults_12)) {
#line 2176 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2176 "inst_util.m"
                        case (MR_Integer) 0:
#line 2180 "inst_util.m"
                          {
#line 2180 "inst_util.m"
                            return check_hlds__inst_util__ContainsNonstd_8 = check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                          }
#line 2176 "inst_util.m"
                          break;
#line 2176 "inst_util.m"
                        case (MR_Integer) 1:
#line 2175 "inst_util.m"
                          check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2176 "inst_util.m"
                          break;
#line 2176 "inst_util.m"
                      }
#line 2176 "inst_util.m"
                      break;
#line 2176 "inst_util.m"
                    case (MR_Integer) 1:
#line 2180 "inst_util.m"
                      {
#line 2180 "inst_util.m"
                        return check_hlds__inst_util__ContainsNonstd_8 = check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                      }
#line 2176 "inst_util.m"
                      break;
#line 2176 "inst_util.m"
                  }
#line 2172 "inst_util.m"
                }
#line 2165 "inst_util.m"
                break;
#line 2165 "inst_util.m"
              case (MR_Integer) 1:
#line 2165 "inst_util.m"
                {
#line 2165 "inst_util.m"
                  MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2165 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2166 "inst_util.m"
                  {
#line 2166 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__HOInstInfo_10);
                  }
#line 2168 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2167 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 1;
#line 2168 "inst_util.m"
                  else
#line 2169 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2165 "inst_util.m"
                }
#line 2165 "inst_util.m"
                break;
#line 2165 "inst_util.m"
              case (MR_Integer) 2:
#line 2184 "inst_util.m"
                {
#line 2185 "inst_util.m"
                  {
#line 2185 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_nonstandard_func_mode_2\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 2184 "inst_util.m"
                }
#line 2165 "inst_util.m"
                break;
#line 2165 "inst_util.m"
              case (MR_Integer) 3:
#line 2197 "inst_util.m"
                {
#line 2197 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2197 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2198 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2198 "inst_util.m"
                  {
#line 2198 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2198 "inst_util.m"
                    check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2198 "inst_util.m"
                  }
#line 2198 "inst_util.m"
                  continue;
#line 2197 "inst_util.m"
                }
#line 2165 "inst_util.m"
                break;
#line 2165 "inst_util.m"
              case (MR_Integer) 4:
#line 2187 "inst_util.m"
                {
#line 2187 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2188 "inst_util.m"
                  {
#line 2188 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
#line 2190 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2189 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2190 "inst_util.m"
                  else
#line 2191 "inst_util.m"
                    {
#line 2191 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_22;
#line 2191 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2191 "inst_util.m"
                      {
#line 2191 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                      }
#line 2192 "inst_util.m"
                      {
#line 2192 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                      }
#line 2193 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2193 "inst_util.m"
                      {
#line 2193 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2193 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2193 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2193 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2193 "inst_util.m"
                      }
#line 2193 "inst_util.m"
                      continue;
#line 2191 "inst_util.m"
                    }
#line 2187 "inst_util.m"
                }
#line 2165 "inst_util.m"
                break;
#line 2165 "inst_util.m"
              case (MR_Integer) 5:
#line 2206 "inst_util.m"
                check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2165 "inst_util.m"
                break;
#line 2165 "inst_util.m"
            }
#line 2165 "inst_util.m"
            break;
#line 2165 "inst_util.m"
        }
#line 2165 "inst_util.m"
        return check_hlds__inst_util__ContainsNonstd_8;
#line 2165 "inst_util.m"
      }
#line 2165 "inst_util.m"
      break;
#line 2165 "inst_util.m"
    }
#line 2159 "inst_util.m"
}

#line 2115 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2115 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2115 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2115 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2115 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2115 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2115 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27)
#line 2115 "inst_util.m"
{
#line 2122 "inst_util.m"
  {
#line 2122 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2122 "inst_util.m"
    if ((check_hlds__inst_util__BoundInstsA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2122 "inst_util.m"
      {
#line 2123 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsB_8;
#line 2122 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2122 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2122 "inst_util.m"
      }
#line 2122 "inst_util.m"
    else
#line 2122 "inst_util.m"
      {
#line 2122 "inst_util.m"
        MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 1)));
#line 2122 "inst_util.m"
        MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 0)));

#line 2122 "inst_util.m"
        if ((check_hlds__inst_util__BoundInstsB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2125 "inst_util.m"
          {
#line 2127 "inst_util.m"
            *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsA_7;
#line 2125 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2125 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2125 "inst_util.m"
          }
#line 2122 "inst_util.m"
        else
#line 2129 "inst_util.m"
          {
#line 2129 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 0)));
#line 2129 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsTailB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 1)));
#line 2129 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 0)));
#line 2129 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 1)));
#line 2129 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 0)));
#line 2129 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 1)));

#line 2133 "inst_util.m"
            {
#line 2133 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
            }
#line 2141 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2135 "inst_util.m"
              {
#line 2135 "inst_util.m"
                MR_Word check_hlds__inst_util__MaybeTypes_22;
#line 2135 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_23;
#line 2135 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInst_24;
#line 2135 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_25;
#line 2135 "inst_util.m"
                MR_Integer check_hlds__inst_util__V_28_28;
#line 2135 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29;

#line 2135 "inst_util.m"
                {
#line 2135 "inst_util.m"
                  check_hlds__inst_util__V_28_28 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_util__ArgsA_19);
                }
#line 2134 "inst_util.m"
                {
#line 2134 "inst_util.m"
                  check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__V_28_28, &check_hlds__inst_util__MaybeTypes_22);
                }
#line 2136 "inst_util.m"
                {
#line 2136 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_19, check_hlds__inst_util__ArgsB_21, check_hlds__inst_util__MaybeTypes_22, &check_hlds__inst_util__Args_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 2135 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2135 "inst_util.m"
                  {
#line 2137 "inst_util.m"
                    {
#line 2137 "inst_util.m"
                      check_hlds__inst_util__BoundInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2137 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_18));
#line 2137 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 1) = ((MR_Box) (check_hlds__inst_util__Args_23));
#line 2137 "inst_util.m"
                    }
#line 2138 "inst_util.m"
                    {
#line 2138 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2135 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2135 "inst_util.m"
                      {
#line 2140 "inst_util.m"
                        {
#line 2140 "inst_util.m"
                          MR_Word base;
#line 2140 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2140 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_24));
#line 2140 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_25));
#line 2140 "inst_util.m"
                        }
#line 2140 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2135 "inst_util.m"
                      }
#line 2135 "inst_util.m"
                  }
#line 2135 "inst_util.m"
              }
#line 2141 "inst_util.m"
            else
#line 2145 "inst_util.m"
              {
#line 2141 "inst_util.m"
                MR_Word check_hlds__inst_util__V_39_39;

#line 2141 "inst_util.m"
                {
#line 2141 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_39_39, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
                }
#line 2141 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_39_39);
#line 2145 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2143 "inst_util.m"
                  {
#line 2143 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_34;

#line 2142 "inst_util.m"
                    {
#line 2142 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2143 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2143 "inst_util.m"
                      {
#line 2144 "inst_util.m"
                        {
#line 2144 "inst_util.m"
                          MR_Word base;
#line 2144 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2144 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2144 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_41_41));
#line 2144 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_34));
#line 2144 "inst_util.m"
                        }
#line 2144 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2143 "inst_util.m"
                      }
#line 2143 "inst_util.m"
                  }
#line 2145 "inst_util.m"
                else
#line 2147 "inst_util.m"
                  {
#line 2147 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_35;

#line 2146 "inst_util.m"
                    {
#line 2146 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__BoundInstsA_7, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2147 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2147 "inst_util.m"
                      {
#line 2148 "inst_util.m"
                        {
#line 2148 "inst_util.m"
                          MR_Word base;
#line 2148 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2148 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInstB_16));
#line 2148 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_35));
#line 2148 "inst_util.m"
                        }
#line 2148 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2147 "inst_util.m"
                      }
#line 2147 "inst_util.m"
                  }
#line 2145 "inst_util.m"
              }
#line 2129 "inst_util.m"
          }
#line 2122 "inst_util.m"
      }
#line 2122 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2122 "inst_util.m"
  }
#line 2115 "inst_util.m"
}

#line 2098 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2098 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2098 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2098 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2098 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2098 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2098 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6)
#line 2098 "inst_util.m"
{
#line 2102 "inst_util.m"
  {
#line 2102 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2102 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2102 "inst_util.m"
      {
#line 2102 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2102 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2102 "inst_util.m"
          {
#line 2102 "inst_util.m"
            *check_hlds__inst_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2102 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 2102 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2102 "inst_util.m"
          }
#line 2102 "inst_util.m"
      }
#line 2102 "inst_util.m"
    else
#line 2104 "inst_util.m"
      {
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgB_13;
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsB_14;
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeType_15;
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeTypes_16;
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__Arg_17;
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__Args_18;
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22;

#line 2103 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2103 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2103 "inst_util.m"
          {
#line 2103 "inst_util.m"
            check_hlds__inst_util__ArgB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2103 "inst_util.m"
            check_hlds__inst_util__ArgsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2103 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 2103 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2103 "inst_util.m"
              {
#line 2103 "inst_util.m"
                check_hlds__inst_util__MaybeType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 2103 "inst_util.m"
                check_hlds__inst_util__MaybeTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 2105 "inst_util.m"
                {
#line 2105 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__ArgA_11, check_hlds__inst_util__ArgB_13, check_hlds__inst_util__MaybeType_15, &check_hlds__inst_util__Arg_17, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22);
                }
#line 2104 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2104 "inst_util.m"
                  {
#line 2106 "inst_util.m"
                    {
#line 2106 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_12, check_hlds__inst_util__ArgsB_14, check_hlds__inst_util__MaybeTypes_16, &check_hlds__inst_util__Args_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);
                    }
#line 2104 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2104 "inst_util.m"
                      {
#line 2104 "inst_util.m"
                        {
#line 2104 "inst_util.m"
                          MR_Word base;
#line 2104 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2104 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__4_4 = base;
#line 2104 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Arg_17));
#line 2104 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Args_18));
#line 2104 "inst_util.m"
                        }
#line 2104 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2104 "inst_util.m"
                      }
#line 2104 "inst_util.m"
                  }
#line 2103 "inst_util.m"
              }
#line 2103 "inst_util.m"
          }
#line 2104 "inst_util.m"
      }
#line 2102 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2102 "inst_util.m"
  }
#line 2098 "inst_util.m"
}

#line 2054 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2054 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2054 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2054 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26)
#line 2054 "inst_util.m"
{
#line 2066 "inst_util.m"
  {
#line 2066 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2061 "inst_util.m"
    {
#line 2061 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
    }
#line 2066 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2064 "inst_util.m"
      {
#line 2064 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_16;
#line 2064 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_51;
#line 2064 "inst_util.m"
        MR_Word check_hlds__inst_util__Expansions0_52;
#line 1988 "inst_util.m"
        MR_Word check_hlds__inst_util___Expansions_53;

#line 1945 "inst_util.m"
        {
#line 1945 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
        }
#line 1947 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1946 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqA_9;
#line 1947 "inst_util.m"
        else
#line 1948 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqB_12;
#line 1987 "inst_util.m"
        {
#line 1987 "inst_util.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_52);
        }
#line 1988 "inst_util.m"
        {
#line 1988 "inst_util.m"
          check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_51, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_52, &check_hlds__inst_util___Expansions_53, &check_hlds__inst_util__Uniq_16);
        }
#line 2065 "inst_util.m"
        {
#line 2065 "inst_util.m"
          MR_Word base;
#line 2065 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "inst_util.m"
          *check_hlds__inst_util__Result_14 = base;
#line 2065 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2065 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_16));
#line 2065 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2065 "inst_util.m"
        }
#line 2064 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2064 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2064 "inst_util.m"
      }
#line 2066 "inst_util.m"
    else
#line 2068 "inst_util.m"
      {
#line 2067 "inst_util.m"
        {
#line 2067 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
        }
#line 2068 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2089 "inst_util.m"
          {
#line 2089 "inst_util.m"
            if ((check_hlds__inst_util__MaybeType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2090 "inst_util.m"
              {
#line 2090 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_39;
#line 2090 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq0_63;
#line 2090 "inst_util.m"
                MR_Word check_hlds__inst_util__Expansions0_64;
#line 1988 "inst_util.m"
                MR_Word check_hlds__inst_util___Expansions_65;

#line 1945 "inst_util.m"
                {
#line 1945 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
                }
#line 1947 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1946 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqA_9;
#line 1947 "inst_util.m"
                else
#line 1948 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqB_12;
#line 1987 "inst_util.m"
                {
#line 1987 "inst_util.m"
                  mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_64);
                }
#line 1988 "inst_util.m"
                {
#line 1988 "inst_util.m"
                  check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_64, &check_hlds__inst_util___Expansions_65, &check_hlds__inst_util__Uniq_39);
                }
#line 2092 "inst_util.m"
                {
#line 2092 "inst_util.m"
                  MR_Word base;
#line 2092 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2092 "inst_util.m"
                  *check_hlds__inst_util__Result_14 = base;
#line 2092 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_39));
#line 2092 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2092 "inst_util.m"
                }
#line 2090 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2090 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2090 "inst_util.m"
              }
#line 2089 "inst_util.m"
            else
#line 2072 "inst_util.m"
              {
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_42_42;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_43_43;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_44_44;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_45_45;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeType_13, (MR_Integer) 0)));
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__Constructors_18;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtor_19;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB0_20;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB_21;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__InstResultsB_22;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__InstA_23;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__InstB_24;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_31_31;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_34_34;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_35_35;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_36_36;
#line 2072 "inst_util.m"
                MR_Word check_hlds__inst_util__V_37_37;

#line 2073 "inst_util.m"
                {
#line 2073 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Type_17, &check_hlds__inst_util__Constructors_18);
                }
#line 2072 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2072 "inst_util.m"
                  {
#line 2074 "inst_util.m"
                    {
#line 2074 "inst_util.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_util__Type_17, &check_hlds__inst_util__TypeCtor_19);
                    }
#line 2075 "inst_util.m"
                    {
#line 2075 "inst_util.m"
                      check_hlds__mode_util__constructors_to_bound_insts_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__UniqB_12, check_hlds__inst_util__TypeCtor_19, check_hlds__inst_util__Constructors_18, &check_hlds__inst_util__BoundInstsB0_20);
                    }
#line 2442 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 2077 "inst_util.m"
                    {
#line 2077 "inst_util.m"
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__inst_util__TypeCtorInfo_42_42, check_hlds__inst_util__BoundInstsB0_20, &check_hlds__inst_util__BoundInstsB_21);
                    }
#line 2079 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = (MR_Integer) 1;
#line 2080 "inst_util.m"
                    check_hlds__inst_util__V_30_30 = (MR_Integer) 0;
#line 2453 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 2081 "inst_util.m"
                    {
#line 2081 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_43_43);
                    }
#line 2460 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_44_44 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 2081 "inst_util.m"
                    {
#line 2081 "inst_util.m"
                      check_hlds__inst_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_31_31, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 2081 "inst_util.m"
                    }
#line 2082 "inst_util.m"
                    {
#line 2082 "inst_util.m"
                      check_hlds__inst_util__V_34_34 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeInfo_44_44);
                    }
#line 2475 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 2082 "inst_util.m"
                    {
#line 2082 "inst_util.m"
                      check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_33_33, 0) = ((MR_Box) (check_hlds__inst_util__V_34_34));
#line 2082 "inst_util.m"
                    }
#line 2083 "inst_util.m"
                    {
#line 2083 "inst_util.m"
                      check_hlds__inst_util__V_36_36 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_45_45);
                    }
#line 2083 "inst_util.m"
                    {
#line 2083 "inst_util.m"
                      check_hlds__inst_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_35_35, 0) = ((MR_Box) (check_hlds__inst_util__V_36_36));
#line 2083 "inst_util.m"
                    }
#line 2084 "inst_util.m"
                    check_hlds__inst_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_util__TypeCtor_19);
#line 2078 "inst_util.m"
                    {
#line 2078 "inst_util.m"
                      check_hlds__inst_util__InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 0) = ((MR_Box) (check_hlds__inst_util__V_29_29));
#line 2078 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 1) = ((MR_Box) (check_hlds__inst_util__V_30_30));
#line 2078 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 2) = ((MR_Box) (check_hlds__inst_util__V_31_31));
#line 2078 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 3) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 2078 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 4) = ((MR_Box) (check_hlds__inst_util__V_35_35));
#line 2078 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 5) = ((MR_Box) (check_hlds__inst_util__V_37_37));
#line 2078 "inst_util.m"
                    }
#line 2086 "inst_util.m"
                    {
#line 2086 "inst_util.m"
                      check_hlds__inst_util__InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2086 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_9));
#line 2086 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_10));
#line 2086 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsA_11));
#line 2086 "inst_util.m"
                    }
#line 2087 "inst_util.m"
                    {
#line 2087 "inst_util.m"
                      check_hlds__inst_util__InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2087 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 1) = ((MR_Box) (check_hlds__inst_util__UniqB_12));
#line 2087 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_22));
#line 2087 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsB_21));
#line 2087 "inst_util.m"
                    }
#line 2088 "inst_util.m"
                    {
#line 2088 "inst_util.m"
                      return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_23, check_hlds__inst_util__InstB_24, check_hlds__inst_util__MaybeType_13, check_hlds__inst_util__Result_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);
                    }
#line 2072 "inst_util.m"
                  }
#line 2072 "inst_util.m"
              }
#line 2089 "inst_util.m"
          }
#line 2068 "inst_util.m"
      }
#line 2066 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2066 "inst_util.m"
  }
#line 2054 "inst_util.m"
}

#line 2012 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2012 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2012 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2012 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2012 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2012 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2012 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11)
#line 2012 "inst_util.m"
{
#line 2020 "inst_util.m"
  while (MR_TRUE)
#line 2020 "inst_util.m"
    {
#line 2020 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2020 "inst_util.m"
      {
#line 2020 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2020 "inst_util.m"
#line 2020 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
#line 2020 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2020 "inst_util.m"
          case (MR_Integer) 0:
#line 2020 "inst_util.m"
            {
#line 2021 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2020 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2020 "inst_util.m"
            }
#line 2020 "inst_util.m"
            break;
#line 2020 "inst_util.m"
          case (MR_Integer) 1:
#line 2020 "inst_util.m"
            {
#line 2021 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2020 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2020 "inst_util.m"
            }
#line 2020 "inst_util.m"
            break;
#line 2020 "inst_util.m"
          case (MR_Integer) 2:
#line 2025 "inst_util.m"
            {
#line 2025 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));
#line 2024 "inst_util.m"
              MR_Word check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1945 "inst_util.m"
              {
#line 1945 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_13, check_hlds__inst_util__UniqB_8);
              }
#line 1947 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1946 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1947 "inst_util.m"
              else
#line 1948 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_13;
#line 2025 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2025 "inst_util.m"
            }
#line 2020 "inst_util.m"
            break;
#line 2020 "inst_util.m"
          case (MR_Integer) 3:
#line 2020 "inst_util.m"
#line 2020 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
#line 2020 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2020 "inst_util.m"
              case (MR_Integer) 0:
#line 2031 "inst_util.m"
                {
#line 2031 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInstsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 2031 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq0_20;
#line 2031 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2031 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstResultsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1945 "inst_util.m"
                  {
#line 1945 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_36, check_hlds__inst_util__UniqB_8);
                  }
#line 1947 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1946 "inst_util.m"
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqB_8;
#line 1947 "inst_util.m"
                  else
#line 1948 "inst_util.m"
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqA_36;
#line 2033 "inst_util.m"
                  {
#line 2033 "inst_util.m"
                    check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_19, check_hlds__inst_util__Uniq0_20, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_util__STATE_VARIABLE_Expansions_27, check_hlds__inst_util__Uniq_11);
#line 2033 "inst_util.m"
                    return;
                  }
#line 2031 "inst_util.m"
                }
#line 2020 "inst_util.m"
                break;
#line 2020 "inst_util.m"
              case (MR_Integer) 1:
#line 2025 "inst_util.m"
                {
#line 2025 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2023 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1945 "inst_util.m"
                  {
#line 1945 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_39, check_hlds__inst_util__UniqB_8);
                  }
#line 1947 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1946 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1947 "inst_util.m"
                  else
#line 1948 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_39;
#line 2025 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2025 "inst_util.m"
                }
#line 2020 "inst_util.m"
                break;
#line 2020 "inst_util.m"
              case (MR_Integer) 2:
#line 2045 "inst_util.m"
                {
#line 2046 "inst_util.m"
                  {
#line 2046 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", (MR_String) "inst_var");
#line 2046 "inst_util.m"
                    return;
                  }
#line 2045 "inst_util.m"
                }
#line 2020 "inst_util.m"
                break;
#line 2020 "inst_util.m"
              case (MR_Integer) 3:
#line 2048 "inst_util.m"
                {
#line 2048 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInstA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 2048 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2049 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2049 "inst_util.m"
                  {
#line 2049 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__SubInstA_25;

#line 2049 "inst_util.m"
                    check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2049 "inst_util.m"
                  }
#line 2049 "inst_util.m"
                  continue;
#line 2048 "inst_util.m"
                }
#line 2020 "inst_util.m"
                break;
#line 2020 "inst_util.m"
              case (MR_Integer) 4:
#line 2036 "inst_util.m"
                {
#line 2036 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2037 "inst_util.m"
                  {
#line 2037 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26);
                  }
#line 2039 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2038 "inst_util.m"
                    {
#line 2038 "inst_util.m"
                      *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2038 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2038 "inst_util.m"
                    }
#line 2039 "inst_util.m"
                  else
#line 2040 "inst_util.m"
                    {
#line 2040 "inst_util.m"
                      MR_Word check_hlds__inst_util__Inst_22;
#line 2040 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2040 "inst_util.m"
                      {
#line 2040 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32);
                      }
#line 2041 "inst_util.m"
                      {
#line 2041 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__Inst_22);
                      }
#line 2042 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2042 "inst_util.m"
                      {
#line 2042 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__Inst_22;
#line 2042 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2042 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26;
#line 2042 "inst_util.m"
                        check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2042 "inst_util.m"
                      }
#line 2042 "inst_util.m"
                      continue;
#line 2040 "inst_util.m"
                    }
#line 2036 "inst_util.m"
                }
#line 2020 "inst_util.m"
                break;
#line 2020 "inst_util.m"
              case (MR_Integer) 5:
#line 2028 "inst_util.m"
                {
#line 1945 "inst_util.m"
                  {
#line 1945 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_8);
                  }
#line 1947 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1946 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1947 "inst_util.m"
                  else
#line 1948 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 2028 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2028 "inst_util.m"
                }
#line 2020 "inst_util.m"
                break;
#line 2020 "inst_util.m"
            }
#line 2020 "inst_util.m"
            break;
#line 2020 "inst_util.m"
        }
#line 2020 "inst_util.m"
      }
#line 2020 "inst_util.m"
      break;
#line 2020 "inst_util.m"
    }
#line 2012 "inst_util.m"
}

#line 2003 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2003 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2003 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2003 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2003 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2003 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2003 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 2003 "inst_util.m"
{
#line 2007 "inst_util.m"
  while (MR_TRUE)
#line 2007 "inst_util.m"
    {
#line 2007 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2007 "inst_util.m"
      {
#line 2007 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2007 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2007 "inst_util.m"
          {
#line 2007 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 2007 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 2007 "inst_util.m"
          }
#line 2007 "inst_util.m"
        else
#line 2008 "inst_util.m"
          {
#line 2008 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2008 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2008 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_18;
#line 2008 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2009 "inst_util.m"
            {
#line 2009 "inst_util.m"
              check_hlds__inst_util__merge_inst_uniq_6_p_0(check_hlds__inst_util__Inst_12, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21, &check_hlds__inst_util__Uniq1_18);
            }
#line 2010 "inst_util.m"
            /* direct tailcall eliminated */
#line 2010 "inst_util.m"
            {
#line 2010 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__Insts_13;
#line 2010 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_18;
#line 2010 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2010 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2010 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2010 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2010 "inst_util.m"
            }
#line 2010 "inst_util.m"
            continue;
#line 2008 "inst_util.m"
          }
#line 2007 "inst_util.m"
      }
#line 2007 "inst_util.m"
      break;
#line 2007 "inst_util.m"
    }
#line 2003 "inst_util.m"
}

#line 1991 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1991 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1991 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 1991 "inst_util.m"
{
#line 1995 "inst_util.m"
  while (MR_TRUE)
#line 1995 "inst_util.m"
    {
#line 1995 "inst_util.m"
      /* tailcall optimized into a loop */
#line 1995 "inst_util.m"
      {
#line 1995 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 1995 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1995 "inst_util.m"
          {
#line 1995 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 1995 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 1995 "inst_util.m"
          }
#line 1995 "inst_util.m"
        else
#line 1997 "inst_util.m"
          {
#line 1997 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1997 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1997 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 1)));
#line 1997 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_20;
#line 1997 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;
#line 1998 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 0)));

#line 1999 "inst_util.m"
            {
#line 1999 "inst_util.m"
              check_hlds__inst_util__merge_inst_list_uniq_6_p_0(check_hlds__inst_util__ArgInsts_19, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23, &check_hlds__inst_util__Uniq1_20);
            }
#line 2000 "inst_util.m"
            /* direct tailcall eliminated */
#line 2000 "inst_util.m"
            {
#line 2000 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInsts_13;
#line 2000 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_20;
#line 2000 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;

#line 2000 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2000 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2000 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2000 "inst_util.m"
            }
#line 2000 "inst_util.m"
            continue;
#line 1997 "inst_util.m"
          }
#line 1995 "inst_util.m"
      }
#line 1995 "inst_util.m"
      break;
#line 1995 "inst_util.m"
    }
#line 1991 "inst_util.m"
}

#line 1982 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1982 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10)
#line 1982 "inst_util.m"
{
#line 1985 "inst_util.m"
  {
#line 1985 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1985 "inst_util.m"
    MR_Word check_hlds__inst_util__Uniq0_11;
#line 1985 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_12;
#line 1988 "inst_util.m"
    MR_Word check_hlds__inst_util___Expansions_13;

#line 1945 "inst_util.m"
    {
#line 1945 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_6, check_hlds__inst_util__UniqB_7);
    }
#line 1947 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1946 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqB_7;
#line 1947 "inst_util.m"
    else
#line 1948 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqA_6;
#line 1987 "inst_util.m"
    {
#line 1987 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_12);
    }
#line 1988 "inst_util.m"
    {
#line 1988 "inst_util.m"
      check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__Uniq0_11, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__Expansions0_12, &check_hlds__inst_util___Expansions_13, check_hlds__inst_util__Uniq_10);
    }
#line 1985 "inst_util.m"
  }
#line 1982 "inst_util.m"
}

#line 1951 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1951 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1951 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1951 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1951 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1951 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13)
#line 1951 "inst_util.m"
{
#line 1954 "inst_util.m"
  {
#line 1954 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1973 "inst_util.m"
    MR_Word check_hlds__inst_util__PredA_10;
#line 1973 "inst_util.m"
    MR_Word check_hlds__inst_util__PredB_11;

#line 1956 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1956 "inst_util.m"
      {
#line 1956 "inst_util.m"
        check_hlds__inst_util__PredA_10 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoA_6), (MR_Integer) 1);
#line 1957 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoB_7)) == (MR_mktag((MR_Integer) 1)));
#line 1957 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1957 "inst_util.m"
          check_hlds__inst_util__PredB_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoB_7), (MR_Integer) 1);
#line 1956 "inst_util.m"
      }
#line 1973 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1964 "inst_util.m"
      {
#line 1962 "inst_util.m"
        {
#line 1962 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__PredB_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
        }
#line 1964 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1963 "inst_util.m"
          {
#line 1963 "inst_util.m"
            *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoB_7;
#line 1963 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1963 "inst_util.m"
          }
#line 1964 "inst_util.m"
        else
#line 1966 "inst_util.m"
          {
#line 1964 "inst_util.m"
            {
#line 1964 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__PredA_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
            }
#line 1966 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1965 "inst_util.m"
              {
#line 1965 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoA_6;
#line 1965 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1965 "inst_util.m"
              }
#line 1966 "inst_util.m"
            else
#line 1969 "inst_util.m"
              {
#line 2253 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_22;
#line 2253 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 1)));
#line 2253 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_19;
#line 2253 "inst_util.m"
                MR_Word check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 0)));
#line 2254 "inst_util.m"
                MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 2)));
#line 2254 "inst_util.m"
                MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 3)));
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;
#line 2253 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_31;
#line 2253 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_25;
#line 2253 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_28;
#line 2253 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2254 "inst_util.m"
                MR_Word check_hlds__inst_util__V_26_26;
#line 2254 "inst_util.m"
                MR_Word check_hlds__inst_util__V_27_27;
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;

#line 2254 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_20_20 == (MR_Integer) 1);
#line 2253 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2253 "inst_util.m"
                  {
#line 3215 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_11_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2255 "inst_util.m"
                    {
#line 2255 "inst_util.m"
                      check_hlds__inst_util__Arity_19 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_22, check_hlds__inst_util__ArgModes_16);
                    }
#line 2257 "inst_util.m"
                    {
#line 2257 "inst_util.m"
                      check_hlds__inst_util__V_21_21 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_19);
                    }
#line 2256 "inst_util.m"
                    {
#line 2256 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__V_21_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                    }
#line 2256 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2253 "inst_util.m"
                  }
#line 1969 "inst_util.m"
                check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1969 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1969 "inst_util.m"
                  {
#line 2254 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 0)));
#line 2254 "inst_util.m"
                    check_hlds__inst_util__ArgModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 1)));
#line 2254 "inst_util.m"
                    check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 2)));
#line 2254 "inst_util.m"
                    check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 3)));
#line 2254 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == (MR_Integer) 1);
#line 2253 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2253 "inst_util.m"
                      {
#line 3256 "check_hlds.inst_util.c"
                        check_hlds__inst_util__TypeCtorInfo_11_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2255 "inst_util.m"
                        {
#line 2255 "inst_util.m"
                          check_hlds__inst_util__Arity_28 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_31, check_hlds__inst_util__ArgModes_25);
                        }
#line 2257 "inst_util.m"
                        {
#line 2257 "inst_util.m"
                          check_hlds__inst_util__V_30_30 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_28);
                        }
#line 2256 "inst_util.m"
                        {
#line 2256 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__V_30_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                        }
#line 2256 "inst_util.m"
                        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2253 "inst_util.m"
                      }
#line 1970 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1969 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1969 "inst_util.m"
                      {
#line 1971 "inst_util.m"
                        *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1971 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1969 "inst_util.m"
                      }
#line 1969 "inst_util.m"
                  }
#line 1969 "inst_util.m"
              }
#line 1966 "inst_util.m"
          }
#line 1964 "inst_util.m"
      }
#line 1973 "inst_util.m"
    else
#line 1974 "inst_util.m"
      {
#line 1974 "inst_util.m"
        {
#line 1974 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoA_6);
        }
#line 1974 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1974 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1974 "inst_util.m"
          {
#line 1975 "inst_util.m"
            {
#line 1975 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoB_7);
            }
#line 1975 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1974 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1974 "inst_util.m"
              {
#line 1976 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1976 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1974 "inst_util.m"
              }
#line 1974 "inst_util.m"
          }
#line 1974 "inst_util.m"
      }
#line 1954 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1954 "inst_util.m"
      {
#line 1954 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12;
#line 1954 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1954 "inst_util.m"
      }
#line 1954 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1954 "inst_util.m"
  }
#line 1951 "inst_util.m"
}

#line 1942 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1942 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1942 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1942 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6)
#line 1942 "inst_util.m"
{
#line 1947 "inst_util.m"
  {
#line 1947 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1945 "inst_util.m"
    {
#line 1945 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_4, check_hlds__inst_util__UniqB_5);
    }
#line 1947 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1946 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqB_5;
#line 1947 "inst_util.m"
    else
#line 1948 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqA_4;
#line 1947 "inst_util.m"
  }
#line 1942 "inst_util.m"
}

#line 1814 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1814 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1814 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1814 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1814 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1814 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1814 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41)
#line 1814 "inst_util.m"
{
#line 1829 "inst_util.m"
  {
#line 1829 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
#line 1829 "inst_util.m"
      default:
#line 1829 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
        break;
#line 1829 "inst_util.m"
      case (MR_Integer) 0:
#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_7)) {
#line 1829 "inst_util.m"
          default:
#line 1829 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
            break;
#line 1829 "inst_util.m"
          case (MR_Integer) 0:
#line 1829 "inst_util.m"
            if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1903 "inst_util.m"
              {
#line 1905 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1903 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1903 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1903 "inst_util.m"
              }
#line 1829 "inst_util.m"
            else
#line 1829 "inst_util.m"
            if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1869 "inst_util.m"
              {
#line 1869 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1870 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1873 "inst_util.m"
#line 1873 "inst_util.m"
                switch (check_hlds__inst_util__Uniq_73) {
#line 1873 "inst_util.m"
                  default:
#line 1873 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 1873 "inst_util.m"
                    break;
#line 1873 "inst_util.m"
                  case (MR_Integer) 3:
#line 1873 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1873 "inst_util.m"
                    break;
#line 1873 "inst_util.m"
                  case (MR_Integer) 4:
#line 1873 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1873 "inst_util.m"
                    break;
#line 1873 "inst_util.m"
                }
#line 1869 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1869 "inst_util.m"
                  {
#line 1874 "inst_util.m"
                    *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstB_8;
#line 1869 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1869 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1869 "inst_util.m"
                  }
#line 1869 "inst_util.m"
              }
#line 1829 "inst_util.m"
            else
#line 1829 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
            break;
#line 1829 "inst_util.m"
        }
#line 1829 "inst_util.m"
        break;
#line 1829 "inst_util.m"
      case (MR_Integer) 2:
#line 1829 "inst_util.m"
        {
#line 1829 "inst_util.m"
          MR_Word check_hlds__inst_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1829 "inst_util.m"
          MR_Word check_hlds__inst_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));

#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
          switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1829 "inst_util.m"
            default:
#line 1829 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
              break;
#line 1829 "inst_util.m"
            case (MR_Integer) 0:
#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
              switch (MR_unmkbody(check_hlds__inst_util__InstB_8)) {
#line 1829 "inst_util.m"
                default:
#line 1829 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
                case (MR_Integer) 0:
#line 1835 "inst_util.m"
                  {
#line 1839 "inst_util.m"
#line 1839 "inst_util.m"
                    switch (check_hlds__inst_util__V_110_110) {
#line 1839 "inst_util.m"
                      default:
#line 1839 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1839 "inst_util.m"
                        break;
#line 1839 "inst_util.m"
                      case (MR_Integer) 3:
#line 1839 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1839 "inst_util.m"
                        break;
#line 1839 "inst_util.m"
                      case (MR_Integer) 4:
#line 1839 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1839 "inst_util.m"
                        break;
#line 1839 "inst_util.m"
                    }
#line 1835 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1835 "inst_util.m"
                      {
#line 1840 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstA_7;
#line 1835 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1835 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1835 "inst_util.m"
                      }
#line 1835 "inst_util.m"
                  }
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
              }
#line 1829 "inst_util.m"
              break;
#line 1829 "inst_util.m"
            case (MR_Integer) 2:
#line 1829 "inst_util.m"
              {
#line 1829 "inst_util.m"
                MR_Word check_hlds__inst_util__UniqB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1829 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfoB_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1829 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_16;
#line 1829 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_17;

#line 1831 "inst_util.m"
                {
#line 1831 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_15, &check_hlds__inst_util__HOInstInfo_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1829 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1829 "inst_util.m"
                  {
#line 1832 "inst_util.m"
                    {
#line 1832 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_14, &check_hlds__inst_util__Uniq_17);
                    }
#line 1833 "inst_util.m"
                    {
#line 1833 "inst_util.m"
                      MR_Word base;
#line 1833 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1833 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = base;
#line 1833 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_17));
#line 1833 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_16));
#line 1833 "inst_util.m"
                    }
#line 1833 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1829 "inst_util.m"
                  }
#line 1829 "inst_util.m"
              }
#line 1829 "inst_util.m"
              break;
#line 1829 "inst_util.m"
            case (MR_Integer) 3:
#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1829 "inst_util.m"
                default:
#line 1829 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
                case (MR_Integer) 0:
#line 1842 "inst_util.m"
                  {
#line 1842 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstResultsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1842 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1842 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_57_57;
#line 1842 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1842 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_63;

#line 1844 "inst_util.m"
                    {
#line 1844 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_62, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_63);
                    }
#line 1847 "inst_util.m"
#line 1847 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_63) {
#line 1847 "inst_util.m"
                      default:
#line 1847 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1847 "inst_util.m"
                        break;
#line 1847 "inst_util.m"
                      case (MR_Integer) 3:
#line 1847 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1847 "inst_util.m"
                        break;
#line 1847 "inst_util.m"
                      case (MR_Integer) 4:
#line 1847 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1847 "inst_util.m"
                        break;
#line 1847 "inst_util.m"
                    }
#line 1849 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1848 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1849 "inst_util.m"
                    else
#line 1850 "inst_util.m"
                      {
#line 1850 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_19, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1842 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1842 "inst_util.m"
                      {
#line 1853 "inst_util.m"
                        check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1842 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1853 "inst_util.m"
                        {
#line 1853 "inst_util.m"
                          MR_Word base;
#line 1853 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1853 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_63));
#line 1853 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 1853 "inst_util.m"
                        }
#line 1853 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1842 "inst_util.m"
                      }
#line 1842 "inst_util.m"
                  }
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
                case (MR_Integer) 1:
#line 1855 "inst_util.m"
                  {
#line 1855 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1855 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1855 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_68;
#line 1855 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_69;

#line 1857 "inst_util.m"
                    {
#line 1857 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_67, &check_hlds__inst_util__HOInstInfo_68, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1855 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1855 "inst_util.m"
                      {
#line 1858 "inst_util.m"
                        {
#line 1858 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_66, &check_hlds__inst_util__Uniq_69);
                        }
#line 1859 "inst_util.m"
                        {
#line 1859 "inst_util.m"
                          MR_Word base;
#line 1859 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1859 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1859 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1859 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_68));
#line 1859 "inst_util.m"
                        }
#line 1859 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1855 "inst_util.m"
                      }
#line 1855 "inst_util.m"
                  }
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
                case (MR_Integer) 5:
#line 1861 "inst_util.m"
                  {
#line 1861 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_55_55;
#line 1861 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_71;

#line 1863 "inst_util.m"
                    {
#line 1863 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, (MR_Integer) 0, &check_hlds__inst_util__Uniq_71);
                    }
#line 1866 "inst_util.m"
#line 1866 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_71) {
#line 1866 "inst_util.m"
                      default:
#line 1866 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1866 "inst_util.m"
                        break;
#line 1866 "inst_util.m"
                      case (MR_Integer) 3:
#line 1866 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1866 "inst_util.m"
                        break;
#line 1866 "inst_util.m"
                      case (MR_Integer) 4:
#line 1866 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1866 "inst_util.m"
                        break;
#line 1866 "inst_util.m"
                    }
#line 1861 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1861 "inst_util.m"
                      {
#line 1867 "inst_util.m"
                        check_hlds__inst_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1861 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1867 "inst_util.m"
                        {
#line 1867 "inst_util.m"
                          MR_Word base;
#line 1867 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1867 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_71));
#line 1867 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_55_55));
#line 1867 "inst_util.m"
                        }
#line 1867 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1861 "inst_util.m"
                      }
#line 1861 "inst_util.m"
                  }
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
              }
#line 1829 "inst_util.m"
              break;
#line 1829 "inst_util.m"
          }
#line 1829 "inst_util.m"
        }
#line 1829 "inst_util.m"
        break;
#line 1829 "inst_util.m"
      case (MR_Integer) 3:
#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
#line 1829 "inst_util.m"
          default:
#line 1829 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
            break;
#line 1829 "inst_util.m"
          case (MR_Integer) 0:
#line 1829 "inst_util.m"
            {
#line 1829 "inst_util.m"
              MR_Word check_hlds__inst_util__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1829 "inst_util.m"
              MR_Word check_hlds__inst_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1829 "inst_util.m"
              MR_Word check_hlds__inst_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1829 "inst_util.m"
                default:
#line 1829 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
                case (MR_Integer) 2:
#line 1876 "inst_util.m"
                  {
#line 1876 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_53_53;
#line 1876 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1876 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_76;
#line 1877 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1878 "inst_util.m"
                    {
#line 1878 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__UniqB_75, check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_76);
                    }
#line 1881 "inst_util.m"
#line 1881 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_76) {
#line 1881 "inst_util.m"
                      default:
#line 1881 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1881 "inst_util.m"
                        break;
#line 1881 "inst_util.m"
                      case (MR_Integer) 3:
#line 1881 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1881 "inst_util.m"
                        break;
#line 1881 "inst_util.m"
                      case (MR_Integer) 4:
#line 1881 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1881 "inst_util.m"
                        break;
#line 1881 "inst_util.m"
                    }
#line 1883 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1882 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1883 "inst_util.m"
                    else
#line 1884 "inst_util.m"
                      {
#line 1884 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1876 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1876 "inst_util.m"
                      {
#line 1887 "inst_util.m"
                        check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1876 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1887 "inst_util.m"
                        {
#line 1887 "inst_util.m"
                          MR_Word base;
#line 1887 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1887 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
#line 1887 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 1887 "inst_util.m"
                        }
#line 1887 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1876 "inst_util.m"
                      }
#line 1876 "inst_util.m"
                  }
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
                case (MR_Integer) 3:
#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1829 "inst_util.m"
                    default:
#line 1829 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
                      break;
#line 1829 "inst_util.m"
                    case (MR_Integer) 0:
#line 1907 "inst_util.m"
                      {
#line 1907 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_32;
#line 1907 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_49_49;
#line 1907 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1907 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_87;
#line 1907 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1908 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1909 "inst_util.m"
                        {
#line 1909 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__UniqB_86, &check_hlds__inst_util__Uniq_87);
                        }
#line 1910 "inst_util.m"
                        {
#line 1910 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_111_111, check_hlds__inst_util__BoundInstsB_88, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInsts_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1907 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1907 "inst_util.m"
                          {
#line 1913 "inst_util.m"
                            check_hlds__inst_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1913 "inst_util.m"
                            {
#line 1913 "inst_util.m"
                              MR_Word base;
#line 1913 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1913 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1913 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1913 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_87));
#line 1913 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_49_49));
#line 1913 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_32));
#line 1913 "inst_util.m"
                            }
#line 1913 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1907 "inst_util.m"
                          }
#line 1907 "inst_util.m"
                      }
#line 1829 "inst_util.m"
                      break;
#line 1829 "inst_util.m"
                    case (MR_Integer) 1:
#line 1915 "inst_util.m"
                      {
#line 1915 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1916 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1917 "inst_util.m"
                        {
#line 1917 "inst_util.m"
                          return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__UniqB_91, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1915 "inst_util.m"
                      }
#line 1829 "inst_util.m"
                      break;
#line 1829 "inst_util.m"
                  }
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
              }
#line 1829 "inst_util.m"
            }
#line 1829 "inst_util.m"
            break;
#line 1829 "inst_util.m"
          case (MR_Integer) 1:
#line 1829 "inst_util.m"
            {
#line 1829 "inst_util.m"
              MR_Word check_hlds__inst_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1829 "inst_util.m"
              MR_Word check_hlds__inst_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1829 "inst_util.m"
                default:
#line 1829 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
                case (MR_Integer) 2:
#line 1889 "inst_util.m"
                  {
#line 1889 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1889 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1889 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_81;
#line 1889 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_82;

#line 1891 "inst_util.m"
                    {
#line 1891 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_80, &check_hlds__inst_util__HOInstInfo_81, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1889 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1889 "inst_util.m"
                      {
#line 1892 "inst_util.m"
                        {
#line 1892 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_79, &check_hlds__inst_util__Uniq_82);
                        }
#line 1893 "inst_util.m"
                        {
#line 1893 "inst_util.m"
                          MR_Word base;
#line 1893 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1893 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_82));
#line 1893 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_81));
#line 1893 "inst_util.m"
                        }
#line 1893 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1889 "inst_util.m"
                      }
#line 1889 "inst_util.m"
                  }
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
                case (MR_Integer) 3:
#line 1829 "inst_util.m"
#line 1829 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1829 "inst_util.m"
                    default:
#line 1829 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
                      break;
#line 1829 "inst_util.m"
                    case (MR_Integer) 0:
#line 1920 "inst_util.m"
                      {
#line 1920 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1920 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstResultsB_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1920 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));

#line 1922 "inst_util.m"
                        {
#line 1922 "inst_util.m"
                          return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__UniqB_95, check_hlds__inst_util__InstResultsB_96, check_hlds__inst_util__BoundInstsB_97, check_hlds__inst_util__V_115_115, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1920 "inst_util.m"
                      }
#line 1829 "inst_util.m"
                      break;
#line 1829 "inst_util.m"
                    case (MR_Integer) 1:
#line 1925 "inst_util.m"
                      {
#line 1925 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1925 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfoB_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1925 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfo_102;
#line 1925 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_103;

#line 1927 "inst_util.m"
                        {
#line 1927 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_101, &check_hlds__inst_util__HOInstInfo_102, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1925 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1925 "inst_util.m"
                          {
#line 1928 "inst_util.m"
                            {
#line 1928 "inst_util.m"
                              check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_100, &check_hlds__inst_util__Uniq_103);
                            }
#line 1929 "inst_util.m"
                            {
#line 1929 "inst_util.m"
                              MR_Word base;
#line 1929 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1929 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1929 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_103));
#line 1929 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_102));
#line 1929 "inst_util.m"
                            }
#line 1929 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1925 "inst_util.m"
                          }
#line 1925 "inst_util.m"
                      }
#line 1829 "inst_util.m"
                      break;
#line 1829 "inst_util.m"
                  }
#line 1829 "inst_util.m"
                  break;
#line 1829 "inst_util.m"
              }
#line 1829 "inst_util.m"
            }
#line 1829 "inst_util.m"
            break;
#line 1829 "inst_util.m"
          case (MR_Integer) 5:
#line 1829 "inst_util.m"
            {
#line 1829 "inst_util.m"
              MR_Word check_hlds__inst_util__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1829 "inst_util.m"
              MR_Word check_hlds__inst_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1829 "inst_util.m"
              if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1895 "inst_util.m"
                {
#line 1895 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_51_51;
#line 1895 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1895 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_84;
#line 1896 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1897 "inst_util.m"
                  {
#line 1897 "inst_util.m"
                    check_hlds__inst_util__merge_uniq_3_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_83, &check_hlds__inst_util__Uniq_84);
                  }
#line 1900 "inst_util.m"
#line 1900 "inst_util.m"
                  switch (check_hlds__inst_util__Uniq_84) {
#line 1900 "inst_util.m"
                    default:
#line 1900 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1900 "inst_util.m"
                      break;
#line 1900 "inst_util.m"
                    case (MR_Integer) 3:
#line 1900 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1900 "inst_util.m"
                      break;
#line 1900 "inst_util.m"
                    case (MR_Integer) 4:
#line 1900 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1900 "inst_util.m"
                      break;
#line 1900 "inst_util.m"
                  }
#line 1895 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1895 "inst_util.m"
                    {
#line 1901 "inst_util.m"
                      check_hlds__inst_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1895 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1901 "inst_util.m"
                      {
#line 1901 "inst_util.m"
                        MR_Word base;
#line 1901 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1901 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_84));
#line 1901 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 1901 "inst_util.m"
                      }
#line 1901 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1895 "inst_util.m"
                    }
#line 1895 "inst_util.m"
                }
#line 1829 "inst_util.m"
              else
#line 1829 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1931 "inst_util.m"
                {
#line 1931 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeInfo_104_104;
#line 1931 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeCtorInfo_105_105;
#line 1931 "inst_util.m"
                  MR_Word check_hlds__inst_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1931 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeTypes_38;
#line 1931 "inst_util.m"
                  MR_Word check_hlds__inst_util__Args_39;
#line 1931 "inst_util.m"
                  MR_Integer check_hlds__inst_util__V_42_42;
#line 1931 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_43_43;
#line 1931 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1932 "inst_util.m"
                  {
#line 1932 "inst_util.m"
                    check_hlds__inst_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_util__V_108_108, check_hlds__inst_util__V_106_106);
                  }
#line 1931 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1931 "inst_util.m"
                    {
#line 4324 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeInfo_104_104 = (MR_Word) &check_hlds__inst_util_scalar_common_1[1];
#line 4326 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1934 "inst_util.m"
                      {
#line 1934 "inst_util.m"
                        check_hlds__inst_util__V_42_42 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_105_105, check_hlds__inst_util__V_107_107);
                      }
#line 1934 "inst_util.m"
                      check_hlds__inst_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1934 "inst_util.m"
                      {
#line 1934 "inst_util.m"
                        check_hlds__inst_util__MaybeTypes_38 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeInfo_104_104, check_hlds__inst_util__V_42_42, ((MR_Box) (check_hlds__inst_util__V_43_43)));
                      }
#line 1935 "inst_util.m"
                      {
#line 1935 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__V_107_107, check_hlds__inst_util__ArgsB_37, check_hlds__inst_util__MaybeTypes_38, &check_hlds__inst_util__Args_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
#line 1931 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1931 "inst_util.m"
                        {
#line 1936 "inst_util.m"
                          {
#line 1936 "inst_util.m"
                            MR_Word base;
#line 1936 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "inst_util.m"
                            *check_hlds__inst_util__Inst_10 = base;
#line 1936 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1936 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_108_108));
#line 1936 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Args_39));
#line 1936 "inst_util.m"
                          }
#line 1936 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1931 "inst_util.m"
                        }
#line 1931 "inst_util.m"
                    }
#line 1931 "inst_util.m"
                }
#line 1829 "inst_util.m"
              else
#line 1829 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
            }
#line 1829 "inst_util.m"
            break;
#line 1829 "inst_util.m"
        }
#line 1829 "inst_util.m"
        break;
#line 1829 "inst_util.m"
    }
#line 1829 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1829 "inst_util.m"
  }
#line 1814 "inst_util.m"
}

#line 1786 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1786 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1786 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1786 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1786 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1786 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1786 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20)
#line 1786 "inst_util.m"
{
#line 1806 "inst_util.m"
  {
#line 1806 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1806 "inst_util.m"
    MR_Word check_hlds__inst_util__InstVarsA_12;
#line 1806 "inst_util.m"
    MR_Word check_hlds__inst_util__SubInstA_13;

#line 1790 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1790 "inst_util.m"
      {
#line 1790 "inst_util.m"
        check_hlds__inst_util__InstVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1790 "inst_util.m"
        check_hlds__inst_util__SubInstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1803 "inst_util.m"
        {
#line 1803 "inst_util.m"
          MR_Word check_hlds__inst_util__InstVarsB_14;
#line 1803 "inst_util.m"
          MR_Word check_hlds__inst_util__SubInstB_15;

#line 1791 "inst_util.m"
          check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1791 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1791 "inst_util.m"
            {
#line 1791 "inst_util.m"
              check_hlds__inst_util__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1791 "inst_util.m"
              check_hlds__inst_util__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1792 "inst_util.m"
              {
#line 1792 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_26_26;
#line 1792 "inst_util.m"
                MR_Word check_hlds__inst_util__Inst0_16;
#line 1792 "inst_util.m"
                MR_Word check_hlds__inst_util__InstVars_17;

#line 1792 "inst_util.m"
                {
#line 1792 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__SubInstB_15, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
                }
#line 1792 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1792 "inst_util.m"
                  {
#line 4463 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_26_26 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 1793 "inst_util.m"
                    {
#line 1793 "inst_util.m"
                      mercury__set__intersect_3_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVarsA_12, check_hlds__inst_util__InstVarsB_14, &check_hlds__inst_util__InstVars_17);
                    }
#line 1794 "inst_util.m"
                    {
#line 1794 "inst_util.m"
                      check_hlds__inst_util__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVars_17);
                    }
#line 1800 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1795 "inst_util.m"
                      {
#line 1795 "inst_util.m"
                        MR_Word base;
#line 1795 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1795 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1795 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1795 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1795 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_16));
#line 1795 "inst_util.m"
                      }
#line 1800 "inst_util.m"
                    else
#line 1801 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_16;
#line 1800 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1792 "inst_util.m"
                  }
#line 1792 "inst_util.m"
              }
#line 1791 "inst_util.m"
            }
#line 1791 "inst_util.m"
          else
#line 1804 "inst_util.m"
            {
#line 1804 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1803 "inst_util.m"
        }
#line 1790 "inst_util.m"
      }
#line 1790 "inst_util.m"
    else
#line 1810 "inst_util.m"
      {
#line 1810 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInstB_25;
#line 1806 "inst_util.m"
        MR_Word check_hlds__inst_util___InstVarsB_18;

#line 1806 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1806 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1806 "inst_util.m"
          {
#line 1806 "inst_util.m"
            check_hlds__inst_util___InstVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1806 "inst_util.m"
            check_hlds__inst_util__SubInstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1809 "inst_util.m"
            {
#line 1809 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__SubInstB_25, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1806 "inst_util.m"
          }
#line 1806 "inst_util.m"
        else
#line 1811 "inst_util.m"
          {
#line 1811 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
          }
#line 1810 "inst_util.m"
      }
#line 1806 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1806 "inst_util.m"
  }
#line 1786 "inst_util.m"
}

#line 1766 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1766 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1766 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1766 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1766 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1766 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1766 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15)
#line 1766 "inst_util.m"
{
#line 1769 "inst_util.m"
  {
#line 1769 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1769 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_12;
#line 1769 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_13;

#line 1775 "inst_util.m"
    {
#line 1775 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstA_7, &check_hlds__inst_util__ExpandedInstA_12);
    }
#line 1776 "inst_util.m"
    {
#line 1776 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstB_8, &check_hlds__inst_util__ExpandedInstB_13);
    }
#line 1777 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1779 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1778 "inst_util.m"
      {
#line 1778 "inst_util.m"
        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstA_12;
#line 1778 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1778 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1778 "inst_util.m"
      }
#line 1779 "inst_util.m"
    else
#line 1781 "inst_util.m"
      {
#line 1779 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstA_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1781 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1780 "inst_util.m"
          {
#line 1780 "inst_util.m"
            *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstB_13;
#line 1780 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1780 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1780 "inst_util.m"
          }
#line 1781 "inst_util.m"
        else
#line 1782 "inst_util.m"
          {
#line 1782 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(check_hlds__inst_util__ExpandedInstA_12, check_hlds__inst_util__ExpandedInstB_13, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);
          }
#line 1781 "inst_util.m"
      }
#line 1769 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1769 "inst_util.m"
  }
#line 1766 "inst_util.m"
}

#line 1682 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1682 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1682 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1682 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1682 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1682 "inst_util.m"
{
#line 1685 "inst_util.m"
  {
#line 1685 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1685 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1685 "inst_util.m"
      {
#line 1685 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1685 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1685 "inst_util.m"
      }
#line 1685 "inst_util.m"
    else
#line 1686 "inst_util.m"
      {
#line 1686 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1686 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1686 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1686 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1686 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1687 "inst_util.m"
        {
#line 1687 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1688 "inst_util.m"
        {
#line 1688 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1686 "inst_util.m"
        {
#line 1686 "inst_util.m"
          MR_Word base;
#line 1686 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1686 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1686 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1686 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1686 "inst_util.m"
        }
#line 1686 "inst_util.m"
      }
#line 1685 "inst_util.m"
  }
#line 1682 "inst_util.m"
}

#line 1671 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1671 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1671 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1671 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1671 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1671 "inst_util.m"
{
#line 1674 "inst_util.m"
  {
#line 1674 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1674 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1674 "inst_util.m"
      {
#line 1674 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1674 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1674 "inst_util.m"
      }
#line 1674 "inst_util.m"
    else
#line 1676 "inst_util.m"
      {
#line 1676 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1676 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1676 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1676 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1676 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1676 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1676 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1676 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1678 "inst_util.m"
        {
#line 1678 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1679 "inst_util.m"
        {
#line 1679 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1679 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1679 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1679 "inst_util.m"
        }
#line 1680 "inst_util.m"
        {
#line 1680 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1675 "inst_util.m"
        {
#line 1675 "inst_util.m"
          MR_Word base;
#line 1675 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1675 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1675 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1675 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1675 "inst_util.m"
        }
#line 1676 "inst_util.m"
      }
#line 1674 "inst_util.m"
  }
#line 1671 "inst_util.m"
}

#line 1566 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1566 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1566 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1566 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1566 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1566 "inst_util.m"
{
#line 1569 "inst_util.m"
  {
#line 1569 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1569 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1569 "inst_util.m"
      {
#line 1569 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1569 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1569 "inst_util.m"
      }
#line 1569 "inst_util.m"
    else
#line 1571 "inst_util.m"
      {
#line 1571 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1571 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1571 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1571 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1571 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1571 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1571 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1571 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1573 "inst_util.m"
        {
#line 1573 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1574 "inst_util.m"
        {
#line 1574 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1574 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1574 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1574 "inst_util.m"
        }
#line 1575 "inst_util.m"
        {
#line 1575 "inst_util.m"
          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1570 "inst_util.m"
        {
#line 1570 "inst_util.m"
          MR_Word base;
#line 1570 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1570 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1570 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1570 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1570 "inst_util.m"
        }
#line 1571 "inst_util.m"
      }
#line 1569 "inst_util.m"
  }
#line 1566 "inst_util.m"
}

#line 1445 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1445 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1445 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1445 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1445 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35)
#line 1445 "inst_util.m"
{
#line 1450 "inst_util.m"
  {
#line 1450 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1450 "inst_util.m"
#line 1450 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
#line 1450 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "inst_util.m"
      case (MR_Integer) 0:
#line 1450 "inst_util.m"
#line 1450 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_5)) {
#line 1450 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "inst_util.m"
          case (MR_Integer) 0:
#line 1453 "inst_util.m"
            {
#line 1455 "inst_util.m"
              {
#line 1455 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
#line 1455 "inst_util.m"
                return;
              }
#line 1453 "inst_util.m"
            }
#line 1450 "inst_util.m"
            break;
#line 1450 "inst_util.m"
          case (MR_Integer) 1:
#line 1450 "inst_util.m"
            {
#line 1451 "inst_util.m"
              *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1450 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1450 "inst_util.m"
            }
#line 1450 "inst_util.m"
            break;
#line 1450 "inst_util.m"
        }
#line 1450 "inst_util.m"
        break;
#line 1450 "inst_util.m"
      case (MR_Integer) 1:
#line 1457 "inst_util.m"
        {
#line 1459 "inst_util.m"
          {
#line 1459 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
#line 1459 "inst_util.m"
            return;
          }
#line 1457 "inst_util.m"
        }
#line 1450 "inst_util.m"
        break;
#line 1450 "inst_util.m"
      case (MR_Integer) 2:
#line 1461 "inst_util.m"
        {
#line 1461 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1461 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1461 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[15 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1463 "inst_util.m"
          {
#line 1463 "inst_util.m"
            MR_Word base;
#line 1463 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1463 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1463 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1463 "inst_util.m"
          }
#line 1461 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1461 "inst_util.m"
        }
#line 1450 "inst_util.m"
        break;
#line 1450 "inst_util.m"
      case (MR_Integer) 3:
#line 1450 "inst_util.m"
#line 1450 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
#line 1450 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "inst_util.m"
          case (MR_Integer) 0:
#line 1465 "inst_util.m"
            {
#line 1465 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1465 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1465 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1465 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1465 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_55 = ((&check_hlds__inst_util_vector_common_2[20 + check_hlds__inst_util__Uniq0_54]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1491 "inst_util.m"
              {
#line 1491 "inst_util.m"
                check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1492 "inst_util.m"
              {
#line 1492 "inst_util.m"
                MR_Word base;
#line 1492 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1492 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1492 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_55));
#line 1492 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_12));
#line 1492 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1492 "inst_util.m"
              }
#line 1465 "inst_util.m"
            }
#line 1450 "inst_util.m"
            break;
#line 1450 "inst_util.m"
          case (MR_Integer) 1:
#line 1494 "inst_util.m"
            {
#line 1494 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1494 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1494 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_57 = ((&check_hlds__inst_util_vector_common_2[25 + check_hlds__inst_util__Uniq0_56]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1496 "inst_util.m"
              {
#line 1496 "inst_util.m"
                MR_Word base;
#line 1496 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1496 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1496 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_57));
#line 1496 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1496 "inst_util.m"
              }
#line 1494 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1494 "inst_util.m"
            }
#line 1450 "inst_util.m"
            break;
#line 1450 "inst_util.m"
          case (MR_Integer) 2:
#line 1498 "inst_util.m"
            {
#line 1499 "inst_util.m"
              {
#line 1499 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
#line 1499 "inst_util.m"
                return;
              }
#line 1498 "inst_util.m"
            }
#line 1450 "inst_util.m"
            break;
#line 1450 "inst_util.m"
          case (MR_Integer) 3:
#line 1501 "inst_util.m"
            {
#line 1501 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1501 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1501 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst1_19;

#line 1502 "inst_util.m"
              {
#line 1502 "inst_util.m"
                check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1503 "inst_util.m"
              {
#line 1503 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1503 "inst_util.m"
              check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1505 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1504 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst1_19;
#line 1505 "inst_util.m"
              else
#line 1506 "inst_util.m"
                {
#line 1506 "inst_util.m"
                  MR_Word base;
#line 1506 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1506 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1506 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1506 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst1_19));
#line 1506 "inst_util.m"
                }
#line 1501 "inst_util.m"
            }
#line 1450 "inst_util.m"
            break;
#line 1450 "inst_util.m"
          case (MR_Integer) 4:
#line 1512 "inst_util.m"
            {
#line 1512 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1512 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_23;
#line 1512 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInstTable0_24;
#line 1512 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1512 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInstTable1_26;
#line 1512 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInst_28;

#line 1514 "inst_util.m"
              {
#line 1514 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__InstTable0_23);
              }
#line 1515 "inst_util.m"
              {
#line 1515 "inst_util.m"
                hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__SharedInstTable0_24);
              }
#line 1516 "inst_util.m"
              {
#line 1516 "inst_util.m"
                hlds__hlds_data__search_insert_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__SharedInstTable0_24, &check_hlds__inst_util__SharedInstTable1_26);
              }
#line 1526 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "inst_util.m"
                {
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_29;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_30;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__SharedInstTable2_31;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__SharedInstTable_32;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_33;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_38_38;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_58;
#line 1527 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_59;

#line 1530 "inst_util.m"
                  {
#line 1530 "inst_util.m"
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
#line 1532 "inst_util.m"
                  {
#line 1532 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36);
                  }
#line 1536 "inst_util.m"
                  {
#line 1536 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_58);
                  }
#line 1537 "inst_util.m"
                  {
#line 1537 "inst_util.m"
                    check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__SubInst0_58, &check_hlds__inst_util__SubInst1_59);
                  }
#line 1538 "inst_util.m"
                  {
#line 1538 "inst_util.m"
                    check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst1_59, &check_hlds__inst_util__SharedInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
#line 1542 "inst_util.m"
                  {
#line 1542 "inst_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__InstTable2_30);
                  }
#line 1543 "inst_util.m"
                  {
#line 1543 "inst_util.m"
                    hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__SharedInstTable2_31);
                  }
#line 1544 "inst_util.m"
                  {
#line 1544 "inst_util.m"
                    check_hlds__inst_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1544 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_38_38, 0) = ((MR_Box) (check_hlds__inst_util__SharedInst_28));
#line 1544 "inst_util.m"
                  }
#line 1544 "inst_util.m"
                  {
#line 1544 "inst_util.m"
                    hlds__hlds_data__det_update_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_38_38, check_hlds__inst_util__SharedInstTable2_31, &check_hlds__inst_util__SharedInstTable_32);
                  }
#line 1546 "inst_util.m"
                  {
#line 1546 "inst_util.m"
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable_32, check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__InstTable_33);
                  }
#line 1548 "inst_util.m"
                  {
#line 1548 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                  }
#line 1527 "inst_util.m"
                }
#line 1526 "inst_util.m"
              else
#line 1519 "inst_util.m"
                {
#line 1519 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1522 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1524 "inst_util.m"
                    check_hlds__inst_util__SharedInst_28 = check_hlds__inst_util__Inst0_5;
#line 1522 "inst_util.m"
                  else
#line 1521 "inst_util.m"
                    check_hlds__inst_util__SharedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1519 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1519 "inst_util.m"
                }
#line 1551 "inst_util.m"
              {
#line 1551 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__SharedInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35, check_hlds__inst_util__InstName_22);
              }
#line 1553 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1552 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1553 "inst_util.m"
              else
#line 1554 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SharedInst_28;
#line 1512 "inst_util.m"
            }
#line 1450 "inst_util.m"
            break;
#line 1450 "inst_util.m"
          case (MR_Integer) 5:
#line 1509 "inst_util.m"
            {
#line 1510 "inst_util.m"
              {
#line 1510 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
#line 1510 "inst_util.m"
                return;
              }
#line 1509 "inst_util.m"
            }
#line 1450 "inst_util.m"
            break;
#line 1450 "inst_util.m"
        }
#line 1450 "inst_util.m"
        break;
#line 1450 "inst_util.m"
    }
#line 1450 "inst_util.m"
  }
#line 1445 "inst_util.m"
}

#line 1418 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1418 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1418 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1418 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1418 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1418 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5)
#line 1418 "inst_util.m"
{
#line 1421 "inst_util.m"
  {
#line 1421 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1421 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1421 "inst_util.m"
      if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1421 "inst_util.m"
        {
#line 1421 "inst_util.m"
          *check_hlds__inst_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1421 "inst_util.m"
        }
#line 1421 "inst_util.m"
      else
#line 1432 "inst_util.m"
        {
#line 1433 "inst_util.m"
          {
#line 1433 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1433 "inst_util.m"
            return;
          }
#line 1432 "inst_util.m"
        }
#line 1421 "inst_util.m"
    else
#line 1421 "inst_util.m"
      {
#line 1421 "inst_util.m"
        MR_Word check_hlds__inst_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1421 "inst_util.m"
        MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1421 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1434 "inst_util.m"
          {
#line 1435 "inst_util.m"
            {
#line 1435 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1435 "inst_util.m"
              return;
            }
#line 1434 "inst_util.m"
          }
#line 1421 "inst_util.m"
        else
#line 1423 "inst_util.m"
          {
#line 1423 "inst_util.m"
            MR_Word check_hlds__inst_util__Live_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1423 "inst_util.m"
            MR_Word check_hlds__inst_util__Lives_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1423 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_13;
#line 1423 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_14;
#line 1423 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1427 "inst_util.m"
#line 1427 "inst_util.m"
            switch (check_hlds__inst_util__Live_11) {
#line 1427 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1427 "inst_util.m"
              case (MR_Integer) 1:
#line 1428 "inst_util.m"
                {
#line 1429 "inst_util.m"
                  check_hlds__inst_util__Inst_13 = check_hlds__inst_util__V_37_37;
#line 1428 "inst_util.m"
                  check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1428 "inst_util.m"
                }
#line 1427 "inst_util.m"
                break;
#line 1427 "inst_util.m"
              case (MR_Integer) 0:
#line 1425 "inst_util.m"
                {
#line 1425 "inst_util.m"
                  check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__V_37_37, &check_hlds__inst_util__Inst_13, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
                }
#line 1427 "inst_util.m"
                break;
#line 1427 "inst_util.m"
            }
#line 1431 "inst_util.m"
            {
#line 1431 "inst_util.m"
              check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__V_36_36, check_hlds__inst_util__Lives_12, &check_hlds__inst_util__Insts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);
            }
#line 1423 "inst_util.m"
            {
#line 1423 "inst_util.m"
              MR_Word base;
#line 1423 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "inst_util.m"
              *check_hlds__inst_util__HeadVar__3_3 = base;
#line 1423 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_13));
#line 1423 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_14));
#line 1423 "inst_util.m"
            }
#line 1423 "inst_util.m"
          }
#line 1421 "inst_util.m"
      }
#line 1421 "inst_util.m"
  }
#line 1418 "inst_util.m"
}

#line 1398 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1398 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1398 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1398 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1398 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1398 "inst_util.m"
{
#line 1403 "inst_util.m"
  {
#line 1403 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1403 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1403 "inst_util.m"
      {
#line 1403 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1403 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1403 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1403 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1403 "inst_util.m"
      }
#line 1403 "inst_util.m"
    else
#line 1405 "inst_util.m"
      {
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1405 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1404 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1404 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1404 "inst_util.m"
          {
#line 1404 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1404 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1406 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1406 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1406 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1408 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1407 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1408 "inst_util.m"
            else
#line 1409 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1411 "inst_util.m"
            {
#line 1411 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1405 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1405 "inst_util.m"
              {
#line 1412 "inst_util.m"
                {
#line 1412 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1405 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1405 "inst_util.m"
                  {
#line 1405 "inst_util.m"
                    {
#line 1405 "inst_util.m"
                      MR_Word base;
#line 1405 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1405 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1405 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1405 "inst_util.m"
                    }
#line 1414 "inst_util.m"
                    {
#line 1414 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1414 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1405 "inst_util.m"
                  }
#line 1405 "inst_util.m"
              }
#line 1404 "inst_util.m"
          }
#line 1405 "inst_util.m"
      }
#line 1403 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1403 "inst_util.m"
  }
#line 1398 "inst_util.m"
}

#line 1387 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1387 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1387 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1387 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1387 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1387 "inst_util.m"
{
#line 1391 "inst_util.m"
  {
#line 1391 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1391 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1391 "inst_util.m"
      {
#line 1391 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1391 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1391 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1391 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1391 "inst_util.m"
      }
#line 1391 "inst_util.m"
    else
#line 1393 "inst_util.m"
      {
#line 1393 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1393 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1393 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1393 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1393 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1393 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1393 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1394 "inst_util.m"
        {
#line 1394 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1393 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1393 "inst_util.m"
          {
#line 1395 "inst_util.m"
            {
#line 1395 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1393 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1393 "inst_util.m"
              {
#line 1392 "inst_util.m"
                {
#line 1392 "inst_util.m"
                  MR_Word base;
#line 1392 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1392 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1392 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1392 "inst_util.m"
                }
#line 1396 "inst_util.m"
                {
#line 1396 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1396 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1393 "inst_util.m"
              }
#line 1393 "inst_util.m"
          }
#line 1393 "inst_util.m"
      }
#line 1391 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1391 "inst_util.m"
  }
#line 1387 "inst_util.m"
}

#line 1371 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1371 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1371 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1371 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1371 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1371 "inst_util.m"
{
#line 1376 "inst_util.m"
  {
#line 1376 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1376 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1376 "inst_util.m"
      {
#line 1376 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1376 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1376 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1376 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1376 "inst_util.m"
      }
#line 1376 "inst_util.m"
    else
#line 1378 "inst_util.m"
      {
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_20;
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_21;
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 0)));
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 1)));
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1378 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1380 "inst_util.m"
        {
#line 1380 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1378 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1378 "inst_util.m"
          {
#line 1382 "inst_util.m"
            {
#line 1382 "inst_util.m"
              check_hlds__inst_util__Bound_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1382 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1382 "inst_util.m"
            }
#line 1383 "inst_util.m"
            {
#line 1383 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__Bounds0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Bounds_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1378 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1378 "inst_util.m"
              {
#line 1378 "inst_util.m"
                {
#line 1378 "inst_util.m"
                  MR_Word base;
#line 1378 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1378 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_20));
#line 1378 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_21));
#line 1378 "inst_util.m"
                }
#line 1385 "inst_util.m"
                {
#line 1385 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1385 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1378 "inst_util.m"
              }
#line 1378 "inst_util.m"
          }
#line 1378 "inst_util.m"
      }
#line 1376 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1376 "inst_util.m"
  }
#line 1371 "inst_util.m"
}

#line 1264 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1264 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1264 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1264 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1264 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47)
#line 1264 "inst_util.m"
{
#line 1270 "inst_util.m"
  {
#line 1270 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1270 "inst_util.m"
#line 1270 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
#line 1270 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1270 "inst_util.m"
      case (MR_Integer) 0:
#line 1270 "inst_util.m"
#line 1270 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
#line 1270 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1270 "inst_util.m"
          case (MR_Integer) 0:
#line 1280 "inst_util.m"
            {
#line 1280 "inst_util.m"
              MR_Word check_hlds__inst_util__V_71_71;
#line 1280 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_73;

#line 1281 "inst_util.m"
              {
#line 1281 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_73);
              }
#line 1280 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1280 "inst_util.m"
                {
#line 1282 "inst_util.m"
                  check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1283 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1280 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1282 "inst_util.m"
                  {
#line 1282 "inst_util.m"
                    MR_Word base;
#line 1282 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1282 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_73));
#line 1282 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 1282 "inst_util.m"
                  }
#line 1282 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1280 "inst_util.m"
                }
#line 1280 "inst_util.m"
            }
#line 1270 "inst_util.m"
            break;
#line 1270 "inst_util.m"
          case (MR_Integer) 1:
#line 1270 "inst_util.m"
            {
#line 1271 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1272 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1270 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1270 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1270 "inst_util.m"
            }
#line 1270 "inst_util.m"
            break;
#line 1270 "inst_util.m"
        }
#line 1270 "inst_util.m"
        break;
#line 1270 "inst_util.m"
      case (MR_Integer) 1:
#line 1285 "inst_util.m"
        {
#line 1285 "inst_util.m"
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1285 "inst_util.m"
          MR_Word check_hlds__inst_util__Any_20;
#line 1285 "inst_util.m"
          MR_Word check_hlds__inst_util__V_65_65;
#line 1285 "inst_util.m"
          MR_Word check_hlds__inst_util__V_67_67;

#line 1290 "inst_util.m"
          {
#line 1290 "inst_util.m"
            check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_67_67, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "inst_util.m"
          }
#line 1290 "inst_util.m"
          {
#line 1290 "inst_util.m"
            check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 0) = ((MR_Box) (check_hlds__inst_util__Live_10));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 3) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1290 "inst_util.m"
          }
#line 1290 "inst_util.m"
          {
#line 1290 "inst_util.m"
            check_hlds__inst_util__Any_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 1) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1290 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 2) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 1290 "inst_util.m"
          }
#line 1291 "inst_util.m"
          {
#line 1291 "inst_util.m"
            MR_Word base;
#line 1291 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = base;
#line 1291 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1291 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Any_20));
#line 1291 "inst_util.m"
          }
#line 1292 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1285 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1285 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1285 "inst_util.m"
        }
#line 1270 "inst_util.m"
        break;
#line 1270 "inst_util.m"
      case (MR_Integer) 2:
#line 1274 "inst_util.m"
        {
#line 1274 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1274 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1274 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_18;

#line 1276 "inst_util.m"
          {
#line 1276 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
#line 1274 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1274 "inst_util.m"
            {
#line 1278 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1274 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1277 "inst_util.m"
              {
#line 1277 "inst_util.m"
                MR_Word base;
#line 1277 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1277 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1277 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1277 "inst_util.m"
              }
#line 1277 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1274 "inst_util.m"
            }
#line 1274 "inst_util.m"
        }
#line 1270 "inst_util.m"
        break;
#line 1270 "inst_util.m"
      case (MR_Integer) 3:
#line 1270 "inst_util.m"
#line 1270 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
#line 1270 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1270 "inst_util.m"
          case (MR_Integer) 0:
#line 1294 "inst_util.m"
            {
#line 1294 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1294 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_23;
#line 1294 "inst_util.m"
              MR_Word check_hlds__inst_util__Detism1_24;
#line 1294 "inst_util.m"
              MR_Word check_hlds__inst_util__V_63_63;
#line 1294 "inst_util.m"
              MR_Word check_hlds__inst_util__V_64_64;
#line 1294 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1294 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_75;
#line 1294 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResults0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));

#line 1296 "inst_util.m"
              {
#line 1296 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_74, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
#line 1294 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1294 "inst_util.m"
                {
#line 1297 "inst_util.m"
                  {
#line 1297 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_22, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_23, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                  }
#line 1294 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1294 "inst_util.m"
                    {
#line 1300 "inst_util.m"
                      check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1301 "inst_util.m"
                      check_hlds__inst_util__V_64_64 = (MR_Integer) 1;
#line 1300 "inst_util.m"
                      {
#line 1300 "inst_util.m"
                        MR_Word base;
#line 1300 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 1300 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1300 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1300 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 1300 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_23));
#line 1300 "inst_util.m"
                      }
#line 1301 "inst_util.m"
                      {
#line 1301 "inst_util.m"
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__V_64_64, check_hlds__inst_util__Detism_14);
                      }
#line 1301 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1294 "inst_util.m"
                    }
#line 1294 "inst_util.m"
                }
#line 1294 "inst_util.m"
            }
#line 1270 "inst_util.m"
            break;
#line 1270 "inst_util.m"
          case (MR_Integer) 1:
#line 1303 "inst_util.m"
            {
#line 1303 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1303 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1303 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_77;

#line 1305 "inst_util.m"
              {
#line 1305 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_76, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_77);
              }
#line 1303 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1303 "inst_util.m"
                {
#line 1307 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1303 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1306 "inst_util.m"
                  {
#line 1306 "inst_util.m"
                    MR_Word base;
#line 1306 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1306 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1306 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_77));
#line 1306 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_25));
#line 1306 "inst_util.m"
                  }
#line 1306 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1303 "inst_util.m"
                }
#line 1303 "inst_util.m"
            }
#line 1270 "inst_util.m"
            break;
#line 1270 "inst_util.m"
          case (MR_Integer) 2:
#line 1309 "inst_util.m"
            {
#line 1310 "inst_util.m"
              {
#line 1310 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_any_inst\'/8", (MR_String) "free inst var");
              }
#line 1309 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1309 "inst_util.m"
            }
#line 1270 "inst_util.m"
            break;
#line 1270 "inst_util.m"
          case (MR_Integer) 3:
#line 1312 "inst_util.m"
            {
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1312 "inst_util.m"
              MR_Word check_hlds__inst_util__V_54_54;

#line 1314 "inst_util.m"
              {
#line 1314 "inst_util.m"
                check_hlds__inst_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_54_54, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1314 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1314 "inst_util.m"
              }
#line 1313 "inst_util.m"
              {
#line 1313 "inst_util.m"
                return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_27, check_hlds__inst_util__SubInst0_28, check_hlds__inst_util__V_54_54, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
              }
#line 1312 "inst_util.m"
            }
#line 1270 "inst_util.m"
            break;
#line 1270 "inst_util.m"
          case (MR_Integer) 4:
#line 1320 "inst_util.m"
            {
#line 1320 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1320 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_32;
#line 1320 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstTable0_33;
#line 1320 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstInfo_34;
#line 1320 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstName_35;
#line 1320 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_36;
#line 1320 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstTable1_37;
#line 1320 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInst_39;

#line 1322 "inst_util.m"
              {
#line 1322 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__InstTable0_32);
              }
#line 1323 "inst_util.m"
              {
#line 1323 "inst_util.m"
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__AnyInstTable0_33);
              }
#line 1324 "inst_util.m"
              {
#line 1324 "inst_util.m"
                check_hlds__inst_util__AnyInstInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_34, 0) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1324 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_34, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1324 "inst_util.m"
              }
#line 1325 "inst_util.m"
              {
#line 1325 "inst_util.m"
                check_hlds__inst_util__AnyInstName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1325 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 1) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1325 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1325 "inst_util.m"
              }
#line 1326 "inst_util.m"
              {
#line 1326 "inst_util.m"
                hlds__hlds_data__search_insert_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_34, &check_hlds__inst_util__MaybeMaybeInst_36, check_hlds__inst_util__AnyInstTable0_33, &check_hlds__inst_util__AnyInstTable1_37);
              }
#line 1340 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1341 "inst_util.m"
                {
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_40;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_41;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_42;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__AnyInstTable2_43;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__AnyInstTable_44;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_45;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_50_50;
#line 1341 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_78;

#line 1344 "inst_util.m"
                  {
#line 1344 "inst_util.m"
                    hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable1_37, check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__InstTable1_40);
                  }
#line 1345 "inst_util.m"
                  {
#line 1345 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                  }
#line 1349 "inst_util.m"
                  {
#line 1349 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__InstName_31, &check_hlds__inst_util__SubInst0_78);
                  }
#line 1350 "inst_util.m"
                  {
#line 1350 "inst_util.m"
                    check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__SubInst0_78, &check_hlds__inst_util__SubInst1_41);
                  }
#line 1351 "inst_util.m"
                  {
#line 1351 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__SubInst1_41, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__AnyInst_39, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49);
                  }
#line 1341 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1341 "inst_util.m"
                    {
#line 1356 "inst_util.m"
                      {
#line 1356 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, &check_hlds__inst_util__InstTable2_42);
                      }
#line 1357 "inst_util.m"
                      {
#line 1357 "inst_util.m"
                        hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__AnyInstTable2_43);
                      }
#line 1358 "inst_util.m"
                      {
#line 1358 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_50_50, 0) = ((MR_Box) (check_hlds__inst_util__AnyInst_39));
#line 1358 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_50_50, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1358 "inst_util.m"
                      }
#line 1358 "inst_util.m"
                      {
#line 1358 "inst_util.m"
                        hlds__hlds_data__det_update_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_34, check_hlds__inst_util__V_50_50, check_hlds__inst_util__AnyInstTable2_43, &check_hlds__inst_util__AnyInstTable_44);
                      }
#line 1360 "inst_util.m"
                      {
#line 1360 "inst_util.m"
                        hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable_44, check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__InstTable_45);
                      }
#line 1361 "inst_util.m"
                      {
#line 1361 "inst_util.m"
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_45, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                      }
#line 1361 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1341 "inst_util.m"
                    }
#line 1341 "inst_util.m"
                }
#line 1340 "inst_util.m"
              else
#line 1329 "inst_util.m"
                {
#line 1329 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_36, (MR_Integer) 0)));

#line 1332 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1333 "inst_util.m"
                    {
#line 1334 "inst_util.m"
                      {
#line 1334 "inst_util.m"
                        check_hlds__inst_util__AnyInst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1334 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_39, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_35));
#line 1334 "inst_util.m"
                      }
#line 1335 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1333 "inst_util.m"
                    }
#line 1332 "inst_util.m"
                  else
#line 1331 "inst_util.m"
                    {
#line 1331 "inst_util.m"
                      check_hlds__inst_util__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_38, (MR_Integer) 0)));
#line 1331 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_38, (MR_Integer) 1)));
#line 1331 "inst_util.m"
                    }
#line 1329 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1329 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1329 "inst_util.m"
                }
#line 1320 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1320 "inst_util.m"
                {
#line 1364 "inst_util.m"
                  {
#line 1364 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__AnyInst_39, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47, check_hlds__inst_util__AnyInstName_35);
                  }
#line 1366 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1365 "inst_util.m"
                    {
#line 1365 "inst_util.m"
                      MR_Word base;
#line 1365 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 1365 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1365 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_35));
#line 1365 "inst_util.m"
                    }
#line 1366 "inst_util.m"
                  else
#line 1367 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__AnyInst_39;
#line 1366 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1320 "inst_util.m"
                }
#line 1320 "inst_util.m"
            }
#line 1270 "inst_util.m"
            break;
#line 1270 "inst_util.m"
          case (MR_Integer) 5:
#line 1316 "inst_util.m"
            {
#line 1317 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_util_scalar_common_1[2]);
#line 1318 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1316 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1316 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1316 "inst_util.m"
            }
#line 1270 "inst_util.m"
            break;
#line 1270 "inst_util.m"
        }
#line 1270 "inst_util.m"
        break;
#line 1270 "inst_util.m"
    }
#line 1270 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1270 "inst_util.m"
  }
#line 1264 "inst_util.m"
}

#line 1243 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1243 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1243 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1243 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1243 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1243 "inst_util.m"
{
#line 1248 "inst_util.m"
  {
#line 1248 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1248 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "inst_util.m"
      {
#line 1248 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1248 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1248 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1248 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1248 "inst_util.m"
      }
#line 1248 "inst_util.m"
    else
#line 1250 "inst_util.m"
      {
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst_20;
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_21;
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 0)));
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 1)));
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1250 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1252 "inst_util.m"
        {
#line 1252 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1250 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1250 "inst_util.m"
          {
#line 1254 "inst_util.m"
            {
#line 1254 "inst_util.m"
              check_hlds__inst_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1254 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1254 "inst_util.m"
            }
#line 1255 "inst_util.m"
            {
#line 1255 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInsts_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1250 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1250 "inst_util.m"
              {
#line 1250 "inst_util.m"
                {
#line 1250 "inst_util.m"
                  MR_Word base;
#line 1250 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1250 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_20));
#line 1250 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInsts_21));
#line 1250 "inst_util.m"
                }
#line 1257 "inst_util.m"
                {
#line 1257 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1257 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1250 "inst_util.m"
              }
#line 1250 "inst_util.m"
          }
#line 1250 "inst_util.m"
      }
#line 1248 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1248 "inst_util.m"
  }
#line 1243 "inst_util.m"
}

#line 1140 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1140 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1140 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1140 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1140 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45)
#line 1140 "inst_util.m"
{
#line 1146 "inst_util.m"
  {
#line 1146 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1146 "inst_util.m"
#line 1146 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
#line 1146 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "inst_util.m"
      case (MR_Integer) 0:
#line 1146 "inst_util.m"
#line 1146 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
#line 1146 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "inst_util.m"
          case (MR_Integer) 0:
#line 1155 "inst_util.m"
            {
#line 1155 "inst_util.m"
              MR_Word check_hlds__inst_util__V_67_67;
#line 1155 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_69;

#line 1156 "inst_util.m"
              {
#line 1156 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_69);
              }
#line 1155 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1155 "inst_util.m"
                {
#line 1157 "inst_util.m"
                  check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1158 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1155 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1157 "inst_util.m"
                  {
#line 1157 "inst_util.m"
                    MR_Word base;
#line 1157 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1157 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1157 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1157 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1157 "inst_util.m"
                  }
#line 1157 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1155 "inst_util.m"
                }
#line 1155 "inst_util.m"
            }
#line 1146 "inst_util.m"
            break;
#line 1146 "inst_util.m"
          case (MR_Integer) 1:
#line 1146 "inst_util.m"
            {
#line 1147 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1148 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1146 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1146 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1146 "inst_util.m"
            }
#line 1146 "inst_util.m"
            break;
#line 1146 "inst_util.m"
        }
#line 1146 "inst_util.m"
        break;
#line 1146 "inst_util.m"
      case (MR_Integer) 1:
#line 1160 "inst_util.m"
        {
#line 1160 "inst_util.m"
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1160 "inst_util.m"
          MR_Word check_hlds__inst_util__V_64_64;
#line 1160 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_70;

#line 1161 "inst_util.m"
          {
#line 1161 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_70);
          }
#line 1160 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1160 "inst_util.m"
            {
#line 1163 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1160 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1162 "inst_util.m"
              {
#line 1162 "inst_util.m"
                check_hlds__inst_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1162 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_70));
#line 1162 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 2) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1162 "inst_util.m"
              }
#line 1162 "inst_util.m"
              {
#line 1162 "inst_util.m"
                MR_Word base;
#line 1162 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1162 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1162 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 1162 "inst_util.m"
              }
#line 1162 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1160 "inst_util.m"
            }
#line 1160 "inst_util.m"
        }
#line 1146 "inst_util.m"
        break;
#line 1146 "inst_util.m"
      case (MR_Integer) 2:
#line 1150 "inst_util.m"
        {
#line 1150 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1150 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1150 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_18;

#line 1151 "inst_util.m"
          {
#line 1151 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
#line 1150 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1150 "inst_util.m"
            {
#line 1153 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1150 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1152 "inst_util.m"
              {
#line 1152 "inst_util.m"
                MR_Word base;
#line 1152 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1152 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1152 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1152 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1152 "inst_util.m"
              }
#line 1152 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1150 "inst_util.m"
            }
#line 1150 "inst_util.m"
        }
#line 1146 "inst_util.m"
        break;
#line 1146 "inst_util.m"
      case (MR_Integer) 3:
#line 1146 "inst_util.m"
#line 1146 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
#line 1146 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "inst_util.m"
          case (MR_Integer) 0:
#line 1165 "inst_util.m"
            {
#line 1165 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1165 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1165 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_22;
#line 1165 "inst_util.m"
              MR_Word check_hlds__inst_util__Detism1_23;
#line 1165 "inst_util.m"
              MR_Word check_hlds__inst_util__V_61_61;
#line 1165 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1165 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_72;

#line 1166 "inst_util.m"
              {
#line 1166 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_71, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_72);
              }
#line 1165 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1165 "inst_util.m"
                {
#line 1167 "inst_util.m"
                  {
#line 1167 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_21, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_22, &check_hlds__inst_util__Detism1_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                  }
#line 1165 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1165 "inst_util.m"
                    {
#line 1170 "inst_util.m"
                      check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 1169 "inst_util.m"
                      {
#line 1169 "inst_util.m"
                        MR_Word base;
#line 1169 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 1169 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1169 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_72));
#line 1169 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_20));
#line 1169 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_22));
#line 1169 "inst_util.m"
                      }
#line 1170 "inst_util.m"
                      {
#line 1170 "inst_util.m"
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_23, check_hlds__inst_util__V_61_61, check_hlds__inst_util__Detism_14);
                      }
#line 1170 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1165 "inst_util.m"
                    }
#line 1165 "inst_util.m"
                }
#line 1165 "inst_util.m"
            }
#line 1146 "inst_util.m"
            break;
#line 1146 "inst_util.m"
          case (MR_Integer) 1:
#line 1172 "inst_util.m"
            {
#line 1172 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1172 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1172 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_75;

#line 1173 "inst_util.m"
              {
#line 1173 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_73, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
#line 1172 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1172 "inst_util.m"
                {
#line 1175 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1172 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1174 "inst_util.m"
                  {
#line 1174 "inst_util.m"
                    MR_Word base;
#line 1174 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1174 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1174 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1174 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_74));
#line 1174 "inst_util.m"
                  }
#line 1174 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1172 "inst_util.m"
                }
#line 1172 "inst_util.m"
            }
#line 1146 "inst_util.m"
            break;
#line 1146 "inst_util.m"
          case (MR_Integer) 2:
#line 1177 "inst_util.m"
            {
#line 1178 "inst_util.m"
              {
#line 1178 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_ground_inst\'/8", (MR_String) "free inst var");
              }
#line 1177 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1177 "inst_util.m"
            }
#line 1146 "inst_util.m"
            break;
#line 1146 "inst_util.m"
          case (MR_Integer) 3:
#line 1180 "inst_util.m"
            {
#line 1180 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1180 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1180 "inst_util.m"
              MR_Word check_hlds__inst_util__V_52_52;

#line 1182 "inst_util.m"
              {
#line 1182 "inst_util.m"
                check_hlds__inst_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1182 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 1) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1182 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1182 "inst_util.m"
              }
#line 1181 "inst_util.m"
              {
#line 1181 "inst_util.m"
                return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_25, check_hlds__inst_util__SubInst0_26, check_hlds__inst_util__V_52_52, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
              }
#line 1180 "inst_util.m"
            }
#line 1146 "inst_util.m"
            break;
#line 1146 "inst_util.m"
          case (MR_Integer) 4:
#line 1188 "inst_util.m"
            {
#line 1188 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1188 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_30;
#line 1188 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstTable0_31;
#line 1188 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstInfo_32;
#line 1188 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstName_33;
#line 1188 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_34;
#line 1188 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstTable1_35;
#line 1188 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInst_37;

#line 1190 "inst_util.m"
              {
#line 1190 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__InstTable0_30);
              }
#line 1191 "inst_util.m"
              {
#line 1191 "inst_util.m"
                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__GroundInstTable0_31);
              }
#line 1192 "inst_util.m"
              {
#line 1192 "inst_util.m"
                check_hlds__inst_util__GroundInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 0) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1192 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1192 "inst_util.m"
              }
#line 1193 "inst_util.m"
              {
#line 1193 "inst_util.m"
                check_hlds__inst_util__GroundInstName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1193 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 1) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1193 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1193 "inst_util.m"
              }
#line 1194 "inst_util.m"
              {
#line 1194 "inst_util.m"
                hlds__hlds_data__search_insert_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, &check_hlds__inst_util__MaybeMaybeInst_34, check_hlds__inst_util__GroundInstTable0_31, &check_hlds__inst_util__GroundInstTable1_35);
              }
#line 1208 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "inst_util.m"
                {
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_38;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_39;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_40;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__GroundInstTable2_41;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__GroundInstTable_42;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_43;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_48_48;
#line 1209 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_76;

#line 1212 "inst_util.m"
                  {
#line 1212 "inst_util.m"
                    hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable1_35, check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__InstTable1_38);
                  }
#line 1214 "inst_util.m"
                  {
#line 1214 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46);
                  }
#line 1218 "inst_util.m"
                  {
#line 1218 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__InstName_29, &check_hlds__inst_util__SubInst0_76);
                  }
#line 1219 "inst_util.m"
                  {
#line 1219 "inst_util.m"
                    check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__SubInst0_76, &check_hlds__inst_util__SubInst1_39);
                  }
#line 1220 "inst_util.m"
                  {
#line 1220 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__SubInst1_39, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__GroundInst_37, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47);
                  }
#line 1209 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1209 "inst_util.m"
                    {
#line 1226 "inst_util.m"
                      {
#line 1226 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, &check_hlds__inst_util__InstTable2_40);
                      }
#line 1227 "inst_util.m"
                      {
#line 1227 "inst_util.m"
                        hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__GroundInstTable2_41);
                      }
#line 1229 "inst_util.m"
                      {
#line 1229 "inst_util.m"
                        check_hlds__inst_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__GroundInst_37));
#line 1229 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1229 "inst_util.m"
                      }
#line 1228 "inst_util.m"
                      {
#line 1228 "inst_util.m"
                        hlds__hlds_data__det_update_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, check_hlds__inst_util__V_48_48, check_hlds__inst_util__GroundInstTable2_41, &check_hlds__inst_util__GroundInstTable_42);
                      }
#line 1231 "inst_util.m"
                      {
#line 1231 "inst_util.m"
                        hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable_42, check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__InstTable_43);
                      }
#line 1233 "inst_util.m"
                      {
#line 1233 "inst_util.m"
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_43, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                      }
#line 1233 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1209 "inst_util.m"
                    }
#line 1209 "inst_util.m"
                }
#line 1208 "inst_util.m"
              else
#line 1197 "inst_util.m"
                {
#line 1197 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_34, (MR_Integer) 0)));

#line 1200 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "inst_util.m"
                    {
#line 1202 "inst_util.m"
                      {
#line 1202 "inst_util.m"
                        check_hlds__inst_util__GroundInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1202 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1202 "inst_util.m"
                      }
#line 1203 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1201 "inst_util.m"
                    }
#line 1200 "inst_util.m"
                  else
#line 1199 "inst_util.m"
                    {
#line 1199 "inst_util.m"
                      check_hlds__inst_util__GroundInst_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 0)));
#line 1199 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 1)));
#line 1199 "inst_util.m"
                    }
#line 1197 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1197 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1197 "inst_util.m"
                }
#line 1188 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1188 "inst_util.m"
                {
#line 1236 "inst_util.m"
                  {
#line 1236 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__GroundInst_37, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45, check_hlds__inst_util__GroundInstName_33);
                  }
#line 1238 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1237 "inst_util.m"
                    {
#line 1237 "inst_util.m"
                      MR_Word base;
#line 1237 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 1237 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1237 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1237 "inst_util.m"
                    }
#line 1238 "inst_util.m"
                  else
#line 1239 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__GroundInst_37;
#line 1238 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1188 "inst_util.m"
                }
#line 1188 "inst_util.m"
            }
#line 1146 "inst_util.m"
            break;
#line 1146 "inst_util.m"
          case (MR_Integer) 5:
#line 1184 "inst_util.m"
            {
#line 1185 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__inst_util_scalar_common_3[0]);
#line 1186 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1184 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1184 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1184 "inst_util.m"
            }
#line 1146 "inst_util.m"
            break;
#line 1146 "inst_util.m"
        }
#line 1146 "inst_util.m"
        break;
#line 1146 "inst_util.m"
    }
#line 1146 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1146 "inst_util.m"
  }
#line 1140 "inst_util.m"
}

#line 1125 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1125 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1125 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1125 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1125 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1125 "inst_util.m"
{
#line 1129 "inst_util.m"
  {
#line 1129 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1129 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1129 "inst_util.m"
      {
#line 1129 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1129 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1129 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1129 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1129 "inst_util.m"
      }
#line 1129 "inst_util.m"
    else
#line 1131 "inst_util.m"
      {
#line 1131 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1131 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1131 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1131 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1131 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1131 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1131 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1132 "inst_util.m"
        {
#line 1132 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1131 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1131 "inst_util.m"
          {
#line 1133 "inst_util.m"
            {
#line 1133 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1131 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1131 "inst_util.m"
              {
#line 1130 "inst_util.m"
                {
#line 1130 "inst_util.m"
                  MR_Word base;
#line 1130 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1130 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1130 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1130 "inst_util.m"
                }
#line 1135 "inst_util.m"
                {
#line 1135 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1135 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1131 "inst_util.m"
              }
#line 1131 "inst_util.m"
          }
#line 1131 "inst_util.m"
      }
#line 1129 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1129 "inst_util.m"
  }
#line 1125 "inst_util.m"
}

#line 1106 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1106 "inst_util.m"
{
#line 1111 "inst_util.m"
  {
#line 1111 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1111 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1111 "inst_util.m"
      {
#line 1111 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1111 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1111 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1111 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1111 "inst_util.m"
      }
#line 1111 "inst_util.m"
    else
#line 1113 "inst_util.m"
      {
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1113 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1112 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1112 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1112 "inst_util.m"
          {
#line 1112 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1112 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1114 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1114 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1114 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1116 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1115 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1116 "inst_util.m"
            else
#line 1117 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1119 "inst_util.m"
            {
#line 1119 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1113 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1113 "inst_util.m"
              {
#line 1121 "inst_util.m"
                {
#line 1121 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1113 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1113 "inst_util.m"
                  {
#line 1113 "inst_util.m"
                    {
#line 1113 "inst_util.m"
                      MR_Word base;
#line 1113 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1113 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1113 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1113 "inst_util.m"
                    }
#line 1123 "inst_util.m"
                    {
#line 1123 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1123 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
                  }
#line 1113 "inst_util.m"
              }
#line 1112 "inst_util.m"
          }
#line 1113 "inst_util.m"
      }
#line 1111 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1111 "inst_util.m"
  }
#line 1106 "inst_util.m"
}

#line 989 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 989 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 989 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12)
#line 989 "inst_util.m"
{
#line 1012 "inst_util.m"
  {
#line 1012 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1012 "inst_util.m"
#line 1012 "inst_util.m"
    switch (check_hlds__inst_util__UniqA_10) {
#line 1012 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1012 "inst_util.m"
      case (MR_Integer) 3:
#line 1083 "inst_util.m"
        {
#line 1099 "inst_util.m"
#line 1099 "inst_util.m"
          switch (check_hlds__inst_util__Live_7) {
#line 1099 "inst_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1099 "inst_util.m"
            case (MR_Integer) 1:
#line 1099 "inst_util.m"
              {
#line 1101 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1099 "inst_util.m"
                if (!(check_hlds__inst_util__succeeded))
#line 1102 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1099 "inst_util.m"
              }
#line 1099 "inst_util.m"
              break;
#line 1099 "inst_util.m"
            case (MR_Integer) 0:
#line 1099 "inst_util.m"
              {
#line 1100 "inst_util.m"
                {
#line 1100 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
#line 1099 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1099 "inst_util.m"
              }
#line 1099 "inst_util.m"
              break;
#line 1099 "inst_util.m"
          }
#line 1083 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1083 "inst_util.m"
            {
#line 1085 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1085 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1083 "inst_util.m"
            }
#line 1083 "inst_util.m"
        }
#line 1012 "inst_util.m"
        break;
#line 1012 "inst_util.m"
      case (MR_Integer) 4:
#line 1087 "inst_util.m"
        {
#line 1099 "inst_util.m"
#line 1099 "inst_util.m"
          switch (check_hlds__inst_util__Live_7) {
#line 1099 "inst_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1099 "inst_util.m"
            case (MR_Integer) 1:
#line 1099 "inst_util.m"
              {
#line 1101 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1099 "inst_util.m"
                if (!(check_hlds__inst_util__succeeded))
#line 1102 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1099 "inst_util.m"
              }
#line 1099 "inst_util.m"
              break;
#line 1099 "inst_util.m"
            case (MR_Integer) 0:
#line 1099 "inst_util.m"
              {
#line 1100 "inst_util.m"
                {
#line 1100 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
#line 1099 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1099 "inst_util.m"
              }
#line 1099 "inst_util.m"
              break;
#line 1099 "inst_util.m"
          }
#line 1087 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1087 "inst_util.m"
            {
#line 1089 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__UniqB_11 == (MR_Integer) 3);
#line 1091 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1090 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1091 "inst_util.m"
              else
#line 1092 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1091 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1087 "inst_util.m"
            }
#line 1087 "inst_util.m"
        }
#line 1012 "inst_util.m"
        break;
#line 1012 "inst_util.m"
      case (MR_Integer) 2:
#line 1053 "inst_util.m"
#line 1053 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1053 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "inst_util.m"
          case (MR_Integer) 3:
#line 1074 "inst_util.m"
            {
#line 1099 "inst_util.m"
#line 1099 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1099 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1099 "inst_util.m"
                case (MR_Integer) 1:
#line 1099 "inst_util.m"
                  {
#line 1101 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1099 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1102 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
                case (MR_Integer) 0:
#line 1099 "inst_util.m"
                  {
#line 1100 "inst_util.m"
                    {
#line 1100 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1099 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
              }
#line 1074 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1074 "inst_util.m"
                {
#line 1076 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1076 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1074 "inst_util.m"
                }
#line 1074 "inst_util.m"
            }
#line 1053 "inst_util.m"
            break;
#line 1053 "inst_util.m"
          case (MR_Integer) 4:
#line 1078 "inst_util.m"
            {
#line 1099 "inst_util.m"
#line 1099 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1099 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1099 "inst_util.m"
                case (MR_Integer) 1:
#line 1099 "inst_util.m"
                  {
#line 1101 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1099 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1102 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
                case (MR_Integer) 0:
#line 1099 "inst_util.m"
                  {
#line 1100 "inst_util.m"
                    {
#line 1100 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1099 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
              }
#line 1078 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1078 "inst_util.m"
                {
#line 1080 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1080 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1078 "inst_util.m"
                }
#line 1078 "inst_util.m"
            }
#line 1053 "inst_util.m"
            break;
#line 1053 "inst_util.m"
          case (MR_Integer) 2:
#line 1069 "inst_util.m"
            {
#line 1069 "inst_util.m"
#line 1069 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1069 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1069 "inst_util.m"
                case (MR_Integer) 1:
#line 1071 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1069 "inst_util.m"
                  break;
#line 1069 "inst_util.m"
                case (MR_Integer) 0:
#line 1068 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1069 "inst_util.m"
                  break;
#line 1069 "inst_util.m"
              }
#line 1069 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1069 "inst_util.m"
            }
#line 1053 "inst_util.m"
            break;
#line 1053 "inst_util.m"
          case (MR_Integer) 0:
#line 1052 "inst_util.m"
            {
#line 1052 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1052 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1052 "inst_util.m"
            }
#line 1053 "inst_util.m"
            break;
#line 1053 "inst_util.m"
          case (MR_Integer) 1:
#line 1058 "inst_util.m"
            {
#line 1058 "inst_util.m"
#line 1058 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1058 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1058 "inst_util.m"
                case (MR_Integer) 1:
#line 1062 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1058 "inst_util.m"
                  break;
#line 1058 "inst_util.m"
                case (MR_Integer) 0:
#line 1057 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1058 "inst_util.m"
                  break;
#line 1058 "inst_util.m"
              }
#line 1058 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1058 "inst_util.m"
            }
#line 1053 "inst_util.m"
            break;
#line 1053 "inst_util.m"
        }
#line 1012 "inst_util.m"
        break;
#line 1012 "inst_util.m"
      case (MR_Integer) 0:
#line 1003 "inst_util.m"
#line 1003 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1003 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1003 "inst_util.m"
          case (MR_Integer) 3:
#line 1004 "inst_util.m"
            {
#line 1099 "inst_util.m"
#line 1099 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1099 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1099 "inst_util.m"
                case (MR_Integer) 1:
#line 1099 "inst_util.m"
                  {
#line 1101 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1099 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1102 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
                case (MR_Integer) 0:
#line 1099 "inst_util.m"
                  {
#line 1100 "inst_util.m"
                    {
#line 1100 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1099 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
              }
#line 1004 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1004 "inst_util.m"
                {
#line 1006 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1006 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1004 "inst_util.m"
                }
#line 1004 "inst_util.m"
            }
#line 1003 "inst_util.m"
            break;
#line 1003 "inst_util.m"
          case (MR_Integer) 4:
#line 1008 "inst_util.m"
            {
#line 1099 "inst_util.m"
#line 1099 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1099 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1099 "inst_util.m"
                case (MR_Integer) 1:
#line 1099 "inst_util.m"
                  {
#line 1101 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1099 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1102 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
                case (MR_Integer) 0:
#line 1099 "inst_util.m"
                  {
#line 1100 "inst_util.m"
                    {
#line 1100 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1099 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
              }
#line 1008 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1008 "inst_util.m"
                {
#line 1010 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1010 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1008 "inst_util.m"
                }
#line 1008 "inst_util.m"
            }
#line 1003 "inst_util.m"
            break;
#line 1003 "inst_util.m"
          case (MR_Integer) 2:
#line 1003 "inst_util.m"
          case (MR_Integer) 0:
#line 1003 "inst_util.m"
          case (MR_Integer) 1:
#line 1002 "inst_util.m"
            {
#line 1002 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1002 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1002 "inst_util.m"
            }
#line 1003 "inst_util.m"
            break;
#line 1003 "inst_util.m"
        }
#line 1012 "inst_util.m"
        break;
#line 1012 "inst_util.m"
      case (MR_Integer) 1:
#line 1018 "inst_util.m"
#line 1018 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1018 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1018 "inst_util.m"
          case (MR_Integer) 3:
#line 1039 "inst_util.m"
            {
#line 1099 "inst_util.m"
#line 1099 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1099 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1099 "inst_util.m"
                case (MR_Integer) 1:
#line 1099 "inst_util.m"
                  {
#line 1101 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1099 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1102 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
                case (MR_Integer) 0:
#line 1099 "inst_util.m"
                  {
#line 1100 "inst_util.m"
                    {
#line 1100 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1099 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
              }
#line 1039 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1039 "inst_util.m"
                {
#line 1041 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1041 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1039 "inst_util.m"
                }
#line 1039 "inst_util.m"
            }
#line 1018 "inst_util.m"
            break;
#line 1018 "inst_util.m"
          case (MR_Integer) 4:
#line 1043 "inst_util.m"
            {
#line 1099 "inst_util.m"
#line 1099 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1099 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1099 "inst_util.m"
                case (MR_Integer) 1:
#line 1099 "inst_util.m"
                  {
#line 1101 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1099 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1102 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
                case (MR_Integer) 0:
#line 1099 "inst_util.m"
                  {
#line 1100 "inst_util.m"
                    {
#line 1100 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1099 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1099 "inst_util.m"
                  }
#line 1099 "inst_util.m"
                  break;
#line 1099 "inst_util.m"
              }
#line 1043 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1043 "inst_util.m"
                {
#line 1045 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1045 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1043 "inst_util.m"
                }
#line 1043 "inst_util.m"
            }
#line 1018 "inst_util.m"
            break;
#line 1018 "inst_util.m"
          case (MR_Integer) 2:
#line 1032 "inst_util.m"
            {
#line 1032 "inst_util.m"
#line 1032 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1032 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1032 "inst_util.m"
                case (MR_Integer) 1:
#line 1036 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1032 "inst_util.m"
                  break;
#line 1032 "inst_util.m"
                case (MR_Integer) 0:
#line 1031 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1032 "inst_util.m"
                  break;
#line 1032 "inst_util.m"
              }
#line 1032 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1032 "inst_util.m"
            }
#line 1018 "inst_util.m"
            break;
#line 1018 "inst_util.m"
          case (MR_Integer) 0:
#line 1017 "inst_util.m"
            {
#line 1017 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1017 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1017 "inst_util.m"
            }
#line 1018 "inst_util.m"
            break;
#line 1018 "inst_util.m"
          case (MR_Integer) 1:
#line 1023 "inst_util.m"
            {
#line 1023 "inst_util.m"
#line 1023 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1023 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1023 "inst_util.m"
                case (MR_Integer) 1:
#line 1025 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 1;
#line 1023 "inst_util.m"
                  break;
#line 1023 "inst_util.m"
                case (MR_Integer) 0:
#line 1022 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1023 "inst_util.m"
                  break;
#line 1023 "inst_util.m"
              }
#line 1023 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1023 "inst_util.m"
            }
#line 1018 "inst_util.m"
            break;
#line 1018 "inst_util.m"
        }
#line 1012 "inst_util.m"
        break;
#line 1012 "inst_util.m"
    }
#line 1012 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1012 "inst_util.m"
  }
#line 989 "inst_util.m"
}

#line 942 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 942 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 942 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 942 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 942 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22)
#line 942 "inst_util.m"
{
#line 947 "inst_util.m"
  {
#line 947 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 947 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;

#line 948 "inst_util.m"
    {
#line 948 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__SubInstA_12, check_hlds__inst_util__InstB_13, check_hlds__inst_util__Real_14, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
    }
#line 947 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 947 "inst_util.m"
      {
#line 950 "inst_util.m"
        {
#line 950 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_18, check_hlds__inst_util__SubInstA_12, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
        }
#line 950 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 954 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 953 "inst_util.m"
          *check_hlds__inst_util__Inst_15 = check_hlds__inst_util__Inst0_18;
#line 954 "inst_util.m"
        else
#line 957 "inst_util.m"
          {
#line 957 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVars0_19;
#line 957 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_20;

#line 954 "inst_util.m"
            check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 954 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 954 "inst_util.m"
              {
#line 954 "inst_util.m"
                check_hlds__inst_util__InstVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 1)));
#line 954 "inst_util.m"
                check_hlds__inst_util__SubInst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 2)));
#line 956 "inst_util.m"
                {
#line 956 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_24_24;

#line 956 "inst_util.m"
                  {
#line 956 "inst_util.m"
                    check_hlds__inst_util__V_24_24 = mercury__set__union_2_f_0((MR_Word) &check_hlds__inst_util_scalar_common_1[0], check_hlds__inst_util__InstVars0_19, check_hlds__inst_util__InstVarsA_11);
                  }
#line 956 "inst_util.m"
                  {
#line 956 "inst_util.m"
                    MR_Word base;
#line 956 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 956 "inst_util.m"
                    *check_hlds__inst_util__Inst_15 = base;
#line 956 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 956 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_24_24));
#line 956 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst0_20));
#line 956 "inst_util.m"
                  }
#line 956 "inst_util.m"
                }
#line 954 "inst_util.m"
              }
#line 954 "inst_util.m"
            else
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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVarsA_11));
#line 959 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_18));
#line 959 "inst_util.m"
              }
#line 957 "inst_util.m"
          }
#line 954 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 947 "inst_util.m"
      }
#line 947 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 947 "inst_util.m"
  }
#line 942 "inst_util.m"
}

#line 926 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 926 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 926 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 926 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 926 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 926 "inst_util.m"
{
#line 931 "inst_util.m"
  {
#line 931 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 931 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "inst_util.m"
      {
#line 931 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 931 "inst_util.m"
          {
#line 931 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 931 "inst_util.m"
              {
#line 931 "inst_util.m"
                *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 931 "inst_util.m"
                *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 931 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 931 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 931 "inst_util.m"
              }
#line 931 "inst_util.m"
          }
#line 931 "inst_util.m"
      }
#line 931 "inst_util.m"
    else
#line 933 "inst_util.m"
      {
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_15;
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_16;
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__Live_17;
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__Lives_18;
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 933 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 932 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 932 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 932 "inst_util.m"
          {
#line 932 "inst_util.m"
            check_hlds__inst_util__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 932 "inst_util.m"
            check_hlds__inst_util__InstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 933 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 933 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 933 "inst_util.m"
              {
#line 933 "inst_util.m"
                check_hlds__inst_util__Live_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 933 "inst_util.m"
                check_hlds__inst_util__Lives_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 934 "inst_util.m"
                {
#line 934 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_17, check_hlds__inst_util__InstA_13, check_hlds__inst_util__InstB_15, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
                }
#line 933 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 933 "inst_util.m"
                  {
#line 936 "inst_util.m"
                    {
#line 936 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__InstsA_14, check_hlds__inst_util__InstsB_16, check_hlds__inst_util__Lives_18, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 933 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 933 "inst_util.m"
                      {
#line 933 "inst_util.m"
                        {
#line 933 "inst_util.m"
                          MR_Word base;
#line 933 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = base;
#line 933 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 933 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 933 "inst_util.m"
                        }
#line 938 "inst_util.m"
                        {
#line 938 "inst_util.m"
                          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 938 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 933 "inst_util.m"
                      }
#line 933 "inst_util.m"
                  }
#line 933 "inst_util.m"
              }
#line 932 "inst_util.m"
          }
#line 933 "inst_util.m"
      }
#line 931 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 931 "inst_util.m"
  }
#line 926 "inst_util.m"
}

#line 907 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 907 "inst_util.m"
{
#line 912 "inst_util.m"
  while (MR_TRUE)
#line 912 "inst_util.m"
    {
#line 912 "inst_util.m"
      /* tailcall optimized into a loop */
#line 912 "inst_util.m"
      {
#line 912 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 912 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "inst_util.m"
          {
#line 912 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "inst_util.m"
            *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 7;
#line 913 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 912 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 912 "inst_util.m"
          }
#line 912 "inst_util.m"
        else
#line 915 "inst_util.m"
          {
#line 915 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 915 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 915 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 0)));
#line 915 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 1)));

#line 917 "inst_util.m"
            {
#line 917 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_26, check_hlds__inst_util__ConsIdB_2);
            }
#line 921 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 919 "inst_util.m"
              {
#line 919 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_28;
#line 919 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 919 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;

#line 918 "inst_util.m"
                {
#line 918 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__ArgsA_27, check_hlds__inst_util__ArgsB_3, check_hlds__inst_util__LivesB_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Args_28, check_hlds__inst_util__HeadVar__7_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 919 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 919 "inst_util.m"
                  {
#line 920 "inst_util.m"
                    check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 920 "inst_util.m"
                    {
#line 920 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_26));
#line 920 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 1) = ((MR_Box) (check_hlds__inst_util__Args_28));
#line 920 "inst_util.m"
                    }
#line 920 "inst_util.m"
                    {
#line 920 "inst_util.m"
                      MR_Word base;
#line 920 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 920 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 920 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 920 "inst_util.m"
                    }
#line 920 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 919 "inst_util.m"
                  }
#line 919 "inst_util.m"
              }
#line 921 "inst_util.m"
            else
#line 922 "inst_util.m"
              {
#line 922 "inst_util.m"
                /* direct tailcall eliminated */
#line 922 "inst_util.m"
                {
#line 922 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInstsA_18;

#line 922 "inst_util.m"
                  check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 922 "inst_util.m"
                }
#line 922 "inst_util.m"
                continue;
#line 922 "inst_util.m"
              }
#line 915 "inst_util.m"
          }
#line 912 "inst_util.m"
        return check_hlds__inst_util__succeeded;
#line 912 "inst_util.m"
      }
#line 912 "inst_util.m"
      break;
#line 912 "inst_util.m"
    }
#line 907 "inst_util.m"
}

#line 864 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 864 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 864 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 864 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 864 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 864 "inst_util.m"
{
#line 869 "inst_util.m"
  {
#line 869 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 869 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 869 "inst_util.m"
      {
#line 869 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 869 "inst_util.m"
          {
#line 869 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 869 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 6;
#line 870 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 869 "inst_util.m"
          }
#line 869 "inst_util.m"
        else
#line 871 "inst_util.m"
          {
#line 871 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 872 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 871 "inst_util.m"
          }
#line 869 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 869 "inst_util.m"
      }
#line 869 "inst_util.m"
    else
#line 869 "inst_util.m"
      {
#line 869 "inst_util.m"
        MR_Word check_hlds__inst_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 869 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));

#line 869 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "inst_util.m"
          {
#line 873 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 874 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 873 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 873 "inst_util.m"
          }
#line 869 "inst_util.m"
        else
#line 877 "inst_util.m"
          {
#line 877 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 877 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 877 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 0)));
#line 877 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 1)));
#line 877 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 0)));
#line 877 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 1)));

#line 880 "inst_util.m"
            {
#line 880 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
            }
#line 894 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 882 "inst_util.m"
              {
#line 882 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_41;
#line 882 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_42;
#line 882 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_43;
#line 882 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism2_44;
#line 882 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 888 "inst_util.m"
                MR_Word check_hlds__inst_util__V_50_50;
#line 888 "inst_util.m"
                MR_Word check_hlds__inst_util__V_60_60;
#line 888 "inst_util.m"
                MR_Word check_hlds__inst_util__V_45_45;

#line 881 "inst_util.m"
                {
#line 881 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__ArgsA_38, check_hlds__inst_util__ArgsB_40, check_hlds__inst_util__Live_1, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Args_41, &check_hlds__inst_util__Detism1_42, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                }
#line 882 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 882 "inst_util.m"
                  {
#line 883 "inst_util.m"
                    {
#line 883 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInstsTail_43, &check_hlds__inst_util__Detism2_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 882 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 882 "inst_util.m"
                      {
#line 888 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Integer) 0;
#line 888 "inst_util.m"
                        {
#line 888 "inst_util.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism1_42, &check_hlds__inst_util__V_45_45, &check_hlds__inst_util__V_60_60);
                        }
#line 888 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_50_50 == check_hlds__inst_util__V_60_60);
#line 890 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 889 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = check_hlds__inst_util__BoundInstsTail_43;
#line 890 "inst_util.m"
                        else
#line 891 "inst_util.m"
                          {
#line 891 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_51_51;

#line 891 "inst_util.m"
                            {
#line 891 "inst_util.m"
                              check_hlds__inst_util__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_37));
#line 891 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 1) = ((MR_Box) (check_hlds__inst_util__Args_41));
#line 891 "inst_util.m"
                            }
#line 891 "inst_util.m"
                            {
#line 891 "inst_util.m"
                              MR_Word base;
#line 891 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "inst_util.m"
                              *check_hlds__inst_util__HeadVar__5_5 = base;
#line 891 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 891 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_43));
#line 891 "inst_util.m"
                            }
#line 891 "inst_util.m"
                          }
#line 893 "inst_util.m"
                        {
#line 893 "inst_util.m"
                          parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_42, check_hlds__inst_util__Detism2_44, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 893 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 882 "inst_util.m"
                      }
#line 882 "inst_util.m"
                  }
#line 882 "inst_util.m"
              }
#line 894 "inst_util.m"
            else
#line 903 "inst_util.m"
              {
#line 903 "inst_util.m"
                MR_Word check_hlds__inst_util__V_57_57;
#line 903 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_58;
#line 895 "inst_util.m"
                MR_Word check_hlds__inst_util__V_61_61;

#line 895 "inst_util.m"
                {
#line 895 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_61_61, check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
                }
#line 895 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_61_61);
#line 899 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 896 "inst_util.m"
                  {
#line 896 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__HeadVar__3_3, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 899 "inst_util.m"
                else
#line 900 "inst_util.m"
                  {
#line 900 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 903 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 903 "inst_util.m"
                  {
#line 904 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Integer) 7;
#line 904 "inst_util.m"
                    {
#line 904 "inst_util.m"
                      parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_58, check_hlds__inst_util__V_57_57, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 904 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 903 "inst_util.m"
                  }
#line 903 "inst_util.m"
              }
#line 877 "inst_util.m"
          }
#line 869 "inst_util.m"
      }
#line 869 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 869 "inst_util.m"
  }
#line 864 "inst_util.m"
}

#line 829 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 829 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 829 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 829 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 829 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
#line 829 "inst_util.m"
{
#line 844 "inst_util.m"
  {
#line 844 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 836 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 836 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 842 "inst_util.m"
      {
#line 842 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 842 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
#line 842 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 842 "inst_util.m"
      }
#line 844 "inst_util.m"
    else
#line 846 "inst_util.m"
      {
#line 846 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism0_16;
#line 853 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdA_17;
#line 853 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdB_19;
#line 853 "inst_util.m"
        MR_Word check_hlds__inst_util__V_26_26;
#line 853 "inst_util.m"
        MR_Word check_hlds__inst_util__V_27_27;
#line 853 "inst_util.m"
        MR_Word check_hlds__inst_util__V_28_28;
#line 853 "inst_util.m"
        MR_Word check_hlds__inst_util__V_29_29;
#line 853 "inst_util.m"
        MR_Word check_hlds__inst_util__V_18_18;
#line 854 "inst_util.m"
        MR_Word check_hlds__inst_util__V_20_20;

#line 845 "inst_util.m"
        {
#line 845 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_10, check_hlds__inst_util__BoundInstsB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__BoundInsts_13, &check_hlds__inst_util__Detism0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
        }
#line 846 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 846 "inst_util.m"
          {
#line 853 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_10)) == (MR_mktag((MR_Integer) 1)));
#line 853 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 853 "inst_util.m"
              {
#line 853 "inst_util.m"
                check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 0)));
#line 853 "inst_util.m"
                check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 1)));
#line 853 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 853 "inst_util.m"
                  {
#line 853 "inst_util.m"
                    check_hlds__inst_util__ConsIdA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 0)));
#line 853 "inst_util.m"
                    check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 1)));
#line 854 "inst_util.m"
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_11)) == (MR_mktag((MR_Integer) 1)));
#line 854 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 854 "inst_util.m"
                      {
#line 854 "inst_util.m"
                        check_hlds__inst_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 0)));
#line 854 "inst_util.m"
                        check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 1)));
#line 854 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 853 "inst_util.m"
                          {
#line 854 "inst_util.m"
                            check_hlds__inst_util__ConsIdB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 0)));
#line 854 "inst_util.m"
                            check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 1)));
#line 855 "inst_util.m"
                            {
#line 855 "inst_util.m"
                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_17, check_hlds__inst_util__ConsIdB_19);
                            }
#line 853 "inst_util.m"
                          }
#line 854 "inst_util.m"
                      }
#line 853 "inst_util.m"
                  }
#line 853 "inst_util.m"
              }
#line 858 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 857 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_16;
#line 858 "inst_util.m"
            else
#line 859 "inst_util.m"
              {
#line 859 "inst_util.m"
                MR_Word check_hlds__inst_util__MaxSoln_22;
#line 859 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;

#line 859 "inst_util.m"
                {
#line 859 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_16, &check_hlds__inst_util__V_21_21, &check_hlds__inst_util__MaxSoln_22);
                }
#line 860 "inst_util.m"
                {
#line 860 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_14, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_22);
                }
#line 859 "inst_util.m"
              }
#line 858 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 846 "inst_util.m"
          }
#line 846 "inst_util.m"
      }
#line 844 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 844 "inst_util.m"
  }
#line 829 "inst_util.m"
}

#line 704 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 704 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 704 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 704 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 704 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40)
#line 704 "inst_util.m"
{
#line 716 "inst_util.m"
  {
#line 716 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 716 "inst_util.m"
#line 716 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) {
#line 716 "inst_util.m"
      default:
#line 716 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 716 "inst_util.m"
        break;
#line 716 "inst_util.m"
      case (MR_Integer) 0:
#line 716 "inst_util.m"
#line 716 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_13)) {
#line 716 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 716 "inst_util.m"
          case (MR_Integer) 0:
#line 717 "inst_util.m"
            {
#line 717 "inst_util.m"
              MR_Word check_hlds__inst_util__ArgInsts_22;
#line 717 "inst_util.m"
              MR_Word check_hlds__inst_util__V_61_61;
#line 717 "inst_util.m"
              MR_Word check_hlds__inst_util__V_62_62;
#line 717 "inst_util.m"
              MR_Word check_hlds__inst_util__V_63_63;
#line 717 "inst_util.m"
              MR_Word check_hlds__inst_util__V_64_64;
#line 717 "inst_util.m"
              MR_Word check_hlds__inst_util__V_65_65;

#line 724 "inst_util.m"
#line 724 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 724 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 724 "inst_util.m"
                case (MR_Integer) 1:
#line 725 "inst_util.m"
                  {
#line 726 "inst_util.m"
                    check_hlds__inst_util__ArgInsts_22 = check_hlds__inst_util__ArgInstsB_15;
#line 725 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 725 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 725 "inst_util.m"
                  }
#line 724 "inst_util.m"
                  break;
#line 724 "inst_util.m"
                case (MR_Integer) 0:
#line 719 "inst_util.m"
                  {
#line 720 "inst_util.m"
                    {
#line 720 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39);
                    }
#line 719 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 719 "inst_util.m"
                      {
#line 722 "inst_util.m"
                        {
#line 722 "inst_util.m"
                          check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, &check_hlds__inst_util__ArgInsts_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                        }
#line 722 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 719 "inst_util.m"
                      }
#line 719 "inst_util.m"
                  }
#line 724 "inst_util.m"
                  break;
#line 724 "inst_util.m"
              }
#line 717 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 717 "inst_util.m"
                {
#line 729 "inst_util.m"
                  check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 729 "inst_util.m"
                  check_hlds__inst_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "inst_util.m"
                  check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "inst_util.m"
                  *check_hlds__inst_util__Detism_20 = (MR_Integer) 0;
#line 730 "inst_util.m"
                  {
#line 730 "inst_util.m"
                    check_hlds__inst_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 730 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 730 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_22));
#line 730 "inst_util.m"
                  }
#line 730 "inst_util.m"
                  {
#line 730 "inst_util.m"
                    check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 0) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 730 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 1) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 730 "inst_util.m"
                  }
#line 729 "inst_util.m"
                  {
#line 729 "inst_util.m"
                    MR_Word base;
#line 729 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 729 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 729 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 729 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_61_61));
#line 729 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_62_62));
#line 729 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 729 "inst_util.m"
                  }
#line 729 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 717 "inst_util.m"
                }
#line 717 "inst_util.m"
            }
#line 716 "inst_util.m"
            break;
#line 716 "inst_util.m"
          case (MR_Integer) 1:
#line 713 "inst_util.m"
            {
#line 714 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 715 "inst_util.m"
              *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 713 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 713 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 713 "inst_util.m"
            }
#line 716 "inst_util.m"
            break;
#line 716 "inst_util.m"
        }
#line 716 "inst_util.m"
        break;
#line 716 "inst_util.m"
      case (MR_Integer) 2:
#line 733 "inst_util.m"
        {
#line 733 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 0)));
#line 733 "inst_util.m"
          MR_Word check_hlds__inst_util__V_56_56;
#line 733 "inst_util.m"
          MR_Word check_hlds__inst_util__V_57_57;
#line 733 "inst_util.m"
          MR_Word check_hlds__inst_util__V_58_58;
#line 733 "inst_util.m"
          MR_Word check_hlds__inst_util__V_59_59;
#line 733 "inst_util.m"
          MR_Word check_hlds__inst_util__ArgInsts_66;
#line 733 "inst_util.m"
          MR_Word check_hlds__inst_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));

#line 736 "inst_util.m"
          {
#line 736 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__Type_18);
          }
#line 736 "inst_util.m"
          check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 733 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 733 "inst_util.m"
            {
#line 741 "inst_util.m"
#line 741 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 741 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 741 "inst_util.m"
                case (MR_Integer) 1:
#line 743 "inst_util.m"
                  {
#line 743 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 741 "inst_util.m"
                  break;
#line 741 "inst_util.m"
                case (MR_Integer) 0:
#line 739 "inst_util.m"
                  {
#line 739 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 741 "inst_util.m"
                  break;
#line 741 "inst_util.m"
              }
#line 733 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 733 "inst_util.m"
                {
#line 747 "inst_util.m"
                  check_hlds__inst_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "inst_util.m"
                  check_hlds__inst_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "inst_util.m"
                  {
#line 748 "inst_util.m"
                    check_hlds__inst_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 748 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_66));
#line 748 "inst_util.m"
                  }
#line 748 "inst_util.m"
                  {
#line 748 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 0) = ((MR_Box) (check_hlds__inst_util__V_58_58));
#line 748 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 1) = ((MR_Box) (check_hlds__inst_util__V_59_59));
#line 748 "inst_util.m"
                  }
#line 747 "inst_util.m"
                  {
#line 747 "inst_util.m"
                    MR_Word base;
#line 747 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 747 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 747 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 747 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_23));
#line 747 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_56_56));
#line 747 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 747 "inst_util.m"
                  }
#line 747 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 733 "inst_util.m"
                }
#line 733 "inst_util.m"
            }
#line 733 "inst_util.m"
        }
#line 716 "inst_util.m"
        break;
#line 716 "inst_util.m"
      case (MR_Integer) 3:
#line 716 "inst_util.m"
#line 716 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) {
#line 716 "inst_util.m"
          default:
#line 716 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 716 "inst_util.m"
            break;
#line 716 "inst_util.m"
          case (MR_Integer) 0:
#line 750 "inst_util.m"
            {
#line 750 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 750 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 3)));
#line 750 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_28;
#line 750 "inst_util.m"
              MR_Word check_hlds__inst_util__V_53_53;
#line 750 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResultsA_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 755 "inst_util.m"
#line 755 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 755 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 755 "inst_util.m"
                case (MR_Integer) 1:
#line 756 "inst_util.m"
                  {
#line 756 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_29;
#line 756 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_48_48;

#line 757 "inst_util.m"
                    {
#line 757 "inst_util.m"
                      check_hlds__inst_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 757 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 757 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (check_hlds__inst_util__ArgInstsB_15));
#line 757 "inst_util.m"
                    }
#line 757 "inst_util.m"
                    {
#line 757 "inst_util.m"
                      check_hlds__inst_util__BoundInstsB_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 0) = ((MR_Box) (check_hlds__inst_util__V_48_48));
#line 757 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "inst_util.m"
                    }
#line 836 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 842 "inst_util.m"
                      {
#line 842 "inst_util.m"
                        check_hlds__inst_util__BoundInsts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "inst_util.m"
                        *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 842 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 842 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 842 "inst_util.m"
                      }
#line 844 "inst_util.m"
                    else
#line 846 "inst_util.m"
                      {
#line 846 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism0_78;
#line 853 "inst_util.m"
                        MR_Word check_hlds__inst_util__ConsIdA_79;
#line 853 "inst_util.m"
                        MR_Word check_hlds__inst_util__ConsIdB_81;
#line 853 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_86_86;
#line 853 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_87_87;
#line 853 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_88_88;
#line 853 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_89_89;
#line 853 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_80_80;
#line 854 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_82_82;

#line 845 "inst_util.m"
                        {
#line 845 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0((MR_Integer) 1, check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__BoundInstsB_29, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, &check_hlds__inst_util__Detism0_78, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                        }
#line 846 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 846 "inst_util.m"
                          {
#line 853 "inst_util.m"
                            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_27)) == (MR_mktag((MR_Integer) 1)));
#line 853 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 853 "inst_util.m"
                              {
#line 853 "inst_util.m"
                                check_hlds__inst_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 0)));
#line 853 "inst_util.m"
                                check_hlds__inst_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 1)));
#line 853 "inst_util.m"
                                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "inst_util.m"
                                if (check_hlds__inst_util__succeeded)
#line 853 "inst_util.m"
                                  {
#line 853 "inst_util.m"
                                    check_hlds__inst_util__ConsIdA_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 0)));
#line 853 "inst_util.m"
                                    check_hlds__inst_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 1)));
#line 854 "inst_util.m"
                                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_29)) == (MR_mktag((MR_Integer) 1)));
#line 854 "inst_util.m"
                                    if (check_hlds__inst_util__succeeded)
#line 854 "inst_util.m"
                                      {
#line 854 "inst_util.m"
                                        check_hlds__inst_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 0)));
#line 854 "inst_util.m"
                                        check_hlds__inst_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 1)));
#line 854 "inst_util.m"
                                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "inst_util.m"
                                        if (check_hlds__inst_util__succeeded)
#line 853 "inst_util.m"
                                          {
#line 854 "inst_util.m"
                                            check_hlds__inst_util__ConsIdB_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 0)));
#line 854 "inst_util.m"
                                            check_hlds__inst_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 1)));
#line 855 "inst_util.m"
                                            {
#line 855 "inst_util.m"
                                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_79, check_hlds__inst_util__ConsIdB_81);
                                            }
#line 853 "inst_util.m"
                                          }
#line 854 "inst_util.m"
                                      }
#line 853 "inst_util.m"
                                  }
#line 853 "inst_util.m"
                              }
#line 858 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 857 "inst_util.m"
                              *check_hlds__inst_util__Detism_20 = check_hlds__inst_util__Detism0_78;
#line 858 "inst_util.m"
                            else
#line 859 "inst_util.m"
                              {
#line 859 "inst_util.m"
                                MR_Word check_hlds__inst_util__MaxSoln_84;
#line 859 "inst_util.m"
                                MR_Word check_hlds__inst_util__V_83_83;

#line 859 "inst_util.m"
                                {
#line 859 "inst_util.m"
                                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_78, &check_hlds__inst_util__V_83_83, &check_hlds__inst_util__MaxSoln_84);
                                }
#line 860 "inst_util.m"
                                {
#line 860 "inst_util.m"
                                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_20, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_84);
                                }
#line 859 "inst_util.m"
                              }
#line 858 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 846 "inst_util.m"
                          }
#line 846 "inst_util.m"
                      }
#line 756 "inst_util.m"
                  }
#line 755 "inst_util.m"
                  break;
#line 755 "inst_util.m"
                case (MR_Integer) 0:
#line 753 "inst_util.m"
                  {
#line 753 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 755 "inst_util.m"
                  break;
#line 755 "inst_util.m"
              }
#line 750 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 750 "inst_util.m"
                {
#line 762 "inst_util.m"
                  check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "inst_util.m"
                  {
#line 762 "inst_util.m"
                    MR_Word base;
#line 762 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 762 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 762 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 762 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_25));
#line 762 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 762 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_28));
#line 762 "inst_util.m"
                  }
#line 762 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 750 "inst_util.m"
                }
#line 750 "inst_util.m"
            }
#line 716 "inst_util.m"
            break;
#line 716 "inst_util.m"
          case (MR_Integer) 1:
#line 764 "inst_util.m"
            {
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__V_44_44;
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__V_45_45;
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__V_46_46;
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__V_47_47;
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__ArgInsts_67;
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 764 "inst_util.m"
              MR_Word check_hlds__inst_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 769 "inst_util.m"
#line 769 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 769 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 769 "inst_util.m"
                case (MR_Integer) 1:
#line 771 "inst_util.m"
                  {
#line 771 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 769 "inst_util.m"
                  break;
#line 769 "inst_util.m"
                case (MR_Integer) 0:
#line 767 "inst_util.m"
                  {
#line 767 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 769 "inst_util.m"
                  break;
#line 769 "inst_util.m"
              }
#line 764 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 764 "inst_util.m"
                {
#line 775 "inst_util.m"
                  check_hlds__inst_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "inst_util.m"
                  check_hlds__inst_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "inst_util.m"
                  {
#line 776 "inst_util.m"
                    check_hlds__inst_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 776 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 776 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_67));
#line 776 "inst_util.m"
                  }
#line 776 "inst_util.m"
                  {
#line 776 "inst_util.m"
                    check_hlds__inst_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 0) = ((MR_Box) (check_hlds__inst_util__V_46_46));
#line 776 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 1) = ((MR_Box) (check_hlds__inst_util__V_47_47));
#line 776 "inst_util.m"
                  }
#line 775 "inst_util.m"
                  {
#line 775 "inst_util.m"
                    MR_Word base;
#line 775 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 775 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 775 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 775 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_68));
#line 775 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_44_44));
#line 775 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_45_45));
#line 775 "inst_util.m"
                  }
#line 775 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 764 "inst_util.m"
                }
#line 764 "inst_util.m"
            }
#line 716 "inst_util.m"
            break;
#line 716 "inst_util.m"
          case (MR_Integer) 3:
#line 778 "inst_util.m"
            {
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInstA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));
#line 778 "inst_util.m"
              MR_Word check_hlds__inst_util__Inst0_33;

#line 779 "inst_util.m"
              {
#line 779 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__SubInstA_32, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, &check_hlds__inst_util__Inst0_33, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
              }
#line 778 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 778 "inst_util.m"
                {
#line 781 "inst_util.m"
                  {
#line 781 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_33, check_hlds__inst_util__SubInstA_32, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 784 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 783 "inst_util.m"
                    {
#line 783 "inst_util.m"
                      MR_Word base;
#line 783 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 783 "inst_util.m"
                      *check_hlds__inst_util__Inst_19 = base;
#line 783 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 783 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_31));
#line 783 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_33));
#line 783 "inst_util.m"
                    }
#line 784 "inst_util.m"
                  else
#line 797 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = check_hlds__inst_util__Inst0_33;
#line 784 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 778 "inst_util.m"
                }
#line 778 "inst_util.m"
            }
#line 716 "inst_util.m"
            break;
#line 716 "inst_util.m"
        }
#line 716 "inst_util.m"
        break;
#line 716 "inst_util.m"
    }
#line 716 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 716 "inst_util.m"
  }
#line 704 "inst_util.m"
}

#line 683 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 683 "inst_util.m"
{
#line 687 "inst_util.m"
  {
#line 687 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 687 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "inst_util.m"
      {
#line 687 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 687 "inst_util.m"
          {
#line 687 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 687 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 687 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 687 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 687 "inst_util.m"
          }
#line 687 "inst_util.m"
      }
#line 687 "inst_util.m"
    else
#line 689 "inst_util.m"
      {
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_16;
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_17;
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 689 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 688 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 688 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 688 "inst_util.m"
          {
#line 688 "inst_util.m"
            check_hlds__inst_util__InstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 688 "inst_util.m"
            check_hlds__inst_util__InstsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 690 "inst_util.m"
            {
#line 690 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_3, check_hlds__inst_util__InstA_14, check_hlds__inst_util__InstB_16, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
#line 689 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 689 "inst_util.m"
              {
#line 692 "inst_util.m"
                {
#line 692 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__InstsA_15, check_hlds__inst_util__InstsB_17, check_hlds__inst_util__Live_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                }
#line 689 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 689 "inst_util.m"
                  {
#line 689 "inst_util.m"
                    {
#line 689 "inst_util.m"
                      MR_Word base;
#line 689 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__5_5 = base;
#line 689 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 689 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 689 "inst_util.m"
                    }
#line 694 "inst_util.m"
                    {
#line 694 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 694 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 689 "inst_util.m"
                  }
#line 689 "inst_util.m"
              }
#line 688 "inst_util.m"
          }
#line 689 "inst_util.m"
      }
#line 687 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 687 "inst_util.m"
  }
#line 683 "inst_util.m"
}

#line 266 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 266 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 266 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 266 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 266 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64)
#line 266 "inst_util.m"
{
#line 276 "inst_util.m"
  {
#line 276 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 276 "inst_util.m"
#line 276 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) {
#line 276 "inst_util.m"
      default:
#line 276 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 276 "inst_util.m"
        break;
#line 276 "inst_util.m"
      case (MR_Integer) 0:
#line 276 "inst_util.m"
#line 276 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_10)) {
#line 276 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 276 "inst_util.m"
          case (MR_Integer) 0:
#line 334 "inst_util.m"
#line 334 "inst_util.m"
            switch (check_hlds__inst_util__Live_9) {
#line 334 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 334 "inst_util.m"
              case (MR_Integer) 1:
#line 335 "inst_util.m"
                {
#line 336 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstB_11;
#line 337 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 335 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 335 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 335 "inst_util.m"
                }
#line 334 "inst_util.m"
                break;
#line 334 "inst_util.m"
              case (MR_Integer) 0:
#line 285 "inst_util.m"
#line 285 "inst_util.m"
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 285 "inst_util.m"
                  default:
#line 285 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 285 "inst_util.m"
                    break;
#line 285 "inst_util.m"
                  case (MR_Integer) 0:
#line 285 "inst_util.m"
#line 285 "inst_util.m"
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 285 "inst_util.m"
                      default:
#line 285 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 285 "inst_util.m"
                        break;
#line 285 "inst_util.m"
                      case (MR_Integer) 1:
#line 282 "inst_util.m"
                        {
#line 283 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 284 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 282 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 282 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 282 "inst_util.m"
                        }
#line 285 "inst_util.m"
                        break;
#line 285 "inst_util.m"
                    }
#line 285 "inst_util.m"
                    break;
#line 285 "inst_util.m"
                  case (MR_Integer) 2:
#line 310 "inst_util.m"
                    {
#line 310 "inst_util.m"
                      MR_Word check_hlds__inst_util__HOInstInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 310 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 310 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_116;

#line 311 "inst_util.m"
                      {
#line 311 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_115, &check_hlds__inst_util__Uniq_116);
                      }
#line 310 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 310 "inst_util.m"
                        {
#line 313 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 310 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 312 "inst_util.m"
                          {
#line 312 "inst_util.m"
                            MR_Word base;
#line 312 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 312 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_116));
#line 312 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_22));
#line 312 "inst_util.m"
                          }
#line 312 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 310 "inst_util.m"
                        }
#line 310 "inst_util.m"
                    }
#line 285 "inst_util.m"
                    break;
#line 285 "inst_util.m"
                  case (MR_Integer) 3:
#line 285 "inst_util.m"
#line 285 "inst_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 285 "inst_util.m"
                      default:
#line 285 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 285 "inst_util.m"
                        break;
#line 285 "inst_util.m"
                      case (MR_Integer) 0:
#line 289 "inst_util.m"
                        {
#line 289 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 289 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstResultsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 289 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInstsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 289 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_19;
#line 289 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInsts_20;

#line 290 "inst_util.m"
                          {
#line 290 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_16, &check_hlds__inst_util__Uniq_19);
                          }
#line 289 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 289 "inst_util.m"
                            {
#line 292 "inst_util.m"
                              {
#line 292 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_17, check_hlds__inst_util__BoundInstsB_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                              }
#line 289 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 289 "inst_util.m"
                                {
#line 296 "inst_util.m"
#line 296 "inst_util.m"
                                  switch (check_hlds__inst_util__UniqB_16) {
#line 296 "inst_util.m"
                                    default:
#line 296 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 296 "inst_util.m"
                                      break;
#line 296 "inst_util.m"
                                    case (MR_Integer) 2:
#line 296 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 296 "inst_util.m"
                                      break;
#line 296 "inst_util.m"
                                    case (MR_Integer) 1:
#line 296 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 296 "inst_util.m"
                                      break;
#line 296 "inst_util.m"
                                  }
#line 299 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 297 "inst_util.m"
                                    {
#line 297 "inst_util.m"
                                      check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsB_18, &check_hlds__inst_util__BoundInsts_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                    }
#line 299 "inst_util.m"
                                  else
#line 300 "inst_util.m"
                                    {
#line 300 "inst_util.m"
                                      check_hlds__inst_util__BoundInsts_20 = check_hlds__inst_util__BoundInstsB_18;
#line 300 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 300 "inst_util.m"
                                    }
#line 303 "inst_util.m"
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 302 "inst_util.m"
                                  {
#line 302 "inst_util.m"
                                    MR_Word base;
#line 302 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 302 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 302 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 302 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_19));
#line 302 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_17));
#line 302 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_20));
#line 302 "inst_util.m"
                                  }
#line 302 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 289 "inst_util.m"
                                }
#line 289 "inst_util.m"
                            }
#line 289 "inst_util.m"
                        }
#line 285 "inst_util.m"
                        break;
#line 285 "inst_util.m"
                      case (MR_Integer) 1:
#line 305 "inst_util.m"
                        {
#line 305 "inst_util.m"
                          MR_Word check_hlds__inst_util__HOInstInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 305 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 305 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_114;

#line 306 "inst_util.m"
                          {
#line 306 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_113, &check_hlds__inst_util__Uniq_114);
                          }
#line 305 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 305 "inst_util.m"
                            {
#line 308 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 305 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 307 "inst_util.m"
                              {
#line 307 "inst_util.m"
                                MR_Word base;
#line 307 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 307 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 307 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_114));
#line 307 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoB_21));
#line 307 "inst_util.m"
                              }
#line 307 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 305 "inst_util.m"
                            }
#line 305 "inst_util.m"
                        }
#line 285 "inst_util.m"
                        break;
#line 285 "inst_util.m"
                      case (MR_Integer) 3:
#line 315 "inst_util.m"
                        {
#line 315 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 315 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 316 "inst_util.m"
                          {
#line 316 "inst_util.m"
                            return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_23, check_hlds__inst_util__SubInstB_24, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 315 "inst_util.m"
                        }
#line 285 "inst_util.m"
                        break;
#line 285 "inst_util.m"
                    }
#line 285 "inst_util.m"
                    break;
#line 285 "inst_util.m"
                }
#line 334 "inst_util.m"
                break;
#line 334 "inst_util.m"
            }
#line 276 "inst_util.m"
            break;
#line 276 "inst_util.m"
          case (MR_Integer) 1:
#line 273 "inst_util.m"
            {
#line 274 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 275 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 273 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 273 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 273 "inst_util.m"
            }
#line 276 "inst_util.m"
            break;
#line 276 "inst_util.m"
        }
#line 276 "inst_util.m"
        break;
#line 276 "inst_util.m"
      case (MR_Integer) 2:
#line 531 "inst_util.m"
        {
#line 531 "inst_util.m"
          MR_Word check_hlds__inst_util__UniqA_298 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 0)));
#line 531 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfoA_303 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 536 "inst_util.m"
          if ((check_hlds__inst_util__HOInstInfoA_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "inst_util.m"
            {
#line 534 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
#line 536 "inst_util.m"
          else
#line 543 "inst_util.m"
#line 543 "inst_util.m"
            switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 543 "inst_util.m"
              default:
#line 543 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 543 "inst_util.m"
                break;
#line 543 "inst_util.m"
              case (MR_Integer) 0:
#line 543 "inst_util.m"
#line 543 "inst_util.m"
                switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 543 "inst_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 543 "inst_util.m"
                  case (MR_Integer) 0:
#line 544 "inst_util.m"
                    {
#line 544 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_224;

#line 548 "inst_util.m"
#line 548 "inst_util.m"
                      switch (check_hlds__inst_util__Live_9) {
#line 548 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 548 "inst_util.m"
                        case (MR_Integer) 1:
#line 550 "inst_util.m"
                          {
#line 550 "inst_util.m"
                            check_hlds__inst_util__Uniq_224 = check_hlds__inst_util__UniqA_298;
#line 550 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 550 "inst_util.m"
                          }
#line 548 "inst_util.m"
                          break;
#line 548 "inst_util.m"
                        case (MR_Integer) 0:
#line 546 "inst_util.m"
                          {
#line 547 "inst_util.m"
                            {
#line 547 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, &check_hlds__inst_util__Uniq_224);
                            }
#line 546 "inst_util.m"
                          }
#line 548 "inst_util.m"
                          break;
#line 548 "inst_util.m"
                      }
#line 544 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 544 "inst_util.m"
                        {
#line 553 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 544 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 552 "inst_util.m"
                          {
#line 552 "inst_util.m"
                            MR_Word base;
#line 552 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 552 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_224));
#line 552 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 552 "inst_util.m"
                          }
#line 552 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 544 "inst_util.m"
                        }
#line 544 "inst_util.m"
                    }
#line 543 "inst_util.m"
                    break;
#line 543 "inst_util.m"
                  case (MR_Integer) 1:
#line 540 "inst_util.m"
                    {
#line 541 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 542 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 540 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 540 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 540 "inst_util.m"
                    }
#line 543 "inst_util.m"
                    break;
#line 543 "inst_util.m"
                }
#line 543 "inst_util.m"
                break;
#line 543 "inst_util.m"
              case (MR_Integer) 2:
#line 573 "inst_util.m"
                {
#line 573 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_67_67;
#line 573 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_237;
#line 573 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_238;
#line 573 "inst_util.m"
                  MR_Word check_hlds__inst_util___HOInstInfoB_236;

#line 579 "inst_util.m"
#line 579 "inst_util.m"
                  switch (check_hlds__inst_util__Live_9) {
#line 579 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 579 "inst_util.m"
                    case (MR_Integer) 1:
#line 580 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 579 "inst_util.m"
                      break;
#line 579 "inst_util.m"
                    case (MR_Integer) 0:
#line 578 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 579 "inst_util.m"
                      break;
#line 579 "inst_util.m"
                  }
#line 573 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 573 "inst_util.m"
                    {
#line 573 "inst_util.m"
                      check_hlds__inst_util__UniqB_237 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 573 "inst_util.m"
                      check_hlds__inst_util___HOInstInfoB_236 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 582 "inst_util.m"
                      check_hlds__inst_util__V_67_67 = (MR_Integer) 1;
#line 582 "inst_util.m"
                      {
#line 582 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_67_67, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_237, &check_hlds__inst_util__Uniq_238);
                      }
#line 573 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 573 "inst_util.m"
                        {
#line 584 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 573 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 583 "inst_util.m"
                          {
#line 583 "inst_util.m"
                            MR_Word base;
#line 583 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 583 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_238));
#line 583 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 583 "inst_util.m"
                          }
#line 583 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 573 "inst_util.m"
                        }
#line 573 "inst_util.m"
                    }
#line 573 "inst_util.m"
                }
#line 543 "inst_util.m"
                break;
#line 543 "inst_util.m"
              case (MR_Integer) 3:
#line 543 "inst_util.m"
#line 543 "inst_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 543 "inst_util.m"
                  default:
#line 543 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 543 "inst_util.m"
                    break;
#line 543 "inst_util.m"
                  case (MR_Integer) 0:
#line 555 "inst_util.m"
                    {
#line 555 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_71_71;
#line 555 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_72_72;
#line 555 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 555 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInstsB_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 555 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_228;
#line 555 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInsts_229;
#line 555 "inst_util.m"
                      MR_Word check_hlds__inst_util__Detism1_231;
#line 555 "inst_util.m"
                      MR_Word check_hlds__inst_util___InstResultsB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 557 "inst_util.m"
                      {
#line 557 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_226, &check_hlds__inst_util__Uniq_228);
                      }
#line 555 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 555 "inst_util.m"
                        {
#line 558 "inst_util.m"
                          {
#line 558 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_227, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_229, &check_hlds__inst_util__Detism1_231, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 555 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 555 "inst_util.m"
                            {
#line 562 "inst_util.m"
                              check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "inst_util.m"
                              check_hlds__inst_util__V_72_72 = (MR_Integer) 1;
#line 562 "inst_util.m"
                              {
#line 562 "inst_util.m"
                                MR_Word base;
#line 562 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 562 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 562 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 562 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_228));
#line 562 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 562 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_229));
#line 562 "inst_util.m"
                              }
#line 563 "inst_util.m"
                              {
#line 563 "inst_util.m"
                                parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_231, check_hlds__inst_util__V_72_72, check_hlds__inst_util__Detism_14);
                              }
#line 563 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 555 "inst_util.m"
                            }
#line 555 "inst_util.m"
                        }
#line 555 "inst_util.m"
                    }
#line 543 "inst_util.m"
                    break;
#line 543 "inst_util.m"
                  case (MR_Integer) 1:
#line 565 "inst_util.m"
                    {
#line 565 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_68_68;
#line 565 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_233;
#line 565 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_234;
#line 565 "inst_util.m"
                      MR_Word check_hlds__inst_util___HOInstInfoB_232;

#line 568 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 565 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 565 "inst_util.m"
                        {
#line 565 "inst_util.m"
                          check_hlds__inst_util__UniqB_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 565 "inst_util.m"
                          check_hlds__inst_util___HOInstInfoB_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 569 "inst_util.m"
                          check_hlds__inst_util__V_68_68 = (MR_Integer) 1;
#line 569 "inst_util.m"
                          {
#line 569 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_68_68, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_233, &check_hlds__inst_util__Uniq_234);
                          }
#line 565 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 565 "inst_util.m"
                            {
#line 571 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 565 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 570 "inst_util.m"
                              {
#line 570 "inst_util.m"
                                MR_Word base;
#line 570 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 570 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 570 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 570 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_234));
#line 570 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 570 "inst_util.m"
                              }
#line 570 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 565 "inst_util.m"
                            }
#line 565 "inst_util.m"
                        }
#line 565 "inst_util.m"
                    }
#line 543 "inst_util.m"
                    break;
#line 543 "inst_util.m"
                  case (MR_Integer) 3:
#line 586 "inst_util.m"
                    {
#line 586 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstVarsB_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 586 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInstB_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 587 "inst_util.m"
                      {
#line 587 "inst_util.m"
                        return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_240, check_hlds__inst_util__SubInstB_241, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                      }
#line 586 "inst_util.m"
                    }
#line 543 "inst_util.m"
                    break;
#line 543 "inst_util.m"
                }
#line 543 "inst_util.m"
                break;
#line 543 "inst_util.m"
            }
#line 531 "inst_util.m"
        }
#line 276 "inst_util.m"
        break;
#line 276 "inst_util.m"
      case (MR_Integer) 3:
#line 276 "inst_util.m"
#line 276 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) {
#line 276 "inst_util.m"
          default:
#line 276 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 276 "inst_util.m"
            break;
#line 276 "inst_util.m"
          case (MR_Integer) 0:
#line 340 "inst_util.m"
            {
#line 340 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 340 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResultsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 340 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 3)));

#line 346 "inst_util.m"
#line 346 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 346 "inst_util.m"
                default:
#line 346 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 346 "inst_util.m"
                  break;
#line 346 "inst_util.m"
                case (MR_Integer) 0:
#line 346 "inst_util.m"
#line 346 "inst_util.m"
                  switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 346 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 346 "inst_util.m"
                    case (MR_Integer) 0:
#line 347 "inst_util.m"
                      {
#line 347 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_117;
#line 347 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_118;

#line 356 "inst_util.m"
#line 356 "inst_util.m"
                        switch (check_hlds__inst_util__Live_9) {
#line 356 "inst_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 356 "inst_util.m"
                          case (MR_Integer) 1:
#line 357 "inst_util.m"
                            {
#line 359 "inst_util.m"
                              {
#line 359 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, check_hlds__inst_util__UniqA_30, (MR_Integer) 1, &check_hlds__inst_util__Uniq_117);
                              }
#line 357 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 357 "inst_util.m"
                                {
#line 360 "inst_util.m"
                                  check_hlds__inst_util__BoundInsts_118 = check_hlds__inst_util__BoundInstsA_32;
#line 357 "inst_util.m"
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 357 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 357 "inst_util.m"
                                }
#line 357 "inst_util.m"
                            }
#line 356 "inst_util.m"
                            break;
#line 356 "inst_util.m"
                          case (MR_Integer) 0:
#line 349 "inst_util.m"
                            {
#line 350 "inst_util.m"
                              {
#line 350 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, &check_hlds__inst_util__Uniq_117);
                              }
#line 349 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 349 "inst_util.m"
                                {
#line 352 "inst_util.m"
                                  {
#line 352 "inst_util.m"
                                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_31, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                                  }
#line 349 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 349 "inst_util.m"
                                    {
#line 354 "inst_util.m"
                                      {
#line 354 "inst_util.m"
                                        check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsA_32, &check_hlds__inst_util__BoundInsts_118, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
#line 354 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 349 "inst_util.m"
                                    }
#line 349 "inst_util.m"
                                }
#line 349 "inst_util.m"
                            }
#line 356 "inst_util.m"
                            break;
#line 356 "inst_util.m"
                        }
#line 347 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 347 "inst_util.m"
                          {
#line 363 "inst_util.m"
                            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 362 "inst_util.m"
                            {
#line 362 "inst_util.m"
                              MR_Word base;
#line 362 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 362 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 362 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 362 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_117));
#line 362 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 362 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_118));
#line 362 "inst_util.m"
                            }
#line 362 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 347 "inst_util.m"
                          }
#line 347 "inst_util.m"
                      }
#line 346 "inst_util.m"
                      break;
#line 346 "inst_util.m"
                    case (MR_Integer) 1:
#line 343 "inst_util.m"
                      {
#line 344 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 345 "inst_util.m"
                        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 343 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 343 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 343 "inst_util.m"
                      }
#line 346 "inst_util.m"
                      break;
#line 346 "inst_util.m"
                  }
#line 346 "inst_util.m"
                  break;
#line 346 "inst_util.m"
                case (MR_Integer) 2:
#line 401 "inst_util.m"
                  {
#line 401 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_87_87;
#line 401 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_89_89;
#line 401 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_90_90;
#line 401 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 401 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_132;
#line 401 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInsts_133;
#line 401 "inst_util.m"
                    MR_Word check_hlds__inst_util__Detism1_134;
#line 401 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 402 "inst_util.m"
                    {
#line 402 "inst_util.m"
                      check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                    }
#line 403 "inst_util.m"
                    {
#line 403 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_131, &check_hlds__inst_util__Uniq_132);
                    }
#line 401 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 401 "inst_util.m"
                      {
#line 405 "inst_util.m"
                        check_hlds__inst_util__V_87_87 = (MR_Integer) 0;
#line 405 "inst_util.m"
                        {
#line 405 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__V_87_87, check_hlds__inst_util__UniqB_131, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_133, &check_hlds__inst_util__Detism1_134, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 401 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 401 "inst_util.m"
                          {
#line 408 "inst_util.m"
                            check_hlds__inst_util__V_89_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "inst_util.m"
                            check_hlds__inst_util__V_90_90 = (MR_Integer) 1;
#line 408 "inst_util.m"
                            {
#line 408 "inst_util.m"
                              MR_Word base;
#line 408 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 408 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 408 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 408 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_132));
#line 408 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_89_89));
#line 408 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_133));
#line 408 "inst_util.m"
                            }
#line 409 "inst_util.m"
                            {
#line 409 "inst_util.m"
                              parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_134, check_hlds__inst_util__V_90_90, check_hlds__inst_util__Detism_14);
                            }
#line 409 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 401 "inst_util.m"
                          }
#line 401 "inst_util.m"
                      }
#line 401 "inst_util.m"
                  }
#line 346 "inst_util.m"
                  break;
#line 346 "inst_util.m"
                case (MR_Integer) 3:
#line 346 "inst_util.m"
#line 346 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 346 "inst_util.m"
                    default:
#line 346 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 346 "inst_util.m"
                      break;
#line 346 "inst_util.m"
                    case (MR_Integer) 0:
#line 365 "inst_util.m"
                      {
#line 365 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_96_96;
#line 365 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 365 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 365 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_121;
#line 365 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_122;
#line 365 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 366 "inst_util.m"
                        {
#line 366 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__BoundInstsB_120, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_122, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 365 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 365 "inst_util.m"
                          {
#line 368 "inst_util.m"
                            {
#line 368 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, *check_hlds__inst_util__Detism_14, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_119, &check_hlds__inst_util__Uniq_121);
                            }
#line 365 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 365 "inst_util.m"
                              {
#line 370 "inst_util.m"
                                check_hlds__inst_util__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "inst_util.m"
                                {
#line 370 "inst_util.m"
                                  MR_Word base;
#line 370 "inst_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 370 "inst_util.m"
                                  *check_hlds__inst_util__Inst_13 = base;
#line 370 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 370 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_121));
#line 370 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_96_96));
#line 370 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_122));
#line 370 "inst_util.m"
                                }
#line 370 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 365 "inst_util.m"
                              }
#line 365 "inst_util.m"
                          }
#line 365 "inst_util.m"
                      }
#line 346 "inst_util.m"
                      break;
#line 346 "inst_util.m"
                    case (MR_Integer) 1:
#line 372 "inst_util.m"
                      {
#line 372 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism1_35;
#line 372 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_94_94;
#line 372 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 372 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_129;
#line 372 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 373 "inst_util.m"
                        {
#line 373 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_128, &check_hlds__inst_util__Uniq_129);
                        }
#line 372 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 372 "inst_util.m"
                          {
#line 378 "inst_util.m"
#line 378 "inst_util.m"
                            switch (MR_tag((MR_Word) check_hlds__inst_util__InstResultsA_31)) {
#line 378 "inst_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 378 "inst_util.m"
                              case (MR_Integer) 0:
#line 378 "inst_util.m"
#line 378 "inst_util.m"
                                switch (MR_unmkbody(check_hlds__inst_util__InstResultsA_31)) {
#line 378 "inst_util.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 378 "inst_util.m"
                                  case (MR_Integer) 0:
#line 394 "inst_util.m"
                                    {
#line 394 "inst_util.m"
                                      MR_Word check_hlds__inst_util__BoundInsts_126;

#line 395 "inst_util.m"
                                      {
#line 395 "inst_util.m"
                                        check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_126, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
#line 394 "inst_util.m"
                                      if (check_hlds__inst_util__succeeded)
#line 394 "inst_util.m"
                                        {
#line 397 "inst_util.m"
                                          {
#line 397 "inst_util.m"
                                            MR_Word base;
#line 397 "inst_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 397 "inst_util.m"
                                            *check_hlds__inst_util__Inst_13 = base;
#line 397 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 397 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 397 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 397 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_126));
#line 397 "inst_util.m"
                                          }
#line 397 "inst_util.m"
                                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 394 "inst_util.m"
                                        }
#line 394 "inst_util.m"
                                    }
#line 378 "inst_util.m"
                                    break;
#line 378 "inst_util.m"
                                  case (MR_Integer) 1:
#line 375 "inst_util.m"
                                    {
#line 376 "inst_util.m"
                                      *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 377 "inst_util.m"
                                      check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 375 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 375 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 375 "inst_util.m"
                                    }
#line 378 "inst_util.m"
                                    break;
#line 378 "inst_util.m"
                                }
#line 378 "inst_util.m"
                                break;
#line 378 "inst_util.m"
                              case (MR_Integer) 1:
#line 380 "inst_util.m"
                                {
#line 380 "inst_util.m"
                                  MR_Word check_hlds__inst_util__GroundnessResultA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 0)));
#line 379 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 1)));
#line 379 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 2)));
#line 379 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 3)));
#line 379 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 4)));
#line 379 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 5)));

#line 385 "inst_util.m"
#line 385 "inst_util.m"
                                  switch (check_hlds__inst_util__GroundnessResultA_36) {
#line 385 "inst_util.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 385 "inst_util.m"
                                    case (MR_Integer) 2:
#line 385 "inst_util.m"
                                    case (MR_Integer) 0:
#line 388 "inst_util.m"
                                      {
#line 388 "inst_util.m"
                                        MR_Word check_hlds__inst_util__BoundInsts_123;

#line 389 "inst_util.m"
                                        {
#line 389 "inst_util.m"
                                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_123, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                        }
#line 388 "inst_util.m"
                                        if (check_hlds__inst_util__succeeded)
#line 388 "inst_util.m"
                                          {
#line 391 "inst_util.m"
                                            {
#line 391 "inst_util.m"
                                              MR_Word base;
#line 391 "inst_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 391 "inst_util.m"
                                              *check_hlds__inst_util__Inst_13 = base;
#line 391 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 391 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 391 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 391 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_123));
#line 391 "inst_util.m"
                                            }
#line 391 "inst_util.m"
                                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 388 "inst_util.m"
                                          }
#line 388 "inst_util.m"
                                      }
#line 385 "inst_util.m"
                                      break;
#line 385 "inst_util.m"
                                    case (MR_Integer) 1:
#line 382 "inst_util.m"
                                      {
#line 383 "inst_util.m"
                                        *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 384 "inst_util.m"
                                        check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 382 "inst_util.m"
                                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 382 "inst_util.m"
                                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 382 "inst_util.m"
                                      }
#line 385 "inst_util.m"
                                      break;
#line 385 "inst_util.m"
                                  }
#line 380 "inst_util.m"
                                }
#line 378 "inst_util.m"
                                break;
#line 378 "inst_util.m"
                            }
#line 372 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 372 "inst_util.m"
                              {
#line 399 "inst_util.m"
                                check_hlds__inst_util__V_94_94 = (MR_Integer) 1;
#line 399 "inst_util.m"
                                {
#line 399 "inst_util.m"
                                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_35, check_hlds__inst_util__V_94_94, check_hlds__inst_util__Detism_14);
                                }
#line 399 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 372 "inst_util.m"
                              }
#line 372 "inst_util.m"
                          }
#line 372 "inst_util.m"
                      }
#line 346 "inst_util.m"
                      break;
#line 346 "inst_util.m"
                    case (MR_Integer) 3:
#line 411 "inst_util.m"
                      {
#line 411 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstVarsB_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 411 "inst_util.m"
                        MR_Word check_hlds__inst_util__SubInstB_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 412 "inst_util.m"
                        {
#line 412 "inst_util.m"
                          return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_135, check_hlds__inst_util__SubInstB_136, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 411 "inst_util.m"
                      }
#line 346 "inst_util.m"
                      break;
#line 346 "inst_util.m"
                  }
#line 346 "inst_util.m"
                  break;
#line 346 "inst_util.m"
              }
#line 340 "inst_util.m"
            }
#line 276 "inst_util.m"
            break;
#line 276 "inst_util.m"
          case (MR_Integer) 1:
#line 451 "inst_util.m"
            {
#line 451 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfoA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 451 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 456 "inst_util.m"
              if ((check_hlds__inst_util__HOInstInfoA_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "inst_util.m"
                {
#line 454 "inst_util.m"
                  return check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                }
#line 456 "inst_util.m"
              else
#line 463 "inst_util.m"
#line 463 "inst_util.m"
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 463 "inst_util.m"
                  default:
#line 463 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 463 "inst_util.m"
                    break;
#line 463 "inst_util.m"
                  case (MR_Integer) 0:
#line 463 "inst_util.m"
#line 463 "inst_util.m"
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 463 "inst_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 463 "inst_util.m"
                      case (MR_Integer) 0:
#line 464 "inst_util.m"
                        {
#line 464 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_155;

#line 468 "inst_util.m"
#line 468 "inst_util.m"
                          switch (check_hlds__inst_util__Live_9) {
#line 468 "inst_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 468 "inst_util.m"
                            case (MR_Integer) 1:
#line 470 "inst_util.m"
                              {
#line 470 "inst_util.m"
                                check_hlds__inst_util__Uniq_155 = check_hlds__inst_util__UniqA_219;
#line 470 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 470 "inst_util.m"
                              }
#line 468 "inst_util.m"
                              break;
#line 468 "inst_util.m"
                            case (MR_Integer) 0:
#line 466 "inst_util.m"
                              {
#line 467 "inst_util.m"
                                {
#line 467 "inst_util.m"
                                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, &check_hlds__inst_util__Uniq_155);
                                }
#line 466 "inst_util.m"
                              }
#line 468 "inst_util.m"
                              break;
#line 468 "inst_util.m"
                          }
#line 464 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 464 "inst_util.m"
                            {
#line 473 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 464 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 472 "inst_util.m"
                              {
#line 472 "inst_util.m"
                                MR_Word base;
#line 472 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 472 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 472 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 472 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_155));
#line 472 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 472 "inst_util.m"
                              }
#line 472 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 464 "inst_util.m"
                            }
#line 464 "inst_util.m"
                        }
#line 463 "inst_util.m"
                        break;
#line 463 "inst_util.m"
                      case (MR_Integer) 1:
#line 460 "inst_util.m"
                        {
#line 461 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 462 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 460 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 460 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 460 "inst_util.m"
                        }
#line 463 "inst_util.m"
                        break;
#line 463 "inst_util.m"
                    }
#line 463 "inst_util.m"
                    break;
#line 463 "inst_util.m"
                  case (MR_Integer) 2:
#line 497 "inst_util.m"
                    {
#line 497 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_77_77;
#line 497 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 497 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_165;
#line 497 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 501 "inst_util.m"
#line 501 "inst_util.m"
                      switch (check_hlds__inst_util__Live_9) {
#line 501 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 501 "inst_util.m"
                        case (MR_Integer) 1:
#line 503 "inst_util.m"
                          {
#line 503 "inst_util.m"
                            {
#line 503 "inst_util.m"
                              check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                            }
#line 503 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 503 "inst_util.m"
                          }
#line 501 "inst_util.m"
                          break;
#line 501 "inst_util.m"
                        case (MR_Integer) 0:
#line 500 "inst_util.m"
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 501 "inst_util.m"
                          break;
#line 501 "inst_util.m"
                      }
#line 497 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 497 "inst_util.m"
                        {
#line 505 "inst_util.m"
                          check_hlds__inst_util__V_77_77 = (MR_Integer) 1;
#line 505 "inst_util.m"
                          {
#line 505 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_77_77, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_164, &check_hlds__inst_util__Uniq_165);
                          }
#line 497 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 497 "inst_util.m"
                            {
#line 507 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 497 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 506 "inst_util.m"
                              {
#line 506 "inst_util.m"
                                MR_Word base;
#line 506 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 506 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 506 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 506 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_165));
#line 506 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 506 "inst_util.m"
                              }
#line 506 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 497 "inst_util.m"
                            }
#line 497 "inst_util.m"
                        }
#line 497 "inst_util.m"
                    }
#line 463 "inst_util.m"
                    break;
#line 463 "inst_util.m"
                  case (MR_Integer) 3:
#line 463 "inst_util.m"
#line 463 "inst_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 463 "inst_util.m"
                      default:
#line 463 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 463 "inst_util.m"
                        break;
#line 463 "inst_util.m"
                      case (MR_Integer) 0:
#line 475 "inst_util.m"
                        {
#line 475 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_81_81;
#line 475 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 475 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstResultsB_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 475 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInstsB_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 475 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_159;
#line 475 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInsts_160;
#line 475 "inst_util.m"
                          MR_Word check_hlds__inst_util__Detism1_161;

#line 477 "inst_util.m"
                          {
#line 477 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_156, &check_hlds__inst_util__Uniq_159);
                          }
#line 475 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 475 "inst_util.m"
                            {
#line 478 "inst_util.m"
                              {
#line 478 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_158, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_160, &check_hlds__inst_util__Detism1_161, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                              }
#line 475 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 475 "inst_util.m"
                                {
#line 481 "inst_util.m"
                                  check_hlds__inst_util__V_81_81 = (MR_Integer) 1;
#line 480 "inst_util.m"
                                  {
#line 480 "inst_util.m"
                                    MR_Word base;
#line 480 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 480 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 480 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 480 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_159));
#line 480 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_157));
#line 480 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_160));
#line 480 "inst_util.m"
                                  }
#line 481 "inst_util.m"
                                  {
#line 481 "inst_util.m"
                                    parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_161, check_hlds__inst_util__V_81_81, check_hlds__inst_util__Detism_14);
                                  }
#line 481 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 475 "inst_util.m"
                                }
#line 475 "inst_util.m"
                            }
#line 475 "inst_util.m"
                        }
#line 463 "inst_util.m"
                        break;
#line 463 "inst_util.m"
                      case (MR_Integer) 1:
#line 483 "inst_util.m"
                        {
#line 483 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_78_78;
#line 483 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_162;
#line 483 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_163;
#line 483 "inst_util.m"
                          MR_Word check_hlds__inst_util___HOInstInfoB_50;

#line 486 "inst_util.m"
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 483 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 483 "inst_util.m"
                            {
#line 483 "inst_util.m"
                              check_hlds__inst_util__UniqB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 483 "inst_util.m"
                              check_hlds__inst_util___HOInstInfoB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 493 "inst_util.m"
                              check_hlds__inst_util__V_78_78 = (MR_Integer) 1;
#line 493 "inst_util.m"
                              {
#line 493 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_78_78, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_162, &check_hlds__inst_util__Uniq_163);
                              }
#line 483 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 483 "inst_util.m"
                                {
#line 495 "inst_util.m"
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 483 "inst_util.m"
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 494 "inst_util.m"
                                  {
#line 494 "inst_util.m"
                                    MR_Word base;
#line 494 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 494 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 494 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 494 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_163));
#line 494 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 494 "inst_util.m"
                                  }
#line 494 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 483 "inst_util.m"
                                }
#line 483 "inst_util.m"
                            }
#line 483 "inst_util.m"
                        }
#line 463 "inst_util.m"
                        break;
#line 463 "inst_util.m"
                      case (MR_Integer) 3:
#line 509 "inst_util.m"
                        {
#line 509 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 509 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 510 "inst_util.m"
                          {
#line 510 "inst_util.m"
                            return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_166, check_hlds__inst_util__SubInstB_167, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 509 "inst_util.m"
                        }
#line 463 "inst_util.m"
                        break;
#line 463 "inst_util.m"
                    }
#line 463 "inst_util.m"
                    break;
#line 463 "inst_util.m"
                }
#line 451 "inst_util.m"
            }
#line 276 "inst_util.m"
            break;
#line 276 "inst_util.m"
          case (MR_Integer) 3:
#line 608 "inst_util.m"
            {
#line 608 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVarsA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 608 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInstA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));

#line 609 "inst_util.m"
              {
#line 609 "inst_util.m"
                return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsA_58, check_hlds__inst_util__SubInstA_59, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
              }
#line 608 "inst_util.m"
            }
#line 276 "inst_util.m"
            break;
#line 276 "inst_util.m"
        }
#line 276 "inst_util.m"
        break;
#line 276 "inst_util.m"
    }
#line 276 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 276 "inst_util.m"
  }
#line 266 "inst_util.m"
}

#line 241 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 241 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 241 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 241 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 241 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21)
#line 241 "inst_util.m"
{
#line 246 "inst_util.m"
  {
#line 246 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 246 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_16;
#line 246 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_17;
#line 246 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;
#line 253 "inst_util.m"
    MR_Word check_hlds__inst_util__V_23_23;
#line 253 "inst_util.m"
    MR_Word check_hlds__inst_util__V_24_24;
#line 253 "inst_util.m"
    MR_Word check_hlds__inst_util__V_19_19;

#line 247 "inst_util.m"
    {
#line 247 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstA_10, &check_hlds__inst_util__ExpandedInstA_16);
    }
#line 248 "inst_util.m"
    {
#line 248 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstB_11, &check_hlds__inst_util__ExpandedInstB_17);
    }
#line 249 "inst_util.m"
    {
#line 249 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__ExpandedInstA_16, check_hlds__inst_util__ExpandedInstB_17, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);
    }
#line 246 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 246 "inst_util.m"
      {
#line 253 "inst_util.m"
        check_hlds__inst_util__V_23_23 = (MR_Integer) 0;
#line 253 "inst_util.m"
        {
#line 253 "inst_util.m"
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__inst_util__Detism_14, &check_hlds__inst_util__V_19_19, &check_hlds__inst_util__V_24_24);
        }
#line 253 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_23_23 == check_hlds__inst_util__V_24_24);
#line 255 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 254 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 255 "inst_util.m"
        else
#line 256 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_18;
#line 255 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 246 "inst_util.m"
      }
#line 246 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 246 "inst_util.m"
  }
#line 241 "inst_util.m"
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
#line 2378 "inst_util.m"
  while (MR_TRUE)
#line 2378 "inst_util.m"
    {
#line 2378 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2378 "inst_util.m"
      {
#line 2378 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2378 "inst_util.m"
        MR_Word check_hlds__inst_util__MayRestrict_6;

#line 2378 "inst_util.m"
#line 2378 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) {
#line 2378 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2378 "inst_util.m"
          case (MR_Integer) 0:
#line 2386 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2378 "inst_util.m"
            break;
#line 2378 "inst_util.m"
          case (MR_Integer) 1:
#line 2386 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2378 "inst_util.m"
            break;
#line 2378 "inst_util.m"
          case (MR_Integer) 2:
#line 2379 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2378 "inst_util.m"
            break;
#line 2378 "inst_util.m"
          case (MR_Integer) 3:
#line 2378 "inst_util.m"
#line 2378 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) {
#line 2378 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2378 "inst_util.m"
              case (MR_Integer) 0:
#line 2378 "inst_util.m"
              case (MR_Integer) 2:
#line 2378 "inst_util.m"
              case (MR_Integer) 3:
#line 2378 "inst_util.m"
              case (MR_Integer) 5:
#line 2379 "inst_util.m"
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2378 "inst_util.m"
                break;
#line 2378 "inst_util.m"
              case (MR_Integer) 1:
#line 2386 "inst_util.m"
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2378 "inst_util.m"
                break;
#line 2378 "inst_util.m"
              case (MR_Integer) 4:
#line 2388 "inst_util.m"
                {
#line 2388 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 1)));
#line 2388 "inst_util.m"
                  MR_Word check_hlds__inst_util__NewInst_21;

#line 2389 "inst_util.m"
                  {
#line 2389 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_20, &check_hlds__inst_util__NewInst_21);
                  }
#line 2390 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2390 "inst_util.m"
                  {
#line 2390 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_5 = check_hlds__inst_util__NewInst_21;

#line 2390 "inst_util.m"
                    check_hlds__inst_util__Inst_5 = check_hlds__inst_util__Inst__tmp_copy_5;
#line 2390 "inst_util.m"
                  }
#line 2390 "inst_util.m"
                  continue;
#line 2388 "inst_util.m"
                }
#line 2378 "inst_util.m"
                break;
#line 2378 "inst_util.m"
            }
#line 2378 "inst_util.m"
            break;
#line 2378 "inst_util.m"
        }
#line 2378 "inst_util.m"
        return check_hlds__inst_util__MayRestrict_6;
#line 2378 "inst_util.m"
      }
#line 2378 "inst_util.m"
      break;
#line 2378 "inst_util.m"
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
#line 2263 "inst_util.m"
  {
#line 2263 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2263 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_4;
#line 2263 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_16_16;
#line 2263 "inst_util.m"
    MR_Word check_hlds__inst_util__InMode_5;
#line 2263 "inst_util.m"
    MR_Word check_hlds__inst_util__OutMode_6;
#line 2263 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_7;
#line 2263 "inst_util.m"
    MR_Word check_hlds__inst_util__V_8_8;
#line 2263 "inst_util.m"
    MR_Integer check_hlds__inst_util__V_9_9;
#line 2263 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2264 "inst_util.m"
    {
#line 2264 "inst_util.m"
      parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__inst_util__InMode_5);
    }
#line 2265 "inst_util.m"
    {
#line 2265 "inst_util.m"
      parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__inst_util__OutMode_6);
    }
#line 11878 "check_hlds.inst_util.c"
    check_hlds__inst_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2266 "inst_util.m"
    check_hlds__inst_util__V_9_9 = (check_hlds__inst_util__Arity_3 - (MR_Integer) 1);
#line 2266 "inst_util.m"
    {
#line 2266 "inst_util.m"
      check_hlds__inst_util__V_8_8 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_9_9, ((MR_Box) (check_hlds__inst_util__InMode_5)));
    }
#line 2266 "inst_util.m"
    {
#line 2266 "inst_util.m"
      check_hlds__inst_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2266 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 0) = ((MR_Box) (check_hlds__inst_util__OutMode_6));
#line 2266 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2266 "inst_util.m"
    }
#line 2266 "inst_util.m"
    {
#line 2266 "inst_util.m"
      check_hlds__inst_util__ArgModes_7 = mercury__list__f_43_43_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_8_8, check_hlds__inst_util__V_11_11);
    }
#line 2267 "inst_util.m"
    {
#line 2267 "inst_util.m"
      check_hlds__inst_util__PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2267 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 2267 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 1) = ((MR_Box) (check_hlds__inst_util__ArgModes_7));
#line 2267 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2267 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2267 "inst_util.m"
    }
#line 2263 "inst_util.m"
    return check_hlds__inst_util__PredInstInfo_4;
#line 2263 "inst_util.m"
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
#line 2259 "inst_util.m"
  {
#line 2259 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 2259 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_14;
#line 2259 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_5;
#line 2259 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_8;
#line 2259 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_11;
#line 2259 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 2254 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9;
#line 2254 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;

#line 2260 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2260 "inst_util.m"
      {
#line 2260 "inst_util.m"
        check_hlds__inst_util__PredInstInfo_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfo_4), (MR_Integer) 1);
#line 2254 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 0)));
#line 2254 "inst_util.m"
        check_hlds__inst_util__ArgModes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 1)));
#line 2254 "inst_util.m"
        check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 2)));
#line 2254 "inst_util.m"
        check_hlds__inst_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 3)));
#line 2254 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_12_12 == (MR_Integer) 1);
#line 2259 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2259 "inst_util.m"
          {
#line 11973 "check_hlds.inst_util.c"
            check_hlds__inst_util__TypeCtorInfo_11_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2255 "inst_util.m"
            {
#line 2255 "inst_util.m"
              check_hlds__inst_util__Arity_11 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_14, check_hlds__inst_util__ArgModes_8);
            }
#line 2257 "inst_util.m"
            {
#line 2257 "inst_util.m"
              check_hlds__inst_util__V_13_13 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_11);
            }
#line 2256 "inst_util.m"
            {
#line 2256 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_5, check_hlds__inst_util__V_13_13, check_hlds__inst_util__ModuleInfo_3);
            }
#line 2256 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2259 "inst_util.m"
          }
#line 2260 "inst_util.m"
      }
#line 2259 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2259 "inst_util.m"
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
#line 2253 "inst_util.m"
  {
#line 2253 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2253 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_11;
#line 2253 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 1)));
#line 2253 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_8;
#line 2253 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 0)));
#line 2254 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 2)));
#line 2254 "inst_util.m"
    MR_Word check_hlds__inst_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 3)));
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;

#line 2254 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_9_9 == (MR_Integer) 1);
#line 2253 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2253 "inst_util.m"
      {
#line 12037 "check_hlds.inst_util.c"
        check_hlds__inst_util__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2255 "inst_util.m"
        {
#line 2255 "inst_util.m"
          check_hlds__inst_util__Arity_8 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_11, check_hlds__inst_util__ArgModes_5);
        }
#line 2257 "inst_util.m"
        {
#line 2257 "inst_util.m"
          check_hlds__inst_util__V_10_10 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_8);
        }
#line 2256 "inst_util.m"
        {
#line 2256 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_4, check_hlds__inst_util__V_10_10, check_hlds__inst_util__ModuleInfo_3);
        }
#line 2256 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2253 "inst_util.m"
      }
#line 2253 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2253 "inst_util.m"
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
#line 2365 "inst_util.m"
  {
#line 2365 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2365 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst_7;
#line 2365 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_10;
#line 2365 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2366 "inst_util.m"
    {
#line 2366 "inst_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__inst_util__Instmap_5, check_hlds__inst_util__Var_6, &check_hlds__inst_util__Inst_7);
    }
#line 2273 "inst_util.m"
    {
#line 2273 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_10);
    }
#line 2274 "inst_util.m"
    {
#line 2274 "inst_util.m"
      check_hlds__inst_util__V_11_11 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__Inst_7, check_hlds__inst_util__Expansions_10);
    }
#line 2274 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_11_11 == (MR_Integer) 1);
#line 2365 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2365 "inst_util.m"
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
#line 2272 "inst_util.m"
  {
#line 2272 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2272 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_5;
#line 2272 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2273 "inst_util.m"
    {
#line 2273 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_5);
    }
#line 2274 "inst_util.m"
    {
#line 2274 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions_5);
    }
#line 2274 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2272 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2272 "inst_util.m"
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
#line 2155 "inst_util.m"
  {
#line 2155 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2155 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_5;
#line 2155 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2156 "inst_util.m"
    {
#line 2156 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_5);
    }
#line 2157 "inst_util.m"
    {
#line 2157 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions0_5);
    }
#line 2157 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2155 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2155 "inst_util.m"
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
#line 1722 "inst_util.m"
  {
#line 1722 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1718 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 1718 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;
#line 1718 "inst_util.m"
    MR_Word check_hlds__inst_util__V_14_14;
#line 1719 "inst_util.m"
    MR_Word check_hlds__inst_util__V_15_15;
#line 1719 "inst_util.m"
    MR_Word check_hlds__inst_util__V_16_16;
#line 1719 "inst_util.m"
    MR_Word check_hlds__inst_util__V_17_17;

#line 1718 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1718 "inst_util.m"
      {
#line 1718 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1718 "inst_util.m"
        check_hlds__inst_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1718 "inst_util.m"
        check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1719 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1719 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1719 "inst_util.m"
          {
#line 1719 "inst_util.m"
            check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1719 "inst_util.m"
            check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1719 "inst_util.m"
            check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1719 "inst_util.m"
          }
#line 1718 "inst_util.m"
      }
#line 1722 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1721 "inst_util.m"
      {
#line 1721 "inst_util.m"
        return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
      }
#line 1722 "inst_util.m"
    else
#line 1724 "inst_util.m"
      {
#line 1724 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_18;
#line 1724 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable0_19;
#line 1724 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstInfo_20;
#line 1724 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstName_21;
#line 1724 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeMergedInst_22;
#line 1724 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable1_23;
#line 1724 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_25;

#line 1724 "inst_util.m"
        {
#line 1724 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__InstTable0_18);
        }
#line 1725 "inst_util.m"
        {
#line 1725 "inst_util.m"
          hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__MergeInstTable0_19);
        }
#line 1726 "inst_util.m"
        {
#line 1726 "inst_util.m"
          check_hlds__inst_util__MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1726 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1726 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1726 "inst_util.m"
        }
#line 1727 "inst_util.m"
        {
#line 1727 "inst_util.m"
          check_hlds__inst_util__MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1727 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1727 "inst_util.m"
        }
#line 1728 "inst_util.m"
        {
#line 1728 "inst_util.m"
          hlds__hlds_data__search_insert_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, &check_hlds__inst_util__MaybeMaybeMergedInst_22, check_hlds__inst_util__MergeInstTable0_19, &check_hlds__inst_util__MergeInstTable1_23);
        }
#line 1738 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeMergedInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1739 "inst_util.m"
          {
#line 1739 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_26;
#line 1739 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_27;
#line 1739 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable2_28;
#line 1739 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable3_29;
#line 1739 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable3_30;
#line 1739 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34;
#line 1739 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35;
#line 1739 "inst_util.m"
            MR_Word check_hlds__inst_util__V_36_36;

#line 1742 "inst_util.m"
            {
#line 1742 "inst_util.m"
              hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable1_23, check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__InstTable1_26);
            }
#line 1744 "inst_util.m"
            {
#line 1744 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34);
            }
#line 1747 "inst_util.m"
            {
#line 1747 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35);
            }
#line 1739 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1739 "inst_util.m"
              {
#line 1750 "inst_util.m"
                {
#line 1750 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__inst_util__InstTable2_27);
                }
#line 1751 "inst_util.m"
                {
#line 1751 "inst_util.m"
                  hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__MergeInstTable2_28);
                }
#line 1752 "inst_util.m"
                {
#line 1752 "inst_util.m"
                  check_hlds__inst_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1752 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_36_36, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_25));
#line 1752 "inst_util.m"
                }
#line 1752 "inst_util.m"
                {
#line 1752 "inst_util.m"
                  hlds__hlds_data__det_update_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, check_hlds__inst_util__V_36_36, check_hlds__inst_util__MergeInstTable2_28, &check_hlds__inst_util__MergeInstTable3_29);
                }
#line 1754 "inst_util.m"
                {
#line 1754 "inst_util.m"
                  hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable3_29, check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__InstTable3_30);
                }
#line 1756 "inst_util.m"
                {
#line 1756 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable3_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
                }
#line 1756 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1739 "inst_util.m"
              }
#line 1739 "inst_util.m"
          }
#line 1738 "inst_util.m"
        else
#line 1731 "inst_util.m"
          {
#line 1731 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeMergedInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeMergedInst_22, (MR_Integer) 0)));

#line 1734 "inst_util.m"
            if ((check_hlds__inst_util__MaybeMergedInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1736 "inst_util.m"
              {
#line 1736 "inst_util.m"
                check_hlds__inst_util__Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1736 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1736 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1736 "inst_util.m"
              }
#line 1734 "inst_util.m"
            else
#line 1733 "inst_util.m"
              check_hlds__inst_util__Inst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMergedInst_24, (MR_Integer) 0)));
#line 1731 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31;
#line 1731 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1731 "inst_util.m"
          }
#line 1724 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1724 "inst_util.m"
          {
#line 1759 "inst_util.m"
            {
#line 1759 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_25, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32, check_hlds__inst_util__MergeInstName_21);
            }
#line 1761 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1760 "inst_util.m"
              {
#line 1760 "inst_util.m"
                MR_Word base;
#line 1760 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1760 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = base;
#line 1760 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1760 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1760 "inst_util.m"
              }
#line 1761 "inst_util.m"
            else
#line 1762 "inst_util.m"
              *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_25;
#line 1761 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1724 "inst_util.m"
          }
#line 1724 "inst_util.m"
      }
#line 1722 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1722 "inst_util.m"
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
#line 1437 "inst_util.m"
  {
#line 1437 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1437 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1437 "inst_util.m"
      {
#line 1437 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1437 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1437 "inst_util.m"
      }
#line 1437 "inst_util.m"
    else
#line 1438 "inst_util.m"
      {
#line 1438 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1438 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1438 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1438 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1438 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1439 "inst_util.m"
        {
#line 1439 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1440 "inst_util.m"
        {
#line 1440 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1438 "inst_util.m"
        {
#line 1438 "inst_util.m"
          MR_Word base;
#line 1438 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1438 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1438 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1438 "inst_util.m"
        }
#line 1438 "inst_util.m"
      }
#line 1437 "inst_util.m"
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
#line 1584 "inst_util.m"
  {
#line 1584 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1584 "inst_util.m"
#line 1584 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
#line 1584 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1584 "inst_util.m"
      case (MR_Integer) 0:
#line 1584 "inst_util.m"
        {
#line 1585 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1584 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1584 "inst_util.m"
        }
#line 1584 "inst_util.m"
        break;
#line 1584 "inst_util.m"
      case (MR_Integer) 1:
#line 1584 "inst_util.m"
        {
#line 1585 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1584 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1584 "inst_util.m"
        }
#line 1584 "inst_util.m"
        break;
#line 1584 "inst_util.m"
      case (MR_Integer) 2:
#line 1587 "inst_util.m"
        {
#line 1587 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1587 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1587 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[0 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1589 "inst_util.m"
          {
#line 1589 "inst_util.m"
            MR_Word base;
#line 1589 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1589 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1589 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1589 "inst_util.m"
          }
#line 1587 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1587 "inst_util.m"
        }
#line 1584 "inst_util.m"
        break;
#line 1584 "inst_util.m"
      case (MR_Integer) 3:
#line 1584 "inst_util.m"
#line 1584 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
#line 1584 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1584 "inst_util.m"
          case (MR_Integer) 0:
#line 1591 "inst_util.m"
            {
#line 1591 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1591 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1591 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1591 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_51 = ((&check_hlds__inst_util_vector_common_2[5 + check_hlds__inst_util__Uniq0_50]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
#line 1591 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));

#line 1594 "inst_util.m"
              {
#line 1594 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1596 "inst_util.m"
              {
#line 1596 "inst_util.m"
                MR_Word base;
#line 1596 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1596 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1596 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1596 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_51));
#line 1596 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1596 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1596 "inst_util.m"
              }
#line 1591 "inst_util.m"
            }
#line 1584 "inst_util.m"
            break;
#line 1584 "inst_util.m"
          case (MR_Integer) 1:
#line 1598 "inst_util.m"
            {
#line 1598 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1598 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1598 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_53 = ((&check_hlds__inst_util_vector_common_2[10 + check_hlds__inst_util__Uniq0_52]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1600 "inst_util.m"
              {
#line 1600 "inst_util.m"
                MR_Word base;
#line 1600 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1600 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1600 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_53));
#line 1600 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1600 "inst_util.m"
              }
#line 1598 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1598 "inst_util.m"
            }
#line 1584 "inst_util.m"
            break;
#line 1584 "inst_util.m"
          case (MR_Integer) 2:
#line 1602 "inst_util.m"
            {
#line 1603 "inst_util.m"
              {
#line 1603 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
#line 1603 "inst_util.m"
                return;
              }
#line 1602 "inst_util.m"
            }
#line 1584 "inst_util.m"
            break;
#line 1584 "inst_util.m"
          case (MR_Integer) 3:
#line 1605 "inst_util.m"
            {
#line 1605 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1605 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1605 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst_19;

#line 1606 "inst_util.m"
              {
#line 1606 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1607 "inst_util.m"
              {
#line 1607 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1607 "inst_util.m"
              check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1609 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1608 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst_19;
#line 1609 "inst_util.m"
              else
#line 1610 "inst_util.m"
                {
#line 1610 "inst_util.m"
                  MR_Word base;
#line 1610 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1610 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1610 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1610 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst_19));
#line 1610 "inst_util.m"
                }
#line 1605 "inst_util.m"
            }
#line 1584 "inst_util.m"
            break;
#line 1584 "inst_util.m"
          case (MR_Integer) 4:
#line 1616 "inst_util.m"
            {
#line 1616 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1616 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_23;
#line 1616 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInstTable0_24;
#line 1616 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1616 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInstTable1_26;
#line 1616 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInst_28;

#line 1618 "inst_util.m"
              {
#line 1618 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__InstTable0_23);
              }
#line 1619 "inst_util.m"
              {
#line 1619 "inst_util.m"
                hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__MostlyUniqInstTable0_24);
              }
#line 1620 "inst_util.m"
              {
#line 1620 "inst_util.m"
                hlds__hlds_data__search_insert_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__MostlyUniqInstTable0_24, &check_hlds__inst_util__MostlyUniqInstTable1_26);
              }
#line 1630 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1631 "inst_util.m"
                {
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_29;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_30;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_31;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable2_32;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable_33;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_34;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_39_39;
#line 1631 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_54;

#line 1634 "inst_util.m"
                  {
#line 1634 "inst_util.m"
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
#line 1636 "inst_util.m"
                  {
#line 1636 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
#line 1640 "inst_util.m"
                  {
#line 1640 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_54);
                  }
#line 1641 "inst_util.m"
                  {
#line 1641 "inst_util.m"
                    check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__SubInst0_54, &check_hlds__inst_util__SubInst1_30);
                  }
#line 1642 "inst_util.m"
                  {
#line 1642 "inst_util.m"
                    check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst1_30, &check_hlds__inst_util__MostlyUniqInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38);
                  }
#line 1647 "inst_util.m"
                  {
#line 1647 "inst_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__inst_util__InstTable2_31);
                  }
#line 1648 "inst_util.m"
                  {
#line 1648 "inst_util.m"
                    hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__MostlyUniqInstTable2_32);
                  }
#line 1649 "inst_util.m"
                  {
#line 1649 "inst_util.m"
                    check_hlds__inst_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1649 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_39_39, 0) = ((MR_Box) (check_hlds__inst_util__MostlyUniqInst_28));
#line 1649 "inst_util.m"
                  }
#line 1649 "inst_util.m"
                  {
#line 1649 "inst_util.m"
                    hlds__hlds_data__det_update_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_39_39, check_hlds__inst_util__MostlyUniqInstTable2_32, &check_hlds__inst_util__MostlyUniqInstTable_33);
                  }
#line 1651 "inst_util.m"
                  {
#line 1651 "inst_util.m"
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable_33, check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__InstTable_34);
                  }
#line 1653 "inst_util.m"
                  {
#line 1653 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
                  }
#line 1631 "inst_util.m"
                }
#line 1630 "inst_util.m"
              else
#line 1623 "inst_util.m"
                {
#line 1623 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1626 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1628 "inst_util.m"
                    check_hlds__inst_util__MostlyUniqInst_28 = check_hlds__inst_util__Inst0_5;
#line 1626 "inst_util.m"
                  else
#line 1625 "inst_util.m"
                    check_hlds__inst_util__MostlyUniqInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1623 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1623 "inst_util.m"
                }
#line 1656 "inst_util.m"
              {
#line 1656 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__MostlyUniqInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36, check_hlds__inst_util__InstName_22);
              }
#line 1658 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1657 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1658 "inst_util.m"
              else
#line 1659 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__MostlyUniqInst_28;
#line 1616 "inst_util.m"
            }
#line 1584 "inst_util.m"
            break;
#line 1584 "inst_util.m"
          case (MR_Integer) 5:
#line 1613 "inst_util.m"
            {
#line 1614 "inst_util.m"
              {
#line 1614 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
#line 1614 "inst_util.m"
                return;
              }
#line 1613 "inst_util.m"
            }
#line 1584 "inst_util.m"
            break;
#line 1584 "inst_util.m"
        }
#line 1584 "inst_util.m"
        break;
#line 1584 "inst_util.m"
    }
#line 1584 "inst_util.m"
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
#line 699 "inst_util.m"
  {
#line 699 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 699 "inst_util.m"
    MR_Word check_hlds__inst_util__InstA_22;

#line 700 "inst_util.m"
    {
#line 700 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__InstA0_13, &check_hlds__inst_util__InstA_22);
    }
#line 701 "inst_util.m"
    {
#line 701 "inst_util.m"
      return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__InstA_22, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, check_hlds__inst_util__Inst_19, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
    }
#line 699 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 699 "inst_util.m"
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
#line 167 "inst_util.m"
  {
#line 167 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 167 "inst_util.m"
    MR_Word check_hlds__inst_util__InstTable0_16;
#line 167 "inst_util.m"
    MR_Word check_hlds__inst_util__UnifyInstTable0_17;

#line 169 "inst_util.m"
    {
#line 169 "inst_util.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__InstTable0_16);
    }
#line 170 "inst_util.m"
    {
#line 170 "inst_util.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__UnifyInstTable0_17);
    }
#line 189 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 190 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 193 "inst_util.m"
      {
#line 193 "inst_util.m"
        return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
      }
#line 195 "inst_util.m"
    else
#line 196 "inst_util.m"
      {
#line 196 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstInfo_18;
#line 196 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstName_19;
#line 196 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_20;
#line 196 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstTable1_21;
#line 196 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_23;

#line 196 "inst_util.m"
        {
#line 196 "inst_util.m"
          check_hlds__inst_util__UnifyInstInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 196 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 196 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 196 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 196 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 196 "inst_util.m"
        }
#line 197 "inst_util.m"
        {
#line 197 "inst_util.m"
          check_hlds__inst_util__UnifyInstName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 197 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 197 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 197 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 197 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 197 "inst_util.m"
        }
#line 198 "inst_util.m"
        {
#line 198 "inst_util.m"
          hlds__hlds_data__search_insert_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, &check_hlds__inst_util__MaybeMaybeInst_20, check_hlds__inst_util__UnifyInstTable0_17, &check_hlds__inst_util__UnifyInstTable1_21);
        }
#line 214 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "inst_util.m"
          {
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_24;
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_25;
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable2_26;
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable_27;
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_28;
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32;
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;
#line 215 "inst_util.m"
            MR_Word check_hlds__inst_util__V_34_34;

#line 218 "inst_util.m"
            {
#line 218 "inst_util.m"
              hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable1_21, check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__InstTable1_24);
            }
#line 220 "inst_util.m"
            {
#line 220 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32);
            }
#line 222 "inst_util.m"
            {
#line 222 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_23, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 215 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 215 "inst_util.m"
              {
#line 226 "inst_util.m"
                {
#line 226 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__inst_util__InstTable2_25);
                }
#line 227 "inst_util.m"
                {
#line 227 "inst_util.m"
                  hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__UnifyInstTable2_26);
                }
#line 228 "inst_util.m"
                {
#line 228 "inst_util.m"
                  check_hlds__inst_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_23));
#line 228 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 228 "inst_util.m"
                }
#line 228 "inst_util.m"
                {
#line 228 "inst_util.m"
                  hlds__hlds_data__det_update_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, check_hlds__inst_util__V_34_34, check_hlds__inst_util__UnifyInstTable2_26, &check_hlds__inst_util__UnifyInstTable_27);
                }
#line 230 "inst_util.m"
                {
#line 230 "inst_util.m"
                  hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable_27, check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__InstTable_28);
                }
#line 231 "inst_util.m"
                {
#line 231 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
                }
#line 231 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 215 "inst_util.m"
              }
#line 215 "inst_util.m"
          }
#line 214 "inst_util.m"
        else
#line 201 "inst_util.m"
          {
#line 201 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_20, (MR_Integer) 0)));

#line 204 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "inst_util.m"
              {
#line 206 "inst_util.m"
                {
#line 206 "inst_util.m"
                  check_hlds__inst_util__Inst0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 206 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 206 "inst_util.m"
                }
#line 212 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 205 "inst_util.m"
              }
#line 204 "inst_util.m"
            else
#line 203 "inst_util.m"
              {
#line 203 "inst_util.m"
                check_hlds__inst_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 0)));
#line 203 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 1)));
#line 203 "inst_util.m"
              }
#line 201 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29;
#line 201 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 201 "inst_util.m"
          }
#line 196 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 196 "inst_util.m"
          {
#line 234 "inst_util.m"
            {
#line 234 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_23, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30, check_hlds__inst_util__UnifyInstName_19);
            }
#line 236 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 235 "inst_util.m"
              {
#line 235 "inst_util.m"
                MR_Word base;
#line 235 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 235 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 235 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 235 "inst_util.m"
              }
#line 236 "inst_util.m"
            else
#line 237 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_23;
#line 236 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 196 "inst_util.m"
          }
#line 196 "inst_util.m"
      }
#line 167 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 167 "inst_util.m"
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
