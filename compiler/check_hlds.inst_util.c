/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 1659 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

#line 2275 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2275 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2275 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2275 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2261 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2261 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2261 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2261 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2205 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2205 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2205 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2205 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27);

#line 2161 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2144 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2087 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2087 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2087 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2087 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27);

#line 2043 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2043 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2043 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);

#line 2026 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2026 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2026 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2026 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2026 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2026 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2026 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);

#line 1988 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 1988 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 1988 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);

#line 1946 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 1946 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1946 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 1946 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1946 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 1946 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 1946 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11);

#line 1937 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 1937 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1937 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1937 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1937 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1937 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1937 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 1925 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 1925 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1925 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1925 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1925 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1925 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1925 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 1916 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 1916 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 1916 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 1916 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 1916 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1916 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10);

#line 1885 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1885 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1885 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1885 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1885 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1885 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13);

#line 1876 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1876 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1876 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1876 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6);

#line 1750 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1750 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1750 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1750 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1750 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1750 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1750 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);

#line 1722 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1722 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1722 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);

#line 1702 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1702 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1702 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1702 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1702 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1702 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1702 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);

#line 1644 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1644 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1644 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1644 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1644 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1633 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1633 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1633 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1633 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1633 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1531 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1531 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1531 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1531 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1531 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1416 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1416 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1416 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1416 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1416 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);

#line 1389 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);

#line 1369 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1369 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1369 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1369 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 1358 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1358 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1358 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1358 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1342 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1342 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1342 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1342 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1239 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1239 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1239 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1239 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);

#line 1218 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1218 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1218 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1218 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1121 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1121 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1121 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1121 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);

#line 1106 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1087 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1087 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1087 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1087 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 970 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 970 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12);

#line 923 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 923 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 923 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 923 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);

#line 907 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 888 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 888 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 888 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 888 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 845 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 845 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 845 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 845 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 810 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 810 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 810 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 810 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);

#line 683 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);

#line 659 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 659 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 659 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 659 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 245 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 245 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 245 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61,
#line 245 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);

#line 229 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 229 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 229 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_16,
#line 229 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_17);


static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[2][3];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_2[3][2];




static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_2[3][2] = {
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1659 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
#line 1659 "inst_util.m"
{
#line 1661 "inst_util.m"
  {
#line 1661 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1661 "inst_util.m"
  }
#line 1659 "inst_util.m"
}

#line 2275 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2275 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2275 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2275 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2275 "inst_util.m"
{
#line 2278 "inst_util.m"
  while (MR_TRUE)
#line 2278 "inst_util.m"
    {
#line 2278 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2278 "inst_util.m"
      {
#line 2278 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2278 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2278 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2278 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2278 "inst_util.m"
        else
#line 2280 "inst_util.m"
          {
#line 2280 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2280 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2280 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2280 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_14;
#line 2281 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2282 "inst_util.m"
            {
#line 2282 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_14 = check_hlds__inst_util__inst_list_contains_any_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2287 "inst_util.m"
            if ((check_hlds__inst_util__HeadContainsAny_14 == (MR_Integer) 0))
#line 2289 "inst_util.m"
              {
#line 2289 "inst_util.m"
                /* direct tailcall eliminated */
#line 2289 "inst_util.m"
                {
#line 2289 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2289 "inst_util.m"
                  check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2289 "inst_util.m"
                }
#line 2289 "inst_util.m"
                continue;
#line 2289 "inst_util.m"
              }
#line 2287 "inst_util.m"
            else
#line 2286 "inst_util.m"
              check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2280 "inst_util.m"
          }
#line 2278 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2278 "inst_util.m"
      }
#line 2278 "inst_util.m"
      break;
#line 2278 "inst_util.m"
    }
#line 2275 "inst_util.m"
}

#line 2261 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2261 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2261 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2261 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2261 "inst_util.m"
{
#line 2264 "inst_util.m"
  while (MR_TRUE)
#line 2264 "inst_util.m"
    {
#line 2264 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2264 "inst_util.m"
      {
#line 2264 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2264 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2264 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2264 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2264 "inst_util.m"
        else
#line 2265 "inst_util.m"
          {
#line 2265 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2265 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2265 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_12;

#line 2266 "inst_util.m"
            {
#line 2266 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_12 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2270 "inst_util.m"
            if ((check_hlds__inst_util__HeadContainsAny_12 == (MR_Integer) 0))
#line 2272 "inst_util.m"
              {
#line 2272 "inst_util.m"
                /* direct tailcall eliminated */
#line 2272 "inst_util.m"
                {
#line 2272 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2272 "inst_util.m"
                  check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2272 "inst_util.m"
                }
#line 2272 "inst_util.m"
                continue;
#line 2272 "inst_util.m"
              }
#line 2270 "inst_util.m"
            else
#line 2269 "inst_util.m"
              check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2265 "inst_util.m"
          }
#line 2264 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2264 "inst_util.m"
      }
#line 2264 "inst_util.m"
      break;
#line 2264 "inst_util.m"
    }
#line 2261 "inst_util.m"
}

#line 2205 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2205 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2205 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2205 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27)
#line 2205 "inst_util.m"
{
#line 2209 "inst_util.m"
  while (MR_TRUE)
#line 2209 "inst_util.m"
    {
#line 2209 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2209 "inst_util.m"
      {
#line 2209 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2209 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsAny_8;

#line 2209 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 2210 "inst_util.m"
          check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2209 "inst_util.m"
        else
#line 2209 "inst_util.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2212 "inst_util.m"
            {
#line 2212 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2212 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2212 "inst_util.m"
              MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2216 "inst_util.m"
              if ((check_hlds__inst_util__InstResults_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2231 "inst_util.m"
                {
#line 2231 "inst_util.m"
                  return check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27);
                }
#line 2216 "inst_util.m"
              else
#line 2216 "inst_util.m"
                if ((check_hlds__inst_util__InstResults_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2215 "inst_util.m"
                  check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2216 "inst_util.m"
                else
#line 2217 "inst_util.m"
                  {
#line 2217 "inst_util.m"
                    MR_Word check_hlds__inst_util__AnyResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 1)));
#line 2217 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 0)));
#line 2217 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 2)));
#line 2217 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 3)));

#line 2221 "inst_util.m"
                    if ((check_hlds__inst_util__AnyResults_15 == (MR_Integer) 2))
#line 2226 "inst_util.m"
                      {
#line 2226 "inst_util.m"
                        return check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27);
                      }
#line 2221 "inst_util.m"
                    else
#line 2221 "inst_util.m"
                      if ((check_hlds__inst_util__AnyResults_15 == (MR_Integer) 1))
#line 2223 "inst_util.m"
                        check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2221 "inst_util.m"
                      else
#line 2220 "inst_util.m"
                        check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2217 "inst_util.m"
                  }
#line 2212 "inst_util.m"
            }
#line 2209 "inst_util.m"
          else
#line 2209 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2248 "inst_util.m"
              {
#line 2248 "inst_util.m"
                MR_Word check_hlds__inst_util__SubInst_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2248 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2250 "inst_util.m"
                /* direct tailcall eliminated */
#line 2250 "inst_util.m"
                {
#line 2250 "inst_util.m"
                  MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_42;

#line 2250 "inst_util.m"
                  check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2250 "inst_util.m"
                }
#line 2250 "inst_util.m"
                continue;
#line 2248 "inst_util.m"
              }
#line 2209 "inst_util.m"
            else
#line 2209 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2238 "inst_util.m"
                {
#line 2238 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2239 "inst_util.m"
                  {
#line 2239 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_19)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27);
                  }
#line 2241 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2240 "inst_util.m"
                    check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2241 "inst_util.m"
                  else
#line 2242 "inst_util.m"
                    {
#line 2242 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_20;
#line 2242 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_28_38;

#line 2242 "inst_util.m"
                      {
#line 2242 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_19)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27, &check_hlds__inst_util__STATE_VARIABLE_Expansions_28_38);
                      }
#line 2243 "inst_util.m"
                      {
#line 2243 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_19, &check_hlds__inst_util__SubInst_20);
                      }
#line 2244 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2244 "inst_util.m"
                      {
#line 2244 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_20;
#line 2244 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_28_38;

#line 2244 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_27;
#line 2244 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2244 "inst_util.m"
                      }
#line 2244 "inst_util.m"
                      continue;
#line 2242 "inst_util.m"
                    }
#line 2238 "inst_util.m"
                }
#line 2209 "inst_util.m"
              else
#line 2209 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2235 "inst_util.m"
                  {
#line 2236 "inst_util.m"
                    {
#line 2236 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
                    }
#line 2235 "inst_util.m"
                  }
#line 2209 "inst_util.m"
                else
#line 2258 "inst_util.m"
                  check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2209 "inst_util.m"
        return check_hlds__inst_util__ContainsAny_8;
#line 2209 "inst_util.m"
      }
#line 2209 "inst_util.m"
      break;
#line 2209 "inst_util.m"
    }
#line 2205 "inst_util.m"
}

#line 2161 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2161 "inst_util.m"
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
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2165 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2165 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2165 "inst_util.m"
        else
#line 2167 "inst_util.m"
          {
#line 2167 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2167 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2167 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2167 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_14;
#line 2168 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2169 "inst_util.m"
            {
#line 2169 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_14 = check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2174 "inst_util.m"
            if ((check_hlds__inst_util__HeadContainsNonstd_14 == (MR_Integer) 0))
#line 2176 "inst_util.m"
              {
#line 2176 "inst_util.m"
                /* direct tailcall eliminated */
#line 2176 "inst_util.m"
                {
#line 2176 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2176 "inst_util.m"
                  check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2176 "inst_util.m"
                }
#line 2176 "inst_util.m"
                continue;
#line 2176 "inst_util.m"
              }
#line 2174 "inst_util.m"
            else
#line 2173 "inst_util.m"
              check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2167 "inst_util.m"
          }
#line 2165 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2165 "inst_util.m"
      }
#line 2165 "inst_util.m"
      break;
#line 2165 "inst_util.m"
    }
#line 2161 "inst_util.m"
}

#line 2144 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2144 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2144 "inst_util.m"
{
#line 2147 "inst_util.m"
  while (MR_TRUE)
#line 2147 "inst_util.m"
    {
#line 2147 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2147 "inst_util.m"
      {
#line 2147 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2147 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2147 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2147 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2147 "inst_util.m"
        else
#line 2149 "inst_util.m"
          {
#line 2149 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2149 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2149 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_12;

#line 2150 "inst_util.m"
            {
#line 2150 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_12 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2155 "inst_util.m"
            if ((check_hlds__inst_util__HeadContainsNonstd_12 == (MR_Integer) 0))
#line 2157 "inst_util.m"
              {
#line 2157 "inst_util.m"
                /* direct tailcall eliminated */
#line 2157 "inst_util.m"
                {
#line 2157 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2157 "inst_util.m"
                  check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2157 "inst_util.m"
                }
#line 2157 "inst_util.m"
                continue;
#line 2157 "inst_util.m"
              }
#line 2155 "inst_util.m"
            else
#line 2154 "inst_util.m"
              check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2149 "inst_util.m"
          }
#line 2147 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2147 "inst_util.m"
      }
#line 2147 "inst_util.m"
      break;
#line 2147 "inst_util.m"
    }
#line 2144 "inst_util.m"
}

#line 2087 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2087 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2087 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2087 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27)
#line 2087 "inst_util.m"
{
#line 2093 "inst_util.m"
  while (MR_TRUE)
#line 2093 "inst_util.m"
    {
#line 2093 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2093 "inst_util.m"
      {
#line 2093 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2093 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsNonstd_8;

#line 2093 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 2141 "inst_util.m"
          check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2093 "inst_util.m"
        else
#line 2093 "inst_util.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2100 "inst_util.m"
            {
#line 2100 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2100 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2100 "inst_util.m"
              MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2104 "inst_util.m"
              if ((check_hlds__inst_util__InstResults_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2103 "inst_util.m"
                check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2104 "inst_util.m"
              else
#line 2108 "inst_util.m"
                {
#line 2108 "inst_util.m"
                  return check_hlds__inst_util__ContainsNonstd_8 = check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27);
                }
#line 2100 "inst_util.m"
            }
#line 2093 "inst_util.m"
          else
#line 2093 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2125 "inst_util.m"
              {
#line 2125 "inst_util.m"
                MR_Word check_hlds__inst_util__SubInst_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2125 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2127 "inst_util.m"
                /* direct tailcall eliminated */
#line 2127 "inst_util.m"
                {
#line 2127 "inst_util.m"
                  MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_42;

#line 2127 "inst_util.m"
                  check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2127 "inst_util.m"
                }
#line 2127 "inst_util.m"
                continue;
#line 2125 "inst_util.m"
              }
#line 2093 "inst_util.m"
            else
#line 2093 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2115 "inst_util.m"
                {
#line 2115 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2116 "inst_util.m"
                  {
#line 2116 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_19)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27);
                  }
#line 2118 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2117 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2118 "inst_util.m"
                  else
#line 2119 "inst_util.m"
                    {
#line 2119 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_20;
#line 2119 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_28_38;

#line 2119 "inst_util.m"
                      {
#line 2119 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_19)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27, &check_hlds__inst_util__STATE_VARIABLE_Expansions_28_38);
                      }
#line 2120 "inst_util.m"
                      {
#line 2120 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_19, &check_hlds__inst_util__SubInst_20);
                      }
#line 2121 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2121 "inst_util.m"
                      {
#line 2121 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_20;
#line 2121 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_28_38;

#line 2121 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_27;
#line 2121 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2121 "inst_util.m"
                      }
#line 2121 "inst_util.m"
                      continue;
#line 2119 "inst_util.m"
                    }
#line 2115 "inst_util.m"
                }
#line 2093 "inst_util.m"
              else
#line 2093 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2093 "inst_util.m"
                  {
#line 2093 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2093 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2094 "inst_util.m"
                    {
#line 2094 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__HOInstInfo_10);
                    }
#line 2096 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2095 "inst_util.m"
                      check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 1;
#line 2096 "inst_util.m"
                    else
#line 2097 "inst_util.m"
                      check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2093 "inst_util.m"
                  }
#line 2093 "inst_util.m"
                else
#line 2093 "inst_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2112 "inst_util.m"
                    {
#line 2113 "inst_util.m"
                      {
#line 2113 "inst_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_nonstandard_func_mode_2\'/3", (MR_String) "uninstantiated inst parameter");
                      }
#line 2112 "inst_util.m"
                    }
#line 2093 "inst_util.m"
                  else
#line 2135 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2093 "inst_util.m"
        return check_hlds__inst_util__ContainsNonstd_8;
#line 2093 "inst_util.m"
      }
#line 2093 "inst_util.m"
      break;
#line 2093 "inst_util.m"
    }
#line 2087 "inst_util.m"
}

#line 2043 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2043 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2043 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27)
#line 2043 "inst_util.m"
{
#line 2050 "inst_util.m"
  {
#line 2050 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2050 "inst_util.m"
    if ((check_hlds__inst_util__BoundInstsA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2050 "inst_util.m"
      {
#line 2051 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsB_8;
#line 2051 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2050 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2050 "inst_util.m"
      }
#line 2050 "inst_util.m"
    else
#line 2050 "inst_util.m"
      {
#line 2050 "inst_util.m"
        MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 1)));
#line 2050 "inst_util.m"
        MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 0)));

#line 2050 "inst_util.m"
        if ((check_hlds__inst_util__BoundInstsB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2053 "inst_util.m"
          {
#line 2055 "inst_util.m"
            *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsA_7;
#line 2055 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2053 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2053 "inst_util.m"
          }
#line 2050 "inst_util.m"
        else
#line 2057 "inst_util.m"
          {
#line 2057 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 0)));
#line 2057 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsTailB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 1)));
#line 2057 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 0)));
#line 2057 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 1)));
#line 2057 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 0)));
#line 2057 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 1)));

#line 2061 "inst_util.m"
            {
#line 2061 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
            }
#line 2069 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2063 "inst_util.m"
              {
#line 2063 "inst_util.m"
                MR_Word check_hlds__inst_util__MaybeTypes_22;
#line 2063 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_23;
#line 2063 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInst_24;
#line 2063 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_25;
#line 2063 "inst_util.m"
                MR_Integer check_hlds__inst_util__V_28_28;
#line 2063 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29;

#line 2063 "inst_util.m"
                {
#line 2063 "inst_util.m"
                  check_hlds__inst_util__V_28_28 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_util__ArgsA_19);
                }
#line 2062 "inst_util.m"
                {
#line 2062 "inst_util.m"
                  check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__V_28_28, &check_hlds__inst_util__MaybeTypes_22);
                }
#line 2064 "inst_util.m"
                {
#line 2064 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_19, check_hlds__inst_util__ArgsB_21, check_hlds__inst_util__MaybeTypes_22, &check_hlds__inst_util__Args_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 2063 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2063 "inst_util.m"
                  {
#line 2065 "inst_util.m"
                    {
#line 2065 "inst_util.m"
                      check_hlds__inst_util__BoundInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2065 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_18));
#line 2065 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 1) = ((MR_Box) (check_hlds__inst_util__Args_23));
#line 2065 "inst_util.m"
                    }
#line 2066 "inst_util.m"
                    {
#line 2066 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2063 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2063 "inst_util.m"
                      {
#line 2068 "inst_util.m"
                        {
#line 2068 "inst_util.m"
                          MR_Word base;
#line 2068 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2068 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_24));
#line 2068 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_25));
#line 2068 "inst_util.m"
                        }
#line 2068 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2063 "inst_util.m"
                      }
#line 2063 "inst_util.m"
                  }
#line 2063 "inst_util.m"
              }
#line 2069 "inst_util.m"
            else
#line 2073 "inst_util.m"
              {
#line 2069 "inst_util.m"
                MR_Word check_hlds__inst_util__V_39_39;

#line 2069 "inst_util.m"
                {
#line 2069 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_39_39, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
                }
#line 2069 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_39_39);
#line 2073 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2071 "inst_util.m"
                  {
#line 2071 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_34;

#line 2070 "inst_util.m"
                    {
#line 2070 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2071 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2071 "inst_util.m"
                      {
#line 2072 "inst_util.m"
                        {
#line 2072 "inst_util.m"
                          MR_Word base;
#line 2072 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2072 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2072 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_41_41));
#line 2072 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_34));
#line 2072 "inst_util.m"
                        }
#line 2072 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2071 "inst_util.m"
                      }
#line 2071 "inst_util.m"
                  }
#line 2073 "inst_util.m"
                else
#line 2075 "inst_util.m"
                  {
#line 2075 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_35;

#line 2074 "inst_util.m"
                    {
#line 2074 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__BoundInstsA_7, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2075 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2075 "inst_util.m"
                      {
#line 2076 "inst_util.m"
                        {
#line 2076 "inst_util.m"
                          MR_Word base;
#line 2076 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2076 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2076 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInstB_16));
#line 2076 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_35));
#line 2076 "inst_util.m"
                        }
#line 2076 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2075 "inst_util.m"
                      }
#line 2075 "inst_util.m"
                  }
#line 2073 "inst_util.m"
              }
#line 2057 "inst_util.m"
          }
#line 2050 "inst_util.m"
      }
#line 2050 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2050 "inst_util.m"
  }
#line 2043 "inst_util.m"
}

#line 2026 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2026 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2026 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2026 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2026 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2026 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2026 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6)
#line 2026 "inst_util.m"
{
#line 2030 "inst_util.m"
  {
#line 2030 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2030 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2030 "inst_util.m"
      {
#line 2030 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2030 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2030 "inst_util.m"
          {
#line 2030 "inst_util.m"
            *check_hlds__inst_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2030 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 2030 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2030 "inst_util.m"
          }
#line 2030 "inst_util.m"
      }
#line 2030 "inst_util.m"
    else
#line 2032 "inst_util.m"
      {
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgB_13;
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsB_14;
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeType_15;
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeTypes_16;
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__Arg_17;
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__Args_18;
#line 2032 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22;

#line 2031 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2031 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2031 "inst_util.m"
          {
#line 2031 "inst_util.m"
            check_hlds__inst_util__ArgB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2031 "inst_util.m"
            check_hlds__inst_util__ArgsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2031 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 2031 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2031 "inst_util.m"
              {
#line 2031 "inst_util.m"
                check_hlds__inst_util__MaybeType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 2031 "inst_util.m"
                check_hlds__inst_util__MaybeTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 2033 "inst_util.m"
                {
#line 2033 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__ArgA_11, check_hlds__inst_util__ArgB_13, check_hlds__inst_util__MaybeType_15, &check_hlds__inst_util__Arg_17, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22);
                }
#line 2032 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2032 "inst_util.m"
                  {
#line 2034 "inst_util.m"
                    {
#line 2034 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_12, check_hlds__inst_util__ArgsB_14, check_hlds__inst_util__MaybeTypes_16, &check_hlds__inst_util__Args_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);
                    }
#line 2032 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2032 "inst_util.m"
                      {
#line 2032 "inst_util.m"
                        {
#line 2032 "inst_util.m"
                          MR_Word base;
#line 2032 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2032 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__4_4 = base;
#line 2032 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Arg_17));
#line 2032 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Args_18));
#line 2032 "inst_util.m"
                        }
#line 2032 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2032 "inst_util.m"
                      }
#line 2032 "inst_util.m"
                  }
#line 2031 "inst_util.m"
              }
#line 2031 "inst_util.m"
          }
#line 2032 "inst_util.m"
      }
#line 2030 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2030 "inst_util.m"
  }
#line 2026 "inst_util.m"
}

#line 1988 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 1988 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 1988 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 1988 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26)
#line 1988 "inst_util.m"
{
#line 1997 "inst_util.m"
  {
#line 1997 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1994 "inst_util.m"
    {
#line 1994 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_2_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
    }
#line 1997 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1995 "inst_util.m"
      {
#line 1995 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_16;
#line 1995 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_47;
#line 1995 "inst_util.m"
        MR_Word check_hlds__inst_util__Expansions0_48;
#line 1922 "inst_util.m"
        MR_Word check_hlds__inst_util___Expansions_49;

#line 1879 "inst_util.m"
        {
#line 1879 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
        }
#line 1881 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1880 "inst_util.m"
          check_hlds__inst_util__Uniq0_47 = check_hlds__inst_util__UniqA_9;
#line 1881 "inst_util.m"
        else
#line 1882 "inst_util.m"
          check_hlds__inst_util__Uniq0_47 = check_hlds__inst_util__UniqB_12;
#line 1921 "inst_util.m"
        {
#line 1921 "inst_util.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_48);
        }
#line 1922 "inst_util.m"
        {
#line 1922 "inst_util.m"
          check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_48, &check_hlds__inst_util___Expansions_49, &check_hlds__inst_util__Uniq_16);
        }
#line 1996 "inst_util.m"
        {
#line 1996 "inst_util.m"
          MR_Word base;
#line 1996 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1996 "inst_util.m"
          *check_hlds__inst_util__Result_14 = base;
#line 1996 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1996 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_16));
#line 1996 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1996 "inst_util.m"
        }
#line 1996 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 1995 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1995 "inst_util.m"
      }
#line 1997 "inst_util.m"
    else
#line 1998 "inst_util.m"
      {
#line 1998 "inst_util.m"
        {
#line 1998 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
        }
#line 1998 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2017 "inst_util.m"
          {
#line 2017 "inst_util.m"
            if ((check_hlds__inst_util__MaybeType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2018 "inst_util.m"
              {
#line 2018 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_36;
#line 2018 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq0_59;
#line 2018 "inst_util.m"
                MR_Word check_hlds__inst_util__Expansions0_60;
#line 1922 "inst_util.m"
                MR_Word check_hlds__inst_util___Expansions_61;

#line 1879 "inst_util.m"
                {
#line 1879 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
                }
#line 1881 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1880 "inst_util.m"
                  check_hlds__inst_util__Uniq0_59 = check_hlds__inst_util__UniqA_9;
#line 1881 "inst_util.m"
                else
#line 1882 "inst_util.m"
                  check_hlds__inst_util__Uniq0_59 = check_hlds__inst_util__UniqB_12;
#line 1921 "inst_util.m"
                {
#line 1921 "inst_util.m"
                  mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_60);
                }
#line 1922 "inst_util.m"
                {
#line 1922 "inst_util.m"
                  check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_59, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_60, &check_hlds__inst_util___Expansions_61, &check_hlds__inst_util__Uniq_36);
                }
#line 2020 "inst_util.m"
                {
#line 2020 "inst_util.m"
                  MR_Word base;
#line 2020 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "inst_util.m"
                  *check_hlds__inst_util__Result_14 = base;
#line 2020 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_36));
#line 2020 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2020 "inst_util.m"
                }
#line 2020 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2018 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2018 "inst_util.m"
              }
#line 2017 "inst_util.m"
            else
#line 2002 "inst_util.m"
              {
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_39_39;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_40_40;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_41_41;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeType_13, (MR_Integer) 0)));
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__Constructors_18;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtor_19;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB0_20;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB_21;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__InstResultsB_22;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__InstA_23;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__InstB_24;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__V_31_31;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;
#line 2002 "inst_util.m"
                MR_Word check_hlds__inst_util__V_34_34;

#line 2003 "inst_util.m"
                {
#line 2003 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Type_17, &check_hlds__inst_util__Constructors_18);
                }
#line 2002 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2002 "inst_util.m"
                  {
#line 2004 "inst_util.m"
                    {
#line 2004 "inst_util.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_util__Type_17, &check_hlds__inst_util__TypeCtor_19);
                    }
#line 2005 "inst_util.m"
                    {
#line 2005 "inst_util.m"
                      check_hlds__mode_util__constructors_to_bound_insts_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__UniqB_12, check_hlds__inst_util__TypeCtor_19, check_hlds__inst_util__Constructors_18, &check_hlds__inst_util__BoundInstsB0_20);
                    }
#line 2217 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 2007 "inst_util.m"
                    {
#line 2007 "inst_util.m"
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__inst_util__TypeCtorInfo_39_39, check_hlds__inst_util__BoundInstsB0_20, &check_hlds__inst_util__BoundInstsB_21);
                    }
#line 2009 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = (MR_Integer) 1;
#line 2010 "inst_util.m"
                    check_hlds__inst_util__V_30_30 = (MR_Integer) 0;
#line 2228 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 2011 "inst_util.m"
                    {
#line 2011 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_40_40);
                    }
#line 2235 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 2011 "inst_util.m"
                    {
#line 2011 "inst_util.m"
                      check_hlds__inst_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2011 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_31_31, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 2011 "inst_util.m"
                    }
#line 2012 "inst_util.m"
                    {
#line 2012 "inst_util.m"
                      check_hlds__inst_util__V_34_34 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_41_41);
                    }
#line 2012 "inst_util.m"
                    {
#line 2012 "inst_util.m"
                      check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2012 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_33_33, 0) = ((MR_Box) (check_hlds__inst_util__V_34_34));
#line 2012 "inst_util.m"
                    }
#line 2008 "inst_util.m"
                    {
#line 2008 "inst_util.m"
                      check_hlds__inst_util__InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2008 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 0) = ((MR_Box) (check_hlds__inst_util__V_29_29));
#line 2008 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 1) = ((MR_Box) (check_hlds__inst_util__V_30_30));
#line 2008 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 2) = ((MR_Box) (check_hlds__inst_util__V_31_31));
#line 2008 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 3) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 2008 "inst_util.m"
                    }
#line 2014 "inst_util.m"
                    {
#line 2014 "inst_util.m"
                      check_hlds__inst_util__InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2014 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2014 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_9));
#line 2014 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_10));
#line 2014 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsA_11));
#line 2014 "inst_util.m"
                    }
#line 2015 "inst_util.m"
                    {
#line 2015 "inst_util.m"
                      check_hlds__inst_util__InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2015 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 1) = ((MR_Box) (check_hlds__inst_util__UniqB_12));
#line 2015 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_22));
#line 2015 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsB_21));
#line 2015 "inst_util.m"
                    }
#line 2016 "inst_util.m"
                    {
#line 2016 "inst_util.m"
                      return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_23, check_hlds__inst_util__InstB_24, check_hlds__inst_util__MaybeType_13, check_hlds__inst_util__Result_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);
                    }
#line 2002 "inst_util.m"
                  }
#line 2002 "inst_util.m"
              }
#line 2017 "inst_util.m"
          }
#line 1998 "inst_util.m"
      }
#line 1997 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1997 "inst_util.m"
  }
#line 1988 "inst_util.m"
}

#line 1946 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 1946 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1946 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 1946 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1946 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 1946 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 1946 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11)
#line 1946 "inst_util.m"
{
#line 1954 "inst_util.m"
  while (MR_TRUE)
#line 1954 "inst_util.m"
    {
#line 1954 "inst_util.m"
      /* tailcall optimized into a loop */
#line 1954 "inst_util.m"
      {
#line 1954 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 1954 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 2))))
#line 1959 "inst_util.m"
          {
#line 1959 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));
#line 1958 "inst_util.m"
            MR_Word check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1879 "inst_util.m"
            {
#line 1879 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_13, check_hlds__inst_util__UniqB_8);
            }
#line 1881 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1880 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1881 "inst_util.m"
            else
#line 1882 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_13;
#line 1960 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 1959 "inst_util.m"
          }
#line 1954 "inst_util.m"
        else
#line 1954 "inst_util.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1962 "inst_util.m"
            {
#line 1879 "inst_util.m"
              {
#line 1879 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_8);
              }
#line 1881 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1880 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1881 "inst_util.m"
              else
#line 1882 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1963 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 1962 "inst_util.m"
            }
#line 1954 "inst_util.m"
          else
#line 1954 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1965 "inst_util.m"
              {
#line 1965 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1965 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq0_20;
#line 1965 "inst_util.m"
                MR_Word check_hlds__inst_util__UniqA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1965 "inst_util.m"
                MR_Word check_hlds__inst_util___InstResultsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1879 "inst_util.m"
                {
#line 1879 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_36, check_hlds__inst_util__UniqB_8);
                }
#line 1881 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1880 "inst_util.m"
                  check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqB_8;
#line 1881 "inst_util.m"
                else
#line 1882 "inst_util.m"
                  check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqA_36;
#line 1967 "inst_util.m"
                {
#line 1967 "inst_util.m"
                  check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_19, check_hlds__inst_util__Uniq0_20, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_util__STATE_VARIABLE_Expansions_27, check_hlds__inst_util__Uniq_11);
#line 1967 "inst_util.m"
                  return;
                }
#line 1965 "inst_util.m"
              }
#line 1954 "inst_util.m"
            else
#line 1954 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1982 "inst_util.m"
                {
#line 1982 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInstA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1982 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1983 "inst_util.m"
                  /* direct tailcall eliminated */
#line 1983 "inst_util.m"
                  {
#line 1983 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__SubInstA_25;

#line 1983 "inst_util.m"
                    check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 1983 "inst_util.m"
                  }
#line 1983 "inst_util.m"
                  continue;
#line 1982 "inst_util.m"
                }
#line 1954 "inst_util.m"
              else
#line 1954 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1970 "inst_util.m"
                  {
#line 1970 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1971 "inst_util.m"
                    {
#line 1971 "inst_util.m"
                      check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26);
                    }
#line 1973 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1972 "inst_util.m"
                      {
#line 1972 "inst_util.m"
                        *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1972 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 1972 "inst_util.m"
                      }
#line 1973 "inst_util.m"
                    else
#line 1974 "inst_util.m"
                      {
#line 1974 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst_22;
#line 1974 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 1974 "inst_util.m"
                        {
#line 1974 "inst_util.m"
                          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32);
                        }
#line 1975 "inst_util.m"
                        {
#line 1975 "inst_util.m"
                          check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__Inst_22);
                        }
#line 1976 "inst_util.m"
                        /* direct tailcall eliminated */
#line 1976 "inst_util.m"
                        {
#line 1976 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__Inst_22;
#line 1976 "inst_util.m"
                          MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 1976 "inst_util.m"
                          check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26;
#line 1976 "inst_util.m"
                          check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 1976 "inst_util.m"
                        }
#line 1976 "inst_util.m"
                        continue;
#line 1974 "inst_util.m"
                      }
#line 1970 "inst_util.m"
                  }
#line 1954 "inst_util.m"
                else
#line 1954 "inst_util.m"
                  if ((((((check_hlds__inst_util__InstA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 1)))))) || ((check_hlds__inst_util__InstA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 1954 "inst_util.m"
                    {
#line 1955 "inst_util.m"
                      *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1955 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 1954 "inst_util.m"
                    }
#line 1954 "inst_util.m"
                  else
#line 1954 "inst_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1959 "inst_util.m"
                      {
#line 1959 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1957 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1879 "inst_util.m"
                        {
#line 1879 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_39, check_hlds__inst_util__UniqB_8);
                        }
#line 1881 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1880 "inst_util.m"
                          *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1881 "inst_util.m"
                        else
#line 1882 "inst_util.m"
                          *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_39;
#line 1960 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 1959 "inst_util.m"
                      }
#line 1954 "inst_util.m"
                    else
#line 1979 "inst_util.m"
                      {
#line 1980 "inst_util.m"
                        {
#line 1980 "inst_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", (MR_String) "inst_var");
#line 1980 "inst_util.m"
                          return;
                        }
#line 1979 "inst_util.m"
                      }
#line 1954 "inst_util.m"
      }
#line 1954 "inst_util.m"
      break;
#line 1954 "inst_util.m"
    }
#line 1946 "inst_util.m"
}

#line 1937 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 1937 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1937 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1937 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1937 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1937 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1937 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 1937 "inst_util.m"
{
#line 1941 "inst_util.m"
  while (MR_TRUE)
#line 1941 "inst_util.m"
    {
#line 1941 "inst_util.m"
      /* tailcall optimized into a loop */
#line 1941 "inst_util.m"
      {
#line 1941 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 1941 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1941 "inst_util.m"
          {
#line 1941 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 1941 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 1941 "inst_util.m"
          }
#line 1941 "inst_util.m"
        else
#line 1942 "inst_util.m"
          {
#line 1942 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1942 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1942 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_18;
#line 1942 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 1943 "inst_util.m"
            {
#line 1943 "inst_util.m"
              check_hlds__inst_util__merge_inst_uniq_6_p_0(check_hlds__inst_util__Inst_12, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21, &check_hlds__inst_util__Uniq1_18);
            }
#line 1944 "inst_util.m"
            /* direct tailcall eliminated */
#line 1944 "inst_util.m"
            {
#line 1944 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__Insts_13;
#line 1944 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_18;
#line 1944 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 1944 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 1944 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 1944 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 1944 "inst_util.m"
            }
#line 1944 "inst_util.m"
            continue;
#line 1942 "inst_util.m"
          }
#line 1941 "inst_util.m"
      }
#line 1941 "inst_util.m"
      break;
#line 1941 "inst_util.m"
    }
#line 1937 "inst_util.m"
}

#line 1925 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 1925 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1925 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1925 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1925 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1925 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1925 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 1925 "inst_util.m"
{
#line 1929 "inst_util.m"
  while (MR_TRUE)
#line 1929 "inst_util.m"
    {
#line 1929 "inst_util.m"
      /* tailcall optimized into a loop */
#line 1929 "inst_util.m"
      {
#line 1929 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 1929 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1929 "inst_util.m"
          {
#line 1929 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 1929 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 1929 "inst_util.m"
          }
#line 1929 "inst_util.m"
        else
#line 1931 "inst_util.m"
          {
#line 1931 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1931 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1931 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 1)));
#line 1931 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_20;
#line 1931 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;
#line 1932 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 0)));

#line 1933 "inst_util.m"
            {
#line 1933 "inst_util.m"
              check_hlds__inst_util__merge_inst_list_uniq_6_p_0(check_hlds__inst_util__ArgInsts_19, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23, &check_hlds__inst_util__Uniq1_20);
            }
#line 1934 "inst_util.m"
            /* direct tailcall eliminated */
#line 1934 "inst_util.m"
            {
#line 1934 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInsts_13;
#line 1934 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_20;
#line 1934 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;

#line 1934 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 1934 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 1934 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 1934 "inst_util.m"
            }
#line 1934 "inst_util.m"
            continue;
#line 1931 "inst_util.m"
          }
#line 1929 "inst_util.m"
      }
#line 1929 "inst_util.m"
      break;
#line 1929 "inst_util.m"
    }
#line 1925 "inst_util.m"
}

#line 1916 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 1916 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 1916 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 1916 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 1916 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1916 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10)
#line 1916 "inst_util.m"
{
#line 1919 "inst_util.m"
  {
#line 1919 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1919 "inst_util.m"
    MR_Word check_hlds__inst_util__Uniq0_11;
#line 1919 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_12;
#line 1922 "inst_util.m"
    MR_Word check_hlds__inst_util___Expansions_13;

#line 1879 "inst_util.m"
    {
#line 1879 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_6, check_hlds__inst_util__UniqB_7);
    }
#line 1881 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1880 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqB_7;
#line 1881 "inst_util.m"
    else
#line 1882 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqA_6;
#line 1921 "inst_util.m"
    {
#line 1921 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_12);
    }
#line 1922 "inst_util.m"
    {
#line 1922 "inst_util.m"
      check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__Uniq0_11, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__Expansions0_12, &check_hlds__inst_util___Expansions_13, check_hlds__inst_util__Uniq_10);
    }
#line 1919 "inst_util.m"
  }
#line 1916 "inst_util.m"
}

#line 1885 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1885 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1885 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1885 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1885 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1885 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13)
#line 1885 "inst_util.m"
{
#line 1888 "inst_util.m"
  {
#line 1888 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1907 "inst_util.m"
    MR_Word check_hlds__inst_util__PredA_10;
#line 1907 "inst_util.m"
    MR_Word check_hlds__inst_util__PredB_11;

#line 1890 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1890 "inst_util.m"
      {
#line 1890 "inst_util.m"
        check_hlds__inst_util__PredA_10 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoA_6), (MR_Integer) 1);
#line 1891 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoB_7)) == (MR_mktag((MR_Integer) 1)));
#line 1891 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1891 "inst_util.m"
          check_hlds__inst_util__PredB_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoB_7), (MR_Integer) 1);
#line 1890 "inst_util.m"
      }
#line 1907 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1898 "inst_util.m"
      {
#line 1896 "inst_util.m"
        {
#line 1896 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__PredB_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
        }
#line 1898 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1897 "inst_util.m"
          {
#line 1897 "inst_util.m"
            *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoB_7;
#line 1897 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1897 "inst_util.m"
          }
#line 1898 "inst_util.m"
        else
#line 1900 "inst_util.m"
          {
#line 1898 "inst_util.m"
            {
#line 1898 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__PredA_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
            }
#line 1900 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1899 "inst_util.m"
              {
#line 1899 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoA_6;
#line 1899 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1899 "inst_util.m"
              }
#line 1900 "inst_util.m"
            else
#line 1903 "inst_util.m"
              {
#line 2182 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_22;
#line 2182 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 1)));
#line 2182 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_19;
#line 2182 "inst_util.m"
                MR_Word check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 0)));
#line 2183 "inst_util.m"
                MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 2)));
#line 2183 "inst_util.m"
                MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 3)));
#line 2185 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;
#line 2182 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_31;
#line 2182 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_25;
#line 2182 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_28;
#line 2182 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2183 "inst_util.m"
                MR_Word check_hlds__inst_util__V_26_26;
#line 2183 "inst_util.m"
                MR_Word check_hlds__inst_util__V_27_27;
#line 2185 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;

#line 2183 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_20_20 == (MR_Integer) 1);
#line 2182 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2182 "inst_util.m"
                  {
#line 2935 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_11_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2184 "inst_util.m"
                    {
#line 2184 "inst_util.m"
                      check_hlds__inst_util__Arity_19 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_22, check_hlds__inst_util__ArgModes_16);
                    }
#line 2186 "inst_util.m"
                    {
#line 2186 "inst_util.m"
                      check_hlds__inst_util__V_21_21 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_19);
                    }
#line 2185 "inst_util.m"
                    {
#line 2185 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__V_21_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                    }
#line 2185 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2182 "inst_util.m"
                  }
#line 1903 "inst_util.m"
                check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1903 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1903 "inst_util.m"
                  {
#line 2183 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 0)));
#line 2183 "inst_util.m"
                    check_hlds__inst_util__ArgModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 1)));
#line 2183 "inst_util.m"
                    check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 2)));
#line 2183 "inst_util.m"
                    check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 3)));
#line 2183 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == (MR_Integer) 1);
#line 2182 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2182 "inst_util.m"
                      {
#line 2976 "check_hlds.inst_util.c"
                        check_hlds__inst_util__TypeCtorInfo_11_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2184 "inst_util.m"
                        {
#line 2184 "inst_util.m"
                          check_hlds__inst_util__Arity_28 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_31, check_hlds__inst_util__ArgModes_25);
                        }
#line 2186 "inst_util.m"
                        {
#line 2186 "inst_util.m"
                          check_hlds__inst_util__V_30_30 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_28);
                        }
#line 2185 "inst_util.m"
                        {
#line 2185 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__V_30_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                        }
#line 2185 "inst_util.m"
                        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2182 "inst_util.m"
                      }
#line 1904 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1903 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1903 "inst_util.m"
                      {
#line 1905 "inst_util.m"
                        *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1905 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1903 "inst_util.m"
                      }
#line 1903 "inst_util.m"
                  }
#line 1903 "inst_util.m"
              }
#line 1900 "inst_util.m"
          }
#line 1898 "inst_util.m"
      }
#line 1907 "inst_util.m"
    else
#line 1908 "inst_util.m"
      {
#line 1908 "inst_util.m"
        {
#line 1908 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoA_6);
        }
#line 1908 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1908 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1908 "inst_util.m"
          {
#line 1909 "inst_util.m"
            {
#line 1909 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoB_7);
            }
#line 1909 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1908 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1908 "inst_util.m"
              {
#line 1910 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1910 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1908 "inst_util.m"
              }
#line 1908 "inst_util.m"
          }
#line 1908 "inst_util.m"
      }
#line 1888 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1888 "inst_util.m"
      {
#line 1910 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12;
#line 1910 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1888 "inst_util.m"
      }
#line 1888 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1888 "inst_util.m"
  }
#line 1885 "inst_util.m"
}

#line 1876 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1876 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1876 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1876 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6)
#line 1876 "inst_util.m"
{
#line 1881 "inst_util.m"
  {
#line 1881 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1879 "inst_util.m"
    {
#line 1879 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_4, check_hlds__inst_util__UniqB_5);
    }
#line 1881 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1880 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqB_5;
#line 1881 "inst_util.m"
    else
#line 1882 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqA_4;
#line 1881 "inst_util.m"
  }
#line 1876 "inst_util.m"
}

#line 1750 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1750 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1750 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1750 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1750 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1750 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1750 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41)
#line 1750 "inst_util.m"
{
#line 1765 "inst_util.m"
  {
#line 1765 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1765 "inst_util.m"
    if ((check_hlds__inst_util__InstA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1765 "inst_util.m"
      if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1837 "inst_util.m"
        {
#line 1839 "inst_util.m"
          *check_hlds__inst_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1839 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1837 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1837 "inst_util.m"
        }
#line 1765 "inst_util.m"
      else
#line 1765 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1804 "inst_util.m"
          {
#line 1804 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1805 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1808 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_73 == (MR_Integer) 3))
#line 1808 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1808 "inst_util.m"
            else
#line 1808 "inst_util.m"
              if ((check_hlds__inst_util__Uniq_73 == (MR_Integer) 4))
#line 1808 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1808 "inst_util.m"
              else
#line 1808 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 1804 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1804 "inst_util.m"
              {
#line 1809 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstB_8;
#line 1809 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1809 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1804 "inst_util.m"
              }
#line 1804 "inst_util.m"
          }
#line 1765 "inst_util.m"
        else
#line 1765 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_FALSE;
#line 1765 "inst_util.m"
    else
#line 1765 "inst_util.m"
      if (((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 2))))
#line 1765 "inst_util.m"
        {
#line 1765 "inst_util.m"
          MR_Word check_hlds__inst_util__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1765 "inst_util.m"
          MR_Word check_hlds__inst_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));

#line 1765 "inst_util.m"
          if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1771 "inst_util.m"
            {
#line 1775 "inst_util.m"
              if ((check_hlds__inst_util__V_112_112 == (MR_Integer) 3))
#line 1775 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1775 "inst_util.m"
              else
#line 1775 "inst_util.m"
                if ((check_hlds__inst_util__V_112_112 == (MR_Integer) 4))
#line 1775 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1775 "inst_util.m"
                else
#line 1775 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1771 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1771 "inst_util.m"
                {
#line 1776 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstA_7;
#line 1776 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1776 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1771 "inst_util.m"
                }
#line 1771 "inst_util.m"
            }
#line 1765 "inst_util.m"
          else
#line 1765 "inst_util.m"
            if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1765 "inst_util.m"
              {
#line 1765 "inst_util.m"
                MR_Word check_hlds__inst_util__UniqB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1765 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfoB_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1765 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_16;
#line 1765 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_17;

#line 1767 "inst_util.m"
                {
#line 1767 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_111_111, check_hlds__inst_util__HOInstInfoB_15, &check_hlds__inst_util__HOInstInfo_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1765 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1765 "inst_util.m"
                  {
#line 1768 "inst_util.m"
                    {
#line 1768 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_112_112, check_hlds__inst_util__UniqB_14, &check_hlds__inst_util__Uniq_17);
                    }
#line 1769 "inst_util.m"
                    {
#line 1769 "inst_util.m"
                      MR_Word base;
#line 1769 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = base;
#line 1769 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_17));
#line 1769 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_16));
#line 1769 "inst_util.m"
                    }
#line 1769 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1765 "inst_util.m"
                  }
#line 1765 "inst_util.m"
              }
#line 1765 "inst_util.m"
            else
#line 1765 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1796 "inst_util.m"
                {
#line 1796 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_55_55;
#line 1796 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_71;

#line 1798 "inst_util.m"
                  {
#line 1798 "inst_util.m"
                    check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_112_112, (MR_Integer) 0, &check_hlds__inst_util__Uniq_71);
                  }
#line 1801 "inst_util.m"
                  if ((check_hlds__inst_util__Uniq_71 == (MR_Integer) 3))
#line 1801 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1801 "inst_util.m"
                  else
#line 1801 "inst_util.m"
                    if ((check_hlds__inst_util__Uniq_71 == (MR_Integer) 4))
#line 1801 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1801 "inst_util.m"
                    else
#line 1801 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1796 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1796 "inst_util.m"
                    {
#line 1802 "inst_util.m"
                      check_hlds__inst_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1802 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1802 "inst_util.m"
                      {
#line 1802 "inst_util.m"
                        MR_Word base;
#line 1802 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1802 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_71));
#line 1802 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_55_55));
#line 1802 "inst_util.m"
                      }
#line 1802 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1796 "inst_util.m"
                    }
#line 1796 "inst_util.m"
                }
#line 1765 "inst_util.m"
              else
#line 1765 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1778 "inst_util.m"
                  {
#line 1778 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1778 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_57_57;
#line 1778 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1778 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_63;
#line 1779 "inst_util.m"
                    MR_Word check_hlds__inst_util___InstResultsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1780 "inst_util.m"
                    {
#line 1780 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__V_112_112, check_hlds__inst_util__UniqB_62, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_63);
                    }
#line 1783 "inst_util.m"
                    if ((check_hlds__inst_util__Uniq_63 == (MR_Integer) 3))
#line 1783 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1783 "inst_util.m"
                    else
#line 1783 "inst_util.m"
                      if ((check_hlds__inst_util__Uniq_63 == (MR_Integer) 4))
#line 1783 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1783 "inst_util.m"
                      else
#line 1783 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1785 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1784 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1785 "inst_util.m"
                    else
#line 1786 "inst_util.m"
                      {
#line 1786 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1778 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1778 "inst_util.m"
                      {
#line 1788 "inst_util.m"
                        check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1788 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1788 "inst_util.m"
                        {
#line 1788 "inst_util.m"
                          MR_Word base;
#line 1788 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1788 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1788 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_63));
#line 1788 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 1788 "inst_util.m"
                        }
#line 1788 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1778 "inst_util.m"
                      }
#line 1778 "inst_util.m"
                  }
#line 1765 "inst_util.m"
                else
#line 1765 "inst_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1790 "inst_util.m"
                    {
#line 1790 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1790 "inst_util.m"
                      MR_Word check_hlds__inst_util__HOInstInfoB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1790 "inst_util.m"
                      MR_Word check_hlds__inst_util__HOInstInfo_68;
#line 1790 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_69;

#line 1792 "inst_util.m"
                      {
#line 1792 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_111_111, check_hlds__inst_util__HOInstInfoB_67, &check_hlds__inst_util__HOInstInfo_68, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
#line 1790 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1790 "inst_util.m"
                        {
#line 1793 "inst_util.m"
                          {
#line 1793 "inst_util.m"
                            check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_112_112, check_hlds__inst_util__UniqB_66, &check_hlds__inst_util__Uniq_69);
                          }
#line 1794 "inst_util.m"
                          {
#line 1794 "inst_util.m"
                            MR_Word base;
#line 1794 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "inst_util.m"
                            *check_hlds__inst_util__Inst_10 = base;
#line 1794 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1794 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_68));
#line 1794 "inst_util.m"
                          }
#line 1794 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1790 "inst_util.m"
                        }
#line 1790 "inst_util.m"
                    }
#line 1765 "inst_util.m"
                  else
#line 1765 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 1765 "inst_util.m"
        }
#line 1765 "inst_util.m"
      else
#line 1765 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1765 "inst_util.m"
          {
#line 1765 "inst_util.m"
            MR_Word check_hlds__inst_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1765 "inst_util.m"
            MR_Word check_hlds__inst_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1765 "inst_util.m"
            if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1829 "inst_util.m"
              {
#line 1829 "inst_util.m"
                MR_Word check_hlds__inst_util__V_51_51;
#line 1829 "inst_util.m"
                MR_Word check_hlds__inst_util__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1829 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_84;
#line 1830 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1831 "inst_util.m"
                {
#line 1831 "inst_util.m"
                  check_hlds__inst_util__merge_uniq_3_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_83, &check_hlds__inst_util__Uniq_84);
                }
#line 1834 "inst_util.m"
                if ((check_hlds__inst_util__Uniq_84 == (MR_Integer) 3))
#line 1834 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1834 "inst_util.m"
                else
#line 1834 "inst_util.m"
                  if ((check_hlds__inst_util__Uniq_84 == (MR_Integer) 4))
#line 1834 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1834 "inst_util.m"
                  else
#line 1834 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 1829 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1829 "inst_util.m"
                  {
#line 1835 "inst_util.m"
                    check_hlds__inst_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1835 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1835 "inst_util.m"
                    {
#line 1835 "inst_util.m"
                      MR_Word base;
#line 1835 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = base;
#line 1835 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_84));
#line 1835 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 1835 "inst_util.m"
                    }
#line 1835 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1829 "inst_util.m"
                  }
#line 1829 "inst_util.m"
              }
#line 1765 "inst_util.m"
            else
#line 1765 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1865 "inst_util.m"
                {
#line 1865 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeInfo_106_106;
#line 1865 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeCtorInfo_107_107;
#line 1865 "inst_util.m"
                  MR_Word check_hlds__inst_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1865 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeTypes_38;
#line 1865 "inst_util.m"
                  MR_Word check_hlds__inst_util__Args_39;
#line 1865 "inst_util.m"
                  MR_Integer check_hlds__inst_util__V_42_42;
#line 1865 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_43_43;
#line 1865 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1866 "inst_util.m"
                  {
#line 1866 "inst_util.m"
                    check_hlds__inst_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__V_108_108);
                  }
#line 1865 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1865 "inst_util.m"
                    {
#line 3566 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeInfo_106_106 = (MR_Word) &check_hlds__inst_util_scalar_common_2[1];
#line 3568 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1868 "inst_util.m"
                      {
#line 1868 "inst_util.m"
                        check_hlds__inst_util__V_42_42 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_107_107, check_hlds__inst_util__V_109_109);
                      }
#line 1868 "inst_util.m"
                      check_hlds__inst_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1868 "inst_util.m"
                      {
#line 1868 "inst_util.m"
                        check_hlds__inst_util__MaybeTypes_38 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeInfo_106_106, check_hlds__inst_util__V_42_42, ((MR_Box) (check_hlds__inst_util__V_43_43)));
                      }
#line 1869 "inst_util.m"
                      {
#line 1869 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__ArgsB_37, check_hlds__inst_util__MaybeTypes_38, &check_hlds__inst_util__Args_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
#line 1865 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1865 "inst_util.m"
                        {
#line 1870 "inst_util.m"
                          {
#line 1870 "inst_util.m"
                            MR_Word base;
#line 1870 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "inst_util.m"
                            *check_hlds__inst_util__Inst_10 = base;
#line 1870 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1870 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_110_110));
#line 1870 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Args_39));
#line 1870 "inst_util.m"
                          }
#line 1870 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1865 "inst_util.m"
                        }
#line 1865 "inst_util.m"
                    }
#line 1865 "inst_util.m"
                }
#line 1765 "inst_util.m"
              else
#line 1765 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 1765 "inst_util.m"
          }
#line 1765 "inst_util.m"
        else
#line 1765 "inst_util.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1765 "inst_util.m"
            {
#line 1765 "inst_util.m"
              MR_Word check_hlds__inst_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1765 "inst_util.m"
              MR_Word check_hlds__inst_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1765 "inst_util.m"
              MR_Word check_hlds__inst_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1765 "inst_util.m"
              if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1811 "inst_util.m"
                {
#line 1811 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_53_53;
#line 1811 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1811 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_76;
#line 1812 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1813 "inst_util.m"
                  {
#line 1813 "inst_util.m"
                    check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__UniqB_75, check_hlds__inst_util__V_115_115, check_hlds__inst_util__V_113_113, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_76);
                  }
#line 1816 "inst_util.m"
                  if ((check_hlds__inst_util__Uniq_76 == (MR_Integer) 3))
#line 1816 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1816 "inst_util.m"
                  else
#line 1816 "inst_util.m"
                    if ((check_hlds__inst_util__Uniq_76 == (MR_Integer) 4))
#line 1816 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1816 "inst_util.m"
                    else
#line 1816 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1818 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1817 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1818 "inst_util.m"
                  else
#line 1819 "inst_util.m"
                    {
#line 1819 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                    }
#line 1811 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1811 "inst_util.m"
                    {
#line 1821 "inst_util.m"
                      check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1821 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1821 "inst_util.m"
                      {
#line 1821 "inst_util.m"
                        MR_Word base;
#line 1821 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1821 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
#line 1821 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 1821 "inst_util.m"
                      }
#line 1821 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1811 "inst_util.m"
                    }
#line 1811 "inst_util.m"
                }
#line 1765 "inst_util.m"
              else
#line 1765 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1841 "inst_util.m"
                  {
#line 1841 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInsts_30;
#line 1841 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_49_49;
#line 1841 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1841 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_89;
#line 1841 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1842 "inst_util.m"
                    MR_Word check_hlds__inst_util___InstResultsB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1843 "inst_util.m"
                    {
#line 1843 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_88, &check_hlds__inst_util__Uniq_89);
                    }
#line 1844 "inst_util.m"
                    {
#line 1844 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__BoundInstsB_91, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInsts_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1841 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1841 "inst_util.m"
                      {
#line 1847 "inst_util.m"
                        check_hlds__inst_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1847 "inst_util.m"
                        {
#line 1847 "inst_util.m"
                          MR_Word base;
#line 1847 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1847 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1847 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_89));
#line 1847 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_49_49));
#line 1847 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_30));
#line 1847 "inst_util.m"
                        }
#line 1847 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1841 "inst_util.m"
                      }
#line 1841 "inst_util.m"
                  }
#line 1765 "inst_util.m"
                else
#line 1765 "inst_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1849 "inst_util.m"
                    {
#line 1849 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1850 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1851 "inst_util.m"
                      {
#line 1851 "inst_util.m"
                        return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__V_114_114, check_hlds__inst_util__V_113_113, check_hlds__inst_util__UniqB_95, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
#line 1849 "inst_util.m"
                    }
#line 1765 "inst_util.m"
                  else
#line 1765 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 1765 "inst_util.m"
            }
#line 1765 "inst_util.m"
          else
#line 1765 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1765 "inst_util.m"
              {
#line 1765 "inst_util.m"
                MR_Word check_hlds__inst_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1765 "inst_util.m"
                MR_Word check_hlds__inst_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1765 "inst_util.m"
                if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1823 "inst_util.m"
                  {
#line 1823 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1823 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1823 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_81;
#line 1823 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_82;

#line 1825 "inst_util.m"
                    {
#line 1825 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_116_116, check_hlds__inst_util__HOInstInfoB_80, &check_hlds__inst_util__HOInstInfo_81, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1823 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1823 "inst_util.m"
                      {
#line 1826 "inst_util.m"
                        {
#line 1826 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_117_117, check_hlds__inst_util__UniqB_79, &check_hlds__inst_util__Uniq_82);
                        }
#line 1827 "inst_util.m"
                        {
#line 1827 "inst_util.m"
                          MR_Word base;
#line 1827 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1827 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_82));
#line 1827 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_81));
#line 1827 "inst_util.m"
                        }
#line 1827 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1823 "inst_util.m"
                      }
#line 1823 "inst_util.m"
                  }
#line 1765 "inst_util.m"
                else
#line 1765 "inst_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1854 "inst_util.m"
                    {
#line 1854 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstResultsB_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1854 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1854 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInstsB_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));

#line 1856 "inst_util.m"
                      {
#line 1856 "inst_util.m"
                        return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__UniqB_98, check_hlds__inst_util__InstResultsB_34, check_hlds__inst_util__BoundInstsB_99, check_hlds__inst_util__V_117_117, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
#line 1854 "inst_util.m"
                    }
#line 1765 "inst_util.m"
                  else
#line 1765 "inst_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1859 "inst_util.m"
                      {
#line 1859 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1859 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfoB_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1859 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfo_104;
#line 1859 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_105;

#line 1861 "inst_util.m"
                        {
#line 1861 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_116_116, check_hlds__inst_util__HOInstInfoB_103, &check_hlds__inst_util__HOInstInfo_104, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1859 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1859 "inst_util.m"
                          {
#line 1862 "inst_util.m"
                            {
#line 1862 "inst_util.m"
                              check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_117_117, check_hlds__inst_util__UniqB_102, &check_hlds__inst_util__Uniq_105);
                            }
#line 1863 "inst_util.m"
                            {
#line 1863 "inst_util.m"
                              MR_Word base;
#line 1863 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1863 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1863 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_105));
#line 1863 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_104));
#line 1863 "inst_util.m"
                            }
#line 1863 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1859 "inst_util.m"
                          }
#line 1859 "inst_util.m"
                      }
#line 1765 "inst_util.m"
                    else
#line 1765 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1765 "inst_util.m"
              }
#line 1765 "inst_util.m"
            else
#line 1765 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1765 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1765 "inst_util.m"
  }
#line 1750 "inst_util.m"
}

#line 1722 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1722 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1722 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20)
#line 1722 "inst_util.m"
{
#line 1742 "inst_util.m"
  {
#line 1742 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1742 "inst_util.m"
    MR_Word check_hlds__inst_util__InstVarsA_12;
#line 1742 "inst_util.m"
    MR_Word check_hlds__inst_util__SubInstA_13;

#line 1726 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1726 "inst_util.m"
      {
#line 1726 "inst_util.m"
        check_hlds__inst_util__InstVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1726 "inst_util.m"
        check_hlds__inst_util__SubInstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1739 "inst_util.m"
        {
#line 1739 "inst_util.m"
          MR_Word check_hlds__inst_util__InstVarsB_14;
#line 1739 "inst_util.m"
          MR_Word check_hlds__inst_util__SubInstB_15;

#line 1727 "inst_util.m"
          check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1727 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1727 "inst_util.m"
            {
#line 1727 "inst_util.m"
              check_hlds__inst_util__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1727 "inst_util.m"
              check_hlds__inst_util__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1728 "inst_util.m"
              {
#line 1728 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_26_26;
#line 1728 "inst_util.m"
                MR_Word check_hlds__inst_util__Inst0_16;
#line 1728 "inst_util.m"
                MR_Word check_hlds__inst_util__InstVars_17;

#line 1728 "inst_util.m"
                {
#line 1728 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__SubInstB_15, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
                }
#line 1728 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1728 "inst_util.m"
                  {
#line 4003 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_26_26 = (MR_Word) &check_hlds__inst_util_scalar_common_2[0];
#line 1729 "inst_util.m"
                    {
#line 1729 "inst_util.m"
                      mercury__set__intersect_3_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVarsA_12, check_hlds__inst_util__InstVarsB_14, &check_hlds__inst_util__InstVars_17);
                    }
#line 1730 "inst_util.m"
                    {
#line 1730 "inst_util.m"
                      check_hlds__inst_util__succeeded = mercury__set__non_empty_1_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVars_17);
                    }
#line 1736 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1731 "inst_util.m"
                      {
#line 1731 "inst_util.m"
                        MR_Word base;
#line 1731 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1731 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1731 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1731 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1731 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_16));
#line 1731 "inst_util.m"
                      }
#line 1736 "inst_util.m"
                    else
#line 1737 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_16;
#line 1736 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1728 "inst_util.m"
                  }
#line 1728 "inst_util.m"
              }
#line 1727 "inst_util.m"
            }
#line 1727 "inst_util.m"
          else
#line 1740 "inst_util.m"
            {
#line 1740 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1739 "inst_util.m"
        }
#line 1726 "inst_util.m"
      }
#line 1726 "inst_util.m"
    else
#line 1746 "inst_util.m"
      {
#line 1746 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInstB_25;
#line 1742 "inst_util.m"
        MR_Word check_hlds__inst_util___InstVarsB_18;

#line 1742 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1742 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1742 "inst_util.m"
          {
#line 1742 "inst_util.m"
            check_hlds__inst_util___InstVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1742 "inst_util.m"
            check_hlds__inst_util__SubInstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1745 "inst_util.m"
            {
#line 1745 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__SubInstB_25, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1742 "inst_util.m"
          }
#line 1742 "inst_util.m"
        else
#line 1747 "inst_util.m"
          {
#line 1747 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
          }
#line 1746 "inst_util.m"
      }
#line 1742 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1742 "inst_util.m"
  }
#line 1722 "inst_util.m"
}

#line 1702 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1702 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1702 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1702 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1702 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1702 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1702 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15)
#line 1702 "inst_util.m"
{
#line 1705 "inst_util.m"
  {
#line 1705 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1705 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_12;
#line 1705 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_13;

#line 1711 "inst_util.m"
    {
#line 1711 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstA_7, &check_hlds__inst_util__ExpandedInstA_12);
    }
#line 1712 "inst_util.m"
    {
#line 1712 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstB_8, &check_hlds__inst_util__ExpandedInstB_13);
    }
#line 1713 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1715 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1714 "inst_util.m"
      {
#line 1714 "inst_util.m"
        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstA_12;
#line 1714 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1714 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1714 "inst_util.m"
      }
#line 1715 "inst_util.m"
    else
#line 1717 "inst_util.m"
      {
#line 1715 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstA_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1717 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1716 "inst_util.m"
          {
#line 1716 "inst_util.m"
            *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstB_13;
#line 1716 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1716 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1716 "inst_util.m"
          }
#line 1717 "inst_util.m"
        else
#line 1718 "inst_util.m"
          {
#line 1718 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(check_hlds__inst_util__ExpandedInstA_12, check_hlds__inst_util__ExpandedInstB_13, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);
          }
#line 1717 "inst_util.m"
      }
#line 1705 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1705 "inst_util.m"
  }
#line 1702 "inst_util.m"
}

#line 1644 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1644 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1644 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1644 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1644 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1644 "inst_util.m"
{
#line 1647 "inst_util.m"
  {
#line 1647 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1647 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1647 "inst_util.m"
      {
#line 1647 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1647 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1647 "inst_util.m"
      }
#line 1647 "inst_util.m"
    else
#line 1648 "inst_util.m"
      {
#line 1648 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1648 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1648 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1648 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1648 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1649 "inst_util.m"
        {
#line 1649 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1650 "inst_util.m"
        {
#line 1650 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1648 "inst_util.m"
        {
#line 1648 "inst_util.m"
          MR_Word base;
#line 1648 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1648 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1648 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1648 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1648 "inst_util.m"
        }
#line 1648 "inst_util.m"
      }
#line 1647 "inst_util.m"
  }
#line 1644 "inst_util.m"
}

#line 1633 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1633 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1633 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1633 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1633 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1633 "inst_util.m"
{
#line 1636 "inst_util.m"
  {
#line 1636 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1636 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1636 "inst_util.m"
      {
#line 1636 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1636 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1636 "inst_util.m"
      }
#line 1636 "inst_util.m"
    else
#line 1638 "inst_util.m"
      {
#line 1638 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1638 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1638 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1638 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1638 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1638 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1638 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1638 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1640 "inst_util.m"
        {
#line 1640 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1641 "inst_util.m"
        {
#line 1641 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1641 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1641 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1641 "inst_util.m"
        }
#line 1642 "inst_util.m"
        {
#line 1642 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1637 "inst_util.m"
        {
#line 1637 "inst_util.m"
          MR_Word base;
#line 1637 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1637 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1637 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1637 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1637 "inst_util.m"
        }
#line 1638 "inst_util.m"
      }
#line 1636 "inst_util.m"
  }
#line 1633 "inst_util.m"
}

#line 1531 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1531 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1531 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1531 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1531 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1531 "inst_util.m"
{
#line 1534 "inst_util.m"
  {
#line 1534 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1534 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1534 "inst_util.m"
      {
#line 1534 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1534 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1534 "inst_util.m"
      }
#line 1534 "inst_util.m"
    else
#line 1536 "inst_util.m"
      {
#line 1536 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1536 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1536 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1536 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1536 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1536 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1536 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1536 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1538 "inst_util.m"
        {
#line 1538 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1539 "inst_util.m"
        {
#line 1539 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1539 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1539 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1539 "inst_util.m"
        }
#line 1540 "inst_util.m"
        {
#line 1540 "inst_util.m"
          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1535 "inst_util.m"
        {
#line 1535 "inst_util.m"
          MR_Word base;
#line 1535 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1535 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1535 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1535 "inst_util.m"
        }
#line 1536 "inst_util.m"
      }
#line 1534 "inst_util.m"
  }
#line 1531 "inst_util.m"
}

#line 1416 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1416 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1416 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1416 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1416 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35)
#line 1416 "inst_util.m"
{
#line 1421 "inst_util.m"
  {
#line 1421 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1421 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1424 "inst_util.m"
      {
#line 1426 "inst_util.m"
        {
#line 1426 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
#line 1426 "inst_util.m"
          return;
        }
#line 1424 "inst_util.m"
      }
#line 1421 "inst_util.m"
    else
#line 1421 "inst_util.m"
      if ((check_hlds__inst_util__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1421 "inst_util.m"
        {
#line 1422 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1422 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1421 "inst_util.m"
        }
#line 1421 "inst_util.m"
      else
#line 1421 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1432 "inst_util.m"
          {
#line 1432 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1432 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1432 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_11;

#line 1525 "inst_util.m"
            if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 3))
#line 1529 "inst_util.m"
              check_hlds__inst_util__Uniq_11 = (MR_Integer) 3;
#line 1525 "inst_util.m"
            else
#line 1525 "inst_util.m"
              if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 4))
#line 1528 "inst_util.m"
                check_hlds__inst_util__Uniq_11 = (MR_Integer) 4;
#line 1525 "inst_util.m"
              else
#line 1525 "inst_util.m"
                if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 2))
#line 1526 "inst_util.m"
                  check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1525 "inst_util.m"
                else
#line 1525 "inst_util.m"
                  if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 0))
#line 1527 "inst_util.m"
                    check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1525 "inst_util.m"
                  else
#line 1525 "inst_util.m"
                    check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1434 "inst_util.m"
            {
#line 1434 "inst_util.m"
              MR_Word base;
#line 1434 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "inst_util.m"
              *check_hlds__inst_util__Inst_6 = base;
#line 1434 "inst_util.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1434 "inst_util.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1434 "inst_util.m"
            }
#line 1434 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1432 "inst_util.m"
          }
#line 1421 "inst_util.m"
        else
#line 1421 "inst_util.m"
          if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1428 "inst_util.m"
            {
#line 1430 "inst_util.m"
              {
#line 1430 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
#line 1430 "inst_util.m"
                return;
              }
#line 1428 "inst_util.m"
            }
#line 1421 "inst_util.m"
          else
#line 1421 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1480 "inst_util.m"
              {
#line 1481 "inst_util.m"
                {
#line 1481 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
#line 1481 "inst_util.m"
                  return;
                }
#line 1480 "inst_util.m"
              }
#line 1421 "inst_util.m"
            else
#line 1421 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1436 "inst_util.m"
                {
#line 1436 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1436 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1436 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1436 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1436 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_56;

#line 1525 "inst_util.m"
                  if ((check_hlds__inst_util__Uniq0_55 == (MR_Integer) 3))
#line 1529 "inst_util.m"
                    check_hlds__inst_util__Uniq_56 = (MR_Integer) 3;
#line 1525 "inst_util.m"
                  else
#line 1525 "inst_util.m"
                    if ((check_hlds__inst_util__Uniq0_55 == (MR_Integer) 4))
#line 1528 "inst_util.m"
                      check_hlds__inst_util__Uniq_56 = (MR_Integer) 4;
#line 1525 "inst_util.m"
                    else
#line 1525 "inst_util.m"
                      if ((check_hlds__inst_util__Uniq0_55 == (MR_Integer) 2))
#line 1526 "inst_util.m"
                        check_hlds__inst_util__Uniq_56 = (MR_Integer) 0;
#line 1525 "inst_util.m"
                      else
#line 1525 "inst_util.m"
                        if ((check_hlds__inst_util__Uniq0_55 == (MR_Integer) 0))
#line 1527 "inst_util.m"
                          check_hlds__inst_util__Uniq_56 = (MR_Integer) 0;
#line 1525 "inst_util.m"
                        else
#line 1525 "inst_util.m"
                          check_hlds__inst_util__Uniq_56 = (MR_Integer) 0;
#line 1462 "inst_util.m"
                  {
#line 1462 "inst_util.m"
                    check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                  }
#line 1463 "inst_util.m"
                  {
#line 1463 "inst_util.m"
                    MR_Word base;
#line 1463 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "inst_util.m"
                    *check_hlds__inst_util__Inst_6 = base;
#line 1463 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1463 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_56));
#line 1463 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_12));
#line 1463 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1463 "inst_util.m"
                  }
#line 1436 "inst_util.m"
                }
#line 1421 "inst_util.m"
              else
#line 1421 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1472 "inst_util.m"
                  {
#line 1472 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1472 "inst_util.m"
                    MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1472 "inst_util.m"
                    MR_Word check_hlds__inst_util__SubInst1_19;

#line 1473 "inst_util.m"
                    {
#line 1473 "inst_util.m"
                      check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                    }
#line 1474 "inst_util.m"
                    {
#line 1474 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                    }
#line 1474 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1476 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1475 "inst_util.m"
                      *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst1_19;
#line 1476 "inst_util.m"
                    else
#line 1477 "inst_util.m"
                      {
#line 1477 "inst_util.m"
                        MR_Word base;
#line 1477 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "inst_util.m"
                        *check_hlds__inst_util__Inst_6 = base;
#line 1477 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1477 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1477 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst1_19));
#line 1477 "inst_util.m"
                      }
#line 1472 "inst_util.m"
                  }
#line 1421 "inst_util.m"
                else
#line 1421 "inst_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1483 "inst_util.m"
                    {
#line 1483 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1483 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstTable0_23;
#line 1483 "inst_util.m"
                      MR_Word check_hlds__inst_util__SharedInsts0_24;
#line 1483 "inst_util.m"
                      MR_Word check_hlds__inst_util__SharedInst_27;
#line 1493 "inst_util.m"
                      MR_Word check_hlds__inst_util__Result_25;
#line 1487 "inst_util.m"
                      MR_Box check_hlds__inst_util__conv0_Result_25;

#line 1485 "inst_util.m"
                      {
#line 1485 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__InstTable0_23);
                      }
#line 1486 "inst_util.m"
                      {
#line 1486 "inst_util.m"
                        hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__SharedInsts0_24);
                      }
#line 1487 "inst_util.m"
                      {
#line 1487 "inst_util.m"
                        check_hlds__inst_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0, check_hlds__inst_util__SharedInsts0_24, ((MR_Box) (check_hlds__inst_util__InstName_22)), &check_hlds__inst_util__conv0_Result_25);
                      }
#line 1487 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1487 "inst_util.m"
                        {
#line 1487 "inst_util.m"
                          check_hlds__inst_util__Result_25 = ((MR_Word) check_hlds__inst_util__conv0_Result_25);
#line 1487 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1487 "inst_util.m"
                        }
#line 1493 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1490 "inst_util.m"
                        {
#line 1490 "inst_util.m"
                          MR_Word check_hlds__inst_util__SharedInst0_26;

#line 1488 "inst_util.m"
                          check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__Result_25)) == (MR_mktag((MR_Integer) 1)));
#line 1488 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 1488 "inst_util.m"
                            {
#line 1488 "inst_util.m"
                              check_hlds__inst_util__SharedInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_25, (MR_Integer) 0)));
#line 1489 "inst_util.m"
                              check_hlds__inst_util__SharedInst_27 = check_hlds__inst_util__SharedInst0_26;
#line 1488 "inst_util.m"
                            }
#line 1488 "inst_util.m"
                          else
#line 1491 "inst_util.m"
                            check_hlds__inst_util__SharedInst_27 = check_hlds__inst_util__Inst0_5;
#line 1491 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1490 "inst_util.m"
                        }
#line 1493 "inst_util.m"
                      else
#line 1496 "inst_util.m"
                        {
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__SharedInsts1_28;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable1_29;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable2_30;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__SharedInsts2_31;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__SharedInsts_32;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable_33;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_39_39;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInst0_59;
#line 1496 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInst1_60;

#line 1496 "inst_util.m"
                          {
#line 1496 "inst_util.m"
                            mercury__map__det_insert_4_p_0(check_hlds__inst_util__TypeCtorInfo_67_67, check_hlds__inst_util__TypeCtorInfo_68_68, ((MR_Box) (check_hlds__inst_util__InstName_22)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__inst_util__SharedInsts0_24, &check_hlds__inst_util__SharedInsts1_28);
                          }
#line 1497 "inst_util.m"
                          {
#line 1497 "inst_util.m"
                            hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInsts1_28, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                          }
#line 1498 "inst_util.m"
                          {
#line 1498 "inst_util.m"
                            hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                          }
#line 1502 "inst_util.m"
                          {
#line 1502 "inst_util.m"
                            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_59);
                          }
#line 1503 "inst_util.m"
                          {
#line 1503 "inst_util.m"
                            check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__SubInst0_59, &check_hlds__inst_util__SubInst1_60);
                          }
#line 1504 "inst_util.m"
                          {
#line 1504 "inst_util.m"
                            check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst1_60, &check_hlds__inst_util__SharedInst_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38);
                          }
#line 1508 "inst_util.m"
                          {
#line 1508 "inst_util.m"
                            hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__inst_util__InstTable2_30);
                          }
#line 1509 "inst_util.m"
                          {
#line 1509 "inst_util.m"
                            hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__SharedInsts2_31);
                          }
#line 1510 "inst_util.m"
                          {
#line 1510 "inst_util.m"
                            check_hlds__inst_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "inst_util.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_39_39, 0) = ((MR_Box) (check_hlds__inst_util__SharedInst_27));
#line 1510 "inst_util.m"
                          }
#line 1510 "inst_util.m"
                          {
#line 1510 "inst_util.m"
                            mercury__map__det_update_4_p_0(check_hlds__inst_util__TypeCtorInfo_67_67, check_hlds__inst_util__TypeCtorInfo_68_68, ((MR_Box) (check_hlds__inst_util__InstName_22)), ((MR_Box) (check_hlds__inst_util__V_39_39)), check_hlds__inst_util__SharedInsts2_31, &check_hlds__inst_util__SharedInsts_32);
                          }
#line 1512 "inst_util.m"
                          {
#line 1512 "inst_util.m"
                            hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInsts_32, check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__InstTable_33);
                          }
#line 1513 "inst_util.m"
                          {
#line 1513 "inst_util.m"
                            hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                          }
#line 1496 "inst_util.m"
                        }
#line 1516 "inst_util.m"
                      {
#line 1516 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_instname_3_p_0(check_hlds__inst_util__SharedInst_27, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35, check_hlds__inst_util__InstName_22);
                      }
#line 1518 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1517 "inst_util.m"
                        *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1518 "inst_util.m"
                      else
#line 1519 "inst_util.m"
                        *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SharedInst_27;
#line 1483 "inst_util.m"
                    }
#line 1421 "inst_util.m"
                  else
#line 1421 "inst_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1465 "inst_util.m"
                      {
#line 1465 "inst_util.m"
                        MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1465 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1465 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_58;

#line 1525 "inst_util.m"
                        if ((check_hlds__inst_util__Uniq0_57 == (MR_Integer) 3))
#line 1529 "inst_util.m"
                          check_hlds__inst_util__Uniq_58 = (MR_Integer) 3;
#line 1525 "inst_util.m"
                        else
#line 1525 "inst_util.m"
                          if ((check_hlds__inst_util__Uniq0_57 == (MR_Integer) 4))
#line 1528 "inst_util.m"
                            check_hlds__inst_util__Uniq_58 = (MR_Integer) 4;
#line 1525 "inst_util.m"
                          else
#line 1525 "inst_util.m"
                            if ((check_hlds__inst_util__Uniq0_57 == (MR_Integer) 2))
#line 1526 "inst_util.m"
                              check_hlds__inst_util__Uniq_58 = (MR_Integer) 0;
#line 1525 "inst_util.m"
                            else
#line 1525 "inst_util.m"
                              if ((check_hlds__inst_util__Uniq0_57 == (MR_Integer) 0))
#line 1527 "inst_util.m"
                                check_hlds__inst_util__Uniq_58 = (MR_Integer) 0;
#line 1525 "inst_util.m"
                              else
#line 1525 "inst_util.m"
                                check_hlds__inst_util__Uniq_58 = (MR_Integer) 0;
#line 1467 "inst_util.m"
                        {
#line 1467 "inst_util.m"
                          MR_Word base;
#line 1467 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "inst_util.m"
                          *check_hlds__inst_util__Inst_6 = base;
#line 1467 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1467 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_58));
#line 1467 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1467 "inst_util.m"
                        }
#line 1467 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1465 "inst_util.m"
                      }
#line 1421 "inst_util.m"
                    else
#line 1469 "inst_util.m"
                      {
#line 1470 "inst_util.m"
                        {
#line 1470 "inst_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
#line 1470 "inst_util.m"
                          return;
                        }
#line 1469 "inst_util.m"
                      }
#line 1421 "inst_util.m"
  }
#line 1416 "inst_util.m"
}

#line 1389 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5)
#line 1389 "inst_util.m"
{
#line 1392 "inst_util.m"
  {
#line 1392 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1392 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "inst_util.m"
      if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "inst_util.m"
        {
#line 1392 "inst_util.m"
          *check_hlds__inst_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1392 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1392 "inst_util.m"
        }
#line 1392 "inst_util.m"
      else
#line 1403 "inst_util.m"
        {
#line 1404 "inst_util.m"
          {
#line 1404 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1404 "inst_util.m"
            return;
          }
#line 1403 "inst_util.m"
        }
#line 1392 "inst_util.m"
    else
#line 1392 "inst_util.m"
      {
#line 1392 "inst_util.m"
        MR_Word check_hlds__inst_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1392 "inst_util.m"
        MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1392 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1405 "inst_util.m"
          {
#line 1406 "inst_util.m"
            {
#line 1406 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1406 "inst_util.m"
              return;
            }
#line 1405 "inst_util.m"
          }
#line 1392 "inst_util.m"
        else
#line 1394 "inst_util.m"
          {
#line 1394 "inst_util.m"
            MR_Word check_hlds__inst_util__Live_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1394 "inst_util.m"
            MR_Word check_hlds__inst_util__Lives_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1394 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_13;
#line 1394 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_14;
#line 1394 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1398 "inst_util.m"
            if ((check_hlds__inst_util__Live_11 == (MR_Integer) 1))
#line 1399 "inst_util.m"
              {
#line 1400 "inst_util.m"
                check_hlds__inst_util__Inst_13 = check_hlds__inst_util__V_37_37;
#line 1400 "inst_util.m"
                check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1399 "inst_util.m"
              }
#line 1398 "inst_util.m"
            else
#line 1396 "inst_util.m"
              {
#line 1396 "inst_util.m"
                check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__V_37_37, &check_hlds__inst_util__Inst_13, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
              }
#line 1402 "inst_util.m"
            {
#line 1402 "inst_util.m"
              check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__V_36_36, check_hlds__inst_util__Lives_12, &check_hlds__inst_util__Insts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);
            }
#line 1394 "inst_util.m"
            {
#line 1394 "inst_util.m"
              MR_Word base;
#line 1394 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "inst_util.m"
              *check_hlds__inst_util__HeadVar__3_3 = base;
#line 1394 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_13));
#line 1394 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_14));
#line 1394 "inst_util.m"
            }
#line 1394 "inst_util.m"
          }
#line 1392 "inst_util.m"
      }
#line 1392 "inst_util.m"
  }
#line 1389 "inst_util.m"
}

#line 1369 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1369 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1369 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1369 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1369 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1369 "inst_util.m"
{
#line 1374 "inst_util.m"
  {
#line 1374 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1374 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1374 "inst_util.m"
      {
#line 1374 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1374 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1374 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1374 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1374 "inst_util.m"
      }
#line 1374 "inst_util.m"
    else
#line 1376 "inst_util.m"
      {
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1376 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1375 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1375 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1375 "inst_util.m"
          {
#line 1375 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1375 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1377 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1377 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1377 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1379 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1378 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1379 "inst_util.m"
            else
#line 1380 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1382 "inst_util.m"
            {
#line 1382 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1376 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1376 "inst_util.m"
              {
#line 1383 "inst_util.m"
                {
#line 1383 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1376 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1376 "inst_util.m"
                  {
#line 1376 "inst_util.m"
                    {
#line 1376 "inst_util.m"
                      MR_Word base;
#line 1376 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1376 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1376 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1376 "inst_util.m"
                    }
#line 1385 "inst_util.m"
                    {
#line 1385 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1385 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1376 "inst_util.m"
                  }
#line 1376 "inst_util.m"
              }
#line 1375 "inst_util.m"
          }
#line 1376 "inst_util.m"
      }
#line 1374 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1374 "inst_util.m"
  }
#line 1369 "inst_util.m"
}

#line 1358 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1358 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1358 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1358 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1358 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1358 "inst_util.m"
{
#line 1362 "inst_util.m"
  {
#line 1362 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1362 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1362 "inst_util.m"
      {
#line 1362 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1362 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1362 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1362 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1362 "inst_util.m"
      }
#line 1362 "inst_util.m"
    else
#line 1364 "inst_util.m"
      {
#line 1364 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1364 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1364 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1364 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1364 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1364 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1364 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1365 "inst_util.m"
        {
#line 1365 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1364 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1364 "inst_util.m"
          {
#line 1366 "inst_util.m"
            {
#line 1366 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1364 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1364 "inst_util.m"
              {
#line 1363 "inst_util.m"
                {
#line 1363 "inst_util.m"
                  MR_Word base;
#line 1363 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1363 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1363 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1363 "inst_util.m"
                }
#line 1367 "inst_util.m"
                {
#line 1367 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1367 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1364 "inst_util.m"
              }
#line 1364 "inst_util.m"
          }
#line 1364 "inst_util.m"
      }
#line 1362 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1362 "inst_util.m"
  }
#line 1358 "inst_util.m"
}

#line 1342 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1342 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1342 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1342 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1342 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1342 "inst_util.m"
{
#line 1347 "inst_util.m"
  {
#line 1347 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1347 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1347 "inst_util.m"
      {
#line 1347 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1347 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1347 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1347 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1347 "inst_util.m"
      }
#line 1347 "inst_util.m"
    else
#line 1349 "inst_util.m"
      {
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_20;
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_21;
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 0)));
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 1)));
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1349 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1351 "inst_util.m"
        {
#line 1351 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1349 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1349 "inst_util.m"
          {
#line 1353 "inst_util.m"
            {
#line 1353 "inst_util.m"
              check_hlds__inst_util__Bound_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1353 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1353 "inst_util.m"
            }
#line 1354 "inst_util.m"
            {
#line 1354 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__Bounds0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Bounds_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1349 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1349 "inst_util.m"
              {
#line 1349 "inst_util.m"
                {
#line 1349 "inst_util.m"
                  MR_Word base;
#line 1349 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1349 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_20));
#line 1349 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_21));
#line 1349 "inst_util.m"
                }
#line 1356 "inst_util.m"
                {
#line 1356 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1356 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1349 "inst_util.m"
              }
#line 1349 "inst_util.m"
          }
#line 1349 "inst_util.m"
      }
#line 1347 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1347 "inst_util.m"
  }
#line 1342 "inst_util.m"
}

#line 1239 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1239 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1239 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1239 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1239 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47)
#line 1239 "inst_util.m"
{
#line 1245 "inst_util.m"
  {
#line 1245 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1245 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1255 "inst_util.m"
      {
#line 1255 "inst_util.m"
        MR_Word check_hlds__inst_util__V_72_72;
#line 1255 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_74;

#line 1256 "inst_util.m"
        {
#line 1256 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_74);
        }
#line 1255 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1255 "inst_util.m"
          {
#line 1257 "inst_util.m"
            check_hlds__inst_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1258 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1258 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1257 "inst_util.m"
            {
#line 1257 "inst_util.m"
              MR_Word base;
#line 1257 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1257 "inst_util.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_74));
#line 1257 "inst_util.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_72_72));
#line 1257 "inst_util.m"
            }
#line 1257 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1255 "inst_util.m"
          }
#line 1255 "inst_util.m"
      }
#line 1245 "inst_util.m"
    else
#line 1245 "inst_util.m"
      if ((check_hlds__inst_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1245 "inst_util.m"
        {
#line 1246 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1247 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1247 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1245 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1245 "inst_util.m"
        }
#line 1245 "inst_util.m"
      else
#line 1245 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 2))))
#line 1249 "inst_util.m"
          {
#line 1249 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1249 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1249 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_18;

#line 1251 "inst_util.m"
            {
#line 1251 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
            }
#line 1249 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1249 "inst_util.m"
              {
#line 1253 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1253 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1252 "inst_util.m"
                {
#line 1252 "inst_util.m"
                  MR_Word base;
#line 1252 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = base;
#line 1252 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1252 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1252 "inst_util.m"
                }
#line 1252 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1249 "inst_util.m"
              }
#line 1249 "inst_util.m"
          }
#line 1245 "inst_util.m"
        else
#line 1245 "inst_util.m"
          if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 1))))
#line 1260 "inst_util.m"
            {
#line 1260 "inst_util.m"
              MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1260 "inst_util.m"
              MR_Word check_hlds__inst_util__Any_20;
#line 1260 "inst_util.m"
              MR_Word check_hlds__inst_util__V_66_66;
#line 1260 "inst_util.m"
              MR_Word check_hlds__inst_util__V_68_68;

#line 1265 "inst_util.m"
              {
#line 1265 "inst_util.m"
                check_hlds__inst_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_68_68, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "inst_util.m"
              }
#line 1265 "inst_util.m"
              {
#line 1265 "inst_util.m"
                check_hlds__inst_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_66_66, 0) = ((MR_Box) (check_hlds__inst_util__Live_10));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_66_66, 2) = ((MR_Box) (check_hlds__inst_util__V_68_68));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_66_66, 3) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 1265 "inst_util.m"
              }
#line 1265 "inst_util.m"
              {
#line 1265 "inst_util.m"
                check_hlds__inst_util__Any_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 1) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1265 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 2) = ((MR_Box) (check_hlds__inst_util__V_66_66));
#line 1265 "inst_util.m"
              }
#line 1266 "inst_util.m"
              {
#line 1266 "inst_util.m"
                MR_Word base;
#line 1266 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1266 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1266 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Any_20));
#line 1266 "inst_util.m"
              }
#line 1267 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1267 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1260 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1260 "inst_util.m"
            }
#line 1245 "inst_util.m"
          else
#line 1245 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1291 "inst_util.m"
              {
#line 1292 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_util_scalar_common_2[2]);
#line 1293 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1293 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1291 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1291 "inst_util.m"
              }
#line 1245 "inst_util.m"
            else
#line 1245 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1269 "inst_util.m"
                {
#line 1269 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1269 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_23;
#line 1269 "inst_util.m"
                  MR_Word check_hlds__inst_util__Detism1_24;
#line 1269 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_64_64;
#line 1269 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_65_65;
#line 1269 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1269 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_76;
#line 1269 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstResults0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));

#line 1271 "inst_util.m"
                  {
#line 1271 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_75, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_76);
                  }
#line 1269 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1269 "inst_util.m"
                    {
#line 1272 "inst_util.m"
                      {
#line 1272 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_22, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_23, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                      }
#line 1269 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1269 "inst_util.m"
                        {
#line 1275 "inst_util.m"
                          check_hlds__inst_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1276 "inst_util.m"
                          check_hlds__inst_util__V_65_65 = (MR_Integer) 1;
#line 1275 "inst_util.m"
                          {
#line 1275 "inst_util.m"
                            MR_Word base;
#line 1275 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1275 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 1275 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1275 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
#line 1275 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 1275 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_23));
#line 1275 "inst_util.m"
                          }
#line 1276 "inst_util.m"
                          {
#line 1276 "inst_util.m"
                            parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__V_65_65, check_hlds__inst_util__Detism_14);
                          }
#line 1276 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1269 "inst_util.m"
                        }
#line 1269 "inst_util.m"
                    }
#line 1269 "inst_util.m"
                }
#line 1245 "inst_util.m"
              else
#line 1245 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1287 "inst_util.m"
                  {
#line 1287 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1287 "inst_util.m"
                    MR_Word check_hlds__inst_util__SubInst0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1287 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_55_55;

#line 1289 "inst_util.m"
                    {
#line 1289 "inst_util.m"
                      check_hlds__inst_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "inst_util.m"
                      MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_55_55, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1289 "inst_util.m"
                      MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "inst_util.m"
                    }
#line 1288 "inst_util.m"
                    {
#line 1288 "inst_util.m"
                      return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_27, check_hlds__inst_util__SubInst0_28, check_hlds__inst_util__V_55_55, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                    }
#line 1287 "inst_util.m"
                  }
#line 1245 "inst_util.m"
                else
#line 1245 "inst_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1295 "inst_util.m"
                    {
#line 1295 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1295 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstTable0_32;
#line 1295 "inst_util.m"
                      MR_Word check_hlds__inst_util__AnyInsts0_33;
#line 1295 "inst_util.m"
                      MR_Word check_hlds__inst_util__AnyInstKey_34;
#line 1295 "inst_util.m"
                      MR_Word check_hlds__inst_util__AnyInst_38;
#line 1311 "inst_util.m"
                      MR_Word check_hlds__inst_util__Result_35;
#line 1300 "inst_util.m"
                      MR_Box check_hlds__inst_util__conv0_Result_35;

#line 1297 "inst_util.m"
                      {
#line 1297 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__InstTable0_32);
                      }
#line 1298 "inst_util.m"
                      {
#line 1298 "inst_util.m"
                        hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__AnyInsts0_33);
                      }
#line 1299 "inst_util.m"
                      {
#line 1299 "inst_util.m"
                        check_hlds__inst_util__AnyInstKey_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstKey_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1299 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstKey_34, 1) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1299 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstKey_34, 2) = ((MR_Box) ((check_hlds__inst_util__Live_10 | ((((check_hlds__inst_util__Uniq1_11 << (MR_Integer) 1)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1299 "inst_util.m"
                      }
#line 1300 "inst_util.m"
                      {
#line 1300 "inst_util.m"
                        check_hlds__inst_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0, check_hlds__inst_util__AnyInsts0_33, ((MR_Box) (check_hlds__inst_util__AnyInstKey_34)), &check_hlds__inst_util__conv0_Result_35);
                      }
#line 1300 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1300 "inst_util.m"
                        {
#line 1300 "inst_util.m"
                          check_hlds__inst_util__Result_35 = ((MR_Word) check_hlds__inst_util__conv0_Result_35);
#line 1300 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1300 "inst_util.m"
                        }
#line 1311 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1304 "inst_util.m"
                        {
#line 1304 "inst_util.m"
                          MR_Word check_hlds__inst_util__AnyInst0_36;
#line 1304 "inst_util.m"
                          MR_Word check_hlds__inst_util__Detism0_37;

#line 1301 "inst_util.m"
                          check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__Result_35)) == (MR_mktag((MR_Integer) 1)));
#line 1301 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 1301 "inst_util.m"
                            {
#line 1301 "inst_util.m"
                              check_hlds__inst_util__AnyInst0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_35, (MR_Integer) 0)));
#line 1301 "inst_util.m"
                              check_hlds__inst_util__Detism0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_35, (MR_Integer) 1)));
#line 1302 "inst_util.m"
                              check_hlds__inst_util__AnyInst_38 = check_hlds__inst_util__AnyInst0_36;
#line 1303 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_37;
#line 1301 "inst_util.m"
                            }
#line 1301 "inst_util.m"
                          else
#line 1305 "inst_util.m"
                            {
#line 1305 "inst_util.m"
                              {
#line 1305 "inst_util.m"
                                check_hlds__inst_util__AnyInst_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "inst_util.m"
                                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1305 "inst_util.m"
                                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_38, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstKey_34));
#line 1305 "inst_util.m"
                              }
#line 1306 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1305 "inst_util.m"
                            }
#line 1306 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1304 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1304 "inst_util.m"
                        }
#line 1311 "inst_util.m"
                      else
#line 1314 "inst_util.m"
                        {
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__AnyInsts1_39;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable1_40;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInst1_41;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable2_42;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__AnyInsts2_43;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__AnyInsts_44;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable_45;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_51_51;
#line 1314 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInst0_79;

#line 1314 "inst_util.m"
                          {
#line 1314 "inst_util.m"
                            mercury__map__det_insert_4_p_0(check_hlds__inst_util__TypeCtorInfo_84_84, check_hlds__inst_util__TypeCtorInfo_85_85, ((MR_Box) (check_hlds__inst_util__AnyInstKey_34)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__inst_util__AnyInsts0_33, &check_hlds__inst_util__AnyInsts1_39);
                          }
#line 1315 "inst_util.m"
                          {
#line 1315 "inst_util.m"
                            hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInsts1_39, check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__InstTable1_40);
                          }
#line 1316 "inst_util.m"
                          {
#line 1316 "inst_util.m"
                            hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49);
                          }
#line 1320 "inst_util.m"
                          {
#line 1320 "inst_util.m"
                            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__InstName_31, &check_hlds__inst_util__SubInst0_79);
                          }
#line 1321 "inst_util.m"
                          {
#line 1321 "inst_util.m"
                            check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__SubInst0_79, &check_hlds__inst_util__SubInst1_41);
                          }
#line 1322 "inst_util.m"
                          {
#line 1322 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__SubInst1_41, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__AnyInst_38, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50);
                          }
#line 1314 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 1314 "inst_util.m"
                            {
#line 1327 "inst_util.m"
                              {
#line 1327 "inst_util.m"
                                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50, &check_hlds__inst_util__InstTable2_42);
                              }
#line 1328 "inst_util.m"
                              {
#line 1328 "inst_util.m"
                                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__AnyInsts2_43);
                              }
#line 1329 "inst_util.m"
                              {
#line 1329 "inst_util.m"
                                check_hlds__inst_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "inst_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_51_51, 0) = ((MR_Box) (check_hlds__inst_util__AnyInst_38));
#line 1329 "inst_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_51_51, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1329 "inst_util.m"
                              }
#line 1329 "inst_util.m"
                              {
#line 1329 "inst_util.m"
                                mercury__map__det_update_4_p_0(check_hlds__inst_util__TypeCtorInfo_84_84, check_hlds__inst_util__TypeCtorInfo_85_85, ((MR_Box) (check_hlds__inst_util__AnyInstKey_34)), ((MR_Box) (check_hlds__inst_util__V_51_51)), check_hlds__inst_util__AnyInsts2_43, &check_hlds__inst_util__AnyInsts_44);
                              }
#line 1331 "inst_util.m"
                              {
#line 1331 "inst_util.m"
                                hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInsts_44, check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__InstTable_45);
                              }
#line 1332 "inst_util.m"
                              {
#line 1332 "inst_util.m"
                                hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_45, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_50_50, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                              }
#line 1332 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1314 "inst_util.m"
                            }
#line 1314 "inst_util.m"
                        }
#line 1295 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1295 "inst_util.m"
                        {
#line 1335 "inst_util.m"
                          {
#line 1335 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_instname_3_p_0(check_hlds__inst_util__AnyInst_38, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47, check_hlds__inst_util__AnyInstKey_34);
                          }
#line 1337 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 1336 "inst_util.m"
                            {
#line 1336 "inst_util.m"
                              MR_Word base;
#line 1336 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 1336 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1336 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstKey_34));
#line 1336 "inst_util.m"
                            }
#line 1337 "inst_util.m"
                          else
#line 1338 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__AnyInst_38;
#line 1337 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1295 "inst_util.m"
                        }
#line 1295 "inst_util.m"
                    }
#line 1245 "inst_util.m"
                  else
#line 1245 "inst_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1278 "inst_util.m"
                      {
#line 1278 "inst_util.m"
                        MR_Word check_hlds__inst_util__PredInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1278 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1278 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_78;

#line 1280 "inst_util.m"
                        {
#line 1280 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_77, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_78);
                        }
#line 1278 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1278 "inst_util.m"
                          {
#line 1282 "inst_util.m"
                            *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1282 "inst_util.m"
                            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1281 "inst_util.m"
                            {
#line 1281 "inst_util.m"
                              MR_Word base;
#line 1281 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 1281 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1281 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_78));
#line 1281 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_25));
#line 1281 "inst_util.m"
                            }
#line 1281 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1278 "inst_util.m"
                          }
#line 1278 "inst_util.m"
                      }
#line 1245 "inst_util.m"
                    else
#line 1284 "inst_util.m"
                      {
#line 1285 "inst_util.m"
                        {
#line 1285 "inst_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_any_inst\'/8", (MR_String) "free inst var");
                        }
#line 1284 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1284 "inst_util.m"
                      }
#line 1245 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1245 "inst_util.m"
  }
#line 1239 "inst_util.m"
}

#line 1218 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1218 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1218 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1218 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1218 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1218 "inst_util.m"
{
#line 1223 "inst_util.m"
  {
#line 1223 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1223 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "inst_util.m"
      {
#line 1223 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1223 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1223 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1223 "inst_util.m"
      }
#line 1223 "inst_util.m"
    else
#line 1225 "inst_util.m"
      {
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst_20;
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_21;
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 0)));
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 1)));
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1225 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1227 "inst_util.m"
        {
#line 1227 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1225 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1225 "inst_util.m"
          {
#line 1229 "inst_util.m"
            {
#line 1229 "inst_util.m"
              check_hlds__inst_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1229 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1229 "inst_util.m"
            }
#line 1230 "inst_util.m"
            {
#line 1230 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInsts_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1225 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1225 "inst_util.m"
              {
#line 1225 "inst_util.m"
                {
#line 1225 "inst_util.m"
                  MR_Word base;
#line 1225 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1225 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_20));
#line 1225 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInsts_21));
#line 1225 "inst_util.m"
                }
#line 1232 "inst_util.m"
                {
#line 1232 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1232 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1225 "inst_util.m"
              }
#line 1225 "inst_util.m"
          }
#line 1225 "inst_util.m"
      }
#line 1223 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1223 "inst_util.m"
  }
#line 1218 "inst_util.m"
}

#line 1121 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1121 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1121 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1121 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1121 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45)
#line 1121 "inst_util.m"
{
#line 1127 "inst_util.m"
  {
#line 1127 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1127 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "inst_util.m"
      {
#line 1136 "inst_util.m"
        MR_Word check_hlds__inst_util__V_68_68;
#line 1136 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_70;

#line 1137 "inst_util.m"
        {
#line 1137 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_70);
        }
#line 1136 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1136 "inst_util.m"
          {
#line 1138 "inst_util.m"
            check_hlds__inst_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1139 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1139 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1138 "inst_util.m"
            {
#line 1138 "inst_util.m"
              MR_Word base;
#line 1138 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1138 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1138 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_70));
#line 1138 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_68_68));
#line 1138 "inst_util.m"
            }
#line 1138 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1136 "inst_util.m"
          }
#line 1136 "inst_util.m"
      }
#line 1127 "inst_util.m"
    else
#line 1127 "inst_util.m"
      if ((check_hlds__inst_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1127 "inst_util.m"
        {
#line 1128 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1129 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1129 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1127 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1127 "inst_util.m"
        }
#line 1127 "inst_util.m"
      else
#line 1127 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 2))))
#line 1131 "inst_util.m"
          {
#line 1131 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1131 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1131 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_18;

#line 1132 "inst_util.m"
            {
#line 1132 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
            }
#line 1131 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1131 "inst_util.m"
              {
#line 1134 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1134 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1133 "inst_util.m"
                {
#line 1133 "inst_util.m"
                  MR_Word base;
#line 1133 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = base;
#line 1133 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1133 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1133 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1133 "inst_util.m"
                }
#line 1133 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1131 "inst_util.m"
              }
#line 1131 "inst_util.m"
          }
#line 1127 "inst_util.m"
        else
#line 1127 "inst_util.m"
          if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 1))))
#line 1141 "inst_util.m"
            {
#line 1141 "inst_util.m"
              MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1141 "inst_util.m"
              MR_Word check_hlds__inst_util__V_65_65;
#line 1141 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_71;

#line 1142 "inst_util.m"
              {
#line 1142 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_71);
              }
#line 1141 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1141 "inst_util.m"
                {
#line 1144 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1144 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1143 "inst_util.m"
                  {
#line 1143 "inst_util.m"
                    check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "inst_util.m"
                    MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1143 "inst_util.m"
                    MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_65_65, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_71));
#line 1143 "inst_util.m"
                    MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_65_65, 2) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1143 "inst_util.m"
                  }
#line 1143 "inst_util.m"
                  {
#line 1143 "inst_util.m"
                    MR_Word base;
#line 1143 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1143 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1143 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 1143 "inst_util.m"
                  }
#line 1143 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1141 "inst_util.m"
                }
#line 1141 "inst_util.m"
            }
#line 1127 "inst_util.m"
          else
#line 1127 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1165 "inst_util.m"
              {
#line 1166 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__inst_util_scalar_common_1[1]);
#line 1167 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1167 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1165 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1165 "inst_util.m"
              }
#line 1127 "inst_util.m"
            else
#line 1127 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1146 "inst_util.m"
                {
#line 1146 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1146 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1146 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_22;
#line 1146 "inst_util.m"
                  MR_Word check_hlds__inst_util__Detism1_23;
#line 1146 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_62_62;
#line 1146 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1146 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_73;

#line 1147 "inst_util.m"
                  {
#line 1147 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_72, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_73);
                  }
#line 1146 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1146 "inst_util.m"
                    {
#line 1148 "inst_util.m"
                      {
#line 1148 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_21, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_22, &check_hlds__inst_util__Detism1_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                      }
#line 1146 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1146 "inst_util.m"
                        {
#line 1151 "inst_util.m"
                          check_hlds__inst_util__V_62_62 = (MR_Integer) 1;
#line 1150 "inst_util.m"
                          {
#line 1150 "inst_util.m"
                            MR_Word base;
#line 1150 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 1150 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1150 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_73));
#line 1150 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_20));
#line 1150 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_22));
#line 1150 "inst_util.m"
                          }
#line 1151 "inst_util.m"
                          {
#line 1151 "inst_util.m"
                            parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_23, check_hlds__inst_util__V_62_62, check_hlds__inst_util__Detism_14);
                          }
#line 1151 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1146 "inst_util.m"
                        }
#line 1146 "inst_util.m"
                    }
#line 1146 "inst_util.m"
                }
#line 1127 "inst_util.m"
              else
#line 1127 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1161 "inst_util.m"
                  {
#line 1161 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1161 "inst_util.m"
                    MR_Word check_hlds__inst_util__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1161 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_53_53;

#line 1163 "inst_util.m"
                    {
#line 1163 "inst_util.m"
                      check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1163 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_53_53, 1) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1163 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_53_53, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "inst_util.m"
                    }
#line 1162 "inst_util.m"
                    {
#line 1162 "inst_util.m"
                      return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_25, check_hlds__inst_util__SubInst0_26, check_hlds__inst_util__V_53_53, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                    }
#line 1161 "inst_util.m"
                  }
#line 1127 "inst_util.m"
                else
#line 1127 "inst_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1169 "inst_util.m"
                    {
#line 1169 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1169 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstTable0_30;
#line 1169 "inst_util.m"
                      MR_Word check_hlds__inst_util__GroundInsts0_31;
#line 1169 "inst_util.m"
                      MR_Word check_hlds__inst_util__GroundInstKey_32;
#line 1169 "inst_util.m"
                      MR_Word check_hlds__inst_util__GroundInst_36;
#line 1185 "inst_util.m"
                      MR_Word check_hlds__inst_util__Result_33;
#line 1174 "inst_util.m"
                      MR_Box check_hlds__inst_util__conv0_Result_33;

#line 1171 "inst_util.m"
                      {
#line 1171 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__InstTable0_30);
                      }
#line 1172 "inst_util.m"
                      {
#line 1172 "inst_util.m"
                        hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__GroundInsts0_31);
                      }
#line 1173 "inst_util.m"
                      {
#line 1173 "inst_util.m"
                        check_hlds__inst_util__GroundInstKey_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstKey_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1173 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstKey_32, 1) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1173 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstKey_32, 2) = ((MR_Box) ((check_hlds__inst_util__Live_10 | ((((check_hlds__inst_util__Uniq1_11 << (MR_Integer) 1)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1173 "inst_util.m"
                      }
#line 1174 "inst_util.m"
                      {
#line 1174 "inst_util.m"
                        check_hlds__inst_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0, check_hlds__inst_util__GroundInsts0_31, ((MR_Box) (check_hlds__inst_util__GroundInstKey_32)), &check_hlds__inst_util__conv0_Result_33);
                      }
#line 1174 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1174 "inst_util.m"
                        {
#line 1174 "inst_util.m"
                          check_hlds__inst_util__Result_33 = ((MR_Word) check_hlds__inst_util__conv0_Result_33);
#line 1174 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1174 "inst_util.m"
                        }
#line 1185 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1178 "inst_util.m"
                        {
#line 1178 "inst_util.m"
                          MR_Word check_hlds__inst_util__GroundInst0_34;
#line 1178 "inst_util.m"
                          MR_Word check_hlds__inst_util__Detism0_35;

#line 1175 "inst_util.m"
                          check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__Result_33)) == (MR_mktag((MR_Integer) 1)));
#line 1175 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 1175 "inst_util.m"
                            {
#line 1175 "inst_util.m"
                              check_hlds__inst_util__GroundInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_33, (MR_Integer) 0)));
#line 1175 "inst_util.m"
                              check_hlds__inst_util__Detism0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_33, (MR_Integer) 1)));
#line 1176 "inst_util.m"
                              check_hlds__inst_util__GroundInst_36 = check_hlds__inst_util__GroundInst0_34;
#line 1177 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_35;
#line 1175 "inst_util.m"
                            }
#line 1175 "inst_util.m"
                          else
#line 1179 "inst_util.m"
                            {
#line 1179 "inst_util.m"
                              {
#line 1179 "inst_util.m"
                                check_hlds__inst_util__GroundInst_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "inst_util.m"
                                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1179 "inst_util.m"
                                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_36, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstKey_32));
#line 1179 "inst_util.m"
                              }
#line 1180 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1179 "inst_util.m"
                            }
#line 1180 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1178 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1178 "inst_util.m"
                        }
#line 1185 "inst_util.m"
                      else
#line 1189 "inst_util.m"
                        {
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__TypeCtorInfo_83_83 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__GroundInsts1_37;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable1_38;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInst1_39;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable2_40;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__GroundInsts2_41;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__GroundInsts_42;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstTable_43;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_49_49;
#line 1189 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInst0_77;

#line 1188 "inst_util.m"
                          {
#line 1188 "inst_util.m"
                            mercury__map__det_insert_4_p_0(check_hlds__inst_util__TypeCtorInfo_82_82, check_hlds__inst_util__TypeCtorInfo_83_83, ((MR_Box) (check_hlds__inst_util__GroundInstKey_32)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__inst_util__GroundInsts0_31, &check_hlds__inst_util__GroundInsts1_37);
                          }
#line 1190 "inst_util.m"
                          {
#line 1190 "inst_util.m"
                            hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInsts1_37, check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__InstTable1_38);
                          }
#line 1191 "inst_util.m"
                          {
#line 1191 "inst_util.m"
                            hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47);
                          }
#line 1195 "inst_util.m"
                          {
#line 1195 "inst_util.m"
                            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, check_hlds__inst_util__InstName_29, &check_hlds__inst_util__SubInst0_77);
                          }
#line 1196 "inst_util.m"
                          {
#line 1196 "inst_util.m"
                            check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, check_hlds__inst_util__SubInst0_77, &check_hlds__inst_util__SubInst1_39);
                          }
#line 1197 "inst_util.m"
                          {
#line 1197 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__SubInst1_39, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__GroundInst_36, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                          }
#line 1189 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 1189 "inst_util.m"
                            {
#line 1203 "inst_util.m"
                              {
#line 1203 "inst_util.m"
                                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, &check_hlds__inst_util__InstTable2_40);
                              }
#line 1204 "inst_util.m"
                              {
#line 1204 "inst_util.m"
                                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__GroundInsts2_41);
                              }
#line 1205 "inst_util.m"
                              {
#line 1205 "inst_util.m"
                                check_hlds__inst_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "inst_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_49_49, 0) = ((MR_Box) (check_hlds__inst_util__GroundInst_36));
#line 1205 "inst_util.m"
                                MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_49_49, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1205 "inst_util.m"
                              }
#line 1205 "inst_util.m"
                              {
#line 1205 "inst_util.m"
                                mercury__map__det_update_4_p_0(check_hlds__inst_util__TypeCtorInfo_82_82, check_hlds__inst_util__TypeCtorInfo_83_83, ((MR_Box) (check_hlds__inst_util__GroundInstKey_32)), ((MR_Box) (check_hlds__inst_util__V_49_49)), check_hlds__inst_util__GroundInsts2_41, &check_hlds__inst_util__GroundInsts_42);
                              }
#line 1207 "inst_util.m"
                              {
#line 1207 "inst_util.m"
                                hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInsts_42, check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__InstTable_43);
                              }
#line 1208 "inst_util.m"
                              {
#line 1208 "inst_util.m"
                                hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_43, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                              }
#line 1208 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1189 "inst_util.m"
                            }
#line 1189 "inst_util.m"
                        }
#line 1169 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1169 "inst_util.m"
                        {
#line 1211 "inst_util.m"
                          {
#line 1211 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_instname_3_p_0(check_hlds__inst_util__GroundInst_36, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45, check_hlds__inst_util__GroundInstKey_32);
                          }
#line 1213 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 1212 "inst_util.m"
                            {
#line 1212 "inst_util.m"
                              MR_Word base;
#line 1212 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 1212 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1212 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstKey_32));
#line 1212 "inst_util.m"
                            }
#line 1213 "inst_util.m"
                          else
#line 1214 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__GroundInst_36;
#line 1213 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1169 "inst_util.m"
                        }
#line 1169 "inst_util.m"
                    }
#line 1127 "inst_util.m"
                  else
#line 1127 "inst_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1153 "inst_util.m"
                      {
#line 1153 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1153 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1153 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_76;

#line 1154 "inst_util.m"
                        {
#line 1154 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_74, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_76);
                        }
#line 1153 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1153 "inst_util.m"
                          {
#line 1156 "inst_util.m"
                            *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1156 "inst_util.m"
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
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
#line 1155 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_75));
#line 1155 "inst_util.m"
                            }
#line 1155 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1153 "inst_util.m"
                          }
#line 1153 "inst_util.m"
                      }
#line 1127 "inst_util.m"
                    else
#line 1158 "inst_util.m"
                      {
#line 1159 "inst_util.m"
                        {
#line 1159 "inst_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_ground_inst\'/8", (MR_String) "free inst var");
                        }
#line 1158 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1158 "inst_util.m"
                      }
#line 1127 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1127 "inst_util.m"
  }
#line 1121 "inst_util.m"
}

#line 1106 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1106 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1106 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1106 "inst_util.m"
{
#line 1110 "inst_util.m"
  {
#line 1110 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1110 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "inst_util.m"
      {
#line 1110 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1110 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1110 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1110 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1110 "inst_util.m"
      }
#line 1110 "inst_util.m"
    else
#line 1112 "inst_util.m"
      {
#line 1112 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1112 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1112 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1112 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1112 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1112 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1112 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1113 "inst_util.m"
        {
#line 1113 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1112 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1112 "inst_util.m"
          {
#line 1114 "inst_util.m"
            {
#line 1114 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1112 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1112 "inst_util.m"
              {
#line 1111 "inst_util.m"
                {
#line 1111 "inst_util.m"
                  MR_Word base;
#line 1111 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1111 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1111 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1111 "inst_util.m"
                }
#line 1116 "inst_util.m"
                {
#line 1116 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1116 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1112 "inst_util.m"
              }
#line 1112 "inst_util.m"
          }
#line 1112 "inst_util.m"
      }
#line 1110 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1110 "inst_util.m"
  }
#line 1106 "inst_util.m"
}

#line 1087 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1087 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1087 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1087 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1087 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1087 "inst_util.m"
{
#line 1092 "inst_util.m"
  {
#line 1092 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1092 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1092 "inst_util.m"
      {
#line 1092 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1092 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1092 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1092 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1092 "inst_util.m"
      }
#line 1092 "inst_util.m"
    else
#line 1094 "inst_util.m"
      {
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1094 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1093 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1093 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1093 "inst_util.m"
          {
#line 1093 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1093 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1095 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1095 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1095 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1097 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1096 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1097 "inst_util.m"
            else
#line 1098 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1100 "inst_util.m"
            {
#line 1100 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1094 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1094 "inst_util.m"
              {
#line 1102 "inst_util.m"
                {
#line 1102 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1094 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1094 "inst_util.m"
                  {
#line 1094 "inst_util.m"
                    {
#line 1094 "inst_util.m"
                      MR_Word base;
#line 1094 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1094 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1094 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1094 "inst_util.m"
                    }
#line 1104 "inst_util.m"
                    {
#line 1104 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1104 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1094 "inst_util.m"
                  }
#line 1094 "inst_util.m"
              }
#line 1093 "inst_util.m"
          }
#line 1094 "inst_util.m"
      }
#line 1092 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1092 "inst_util.m"
  }
#line 1087 "inst_util.m"
}

#line 970 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 970 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 970 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12)
#line 970 "inst_util.m"
{
#line 993 "inst_util.m"
  {
#line 993 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 993 "inst_util.m"
    if ((check_hlds__inst_util__UniqA_10 == (MR_Integer) 3))
#line 1064 "inst_util.m"
      {
#line 1080 "inst_util.m"
        if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1080 "inst_util.m"
          {
#line 1082 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1080 "inst_util.m"
            if (!(check_hlds__inst_util__succeeded))
#line 1083 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1080 "inst_util.m"
          }
#line 1080 "inst_util.m"
        else
#line 1080 "inst_util.m"
          {
#line 1081 "inst_util.m"
            {
#line 1081 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
            }
#line 1080 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
          }
#line 1064 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1064 "inst_util.m"
          {
#line 1066 "inst_util.m"
            *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1066 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1064 "inst_util.m"
          }
#line 1064 "inst_util.m"
      }
#line 993 "inst_util.m"
    else
#line 993 "inst_util.m"
      if ((check_hlds__inst_util__UniqA_10 == (MR_Integer) 4))
#line 1068 "inst_util.m"
        {
#line 1080 "inst_util.m"
          if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1080 "inst_util.m"
            {
#line 1082 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1080 "inst_util.m"
              if (!(check_hlds__inst_util__succeeded))
#line 1083 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1080 "inst_util.m"
            }
#line 1080 "inst_util.m"
          else
#line 1080 "inst_util.m"
            {
#line 1081 "inst_util.m"
              {
#line 1081 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
              }
#line 1080 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
            }
#line 1068 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1068 "inst_util.m"
            {
#line 1070 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__UniqB_11 == (MR_Integer) 3);
#line 1072 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1071 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1072 "inst_util.m"
              else
#line 1073 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1072 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1068 "inst_util.m"
            }
#line 1068 "inst_util.m"
        }
#line 993 "inst_util.m"
      else
#line 993 "inst_util.m"
        if ((check_hlds__inst_util__UniqA_10 == (MR_Integer) 2))
#line 1034 "inst_util.m"
          if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 3))
#line 1055 "inst_util.m"
            {
#line 1080 "inst_util.m"
              if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1080 "inst_util.m"
                {
#line 1082 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1080 "inst_util.m"
                  if (!(check_hlds__inst_util__succeeded))
#line 1083 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1080 "inst_util.m"
                }
#line 1080 "inst_util.m"
              else
#line 1080 "inst_util.m"
                {
#line 1081 "inst_util.m"
                  {
#line 1081 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                  }
#line 1080 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
                }
#line 1055 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1055 "inst_util.m"
                {
#line 1057 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1057 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1055 "inst_util.m"
                }
#line 1055 "inst_util.m"
            }
#line 1034 "inst_util.m"
          else
#line 1034 "inst_util.m"
            if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 4))
#line 1059 "inst_util.m"
              {
#line 1080 "inst_util.m"
                if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1080 "inst_util.m"
                  {
#line 1082 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1080 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1083 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1080 "inst_util.m"
                  }
#line 1080 "inst_util.m"
                else
#line 1080 "inst_util.m"
                  {
#line 1081 "inst_util.m"
                    {
#line 1081 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1080 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
                  }
#line 1059 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1059 "inst_util.m"
                  {
#line 1061 "inst_util.m"
                    *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1061 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1059 "inst_util.m"
                  }
#line 1059 "inst_util.m"
              }
#line 1034 "inst_util.m"
            else
#line 1034 "inst_util.m"
              if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 2))
#line 1050 "inst_util.m"
                {
#line 1050 "inst_util.m"
                  if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1052 "inst_util.m"
                    *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1050 "inst_util.m"
                  else
#line 1049 "inst_util.m"
                    *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1050 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1050 "inst_util.m"
                }
#line 1034 "inst_util.m"
              else
#line 1034 "inst_util.m"
                if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 0))
#line 1033 "inst_util.m"
                  {
#line 1033 "inst_util.m"
                    *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1033 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1033 "inst_util.m"
                  }
#line 1034 "inst_util.m"
                else
#line 1039 "inst_util.m"
                  {
#line 1039 "inst_util.m"
                    if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1043 "inst_util.m"
                      *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1039 "inst_util.m"
                    else
#line 1038 "inst_util.m"
                      *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1039 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1039 "inst_util.m"
                  }
#line 993 "inst_util.m"
        else
#line 993 "inst_util.m"
          if ((check_hlds__inst_util__UniqA_10 == (MR_Integer) 0))
#line 984 "inst_util.m"
            if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 3))
#line 985 "inst_util.m"
              {
#line 1080 "inst_util.m"
                if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1080 "inst_util.m"
                  {
#line 1082 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1080 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1083 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1080 "inst_util.m"
                  }
#line 1080 "inst_util.m"
                else
#line 1080 "inst_util.m"
                  {
#line 1081 "inst_util.m"
                    {
#line 1081 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1080 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
                  }
#line 985 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 985 "inst_util.m"
                  {
#line 987 "inst_util.m"
                    *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 987 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 985 "inst_util.m"
                  }
#line 985 "inst_util.m"
              }
#line 984 "inst_util.m"
            else
#line 984 "inst_util.m"
              if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 4))
#line 989 "inst_util.m"
                {
#line 1080 "inst_util.m"
                  if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1080 "inst_util.m"
                    {
#line 1082 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1080 "inst_util.m"
                      if (!(check_hlds__inst_util__succeeded))
#line 1083 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1080 "inst_util.m"
                    }
#line 1080 "inst_util.m"
                  else
#line 1080 "inst_util.m"
                    {
#line 1081 "inst_util.m"
                      {
#line 1081 "inst_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                      }
#line 1080 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
                    }
#line 989 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 989 "inst_util.m"
                    {
#line 991 "inst_util.m"
                      *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 991 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 989 "inst_util.m"
                    }
#line 989 "inst_util.m"
                }
#line 984 "inst_util.m"
              else
#line 983 "inst_util.m"
                {
#line 983 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 983 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 983 "inst_util.m"
                }
#line 993 "inst_util.m"
          else
#line 999 "inst_util.m"
            if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 3))
#line 1020 "inst_util.m"
              {
#line 1080 "inst_util.m"
                if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1080 "inst_util.m"
                  {
#line 1082 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1080 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1083 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1080 "inst_util.m"
                  }
#line 1080 "inst_util.m"
                else
#line 1080 "inst_util.m"
                  {
#line 1081 "inst_util.m"
                    {
#line 1081 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1080 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
                  }
#line 1020 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1020 "inst_util.m"
                  {
#line 1022 "inst_util.m"
                    *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1022 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1020 "inst_util.m"
                  }
#line 1020 "inst_util.m"
              }
#line 999 "inst_util.m"
            else
#line 999 "inst_util.m"
              if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 4))
#line 1024 "inst_util.m"
                {
#line 1080 "inst_util.m"
                  if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1080 "inst_util.m"
                    {
#line 1082 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1080 "inst_util.m"
                      if (!(check_hlds__inst_util__succeeded))
#line 1083 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1080 "inst_util.m"
                    }
#line 1080 "inst_util.m"
                  else
#line 1080 "inst_util.m"
                    {
#line 1081 "inst_util.m"
                      {
#line 1081 "inst_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                      }
#line 1080 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
                    }
#line 1024 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1024 "inst_util.m"
                    {
#line 1026 "inst_util.m"
                      *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1026 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1024 "inst_util.m"
                    }
#line 1024 "inst_util.m"
                }
#line 999 "inst_util.m"
              else
#line 999 "inst_util.m"
                if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 2))
#line 1013 "inst_util.m"
                  {
#line 1013 "inst_util.m"
                    if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1017 "inst_util.m"
                      *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1013 "inst_util.m"
                    else
#line 1012 "inst_util.m"
                      *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1013 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1013 "inst_util.m"
                  }
#line 999 "inst_util.m"
                else
#line 999 "inst_util.m"
                  if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 0))
#line 998 "inst_util.m"
                    {
#line 998 "inst_util.m"
                      *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 998 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 998 "inst_util.m"
                    }
#line 999 "inst_util.m"
                  else
#line 1004 "inst_util.m"
                    {
#line 1004 "inst_util.m"
                      if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1006 "inst_util.m"
                        *check_hlds__inst_util__Uniq_12 = (MR_Integer) 1;
#line 1004 "inst_util.m"
                      else
#line 1003 "inst_util.m"
                        *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1004 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1004 "inst_util.m"
                    }
#line 993 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 993 "inst_util.m"
  }
#line 970 "inst_util.m"
}

#line 923 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 923 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 923 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 923 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 923 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22)
#line 923 "inst_util.m"
{
#line 928 "inst_util.m"
  {
#line 928 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 928 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;

#line 929 "inst_util.m"
    {
#line 929 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__SubInstA_12, check_hlds__inst_util__InstB_13, check_hlds__inst_util__Real_14, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
    }
#line 928 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 928 "inst_util.m"
      {
#line 931 "inst_util.m"
        {
#line 931 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_18, check_hlds__inst_util__SubInstA_12, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
        }
#line 931 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 935 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 934 "inst_util.m"
          *check_hlds__inst_util__Inst_15 = check_hlds__inst_util__Inst0_18;
#line 935 "inst_util.m"
        else
#line 938 "inst_util.m"
          {
#line 938 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVars0_19;
#line 938 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_20;

#line 935 "inst_util.m"
            check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 935 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 935 "inst_util.m"
              {
#line 935 "inst_util.m"
                check_hlds__inst_util__InstVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 1)));
#line 935 "inst_util.m"
                check_hlds__inst_util__SubInst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 2)));
#line 937 "inst_util.m"
                {
#line 937 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_24_24;

#line 937 "inst_util.m"
                  {
#line 937 "inst_util.m"
                    check_hlds__inst_util__V_24_24 = mercury__set__union_2_f_0((MR_Word) &check_hlds__inst_util_scalar_common_2[0], check_hlds__inst_util__InstVars0_19, check_hlds__inst_util__InstVarsA_11);
                  }
#line 937 "inst_util.m"
                  {
#line 937 "inst_util.m"
                    MR_Word base;
#line 937 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 937 "inst_util.m"
                    *check_hlds__inst_util__Inst_15 = base;
#line 937 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 937 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_24_24));
#line 937 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst0_20));
#line 937 "inst_util.m"
                  }
#line 937 "inst_util.m"
                }
#line 935 "inst_util.m"
              }
#line 935 "inst_util.m"
            else
#line 940 "inst_util.m"
              {
#line 940 "inst_util.m"
                MR_Word base;
#line 940 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 940 "inst_util.m"
                *check_hlds__inst_util__Inst_15 = base;
#line 940 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 940 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVarsA_11));
#line 940 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_18));
#line 940 "inst_util.m"
              }
#line 938 "inst_util.m"
          }
#line 935 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 928 "inst_util.m"
      }
#line 928 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 928 "inst_util.m"
  }
#line 923 "inst_util.m"
}

#line 907 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 907 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 907 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 907 "inst_util.m"
{
#line 912 "inst_util.m"
  {
#line 912 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 912 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "inst_util.m"
      {
#line 912 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 912 "inst_util.m"
          {
#line 912 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 912 "inst_util.m"
              {
#line 912 "inst_util.m"
                *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "inst_util.m"
                *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 912 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 912 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 912 "inst_util.m"
              }
#line 912 "inst_util.m"
          }
#line 912 "inst_util.m"
      }
#line 912 "inst_util.m"
    else
#line 914 "inst_util.m"
      {
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_15;
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_16;
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__Live_17;
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__Lives_18;
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 914 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 913 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 913 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 913 "inst_util.m"
          {
#line 913 "inst_util.m"
            check_hlds__inst_util__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 913 "inst_util.m"
            check_hlds__inst_util__InstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 914 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 914 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 914 "inst_util.m"
              {
#line 914 "inst_util.m"
                check_hlds__inst_util__Live_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 914 "inst_util.m"
                check_hlds__inst_util__Lives_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 915 "inst_util.m"
                {
#line 915 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_17, check_hlds__inst_util__InstA_13, check_hlds__inst_util__InstB_15, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
                }
#line 914 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 914 "inst_util.m"
                  {
#line 917 "inst_util.m"
                    {
#line 917 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__InstsA_14, check_hlds__inst_util__InstsB_16, check_hlds__inst_util__Lives_18, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 914 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 914 "inst_util.m"
                      {
#line 914 "inst_util.m"
                        {
#line 914 "inst_util.m"
                          MR_Word base;
#line 914 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = base;
#line 914 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 914 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 914 "inst_util.m"
                        }
#line 919 "inst_util.m"
                        {
#line 919 "inst_util.m"
                          parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 919 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 914 "inst_util.m"
                      }
#line 914 "inst_util.m"
                  }
#line 914 "inst_util.m"
              }
#line 913 "inst_util.m"
          }
#line 914 "inst_util.m"
      }
#line 912 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 912 "inst_util.m"
  }
#line 907 "inst_util.m"
}

#line 888 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 888 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 888 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 888 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 888 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 888 "inst_util.m"
{
#line 893 "inst_util.m"
  while (MR_TRUE)
#line 893 "inst_util.m"
    {
#line 893 "inst_util.m"
      /* tailcall optimized into a loop */
#line 893 "inst_util.m"
      {
#line 893 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 893 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 893 "inst_util.m"
          {
#line 893 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "inst_util.m"
            *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 7;
#line 894 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 893 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 893 "inst_util.m"
          }
#line 893 "inst_util.m"
        else
#line 896 "inst_util.m"
          {
#line 896 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 896 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 0)));
#line 896 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 1)));

#line 898 "inst_util.m"
            {
#line 898 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_26, check_hlds__inst_util__ConsIdB_2);
            }
#line 902 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 900 "inst_util.m"
              {
#line 900 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_28;
#line 900 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 900 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;

#line 899 "inst_util.m"
                {
#line 899 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__ArgsA_27, check_hlds__inst_util__ArgsB_3, check_hlds__inst_util__LivesB_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Args_28, check_hlds__inst_util__HeadVar__7_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 900 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 900 "inst_util.m"
                  {
#line 901 "inst_util.m"
                    check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 901 "inst_util.m"
                    {
#line 901 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_26));
#line 901 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 1) = ((MR_Box) (check_hlds__inst_util__Args_28));
#line 901 "inst_util.m"
                    }
#line 901 "inst_util.m"
                    {
#line 901 "inst_util.m"
                      MR_Word base;
#line 901 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 901 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 901 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 901 "inst_util.m"
                    }
#line 901 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 900 "inst_util.m"
                  }
#line 900 "inst_util.m"
              }
#line 902 "inst_util.m"
            else
#line 903 "inst_util.m"
              {
#line 903 "inst_util.m"
                /* direct tailcall eliminated */
#line 903 "inst_util.m"
                {
#line 903 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInstsA_18;

#line 903 "inst_util.m"
                  check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 903 "inst_util.m"
                }
#line 903 "inst_util.m"
                continue;
#line 903 "inst_util.m"
              }
#line 896 "inst_util.m"
          }
#line 893 "inst_util.m"
        return check_hlds__inst_util__succeeded;
#line 893 "inst_util.m"
      }
#line 893 "inst_util.m"
      break;
#line 893 "inst_util.m"
    }
#line 888 "inst_util.m"
}

#line 845 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 845 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 845 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 845 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 845 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 845 "inst_util.m"
{
#line 850 "inst_util.m"
  {
#line 850 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 850 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "inst_util.m"
      {
#line 850 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "inst_util.m"
          {
#line 850 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 850 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 6;
#line 851 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 850 "inst_util.m"
          }
#line 850 "inst_util.m"
        else
#line 852 "inst_util.m"
          {
#line 852 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 852 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 853 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 852 "inst_util.m"
          }
#line 850 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 850 "inst_util.m"
      }
#line 850 "inst_util.m"
    else
#line 850 "inst_util.m"
      {
#line 850 "inst_util.m"
        MR_Word check_hlds__inst_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 850 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));

#line 850 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "inst_util.m"
          {
#line 854 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 854 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 855 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 854 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 854 "inst_util.m"
          }
#line 850 "inst_util.m"
        else
#line 858 "inst_util.m"
          {
#line 858 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 858 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 858 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 0)));
#line 858 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 1)));
#line 858 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 0)));
#line 858 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 1)));

#line 861 "inst_util.m"
            {
#line 861 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
            }
#line 875 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 863 "inst_util.m"
              {
#line 863 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_41;
#line 863 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_42;
#line 863 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_43;
#line 863 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism2_44;
#line 863 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 869 "inst_util.m"
                MR_Word check_hlds__inst_util__V_50_50;
#line 869 "inst_util.m"
                MR_Word check_hlds__inst_util__V_60_60;
#line 869 "inst_util.m"
                MR_Word check_hlds__inst_util__V_45_45;

#line 862 "inst_util.m"
                {
#line 862 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__ArgsA_38, check_hlds__inst_util__ArgsB_40, check_hlds__inst_util__Live_1, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Args_41, &check_hlds__inst_util__Detism1_42, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                }
#line 863 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 863 "inst_util.m"
                  {
#line 864 "inst_util.m"
                    {
#line 864 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInstsTail_43, &check_hlds__inst_util__Detism2_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 863 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 863 "inst_util.m"
                      {
#line 869 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Integer) 0;
#line 869 "inst_util.m"
                        {
#line 869 "inst_util.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism1_42, &check_hlds__inst_util__V_45_45, &check_hlds__inst_util__V_60_60);
                        }
#line 869 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_50_50 == check_hlds__inst_util__V_60_60);
#line 871 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 870 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = check_hlds__inst_util__BoundInstsTail_43;
#line 871 "inst_util.m"
                        else
#line 872 "inst_util.m"
                          {
#line 872 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_51_51;

#line 872 "inst_util.m"
                            {
#line 872 "inst_util.m"
                              check_hlds__inst_util__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 872 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_37));
#line 872 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 1) = ((MR_Box) (check_hlds__inst_util__Args_41));
#line 872 "inst_util.m"
                            }
#line 872 "inst_util.m"
                            {
#line 872 "inst_util.m"
                              MR_Word base;
#line 872 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "inst_util.m"
                              *check_hlds__inst_util__HeadVar__5_5 = base;
#line 872 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 872 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_43));
#line 872 "inst_util.m"
                            }
#line 872 "inst_util.m"
                          }
#line 874 "inst_util.m"
                        {
#line 874 "inst_util.m"
                          parse_tree__prog_data__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_42, check_hlds__inst_util__Detism2_44, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 874 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 863 "inst_util.m"
                      }
#line 863 "inst_util.m"
                  }
#line 863 "inst_util.m"
              }
#line 875 "inst_util.m"
            else
#line 884 "inst_util.m"
              {
#line 884 "inst_util.m"
                MR_Word check_hlds__inst_util__V_57_57;
#line 884 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_58;
#line 876 "inst_util.m"
                MR_Word check_hlds__inst_util__V_61_61;

#line 876 "inst_util.m"
                {
#line 876 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_61_61, check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
                }
#line 876 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_61_61);
#line 880 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 877 "inst_util.m"
                  {
#line 877 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__HeadVar__3_3, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 880 "inst_util.m"
                else
#line 881 "inst_util.m"
                  {
#line 881 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 884 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 884 "inst_util.m"
                  {
#line 885 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Integer) 7;
#line 885 "inst_util.m"
                    {
#line 885 "inst_util.m"
                      parse_tree__prog_data__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_58, check_hlds__inst_util__V_57_57, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 885 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 884 "inst_util.m"
                  }
#line 884 "inst_util.m"
              }
#line 858 "inst_util.m"
          }
#line 850 "inst_util.m"
      }
#line 850 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 850 "inst_util.m"
  }
#line 845 "inst_util.m"
}

#line 810 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 810 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 810 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 810 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 810 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
#line 810 "inst_util.m"
{
#line 825 "inst_util.m"
  {
#line 825 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 817 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 817 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 823 "inst_util.m"
      {
#line 823 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 824 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
#line 823 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 823 "inst_util.m"
      }
#line 825 "inst_util.m"
    else
#line 827 "inst_util.m"
      {
#line 827 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism0_16;
#line 834 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdA_17;
#line 834 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdB_19;
#line 834 "inst_util.m"
        MR_Word check_hlds__inst_util__V_26_26;
#line 834 "inst_util.m"
        MR_Word check_hlds__inst_util__V_27_27;
#line 834 "inst_util.m"
        MR_Word check_hlds__inst_util__V_28_28;
#line 834 "inst_util.m"
        MR_Word check_hlds__inst_util__V_29_29;
#line 834 "inst_util.m"
        MR_Word check_hlds__inst_util__V_18_18;
#line 835 "inst_util.m"
        MR_Word check_hlds__inst_util__V_20_20;

#line 826 "inst_util.m"
        {
#line 826 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_10, check_hlds__inst_util__BoundInstsB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__BoundInsts_13, &check_hlds__inst_util__Detism0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
        }
#line 827 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 827 "inst_util.m"
          {
#line 834 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_10)) == (MR_mktag((MR_Integer) 1)));
#line 834 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 834 "inst_util.m"
              {
#line 834 "inst_util.m"
                check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 0)));
#line 834 "inst_util.m"
                check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 1)));
#line 834 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 834 "inst_util.m"
                  {
#line 834 "inst_util.m"
                    check_hlds__inst_util__ConsIdA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 0)));
#line 834 "inst_util.m"
                    check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 1)));
#line 835 "inst_util.m"
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_11)) == (MR_mktag((MR_Integer) 1)));
#line 835 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 835 "inst_util.m"
                      {
#line 835 "inst_util.m"
                        check_hlds__inst_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 0)));
#line 835 "inst_util.m"
                        check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 1)));
#line 835 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 834 "inst_util.m"
                          {
#line 835 "inst_util.m"
                            check_hlds__inst_util__ConsIdB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 0)));
#line 835 "inst_util.m"
                            check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 1)));
#line 836 "inst_util.m"
                            {
#line 836 "inst_util.m"
                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_17, check_hlds__inst_util__ConsIdB_19);
                            }
#line 834 "inst_util.m"
                          }
#line 835 "inst_util.m"
                      }
#line 834 "inst_util.m"
                  }
#line 834 "inst_util.m"
              }
#line 839 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 838 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_16;
#line 839 "inst_util.m"
            else
#line 840 "inst_util.m"
              {
#line 840 "inst_util.m"
                MR_Word check_hlds__inst_util__MaxSoln_22;
#line 840 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;

#line 840 "inst_util.m"
                {
#line 840 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_16, &check_hlds__inst_util__V_21_21, &check_hlds__inst_util__MaxSoln_22);
                }
#line 841 "inst_util.m"
                {
#line 841 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_14, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_22);
                }
#line 840 "inst_util.m"
              }
#line 839 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 827 "inst_util.m"
          }
#line 827 "inst_util.m"
      }
#line 825 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 825 "inst_util.m"
  }
#line 810 "inst_util.m"
}

#line 683 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 683 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 683 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40)
#line 683 "inst_util.m"
{
#line 695 "inst_util.m"
  {
#line 695 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 695 "inst_util.m"
    if ((check_hlds__inst_util__InstA_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "inst_util.m"
      {
#line 696 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_22;
#line 696 "inst_util.m"
        MR_Word check_hlds__inst_util__V_61_61;
#line 696 "inst_util.m"
        MR_Word check_hlds__inst_util__V_62_62;
#line 696 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63;
#line 696 "inst_util.m"
        MR_Word check_hlds__inst_util__V_64_64;
#line 696 "inst_util.m"
        MR_Word check_hlds__inst_util__V_65_65;

#line 703 "inst_util.m"
        if ((check_hlds__inst_util__Live_12 == (MR_Integer) 1))
#line 704 "inst_util.m"
          {
#line 705 "inst_util.m"
            check_hlds__inst_util__ArgInsts_22 = check_hlds__inst_util__ArgInstsB_15;
#line 705 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 704 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 704 "inst_util.m"
          }
#line 703 "inst_util.m"
        else
#line 698 "inst_util.m"
          {
#line 699 "inst_util.m"
            {
#line 699 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39);
            }
#line 698 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 698 "inst_util.m"
              {
#line 701 "inst_util.m"
                {
#line 701 "inst_util.m"
                  check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, &check_hlds__inst_util__ArgInsts_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                }
#line 701 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 698 "inst_util.m"
              }
#line 698 "inst_util.m"
          }
#line 696 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 696 "inst_util.m"
          {
#line 708 "inst_util.m"
            check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 708 "inst_util.m"
            check_hlds__inst_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "inst_util.m"
            check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "inst_util.m"
            *check_hlds__inst_util__Detism_20 = (MR_Integer) 0;
#line 709 "inst_util.m"
            {
#line 709 "inst_util.m"
              check_hlds__inst_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 709 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_22));
#line 709 "inst_util.m"
            }
#line 709 "inst_util.m"
            {
#line 709 "inst_util.m"
              check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 0) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 709 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 1) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 709 "inst_util.m"
            }
#line 708 "inst_util.m"
            {
#line 708 "inst_util.m"
              MR_Word base;
#line 708 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 708 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = base;
#line 708 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 708 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_61_61));
#line 708 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_62_62));
#line 708 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 708 "inst_util.m"
            }
#line 708 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 696 "inst_util.m"
          }
#line 696 "inst_util.m"
      }
#line 695 "inst_util.m"
    else
#line 695 "inst_util.m"
      if ((check_hlds__inst_util__InstA_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 692 "inst_util.m"
        {
#line 693 "inst_util.m"
          *check_hlds__inst_util__Inst_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 694 "inst_util.m"
          *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 694 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 692 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 692 "inst_util.m"
        }
#line 695 "inst_util.m"
      else
#line 695 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) == (MR_mktag((MR_Integer) 2))))
#line 712 "inst_util.m"
          {
#line 712 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 0)));
#line 712 "inst_util.m"
            MR_Word check_hlds__inst_util__V_56_56;
#line 712 "inst_util.m"
            MR_Word check_hlds__inst_util__V_57_57;
#line 712 "inst_util.m"
            MR_Word check_hlds__inst_util__V_58_58;
#line 712 "inst_util.m"
            MR_Word check_hlds__inst_util__V_59_59;
#line 712 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_66;
#line 712 "inst_util.m"
            MR_Word check_hlds__inst_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));

#line 715 "inst_util.m"
            {
#line 715 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__Type_18);
            }
#line 715 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 712 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 712 "inst_util.m"
              {
#line 720 "inst_util.m"
                if ((check_hlds__inst_util__Live_12 == (MR_Integer) 1))
#line 722 "inst_util.m"
                  {
#line 722 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 720 "inst_util.m"
                else
#line 718 "inst_util.m"
                  {
#line 718 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 712 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 712 "inst_util.m"
                  {
#line 726 "inst_util.m"
                    check_hlds__inst_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 727 "inst_util.m"
                    check_hlds__inst_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 727 "inst_util.m"
                    {
#line 727 "inst_util.m"
                      check_hlds__inst_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 727 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 727 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_66));
#line 727 "inst_util.m"
                    }
#line 727 "inst_util.m"
                    {
#line 727 "inst_util.m"
                      check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 0) = ((MR_Box) (check_hlds__inst_util__V_58_58));
#line 727 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 1) = ((MR_Box) (check_hlds__inst_util__V_59_59));
#line 727 "inst_util.m"
                    }
#line 726 "inst_util.m"
                    {
#line 726 "inst_util.m"
                      MR_Word base;
#line 726 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 726 "inst_util.m"
                      *check_hlds__inst_util__Inst_19 = base;
#line 726 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 726 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_23));
#line 726 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_56_56));
#line 726 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 726 "inst_util.m"
                    }
#line 726 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 712 "inst_util.m"
                  }
#line 712 "inst_util.m"
              }
#line 712 "inst_util.m"
          }
#line 695 "inst_util.m"
        else
#line 695 "inst_util.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 729 "inst_util.m"
            {
#line 729 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 729 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 3)));
#line 729 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_28;
#line 729 "inst_util.m"
              MR_Word check_hlds__inst_util__V_53_53;
#line 729 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResultsA_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 734 "inst_util.m"
              if ((check_hlds__inst_util__Live_12 == (MR_Integer) 1))
#line 735 "inst_util.m"
                {
#line 735 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInstsB_29;
#line 735 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_48_48;

#line 736 "inst_util.m"
                  {
#line 736 "inst_util.m"
                    check_hlds__inst_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 736 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 736 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (check_hlds__inst_util__ArgInstsB_15));
#line 736 "inst_util.m"
                  }
#line 736 "inst_util.m"
                  {
#line 736 "inst_util.m"
                    check_hlds__inst_util__BoundInstsB_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 0) = ((MR_Box) (check_hlds__inst_util__V_48_48));
#line 736 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "inst_util.m"
                  }
#line 817 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 823 "inst_util.m"
                    {
#line 823 "inst_util.m"
                      check_hlds__inst_util__BoundInsts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "inst_util.m"
                      *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 824 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 823 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 823 "inst_util.m"
                    }
#line 825 "inst_util.m"
                  else
#line 827 "inst_util.m"
                    {
#line 827 "inst_util.m"
                      MR_Word check_hlds__inst_util__Detism0_78;
#line 834 "inst_util.m"
                      MR_Word check_hlds__inst_util__ConsIdA_79;
#line 834 "inst_util.m"
                      MR_Word check_hlds__inst_util__ConsIdB_81;
#line 834 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_86_86;
#line 834 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_87_87;
#line 834 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_88_88;
#line 834 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_89_89;
#line 834 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_80_80;
#line 835 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_82_82;

#line 826 "inst_util.m"
                      {
#line 826 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0((MR_Integer) 1, check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__BoundInstsB_29, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, &check_hlds__inst_util__Detism0_78, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                      }
#line 827 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 827 "inst_util.m"
                        {
#line 834 "inst_util.m"
                          check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_27)) == (MR_mktag((MR_Integer) 1)));
#line 834 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 834 "inst_util.m"
                            {
#line 834 "inst_util.m"
                              check_hlds__inst_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 0)));
#line 834 "inst_util.m"
                              check_hlds__inst_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 1)));
#line 834 "inst_util.m"
                              check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 834 "inst_util.m"
                                {
#line 834 "inst_util.m"
                                  check_hlds__inst_util__ConsIdA_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 0)));
#line 834 "inst_util.m"
                                  check_hlds__inst_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 1)));
#line 835 "inst_util.m"
                                  check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_29)) == (MR_mktag((MR_Integer) 1)));
#line 835 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 835 "inst_util.m"
                                    {
#line 835 "inst_util.m"
                                      check_hlds__inst_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 0)));
#line 835 "inst_util.m"
                                      check_hlds__inst_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 1)));
#line 835 "inst_util.m"
                                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "inst_util.m"
                                      if (check_hlds__inst_util__succeeded)
#line 834 "inst_util.m"
                                        {
#line 835 "inst_util.m"
                                          check_hlds__inst_util__ConsIdB_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 0)));
#line 835 "inst_util.m"
                                          check_hlds__inst_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 1)));
#line 836 "inst_util.m"
                                          {
#line 836 "inst_util.m"
                                            check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_79, check_hlds__inst_util__ConsIdB_81);
                                          }
#line 834 "inst_util.m"
                                        }
#line 835 "inst_util.m"
                                    }
#line 834 "inst_util.m"
                                }
#line 834 "inst_util.m"
                            }
#line 839 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 838 "inst_util.m"
                            *check_hlds__inst_util__Detism_20 = check_hlds__inst_util__Detism0_78;
#line 839 "inst_util.m"
                          else
#line 840 "inst_util.m"
                            {
#line 840 "inst_util.m"
                              MR_Word check_hlds__inst_util__MaxSoln_84;
#line 840 "inst_util.m"
                              MR_Word check_hlds__inst_util__V_83_83;

#line 840 "inst_util.m"
                              {
#line 840 "inst_util.m"
                                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_78, &check_hlds__inst_util__V_83_83, &check_hlds__inst_util__MaxSoln_84);
                              }
#line 841 "inst_util.m"
                              {
#line 841 "inst_util.m"
                                parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_20, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_84);
                              }
#line 840 "inst_util.m"
                            }
#line 839 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 827 "inst_util.m"
                        }
#line 827 "inst_util.m"
                    }
#line 735 "inst_util.m"
                }
#line 734 "inst_util.m"
              else
#line 732 "inst_util.m"
                {
#line 732 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                }
#line 729 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 729 "inst_util.m"
                {
#line 741 "inst_util.m"
                  check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 741 "inst_util.m"
                  {
#line 741 "inst_util.m"
                    MR_Word base;
#line 741 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 741 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 741 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 741 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_25));
#line 741 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 741 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_28));
#line 741 "inst_util.m"
                  }
#line 741 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 729 "inst_util.m"
                }
#line 729 "inst_util.m"
            }
#line 695 "inst_util.m"
          else
#line 695 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 757 "inst_util.m"
              {
#line 757 "inst_util.m"
                MR_Word check_hlds__inst_util__InstVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 757 "inst_util.m"
                MR_Word check_hlds__inst_util__SubInstA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));
#line 757 "inst_util.m"
                MR_Word check_hlds__inst_util__Inst0_33;

#line 758 "inst_util.m"
                {
#line 758 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__SubInstA_32, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, &check_hlds__inst_util__Inst0_33, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                }
#line 757 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 757 "inst_util.m"
                  {
#line 760 "inst_util.m"
                    {
#line 760 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_33, check_hlds__inst_util__SubInstA_32, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                    }
#line 763 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 762 "inst_util.m"
                      {
#line 762 "inst_util.m"
                        MR_Word base;
#line 762 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 762 "inst_util.m"
                        *check_hlds__inst_util__Inst_19 = base;
#line 762 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 762 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_31));
#line 762 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_33));
#line 762 "inst_util.m"
                      }
#line 763 "inst_util.m"
                    else
#line 776 "inst_util.m"
                      *check_hlds__inst_util__Inst_19 = check_hlds__inst_util__Inst0_33;
#line 763 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 757 "inst_util.m"
                  }
#line 757 "inst_util.m"
              }
#line 695 "inst_util.m"
            else
#line 695 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 743 "inst_util.m"
                {
#line 743 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_44_44;
#line 743 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_45_45;
#line 743 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_46_46;
#line 743 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_47_47;
#line 743 "inst_util.m"
                  MR_Word check_hlds__inst_util__ArgInsts_67;
#line 743 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 743 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 748 "inst_util.m"
                  if ((check_hlds__inst_util__Live_12 == (MR_Integer) 1))
#line 750 "inst_util.m"
                    {
#line 750 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                    }
#line 748 "inst_util.m"
                  else
#line 746 "inst_util.m"
                    {
#line 746 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                    }
#line 743 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 743 "inst_util.m"
                    {
#line 754 "inst_util.m"
                      check_hlds__inst_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "inst_util.m"
                      check_hlds__inst_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "inst_util.m"
                      {
#line 755 "inst_util.m"
                        check_hlds__inst_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 755 "inst_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 755 "inst_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_67));
#line 755 "inst_util.m"
                      }
#line 755 "inst_util.m"
                      {
#line 755 "inst_util.m"
                        check_hlds__inst_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 0) = ((MR_Box) (check_hlds__inst_util__V_46_46));
#line 755 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 1) = ((MR_Box) (check_hlds__inst_util__V_47_47));
#line 755 "inst_util.m"
                      }
#line 754 "inst_util.m"
                      {
#line 754 "inst_util.m"
                        MR_Word base;
#line 754 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 754 "inst_util.m"
                        *check_hlds__inst_util__Inst_19 = base;
#line 754 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 754 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_68));
#line 754 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_44_44));
#line 754 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_45_45));
#line 754 "inst_util.m"
                      }
#line 754 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 743 "inst_util.m"
                    }
#line 743 "inst_util.m"
                }
#line 695 "inst_util.m"
              else
#line 695 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 695 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 695 "inst_util.m"
  }
#line 683 "inst_util.m"
}

#line 659 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 659 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 659 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 659 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 659 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 659 "inst_util.m"
{
#line 663 "inst_util.m"
  {
#line 663 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 663 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "inst_util.m"
      {
#line 663 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 663 "inst_util.m"
          {
#line 663 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 663 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 663 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 663 "inst_util.m"
          }
#line 663 "inst_util.m"
      }
#line 663 "inst_util.m"
    else
#line 665 "inst_util.m"
      {
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_16;
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_17;
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 665 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 664 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 664 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 664 "inst_util.m"
          {
#line 664 "inst_util.m"
            check_hlds__inst_util__InstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 664 "inst_util.m"
            check_hlds__inst_util__InstsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "inst_util.m"
            {
#line 666 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_3, check_hlds__inst_util__InstA_14, check_hlds__inst_util__InstB_16, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
#line 665 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 665 "inst_util.m"
              {
#line 668 "inst_util.m"
                {
#line 668 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__InstsA_15, check_hlds__inst_util__InstsB_17, check_hlds__inst_util__Live_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                }
#line 665 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 665 "inst_util.m"
                  {
#line 665 "inst_util.m"
                    {
#line 665 "inst_util.m"
                      MR_Word base;
#line 665 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__5_5 = base;
#line 665 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 665 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 665 "inst_util.m"
                    }
#line 670 "inst_util.m"
                    {
#line 670 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 670 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 665 "inst_util.m"
                  }
#line 665 "inst_util.m"
              }
#line 664 "inst_util.m"
          }
#line 665 "inst_util.m"
      }
#line 663 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 663 "inst_util.m"
  }
#line 659 "inst_util.m"
}

#line 245 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 245 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 245 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 245 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61,
#line 245 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62)
#line 245 "inst_util.m"
{
#line 255 "inst_util.m"
  {
#line 255 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 255 "inst_util.m"
    if ((check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "inst_util.m"
      if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 313 "inst_util.m"
        {
#line 314 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstB_11;
#line 315 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 315 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 313 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 313 "inst_util.m"
        }
#line 312 "inst_util.m"
      else
#line 264 "inst_util.m"
        if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 261 "inst_util.m"
          {
#line 262 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 263 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 263 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 261 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 261 "inst_util.m"
          }
#line 264 "inst_util.m"
        else
#line 264 "inst_util.m"
          if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 2))))
#line 288 "inst_util.m"
            {
#line 288 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 288 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqB_113 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 288 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_114;

#line 289 "inst_util.m"
              {
#line 289 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_113, &check_hlds__inst_util__Uniq_114);
              }
#line 288 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 288 "inst_util.m"
                {
#line 291 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 291 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 290 "inst_util.m"
                  {
#line 290 "inst_util.m"
                    MR_Word base;
#line 290 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 290 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_114));
#line 290 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_22));
#line 290 "inst_util.m"
                  }
#line 290 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 288 "inst_util.m"
                }
#line 288 "inst_util.m"
            }
#line 264 "inst_util.m"
          else
#line 264 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 268 "inst_util.m"
              {
#line 268 "inst_util.m"
                MR_Word check_hlds__inst_util__UniqB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 268 "inst_util.m"
                MR_Word check_hlds__inst_util__InstResultsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 268 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 268 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_19;
#line 268 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInsts_20;

#line 269 "inst_util.m"
                {
#line 269 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_16, &check_hlds__inst_util__Uniq_19);
                }
#line 268 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 268 "inst_util.m"
                  {
#line 271 "inst_util.m"
                    {
#line 271 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_util__BoundInstsB_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61);
                    }
#line 268 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 268 "inst_util.m"
                      {
#line 274 "inst_util.m"
                        if ((check_hlds__inst_util__UniqB_16 == (MR_Integer) 2))
#line 274 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 274 "inst_util.m"
                        else
#line 274 "inst_util.m"
                          if ((check_hlds__inst_util__UniqB_16 == (MR_Integer) 1))
#line 274 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 274 "inst_util.m"
                          else
#line 274 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_FALSE;
#line 277 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 275 "inst_util.m"
                          {
#line 275 "inst_util.m"
                            check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsB_18, &check_hlds__inst_util__BoundInsts_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                          }
#line 277 "inst_util.m"
                        else
#line 278 "inst_util.m"
                          {
#line 278 "inst_util.m"
                            check_hlds__inst_util__BoundInsts_20 = check_hlds__inst_util__BoundInstsB_18;
#line 278 "inst_util.m"
                            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 278 "inst_util.m"
                          }
#line 281 "inst_util.m"
                        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 280 "inst_util.m"
                        {
#line 280 "inst_util.m"
                          MR_Word base;
#line 280 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 280 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = base;
#line 280 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 280 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_19));
#line 280 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_17));
#line 280 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_20));
#line 280 "inst_util.m"
                        }
#line 280 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 268 "inst_util.m"
                      }
#line 268 "inst_util.m"
                  }
#line 268 "inst_util.m"
              }
#line 264 "inst_util.m"
            else
#line 264 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 293 "inst_util.m"
                {
#line 293 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstVarsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 293 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInstB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 294 "inst_util.m"
                  {
#line 294 "inst_util.m"
                    return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_23, check_hlds__inst_util__SubInstB_24, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                  }
#line 293 "inst_util.m"
                }
#line 264 "inst_util.m"
              else
#line 264 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 283 "inst_util.m"
                  {
#line 283 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 283 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 283 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_112;

#line 284 "inst_util.m"
                    {
#line 284 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_111, &check_hlds__inst_util__Uniq_112);
                    }
#line 283 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 283 "inst_util.m"
                      {
#line 286 "inst_util.m"
                        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 286 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 285 "inst_util.m"
                        {
#line 285 "inst_util.m"
                          MR_Word base;
#line 285 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 285 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = base;
#line 285 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_112));
#line 285 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoB_21));
#line 285 "inst_util.m"
                        }
#line 285 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 283 "inst_util.m"
                      }
#line 283 "inst_util.m"
                  }
#line 264 "inst_util.m"
                else
#line 264 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 255 "inst_util.m"
    else
#line 255 "inst_util.m"
      if ((check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 252 "inst_util.m"
        {
#line 253 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 254 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 254 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 252 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 252 "inst_util.m"
        }
#line 255 "inst_util.m"
      else
#line 255 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) == (MR_mktag((MR_Integer) 2))))
#line 507 "inst_util.m"
          {
#line 507 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqA_296 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 0)));
#line 507 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfoA_301 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 512 "inst_util.m"
            if ((check_hlds__inst_util__HOInstInfoA_301 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "inst_util.m"
              {
#line 510 "inst_util.m"
                return check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_296, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
              }
#line 512 "inst_util.m"
            else
#line 519 "inst_util.m"
              if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "inst_util.m"
                {
#line 520 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_222;

#line 524 "inst_util.m"
                  if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 526 "inst_util.m"
                    {
#line 526 "inst_util.m"
                      check_hlds__inst_util__Uniq_222 = check_hlds__inst_util__UniqA_296;
#line 526 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 526 "inst_util.m"
                    }
#line 524 "inst_util.m"
                  else
#line 522 "inst_util.m"
                    {
#line 523 "inst_util.m"
                      {
#line 523 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_296, &check_hlds__inst_util__Uniq_222);
                      }
#line 522 "inst_util.m"
                    }
#line 520 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 520 "inst_util.m"
                    {
#line 529 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 529 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 528 "inst_util.m"
                      {
#line 528 "inst_util.m"
                        MR_Word base;
#line 528 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 528 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_222));
#line 528 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_301));
#line 528 "inst_util.m"
                      }
#line 528 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 520 "inst_util.m"
                    }
#line 520 "inst_util.m"
                }
#line 519 "inst_util.m"
              else
#line 519 "inst_util.m"
                if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 516 "inst_util.m"
                  {
#line 517 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 518 "inst_util.m"
                    *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 518 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 516 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 516 "inst_util.m"
                  }
#line 519 "inst_util.m"
                else
#line 519 "inst_util.m"
                  if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 2))))
#line 549 "inst_util.m"
                    {
#line 549 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_65_65;
#line 549 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_235;
#line 549 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_236;
#line 549 "inst_util.m"
                      MR_Word check_hlds__inst_util___HOInstInfoB_234;

#line 555 "inst_util.m"
                      if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 556 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 555 "inst_util.m"
                      else
#line 554 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 549 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 549 "inst_util.m"
                        {
#line 549 "inst_util.m"
                          check_hlds__inst_util__UniqB_235 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 549 "inst_util.m"
                          check_hlds__inst_util___HOInstInfoB_234 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 558 "inst_util.m"
                          check_hlds__inst_util__V_65_65 = (MR_Integer) 1;
#line 558 "inst_util.m"
                          {
#line 558 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_65_65, check_hlds__inst_util__UniqA_296, check_hlds__inst_util__UniqB_235, &check_hlds__inst_util__Uniq_236);
                          }
#line 549 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 549 "inst_util.m"
                            {
#line 560 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 560 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 559 "inst_util.m"
                              {
#line 559 "inst_util.m"
                                MR_Word base;
#line 559 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 559 "inst_util.m"
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_236));
#line 559 "inst_util.m"
                                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_301));
#line 559 "inst_util.m"
                              }
#line 559 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 549 "inst_util.m"
                            }
#line 549 "inst_util.m"
                        }
#line 549 "inst_util.m"
                    }
#line 519 "inst_util.m"
                  else
#line 519 "inst_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 531 "inst_util.m"
                      {
#line 531 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_69_69;
#line 531 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_70_70;
#line 531 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 531 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 531 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_226;
#line 531 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_227;
#line 531 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism1_229;
#line 531 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 533 "inst_util.m"
                        {
#line 533 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_296, check_hlds__inst_util__UniqB_224, &check_hlds__inst_util__Uniq_226);
                        }
#line 531 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 531 "inst_util.m"
                          {
#line 534 "inst_util.m"
                            {
#line 534 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_225, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_296, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_227, &check_hlds__inst_util__Detism1_229, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                            }
#line 531 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 531 "inst_util.m"
                              {
#line 538 "inst_util.m"
                                check_hlds__inst_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 539 "inst_util.m"
                                check_hlds__inst_util__V_70_70 = (MR_Integer) 1;
#line 538 "inst_util.m"
                                {
#line 538 "inst_util.m"
                                  MR_Word base;
#line 538 "inst_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 538 "inst_util.m"
                                  *check_hlds__inst_util__Inst_13 = base;
#line 538 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 538 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_226));
#line 538 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_69_69));
#line 538 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_227));
#line 538 "inst_util.m"
                                }
#line 539 "inst_util.m"
                                {
#line 539 "inst_util.m"
                                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_229, check_hlds__inst_util__V_70_70, check_hlds__inst_util__Detism_14);
                                }
#line 539 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 531 "inst_util.m"
                              }
#line 531 "inst_util.m"
                          }
#line 531 "inst_util.m"
                      }
#line 519 "inst_util.m"
                    else
#line 519 "inst_util.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 562 "inst_util.m"
                        {
#line 562 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 562 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 563 "inst_util.m"
                          {
#line 563 "inst_util.m"
                            return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_238, check_hlds__inst_util__SubInstB_239, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                          }
#line 562 "inst_util.m"
                        }
#line 519 "inst_util.m"
                      else
#line 519 "inst_util.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 541 "inst_util.m"
                          {
#line 541 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_66_66;
#line 541 "inst_util.m"
                            MR_Word check_hlds__inst_util__UniqB_231;
#line 541 "inst_util.m"
                            MR_Word check_hlds__inst_util__Uniq_232;
#line 541 "inst_util.m"
                            MR_Word check_hlds__inst_util___HOInstInfoB_230;

#line 544 "inst_util.m"
                            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 541 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 541 "inst_util.m"
                              {
#line 541 "inst_util.m"
                                check_hlds__inst_util__UniqB_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 541 "inst_util.m"
                                check_hlds__inst_util___HOInstInfoB_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 545 "inst_util.m"
                                check_hlds__inst_util__V_66_66 = (MR_Integer) 1;
#line 545 "inst_util.m"
                                {
#line 545 "inst_util.m"
                                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_66_66, check_hlds__inst_util__UniqA_296, check_hlds__inst_util__UniqB_231, &check_hlds__inst_util__Uniq_232);
                                }
#line 541 "inst_util.m"
                                if (check_hlds__inst_util__succeeded)
#line 541 "inst_util.m"
                                  {
#line 547 "inst_util.m"
                                    *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 547 "inst_util.m"
                                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 546 "inst_util.m"
                                    {
#line 546 "inst_util.m"
                                      MR_Word base;
#line 546 "inst_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 546 "inst_util.m"
                                      *check_hlds__inst_util__Inst_13 = base;
#line 546 "inst_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 546 "inst_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_232));
#line 546 "inst_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_301));
#line 546 "inst_util.m"
                                    }
#line 546 "inst_util.m"
                                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 541 "inst_util.m"
                                  }
#line 541 "inst_util.m"
                              }
#line 541 "inst_util.m"
                          }
#line 519 "inst_util.m"
                        else
#line 519 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_FALSE;
#line 507 "inst_util.m"
          }
#line 255 "inst_util.m"
        else
#line 255 "inst_util.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 318 "inst_util.m"
            {
#line 318 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 318 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResultsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 318 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 3)));

#line 324 "inst_util.m"
              if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "inst_util.m"
                {
#line 325 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_115;
#line 325 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_116;

#line 333 "inst_util.m"
                  if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 334 "inst_util.m"
                    {
#line 336 "inst_util.m"
                      {
#line 336 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, check_hlds__inst_util__UniqA_30, (MR_Integer) 1, &check_hlds__inst_util__Uniq_115);
                      }
#line 334 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 334 "inst_util.m"
                        {
#line 337 "inst_util.m"
                          check_hlds__inst_util__BoundInsts_116 = check_hlds__inst_util__BoundInstsA_32;
#line 337 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 337 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 334 "inst_util.m"
                        }
#line 334 "inst_util.m"
                    }
#line 333 "inst_util.m"
                  else
#line 327 "inst_util.m"
                    {
#line 328 "inst_util.m"
                      {
#line 328 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, &check_hlds__inst_util__Uniq_115);
                      }
#line 327 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 327 "inst_util.m"
                        {
#line 330 "inst_util.m"
                          {
#line 330 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61);
                          }
#line 327 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 327 "inst_util.m"
                            {
#line 331 "inst_util.m"
                              {
#line 331 "inst_util.m"
                                check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsA_32, &check_hlds__inst_util__BoundInsts_116, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                              }
#line 331 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 327 "inst_util.m"
                            }
#line 327 "inst_util.m"
                        }
#line 327 "inst_util.m"
                    }
#line 325 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 325 "inst_util.m"
                    {
#line 340 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 339 "inst_util.m"
                      {
#line 339 "inst_util.m"
                        MR_Word base;
#line 339 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 339 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 339 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 339 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_115));
#line 339 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 339 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_116));
#line 339 "inst_util.m"
                      }
#line 339 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 325 "inst_util.m"
                    }
#line 325 "inst_util.m"
                }
#line 324 "inst_util.m"
              else
#line 324 "inst_util.m"
                if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 321 "inst_util.m"
                  {
#line 322 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 323 "inst_util.m"
                    *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 323 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 321 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 321 "inst_util.m"
                  }
#line 324 "inst_util.m"
                else
#line 324 "inst_util.m"
                  if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 2))))
#line 377 "inst_util.m"
                    {
#line 377 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_85_85;
#line 377 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_87_87;
#line 377 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_88_88;
#line 377 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_129 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 377 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_130;
#line 377 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInsts_131;
#line 377 "inst_util.m"
                      MR_Word check_hlds__inst_util__Detism1_132;
#line 377 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 378 "inst_util.m"
                      {
#line 378 "inst_util.m"
                        check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                      }
#line 379 "inst_util.m"
                      {
#line 379 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_129, &check_hlds__inst_util__Uniq_130);
                      }
#line 377 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 377 "inst_util.m"
                        {
#line 381 "inst_util.m"
                          check_hlds__inst_util__V_85_85 = (MR_Integer) 0;
#line 381 "inst_util.m"
                          {
#line 381 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__V_85_85, check_hlds__inst_util__UniqB_129, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_131, &check_hlds__inst_util__Detism1_132, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                          }
#line 377 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 377 "inst_util.m"
                            {
#line 384 "inst_util.m"
                              check_hlds__inst_util__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 385 "inst_util.m"
                              check_hlds__inst_util__V_88_88 = (MR_Integer) 1;
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
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_130));
#line 384 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_87_87));
#line 384 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_131));
#line 384 "inst_util.m"
                              }
#line 385 "inst_util.m"
                              {
#line 385 "inst_util.m"
                                parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_132, check_hlds__inst_util__V_88_88, check_hlds__inst_util__Detism_14);
                              }
#line 385 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 377 "inst_util.m"
                            }
#line 377 "inst_util.m"
                        }
#line 377 "inst_util.m"
                    }
#line 324 "inst_util.m"
                  else
#line 324 "inst_util.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 342 "inst_util.m"
                      {
#line 342 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_94_94;
#line 342 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 342 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 342 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_119;
#line 342 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_120;
#line 342 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 343 "inst_util.m"
                        {
#line 343 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__BoundInstsB_118, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_120, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                        }
#line 342 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 342 "inst_util.m"
                          {
#line 345 "inst_util.m"
                            {
#line 345 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, *check_hlds__inst_util__Detism_14, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_117, &check_hlds__inst_util__Uniq_119);
                            }
#line 342 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 342 "inst_util.m"
                              {
#line 347 "inst_util.m"
                                check_hlds__inst_util__V_94_94 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "inst_util.m"
                                {
#line 347 "inst_util.m"
                                  MR_Word base;
#line 347 "inst_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 347 "inst_util.m"
                                  *check_hlds__inst_util__Inst_13 = base;
#line 347 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 347 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_119));
#line 347 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_94_94));
#line 347 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_120));
#line 347 "inst_util.m"
                                }
#line 347 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 342 "inst_util.m"
                              }
#line 342 "inst_util.m"
                          }
#line 342 "inst_util.m"
                      }
#line 324 "inst_util.m"
                    else
#line 324 "inst_util.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 387 "inst_util.m"
                        {
#line 387 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 387 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 388 "inst_util.m"
                          {
#line 388 "inst_util.m"
                            return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_133, check_hlds__inst_util__SubInstB_134, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                          }
#line 387 "inst_util.m"
                        }
#line 324 "inst_util.m"
                      else
#line 324 "inst_util.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 349 "inst_util.m"
                          {
#line 349 "inst_util.m"
                            MR_Word check_hlds__inst_util__Detism1_35;
#line 349 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_92_92;
#line 349 "inst_util.m"
                            MR_Word check_hlds__inst_util__UniqB_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 349 "inst_util.m"
                            MR_Word check_hlds__inst_util__Uniq_127;
#line 349 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 350 "inst_util.m"
                            {
#line 350 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_126, &check_hlds__inst_util__Uniq_127);
                            }
#line 349 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 349 "inst_util.m"
                              {
#line 355 "inst_util.m"
                                if ((check_hlds__inst_util__InstResultsA_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "inst_util.m"
                                  {
#line 370 "inst_util.m"
                                    MR_Word check_hlds__inst_util__BoundInsts_124;

#line 371 "inst_util.m"
                                    {
#line 371 "inst_util.m"
                                      check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_126, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_124, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                                    }
#line 370 "inst_util.m"
                                    if (check_hlds__inst_util__succeeded)
#line 370 "inst_util.m"
                                      {
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
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_127));
#line 373 "inst_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 373 "inst_util.m"
                                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_124));
#line 373 "inst_util.m"
                                        }
#line 373 "inst_util.m"
                                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 370 "inst_util.m"
                                      }
#line 370 "inst_util.m"
                                  }
#line 355 "inst_util.m"
                                else
#line 355 "inst_util.m"
                                  if ((check_hlds__inst_util__InstResultsA_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 352 "inst_util.m"
                                    {
#line 353 "inst_util.m"
                                      *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 354 "inst_util.m"
                                      check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 354 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 352 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 352 "inst_util.m"
                                    }
#line 355 "inst_util.m"
                                  else
#line 356 "inst_util.m"
                                    {
#line 356 "inst_util.m"
                                      MR_Word check_hlds__inst_util__GroundnessResultA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 0)));
#line 356 "inst_util.m"
                                      MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 1)));
#line 356 "inst_util.m"
                                      MR_Word check_hlds__inst_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 2)));
#line 356 "inst_util.m"
                                      MR_Word check_hlds__inst_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 3)));

#line 361 "inst_util.m"
                                      if ((check_hlds__inst_util__GroundnessResultA_36 == (MR_Integer) 1))
#line 358 "inst_util.m"
                                        {
#line 359 "inst_util.m"
                                          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 360 "inst_util.m"
                                          check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 360 "inst_util.m"
                                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 358 "inst_util.m"
                                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 358 "inst_util.m"
                                        }
#line 361 "inst_util.m"
                                      else
#line 364 "inst_util.m"
                                        {
#line 364 "inst_util.m"
                                          MR_Word check_hlds__inst_util__BoundInsts_121;

#line 365 "inst_util.m"
                                          {
#line 365 "inst_util.m"
                                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_126, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_121, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                                          }
#line 364 "inst_util.m"
                                          if (check_hlds__inst_util__succeeded)
#line 364 "inst_util.m"
                                            {
#line 367 "inst_util.m"
                                              {
#line 367 "inst_util.m"
                                                MR_Word base;
#line 367 "inst_util.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 367 "inst_util.m"
                                                *check_hlds__inst_util__Inst_13 = base;
#line 367 "inst_util.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 367 "inst_util.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_127));
#line 367 "inst_util.m"
                                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 367 "inst_util.m"
                                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_121));
#line 367 "inst_util.m"
                                              }
#line 367 "inst_util.m"
                                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 364 "inst_util.m"
                                            }
#line 364 "inst_util.m"
                                        }
#line 356 "inst_util.m"
                                    }
#line 349 "inst_util.m"
                                if (check_hlds__inst_util__succeeded)
#line 349 "inst_util.m"
                                  {
#line 375 "inst_util.m"
                                    check_hlds__inst_util__V_92_92 = (MR_Integer) 1;
#line 375 "inst_util.m"
                                    {
#line 375 "inst_util.m"
                                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_35, check_hlds__inst_util__V_92_92, check_hlds__inst_util__Detism_14);
                                    }
#line 375 "inst_util.m"
                                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 349 "inst_util.m"
                                  }
#line 349 "inst_util.m"
                              }
#line 349 "inst_util.m"
                          }
#line 324 "inst_util.m"
                        else
#line 324 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_FALSE;
#line 318 "inst_util.m"
            }
#line 255 "inst_util.m"
          else
#line 255 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 584 "inst_util.m"
              {
#line 584 "inst_util.m"
                MR_Word check_hlds__inst_util__InstVarsA_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 584 "inst_util.m"
                MR_Word check_hlds__inst_util__SubInstA_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));

#line 585 "inst_util.m"
                {
#line 585 "inst_util.m"
                  return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsA_56, check_hlds__inst_util__SubInstA_57, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                }
#line 584 "inst_util.m"
              }
#line 255 "inst_util.m"
            else
#line 255 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 427 "inst_util.m"
                {
#line 427 "inst_util.m"
                  MR_Word check_hlds__inst_util__HOInstInfoA_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 427 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 432 "inst_util.m"
                  if ((check_hlds__inst_util__HOInstInfoA_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "inst_util.m"
                    {
#line 430 "inst_util.m"
                      return check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_217, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                    }
#line 432 "inst_util.m"
                  else
#line 439 "inst_util.m"
                    if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 440 "inst_util.m"
                      {
#line 440 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_153;

#line 444 "inst_util.m"
                        if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 446 "inst_util.m"
                          {
#line 446 "inst_util.m"
                            check_hlds__inst_util__Uniq_153 = check_hlds__inst_util__UniqA_217;
#line 446 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 446 "inst_util.m"
                          }
#line 444 "inst_util.m"
                        else
#line 442 "inst_util.m"
                          {
#line 443 "inst_util.m"
                            {
#line 443 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_217, &check_hlds__inst_util__Uniq_153);
                            }
#line 442 "inst_util.m"
                          }
#line 440 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 440 "inst_util.m"
                          {
#line 449 "inst_util.m"
                            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 449 "inst_util.m"
                            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 448 "inst_util.m"
                            {
#line 448 "inst_util.m"
                              MR_Word base;
#line 448 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 448 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 448 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 448 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_153));
#line 448 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_46));
#line 448 "inst_util.m"
                            }
#line 448 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 440 "inst_util.m"
                          }
#line 440 "inst_util.m"
                      }
#line 439 "inst_util.m"
                    else
#line 439 "inst_util.m"
                      if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 436 "inst_util.m"
                        {
#line 437 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 438 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 438 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 436 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 436 "inst_util.m"
                        }
#line 439 "inst_util.m"
                      else
#line 439 "inst_util.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 2))))
#line 473 "inst_util.m"
                          {
#line 473 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_75_75;
#line 473 "inst_util.m"
                            MR_Word check_hlds__inst_util__UniqB_162 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 473 "inst_util.m"
                            MR_Word check_hlds__inst_util__Uniq_163;
#line 473 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 477 "inst_util.m"
                            if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 479 "inst_util.m"
                              {
#line 479 "inst_util.m"
                                {
#line 479 "inst_util.m"
                                  check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                                }
#line 479 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 479 "inst_util.m"
                              }
#line 477 "inst_util.m"
                            else
#line 476 "inst_util.m"
                              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 473 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 473 "inst_util.m"
                              {
#line 481 "inst_util.m"
                                check_hlds__inst_util__V_75_75 = (MR_Integer) 1;
#line 481 "inst_util.m"
                                {
#line 481 "inst_util.m"
                                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_75_75, check_hlds__inst_util__UniqA_217, check_hlds__inst_util__UniqB_162, &check_hlds__inst_util__Uniq_163);
                                }
#line 473 "inst_util.m"
                                if (check_hlds__inst_util__succeeded)
#line 473 "inst_util.m"
                                  {
#line 483 "inst_util.m"
                                    *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 483 "inst_util.m"
                                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 482 "inst_util.m"
                                    {
#line 482 "inst_util.m"
                                      MR_Word base;
#line 482 "inst_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 482 "inst_util.m"
                                      *check_hlds__inst_util__Inst_13 = base;
#line 482 "inst_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 482 "inst_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_163));
#line 482 "inst_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_46));
#line 482 "inst_util.m"
                                    }
#line 482 "inst_util.m"
                                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 473 "inst_util.m"
                                  }
#line 473 "inst_util.m"
                              }
#line 473 "inst_util.m"
                          }
#line 439 "inst_util.m"
                        else
#line 439 "inst_util.m"
                          if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 451 "inst_util.m"
                            {
#line 451 "inst_util.m"
                              MR_Word check_hlds__inst_util__V_79_79;
#line 451 "inst_util.m"
                              MR_Word check_hlds__inst_util__UniqB_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 451 "inst_util.m"
                              MR_Word check_hlds__inst_util__InstResultsB_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 451 "inst_util.m"
                              MR_Word check_hlds__inst_util__BoundInstsB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 451 "inst_util.m"
                              MR_Word check_hlds__inst_util__Uniq_157;
#line 451 "inst_util.m"
                              MR_Word check_hlds__inst_util__BoundInsts_158;
#line 451 "inst_util.m"
                              MR_Word check_hlds__inst_util__Detism1_159;

#line 453 "inst_util.m"
                              {
#line 453 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_217, check_hlds__inst_util__UniqB_154, &check_hlds__inst_util__Uniq_157);
                              }
#line 451 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 451 "inst_util.m"
                                {
#line 454 "inst_util.m"
                                  {
#line 454 "inst_util.m"
                                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_156, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_217, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_158, &check_hlds__inst_util__Detism1_159, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                                  }
#line 451 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 451 "inst_util.m"
                                    {
#line 457 "inst_util.m"
                                      check_hlds__inst_util__V_79_79 = (MR_Integer) 1;
#line 456 "inst_util.m"
                                      {
#line 456 "inst_util.m"
                                        MR_Word base;
#line 456 "inst_util.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 456 "inst_util.m"
                                        *check_hlds__inst_util__Inst_13 = base;
#line 456 "inst_util.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 456 "inst_util.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_157));
#line 456 "inst_util.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_155));
#line 456 "inst_util.m"
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_158));
#line 456 "inst_util.m"
                                      }
#line 457 "inst_util.m"
                                      {
#line 457 "inst_util.m"
                                        parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_159, check_hlds__inst_util__V_79_79, check_hlds__inst_util__Detism_14);
                                      }
#line 457 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 451 "inst_util.m"
                                    }
#line 451 "inst_util.m"
                                }
#line 451 "inst_util.m"
                            }
#line 439 "inst_util.m"
                          else
#line 439 "inst_util.m"
                            if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 485 "inst_util.m"
                              {
#line 485 "inst_util.m"
                                MR_Word check_hlds__inst_util__InstVarsB_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 485 "inst_util.m"
                                MR_Word check_hlds__inst_util__SubInstB_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 486 "inst_util.m"
                                {
#line 486 "inst_util.m"
                                  return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_164, check_hlds__inst_util__SubInstB_165, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62);
                                }
#line 485 "inst_util.m"
                              }
#line 439 "inst_util.m"
                            else
#line 439 "inst_util.m"
                              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 459 "inst_util.m"
                                {
#line 459 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_76_76;
#line 459 "inst_util.m"
                                  MR_Word check_hlds__inst_util__UniqB_160;
#line 459 "inst_util.m"
                                  MR_Word check_hlds__inst_util__Uniq_161;
#line 459 "inst_util.m"
                                  MR_Word check_hlds__inst_util___HOInstInfoB_48;

#line 462 "inst_util.m"
                                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 459 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 459 "inst_util.m"
                                    {
#line 459 "inst_util.m"
                                      check_hlds__inst_util__UniqB_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 459 "inst_util.m"
                                      check_hlds__inst_util___HOInstInfoB_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 469 "inst_util.m"
                                      check_hlds__inst_util__V_76_76 = (MR_Integer) 1;
#line 469 "inst_util.m"
                                      {
#line 469 "inst_util.m"
                                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_76_76, check_hlds__inst_util__UniqA_217, check_hlds__inst_util__UniqB_160, &check_hlds__inst_util__Uniq_161);
                                      }
#line 459 "inst_util.m"
                                      if (check_hlds__inst_util__succeeded)
#line 459 "inst_util.m"
                                        {
#line 471 "inst_util.m"
                                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 471 "inst_util.m"
                                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_62 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_61;
#line 470 "inst_util.m"
                                          {
#line 470 "inst_util.m"
                                            MR_Word base;
#line 470 "inst_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 470 "inst_util.m"
                                            *check_hlds__inst_util__Inst_13 = base;
#line 470 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 470 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_161));
#line 470 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_46));
#line 470 "inst_util.m"
                                          }
#line 470 "inst_util.m"
                                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 459 "inst_util.m"
                                        }
#line 459 "inst_util.m"
                                    }
#line 459 "inst_util.m"
                                }
#line 439 "inst_util.m"
                              else
#line 439 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_FALSE;
#line 427 "inst_util.m"
                }
#line 255 "inst_util.m"
              else
#line 255 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 255 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 255 "inst_util.m"
  }
#line 245 "inst_util.m"
}

#line 229 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 229 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 229 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 229 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_16,
#line 229 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_17)
#line 229 "inst_util.m"
{
#line 235 "inst_util.m"
  {
#line 235 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 235 "inst_util.m"
    {
#line 235 "inst_util.m"
      return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_17);
    }
#line 235 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 235 "inst_util.m"
  }
#line 229 "inst_util.m"
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
#line 2308 "inst_util.m"
  while (MR_TRUE)
#line 2308 "inst_util.m"
    {
#line 2308 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2308 "inst_util.m"
      {
#line 2308 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2308 "inst_util.m"
        MR_Word check_hlds__inst_util__MayRestrict_6;

#line 2308 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2318 "inst_util.m"
          {
#line 2318 "inst_util.m"
            MR_Word check_hlds__inst_util__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 1)));
#line 2318 "inst_util.m"
            MR_Word check_hlds__inst_util__NewInst_21;

#line 2319 "inst_util.m"
            {
#line 2319 "inst_util.m"
              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_20, &check_hlds__inst_util__NewInst_21);
            }
#line 2320 "inst_util.m"
            /* direct tailcall eliminated */
#line 2320 "inst_util.m"
            {
#line 2320 "inst_util.m"
              MR_Word check_hlds__inst_util__Inst__tmp_copy_5 = check_hlds__inst_util__NewInst_21;

#line 2320 "inst_util.m"
              check_hlds__inst_util__Inst_5 = check_hlds__inst_util__Inst__tmp_copy_5;
#line 2320 "inst_util.m"
            }
#line 2320 "inst_util.m"
            continue;
#line 2318 "inst_util.m"
          }
#line 2308 "inst_util.m"
        else
#line 2308 "inst_util.m"
          if ((((((((check_hlds__inst_util__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || ((check_hlds__inst_util__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 2316 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2308 "inst_util.m"
          else
#line 2309 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2308 "inst_util.m"
        return check_hlds__inst_util__MayRestrict_6;
#line 2308 "inst_util.m"
      }
#line 2308 "inst_util.m"
      break;
#line 2308 "inst_util.m"
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
#line 2192 "inst_util.m"
  {
#line 2192 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2192 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_4;
#line 2192 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_16_16;
#line 2192 "inst_util.m"
    MR_Word check_hlds__inst_util__InMode_5;
#line 2192 "inst_util.m"
    MR_Word check_hlds__inst_util__OutMode_6;
#line 2192 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_7;
#line 2192 "inst_util.m"
    MR_Word check_hlds__inst_util__V_8_8;
#line 2192 "inst_util.m"
    MR_Integer check_hlds__inst_util__V_9_9;
#line 2192 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2193 "inst_util.m"
    {
#line 2193 "inst_util.m"
      parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__inst_util__InMode_5);
    }
#line 2194 "inst_util.m"
    {
#line 2194 "inst_util.m"
      parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__inst_util__OutMode_6);
    }
#line 10804 "check_hlds.inst_util.c"
    check_hlds__inst_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2195 "inst_util.m"
    check_hlds__inst_util__V_9_9 = (check_hlds__inst_util__Arity_3 - (MR_Integer) 1);
#line 2195 "inst_util.m"
    {
#line 2195 "inst_util.m"
      check_hlds__inst_util__V_8_8 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_9_9, ((MR_Box) (check_hlds__inst_util__InMode_5)));
    }
#line 2195 "inst_util.m"
    {
#line 2195 "inst_util.m"
      check_hlds__inst_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 0) = ((MR_Box) (check_hlds__inst_util__OutMode_6));
#line 2195 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2195 "inst_util.m"
    }
#line 2195 "inst_util.m"
    {
#line 2195 "inst_util.m"
      check_hlds__inst_util__ArgModes_7 = mercury__list__f_43_43_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_8_8, check_hlds__inst_util__V_11_11);
    }
#line 2196 "inst_util.m"
    {
#line 2196 "inst_util.m"
      check_hlds__inst_util__PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2196 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 2196 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 1) = ((MR_Box) (check_hlds__inst_util__ArgModes_7));
#line 2196 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2196 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2196 "inst_util.m"
    }
#line 2192 "inst_util.m"
    return check_hlds__inst_util__PredInstInfo_4;
#line 2192 "inst_util.m"
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
#line 2188 "inst_util.m"
  {
#line 2188 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 2188 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_14;
#line 2188 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_5;
#line 2188 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_8;
#line 2188 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_11;
#line 2188 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 2183 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9;
#line 2183 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;
#line 2185 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;

#line 2189 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2189 "inst_util.m"
      {
#line 2189 "inst_util.m"
        check_hlds__inst_util__PredInstInfo_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfo_4), (MR_Integer) 1);
#line 2183 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 0)));
#line 2183 "inst_util.m"
        check_hlds__inst_util__ArgModes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 1)));
#line 2183 "inst_util.m"
        check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 2)));
#line 2183 "inst_util.m"
        check_hlds__inst_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 3)));
#line 2183 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_12_12 == (MR_Integer) 1);
#line 2188 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2188 "inst_util.m"
          {
#line 10899 "check_hlds.inst_util.c"
            check_hlds__inst_util__TypeCtorInfo_11_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2184 "inst_util.m"
            {
#line 2184 "inst_util.m"
              check_hlds__inst_util__Arity_11 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_14, check_hlds__inst_util__ArgModes_8);
            }
#line 2186 "inst_util.m"
            {
#line 2186 "inst_util.m"
              check_hlds__inst_util__V_13_13 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_11);
            }
#line 2185 "inst_util.m"
            {
#line 2185 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_5, check_hlds__inst_util__V_13_13, check_hlds__inst_util__ModuleInfo_3);
            }
#line 2185 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2188 "inst_util.m"
          }
#line 2189 "inst_util.m"
      }
#line 2188 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2188 "inst_util.m"
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
#line 2182 "inst_util.m"
  {
#line 2182 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2182 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_11;
#line 2182 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 1)));
#line 2182 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_8;
#line 2182 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 0)));
#line 2183 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 2)));
#line 2183 "inst_util.m"
    MR_Word check_hlds__inst_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 3)));
#line 2185 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;

#line 2183 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_9_9 == (MR_Integer) 1);
#line 2182 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2182 "inst_util.m"
      {
#line 10963 "check_hlds.inst_util.c"
        check_hlds__inst_util__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2184 "inst_util.m"
        {
#line 2184 "inst_util.m"
          check_hlds__inst_util__Arity_8 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_11, check_hlds__inst_util__ArgModes_5);
        }
#line 2186 "inst_util.m"
        {
#line 2186 "inst_util.m"
          check_hlds__inst_util__V_10_10 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_8);
        }
#line 2185 "inst_util.m"
        {
#line 2185 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_4, check_hlds__inst_util__V_10_10, check_hlds__inst_util__ModuleInfo_3);
        }
#line 2185 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2182 "inst_util.m"
      }
#line 2182 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2182 "inst_util.m"
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
#line 2295 "inst_util.m"
  {
#line 2295 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2295 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst_7;
#line 2295 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_10;
#line 2295 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2296 "inst_util.m"
    {
#line 2296 "inst_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__inst_util__Instmap_5, check_hlds__inst_util__Var_6, &check_hlds__inst_util__Inst_7);
    }
#line 2202 "inst_util.m"
    {
#line 2202 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_10);
    }
#line 2203 "inst_util.m"
    {
#line 2203 "inst_util.m"
      check_hlds__inst_util__V_11_11 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__Inst_7, check_hlds__inst_util__Expansions_10);
    }
#line 2203 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_11_11 == (MR_Integer) 1);
#line 2295 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2295 "inst_util.m"
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
#line 2201 "inst_util.m"
  {
#line 2201 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2201 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_5;
#line 2201 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2202 "inst_util.m"
    {
#line 2202 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_5);
    }
#line 2203 "inst_util.m"
    {
#line 2203 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions_5);
    }
#line 2203 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2201 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2201 "inst_util.m"
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
#line 2083 "inst_util.m"
  {
#line 2083 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2083 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_5;
#line 2083 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2084 "inst_util.m"
    {
#line 2084 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_5);
    }
#line 2085 "inst_util.m"
    {
#line 2085 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions0_5);
    }
#line 2085 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2083 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2083 "inst_util.m"
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
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_24,
#line 101 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_25)
#line 101 "inst_util.m"
{
#line 1666 "inst_util.m"
  {
#line 1666 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1666 "inst_util.m"
    MR_Word check_hlds__inst_util__InstTable0_12;
#line 1666 "inst_util.m"
    MR_Word check_hlds__inst_util__MergeInstTable0_13;
#line 1666 "inst_util.m"
    MR_Word check_hlds__inst_util__ThisInstPair_14;
#line 1666 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_17;
#line 1677 "inst_util.m"
    MR_Word check_hlds__inst_util__Result_15;
#line 1671 "inst_util.m"
    MR_Box check_hlds__inst_util__conv0_Result_15;
#line 1698 "inst_util.m"
    MR_Word check_hlds__inst_util__V_32_32;

#line 1668 "inst_util.m"
    {
#line 1668 "inst_util.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_24, &check_hlds__inst_util__InstTable0_12);
    }
#line 1669 "inst_util.m"
    {
#line 1669 "inst_util.m"
      hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable0_12, &check_hlds__inst_util__MergeInstTable0_13);
    }
#line 1670 "inst_util.m"
    {
#line 1670 "inst_util.m"
      check_hlds__inst_util__ThisInstPair_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1670 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__ThisInstPair_14, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1670 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__ThisInstPair_14, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1670 "inst_util.m"
    }
#line 1671 "inst_util.m"
    {
#line 1671 "inst_util.m"
      check_hlds__inst_util__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__inst_util_scalar_common_1[0], (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0, check_hlds__inst_util__MergeInstTable0_13, ((MR_Box) (check_hlds__inst_util__ThisInstPair_14)), &check_hlds__inst_util__conv0_Result_15);
    }
#line 1671 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1671 "inst_util.m"
      {
#line 1671 "inst_util.m"
        check_hlds__inst_util__Result_15 = ((MR_Word) check_hlds__inst_util__conv0_Result_15);
#line 1671 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1671 "inst_util.m"
      }
#line 1677 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1674 "inst_util.m"
      {
#line 1674 "inst_util.m"
        MR_Word check_hlds__inst_util__MergedInst_16;

#line 1672 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__Result_15)) == (MR_mktag((MR_Integer) 1)));
#line 1672 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1672 "inst_util.m"
          {
#line 1672 "inst_util.m"
            check_hlds__inst_util__MergedInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_15, (MR_Integer) 0)));
#line 1673 "inst_util.m"
            check_hlds__inst_util__Inst0_17 = check_hlds__inst_util__MergedInst_16;
#line 1672 "inst_util.m"
          }
#line 1672 "inst_util.m"
        else
#line 1675 "inst_util.m"
          {
#line 1675 "inst_util.m"
            MR_Word check_hlds__inst_util__V_26_26;

#line 1675 "inst_util.m"
            {
#line 1675 "inst_util.m"
              check_hlds__inst_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1675 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_26_26, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1675 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_26_26, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1675 "inst_util.m"
            }
#line 1675 "inst_util.m"
            {
#line 1675 "inst_util.m"
              check_hlds__inst_util__Inst0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1675 "inst_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1675 "inst_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_17, 1) = ((MR_Box) (check_hlds__inst_util__V_26_26));
#line 1675 "inst_util.m"
            }
#line 1675 "inst_util.m"
          }
#line 1675 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_25 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_24;
#line 1674 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1674 "inst_util.m"
      }
#line 1677 "inst_util.m"
    else
#line 1680 "inst_util.m"
      {
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__TypeInfo_36_36 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable1_18;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable1_19;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable2_20;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable2_21;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable3_22;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable3_23;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29;
#line 1680 "inst_util.m"
        MR_Word check_hlds__inst_util__V_30_30;

#line 1679 "inst_util.m"
        {
#line 1679 "inst_util.m"
          mercury__map__det_insert_4_p_0(check_hlds__inst_util__TypeInfo_36_36, check_hlds__inst_util__TypeCtorInfo_37_37, ((MR_Box) (check_hlds__inst_util__ThisInstPair_14)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__inst_util__MergeInstTable0_13, &check_hlds__inst_util__MergeInstTable1_18);
        }
#line 1681 "inst_util.m"
        {
#line 1681 "inst_util.m"
          hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable1_18, check_hlds__inst_util__InstTable0_12, &check_hlds__inst_util__InstTable1_19);
        }
#line 1682 "inst_util.m"
        {
#line 1682 "inst_util.m"
          hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_24, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1685 "inst_util.m"
        {
#line 1685 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_17, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29);
        }
#line 1680 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1680 "inst_util.m"
          {
#line 1688 "inst_util.m"
            {
#line 1688 "inst_util.m"
              hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__inst_util__InstTable2_20);
            }
#line 1689 "inst_util.m"
            {
#line 1689 "inst_util.m"
              hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable2_20, &check_hlds__inst_util__MergeInstTable2_21);
            }
#line 1690 "inst_util.m"
            {
#line 1690 "inst_util.m"
              check_hlds__inst_util__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1690 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_30_30, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_17));
#line 1690 "inst_util.m"
            }
#line 1690 "inst_util.m"
            {
#line 1690 "inst_util.m"
              mercury__map__det_update_4_p_0(check_hlds__inst_util__TypeInfo_36_36, check_hlds__inst_util__TypeCtorInfo_37_37, ((MR_Box) (check_hlds__inst_util__ThisInstPair_14)), ((MR_Box) (check_hlds__inst_util__V_30_30)), check_hlds__inst_util__MergeInstTable2_21, &check_hlds__inst_util__MergeInstTable3_22);
            }
#line 1692 "inst_util.m"
            {
#line 1692 "inst_util.m"
              hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable3_22, check_hlds__inst_util__InstTable2_20, &check_hlds__inst_util__InstTable3_23);
            }
#line 1693 "inst_util.m"
            {
#line 1693 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable3_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_25);
            }
#line 1693 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1680 "inst_util.m"
          }
#line 1680 "inst_util.m"
      }
#line 1666 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1666 "inst_util.m"
      {
#line 1696 "inst_util.m"
        {
#line 1696 "inst_util.m"
          check_hlds__inst_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_32_32, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1696 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_32_32, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1696 "inst_util.m"
        }
#line 1696 "inst_util.m"
        {
#line 1696 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_instname_3_p_0(check_hlds__inst_util__Inst0_17, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_25, check_hlds__inst_util__V_32_32);
        }
#line 1698 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1697 "inst_util.m"
          {
#line 1697 "inst_util.m"
            MR_Word base;
#line 1697 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "inst_util.m"
            *check_hlds__inst_util__Inst_10 = base;
#line 1697 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1697 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 1697 "inst_util.m"
          }
#line 1698 "inst_util.m"
        else
#line 1699 "inst_util.m"
          *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_17;
#line 1698 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1666 "inst_util.m"
      }
#line 1666 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1666 "inst_util.m"
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
#line 1408 "inst_util.m"
  {
#line 1408 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1408 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1408 "inst_util.m"
      {
#line 1408 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1408 "inst_util.m"
      }
#line 1408 "inst_util.m"
    else
#line 1409 "inst_util.m"
      {
#line 1409 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1409 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1409 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1409 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1409 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1410 "inst_util.m"
        {
#line 1410 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1411 "inst_util.m"
        {
#line 1411 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1409 "inst_util.m"
        {
#line 1409 "inst_util.m"
          MR_Word base;
#line 1409 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1409 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1409 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1409 "inst_util.m"
        }
#line 1409 "inst_util.m"
      }
#line 1408 "inst_util.m"
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
#line 1549 "inst_util.m"
  {
#line 1549 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1549 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1552 "inst_util.m"
      {
#line 1552 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1552 "inst_util.m"
        MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1552 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_11;

#line 1627 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 3))
#line 1631 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 3;
#line 1627 "inst_util.m"
        else
#line 1627 "inst_util.m"
          if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 4))
#line 1630 "inst_util.m"
            check_hlds__inst_util__Uniq_11 = (MR_Integer) 4;
#line 1627 "inst_util.m"
          else
#line 1627 "inst_util.m"
            if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 2))
#line 1628 "inst_util.m"
              check_hlds__inst_util__Uniq_11 = (MR_Integer) 2;
#line 1627 "inst_util.m"
            else
#line 1627 "inst_util.m"
              if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 0))
#line 1629 "inst_util.m"
                check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1627 "inst_util.m"
              else
#line 1627 "inst_util.m"
                check_hlds__inst_util__Uniq_11 = (MR_Integer) 2;
#line 1554 "inst_util.m"
        {
#line 1554 "inst_util.m"
          MR_Word base;
#line 1554 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = base;
#line 1554 "inst_util.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1554 "inst_util.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1554 "inst_util.m"
        }
#line 1554 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1552 "inst_util.m"
      }
#line 1549 "inst_util.m"
    else
#line 1549 "inst_util.m"
      if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1578 "inst_util.m"
        {
#line 1579 "inst_util.m"
          {
#line 1579 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
#line 1579 "inst_util.m"
            return;
          }
#line 1578 "inst_util.m"
        }
#line 1549 "inst_util.m"
      else
#line 1549 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1556 "inst_util.m"
          {
#line 1556 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1556 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1556 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1556 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_52;
#line 1556 "inst_util.m"
            MR_Word check_hlds__inst_util___InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));

#line 1627 "inst_util.m"
            if ((check_hlds__inst_util__Uniq0_51 == (MR_Integer) 3))
#line 1631 "inst_util.m"
              check_hlds__inst_util__Uniq_52 = (MR_Integer) 3;
#line 1627 "inst_util.m"
            else
#line 1627 "inst_util.m"
              if ((check_hlds__inst_util__Uniq0_51 == (MR_Integer) 4))
#line 1630 "inst_util.m"
                check_hlds__inst_util__Uniq_52 = (MR_Integer) 4;
#line 1627 "inst_util.m"
              else
#line 1627 "inst_util.m"
                if ((check_hlds__inst_util__Uniq0_51 == (MR_Integer) 2))
#line 1628 "inst_util.m"
                  check_hlds__inst_util__Uniq_52 = (MR_Integer) 2;
#line 1627 "inst_util.m"
                else
#line 1627 "inst_util.m"
                  if ((check_hlds__inst_util__Uniq0_51 == (MR_Integer) 0))
#line 1629 "inst_util.m"
                    check_hlds__inst_util__Uniq_52 = (MR_Integer) 0;
#line 1627 "inst_util.m"
                  else
#line 1627 "inst_util.m"
                    check_hlds__inst_util__Uniq_52 = (MR_Integer) 2;
#line 1559 "inst_util.m"
            {
#line 1559 "inst_util.m"
              check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
            }
#line 1561 "inst_util.m"
            {
#line 1561 "inst_util.m"
              MR_Word base;
#line 1561 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "inst_util.m"
              *check_hlds__inst_util__Inst_6 = base;
#line 1561 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1561 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_52));
#line 1561 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1561 "inst_util.m"
            }
#line 1556 "inst_util.m"
          }
#line 1549 "inst_util.m"
        else
#line 1549 "inst_util.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1570 "inst_util.m"
            {
#line 1570 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1570 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1570 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst_19;

#line 1571 "inst_util.m"
              {
#line 1571 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1572 "inst_util.m"
              {
#line 1572 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1572 "inst_util.m"
              check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1574 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1573 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst_19;
#line 1574 "inst_util.m"
              else
#line 1575 "inst_util.m"
                {
#line 1575 "inst_util.m"
                  MR_Word base;
#line 1575 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1575 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1575 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1575 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst_19));
#line 1575 "inst_util.m"
                }
#line 1570 "inst_util.m"
            }
#line 1549 "inst_util.m"
          else
#line 1549 "inst_util.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1581 "inst_util.m"
              {
#line 1581 "inst_util.m"
                MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1581 "inst_util.m"
                MR_Word check_hlds__inst_util__InstTable0_23;
#line 1581 "inst_util.m"
                MR_Word check_hlds__inst_util__NondetLiveInsts0_24;
#line 1581 "inst_util.m"
                MR_Word check_hlds__inst_util__NondetLiveInst_27;
#line 1591 "inst_util.m"
                MR_Word check_hlds__inst_util__Result_25;
#line 1585 "inst_util.m"
                MR_Box check_hlds__inst_util__conv0_Result_25;

#line 1583 "inst_util.m"
                {
#line 1583 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__InstTable0_23);
                }
#line 1584 "inst_util.m"
                {
#line 1584 "inst_util.m"
                  hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__NondetLiveInsts0_24);
                }
#line 1585 "inst_util.m"
                {
#line 1585 "inst_util.m"
                  check_hlds__inst_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0, check_hlds__inst_util__NondetLiveInsts0_24, ((MR_Box) (check_hlds__inst_util__InstName_22)), &check_hlds__inst_util__conv0_Result_25);
                }
#line 1585 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1585 "inst_util.m"
                  {
#line 1585 "inst_util.m"
                    check_hlds__inst_util__Result_25 = ((MR_Word) check_hlds__inst_util__conv0_Result_25);
#line 1585 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1585 "inst_util.m"
                  }
#line 1591 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1588 "inst_util.m"
                  {
#line 1588 "inst_util.m"
                    MR_Word check_hlds__inst_util__NondetLiveInst0_26;

#line 1586 "inst_util.m"
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__Result_25)) == (MR_mktag((MR_Integer) 1)));
#line 1586 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1586 "inst_util.m"
                      {
#line 1586 "inst_util.m"
                        check_hlds__inst_util__NondetLiveInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_25, (MR_Integer) 0)));
#line 1587 "inst_util.m"
                        check_hlds__inst_util__NondetLiveInst_27 = check_hlds__inst_util__NondetLiveInst0_26;
#line 1586 "inst_util.m"
                      }
#line 1586 "inst_util.m"
                    else
#line 1589 "inst_util.m"
                      check_hlds__inst_util__NondetLiveInst_27 = check_hlds__inst_util__Inst0_5;
#line 1589 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1588 "inst_util.m"
                  }
#line 1591 "inst_util.m"
                else
#line 1595 "inst_util.m"
                  {
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__NondetLiveInsts1_28;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstTable1_29;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__SubInst1_30;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstTable2_31;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__NondetLiveInsts2_32;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__NondetLiveInsts_33;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstTable_34;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_39_39;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_40_40;
#line 1595 "inst_util.m"
                    MR_Word check_hlds__inst_util__SubInst0_55;

#line 1594 "inst_util.m"
                    {
#line 1594 "inst_util.m"
                      mercury__map__det_insert_4_p_0(check_hlds__inst_util__TypeCtorInfo_60_60, check_hlds__inst_util__TypeCtorInfo_61_61, ((MR_Box) (check_hlds__inst_util__InstName_22)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__inst_util__NondetLiveInsts0_24, &check_hlds__inst_util__NondetLiveInsts1_28);
                    }
#line 1596 "inst_util.m"
                    {
#line 1596 "inst_util.m"
                      hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__NondetLiveInsts1_28, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                    }
#line 1598 "inst_util.m"
                    {
#line 1598 "inst_util.m"
                      hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38);
                    }
#line 1602 "inst_util.m"
                    {
#line 1602 "inst_util.m"
                      check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_55);
                    }
#line 1603 "inst_util.m"
                    {
#line 1603 "inst_util.m"
                      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__SubInst0_55, &check_hlds__inst_util__SubInst1_30);
                    }
#line 1604 "inst_util.m"
                    {
#line 1604 "inst_util.m"
                      check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst1_30, &check_hlds__inst_util__NondetLiveInst_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_39_39);
                    }
#line 1609 "inst_util.m"
                    {
#line 1609 "inst_util.m"
                      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__inst_util__InstTable2_31);
                    }
#line 1610 "inst_util.m"
                    {
#line 1610 "inst_util.m"
                      hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__NondetLiveInsts2_32);
                    }
#line 1611 "inst_util.m"
                    {
#line 1611 "inst_util.m"
                      check_hlds__inst_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_40_40, 0) = ((MR_Box) (check_hlds__inst_util__NondetLiveInst_27));
#line 1611 "inst_util.m"
                    }
#line 1611 "inst_util.m"
                    {
#line 1611 "inst_util.m"
                      mercury__map__det_update_4_p_0(check_hlds__inst_util__TypeCtorInfo_60_60, check_hlds__inst_util__TypeCtorInfo_61_61, ((MR_Box) (check_hlds__inst_util__InstName_22)), ((MR_Box) (check_hlds__inst_util__V_40_40)), check_hlds__inst_util__NondetLiveInsts2_32, &check_hlds__inst_util__NondetLiveInsts_33);
                    }
#line 1613 "inst_util.m"
                    {
#line 1613 "inst_util.m"
                      hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__NondetLiveInsts_33, check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__InstTable_34);
                    }
#line 1615 "inst_util.m"
                    {
#line 1615 "inst_util.m"
                      hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_39_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
                    }
#line 1595 "inst_util.m"
                  }
#line 1618 "inst_util.m"
                {
#line 1618 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_instname_3_p_0(check_hlds__inst_util__NondetLiveInst_27, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36, check_hlds__inst_util__InstName_22);
                }
#line 1620 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1619 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1620 "inst_util.m"
                else
#line 1621 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__NondetLiveInst_27;
#line 1581 "inst_util.m"
              }
#line 1549 "inst_util.m"
            else
#line 1549 "inst_util.m"
              if ((((((check_hlds__inst_util__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 1)))))) || ((check_hlds__inst_util__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 1549 "inst_util.m"
                {
#line 1550 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1550 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1549 "inst_util.m"
                }
#line 1549 "inst_util.m"
              else
#line 1549 "inst_util.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1563 "inst_util.m"
                  {
#line 1563 "inst_util.m"
                    MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1563 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1563 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_54;

#line 1627 "inst_util.m"
                    if ((check_hlds__inst_util__Uniq0_53 == (MR_Integer) 3))
#line 1631 "inst_util.m"
                      check_hlds__inst_util__Uniq_54 = (MR_Integer) 3;
#line 1627 "inst_util.m"
                    else
#line 1627 "inst_util.m"
                      if ((check_hlds__inst_util__Uniq0_53 == (MR_Integer) 4))
#line 1630 "inst_util.m"
                        check_hlds__inst_util__Uniq_54 = (MR_Integer) 4;
#line 1627 "inst_util.m"
                      else
#line 1627 "inst_util.m"
                        if ((check_hlds__inst_util__Uniq0_53 == (MR_Integer) 2))
#line 1628 "inst_util.m"
                          check_hlds__inst_util__Uniq_54 = (MR_Integer) 2;
#line 1627 "inst_util.m"
                        else
#line 1627 "inst_util.m"
                          if ((check_hlds__inst_util__Uniq0_53 == (MR_Integer) 0))
#line 1629 "inst_util.m"
                            check_hlds__inst_util__Uniq_54 = (MR_Integer) 0;
#line 1627 "inst_util.m"
                          else
#line 1627 "inst_util.m"
                            check_hlds__inst_util__Uniq_54 = (MR_Integer) 2;
#line 1565 "inst_util.m"
                    {
#line 1565 "inst_util.m"
                      MR_Word base;
#line 1565 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1565 "inst_util.m"
                      *check_hlds__inst_util__Inst_6 = base;
#line 1565 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1565 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_54));
#line 1565 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1565 "inst_util.m"
                    }
#line 1565 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1563 "inst_util.m"
                  }
#line 1549 "inst_util.m"
                else
#line 1567 "inst_util.m"
                  {
#line 1568 "inst_util.m"
                    {
#line 1568 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
#line 1568 "inst_util.m"
                      return;
                    }
#line 1567 "inst_util.m"
                  }
#line 1549 "inst_util.m"
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
#line 678 "inst_util.m"
  {
#line 678 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 678 "inst_util.m"
    MR_Word check_hlds__inst_util__InstA_22;

#line 679 "inst_util.m"
    {
#line 679 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__InstA0_13, &check_hlds__inst_util__InstA_22);
    }
#line 680 "inst_util.m"
    {
#line 680 "inst_util.m"
      return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__InstA_22, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, check_hlds__inst_util__Inst_19, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
    }
#line 678 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 678 "inst_util.m"
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
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_33,
#line 64 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34)
#line 64 "inst_util.m"
{
#line 169 "inst_util.m"
  {
#line 169 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 169 "inst_util.m"
    MR_Word check_hlds__inst_util__ThisInstPair_16;
#line 169 "inst_util.m"
    MR_Word check_hlds__inst_util__InstTable0_17;
#line 169 "inst_util.m"
    MR_Word check_hlds__inst_util__UnifyInsts0_18;
#line 169 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst1_23;
#line 194 "inst_util.m"
    MR_Word check_hlds__inst_util__Result_19;
#line 180 "inst_util.m"
    MR_Box check_hlds__inst_util__conv0_Result_19;

#line 171 "inst_util.m"
    {
#line 171 "inst_util.m"
      check_hlds__inst_util__ThisInstPair_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 171 "inst_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__inst_util__ThisInstPair_16, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 171 "inst_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__inst_util__ThisInstPair_16, 1) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 171 "inst_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__inst_util__ThisInstPair_16, 2) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 171 "inst_util.m"
      MR_hl_field(MR_mktag(2), check_hlds__inst_util__ThisInstPair_16, 3) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 171 "inst_util.m"
    }
#line 172 "inst_util.m"
    {
#line 172 "inst_util.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__inst_util__InstTable0_17);
    }
#line 173 "inst_util.m"
    {
#line 173 "inst_util.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable0_17, &check_hlds__inst_util__UnifyInsts0_18);
    }
#line 180 "inst_util.m"
    {
#line 180 "inst_util.m"
      check_hlds__inst_util__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0, check_hlds__inst_util__UnifyInsts0_18, ((MR_Box) (check_hlds__inst_util__ThisInstPair_16)), &check_hlds__inst_util__conv0_Result_19);
    }
#line 180 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 180 "inst_util.m"
      {
#line 180 "inst_util.m"
        check_hlds__inst_util__Result_19 = ((MR_Word) check_hlds__inst_util__conv0_Result_19);
#line 180 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 180 "inst_util.m"
      }
#line 194 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 192 "inst_util.m"
      {
#line 184 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInst_20;
#line 184 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyDetism_21;

#line 181 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__Result_19)) == (MR_mktag((MR_Integer) 1)));
#line 181 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 181 "inst_util.m"
          {
#line 181 "inst_util.m"
            check_hlds__inst_util__UnifyInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_19, (MR_Integer) 0)));
#line 181 "inst_util.m"
            check_hlds__inst_util__UnifyDetism_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Result_19, (MR_Integer) 1)));
#line 182 "inst_util.m"
            check_hlds__inst_util__Inst1_23 = check_hlds__inst_util__UnifyInst_20;
#line 183 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__UnifyDetism_21;
#line 181 "inst_util.m"
          }
#line 181 "inst_util.m"
        else
#line 185 "inst_util.m"
          {
#line 185 "inst_util.m"
            {
#line 185 "inst_util.m"
              check_hlds__inst_util__Inst1_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "inst_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst1_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 185 "inst_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst1_23, 1) = ((MR_Box) (check_hlds__inst_util__ThisInstPair_16));
#line 185 "inst_util.m"
            }
#line 191 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 185 "inst_util.m"
          }
#line 193 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_33;
#line 192 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 192 "inst_util.m"
      }
#line 194 "inst_util.m"
    else
#line 197 "inst_util.m"
      {
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInsts1_24;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable1_25;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__ExpandedInstA_26;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__ExpandedInstB_27;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable2_29;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInsts2_30;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInsts_31;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable_32;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__V_39_39;
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_41;
#line 208 "inst_util.m"
        MR_Word check_hlds__inst_util__V_38_38;
#line 208 "inst_util.m"
        MR_Word check_hlds__inst_util__V_46_46;
#line 208 "inst_util.m"
        MR_Word check_hlds__inst_util__V_28_28;

#line 196 "inst_util.m"
        {
#line 196 "inst_util.m"
          mercury__map__det_insert_4_p_0(check_hlds__inst_util__TypeCtorInfo_44_44, check_hlds__inst_util__TypeCtorInfo_45_45, ((MR_Box) (check_hlds__inst_util__ThisInstPair_16)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__inst_util__UnifyInsts0_18, &check_hlds__inst_util__UnifyInsts1_24);
        }
#line 198 "inst_util.m"
        {
#line 198 "inst_util.m"
          hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInsts1_24, check_hlds__inst_util__InstTable0_17, &check_hlds__inst_util__InstTable1_25);
        }
#line 199 "inst_util.m"
        {
#line 199 "inst_util.m"
          hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36);
        }
#line 201 "inst_util.m"
        {
#line 201 "inst_util.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__InstA_10, &check_hlds__inst_util__ExpandedInstA_26);
        }
#line 202 "inst_util.m"
        {
#line 202 "inst_util.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__InstB_11, &check_hlds__inst_util__ExpandedInstB_27);
        }
#line 203 "inst_util.m"
        {
#line 203 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__ExpandedInstA_26, check_hlds__inst_util__ExpandedInstB_27, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_41, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
        }
#line 197 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 197 "inst_util.m"
          {
#line 208 "inst_util.m"
            check_hlds__inst_util__V_38_38 = (MR_Integer) 0;
#line 208 "inst_util.m"
            {
#line 208 "inst_util.m"
              parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__inst_util__Detism_14, &check_hlds__inst_util__V_28_28, &check_hlds__inst_util__V_46_46);
            }
#line 208 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_38_38 == check_hlds__inst_util__V_46_46);
#line 210 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 209 "inst_util.m"
              check_hlds__inst_util__Inst1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 210 "inst_util.m"
            else
#line 211 "inst_util.m"
              check_hlds__inst_util__Inst1_23 = check_hlds__inst_util__Inst0_41;
#line 215 "inst_util.m"
            {
#line 215 "inst_util.m"
              hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__InstTable2_29);
            }
#line 216 "inst_util.m"
            {
#line 216 "inst_util.m"
              hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable2_29, &check_hlds__inst_util__UnifyInsts2_30);
            }
#line 217 "inst_util.m"
            {
#line 217 "inst_util.m"
              check_hlds__inst_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_39_39, 0) = ((MR_Box) (check_hlds__inst_util__Inst1_23));
#line 217 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_39_39, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 217 "inst_util.m"
            }
#line 217 "inst_util.m"
            {
#line 217 "inst_util.m"
              mercury__map__det_update_4_p_0(check_hlds__inst_util__TypeCtorInfo_44_44, check_hlds__inst_util__TypeCtorInfo_45_45, ((MR_Box) (check_hlds__inst_util__ThisInstPair_16)), ((MR_Box) (check_hlds__inst_util__V_39_39)), check_hlds__inst_util__UnifyInsts2_30, &check_hlds__inst_util__UnifyInsts_31);
            }
#line 219 "inst_util.m"
            {
#line 219 "inst_util.m"
              hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInsts_31, check_hlds__inst_util__InstTable2_29, &check_hlds__inst_util__InstTable_32);
            }
#line 220 "inst_util.m"
            {
#line 220 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34);
            }
#line 220 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 197 "inst_util.m"
          }
#line 197 "inst_util.m"
      }
#line 169 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 169 "inst_util.m"
      {
#line 223 "inst_util.m"
        {
#line 223 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_instname_3_p_0(check_hlds__inst_util__Inst1_23, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34, check_hlds__inst_util__ThisInstPair_16);
        }
#line 225 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 224 "inst_util.m"
          {
#line 224 "inst_util.m"
            MR_Word base;
#line 224 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = base;
#line 224 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 224 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__ThisInstPair_16));
#line 224 "inst_util.m"
          }
#line 225 "inst_util.m"
        else
#line 226 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst1_23;
#line 225 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 169 "inst_util.m"
      }
#line 169 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 169 "inst_util.m"
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
