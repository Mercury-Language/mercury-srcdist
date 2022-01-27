/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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




#line 1699 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

#line 2347 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2347 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2347 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2347 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2333 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2333 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2333 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2333 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2278 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2278 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2278 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2278 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2234 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2234 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2234 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2234 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2217 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2217 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2217 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2217 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2161 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2117 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2117 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2117 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2117 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2117 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2117 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2117 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);

#line 2100 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2100 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2100 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2100 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2100 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2100 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2100 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);

#line 2056 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2056 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2056 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);

#line 2014 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2014 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2014 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2014 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2014 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2014 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2014 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11);

#line 2005 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2005 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2005 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2005 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2005 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2005 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2005 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 1993 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 1993 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1993 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1993 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1993 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1993 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1993 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 1984 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 1984 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 1984 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 1984 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 1984 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1984 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10);

#line 1953 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1953 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1953 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1953 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1953 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1953 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13);

#line 1944 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1944 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1944 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1944 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6);

#line 1816 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1816 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1816 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1816 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1816 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1816 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1816 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);

#line 1788 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1788 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1788 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1788 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1788 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1788 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1788 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);

#line 1768 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1768 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1768 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1768 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1768 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1768 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1768 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);

#line 1684 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1684 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1684 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1684 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1684 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1673 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1673 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1673 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1673 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1673 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1568 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1568 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1568 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1568 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1568 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1447 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1447 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1447 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1447 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1447 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);

#line 1420 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1420 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1420 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1420 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1420 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1420 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);

#line 1400 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1400 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1400 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1400 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 1389 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1373 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1373 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1373 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1373 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1266 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1266 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1266 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1266 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);

#line 1245 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1245 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1245 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1245 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1142 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);

#line 1127 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1127 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1127 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1127 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1108 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1108 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1108 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1108 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 991 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 991 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12);

#line 944 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 944 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 944 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 944 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);

#line 928 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 928 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 928 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 928 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 909 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 909 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 909 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 909 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 866 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 866 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 866 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 866 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 831 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 831 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 831 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 831 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);

#line 706 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 706 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 706 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 706 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);

#line 685 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 685 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 685 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 685 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 268 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 268 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 268 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 268 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);

#line 243 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 243 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 243 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 243 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);


static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_2[1][3];




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

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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



#line 1699 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
#line 1699 "inst_util.m"
{
#line 1701 "inst_util.m"
  {
#line 1701 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1701 "inst_util.m"
  }
#line 1699 "inst_util.m"
}

#line 2347 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2347 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2347 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2347 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2347 "inst_util.m"
{
#line 2350 "inst_util.m"
  while (MR_TRUE)
#line 2350 "inst_util.m"
    {
#line 2350 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2350 "inst_util.m"
      {
#line 2350 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2350 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2350 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2350 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2350 "inst_util.m"
        else
#line 2352 "inst_util.m"
          {
#line 2352 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2352 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2352 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2352 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_14;
#line 2353 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2354 "inst_util.m"
            {
#line 2354 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_14 = check_hlds__inst_util__inst_list_contains_any_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2359 "inst_util.m"
            if ((check_hlds__inst_util__HeadContainsAny_14 == (MR_Integer) 0))
#line 2361 "inst_util.m"
              {
#line 2361 "inst_util.m"
                /* direct tailcall eliminated */
#line 2361 "inst_util.m"
                {
#line 2361 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2361 "inst_util.m"
                  check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2361 "inst_util.m"
                }
#line 2361 "inst_util.m"
                continue;
#line 2361 "inst_util.m"
              }
#line 2359 "inst_util.m"
            else
#line 2358 "inst_util.m"
              check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2352 "inst_util.m"
          }
#line 2350 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2350 "inst_util.m"
      }
#line 2350 "inst_util.m"
      break;
#line 2350 "inst_util.m"
    }
#line 2347 "inst_util.m"
}

#line 2333 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2333 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2333 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2333 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2333 "inst_util.m"
{
#line 2336 "inst_util.m"
  while (MR_TRUE)
#line 2336 "inst_util.m"
    {
#line 2336 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2336 "inst_util.m"
      {
#line 2336 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2336 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2336 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2336 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2336 "inst_util.m"
        else
#line 2337 "inst_util.m"
          {
#line 2337 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2337 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2337 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_12;

#line 2338 "inst_util.m"
            {
#line 2338 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_12 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2342 "inst_util.m"
            if ((check_hlds__inst_util__HeadContainsAny_12 == (MR_Integer) 0))
#line 2344 "inst_util.m"
              {
#line 2344 "inst_util.m"
                /* direct tailcall eliminated */
#line 2344 "inst_util.m"
                {
#line 2344 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2344 "inst_util.m"
                  check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2344 "inst_util.m"
                }
#line 2344 "inst_util.m"
                continue;
#line 2344 "inst_util.m"
              }
#line 2342 "inst_util.m"
            else
#line 2341 "inst_util.m"
              check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2337 "inst_util.m"
          }
#line 2336 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2336 "inst_util.m"
      }
#line 2336 "inst_util.m"
      break;
#line 2336 "inst_util.m"
    }
#line 2333 "inst_util.m"
}

#line 2278 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2278 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2278 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2278 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2278 "inst_util.m"
{
#line 2282 "inst_util.m"
  while (MR_TRUE)
#line 2282 "inst_util.m"
    {
#line 2282 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2282 "inst_util.m"
      {
#line 2282 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2282 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsAny_8;

#line 2282 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 2283 "inst_util.m"
          check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2282 "inst_util.m"
        else
#line 2282 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2285 "inst_util.m"
          {
#line 2285 "inst_util.m"
            MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2285 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2285 "inst_util.m"
            MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2289 "inst_util.m"
            if ((check_hlds__inst_util__InstResults_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2304 "inst_util.m"
              {
#line 2304 "inst_util.m"
                return check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
              }
#line 2289 "inst_util.m"
            else
#line 2289 "inst_util.m"
            if ((check_hlds__inst_util__InstResults_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2288 "inst_util.m"
              check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2289 "inst_util.m"
            else
#line 2290 "inst_util.m"
              {
#line 2290 "inst_util.m"
                MR_Word check_hlds__inst_util__AnyResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 1)));
#line 2290 "inst_util.m"
                MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 0)));
#line 2290 "inst_util.m"
                MR_Word check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 2)));
#line 2290 "inst_util.m"
                MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 3)));
#line 2290 "inst_util.m"
                MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 4)));
#line 2290 "inst_util.m"
                MR_Word check_hlds__inst_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 5)));

#line 2294 "inst_util.m"
                if ((check_hlds__inst_util__AnyResults_15 == (MR_Integer) 2))
#line 2299 "inst_util.m"
                  {
#line 2299 "inst_util.m"
                    return check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
#line 2294 "inst_util.m"
                else
#line 2294 "inst_util.m"
                if ((check_hlds__inst_util__AnyResults_15 == (MR_Integer) 1))
#line 2296 "inst_util.m"
                  check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2294 "inst_util.m"
                else
#line 2293 "inst_util.m"
                  check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2290 "inst_util.m"
              }
#line 2285 "inst_util.m"
          }
#line 2282 "inst_util.m"
        else
#line 2282 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2321 "inst_util.m"
          {
#line 2321 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2321 "inst_util.m"
            MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2322 "inst_util.m"
            /* direct tailcall eliminated */
#line 2322 "inst_util.m"
            {
#line 2322 "inst_util.m"
              MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2322 "inst_util.m"
              check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2322 "inst_util.m"
            }
#line 2322 "inst_util.m"
            continue;
#line 2321 "inst_util.m"
          }
#line 2282 "inst_util.m"
        else
#line 2282 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2311 "inst_util.m"
          {
#line 2311 "inst_util.m"
            MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2312 "inst_util.m"
            {
#line 2312 "inst_util.m"
              check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
            }
#line 2314 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2313 "inst_util.m"
              check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2314 "inst_util.m"
            else
#line 2315 "inst_util.m"
              {
#line 2315 "inst_util.m"
                MR_Word check_hlds__inst_util__SubInst_22;
#line 2315 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2315 "inst_util.m"
                {
#line 2315 "inst_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                }
#line 2316 "inst_util.m"
                {
#line 2316 "inst_util.m"
                  check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                }
#line 2317 "inst_util.m"
                /* direct tailcall eliminated */
#line 2317 "inst_util.m"
                {
#line 2317 "inst_util.m"
                  MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2317 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2317 "inst_util.m"
                  check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2317 "inst_util.m"
                  check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2317 "inst_util.m"
                }
#line 2317 "inst_util.m"
                continue;
#line 2315 "inst_util.m"
              }
#line 2311 "inst_util.m"
          }
#line 2282 "inst_util.m"
        else
#line 2282 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2308 "inst_util.m"
          {
#line 2309 "inst_util.m"
            {
#line 2309 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
            }
#line 2308 "inst_util.m"
          }
#line 2282 "inst_util.m"
        else
#line 2330 "inst_util.m"
          check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2282 "inst_util.m"
        return check_hlds__inst_util__ContainsAny_8;
#line 2282 "inst_util.m"
      }
#line 2282 "inst_util.m"
      break;
#line 2282 "inst_util.m"
    }
#line 2278 "inst_util.m"
}

#line 2234 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2234 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2234 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2234 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2234 "inst_util.m"
{
#line 2238 "inst_util.m"
  while (MR_TRUE)
#line 2238 "inst_util.m"
    {
#line 2238 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2238 "inst_util.m"
      {
#line 2238 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2238 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2238 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2238 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2238 "inst_util.m"
        else
#line 2240 "inst_util.m"
          {
#line 2240 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2240 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2240 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2240 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_14;
#line 2241 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2242 "inst_util.m"
            {
#line 2242 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_14 = check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2247 "inst_util.m"
            if ((check_hlds__inst_util__HeadContainsNonstd_14 == (MR_Integer) 0))
#line 2249 "inst_util.m"
              {
#line 2249 "inst_util.m"
                /* direct tailcall eliminated */
#line 2249 "inst_util.m"
                {
#line 2249 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2249 "inst_util.m"
                  check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2249 "inst_util.m"
                }
#line 2249 "inst_util.m"
                continue;
#line 2249 "inst_util.m"
              }
#line 2247 "inst_util.m"
            else
#line 2246 "inst_util.m"
              check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2240 "inst_util.m"
          }
#line 2238 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2238 "inst_util.m"
      }
#line 2238 "inst_util.m"
      break;
#line 2238 "inst_util.m"
    }
#line 2234 "inst_util.m"
}

#line 2217 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2217 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2217 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2217 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2217 "inst_util.m"
{
#line 2220 "inst_util.m"
  while (MR_TRUE)
#line 2220 "inst_util.m"
    {
#line 2220 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2220 "inst_util.m"
      {
#line 2220 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2220 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2220 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2220 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2220 "inst_util.m"
        else
#line 2222 "inst_util.m"
          {
#line 2222 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2222 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2222 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_12;

#line 2223 "inst_util.m"
            {
#line 2223 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_12 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2228 "inst_util.m"
            if ((check_hlds__inst_util__HeadContainsNonstd_12 == (MR_Integer) 0))
#line 2230 "inst_util.m"
              {
#line 2230 "inst_util.m"
                /* direct tailcall eliminated */
#line 2230 "inst_util.m"
                {
#line 2230 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2230 "inst_util.m"
                  check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2230 "inst_util.m"
                }
#line 2230 "inst_util.m"
                continue;
#line 2230 "inst_util.m"
              }
#line 2228 "inst_util.m"
            else
#line 2227 "inst_util.m"
              check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2222 "inst_util.m"
          }
#line 2220 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2220 "inst_util.m"
      }
#line 2220 "inst_util.m"
      break;
#line 2220 "inst_util.m"
    }
#line 2217 "inst_util.m"
}

#line 2161 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2161 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2161 "inst_util.m"
{
#line 2167 "inst_util.m"
  while (MR_TRUE)
#line 2167 "inst_util.m"
    {
#line 2167 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2167 "inst_util.m"
      {
#line 2167 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2167 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsNonstd_8;

#line 2167 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 2214 "inst_util.m"
          check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2167 "inst_util.m"
        else
#line 2167 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2174 "inst_util.m"
          {
#line 2174 "inst_util.m"
            MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2174 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2174 "inst_util.m"
            MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2178 "inst_util.m"
            if ((check_hlds__inst_util__InstResults_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2177 "inst_util.m"
              check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2178 "inst_util.m"
            else
#line 2182 "inst_util.m"
              {
#line 2182 "inst_util.m"
                return check_hlds__inst_util__ContainsNonstd_8 = check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
              }
#line 2174 "inst_util.m"
          }
#line 2167 "inst_util.m"
        else
#line 2167 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2199 "inst_util.m"
          {
#line 2199 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2199 "inst_util.m"
            MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2200 "inst_util.m"
            /* direct tailcall eliminated */
#line 2200 "inst_util.m"
            {
#line 2200 "inst_util.m"
              MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2200 "inst_util.m"
              check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2200 "inst_util.m"
            }
#line 2200 "inst_util.m"
            continue;
#line 2199 "inst_util.m"
          }
#line 2167 "inst_util.m"
        else
#line 2167 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2189 "inst_util.m"
          {
#line 2189 "inst_util.m"
            MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2190 "inst_util.m"
            {
#line 2190 "inst_util.m"
              check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
            }
#line 2192 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2191 "inst_util.m"
              check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2192 "inst_util.m"
            else
#line 2193 "inst_util.m"
              {
#line 2193 "inst_util.m"
                MR_Word check_hlds__inst_util__SubInst_22;
#line 2193 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2193 "inst_util.m"
                {
#line 2193 "inst_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                }
#line 2194 "inst_util.m"
                {
#line 2194 "inst_util.m"
                  check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                }
#line 2195 "inst_util.m"
                /* direct tailcall eliminated */
#line 2195 "inst_util.m"
                {
#line 2195 "inst_util.m"
                  MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2195 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2195 "inst_util.m"
                  check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2195 "inst_util.m"
                  check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2195 "inst_util.m"
                }
#line 2195 "inst_util.m"
                continue;
#line 2193 "inst_util.m"
              }
#line 2189 "inst_util.m"
          }
#line 2167 "inst_util.m"
        else
#line 2167 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2167 "inst_util.m"
          {
#line 2167 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2167 "inst_util.m"
            MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2168 "inst_util.m"
            {
#line 2168 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__HOInstInfo_10);
            }
#line 2170 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2169 "inst_util.m"
              check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 1;
#line 2170 "inst_util.m"
            else
#line 2171 "inst_util.m"
              check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2167 "inst_util.m"
          }
#line 2167 "inst_util.m"
        else
#line 2167 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2186 "inst_util.m"
          {
#line 2187 "inst_util.m"
            {
#line 2187 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_nonstandard_func_mode_2\'/3", (MR_String) "uninstantiated inst parameter");
            }
#line 2186 "inst_util.m"
          }
#line 2167 "inst_util.m"
        else
#line 2208 "inst_util.m"
          check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2167 "inst_util.m"
        return check_hlds__inst_util__ContainsNonstd_8;
#line 2167 "inst_util.m"
      }
#line 2167 "inst_util.m"
      break;
#line 2167 "inst_util.m"
    }
#line 2161 "inst_util.m"
}

#line 2117 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2117 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2117 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2117 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2117 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2117 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2117 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27)
#line 2117 "inst_util.m"
{
#line 2124 "inst_util.m"
  {
#line 2124 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2124 "inst_util.m"
    if ((check_hlds__inst_util__BoundInstsA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2124 "inst_util.m"
      {
#line 2125 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsB_8;
#line 2124 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2124 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2124 "inst_util.m"
      }
#line 2124 "inst_util.m"
    else
#line 2124 "inst_util.m"
      {
#line 2124 "inst_util.m"
        MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 1)));
#line 2124 "inst_util.m"
        MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 0)));

#line 2124 "inst_util.m"
        if ((check_hlds__inst_util__BoundInstsB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2127 "inst_util.m"
          {
#line 2129 "inst_util.m"
            *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsA_7;
#line 2127 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2127 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2127 "inst_util.m"
          }
#line 2124 "inst_util.m"
        else
#line 2131 "inst_util.m"
          {
#line 2131 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 0)));
#line 2131 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsTailB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 1)));
#line 2131 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 0)));
#line 2131 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 1)));
#line 2131 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 0)));
#line 2131 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 1)));

#line 2135 "inst_util.m"
            {
#line 2135 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
            }
#line 2143 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2137 "inst_util.m"
              {
#line 2137 "inst_util.m"
                MR_Word check_hlds__inst_util__MaybeTypes_22;
#line 2137 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_23;
#line 2137 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInst_24;
#line 2137 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_25;
#line 2137 "inst_util.m"
                MR_Integer check_hlds__inst_util__V_28_28;
#line 2137 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29;

#line 2137 "inst_util.m"
                {
#line 2137 "inst_util.m"
                  check_hlds__inst_util__V_28_28 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_util__ArgsA_19);
                }
#line 2136 "inst_util.m"
                {
#line 2136 "inst_util.m"
                  check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__V_28_28, &check_hlds__inst_util__MaybeTypes_22);
                }
#line 2138 "inst_util.m"
                {
#line 2138 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_19, check_hlds__inst_util__ArgsB_21, check_hlds__inst_util__MaybeTypes_22, &check_hlds__inst_util__Args_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 2137 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2137 "inst_util.m"
                  {
#line 2139 "inst_util.m"
                    {
#line 2139 "inst_util.m"
                      check_hlds__inst_util__BoundInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2139 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_18));
#line 2139 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 1) = ((MR_Box) (check_hlds__inst_util__Args_23));
#line 2139 "inst_util.m"
                    }
#line 2140 "inst_util.m"
                    {
#line 2140 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2137 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2137 "inst_util.m"
                      {
#line 2142 "inst_util.m"
                        {
#line 2142 "inst_util.m"
                          MR_Word base;
#line 2142 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2142 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_24));
#line 2142 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_25));
#line 2142 "inst_util.m"
                        }
#line 2142 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2137 "inst_util.m"
                      }
#line 2137 "inst_util.m"
                  }
#line 2137 "inst_util.m"
              }
#line 2143 "inst_util.m"
            else
#line 2147 "inst_util.m"
              {
#line 2143 "inst_util.m"
                MR_Word check_hlds__inst_util__V_39_39;

#line 2143 "inst_util.m"
                {
#line 2143 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_39_39, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
                }
#line 2143 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_39_39);
#line 2147 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2145 "inst_util.m"
                  {
#line 2145 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_34;

#line 2144 "inst_util.m"
                    {
#line 2144 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2145 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2145 "inst_util.m"
                      {
#line 2146 "inst_util.m"
                        {
#line 2146 "inst_util.m"
                          MR_Word base;
#line 2146 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2146 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2146 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_41_41));
#line 2146 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_34));
#line 2146 "inst_util.m"
                        }
#line 2146 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2145 "inst_util.m"
                      }
#line 2145 "inst_util.m"
                  }
#line 2147 "inst_util.m"
                else
#line 2149 "inst_util.m"
                  {
#line 2149 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_35;

#line 2148 "inst_util.m"
                    {
#line 2148 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__BoundInstsA_7, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2149 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2149 "inst_util.m"
                      {
#line 2150 "inst_util.m"
                        {
#line 2150 "inst_util.m"
                          MR_Word base;
#line 2150 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2150 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2150 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInstB_16));
#line 2150 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_35));
#line 2150 "inst_util.m"
                        }
#line 2150 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2149 "inst_util.m"
                      }
#line 2149 "inst_util.m"
                  }
#line 2147 "inst_util.m"
              }
#line 2131 "inst_util.m"
          }
#line 2124 "inst_util.m"
      }
#line 2124 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2124 "inst_util.m"
  }
#line 2117 "inst_util.m"
}

#line 2100 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2100 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2100 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2100 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2100 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2100 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2100 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6)
#line 2100 "inst_util.m"
{
#line 2104 "inst_util.m"
  {
#line 2104 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2104 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2104 "inst_util.m"
      {
#line 2104 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2104 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2104 "inst_util.m"
          {
#line 2104 "inst_util.m"
            *check_hlds__inst_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2104 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 2104 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2104 "inst_util.m"
          }
#line 2104 "inst_util.m"
      }
#line 2104 "inst_util.m"
    else
#line 2106 "inst_util.m"
      {
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgB_13;
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsB_14;
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeType_15;
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeTypes_16;
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__Arg_17;
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__Args_18;
#line 2106 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22;

#line 2105 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2105 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2105 "inst_util.m"
          {
#line 2105 "inst_util.m"
            check_hlds__inst_util__ArgB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2105 "inst_util.m"
            check_hlds__inst_util__ArgsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2105 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 2105 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2105 "inst_util.m"
              {
#line 2105 "inst_util.m"
                check_hlds__inst_util__MaybeType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 2105 "inst_util.m"
                check_hlds__inst_util__MaybeTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 2107 "inst_util.m"
                {
#line 2107 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__ArgA_11, check_hlds__inst_util__ArgB_13, check_hlds__inst_util__MaybeType_15, &check_hlds__inst_util__Arg_17, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22);
                }
#line 2106 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2106 "inst_util.m"
                  {
#line 2108 "inst_util.m"
                    {
#line 2108 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_12, check_hlds__inst_util__ArgsB_14, check_hlds__inst_util__MaybeTypes_16, &check_hlds__inst_util__Args_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);
                    }
#line 2106 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2106 "inst_util.m"
                      {
#line 2106 "inst_util.m"
                        {
#line 2106 "inst_util.m"
                          MR_Word base;
#line 2106 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2106 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__4_4 = base;
#line 2106 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Arg_17));
#line 2106 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Args_18));
#line 2106 "inst_util.m"
                        }
#line 2106 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2106 "inst_util.m"
                      }
#line 2106 "inst_util.m"
                  }
#line 2105 "inst_util.m"
              }
#line 2105 "inst_util.m"
          }
#line 2106 "inst_util.m"
      }
#line 2104 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2104 "inst_util.m"
  }
#line 2100 "inst_util.m"
}

#line 2056 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2056 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2056 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2056 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26)
#line 2056 "inst_util.m"
{
#line 2068 "inst_util.m"
  {
#line 2068 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2063 "inst_util.m"
    {
#line 2063 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
    }
#line 2068 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2066 "inst_util.m"
      {
#line 2066 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_16;
#line 2066 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_51;
#line 2066 "inst_util.m"
        MR_Word check_hlds__inst_util__Expansions0_52;
#line 1990 "inst_util.m"
        MR_Word check_hlds__inst_util___Expansions_53;

#line 1947 "inst_util.m"
        {
#line 1947 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
        }
#line 1949 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqA_9;
#line 1949 "inst_util.m"
        else
#line 1950 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqB_12;
#line 1989 "inst_util.m"
        {
#line 1989 "inst_util.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_52);
        }
#line 1990 "inst_util.m"
        {
#line 1990 "inst_util.m"
          check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_51, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_52, &check_hlds__inst_util___Expansions_53, &check_hlds__inst_util__Uniq_16);
        }
#line 2067 "inst_util.m"
        {
#line 2067 "inst_util.m"
          MR_Word base;
#line 2067 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2067 "inst_util.m"
          *check_hlds__inst_util__Result_14 = base;
#line 2067 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2067 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_16));
#line 2067 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2067 "inst_util.m"
        }
#line 2066 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2066 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2066 "inst_util.m"
      }
#line 2068 "inst_util.m"
    else
#line 2070 "inst_util.m"
      {
#line 2069 "inst_util.m"
        {
#line 2069 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
        }
#line 2070 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2091 "inst_util.m"
          {
#line 2091 "inst_util.m"
            if ((check_hlds__inst_util__MaybeType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2092 "inst_util.m"
              {
#line 2092 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_39;
#line 2092 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq0_63;
#line 2092 "inst_util.m"
                MR_Word check_hlds__inst_util__Expansions0_64;
#line 1990 "inst_util.m"
                MR_Word check_hlds__inst_util___Expansions_65;

#line 1947 "inst_util.m"
                {
#line 1947 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
                }
#line 1949 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqA_9;
#line 1949 "inst_util.m"
                else
#line 1950 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqB_12;
#line 1989 "inst_util.m"
                {
#line 1989 "inst_util.m"
                  mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_64);
                }
#line 1990 "inst_util.m"
                {
#line 1990 "inst_util.m"
                  check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_64, &check_hlds__inst_util___Expansions_65, &check_hlds__inst_util__Uniq_39);
                }
#line 2094 "inst_util.m"
                {
#line 2094 "inst_util.m"
                  MR_Word base;
#line 2094 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2094 "inst_util.m"
                  *check_hlds__inst_util__Result_14 = base;
#line 2094 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_39));
#line 2094 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2094 "inst_util.m"
                }
#line 2092 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2092 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2092 "inst_util.m"
              }
#line 2091 "inst_util.m"
            else
#line 2074 "inst_util.m"
              {
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_42_42;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_43_43;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_44_44;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_45_45;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeType_13, (MR_Integer) 0)));
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__Constructors_18;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtor_19;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB0_20;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB_21;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__InstResultsB_22;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__InstA_23;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__InstB_24;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_31_31;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_34_34;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_35_35;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_36_36;
#line 2074 "inst_util.m"
                MR_Word check_hlds__inst_util__V_37_37;

#line 2075 "inst_util.m"
                {
#line 2075 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Type_17, &check_hlds__inst_util__Constructors_18);
                }
#line 2074 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2074 "inst_util.m"
                  {
#line 2076 "inst_util.m"
                    {
#line 2076 "inst_util.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_util__Type_17, &check_hlds__inst_util__TypeCtor_19);
                    }
#line 2077 "inst_util.m"
                    {
#line 2077 "inst_util.m"
                      check_hlds__mode_util__constructors_to_bound_insts_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__UniqB_12, check_hlds__inst_util__TypeCtor_19, check_hlds__inst_util__Constructors_18, &check_hlds__inst_util__BoundInstsB0_20);
                    }
#line 2225 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 2079 "inst_util.m"
                    {
#line 2079 "inst_util.m"
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__inst_util__TypeCtorInfo_42_42, check_hlds__inst_util__BoundInstsB0_20, &check_hlds__inst_util__BoundInstsB_21);
                    }
#line 2081 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = (MR_Integer) 1;
#line 2082 "inst_util.m"
                    check_hlds__inst_util__V_30_30 = (MR_Integer) 0;
#line 2236 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 2083 "inst_util.m"
                    {
#line 2083 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_43_43);
                    }
#line 2243 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_44_44 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 2083 "inst_util.m"
                    {
#line 2083 "inst_util.m"
                      check_hlds__inst_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_31_31, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 2083 "inst_util.m"
                    }
#line 2084 "inst_util.m"
                    {
#line 2084 "inst_util.m"
                      check_hlds__inst_util__V_34_34 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeInfo_44_44);
                    }
#line 2258 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 2084 "inst_util.m"
                    {
#line 2084 "inst_util.m"
                      check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_33_33, 0) = ((MR_Box) (check_hlds__inst_util__V_34_34));
#line 2084 "inst_util.m"
                    }
#line 2085 "inst_util.m"
                    {
#line 2085 "inst_util.m"
                      check_hlds__inst_util__V_36_36 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_45_45);
                    }
#line 2085 "inst_util.m"
                    {
#line 2085 "inst_util.m"
                      check_hlds__inst_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_35_35, 0) = ((MR_Box) (check_hlds__inst_util__V_36_36));
#line 2085 "inst_util.m"
                    }
#line 2086 "inst_util.m"
                    check_hlds__inst_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_util__TypeCtor_19);
#line 2080 "inst_util.m"
                    {
#line 2080 "inst_util.m"
                      check_hlds__inst_util__InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 0) = ((MR_Box) (check_hlds__inst_util__V_29_29));
#line 2080 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 1) = ((MR_Box) (check_hlds__inst_util__V_30_30));
#line 2080 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 2) = ((MR_Box) (check_hlds__inst_util__V_31_31));
#line 2080 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 3) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 2080 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 4) = ((MR_Box) (check_hlds__inst_util__V_35_35));
#line 2080 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 5) = ((MR_Box) (check_hlds__inst_util__V_37_37));
#line 2080 "inst_util.m"
                    }
#line 2088 "inst_util.m"
                    {
#line 2088 "inst_util.m"
                      check_hlds__inst_util__InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2088 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2088 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_9));
#line 2088 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_10));
#line 2088 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsA_11));
#line 2088 "inst_util.m"
                    }
#line 2089 "inst_util.m"
                    {
#line 2089 "inst_util.m"
                      check_hlds__inst_util__InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2089 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2089 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 1) = ((MR_Box) (check_hlds__inst_util__UniqB_12));
#line 2089 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_22));
#line 2089 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsB_21));
#line 2089 "inst_util.m"
                    }
#line 2090 "inst_util.m"
                    {
#line 2090 "inst_util.m"
                      return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_23, check_hlds__inst_util__InstB_24, check_hlds__inst_util__MaybeType_13, check_hlds__inst_util__Result_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);
                    }
#line 2074 "inst_util.m"
                  }
#line 2074 "inst_util.m"
              }
#line 2091 "inst_util.m"
          }
#line 2070 "inst_util.m"
      }
#line 2068 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2068 "inst_util.m"
  }
#line 2056 "inst_util.m"
}

#line 2014 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2014 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2014 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2014 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2014 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2014 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2014 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11)
#line 2014 "inst_util.m"
{
#line 2022 "inst_util.m"
  while (MR_TRUE)
#line 2022 "inst_util.m"
    {
#line 2022 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2022 "inst_util.m"
      {
#line 2022 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2022 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 2))))
#line 2027 "inst_util.m"
          {
#line 2027 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));
#line 2026 "inst_util.m"
            MR_Word check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1947 "inst_util.m"
            {
#line 1947 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_13, check_hlds__inst_util__UniqB_8);
            }
#line 1949 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1949 "inst_util.m"
            else
#line 1950 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_13;
#line 2027 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2027 "inst_util.m"
          }
#line 2022 "inst_util.m"
        else
#line 2022 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2030 "inst_util.m"
          {
#line 1947 "inst_util.m"
            {
#line 1947 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_8);
            }
#line 1949 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1949 "inst_util.m"
            else
#line 1950 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 2030 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2030 "inst_util.m"
          }
#line 2022 "inst_util.m"
        else
#line 2022 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2033 "inst_util.m"
          {
#line 2033 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 2033 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq0_20;
#line 2033 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2033 "inst_util.m"
            MR_Word check_hlds__inst_util___InstResultsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1947 "inst_util.m"
            {
#line 1947 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_36, check_hlds__inst_util__UniqB_8);
            }
#line 1949 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
              check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqB_8;
#line 1949 "inst_util.m"
            else
#line 1950 "inst_util.m"
              check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqA_36;
#line 2035 "inst_util.m"
            {
#line 2035 "inst_util.m"
              check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_19, check_hlds__inst_util__Uniq0_20, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_util__STATE_VARIABLE_Expansions_27, check_hlds__inst_util__Uniq_11);
#line 2035 "inst_util.m"
              return;
            }
#line 2033 "inst_util.m"
          }
#line 2022 "inst_util.m"
        else
#line 2022 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2050 "inst_util.m"
          {
#line 2050 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInstA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 2050 "inst_util.m"
            MR_Word check_hlds__inst_util___InstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2051 "inst_util.m"
            /* direct tailcall eliminated */
#line 2051 "inst_util.m"
            {
#line 2051 "inst_util.m"
              MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__SubInstA_25;

#line 2051 "inst_util.m"
              check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2051 "inst_util.m"
            }
#line 2051 "inst_util.m"
            continue;
#line 2050 "inst_util.m"
          }
#line 2022 "inst_util.m"
        else
#line 2022 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2038 "inst_util.m"
          {
#line 2038 "inst_util.m"
            MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2039 "inst_util.m"
            {
#line 2039 "inst_util.m"
              check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26);
            }
#line 2041 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2040 "inst_util.m"
              {
#line 2040 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2040 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2040 "inst_util.m"
              }
#line 2041 "inst_util.m"
            else
#line 2042 "inst_util.m"
              {
#line 2042 "inst_util.m"
                MR_Word check_hlds__inst_util__Inst_22;
#line 2042 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2042 "inst_util.m"
                {
#line 2042 "inst_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32);
                }
#line 2043 "inst_util.m"
                {
#line 2043 "inst_util.m"
                  check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__Inst_22);
                }
#line 2044 "inst_util.m"
                /* direct tailcall eliminated */
#line 2044 "inst_util.m"
                {
#line 2044 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__Inst_22;
#line 2044 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2044 "inst_util.m"
                  check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26;
#line 2044 "inst_util.m"
                  check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2044 "inst_util.m"
                }
#line 2044 "inst_util.m"
                continue;
#line 2042 "inst_util.m"
              }
#line 2038 "inst_util.m"
          }
#line 2022 "inst_util.m"
        else
#line 2022 "inst_util.m"
        if ((((((check_hlds__inst_util__InstA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 1)))))) || ((check_hlds__inst_util__InstA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 2022 "inst_util.m"
          {
#line 2023 "inst_util.m"
            *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2022 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2022 "inst_util.m"
          }
#line 2022 "inst_util.m"
        else
#line 2022 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2027 "inst_util.m"
          {
#line 2027 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2025 "inst_util.m"
            MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1947 "inst_util.m"
            {
#line 1947 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_39, check_hlds__inst_util__UniqB_8);
            }
#line 1949 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1949 "inst_util.m"
            else
#line 1950 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_39;
#line 2027 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2027 "inst_util.m"
          }
#line 2022 "inst_util.m"
        else
#line 2047 "inst_util.m"
          {
#line 2048 "inst_util.m"
            {
#line 2048 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", (MR_String) "inst_var");
#line 2048 "inst_util.m"
              return;
            }
#line 2047 "inst_util.m"
          }
#line 2022 "inst_util.m"
      }
#line 2022 "inst_util.m"
      break;
#line 2022 "inst_util.m"
    }
#line 2014 "inst_util.m"
}

#line 2005 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2005 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2005 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2005 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2005 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2005 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2005 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 2005 "inst_util.m"
{
#line 2009 "inst_util.m"
  while (MR_TRUE)
#line 2009 "inst_util.m"
    {
#line 2009 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2009 "inst_util.m"
      {
#line 2009 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2009 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2009 "inst_util.m"
          {
#line 2009 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 2009 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 2009 "inst_util.m"
          }
#line 2009 "inst_util.m"
        else
#line 2010 "inst_util.m"
          {
#line 2010 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2010 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2010 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_18;
#line 2010 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2011 "inst_util.m"
            {
#line 2011 "inst_util.m"
              check_hlds__inst_util__merge_inst_uniq_6_p_0(check_hlds__inst_util__Inst_12, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21, &check_hlds__inst_util__Uniq1_18);
            }
#line 2012 "inst_util.m"
            /* direct tailcall eliminated */
#line 2012 "inst_util.m"
            {
#line 2012 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__Insts_13;
#line 2012 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_18;
#line 2012 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2012 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2012 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2012 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2012 "inst_util.m"
            }
#line 2012 "inst_util.m"
            continue;
#line 2010 "inst_util.m"
          }
#line 2009 "inst_util.m"
      }
#line 2009 "inst_util.m"
      break;
#line 2009 "inst_util.m"
    }
#line 2005 "inst_util.m"
}

#line 1993 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 1993 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1993 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1993 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 1993 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 1993 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 1993 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 1993 "inst_util.m"
{
#line 1997 "inst_util.m"
  while (MR_TRUE)
#line 1997 "inst_util.m"
    {
#line 1997 "inst_util.m"
      /* tailcall optimized into a loop */
#line 1997 "inst_util.m"
      {
#line 1997 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 1997 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1997 "inst_util.m"
          {
#line 1997 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 1997 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 1997 "inst_util.m"
          }
#line 1997 "inst_util.m"
        else
#line 1999 "inst_util.m"
          {
#line 1999 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1999 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1999 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 1)));
#line 1999 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_20;
#line 1999 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;
#line 2000 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 0)));

#line 2001 "inst_util.m"
            {
#line 2001 "inst_util.m"
              check_hlds__inst_util__merge_inst_list_uniq_6_p_0(check_hlds__inst_util__ArgInsts_19, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23, &check_hlds__inst_util__Uniq1_20);
            }
#line 2002 "inst_util.m"
            /* direct tailcall eliminated */
#line 2002 "inst_util.m"
            {
#line 2002 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInsts_13;
#line 2002 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_20;
#line 2002 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;

#line 2002 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2002 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2002 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2002 "inst_util.m"
            }
#line 2002 "inst_util.m"
            continue;
#line 1999 "inst_util.m"
          }
#line 1997 "inst_util.m"
      }
#line 1997 "inst_util.m"
      break;
#line 1997 "inst_util.m"
    }
#line 1993 "inst_util.m"
}

#line 1984 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 1984 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 1984 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 1984 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 1984 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 1984 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10)
#line 1984 "inst_util.m"
{
#line 1987 "inst_util.m"
  {
#line 1987 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1987 "inst_util.m"
    MR_Word check_hlds__inst_util__Uniq0_11;
#line 1987 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_12;
#line 1990 "inst_util.m"
    MR_Word check_hlds__inst_util___Expansions_13;

#line 1947 "inst_util.m"
    {
#line 1947 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_6, check_hlds__inst_util__UniqB_7);
    }
#line 1949 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqB_7;
#line 1949 "inst_util.m"
    else
#line 1950 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqA_6;
#line 1989 "inst_util.m"
    {
#line 1989 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_12);
    }
#line 1990 "inst_util.m"
    {
#line 1990 "inst_util.m"
      check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__Uniq0_11, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__Expansions0_12, &check_hlds__inst_util___Expansions_13, check_hlds__inst_util__Uniq_10);
    }
#line 1987 "inst_util.m"
  }
#line 1984 "inst_util.m"
}

#line 1953 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1953 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1953 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1953 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1953 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1953 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13)
#line 1953 "inst_util.m"
{
#line 1956 "inst_util.m"
  {
#line 1956 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1975 "inst_util.m"
    MR_Word check_hlds__inst_util__PredA_10;
#line 1975 "inst_util.m"
    MR_Word check_hlds__inst_util__PredB_11;

#line 1958 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1958 "inst_util.m"
      {
#line 1958 "inst_util.m"
        check_hlds__inst_util__PredA_10 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoA_6), (MR_Integer) 1);
#line 1959 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoB_7)) == (MR_mktag((MR_Integer) 1)));
#line 1959 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1959 "inst_util.m"
          check_hlds__inst_util__PredB_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoB_7), (MR_Integer) 1);
#line 1958 "inst_util.m"
      }
#line 1975 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1966 "inst_util.m"
      {
#line 1964 "inst_util.m"
        {
#line 1964 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__PredB_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
        }
#line 1966 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1965 "inst_util.m"
          {
#line 1965 "inst_util.m"
            *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoB_7;
#line 1965 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1965 "inst_util.m"
          }
#line 1966 "inst_util.m"
        else
#line 1968 "inst_util.m"
          {
#line 1966 "inst_util.m"
            {
#line 1966 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__PredA_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
            }
#line 1968 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1967 "inst_util.m"
              {
#line 1967 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoA_6;
#line 1967 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1967 "inst_util.m"
              }
#line 1968 "inst_util.m"
            else
#line 1971 "inst_util.m"
              {
#line 2255 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_22;
#line 2255 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 1)));
#line 2255 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_19;
#line 2255 "inst_util.m"
                MR_Word check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 0)));
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 2)));
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 3)));
#line 2258 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;
#line 2255 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_31;
#line 2255 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_25;
#line 2255 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_28;
#line 2255 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__V_26_26;
#line 2256 "inst_util.m"
                MR_Word check_hlds__inst_util__V_27_27;
#line 2258 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;

#line 2256 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_20_20 == (MR_Integer) 1);
#line 2255 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2255 "inst_util.m"
                  {
#line 2964 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_11_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2257 "inst_util.m"
                    {
#line 2257 "inst_util.m"
                      check_hlds__inst_util__Arity_19 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_22, check_hlds__inst_util__ArgModes_16);
                    }
#line 2259 "inst_util.m"
                    {
#line 2259 "inst_util.m"
                      check_hlds__inst_util__V_21_21 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_19);
                    }
#line 2258 "inst_util.m"
                    {
#line 2258 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__V_21_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                    }
#line 2258 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2255 "inst_util.m"
                  }
#line 1971 "inst_util.m"
                check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1971 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1971 "inst_util.m"
                  {
#line 2256 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 0)));
#line 2256 "inst_util.m"
                    check_hlds__inst_util__ArgModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 1)));
#line 2256 "inst_util.m"
                    check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 2)));
#line 2256 "inst_util.m"
                    check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 3)));
#line 2256 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == (MR_Integer) 1);
#line 2255 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2255 "inst_util.m"
                      {
#line 3005 "check_hlds.inst_util.c"
                        check_hlds__inst_util__TypeCtorInfo_11_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2257 "inst_util.m"
                        {
#line 2257 "inst_util.m"
                          check_hlds__inst_util__Arity_28 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_31, check_hlds__inst_util__ArgModes_25);
                        }
#line 2259 "inst_util.m"
                        {
#line 2259 "inst_util.m"
                          check_hlds__inst_util__V_30_30 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_28);
                        }
#line 2258 "inst_util.m"
                        {
#line 2258 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__V_30_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                        }
#line 2258 "inst_util.m"
                        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2255 "inst_util.m"
                      }
#line 1972 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1971 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1971 "inst_util.m"
                      {
#line 1973 "inst_util.m"
                        *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1973 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1971 "inst_util.m"
                      }
#line 1971 "inst_util.m"
                  }
#line 1971 "inst_util.m"
              }
#line 1968 "inst_util.m"
          }
#line 1966 "inst_util.m"
      }
#line 1975 "inst_util.m"
    else
#line 1976 "inst_util.m"
      {
#line 1976 "inst_util.m"
        {
#line 1976 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoA_6);
        }
#line 1976 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1976 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1976 "inst_util.m"
          {
#line 1977 "inst_util.m"
            {
#line 1977 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoB_7);
            }
#line 1977 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1976 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1976 "inst_util.m"
              {
#line 1978 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1978 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1976 "inst_util.m"
              }
#line 1976 "inst_util.m"
          }
#line 1976 "inst_util.m"
      }
#line 1956 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1956 "inst_util.m"
      {
#line 1956 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12;
#line 1956 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1956 "inst_util.m"
      }
#line 1956 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1956 "inst_util.m"
  }
#line 1953 "inst_util.m"
}

#line 1944 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1944 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1944 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1944 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6)
#line 1944 "inst_util.m"
{
#line 1949 "inst_util.m"
  {
#line 1949 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1947 "inst_util.m"
    {
#line 1947 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_4, check_hlds__inst_util__UniqB_5);
    }
#line 1949 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1948 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqB_5;
#line 1949 "inst_util.m"
    else
#line 1950 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqA_4;
#line 1949 "inst_util.m"
  }
#line 1944 "inst_util.m"
}

#line 1816 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1816 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1816 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1816 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1816 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1816 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1816 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41)
#line 1816 "inst_util.m"
{
#line 1831 "inst_util.m"
  {
#line 1831 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1831 "inst_util.m"
    if ((check_hlds__inst_util__InstA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1831 "inst_util.m"
      if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1905 "inst_util.m"
        {
#line 1907 "inst_util.m"
          *check_hlds__inst_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1905 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1905 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1905 "inst_util.m"
        }
#line 1831 "inst_util.m"
      else
#line 1831 "inst_util.m"
      if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1871 "inst_util.m"
        {
#line 1871 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1872 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1875 "inst_util.m"
          if ((check_hlds__inst_util__Uniq_73 == (MR_Integer) 3))
#line 1875 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1875 "inst_util.m"
          else
#line 1875 "inst_util.m"
          if ((check_hlds__inst_util__Uniq_73 == (MR_Integer) 4))
#line 1875 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1875 "inst_util.m"
          else
#line 1875 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1871 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1871 "inst_util.m"
            {
#line 1876 "inst_util.m"
              *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstB_8;
#line 1871 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1871 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1871 "inst_util.m"
            }
#line 1871 "inst_util.m"
        }
#line 1831 "inst_util.m"
      else
#line 1831 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1831 "inst_util.m"
    else
#line 1831 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 2))))
#line 1831 "inst_util.m"
      {
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));

#line 1831 "inst_util.m"
        if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1837 "inst_util.m"
          {
#line 1841 "inst_util.m"
            if ((check_hlds__inst_util__V_110_110 == (MR_Integer) 3))
#line 1841 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1841 "inst_util.m"
            else
#line 1841 "inst_util.m"
            if ((check_hlds__inst_util__V_110_110 == (MR_Integer) 4))
#line 1841 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1841 "inst_util.m"
            else
#line 1841 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1837 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1837 "inst_util.m"
              {
#line 1842 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstA_7;
#line 1837 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1837 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1837 "inst_util.m"
              }
#line 1837 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1831 "inst_util.m"
          {
#line 1831 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1831 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfoB_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1831 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_16;
#line 1831 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_17;

#line 1833 "inst_util.m"
            {
#line 1833 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_15, &check_hlds__inst_util__HOInstInfo_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
            }
#line 1831 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1831 "inst_util.m"
              {
#line 1834 "inst_util.m"
                {
#line 1834 "inst_util.m"
                  check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_14, &check_hlds__inst_util__Uniq_17);
                }
#line 1835 "inst_util.m"
                {
#line 1835 "inst_util.m"
                  MR_Word base;
#line 1835 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1835 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_17));
#line 1835 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_16));
#line 1835 "inst_util.m"
                }
#line 1835 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1831 "inst_util.m"
              }
#line 1831 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1863 "inst_util.m"
          {
#line 1863 "inst_util.m"
            MR_Word check_hlds__inst_util__V_55_55;
#line 1863 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_71;

#line 1865 "inst_util.m"
            {
#line 1865 "inst_util.m"
              check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, (MR_Integer) 0, &check_hlds__inst_util__Uniq_71);
            }
#line 1868 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_71 == (MR_Integer) 3))
#line 1868 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1868 "inst_util.m"
            else
#line 1868 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_71 == (MR_Integer) 4))
#line 1868 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1868 "inst_util.m"
            else
#line 1868 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1863 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1863 "inst_util.m"
              {
#line 1869 "inst_util.m"
                check_hlds__inst_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1863 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1869 "inst_util.m"
                {
#line 1869 "inst_util.m"
                  MR_Word base;
#line 1869 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1869 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_71));
#line 1869 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_55_55));
#line 1869 "inst_util.m"
                }
#line 1869 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1863 "inst_util.m"
              }
#line 1863 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1844 "inst_util.m"
          {
#line 1844 "inst_util.m"
            MR_Word check_hlds__inst_util__InstResultsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1844 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1844 "inst_util.m"
            MR_Word check_hlds__inst_util__V_57_57;
#line 1844 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1844 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_63;

#line 1846 "inst_util.m"
            {
#line 1846 "inst_util.m"
              check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_62, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_63);
            }
#line 1849 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_63 == (MR_Integer) 3))
#line 1849 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1849 "inst_util.m"
            else
#line 1849 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_63 == (MR_Integer) 4))
#line 1849 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1849 "inst_util.m"
            else
#line 1849 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1851 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1850 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1851 "inst_util.m"
            else
#line 1852 "inst_util.m"
              {
#line 1852 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_19, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
              }
#line 1844 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1844 "inst_util.m"
              {
#line 1855 "inst_util.m"
                check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1844 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1855 "inst_util.m"
                {
#line 1855 "inst_util.m"
                  MR_Word base;
#line 1855 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1855 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_63));
#line 1855 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 1855 "inst_util.m"
                }
#line 1855 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1844 "inst_util.m"
              }
#line 1844 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1857 "inst_util.m"
          {
#line 1857 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1857 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfoB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1857 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_68;
#line 1857 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_69;

#line 1859 "inst_util.m"
            {
#line 1859 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_67, &check_hlds__inst_util__HOInstInfo_68, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
            }
#line 1857 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1857 "inst_util.m"
              {
#line 1860 "inst_util.m"
                {
#line 1860 "inst_util.m"
                  check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_66, &check_hlds__inst_util__Uniq_69);
                }
#line 1861 "inst_util.m"
                {
#line 1861 "inst_util.m"
                  MR_Word base;
#line 1861 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1861 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1861 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_68));
#line 1861 "inst_util.m"
                }
#line 1861 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1857 "inst_util.m"
              }
#line 1857 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_FALSE;
#line 1831 "inst_util.m"
      }
#line 1831 "inst_util.m"
    else
#line 1831 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1831 "inst_util.m"
      {
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1831 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1897 "inst_util.m"
          {
#line 1897 "inst_util.m"
            MR_Word check_hlds__inst_util__V_51_51;
#line 1897 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1897 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_84;
#line 1898 "inst_util.m"
            MR_Word check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1899 "inst_util.m"
            {
#line 1899 "inst_util.m"
              check_hlds__inst_util__merge_uniq_3_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_83, &check_hlds__inst_util__Uniq_84);
            }
#line 1902 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_84 == (MR_Integer) 3))
#line 1902 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1902 "inst_util.m"
            else
#line 1902 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_84 == (MR_Integer) 4))
#line 1902 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1902 "inst_util.m"
            else
#line 1902 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1897 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1897 "inst_util.m"
              {
#line 1903 "inst_util.m"
                check_hlds__inst_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1897 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1903 "inst_util.m"
                {
#line 1903 "inst_util.m"
                  MR_Word base;
#line 1903 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1903 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_84));
#line 1903 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 1903 "inst_util.m"
                }
#line 1903 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1897 "inst_util.m"
              }
#line 1897 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1933 "inst_util.m"
          {
#line 1933 "inst_util.m"
            MR_Word check_hlds__inst_util__TypeInfo_104_104;
#line 1933 "inst_util.m"
            MR_Word check_hlds__inst_util__TypeCtorInfo_105_105;
#line 1933 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1933 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeTypes_38;
#line 1933 "inst_util.m"
            MR_Word check_hlds__inst_util__Args_39;
#line 1933 "inst_util.m"
            MR_Integer check_hlds__inst_util__V_42_42;
#line 1933 "inst_util.m"
            MR_Word check_hlds__inst_util__V_43_43;
#line 1933 "inst_util.m"
            MR_Word check_hlds__inst_util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1934 "inst_util.m"
            {
#line 1934 "inst_util.m"
              check_hlds__inst_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_util__V_108_108, check_hlds__inst_util__V_106_106);
            }
#line 1933 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1933 "inst_util.m"
              {
#line 3595 "check_hlds.inst_util.c"
                check_hlds__inst_util__TypeInfo_104_104 = (MR_Word) &check_hlds__inst_util_scalar_common_1[1];
#line 3597 "check_hlds.inst_util.c"
                check_hlds__inst_util__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1936 "inst_util.m"
                {
#line 1936 "inst_util.m"
                  check_hlds__inst_util__V_42_42 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_105_105, check_hlds__inst_util__V_107_107);
                }
#line 1936 "inst_util.m"
                check_hlds__inst_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1936 "inst_util.m"
                {
#line 1936 "inst_util.m"
                  check_hlds__inst_util__MaybeTypes_38 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeInfo_104_104, check_hlds__inst_util__V_42_42, ((MR_Box) (check_hlds__inst_util__V_43_43)));
                }
#line 1937 "inst_util.m"
                {
#line 1937 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__V_107_107, check_hlds__inst_util__ArgsB_37, check_hlds__inst_util__MaybeTypes_38, &check_hlds__inst_util__Args_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1933 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1933 "inst_util.m"
                  {
#line 1938 "inst_util.m"
                    {
#line 1938 "inst_util.m"
                      MR_Word base;
#line 1938 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1938 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = base;
#line 1938 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1938 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_108_108));
#line 1938 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Args_39));
#line 1938 "inst_util.m"
                    }
#line 1938 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1933 "inst_util.m"
                  }
#line 1933 "inst_util.m"
              }
#line 1933 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_FALSE;
#line 1831 "inst_util.m"
      }
#line 1831 "inst_util.m"
    else
#line 1831 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1831 "inst_util.m"
      {
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1831 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1878 "inst_util.m"
          {
#line 1878 "inst_util.m"
            MR_Word check_hlds__inst_util__V_53_53;
#line 1878 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1878 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_76;
#line 1879 "inst_util.m"
            MR_Word check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1880 "inst_util.m"
            {
#line 1880 "inst_util.m"
              check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__UniqB_75, check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_76);
            }
#line 1883 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_76 == (MR_Integer) 3))
#line 1883 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1883 "inst_util.m"
            else
#line 1883 "inst_util.m"
            if ((check_hlds__inst_util__Uniq_76 == (MR_Integer) 4))
#line 1883 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1883 "inst_util.m"
            else
#line 1883 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1885 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1884 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1885 "inst_util.m"
            else
#line 1886 "inst_util.m"
              {
#line 1886 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
              }
#line 1878 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1878 "inst_util.m"
              {
#line 1889 "inst_util.m"
                check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1878 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1889 "inst_util.m"
                {
#line 1889 "inst_util.m"
                  MR_Word base;
#line 1889 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1889 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
#line 1889 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 1889 "inst_util.m"
                }
#line 1889 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1878 "inst_util.m"
              }
#line 1878 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1909 "inst_util.m"
          {
#line 1909 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_32;
#line 1909 "inst_util.m"
            MR_Word check_hlds__inst_util__V_49_49;
#line 1909 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1909 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_87;
#line 1909 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1910 "inst_util.m"
            MR_Word check_hlds__inst_util___InstResultsB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1911 "inst_util.m"
            {
#line 1911 "inst_util.m"
              check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__UniqB_86, &check_hlds__inst_util__Uniq_87);
            }
#line 1912 "inst_util.m"
            {
#line 1912 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_111_111, check_hlds__inst_util__BoundInstsB_88, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInsts_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
            }
#line 1909 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1909 "inst_util.m"
              {
#line 1915 "inst_util.m"
                check_hlds__inst_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1915 "inst_util.m"
                {
#line 1915 "inst_util.m"
                  MR_Word base;
#line 1915 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1915 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1915 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_87));
#line 1915 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_49_49));
#line 1915 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_32));
#line 1915 "inst_util.m"
                }
#line 1915 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1909 "inst_util.m"
              }
#line 1909 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1917 "inst_util.m"
          {
#line 1917 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1918 "inst_util.m"
            MR_Word check_hlds__inst_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1919 "inst_util.m"
            {
#line 1919 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__UniqB_91, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
            }
#line 1917 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_FALSE;
#line 1831 "inst_util.m"
      }
#line 1831 "inst_util.m"
    else
#line 1831 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1831 "inst_util.m"
      {
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1831 "inst_util.m"
        MR_Word check_hlds__inst_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1831 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1891 "inst_util.m"
          {
#line 1891 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1891 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfoB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1891 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_81;
#line 1891 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_82;

#line 1893 "inst_util.m"
            {
#line 1893 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_80, &check_hlds__inst_util__HOInstInfo_81, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
            }
#line 1891 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1891 "inst_util.m"
              {
#line 1894 "inst_util.m"
                {
#line 1894 "inst_util.m"
                  check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_79, &check_hlds__inst_util__Uniq_82);
                }
#line 1895 "inst_util.m"
                {
#line 1895 "inst_util.m"
                  MR_Word base;
#line 1895 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1895 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_82));
#line 1895 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_81));
#line 1895 "inst_util.m"
                }
#line 1895 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1891 "inst_util.m"
              }
#line 1891 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1922 "inst_util.m"
          {
#line 1922 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1922 "inst_util.m"
            MR_Word check_hlds__inst_util__InstResultsB_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1922 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));

#line 1924 "inst_util.m"
            {
#line 1924 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__UniqB_95, check_hlds__inst_util__InstResultsB_96, check_hlds__inst_util__BoundInstsB_97, check_hlds__inst_util__V_115_115, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
            }
#line 1922 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1927 "inst_util.m"
          {
#line 1927 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1927 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfoB_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1927 "inst_util.m"
            MR_Word check_hlds__inst_util__HOInstInfo_102;
#line 1927 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_103;

#line 1929 "inst_util.m"
            {
#line 1929 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_101, &check_hlds__inst_util__HOInstInfo_102, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
            }
#line 1927 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1927 "inst_util.m"
              {
#line 1930 "inst_util.m"
                {
#line 1930 "inst_util.m"
                  check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_100, &check_hlds__inst_util__Uniq_103);
                }
#line 1931 "inst_util.m"
                {
#line 1931 "inst_util.m"
                  MR_Word base;
#line 1931 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1931 "inst_util.m"
                  *check_hlds__inst_util__Inst_10 = base;
#line 1931 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1931 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_103));
#line 1931 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_102));
#line 1931 "inst_util.m"
                }
#line 1931 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1927 "inst_util.m"
              }
#line 1927 "inst_util.m"
          }
#line 1831 "inst_util.m"
        else
#line 1831 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_FALSE;
#line 1831 "inst_util.m"
      }
#line 1831 "inst_util.m"
    else
#line 1831 "inst_util.m"
      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1831 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1831 "inst_util.m"
  }
#line 1816 "inst_util.m"
}

#line 1788 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1788 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1788 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1788 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1788 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1788 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1788 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20)
#line 1788 "inst_util.m"
{
#line 1808 "inst_util.m"
  {
#line 1808 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1808 "inst_util.m"
    MR_Word check_hlds__inst_util__InstVarsA_12;
#line 1808 "inst_util.m"
    MR_Word check_hlds__inst_util__SubInstA_13;

#line 1792 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1792 "inst_util.m"
      {
#line 1792 "inst_util.m"
        check_hlds__inst_util__InstVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1792 "inst_util.m"
        check_hlds__inst_util__SubInstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1805 "inst_util.m"
        {
#line 1805 "inst_util.m"
          MR_Word check_hlds__inst_util__InstVarsB_14;
#line 1805 "inst_util.m"
          MR_Word check_hlds__inst_util__SubInstB_15;

#line 1793 "inst_util.m"
          check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1793 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1793 "inst_util.m"
            {
#line 1793 "inst_util.m"
              check_hlds__inst_util__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1793 "inst_util.m"
              check_hlds__inst_util__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1794 "inst_util.m"
              {
#line 1794 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_26_26;
#line 1794 "inst_util.m"
                MR_Word check_hlds__inst_util__Inst0_16;
#line 1794 "inst_util.m"
                MR_Word check_hlds__inst_util__InstVars_17;

#line 1794 "inst_util.m"
                {
#line 1794 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__SubInstB_15, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
                }
#line 1794 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1794 "inst_util.m"
                  {
#line 4032 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_26_26 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 1795 "inst_util.m"
                    {
#line 1795 "inst_util.m"
                      mercury__set__intersect_3_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVarsA_12, check_hlds__inst_util__InstVarsB_14, &check_hlds__inst_util__InstVars_17);
                    }
#line 1796 "inst_util.m"
                    {
#line 1796 "inst_util.m"
                      check_hlds__inst_util__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVars_17);
                    }
#line 1802 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1797 "inst_util.m"
                      {
#line 1797 "inst_util.m"
                        MR_Word base;
#line 1797 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1797 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1797 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1797 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1797 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_16));
#line 1797 "inst_util.m"
                      }
#line 1802 "inst_util.m"
                    else
#line 1803 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_16;
#line 1802 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1794 "inst_util.m"
                  }
#line 1794 "inst_util.m"
              }
#line 1793 "inst_util.m"
            }
#line 1793 "inst_util.m"
          else
#line 1806 "inst_util.m"
            {
#line 1806 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1805 "inst_util.m"
        }
#line 1792 "inst_util.m"
      }
#line 1792 "inst_util.m"
    else
#line 1812 "inst_util.m"
      {
#line 1812 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInstB_25;
#line 1808 "inst_util.m"
        MR_Word check_hlds__inst_util___InstVarsB_18;

#line 1808 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1808 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1808 "inst_util.m"
          {
#line 1808 "inst_util.m"
            check_hlds__inst_util___InstVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1808 "inst_util.m"
            check_hlds__inst_util__SubInstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1811 "inst_util.m"
            {
#line 1811 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__SubInstB_25, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1808 "inst_util.m"
          }
#line 1808 "inst_util.m"
        else
#line 1813 "inst_util.m"
          {
#line 1813 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
          }
#line 1812 "inst_util.m"
      }
#line 1808 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1808 "inst_util.m"
  }
#line 1788 "inst_util.m"
}

#line 1768 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1768 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1768 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1768 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1768 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1768 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1768 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15)
#line 1768 "inst_util.m"
{
#line 1771 "inst_util.m"
  {
#line 1771 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1771 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_12;
#line 1771 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_13;

#line 1777 "inst_util.m"
    {
#line 1777 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstA_7, &check_hlds__inst_util__ExpandedInstA_12);
    }
#line 1778 "inst_util.m"
    {
#line 1778 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstB_8, &check_hlds__inst_util__ExpandedInstB_13);
    }
#line 1779 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1781 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1780 "inst_util.m"
      {
#line 1780 "inst_util.m"
        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstA_12;
#line 1780 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1780 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1780 "inst_util.m"
      }
#line 1781 "inst_util.m"
    else
#line 1783 "inst_util.m"
      {
#line 1781 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstA_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1783 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1782 "inst_util.m"
          {
#line 1782 "inst_util.m"
            *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstB_13;
#line 1782 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1782 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1782 "inst_util.m"
          }
#line 1783 "inst_util.m"
        else
#line 1784 "inst_util.m"
          {
#line 1784 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(check_hlds__inst_util__ExpandedInstA_12, check_hlds__inst_util__ExpandedInstB_13, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);
          }
#line 1783 "inst_util.m"
      }
#line 1771 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1771 "inst_util.m"
  }
#line 1768 "inst_util.m"
}

#line 1684 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1684 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1684 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1684 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1684 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1684 "inst_util.m"
{
#line 1687 "inst_util.m"
  {
#line 1687 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1687 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1687 "inst_util.m"
      {
#line 1687 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1687 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1687 "inst_util.m"
      }
#line 1687 "inst_util.m"
    else
#line 1688 "inst_util.m"
      {
#line 1688 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1688 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1688 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1688 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1688 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1689 "inst_util.m"
        {
#line 1689 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1690 "inst_util.m"
        {
#line 1690 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1688 "inst_util.m"
        {
#line 1688 "inst_util.m"
          MR_Word base;
#line 1688 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1688 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1688 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1688 "inst_util.m"
        }
#line 1688 "inst_util.m"
      }
#line 1687 "inst_util.m"
  }
#line 1684 "inst_util.m"
}

#line 1673 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1673 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1673 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1673 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1673 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1673 "inst_util.m"
{
#line 1676 "inst_util.m"
  {
#line 1676 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1676 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1676 "inst_util.m"
      {
#line 1676 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1676 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1676 "inst_util.m"
      }
#line 1676 "inst_util.m"
    else
#line 1678 "inst_util.m"
      {
#line 1678 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1678 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1678 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1678 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1678 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1678 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1678 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1678 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1680 "inst_util.m"
        {
#line 1680 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1681 "inst_util.m"
        {
#line 1681 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1681 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1681 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1681 "inst_util.m"
        }
#line 1682 "inst_util.m"
        {
#line 1682 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1677 "inst_util.m"
        {
#line 1677 "inst_util.m"
          MR_Word base;
#line 1677 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1677 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1677 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1677 "inst_util.m"
        }
#line 1678 "inst_util.m"
      }
#line 1676 "inst_util.m"
  }
#line 1673 "inst_util.m"
}

#line 1568 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1568 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1568 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1568 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1568 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1568 "inst_util.m"
{
#line 1571 "inst_util.m"
  {
#line 1571 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1571 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "inst_util.m"
      {
#line 1571 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1571 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1571 "inst_util.m"
      }
#line 1571 "inst_util.m"
    else
#line 1573 "inst_util.m"
      {
#line 1573 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1573 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1573 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1573 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1573 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1573 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1573 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1573 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1575 "inst_util.m"
        {
#line 1575 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1576 "inst_util.m"
        {
#line 1576 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1576 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1576 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1576 "inst_util.m"
        }
#line 1577 "inst_util.m"
        {
#line 1577 "inst_util.m"
          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1572 "inst_util.m"
        {
#line 1572 "inst_util.m"
          MR_Word base;
#line 1572 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1572 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1572 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1572 "inst_util.m"
        }
#line 1573 "inst_util.m"
      }
#line 1571 "inst_util.m"
  }
#line 1568 "inst_util.m"
}

#line 1447 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1447 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1447 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1447 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1447 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35)
#line 1447 "inst_util.m"
{
#line 1452 "inst_util.m"
  {
#line 1452 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1452 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1455 "inst_util.m"
      {
#line 1457 "inst_util.m"
        {
#line 1457 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
#line 1457 "inst_util.m"
          return;
        }
#line 1455 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1452 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1452 "inst_util.m"
      {
#line 1453 "inst_util.m"
        *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1452 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1452 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1452 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1463 "inst_util.m"
      {
#line 1463 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1463 "inst_util.m"
        MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1463 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_11;

#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 3))
#line 1566 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 3;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 4))
#line 1565 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 4;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 2))
#line 1563 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 0))
#line 1564 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1465 "inst_util.m"
        {
#line 1465 "inst_util.m"
          MR_Word base;
#line 1465 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = base;
#line 1465 "inst_util.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1465 "inst_util.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1465 "inst_util.m"
        }
#line 1463 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1463 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1452 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1459 "inst_util.m"
      {
#line 1461 "inst_util.m"
        {
#line 1461 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
#line 1461 "inst_util.m"
          return;
        }
#line 1459 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1452 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1511 "inst_util.m"
      {
#line 1512 "inst_util.m"
        {
#line 1512 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
#line 1512 "inst_util.m"
          return;
        }
#line 1511 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1452 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1467 "inst_util.m"
      {
#line 1467 "inst_util.m"
        MR_Word check_hlds__inst_util__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1467 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1467 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1467 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1467 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_55;

#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_54 == (MR_Integer) 3))
#line 1566 "inst_util.m"
          check_hlds__inst_util__Uniq_55 = (MR_Integer) 3;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_54 == (MR_Integer) 4))
#line 1565 "inst_util.m"
          check_hlds__inst_util__Uniq_55 = (MR_Integer) 4;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_54 == (MR_Integer) 2))
#line 1563 "inst_util.m"
          check_hlds__inst_util__Uniq_55 = (MR_Integer) 0;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_54 == (MR_Integer) 0))
#line 1564 "inst_util.m"
          check_hlds__inst_util__Uniq_55 = (MR_Integer) 0;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
          check_hlds__inst_util__Uniq_55 = (MR_Integer) 0;
#line 1493 "inst_util.m"
        {
#line 1493 "inst_util.m"
          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
        }
#line 1494 "inst_util.m"
        {
#line 1494 "inst_util.m"
          MR_Word base;
#line 1494 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = base;
#line 1494 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1494 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_55));
#line 1494 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_12));
#line 1494 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1494 "inst_util.m"
        }
#line 1467 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1452 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1503 "inst_util.m"
      {
#line 1503 "inst_util.m"
        MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1503 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1503 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInst1_19;

#line 1504 "inst_util.m"
        {
#line 1504 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
        }
#line 1505 "inst_util.m"
        {
#line 1505 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
        }
#line 1505 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1507 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1506 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst1_19;
#line 1507 "inst_util.m"
        else
#line 1508 "inst_util.m"
          {
#line 1508 "inst_util.m"
            MR_Word base;
#line 1508 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1508 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1508 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1508 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst1_19));
#line 1508 "inst_util.m"
          }
#line 1503 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1452 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1514 "inst_util.m"
      {
#line 1514 "inst_util.m"
        MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1514 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_23;
#line 1514 "inst_util.m"
        MR_Word check_hlds__inst_util__SharedInstTable0_24;
#line 1514 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1514 "inst_util.m"
        MR_Word check_hlds__inst_util__SharedInstTable1_26;
#line 1514 "inst_util.m"
        MR_Word check_hlds__inst_util__SharedInst_28;

#line 1516 "inst_util.m"
        {
#line 1516 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__InstTable0_23);
        }
#line 1517 "inst_util.m"
        {
#line 1517 "inst_util.m"
          hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__SharedInstTable0_24);
        }
#line 1518 "inst_util.m"
        {
#line 1518 "inst_util.m"
          hlds__hlds_data__search_insert_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__SharedInstTable0_24, &check_hlds__inst_util__SharedInstTable1_26);
        }
#line 1528 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1529 "inst_util.m"
          {
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_29;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_30;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__SharedInstTable2_31;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__SharedInstTable_32;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_33;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__V_38_38;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_58;
#line 1529 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst1_59;

#line 1532 "inst_util.m"
            {
#line 1532 "inst_util.m"
              hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
            }
#line 1534 "inst_util.m"
            {
#line 1534 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36);
            }
#line 1538 "inst_util.m"
            {
#line 1538 "inst_util.m"
              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_58);
            }
#line 1539 "inst_util.m"
            {
#line 1539 "inst_util.m"
              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__SubInst0_58, &check_hlds__inst_util__SubInst1_59);
            }
#line 1540 "inst_util.m"
            {
#line 1540 "inst_util.m"
              check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst1_59, &check_hlds__inst_util__SharedInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
            }
#line 1544 "inst_util.m"
            {
#line 1544 "inst_util.m"
              hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__InstTable2_30);
            }
#line 1545 "inst_util.m"
            {
#line 1545 "inst_util.m"
              hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__SharedInstTable2_31);
            }
#line 1546 "inst_util.m"
            {
#line 1546 "inst_util.m"
              check_hlds__inst_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1546 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_38_38, 0) = ((MR_Box) (check_hlds__inst_util__SharedInst_28));
#line 1546 "inst_util.m"
            }
#line 1546 "inst_util.m"
            {
#line 1546 "inst_util.m"
              hlds__hlds_data__det_update_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_38_38, check_hlds__inst_util__SharedInstTable2_31, &check_hlds__inst_util__SharedInstTable_32);
            }
#line 1548 "inst_util.m"
            {
#line 1548 "inst_util.m"
              hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable_32, check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__InstTable_33);
            }
#line 1550 "inst_util.m"
            {
#line 1550 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
            }
#line 1529 "inst_util.m"
          }
#line 1528 "inst_util.m"
        else
#line 1521 "inst_util.m"
          {
#line 1521 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1524 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1526 "inst_util.m"
              check_hlds__inst_util__SharedInst_28 = check_hlds__inst_util__Inst0_5;
#line 1524 "inst_util.m"
            else
#line 1523 "inst_util.m"
              check_hlds__inst_util__SharedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1521 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1521 "inst_util.m"
          }
#line 1553 "inst_util.m"
        {
#line 1553 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__SharedInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35, check_hlds__inst_util__InstName_22);
        }
#line 1555 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1554 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1555 "inst_util.m"
        else
#line 1556 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SharedInst_28;
#line 1514 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1452 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1496 "inst_util.m"
      {
#line 1496 "inst_util.m"
        MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1496 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1496 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_57;

#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_56 == (MR_Integer) 3))
#line 1566 "inst_util.m"
          check_hlds__inst_util__Uniq_57 = (MR_Integer) 3;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_56 == (MR_Integer) 4))
#line 1565 "inst_util.m"
          check_hlds__inst_util__Uniq_57 = (MR_Integer) 4;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_56 == (MR_Integer) 2))
#line 1563 "inst_util.m"
          check_hlds__inst_util__Uniq_57 = (MR_Integer) 0;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_56 == (MR_Integer) 0))
#line 1564 "inst_util.m"
          check_hlds__inst_util__Uniq_57 = (MR_Integer) 0;
#line 1562 "inst_util.m"
        else
#line 1562 "inst_util.m"
          check_hlds__inst_util__Uniq_57 = (MR_Integer) 0;
#line 1498 "inst_util.m"
        {
#line 1498 "inst_util.m"
          MR_Word base;
#line 1498 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = base;
#line 1498 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1498 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_57));
#line 1498 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1498 "inst_util.m"
        }
#line 1496 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1496 "inst_util.m"
      }
#line 1452 "inst_util.m"
    else
#line 1500 "inst_util.m"
      {
#line 1501 "inst_util.m"
        {
#line 1501 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
#line 1501 "inst_util.m"
          return;
        }
#line 1500 "inst_util.m"
      }
#line 1452 "inst_util.m"
  }
#line 1447 "inst_util.m"
}

#line 1420 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1420 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1420 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1420 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1420 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1420 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5)
#line 1420 "inst_util.m"
{
#line 1423 "inst_util.m"
  {
#line 1423 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1423 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1423 "inst_util.m"
      if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1423 "inst_util.m"
        {
#line 1423 "inst_util.m"
          *check_hlds__inst_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1423 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1423 "inst_util.m"
        }
#line 1423 "inst_util.m"
      else
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
#line 1423 "inst_util.m"
    else
#line 1423 "inst_util.m"
      {
#line 1423 "inst_util.m"
        MR_Word check_hlds__inst_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1423 "inst_util.m"
        MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1423 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1436 "inst_util.m"
          {
#line 1437 "inst_util.m"
            {
#line 1437 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1437 "inst_util.m"
              return;
            }
#line 1436 "inst_util.m"
          }
#line 1423 "inst_util.m"
        else
#line 1425 "inst_util.m"
          {
#line 1425 "inst_util.m"
            MR_Word check_hlds__inst_util__Live_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1425 "inst_util.m"
            MR_Word check_hlds__inst_util__Lives_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1425 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_13;
#line 1425 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_14;
#line 1425 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1429 "inst_util.m"
            if ((check_hlds__inst_util__Live_11 == (MR_Integer) 1))
#line 1430 "inst_util.m"
              {
#line 1431 "inst_util.m"
                check_hlds__inst_util__Inst_13 = check_hlds__inst_util__V_37_37;
#line 1430 "inst_util.m"
                check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1430 "inst_util.m"
              }
#line 1429 "inst_util.m"
            else
#line 1427 "inst_util.m"
              {
#line 1427 "inst_util.m"
                check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__V_37_37, &check_hlds__inst_util__Inst_13, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
              }
#line 1433 "inst_util.m"
            {
#line 1433 "inst_util.m"
              check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__V_36_36, check_hlds__inst_util__Lives_12, &check_hlds__inst_util__Insts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);
            }
#line 1425 "inst_util.m"
            {
#line 1425 "inst_util.m"
              MR_Word base;
#line 1425 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "inst_util.m"
              *check_hlds__inst_util__HeadVar__3_3 = base;
#line 1425 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_13));
#line 1425 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_14));
#line 1425 "inst_util.m"
            }
#line 1425 "inst_util.m"
          }
#line 1423 "inst_util.m"
      }
#line 1423 "inst_util.m"
  }
#line 1420 "inst_util.m"
}

#line 1400 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1400 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1400 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1400 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1400 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1400 "inst_util.m"
{
#line 1405 "inst_util.m"
  {
#line 1405 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1405 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1405 "inst_util.m"
      {
#line 1405 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1405 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1405 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1405 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1405 "inst_util.m"
      }
#line 1405 "inst_util.m"
    else
#line 1407 "inst_util.m"
      {
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1407 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1406 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1406 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1406 "inst_util.m"
          {
#line 1406 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1406 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1408 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1408 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1408 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1410 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1409 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1410 "inst_util.m"
            else
#line 1411 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1413 "inst_util.m"
            {
#line 1413 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1407 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1407 "inst_util.m"
              {
#line 1414 "inst_util.m"
                {
#line 1414 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1407 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1407 "inst_util.m"
                  {
#line 1407 "inst_util.m"
                    {
#line 1407 "inst_util.m"
                      MR_Word base;
#line 1407 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1407 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1407 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1407 "inst_util.m"
                    }
#line 1416 "inst_util.m"
                    {
#line 1416 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1416 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1407 "inst_util.m"
                  }
#line 1407 "inst_util.m"
              }
#line 1406 "inst_util.m"
          }
#line 1407 "inst_util.m"
      }
#line 1405 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1405 "inst_util.m"
  }
#line 1400 "inst_util.m"
}

#line 1389 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1389 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1389 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1389 "inst_util.m"
{
#line 1393 "inst_util.m"
  {
#line 1393 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1393 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1393 "inst_util.m"
      {
#line 1393 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1393 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1393 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1393 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1393 "inst_util.m"
      }
#line 1393 "inst_util.m"
    else
#line 1395 "inst_util.m"
      {
#line 1395 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1395 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1395 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1395 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1395 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1395 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1395 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1396 "inst_util.m"
        {
#line 1396 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1395 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1395 "inst_util.m"
          {
#line 1397 "inst_util.m"
            {
#line 1397 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1395 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1395 "inst_util.m"
              {
#line 1394 "inst_util.m"
                {
#line 1394 "inst_util.m"
                  MR_Word base;
#line 1394 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1394 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1394 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1394 "inst_util.m"
                }
#line 1398 "inst_util.m"
                {
#line 1398 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1398 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1395 "inst_util.m"
              }
#line 1395 "inst_util.m"
          }
#line 1395 "inst_util.m"
      }
#line 1393 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1393 "inst_util.m"
  }
#line 1389 "inst_util.m"
}

#line 1373 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1373 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1373 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1373 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1373 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1373 "inst_util.m"
{
#line 1378 "inst_util.m"
  {
#line 1378 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1378 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1378 "inst_util.m"
      {
#line 1378 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1378 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1378 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1378 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1378 "inst_util.m"
      }
#line 1378 "inst_util.m"
    else
#line 1380 "inst_util.m"
      {
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_20;
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_21;
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 0)));
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 1)));
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1380 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1382 "inst_util.m"
        {
#line 1382 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1380 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1380 "inst_util.m"
          {
#line 1384 "inst_util.m"
            {
#line 1384 "inst_util.m"
              check_hlds__inst_util__Bound_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1384 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1384 "inst_util.m"
            }
#line 1385 "inst_util.m"
            {
#line 1385 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__Bounds0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Bounds_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1380 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1380 "inst_util.m"
              {
#line 1380 "inst_util.m"
                {
#line 1380 "inst_util.m"
                  MR_Word base;
#line 1380 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1380 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_20));
#line 1380 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_21));
#line 1380 "inst_util.m"
                }
#line 1387 "inst_util.m"
                {
#line 1387 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1387 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1380 "inst_util.m"
              }
#line 1380 "inst_util.m"
          }
#line 1380 "inst_util.m"
      }
#line 1378 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1378 "inst_util.m"
  }
#line 1373 "inst_util.m"
}

#line 1266 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1266 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1266 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1266 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1266 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47)
#line 1266 "inst_util.m"
{
#line 1272 "inst_util.m"
  {
#line 1272 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1272 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1282 "inst_util.m"
      {
#line 1282 "inst_util.m"
        MR_Word check_hlds__inst_util__V_71_71;
#line 1282 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_73;

#line 1283 "inst_util.m"
        {
#line 1283 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_73);
        }
#line 1282 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1282 "inst_util.m"
          {
#line 1284 "inst_util.m"
            check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1285 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1282 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1284 "inst_util.m"
            {
#line 1284 "inst_util.m"
              MR_Word base;
#line 1284 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1284 "inst_util.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_73));
#line 1284 "inst_util.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 1284 "inst_util.m"
            }
#line 1284 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1282 "inst_util.m"
          }
#line 1282 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1272 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1272 "inst_util.m"
      {
#line 1273 "inst_util.m"
        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1274 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1272 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1272 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1272 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1272 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 2))))
#line 1276 "inst_util.m"
      {
#line 1276 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1276 "inst_util.m"
        MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1276 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_18;

#line 1278 "inst_util.m"
        {
#line 1278 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
        }
#line 1276 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1276 "inst_util.m"
          {
#line 1280 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1276 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1279 "inst_util.m"
            {
#line 1279 "inst_util.m"
              MR_Word base;
#line 1279 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1279 "inst_util.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1279 "inst_util.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1279 "inst_util.m"
            }
#line 1279 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1276 "inst_util.m"
          }
#line 1276 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1272 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 1))))
#line 1287 "inst_util.m"
      {
#line 1287 "inst_util.m"
        MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1287 "inst_util.m"
        MR_Word check_hlds__inst_util__Any_20;
#line 1287 "inst_util.m"
        MR_Word check_hlds__inst_util__V_65_65;
#line 1287 "inst_util.m"
        MR_Word check_hlds__inst_util__V_67_67;

#line 1292 "inst_util.m"
        {
#line 1292 "inst_util.m"
          check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_67_67, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "inst_util.m"
        }
#line 1292 "inst_util.m"
        {
#line 1292 "inst_util.m"
          check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 0) = ((MR_Box) (check_hlds__inst_util__Live_10));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 3) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1292 "inst_util.m"
        }
#line 1292 "inst_util.m"
        {
#line 1292 "inst_util.m"
          check_hlds__inst_util__Any_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 1) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1292 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 2) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 1292 "inst_util.m"
        }
#line 1293 "inst_util.m"
        {
#line 1293 "inst_util.m"
          MR_Word base;
#line 1293 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = base;
#line 1293 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1293 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Any_20));
#line 1293 "inst_util.m"
        }
#line 1294 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1287 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1287 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1287 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1272 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1318 "inst_util.m"
      {
#line 1319 "inst_util.m"
        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_util_scalar_common_1[2]);
#line 1320 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1318 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1318 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1318 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1272 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1296 "inst_util.m"
      {
#line 1296 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1296 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_23;
#line 1296 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1296 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63;
#line 1296 "inst_util.m"
        MR_Word check_hlds__inst_util__V_64_64;
#line 1296 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1296 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_75;
#line 1296 "inst_util.m"
        MR_Word check_hlds__inst_util___InstResults0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));

#line 1298 "inst_util.m"
        {
#line 1298 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_74, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
        }
#line 1296 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1296 "inst_util.m"
          {
#line 1299 "inst_util.m"
            {
#line 1299 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_22, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_23, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
            }
#line 1296 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1296 "inst_util.m"
              {
#line 1302 "inst_util.m"
                check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1303 "inst_util.m"
                check_hlds__inst_util__V_64_64 = (MR_Integer) 1;
#line 1302 "inst_util.m"
                {
#line 1302 "inst_util.m"
                  MR_Word base;
#line 1302 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = base;
#line 1302 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1302 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1302 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 1302 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_23));
#line 1302 "inst_util.m"
                }
#line 1303 "inst_util.m"
                {
#line 1303 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__V_64_64, check_hlds__inst_util__Detism_14);
                }
#line 1303 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1296 "inst_util.m"
              }
#line 1296 "inst_util.m"
          }
#line 1296 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1272 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1314 "inst_util.m"
      {
#line 1314 "inst_util.m"
        MR_Word check_hlds__inst_util__InstVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1314 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInst0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1314 "inst_util.m"
        MR_Word check_hlds__inst_util__V_54_54;

#line 1316 "inst_util.m"
        {
#line 1316 "inst_util.m"
          check_hlds__inst_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_54_54, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1316 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1316 "inst_util.m"
        }
#line 1315 "inst_util.m"
        {
#line 1315 "inst_util.m"
          return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_27, check_hlds__inst_util__SubInst0_28, check_hlds__inst_util__V_54_54, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
        }
#line 1314 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1272 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1322 "inst_util.m"
      {
#line 1322 "inst_util.m"
        MR_Word check_hlds__inst_util__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1322 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_32;
#line 1322 "inst_util.m"
        MR_Word check_hlds__inst_util__AnyInstTable0_33;
#line 1322 "inst_util.m"
        MR_Word check_hlds__inst_util__AnyInstInfo_34;
#line 1322 "inst_util.m"
        MR_Word check_hlds__inst_util__AnyInstName_35;
#line 1322 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_36;
#line 1322 "inst_util.m"
        MR_Word check_hlds__inst_util__AnyInstTable1_37;
#line 1322 "inst_util.m"
        MR_Word check_hlds__inst_util__AnyInst_39;

#line 1324 "inst_util.m"
        {
#line 1324 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__InstTable0_32);
        }
#line 1325 "inst_util.m"
        {
#line 1325 "inst_util.m"
          hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__AnyInstTable0_33);
        }
#line 1326 "inst_util.m"
        {
#line 1326 "inst_util.m"
          check_hlds__inst_util__AnyInstInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_34, 0) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1326 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_34, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1326 "inst_util.m"
        }
#line 1327 "inst_util.m"
        {
#line 1327 "inst_util.m"
          check_hlds__inst_util__AnyInstName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1327 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 1) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1327 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1327 "inst_util.m"
        }
#line 1328 "inst_util.m"
        {
#line 1328 "inst_util.m"
          hlds__hlds_data__search_insert_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_34, &check_hlds__inst_util__MaybeMaybeInst_36, check_hlds__inst_util__AnyInstTable0_33, &check_hlds__inst_util__AnyInstTable1_37);
        }
#line 1342 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1343 "inst_util.m"
          {
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_40;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst1_41;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_42;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__AnyInstTable2_43;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__AnyInstTable_44;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_45;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__V_50_50;
#line 1343 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_78;

#line 1346 "inst_util.m"
            {
#line 1346 "inst_util.m"
              hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable1_37, check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__InstTable1_40);
            }
#line 1347 "inst_util.m"
            {
#line 1347 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
            }
#line 1351 "inst_util.m"
            {
#line 1351 "inst_util.m"
              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__InstName_31, &check_hlds__inst_util__SubInst0_78);
            }
#line 1352 "inst_util.m"
            {
#line 1352 "inst_util.m"
              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__SubInst0_78, &check_hlds__inst_util__SubInst1_41);
            }
#line 1353 "inst_util.m"
            {
#line 1353 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__SubInst1_41, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__AnyInst_39, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49);
            }
#line 1343 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1343 "inst_util.m"
              {
#line 1358 "inst_util.m"
                {
#line 1358 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, &check_hlds__inst_util__InstTable2_42);
                }
#line 1359 "inst_util.m"
                {
#line 1359 "inst_util.m"
                  hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__AnyInstTable2_43);
                }
#line 1360 "inst_util.m"
                {
#line 1360 "inst_util.m"
                  check_hlds__inst_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_50_50, 0) = ((MR_Box) (check_hlds__inst_util__AnyInst_39));
#line 1360 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_50_50, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1360 "inst_util.m"
                }
#line 1360 "inst_util.m"
                {
#line 1360 "inst_util.m"
                  hlds__hlds_data__det_update_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_34, check_hlds__inst_util__V_50_50, check_hlds__inst_util__AnyInstTable2_43, &check_hlds__inst_util__AnyInstTable_44);
                }
#line 1362 "inst_util.m"
                {
#line 1362 "inst_util.m"
                  hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable_44, check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__InstTable_45);
                }
#line 1363 "inst_util.m"
                {
#line 1363 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_45, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                }
#line 1363 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1343 "inst_util.m"
              }
#line 1343 "inst_util.m"
          }
#line 1342 "inst_util.m"
        else
#line 1331 "inst_util.m"
          {
#line 1331 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_36, (MR_Integer) 0)));

#line 1334 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1335 "inst_util.m"
              {
#line 1336 "inst_util.m"
                {
#line 1336 "inst_util.m"
                  check_hlds__inst_util__AnyInst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1336 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_39, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_35));
#line 1336 "inst_util.m"
                }
#line 1337 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1335 "inst_util.m"
              }
#line 1334 "inst_util.m"
            else
#line 1333 "inst_util.m"
              {
#line 1333 "inst_util.m"
                check_hlds__inst_util__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_38, (MR_Integer) 0)));
#line 1333 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_38, (MR_Integer) 1)));
#line 1333 "inst_util.m"
              }
#line 1331 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1331 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1331 "inst_util.m"
          }
#line 1322 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1322 "inst_util.m"
          {
#line 1366 "inst_util.m"
            {
#line 1366 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__AnyInst_39, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47, check_hlds__inst_util__AnyInstName_35);
            }
#line 1368 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1367 "inst_util.m"
              {
#line 1367 "inst_util.m"
                MR_Word base;
#line 1367 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1367 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1367 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_35));
#line 1367 "inst_util.m"
              }
#line 1368 "inst_util.m"
            else
#line 1369 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__AnyInst_39;
#line 1368 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1322 "inst_util.m"
          }
#line 1322 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1272 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1305 "inst_util.m"
      {
#line 1305 "inst_util.m"
        MR_Word check_hlds__inst_util__PredInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1305 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1305 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_77;

#line 1307 "inst_util.m"
        {
#line 1307 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_76, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_77);
        }
#line 1305 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1305 "inst_util.m"
          {
#line 1309 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1305 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1308 "inst_util.m"
            {
#line 1308 "inst_util.m"
              MR_Word base;
#line 1308 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1308 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1308 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_77));
#line 1308 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_25));
#line 1308 "inst_util.m"
            }
#line 1308 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1305 "inst_util.m"
          }
#line 1305 "inst_util.m"
      }
#line 1272 "inst_util.m"
    else
#line 1311 "inst_util.m"
      {
#line 1312 "inst_util.m"
        {
#line 1312 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_any_inst\'/8", (MR_String) "free inst var");
        }
#line 1311 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1311 "inst_util.m"
      }
#line 1272 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1272 "inst_util.m"
  }
#line 1266 "inst_util.m"
}

#line 1245 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1245 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1245 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1245 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1245 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1245 "inst_util.m"
{
#line 1250 "inst_util.m"
  {
#line 1250 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1250 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1250 "inst_util.m"
      {
#line 1250 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1250 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1250 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1250 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1250 "inst_util.m"
      }
#line 1250 "inst_util.m"
    else
#line 1252 "inst_util.m"
      {
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst_20;
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_21;
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 0)));
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 1)));
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1252 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1254 "inst_util.m"
        {
#line 1254 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1252 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1252 "inst_util.m"
          {
#line 1256 "inst_util.m"
            {
#line 1256 "inst_util.m"
              check_hlds__inst_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1256 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1256 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1256 "inst_util.m"
            }
#line 1257 "inst_util.m"
            {
#line 1257 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInsts_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1252 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1252 "inst_util.m"
              {
#line 1252 "inst_util.m"
                {
#line 1252 "inst_util.m"
                  MR_Word base;
#line 1252 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1252 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_20));
#line 1252 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInsts_21));
#line 1252 "inst_util.m"
                }
#line 1259 "inst_util.m"
                {
#line 1259 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1259 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1252 "inst_util.m"
              }
#line 1252 "inst_util.m"
          }
#line 1252 "inst_util.m"
      }
#line 1250 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1250 "inst_util.m"
  }
#line 1245 "inst_util.m"
}

#line 1142 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45)
#line 1142 "inst_util.m"
{
#line 1148 "inst_util.m"
  {
#line 1148 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1148 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "inst_util.m"
      {
#line 1157 "inst_util.m"
        MR_Word check_hlds__inst_util__V_67_67;
#line 1157 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_69;

#line 1158 "inst_util.m"
        {
#line 1158 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_69);
        }
#line 1157 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1157 "inst_util.m"
          {
#line 1159 "inst_util.m"
            check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1160 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1157 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1159 "inst_util.m"
            {
#line 1159 "inst_util.m"
              MR_Word base;
#line 1159 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1159 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1159 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1159 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1159 "inst_util.m"
            }
#line 1159 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1157 "inst_util.m"
          }
#line 1157 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1148 "inst_util.m"
    if ((check_hlds__inst_util__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1148 "inst_util.m"
      {
#line 1149 "inst_util.m"
        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1150 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1148 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1148 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1148 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1148 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 2))))
#line 1152 "inst_util.m"
      {
#line 1152 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1152 "inst_util.m"
        MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1152 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_18;

#line 1153 "inst_util.m"
        {
#line 1153 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
        }
#line 1152 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1152 "inst_util.m"
          {
#line 1155 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1152 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1154 "inst_util.m"
            {
#line 1154 "inst_util.m"
              MR_Word base;
#line 1154 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1154 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1154 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1154 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1154 "inst_util.m"
            }
#line 1154 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1152 "inst_util.m"
          }
#line 1152 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1148 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 1))))
#line 1162 "inst_util.m"
      {
#line 1162 "inst_util.m"
        MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1162 "inst_util.m"
        MR_Word check_hlds__inst_util__V_64_64;
#line 1162 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_70;

#line 1163 "inst_util.m"
        {
#line 1163 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_70);
        }
#line 1162 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1162 "inst_util.m"
          {
#line 1165 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1162 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1164 "inst_util.m"
            {
#line 1164 "inst_util.m"
              check_hlds__inst_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "inst_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1164 "inst_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_70));
#line 1164 "inst_util.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 2) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1164 "inst_util.m"
            }
#line 1164 "inst_util.m"
            {
#line 1164 "inst_util.m"
              MR_Word base;
#line 1164 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1164 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1164 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 1164 "inst_util.m"
            }
#line 1164 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1162 "inst_util.m"
          }
#line 1162 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1148 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1186 "inst_util.m"
      {
#line 1187 "inst_util.m"
        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__inst_util_scalar_common_2[0]);
#line 1188 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1186 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1186 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1186 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1148 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1167 "inst_util.m"
      {
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_22;
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_23;
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__V_61_61;
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_72;

#line 1168 "inst_util.m"
        {
#line 1168 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_71, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_72);
        }
#line 1167 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1167 "inst_util.m"
          {
#line 1169 "inst_util.m"
            {
#line 1169 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_21, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_22, &check_hlds__inst_util__Detism1_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
            }
#line 1167 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1167 "inst_util.m"
              {
#line 1172 "inst_util.m"
                check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 1171 "inst_util.m"
                {
#line 1171 "inst_util.m"
                  MR_Word base;
#line 1171 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = base;
#line 1171 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1171 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_72));
#line 1171 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_20));
#line 1171 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_22));
#line 1171 "inst_util.m"
                }
#line 1172 "inst_util.m"
                {
#line 1172 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_23, check_hlds__inst_util__V_61_61, check_hlds__inst_util__Detism_14);
                }
#line 1172 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1167 "inst_util.m"
              }
#line 1167 "inst_util.m"
          }
#line 1167 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1148 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1182 "inst_util.m"
      {
#line 1182 "inst_util.m"
        MR_Word check_hlds__inst_util__InstVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1182 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1182 "inst_util.m"
        MR_Word check_hlds__inst_util__V_52_52;

#line 1184 "inst_util.m"
        {
#line 1184 "inst_util.m"
          check_hlds__inst_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1184 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 1) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1184 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1184 "inst_util.m"
        }
#line 1183 "inst_util.m"
        {
#line 1183 "inst_util.m"
          return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_25, check_hlds__inst_util__SubInst0_26, check_hlds__inst_util__V_52_52, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
        }
#line 1182 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1148 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1190 "inst_util.m"
      {
#line 1190 "inst_util.m"
        MR_Word check_hlds__inst_util__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1190 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_30;
#line 1190 "inst_util.m"
        MR_Word check_hlds__inst_util__GroundInstTable0_31;
#line 1190 "inst_util.m"
        MR_Word check_hlds__inst_util__GroundInstInfo_32;
#line 1190 "inst_util.m"
        MR_Word check_hlds__inst_util__GroundInstName_33;
#line 1190 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_34;
#line 1190 "inst_util.m"
        MR_Word check_hlds__inst_util__GroundInstTable1_35;
#line 1190 "inst_util.m"
        MR_Word check_hlds__inst_util__GroundInst_37;

#line 1192 "inst_util.m"
        {
#line 1192 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__InstTable0_30);
        }
#line 1193 "inst_util.m"
        {
#line 1193 "inst_util.m"
          hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__GroundInstTable0_31);
        }
#line 1194 "inst_util.m"
        {
#line 1194 "inst_util.m"
          check_hlds__inst_util__GroundInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 0) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1194 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1194 "inst_util.m"
        }
#line 1195 "inst_util.m"
        {
#line 1195 "inst_util.m"
          check_hlds__inst_util__GroundInstName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1195 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 1) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1195 "inst_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1195 "inst_util.m"
        }
#line 1196 "inst_util.m"
        {
#line 1196 "inst_util.m"
          hlds__hlds_data__search_insert_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, &check_hlds__inst_util__MaybeMaybeInst_34, check_hlds__inst_util__GroundInstTable0_31, &check_hlds__inst_util__GroundInstTable1_35);
        }
#line 1210 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1211 "inst_util.m"
          {
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_38;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst1_39;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_40;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__GroundInstTable2_41;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__GroundInstTable_42;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_43;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__V_48_48;
#line 1211 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_76;

#line 1214 "inst_util.m"
            {
#line 1214 "inst_util.m"
              hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable1_35, check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__InstTable1_38);
            }
#line 1216 "inst_util.m"
            {
#line 1216 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46);
            }
#line 1220 "inst_util.m"
            {
#line 1220 "inst_util.m"
              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__InstName_29, &check_hlds__inst_util__SubInst0_76);
            }
#line 1221 "inst_util.m"
            {
#line 1221 "inst_util.m"
              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__SubInst0_76, &check_hlds__inst_util__SubInst1_39);
            }
#line 1222 "inst_util.m"
            {
#line 1222 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__SubInst1_39, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__GroundInst_37, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47);
            }
#line 1211 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1211 "inst_util.m"
              {
#line 1228 "inst_util.m"
                {
#line 1228 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, &check_hlds__inst_util__InstTable2_40);
                }
#line 1229 "inst_util.m"
                {
#line 1229 "inst_util.m"
                  hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__GroundInstTable2_41);
                }
#line 1231 "inst_util.m"
                {
#line 1231 "inst_util.m"
                  check_hlds__inst_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__GroundInst_37));
#line 1231 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1231 "inst_util.m"
                }
#line 1230 "inst_util.m"
                {
#line 1230 "inst_util.m"
                  hlds__hlds_data__det_update_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, check_hlds__inst_util__V_48_48, check_hlds__inst_util__GroundInstTable2_41, &check_hlds__inst_util__GroundInstTable_42);
                }
#line 1233 "inst_util.m"
                {
#line 1233 "inst_util.m"
                  hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable_42, check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__InstTable_43);
                }
#line 1235 "inst_util.m"
                {
#line 1235 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_43, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                }
#line 1235 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1211 "inst_util.m"
              }
#line 1211 "inst_util.m"
          }
#line 1210 "inst_util.m"
        else
#line 1199 "inst_util.m"
          {
#line 1199 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_34, (MR_Integer) 0)));

#line 1202 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1203 "inst_util.m"
              {
#line 1204 "inst_util.m"
                {
#line 1204 "inst_util.m"
                  check_hlds__inst_util__GroundInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1204 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1204 "inst_util.m"
                }
#line 1205 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1203 "inst_util.m"
              }
#line 1202 "inst_util.m"
            else
#line 1201 "inst_util.m"
              {
#line 1201 "inst_util.m"
                check_hlds__inst_util__GroundInst_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 0)));
#line 1201 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 1)));
#line 1201 "inst_util.m"
              }
#line 1199 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1199 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1199 "inst_util.m"
          }
#line 1190 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1190 "inst_util.m"
          {
#line 1238 "inst_util.m"
            {
#line 1238 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__GroundInst_37, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45, check_hlds__inst_util__GroundInstName_33);
            }
#line 1240 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1239 "inst_util.m"
              {
#line 1239 "inst_util.m"
                MR_Word base;
#line 1239 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1239 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1239 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1239 "inst_util.m"
              }
#line 1240 "inst_util.m"
            else
#line 1241 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__GroundInst_37;
#line 1240 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1190 "inst_util.m"
          }
#line 1190 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1148 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1174 "inst_util.m"
      {
#line 1174 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1174 "inst_util.m"
        MR_Word check_hlds__inst_util__HOInstInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1174 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_75;

#line 1175 "inst_util.m"
        {
#line 1175 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_73, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
        }
#line 1174 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1174 "inst_util.m"
          {
#line 1177 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1174 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1176 "inst_util.m"
            {
#line 1176 "inst_util.m"
              MR_Word base;
#line 1176 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = base;
#line 1176 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1176 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1176 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_74));
#line 1176 "inst_util.m"
            }
#line 1176 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1174 "inst_util.m"
          }
#line 1174 "inst_util.m"
      }
#line 1148 "inst_util.m"
    else
#line 1179 "inst_util.m"
      {
#line 1180 "inst_util.m"
        {
#line 1180 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_ground_inst\'/8", (MR_String) "free inst var");
        }
#line 1179 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1179 "inst_util.m"
      }
#line 1148 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1148 "inst_util.m"
  }
#line 1142 "inst_util.m"
}

#line 1127 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1127 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1127 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1127 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1127 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1127 "inst_util.m"
{
#line 1131 "inst_util.m"
  {
#line 1131 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1131 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1131 "inst_util.m"
      {
#line 1131 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1131 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1131 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1131 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1131 "inst_util.m"
      }
#line 1131 "inst_util.m"
    else
#line 1133 "inst_util.m"
      {
#line 1133 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1133 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1133 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1133 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1133 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1133 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1133 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1134 "inst_util.m"
        {
#line 1134 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1133 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1133 "inst_util.m"
          {
#line 1135 "inst_util.m"
            {
#line 1135 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1133 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1133 "inst_util.m"
              {
#line 1132 "inst_util.m"
                {
#line 1132 "inst_util.m"
                  MR_Word base;
#line 1132 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1132 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1132 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1132 "inst_util.m"
                }
#line 1137 "inst_util.m"
                {
#line 1137 "inst_util.m"
                  parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1137 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1133 "inst_util.m"
              }
#line 1133 "inst_util.m"
          }
#line 1133 "inst_util.m"
      }
#line 1131 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1131 "inst_util.m"
  }
#line 1127 "inst_util.m"
}

#line 1108 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1108 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1108 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1108 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1108 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1108 "inst_util.m"
{
#line 1113 "inst_util.m"
  {
#line 1113 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1113 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1113 "inst_util.m"
      {
#line 1113 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1113 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1113 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1113 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1113 "inst_util.m"
      }
#line 1113 "inst_util.m"
    else
#line 1115 "inst_util.m"
      {
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1115 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1114 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1114 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1114 "inst_util.m"
          {
#line 1114 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1114 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1116 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1116 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1116 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1118 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1117 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1118 "inst_util.m"
            else
#line 1119 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1121 "inst_util.m"
            {
#line 1121 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1115 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1115 "inst_util.m"
              {
#line 1123 "inst_util.m"
                {
#line 1123 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1115 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1115 "inst_util.m"
                  {
#line 1115 "inst_util.m"
                    {
#line 1115 "inst_util.m"
                      MR_Word base;
#line 1115 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1115 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1115 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1115 "inst_util.m"
                    }
#line 1125 "inst_util.m"
                    {
#line 1125 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1125 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1115 "inst_util.m"
                  }
#line 1115 "inst_util.m"
              }
#line 1114 "inst_util.m"
          }
#line 1115 "inst_util.m"
      }
#line 1113 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1113 "inst_util.m"
  }
#line 1108 "inst_util.m"
}

#line 991 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 991 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 991 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12)
#line 991 "inst_util.m"
{
#line 1014 "inst_util.m"
  {
#line 1014 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1014 "inst_util.m"
    if ((check_hlds__inst_util__UniqA_10 == (MR_Integer) 3))
#line 1085 "inst_util.m"
      {
#line 1101 "inst_util.m"
        if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1101 "inst_util.m"
          {
#line 1103 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1101 "inst_util.m"
            if (!(check_hlds__inst_util__succeeded))
#line 1104 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1101 "inst_util.m"
          }
#line 1101 "inst_util.m"
        else
#line 1101 "inst_util.m"
          {
#line 1102 "inst_util.m"
            {
#line 1102 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
            }
#line 1101 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
          }
#line 1085 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1085 "inst_util.m"
          {
#line 1087 "inst_util.m"
            *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1087 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1085 "inst_util.m"
          }
#line 1085 "inst_util.m"
      }
#line 1014 "inst_util.m"
    else
#line 1014 "inst_util.m"
    if ((check_hlds__inst_util__UniqA_10 == (MR_Integer) 4))
#line 1089 "inst_util.m"
      {
#line 1101 "inst_util.m"
        if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1101 "inst_util.m"
          {
#line 1103 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1101 "inst_util.m"
            if (!(check_hlds__inst_util__succeeded))
#line 1104 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1101 "inst_util.m"
          }
#line 1101 "inst_util.m"
        else
#line 1101 "inst_util.m"
          {
#line 1102 "inst_util.m"
            {
#line 1102 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
            }
#line 1101 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
          }
#line 1089 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1089 "inst_util.m"
          {
#line 1091 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__UniqB_11 == (MR_Integer) 3);
#line 1093 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1092 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1093 "inst_util.m"
            else
#line 1094 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1093 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1089 "inst_util.m"
          }
#line 1089 "inst_util.m"
      }
#line 1014 "inst_util.m"
    else
#line 1014 "inst_util.m"
    if ((check_hlds__inst_util__UniqA_10 == (MR_Integer) 2))
#line 1055 "inst_util.m"
      if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 3))
#line 1076 "inst_util.m"
        {
#line 1101 "inst_util.m"
          if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1101 "inst_util.m"
            {
#line 1103 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1101 "inst_util.m"
              if (!(check_hlds__inst_util__succeeded))
#line 1104 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1101 "inst_util.m"
            }
#line 1101 "inst_util.m"
          else
#line 1101 "inst_util.m"
            {
#line 1102 "inst_util.m"
              {
#line 1102 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
              }
#line 1101 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
            }
#line 1076 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1076 "inst_util.m"
            {
#line 1078 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1078 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1076 "inst_util.m"
            }
#line 1076 "inst_util.m"
        }
#line 1055 "inst_util.m"
      else
#line 1055 "inst_util.m"
      if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 4))
#line 1080 "inst_util.m"
        {
#line 1101 "inst_util.m"
          if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1101 "inst_util.m"
            {
#line 1103 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1101 "inst_util.m"
              if (!(check_hlds__inst_util__succeeded))
#line 1104 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1101 "inst_util.m"
            }
#line 1101 "inst_util.m"
          else
#line 1101 "inst_util.m"
            {
#line 1102 "inst_util.m"
              {
#line 1102 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
              }
#line 1101 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
            }
#line 1080 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1080 "inst_util.m"
            {
#line 1082 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1082 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1080 "inst_util.m"
            }
#line 1080 "inst_util.m"
        }
#line 1055 "inst_util.m"
      else
#line 1055 "inst_util.m"
      if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 2))
#line 1071 "inst_util.m"
        {
#line 1071 "inst_util.m"
          if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1073 "inst_util.m"
            *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1071 "inst_util.m"
          else
#line 1070 "inst_util.m"
            *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1071 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1071 "inst_util.m"
        }
#line 1055 "inst_util.m"
      else
#line 1055 "inst_util.m"
      if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 0))
#line 1054 "inst_util.m"
        {
#line 1054 "inst_util.m"
          *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1054 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1054 "inst_util.m"
        }
#line 1055 "inst_util.m"
      else
#line 1060 "inst_util.m"
        {
#line 1060 "inst_util.m"
          if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1064 "inst_util.m"
            *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1060 "inst_util.m"
          else
#line 1059 "inst_util.m"
            *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1060 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1060 "inst_util.m"
        }
#line 1014 "inst_util.m"
    else
#line 1014 "inst_util.m"
    if ((check_hlds__inst_util__UniqA_10 == (MR_Integer) 0))
#line 1005 "inst_util.m"
      if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 3))
#line 1006 "inst_util.m"
        {
#line 1101 "inst_util.m"
          if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1101 "inst_util.m"
            {
#line 1103 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1101 "inst_util.m"
              if (!(check_hlds__inst_util__succeeded))
#line 1104 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1101 "inst_util.m"
            }
#line 1101 "inst_util.m"
          else
#line 1101 "inst_util.m"
            {
#line 1102 "inst_util.m"
              {
#line 1102 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
              }
#line 1101 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
            }
#line 1006 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1006 "inst_util.m"
            {
#line 1008 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1008 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1006 "inst_util.m"
            }
#line 1006 "inst_util.m"
        }
#line 1005 "inst_util.m"
      else
#line 1005 "inst_util.m"
      if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 4))
#line 1010 "inst_util.m"
        {
#line 1101 "inst_util.m"
          if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1101 "inst_util.m"
            {
#line 1103 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1101 "inst_util.m"
              if (!(check_hlds__inst_util__succeeded))
#line 1104 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1101 "inst_util.m"
            }
#line 1101 "inst_util.m"
          else
#line 1101 "inst_util.m"
            {
#line 1102 "inst_util.m"
              {
#line 1102 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
              }
#line 1101 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
            }
#line 1010 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1010 "inst_util.m"
            {
#line 1012 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1012 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1010 "inst_util.m"
            }
#line 1010 "inst_util.m"
        }
#line 1005 "inst_util.m"
      else
#line 1004 "inst_util.m"
        {
#line 1004 "inst_util.m"
          *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1004 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1004 "inst_util.m"
        }
#line 1014 "inst_util.m"
    else
#line 1020 "inst_util.m"
    if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 3))
#line 1041 "inst_util.m"
      {
#line 1101 "inst_util.m"
        if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1101 "inst_util.m"
          {
#line 1103 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1101 "inst_util.m"
            if (!(check_hlds__inst_util__succeeded))
#line 1104 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1101 "inst_util.m"
          }
#line 1101 "inst_util.m"
        else
#line 1101 "inst_util.m"
          {
#line 1102 "inst_util.m"
            {
#line 1102 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
            }
#line 1101 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
          }
#line 1041 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1041 "inst_util.m"
          {
#line 1043 "inst_util.m"
            *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1043 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1041 "inst_util.m"
          }
#line 1041 "inst_util.m"
      }
#line 1020 "inst_util.m"
    else
#line 1020 "inst_util.m"
    if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 4))
#line 1045 "inst_util.m"
      {
#line 1101 "inst_util.m"
        if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1101 "inst_util.m"
          {
#line 1103 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1101 "inst_util.m"
            if (!(check_hlds__inst_util__succeeded))
#line 1104 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1101 "inst_util.m"
          }
#line 1101 "inst_util.m"
        else
#line 1101 "inst_util.m"
          {
#line 1102 "inst_util.m"
            {
#line 1102 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
            }
#line 1101 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1101 "inst_util.m"
          }
#line 1045 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1045 "inst_util.m"
          {
#line 1047 "inst_util.m"
            *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1047 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1045 "inst_util.m"
          }
#line 1045 "inst_util.m"
      }
#line 1020 "inst_util.m"
    else
#line 1020 "inst_util.m"
    if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 2))
#line 1034 "inst_util.m"
      {
#line 1034 "inst_util.m"
        if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1038 "inst_util.m"
          *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1034 "inst_util.m"
        else
#line 1033 "inst_util.m"
          *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1034 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1034 "inst_util.m"
      }
#line 1020 "inst_util.m"
    else
#line 1020 "inst_util.m"
    if ((check_hlds__inst_util__UniqB_11 == (MR_Integer) 0))
#line 1019 "inst_util.m"
      {
#line 1019 "inst_util.m"
        *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1019 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1019 "inst_util.m"
      }
#line 1020 "inst_util.m"
    else
#line 1025 "inst_util.m"
      {
#line 1025 "inst_util.m"
        if ((check_hlds__inst_util__Live_7 == (MR_Integer) 1))
#line 1027 "inst_util.m"
          *check_hlds__inst_util__Uniq_12 = (MR_Integer) 1;
#line 1025 "inst_util.m"
        else
#line 1024 "inst_util.m"
          *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1025 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1025 "inst_util.m"
      }
#line 1014 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1014 "inst_util.m"
  }
#line 991 "inst_util.m"
}

#line 944 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 944 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 944 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 944 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 944 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22)
#line 944 "inst_util.m"
{
#line 949 "inst_util.m"
  {
#line 949 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 949 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;

#line 950 "inst_util.m"
    {
#line 950 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__SubInstA_12, check_hlds__inst_util__InstB_13, check_hlds__inst_util__Real_14, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
    }
#line 949 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 949 "inst_util.m"
      {
#line 952 "inst_util.m"
        {
#line 952 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_18, check_hlds__inst_util__SubInstA_12, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
        }
#line 952 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 956 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 955 "inst_util.m"
          *check_hlds__inst_util__Inst_15 = check_hlds__inst_util__Inst0_18;
#line 956 "inst_util.m"
        else
#line 959 "inst_util.m"
          {
#line 959 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVars0_19;
#line 959 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_20;

#line 956 "inst_util.m"
            check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 956 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 956 "inst_util.m"
              {
#line 956 "inst_util.m"
                check_hlds__inst_util__InstVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 1)));
#line 956 "inst_util.m"
                check_hlds__inst_util__SubInst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 2)));
#line 958 "inst_util.m"
                {
#line 958 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_24_24;

#line 958 "inst_util.m"
                  {
#line 958 "inst_util.m"
                    check_hlds__inst_util__V_24_24 = mercury__set__union_2_f_0((MR_Word) &check_hlds__inst_util_scalar_common_1[0], check_hlds__inst_util__InstVars0_19, check_hlds__inst_util__InstVarsA_11);
                  }
#line 958 "inst_util.m"
                  {
#line 958 "inst_util.m"
                    MR_Word base;
#line 958 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 958 "inst_util.m"
                    *check_hlds__inst_util__Inst_15 = base;
#line 958 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 958 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_24_24));
#line 958 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst0_20));
#line 958 "inst_util.m"
                  }
#line 958 "inst_util.m"
                }
#line 956 "inst_util.m"
              }
#line 956 "inst_util.m"
            else
#line 961 "inst_util.m"
              {
#line 961 "inst_util.m"
                MR_Word base;
#line 961 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 961 "inst_util.m"
                *check_hlds__inst_util__Inst_15 = base;
#line 961 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 961 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVarsA_11));
#line 961 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_18));
#line 961 "inst_util.m"
              }
#line 959 "inst_util.m"
          }
#line 956 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 949 "inst_util.m"
      }
#line 949 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 949 "inst_util.m"
  }
#line 944 "inst_util.m"
}

#line 928 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 928 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 928 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 928 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 928 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 928 "inst_util.m"
{
#line 933 "inst_util.m"
  {
#line 933 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 933 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "inst_util.m"
      {
#line 933 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 933 "inst_util.m"
          {
#line 933 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 933 "inst_util.m"
              {
#line 933 "inst_util.m"
                *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 933 "inst_util.m"
                *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 933 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 933 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 933 "inst_util.m"
              }
#line 933 "inst_util.m"
          }
#line 933 "inst_util.m"
      }
#line 933 "inst_util.m"
    else
#line 935 "inst_util.m"
      {
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_15;
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_16;
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__Live_17;
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__Lives_18;
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 935 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 934 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 934 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 934 "inst_util.m"
          {
#line 934 "inst_util.m"
            check_hlds__inst_util__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 934 "inst_util.m"
            check_hlds__inst_util__InstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 935 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 935 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 935 "inst_util.m"
              {
#line 935 "inst_util.m"
                check_hlds__inst_util__Live_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 935 "inst_util.m"
                check_hlds__inst_util__Lives_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 936 "inst_util.m"
                {
#line 936 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_17, check_hlds__inst_util__InstA_13, check_hlds__inst_util__InstB_15, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
                }
#line 935 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 935 "inst_util.m"
                  {
#line 938 "inst_util.m"
                    {
#line 938 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__InstsA_14, check_hlds__inst_util__InstsB_16, check_hlds__inst_util__Lives_18, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 935 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 935 "inst_util.m"
                      {
#line 935 "inst_util.m"
                        {
#line 935 "inst_util.m"
                          MR_Word base;
#line 935 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = base;
#line 935 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 935 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 935 "inst_util.m"
                        }
#line 940 "inst_util.m"
                        {
#line 940 "inst_util.m"
                          parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 940 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 935 "inst_util.m"
                      }
#line 935 "inst_util.m"
                  }
#line 935 "inst_util.m"
              }
#line 934 "inst_util.m"
          }
#line 935 "inst_util.m"
      }
#line 933 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 933 "inst_util.m"
  }
#line 928 "inst_util.m"
}

#line 909 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 909 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 909 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 909 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 909 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 909 "inst_util.m"
{
#line 914 "inst_util.m"
  while (MR_TRUE)
#line 914 "inst_util.m"
    {
#line 914 "inst_util.m"
      /* tailcall optimized into a loop */
#line 914 "inst_util.m"
      {
#line 914 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 914 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "inst_util.m"
          {
#line 914 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 914 "inst_util.m"
            *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 7;
#line 915 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 914 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 914 "inst_util.m"
          }
#line 914 "inst_util.m"
        else
#line 917 "inst_util.m"
          {
#line 917 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 917 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 917 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 0)));
#line 917 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 1)));

#line 919 "inst_util.m"
            {
#line 919 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_26, check_hlds__inst_util__ConsIdB_2);
            }
#line 923 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 921 "inst_util.m"
              {
#line 921 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_28;
#line 921 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 921 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;

#line 920 "inst_util.m"
                {
#line 920 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__ArgsA_27, check_hlds__inst_util__ArgsB_3, check_hlds__inst_util__LivesB_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Args_28, check_hlds__inst_util__HeadVar__7_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 921 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 921 "inst_util.m"
                  {
#line 922 "inst_util.m"
                    check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 922 "inst_util.m"
                    {
#line 922 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 922 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_26));
#line 922 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 1) = ((MR_Box) (check_hlds__inst_util__Args_28));
#line 922 "inst_util.m"
                    }
#line 922 "inst_util.m"
                    {
#line 922 "inst_util.m"
                      MR_Word base;
#line 922 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 922 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 922 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 922 "inst_util.m"
                    }
#line 922 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 921 "inst_util.m"
                  }
#line 921 "inst_util.m"
              }
#line 923 "inst_util.m"
            else
#line 924 "inst_util.m"
              {
#line 924 "inst_util.m"
                /* direct tailcall eliminated */
#line 924 "inst_util.m"
                {
#line 924 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInstsA_18;

#line 924 "inst_util.m"
                  check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 924 "inst_util.m"
                }
#line 924 "inst_util.m"
                continue;
#line 924 "inst_util.m"
              }
#line 917 "inst_util.m"
          }
#line 914 "inst_util.m"
        return check_hlds__inst_util__succeeded;
#line 914 "inst_util.m"
      }
#line 914 "inst_util.m"
      break;
#line 914 "inst_util.m"
    }
#line 909 "inst_util.m"
}

#line 866 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 866 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 866 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 866 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 866 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 866 "inst_util.m"
{
#line 871 "inst_util.m"
  {
#line 871 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 871 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "inst_util.m"
      {
#line 871 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "inst_util.m"
          {
#line 871 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 6;
#line 872 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 871 "inst_util.m"
          }
#line 871 "inst_util.m"
        else
#line 873 "inst_util.m"
          {
#line 873 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 874 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 873 "inst_util.m"
          }
#line 871 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 871 "inst_util.m"
      }
#line 871 "inst_util.m"
    else
#line 871 "inst_util.m"
      {
#line 871 "inst_util.m"
        MR_Word check_hlds__inst_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 871 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));

#line 871 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "inst_util.m"
          {
#line 875 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 876 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 875 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 875 "inst_util.m"
          }
#line 871 "inst_util.m"
        else
#line 879 "inst_util.m"
          {
#line 879 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 879 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 879 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 0)));
#line 879 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 1)));
#line 879 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 0)));
#line 879 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 1)));

#line 882 "inst_util.m"
            {
#line 882 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
            }
#line 896 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 884 "inst_util.m"
              {
#line 884 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_41;
#line 884 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_42;
#line 884 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_43;
#line 884 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism2_44;
#line 884 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 890 "inst_util.m"
                MR_Word check_hlds__inst_util__V_50_50;
#line 890 "inst_util.m"
                MR_Word check_hlds__inst_util__V_60_60;
#line 890 "inst_util.m"
                MR_Word check_hlds__inst_util__V_45_45;

#line 883 "inst_util.m"
                {
#line 883 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__ArgsA_38, check_hlds__inst_util__ArgsB_40, check_hlds__inst_util__Live_1, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Args_41, &check_hlds__inst_util__Detism1_42, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                }
#line 884 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 884 "inst_util.m"
                  {
#line 885 "inst_util.m"
                    {
#line 885 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInstsTail_43, &check_hlds__inst_util__Detism2_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 884 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 884 "inst_util.m"
                      {
#line 890 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Integer) 0;
#line 890 "inst_util.m"
                        {
#line 890 "inst_util.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism1_42, &check_hlds__inst_util__V_45_45, &check_hlds__inst_util__V_60_60);
                        }
#line 890 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_50_50 == check_hlds__inst_util__V_60_60);
#line 892 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 891 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = check_hlds__inst_util__BoundInstsTail_43;
#line 892 "inst_util.m"
                        else
#line 893 "inst_util.m"
                          {
#line 893 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_51_51;

#line 893 "inst_util.m"
                            {
#line 893 "inst_util.m"
                              check_hlds__inst_util__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 893 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_37));
#line 893 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 1) = ((MR_Box) (check_hlds__inst_util__Args_41));
#line 893 "inst_util.m"
                            }
#line 893 "inst_util.m"
                            {
#line 893 "inst_util.m"
                              MR_Word base;
#line 893 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "inst_util.m"
                              *check_hlds__inst_util__HeadVar__5_5 = base;
#line 893 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 893 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_43));
#line 893 "inst_util.m"
                            }
#line 893 "inst_util.m"
                          }
#line 895 "inst_util.m"
                        {
#line 895 "inst_util.m"
                          parse_tree__prog_data__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_42, check_hlds__inst_util__Detism2_44, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 895 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 884 "inst_util.m"
                      }
#line 884 "inst_util.m"
                  }
#line 884 "inst_util.m"
              }
#line 896 "inst_util.m"
            else
#line 905 "inst_util.m"
              {
#line 905 "inst_util.m"
                MR_Word check_hlds__inst_util__V_57_57;
#line 905 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_58;
#line 897 "inst_util.m"
                MR_Word check_hlds__inst_util__V_61_61;

#line 897 "inst_util.m"
                {
#line 897 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_61_61, check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
                }
#line 897 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_61_61);
#line 901 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 898 "inst_util.m"
                  {
#line 898 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__HeadVar__3_3, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 901 "inst_util.m"
                else
#line 902 "inst_util.m"
                  {
#line 902 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 905 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 905 "inst_util.m"
                  {
#line 906 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Integer) 7;
#line 906 "inst_util.m"
                    {
#line 906 "inst_util.m"
                      parse_tree__prog_data__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_58, check_hlds__inst_util__V_57_57, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 906 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 905 "inst_util.m"
                  }
#line 905 "inst_util.m"
              }
#line 879 "inst_util.m"
          }
#line 871 "inst_util.m"
      }
#line 871 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 871 "inst_util.m"
  }
#line 866 "inst_util.m"
}

#line 831 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 831 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 831 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 831 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 831 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
#line 831 "inst_util.m"
{
#line 846 "inst_util.m"
  {
#line 846 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 838 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 838 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 844 "inst_util.m"
      {
#line 844 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 844 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
#line 844 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 844 "inst_util.m"
      }
#line 846 "inst_util.m"
    else
#line 848 "inst_util.m"
      {
#line 848 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism0_16;
#line 855 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdA_17;
#line 855 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdB_19;
#line 855 "inst_util.m"
        MR_Word check_hlds__inst_util__V_26_26;
#line 855 "inst_util.m"
        MR_Word check_hlds__inst_util__V_27_27;
#line 855 "inst_util.m"
        MR_Word check_hlds__inst_util__V_28_28;
#line 855 "inst_util.m"
        MR_Word check_hlds__inst_util__V_29_29;
#line 855 "inst_util.m"
        MR_Word check_hlds__inst_util__V_18_18;
#line 856 "inst_util.m"
        MR_Word check_hlds__inst_util__V_20_20;

#line 847 "inst_util.m"
        {
#line 847 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_10, check_hlds__inst_util__BoundInstsB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__BoundInsts_13, &check_hlds__inst_util__Detism0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
        }
#line 848 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 848 "inst_util.m"
          {
#line 855 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_10)) == (MR_mktag((MR_Integer) 1)));
#line 855 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 855 "inst_util.m"
              {
#line 855 "inst_util.m"
                check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 0)));
#line 855 "inst_util.m"
                check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 1)));
#line 855 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 855 "inst_util.m"
                  {
#line 855 "inst_util.m"
                    check_hlds__inst_util__ConsIdA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 0)));
#line 855 "inst_util.m"
                    check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 1)));
#line 856 "inst_util.m"
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_11)) == (MR_mktag((MR_Integer) 1)));
#line 856 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
                      {
#line 856 "inst_util.m"
                        check_hlds__inst_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 0)));
#line 856 "inst_util.m"
                        check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 1)));
#line 856 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 855 "inst_util.m"
                          {
#line 856 "inst_util.m"
                            check_hlds__inst_util__ConsIdB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 0)));
#line 856 "inst_util.m"
                            check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 1)));
#line 857 "inst_util.m"
                            {
#line 857 "inst_util.m"
                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_17, check_hlds__inst_util__ConsIdB_19);
                            }
#line 855 "inst_util.m"
                          }
#line 856 "inst_util.m"
                      }
#line 855 "inst_util.m"
                  }
#line 855 "inst_util.m"
              }
#line 860 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 859 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_16;
#line 860 "inst_util.m"
            else
#line 861 "inst_util.m"
              {
#line 861 "inst_util.m"
                MR_Word check_hlds__inst_util__MaxSoln_22;
#line 861 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;

#line 861 "inst_util.m"
                {
#line 861 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_16, &check_hlds__inst_util__V_21_21, &check_hlds__inst_util__MaxSoln_22);
                }
#line 862 "inst_util.m"
                {
#line 862 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_14, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_22);
                }
#line 861 "inst_util.m"
              }
#line 860 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 848 "inst_util.m"
          }
#line 848 "inst_util.m"
      }
#line 846 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 846 "inst_util.m"
  }
#line 831 "inst_util.m"
}

#line 706 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 706 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 706 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 706 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 706 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40)
#line 706 "inst_util.m"
{
#line 718 "inst_util.m"
  {
#line 718 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 718 "inst_util.m"
    if ((check_hlds__inst_util__InstA_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "inst_util.m"
      {
#line 719 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_22;
#line 719 "inst_util.m"
        MR_Word check_hlds__inst_util__V_61_61;
#line 719 "inst_util.m"
        MR_Word check_hlds__inst_util__V_62_62;
#line 719 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63;
#line 719 "inst_util.m"
        MR_Word check_hlds__inst_util__V_64_64;
#line 719 "inst_util.m"
        MR_Word check_hlds__inst_util__V_65_65;

#line 726 "inst_util.m"
        if ((check_hlds__inst_util__Live_12 == (MR_Integer) 1))
#line 727 "inst_util.m"
          {
#line 728 "inst_util.m"
            check_hlds__inst_util__ArgInsts_22 = check_hlds__inst_util__ArgInstsB_15;
#line 727 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 727 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 727 "inst_util.m"
          }
#line 726 "inst_util.m"
        else
#line 721 "inst_util.m"
          {
#line 722 "inst_util.m"
            {
#line 722 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39);
            }
#line 721 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 721 "inst_util.m"
              {
#line 724 "inst_util.m"
                {
#line 724 "inst_util.m"
                  check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, &check_hlds__inst_util__ArgInsts_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                }
#line 724 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 721 "inst_util.m"
              }
#line 721 "inst_util.m"
          }
#line 719 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 719 "inst_util.m"
          {
#line 731 "inst_util.m"
            check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 731 "inst_util.m"
            check_hlds__inst_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 732 "inst_util.m"
            check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 733 "inst_util.m"
            *check_hlds__inst_util__Detism_20 = (MR_Integer) 0;
#line 732 "inst_util.m"
            {
#line 732 "inst_util.m"
              check_hlds__inst_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 732 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 732 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_22));
#line 732 "inst_util.m"
            }
#line 732 "inst_util.m"
            {
#line 732 "inst_util.m"
              check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 0) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 732 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 1) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 732 "inst_util.m"
            }
#line 731 "inst_util.m"
            {
#line 731 "inst_util.m"
              MR_Word base;
#line 731 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 731 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = base;
#line 731 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 731 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_61_61));
#line 731 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_62_62));
#line 731 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 731 "inst_util.m"
            }
#line 731 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 719 "inst_util.m"
          }
#line 719 "inst_util.m"
      }
#line 718 "inst_util.m"
    else
#line 718 "inst_util.m"
    if ((check_hlds__inst_util__InstA_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 715 "inst_util.m"
      {
#line 716 "inst_util.m"
        *check_hlds__inst_util__Inst_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 717 "inst_util.m"
        *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 715 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 715 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 715 "inst_util.m"
      }
#line 718 "inst_util.m"
    else
#line 718 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) == (MR_mktag((MR_Integer) 2))))
#line 735 "inst_util.m"
      {
#line 735 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 0)));
#line 735 "inst_util.m"
        MR_Word check_hlds__inst_util__V_56_56;
#line 735 "inst_util.m"
        MR_Word check_hlds__inst_util__V_57_57;
#line 735 "inst_util.m"
        MR_Word check_hlds__inst_util__V_58_58;
#line 735 "inst_util.m"
        MR_Word check_hlds__inst_util__V_59_59;
#line 735 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_66;
#line 735 "inst_util.m"
        MR_Word check_hlds__inst_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));

#line 738 "inst_util.m"
        {
#line 738 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__Type_18);
        }
#line 738 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 735 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 735 "inst_util.m"
          {
#line 743 "inst_util.m"
            if ((check_hlds__inst_util__Live_12 == (MR_Integer) 1))
#line 745 "inst_util.m"
              {
#line 745 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
              }
#line 743 "inst_util.m"
            else
#line 741 "inst_util.m"
              {
#line 741 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
              }
#line 735 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 735 "inst_util.m"
              {
#line 749 "inst_util.m"
                check_hlds__inst_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 750 "inst_util.m"
                check_hlds__inst_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 750 "inst_util.m"
                {
#line 750 "inst_util.m"
                  check_hlds__inst_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 750 "inst_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 750 "inst_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_66));
#line 750 "inst_util.m"
                }
#line 750 "inst_util.m"
                {
#line 750 "inst_util.m"
                  check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 0) = ((MR_Box) (check_hlds__inst_util__V_58_58));
#line 750 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 1) = ((MR_Box) (check_hlds__inst_util__V_59_59));
#line 750 "inst_util.m"
                }
#line 749 "inst_util.m"
                {
#line 749 "inst_util.m"
                  MR_Word base;
#line 749 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 749 "inst_util.m"
                  *check_hlds__inst_util__Inst_19 = base;
#line 749 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 749 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_23));
#line 749 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_56_56));
#line 749 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 749 "inst_util.m"
                }
#line 749 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 735 "inst_util.m"
              }
#line 735 "inst_util.m"
          }
#line 735 "inst_util.m"
      }
#line 718 "inst_util.m"
    else
#line 718 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 752 "inst_util.m"
      {
#line 752 "inst_util.m"
        MR_Word check_hlds__inst_util__UniqA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 752 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInstsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 3)));
#line 752 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_28;
#line 752 "inst_util.m"
        MR_Word check_hlds__inst_util__V_53_53;
#line 752 "inst_util.m"
        MR_Word check_hlds__inst_util___InstResultsA_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 757 "inst_util.m"
        if ((check_hlds__inst_util__Live_12 == (MR_Integer) 1))
#line 758 "inst_util.m"
          {
#line 758 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_29;
#line 758 "inst_util.m"
            MR_Word check_hlds__inst_util__V_48_48;

#line 759 "inst_util.m"
            {
#line 759 "inst_util.m"
              check_hlds__inst_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 759 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 759 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (check_hlds__inst_util__ArgInstsB_15));
#line 759 "inst_util.m"
            }
#line 759 "inst_util.m"
            {
#line 759 "inst_util.m"
              check_hlds__inst_util__BoundInstsB_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 0) = ((MR_Box) (check_hlds__inst_util__V_48_48));
#line 759 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "inst_util.m"
            }
#line 838 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 844 "inst_util.m"
              {
#line 844 "inst_util.m"
                check_hlds__inst_util__BoundInsts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "inst_util.m"
                *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 844 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 844 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 844 "inst_util.m"
              }
#line 846 "inst_util.m"
            else
#line 848 "inst_util.m"
              {
#line 848 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism0_78;
#line 855 "inst_util.m"
                MR_Word check_hlds__inst_util__ConsIdA_79;
#line 855 "inst_util.m"
                MR_Word check_hlds__inst_util__ConsIdB_81;
#line 855 "inst_util.m"
                MR_Word check_hlds__inst_util__V_86_86;
#line 855 "inst_util.m"
                MR_Word check_hlds__inst_util__V_87_87;
#line 855 "inst_util.m"
                MR_Word check_hlds__inst_util__V_88_88;
#line 855 "inst_util.m"
                MR_Word check_hlds__inst_util__V_89_89;
#line 855 "inst_util.m"
                MR_Word check_hlds__inst_util__V_80_80;
#line 856 "inst_util.m"
                MR_Word check_hlds__inst_util__V_82_82;

#line 847 "inst_util.m"
                {
#line 847 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0((MR_Integer) 1, check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__BoundInstsB_29, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, &check_hlds__inst_util__Detism0_78, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                }
#line 848 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 848 "inst_util.m"
                  {
#line 855 "inst_util.m"
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_27)) == (MR_mktag((MR_Integer) 1)));
#line 855 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 855 "inst_util.m"
                      {
#line 855 "inst_util.m"
                        check_hlds__inst_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 0)));
#line 855 "inst_util.m"
                        check_hlds__inst_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 1)));
#line 855 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 855 "inst_util.m"
                          {
#line 855 "inst_util.m"
                            check_hlds__inst_util__ConsIdA_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 0)));
#line 855 "inst_util.m"
                            check_hlds__inst_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 1)));
#line 856 "inst_util.m"
                            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_29)) == (MR_mktag((MR_Integer) 1)));
#line 856 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 856 "inst_util.m"
                              {
#line 856 "inst_util.m"
                                check_hlds__inst_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 0)));
#line 856 "inst_util.m"
                                check_hlds__inst_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 1)));
#line 856 "inst_util.m"
                                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "inst_util.m"
                                if (check_hlds__inst_util__succeeded)
#line 855 "inst_util.m"
                                  {
#line 856 "inst_util.m"
                                    check_hlds__inst_util__ConsIdB_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 0)));
#line 856 "inst_util.m"
                                    check_hlds__inst_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 1)));
#line 857 "inst_util.m"
                                    {
#line 857 "inst_util.m"
                                      check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_79, check_hlds__inst_util__ConsIdB_81);
                                    }
#line 855 "inst_util.m"
                                  }
#line 856 "inst_util.m"
                              }
#line 855 "inst_util.m"
                          }
#line 855 "inst_util.m"
                      }
#line 860 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 859 "inst_util.m"
                      *check_hlds__inst_util__Detism_20 = check_hlds__inst_util__Detism0_78;
#line 860 "inst_util.m"
                    else
#line 861 "inst_util.m"
                      {
#line 861 "inst_util.m"
                        MR_Word check_hlds__inst_util__MaxSoln_84;
#line 861 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_83_83;

#line 861 "inst_util.m"
                        {
#line 861 "inst_util.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_78, &check_hlds__inst_util__V_83_83, &check_hlds__inst_util__MaxSoln_84);
                        }
#line 862 "inst_util.m"
                        {
#line 862 "inst_util.m"
                          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_20, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_84);
                        }
#line 861 "inst_util.m"
                      }
#line 860 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 848 "inst_util.m"
                  }
#line 848 "inst_util.m"
              }
#line 758 "inst_util.m"
          }
#line 757 "inst_util.m"
        else
#line 755 "inst_util.m"
          {
#line 755 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
          }
#line 752 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 752 "inst_util.m"
          {
#line 764 "inst_util.m"
            check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 764 "inst_util.m"
            {
#line 764 "inst_util.m"
              MR_Word base;
#line 764 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 764 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = base;
#line 764 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 764 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_25));
#line 764 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 764 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_28));
#line 764 "inst_util.m"
            }
#line 764 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 752 "inst_util.m"
          }
#line 752 "inst_util.m"
      }
#line 718 "inst_util.m"
    else
#line 718 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 780 "inst_util.m"
      {
#line 780 "inst_util.m"
        MR_Word check_hlds__inst_util__InstVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 780 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInstA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));
#line 780 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_33;

#line 781 "inst_util.m"
        {
#line 781 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__SubInstA_32, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, &check_hlds__inst_util__Inst0_33, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
        }
#line 780 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 780 "inst_util.m"
          {
#line 783 "inst_util.m"
            {
#line 783 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_33, check_hlds__inst_util__SubInstA_32, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
            }
#line 786 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 785 "inst_util.m"
              {
#line 785 "inst_util.m"
                MR_Word base;
#line 785 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 785 "inst_util.m"
                *check_hlds__inst_util__Inst_19 = base;
#line 785 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 785 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_31));
#line 785 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_33));
#line 785 "inst_util.m"
              }
#line 786 "inst_util.m"
            else
#line 799 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = check_hlds__inst_util__Inst0_33;
#line 786 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 780 "inst_util.m"
          }
#line 780 "inst_util.m"
      }
#line 718 "inst_util.m"
    else
#line 718 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 766 "inst_util.m"
      {
#line 766 "inst_util.m"
        MR_Word check_hlds__inst_util__V_44_44;
#line 766 "inst_util.m"
        MR_Word check_hlds__inst_util__V_45_45;
#line 766 "inst_util.m"
        MR_Word check_hlds__inst_util__V_46_46;
#line 766 "inst_util.m"
        MR_Word check_hlds__inst_util__V_47_47;
#line 766 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_67;
#line 766 "inst_util.m"
        MR_Word check_hlds__inst_util__UniqA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 766 "inst_util.m"
        MR_Word check_hlds__inst_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 771 "inst_util.m"
        if ((check_hlds__inst_util__Live_12 == (MR_Integer) 1))
#line 773 "inst_util.m"
          {
#line 773 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
          }
#line 771 "inst_util.m"
        else
#line 769 "inst_util.m"
          {
#line 769 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
          }
#line 766 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 766 "inst_util.m"
          {
#line 777 "inst_util.m"
            check_hlds__inst_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 778 "inst_util.m"
            check_hlds__inst_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 778 "inst_util.m"
            {
#line 778 "inst_util.m"
              check_hlds__inst_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 778 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_67));
#line 778 "inst_util.m"
            }
#line 778 "inst_util.m"
            {
#line 778 "inst_util.m"
              check_hlds__inst_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 0) = ((MR_Box) (check_hlds__inst_util__V_46_46));
#line 778 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 1) = ((MR_Box) (check_hlds__inst_util__V_47_47));
#line 778 "inst_util.m"
            }
#line 777 "inst_util.m"
            {
#line 777 "inst_util.m"
              MR_Word base;
#line 777 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 777 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = base;
#line 777 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 777 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_68));
#line 777 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_44_44));
#line 777 "inst_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_45_45));
#line 777 "inst_util.m"
            }
#line 777 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 766 "inst_util.m"
          }
#line 766 "inst_util.m"
      }
#line 718 "inst_util.m"
    else
#line 718 "inst_util.m"
      check_hlds__inst_util__succeeded = MR_FALSE;
#line 718 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 718 "inst_util.m"
  }
#line 706 "inst_util.m"
}

#line 685 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 685 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 685 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 685 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 685 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 685 "inst_util.m"
{
#line 689 "inst_util.m"
  {
#line 689 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 689 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "inst_util.m"
      {
#line 689 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 689 "inst_util.m"
          {
#line 689 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 689 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 689 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 689 "inst_util.m"
          }
#line 689 "inst_util.m"
      }
#line 689 "inst_util.m"
    else
#line 691 "inst_util.m"
      {
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_16;
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_17;
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 691 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 690 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 690 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 690 "inst_util.m"
          {
#line 690 "inst_util.m"
            check_hlds__inst_util__InstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "inst_util.m"
            check_hlds__inst_util__InstsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 692 "inst_util.m"
            {
#line 692 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_3, check_hlds__inst_util__InstA_14, check_hlds__inst_util__InstB_16, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
#line 691 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 691 "inst_util.m"
              {
#line 694 "inst_util.m"
                {
#line 694 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__InstsA_15, check_hlds__inst_util__InstsB_17, check_hlds__inst_util__Live_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                }
#line 691 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 691 "inst_util.m"
                  {
#line 691 "inst_util.m"
                    {
#line 691 "inst_util.m"
                      MR_Word base;
#line 691 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__5_5 = base;
#line 691 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 691 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 691 "inst_util.m"
                    }
#line 696 "inst_util.m"
                    {
#line 696 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 696 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 691 "inst_util.m"
                  }
#line 691 "inst_util.m"
              }
#line 690 "inst_util.m"
          }
#line 691 "inst_util.m"
      }
#line 689 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 689 "inst_util.m"
  }
#line 685 "inst_util.m"
}

#line 268 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 268 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 268 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 268 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 268 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64)
#line 268 "inst_util.m"
{
#line 278 "inst_util.m"
  {
#line 278 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 278 "inst_util.m"
    if ((check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "inst_util.m"
      if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 337 "inst_util.m"
        {
#line 338 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstB_11;
#line 339 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 337 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 337 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 337 "inst_util.m"
        }
#line 336 "inst_util.m"
      else
#line 287 "inst_util.m"
      if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 284 "inst_util.m"
        {
#line 285 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 286 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 284 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 284 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 284 "inst_util.m"
        }
#line 287 "inst_util.m"
      else
#line 287 "inst_util.m"
      if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 2))))
#line 312 "inst_util.m"
        {
#line 312 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 312 "inst_util.m"
          MR_Word check_hlds__inst_util__UniqB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 312 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_116;

#line 313 "inst_util.m"
          {
#line 313 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_115, &check_hlds__inst_util__Uniq_116);
          }
#line 312 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 312 "inst_util.m"
            {
#line 315 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 312 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 314 "inst_util.m"
              {
#line 314 "inst_util.m"
                MR_Word base;
#line 314 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 314 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_116));
#line 314 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_22));
#line 314 "inst_util.m"
              }
#line 314 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 312 "inst_util.m"
            }
#line 312 "inst_util.m"
        }
#line 287 "inst_util.m"
      else
#line 287 "inst_util.m"
      if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 291 "inst_util.m"
        {
#line 291 "inst_util.m"
          MR_Word check_hlds__inst_util__UniqB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 291 "inst_util.m"
          MR_Word check_hlds__inst_util__InstResultsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 291 "inst_util.m"
          MR_Word check_hlds__inst_util__BoundInstsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 291 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_19;
#line 291 "inst_util.m"
          MR_Word check_hlds__inst_util__BoundInsts_20;

#line 292 "inst_util.m"
          {
#line 292 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_16, &check_hlds__inst_util__Uniq_19);
          }
#line 291 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 291 "inst_util.m"
            {
#line 294 "inst_util.m"
              {
#line 294 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_17, check_hlds__inst_util__BoundInstsB_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
              }
#line 291 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 291 "inst_util.m"
                {
#line 298 "inst_util.m"
                  if ((check_hlds__inst_util__UniqB_16 == (MR_Integer) 2))
#line 298 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 298 "inst_util.m"
                  else
#line 298 "inst_util.m"
                  if ((check_hlds__inst_util__UniqB_16 == (MR_Integer) 1))
#line 298 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 298 "inst_util.m"
                  else
#line 298 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 301 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 299 "inst_util.m"
                    {
#line 299 "inst_util.m"
                      check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsB_18, &check_hlds__inst_util__BoundInsts_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                    }
#line 301 "inst_util.m"
                  else
#line 302 "inst_util.m"
                    {
#line 302 "inst_util.m"
                      check_hlds__inst_util__BoundInsts_20 = check_hlds__inst_util__BoundInstsB_18;
#line 302 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 302 "inst_util.m"
                    }
#line 305 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 304 "inst_util.m"
                  {
#line 304 "inst_util.m"
                    MR_Word base;
#line 304 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 304 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 304 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 304 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_19));
#line 304 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_17));
#line 304 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_20));
#line 304 "inst_util.m"
                  }
#line 304 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 291 "inst_util.m"
                }
#line 291 "inst_util.m"
            }
#line 291 "inst_util.m"
        }
#line 287 "inst_util.m"
      else
#line 287 "inst_util.m"
      if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 317 "inst_util.m"
        {
#line 317 "inst_util.m"
          MR_Word check_hlds__inst_util__InstVarsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 317 "inst_util.m"
          MR_Word check_hlds__inst_util__SubInstB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 318 "inst_util.m"
          {
#line 318 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_23, check_hlds__inst_util__SubInstB_24, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
          }
#line 317 "inst_util.m"
        }
#line 287 "inst_util.m"
      else
#line 287 "inst_util.m"
      if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 307 "inst_util.m"
        {
#line 307 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 307 "inst_util.m"
          MR_Word check_hlds__inst_util__UniqB_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 307 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_114;

#line 308 "inst_util.m"
          {
#line 308 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_113, &check_hlds__inst_util__Uniq_114);
          }
#line 307 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 307 "inst_util.m"
            {
#line 310 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 307 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 309 "inst_util.m"
              {
#line 309 "inst_util.m"
                MR_Word base;
#line 309 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 309 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 309 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 309 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_114));
#line 309 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoB_21));
#line 309 "inst_util.m"
              }
#line 309 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 307 "inst_util.m"
            }
#line 307 "inst_util.m"
        }
#line 287 "inst_util.m"
      else
#line 287 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 278 "inst_util.m"
    else
#line 278 "inst_util.m"
    if ((check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "inst_util.m"
      {
#line 276 "inst_util.m"
        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 277 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 275 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 275 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 275 "inst_util.m"
      }
#line 278 "inst_util.m"
    else
#line 278 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) == (MR_mktag((MR_Integer) 2))))
#line 533 "inst_util.m"
      {
#line 533 "inst_util.m"
        MR_Word check_hlds__inst_util__UniqA_298 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 0)));
#line 533 "inst_util.m"
        MR_Word check_hlds__inst_util__HOInstInfoA_303 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 538 "inst_util.m"
        if ((check_hlds__inst_util__HOInstInfoA_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "inst_util.m"
          {
#line 536 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
          }
#line 538 "inst_util.m"
        else
#line 545 "inst_util.m"
        if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "inst_util.m"
          {
#line 546 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_224;

#line 550 "inst_util.m"
            if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 552 "inst_util.m"
              {
#line 552 "inst_util.m"
                check_hlds__inst_util__Uniq_224 = check_hlds__inst_util__UniqA_298;
#line 552 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 552 "inst_util.m"
              }
#line 550 "inst_util.m"
            else
#line 548 "inst_util.m"
              {
#line 549 "inst_util.m"
                {
#line 549 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, &check_hlds__inst_util__Uniq_224);
                }
#line 548 "inst_util.m"
              }
#line 546 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 546 "inst_util.m"
              {
#line 555 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 546 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 554 "inst_util.m"
                {
#line 554 "inst_util.m"
                  MR_Word base;
#line 554 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = base;
#line 554 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_224));
#line 554 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 554 "inst_util.m"
                }
#line 554 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 546 "inst_util.m"
              }
#line 546 "inst_util.m"
          }
#line 545 "inst_util.m"
        else
#line 545 "inst_util.m"
        if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 542 "inst_util.m"
          {
#line 543 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 544 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 542 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 542 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 542 "inst_util.m"
          }
#line 545 "inst_util.m"
        else
#line 545 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 2))))
#line 575 "inst_util.m"
          {
#line 575 "inst_util.m"
            MR_Word check_hlds__inst_util__V_67_67;
#line 575 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_237;
#line 575 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_238;
#line 575 "inst_util.m"
            MR_Word check_hlds__inst_util___HOInstInfoB_236;

#line 581 "inst_util.m"
            if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 582 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 581 "inst_util.m"
            else
#line 580 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 575 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 575 "inst_util.m"
              {
#line 575 "inst_util.m"
                check_hlds__inst_util__UniqB_237 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 575 "inst_util.m"
                check_hlds__inst_util___HOInstInfoB_236 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 584 "inst_util.m"
                check_hlds__inst_util__V_67_67 = (MR_Integer) 1;
#line 584 "inst_util.m"
                {
#line 584 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_67_67, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_237, &check_hlds__inst_util__Uniq_238);
                }
#line 575 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 575 "inst_util.m"
                  {
#line 586 "inst_util.m"
                    *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 575 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 585 "inst_util.m"
                    {
#line 585 "inst_util.m"
                      MR_Word base;
#line 585 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 585 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_238));
#line 585 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 585 "inst_util.m"
                    }
#line 585 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 575 "inst_util.m"
                  }
#line 575 "inst_util.m"
              }
#line 575 "inst_util.m"
          }
#line 545 "inst_util.m"
        else
#line 545 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 557 "inst_util.m"
          {
#line 557 "inst_util.m"
            MR_Word check_hlds__inst_util__V_71_71;
#line 557 "inst_util.m"
            MR_Word check_hlds__inst_util__V_72_72;
#line 557 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 557 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 557 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_228;
#line 557 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_229;
#line 557 "inst_util.m"
            MR_Word check_hlds__inst_util__Detism1_231;
#line 557 "inst_util.m"
            MR_Word check_hlds__inst_util___InstResultsB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 559 "inst_util.m"
            {
#line 559 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_226, &check_hlds__inst_util__Uniq_228);
            }
#line 557 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 557 "inst_util.m"
              {
#line 560 "inst_util.m"
                {
#line 560 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_227, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_229, &check_hlds__inst_util__Detism1_231, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                }
#line 557 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 557 "inst_util.m"
                  {
#line 564 "inst_util.m"
                    check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "inst_util.m"
                    check_hlds__inst_util__V_72_72 = (MR_Integer) 1;
#line 564 "inst_util.m"
                    {
#line 564 "inst_util.m"
                      MR_Word base;
#line 564 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 564 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 564 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 564 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_228));
#line 564 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 564 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_229));
#line 564 "inst_util.m"
                    }
#line 565 "inst_util.m"
                    {
#line 565 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_231, check_hlds__inst_util__V_72_72, check_hlds__inst_util__Detism_14);
                    }
#line 565 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 557 "inst_util.m"
                  }
#line 557 "inst_util.m"
              }
#line 557 "inst_util.m"
          }
#line 545 "inst_util.m"
        else
#line 545 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 588 "inst_util.m"
          {
#line 588 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVarsB_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 588 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInstB_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 589 "inst_util.m"
            {
#line 589 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_240, check_hlds__inst_util__SubInstB_241, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
#line 588 "inst_util.m"
          }
#line 545 "inst_util.m"
        else
#line 545 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 567 "inst_util.m"
          {
#line 567 "inst_util.m"
            MR_Word check_hlds__inst_util__V_68_68;
#line 567 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_233;
#line 567 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_234;
#line 567 "inst_util.m"
            MR_Word check_hlds__inst_util___HOInstInfoB_232;

#line 570 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 567 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 567 "inst_util.m"
              {
#line 567 "inst_util.m"
                check_hlds__inst_util__UniqB_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 567 "inst_util.m"
                check_hlds__inst_util___HOInstInfoB_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 571 "inst_util.m"
                check_hlds__inst_util__V_68_68 = (MR_Integer) 1;
#line 571 "inst_util.m"
                {
#line 571 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_68_68, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_233, &check_hlds__inst_util__Uniq_234);
                }
#line 567 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 567 "inst_util.m"
                  {
#line 573 "inst_util.m"
                    *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 567 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 572 "inst_util.m"
                    {
#line 572 "inst_util.m"
                      MR_Word base;
#line 572 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 572 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 572 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 572 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_234));
#line 572 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 572 "inst_util.m"
                    }
#line 572 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 567 "inst_util.m"
                  }
#line 567 "inst_util.m"
              }
#line 567 "inst_util.m"
          }
#line 545 "inst_util.m"
        else
#line 545 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_FALSE;
#line 533 "inst_util.m"
      }
#line 278 "inst_util.m"
    else
#line 278 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 342 "inst_util.m"
      {
#line 342 "inst_util.m"
        MR_Word check_hlds__inst_util__UniqA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 342 "inst_util.m"
        MR_Word check_hlds__inst_util__InstResultsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 342 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInstsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 3)));

#line 348 "inst_util.m"
        if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "inst_util.m"
          {
#line 349 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_117;
#line 349 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_118;

#line 358 "inst_util.m"
            if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 359 "inst_util.m"
              {
#line 361 "inst_util.m"
                {
#line 361 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, check_hlds__inst_util__UniqA_30, (MR_Integer) 1, &check_hlds__inst_util__Uniq_117);
                }
#line 359 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 359 "inst_util.m"
                  {
#line 362 "inst_util.m"
                    check_hlds__inst_util__BoundInsts_118 = check_hlds__inst_util__BoundInstsA_32;
#line 359 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 359 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 359 "inst_util.m"
                  }
#line 359 "inst_util.m"
              }
#line 358 "inst_util.m"
            else
#line 351 "inst_util.m"
              {
#line 352 "inst_util.m"
                {
#line 352 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, &check_hlds__inst_util__Uniq_117);
                }
#line 351 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 351 "inst_util.m"
                  {
#line 354 "inst_util.m"
                    {
#line 354 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_31, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                    }
#line 351 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 351 "inst_util.m"
                      {
#line 356 "inst_util.m"
                        {
#line 356 "inst_util.m"
                          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsA_32, &check_hlds__inst_util__BoundInsts_118, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 356 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 351 "inst_util.m"
                      }
#line 351 "inst_util.m"
                  }
#line 351 "inst_util.m"
              }
#line 349 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 349 "inst_util.m"
              {
#line 365 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 364 "inst_util.m"
                {
#line 364 "inst_util.m"
                  MR_Word base;
#line 364 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 364 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = base;
#line 364 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 364 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_117));
#line 364 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 364 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_118));
#line 364 "inst_util.m"
                }
#line 364 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 349 "inst_util.m"
              }
#line 349 "inst_util.m"
          }
#line 348 "inst_util.m"
        else
#line 348 "inst_util.m"
        if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 345 "inst_util.m"
          {
#line 346 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 347 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 345 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 345 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 345 "inst_util.m"
          }
#line 348 "inst_util.m"
        else
#line 348 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 2))))
#line 403 "inst_util.m"
          {
#line 403 "inst_util.m"
            MR_Word check_hlds__inst_util__V_87_87;
#line 403 "inst_util.m"
            MR_Word check_hlds__inst_util__V_89_89;
#line 403 "inst_util.m"
            MR_Word check_hlds__inst_util__V_90_90;
#line 403 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 403 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_132;
#line 403 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_133;
#line 403 "inst_util.m"
            MR_Word check_hlds__inst_util__Detism1_134;
#line 403 "inst_util.m"
            MR_Word check_hlds__inst_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 404 "inst_util.m"
            {
#line 404 "inst_util.m"
              check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
            }
#line 405 "inst_util.m"
            {
#line 405 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_131, &check_hlds__inst_util__Uniq_132);
            }
#line 403 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 403 "inst_util.m"
              {
#line 407 "inst_util.m"
                check_hlds__inst_util__V_87_87 = (MR_Integer) 0;
#line 407 "inst_util.m"
                {
#line 407 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__V_87_87, check_hlds__inst_util__UniqB_131, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_133, &check_hlds__inst_util__Detism1_134, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                }
#line 403 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 403 "inst_util.m"
                  {
#line 410 "inst_util.m"
                    check_hlds__inst_util__V_89_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "inst_util.m"
                    check_hlds__inst_util__V_90_90 = (MR_Integer) 1;
#line 410 "inst_util.m"
                    {
#line 410 "inst_util.m"
                      MR_Word base;
#line 410 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 410 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 410 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 410 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_132));
#line 410 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_89_89));
#line 410 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_133));
#line 410 "inst_util.m"
                    }
#line 411 "inst_util.m"
                    {
#line 411 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_134, check_hlds__inst_util__V_90_90, check_hlds__inst_util__Detism_14);
                    }
#line 411 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 403 "inst_util.m"
                  }
#line 403 "inst_util.m"
              }
#line 403 "inst_util.m"
          }
#line 348 "inst_util.m"
        else
#line 348 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 367 "inst_util.m"
          {
#line 367 "inst_util.m"
            MR_Word check_hlds__inst_util__V_96_96;
#line 367 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 367 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 367 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_121;
#line 367 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_122;
#line 367 "inst_util.m"
            MR_Word check_hlds__inst_util___InstResultsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 368 "inst_util.m"
            {
#line 368 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__BoundInstsB_120, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_122, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
#line 367 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 367 "inst_util.m"
              {
#line 370 "inst_util.m"
                {
#line 370 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, *check_hlds__inst_util__Detism_14, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_119, &check_hlds__inst_util__Uniq_121);
                }
#line 367 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 367 "inst_util.m"
                  {
#line 372 "inst_util.m"
                    check_hlds__inst_util__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "inst_util.m"
                    {
#line 372 "inst_util.m"
                      MR_Word base;
#line 372 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 372 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 372 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 372 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_121));
#line 372 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_96_96));
#line 372 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_122));
#line 372 "inst_util.m"
                    }
#line 372 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 367 "inst_util.m"
                  }
#line 367 "inst_util.m"
              }
#line 367 "inst_util.m"
          }
#line 348 "inst_util.m"
        else
#line 348 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 413 "inst_util.m"
          {
#line 413 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVarsB_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 413 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInstB_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 414 "inst_util.m"
            {
#line 414 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_135, check_hlds__inst_util__SubInstB_136, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
#line 413 "inst_util.m"
          }
#line 348 "inst_util.m"
        else
#line 348 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 374 "inst_util.m"
          {
#line 374 "inst_util.m"
            MR_Word check_hlds__inst_util__Detism1_35;
#line 374 "inst_util.m"
            MR_Word check_hlds__inst_util__V_94_94;
#line 374 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 374 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_129;
#line 374 "inst_util.m"
            MR_Word check_hlds__inst_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 375 "inst_util.m"
            {
#line 375 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_128, &check_hlds__inst_util__Uniq_129);
            }
#line 374 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 374 "inst_util.m"
              {
#line 380 "inst_util.m"
                if ((check_hlds__inst_util__InstResultsA_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "inst_util.m"
                  {
#line 396 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInsts_126;

#line 397 "inst_util.m"
                    {
#line 397 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_126, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                    }
#line 396 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 396 "inst_util.m"
                      {
#line 399 "inst_util.m"
                        {
#line 399 "inst_util.m"
                          MR_Word base;
#line 399 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 399 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = base;
#line 399 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 399 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 399 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 399 "inst_util.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_126));
#line 399 "inst_util.m"
                        }
#line 399 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 396 "inst_util.m"
                      }
#line 396 "inst_util.m"
                  }
#line 380 "inst_util.m"
                else
#line 380 "inst_util.m"
                if ((check_hlds__inst_util__InstResultsA_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 377 "inst_util.m"
                  {
#line 378 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 379 "inst_util.m"
                    check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 377 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 377 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 377 "inst_util.m"
                  }
#line 380 "inst_util.m"
                else
#line 382 "inst_util.m"
                  {
#line 382 "inst_util.m"
                    MR_Word check_hlds__inst_util__GroundnessResultA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 0)));
#line 381 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 1)));
#line 381 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 2)));
#line 381 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 3)));
#line 381 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 4)));
#line 381 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 5)));

#line 387 "inst_util.m"
                    if ((check_hlds__inst_util__GroundnessResultA_36 == (MR_Integer) 1))
#line 384 "inst_util.m"
                      {
#line 385 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 386 "inst_util.m"
                        check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 384 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 384 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 384 "inst_util.m"
                      }
#line 387 "inst_util.m"
                    else
#line 390 "inst_util.m"
                      {
#line 390 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_123;

#line 391 "inst_util.m"
                        {
#line 391 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_123, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 390 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 390 "inst_util.m"
                          {
#line 393 "inst_util.m"
                            {
#line 393 "inst_util.m"
                              MR_Word base;
#line 393 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 393 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 393 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 393 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 393 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 393 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_123));
#line 393 "inst_util.m"
                            }
#line 393 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 390 "inst_util.m"
                          }
#line 390 "inst_util.m"
                      }
#line 382 "inst_util.m"
                  }
#line 374 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 374 "inst_util.m"
                  {
#line 401 "inst_util.m"
                    check_hlds__inst_util__V_94_94 = (MR_Integer) 1;
#line 401 "inst_util.m"
                    {
#line 401 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_35, check_hlds__inst_util__V_94_94, check_hlds__inst_util__Detism_14);
                    }
#line 401 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 374 "inst_util.m"
                  }
#line 374 "inst_util.m"
              }
#line 374 "inst_util.m"
          }
#line 348 "inst_util.m"
        else
#line 348 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_FALSE;
#line 342 "inst_util.m"
      }
#line 278 "inst_util.m"
    else
#line 278 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 610 "inst_util.m"
      {
#line 610 "inst_util.m"
        MR_Word check_hlds__inst_util__InstVarsA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 610 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInstA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));

#line 611 "inst_util.m"
        {
#line 611 "inst_util.m"
          return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsA_58, check_hlds__inst_util__SubInstA_59, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
        }
#line 610 "inst_util.m"
      }
#line 278 "inst_util.m"
    else
#line 278 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 453 "inst_util.m"
      {
#line 453 "inst_util.m"
        MR_Word check_hlds__inst_util__HOInstInfoA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 453 "inst_util.m"
        MR_Word check_hlds__inst_util__UniqA_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 458 "inst_util.m"
        if ((check_hlds__inst_util__HOInstInfoA_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "inst_util.m"
          {
#line 456 "inst_util.m"
            return check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
          }
#line 458 "inst_util.m"
        else
#line 465 "inst_util.m"
        if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "inst_util.m"
          {
#line 466 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_155;

#line 470 "inst_util.m"
            if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 472 "inst_util.m"
              {
#line 472 "inst_util.m"
                check_hlds__inst_util__Uniq_155 = check_hlds__inst_util__UniqA_219;
#line 472 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 472 "inst_util.m"
              }
#line 470 "inst_util.m"
            else
#line 468 "inst_util.m"
              {
#line 469 "inst_util.m"
                {
#line 469 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, &check_hlds__inst_util__Uniq_155);
                }
#line 468 "inst_util.m"
              }
#line 466 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 466 "inst_util.m"
              {
#line 475 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 466 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 474 "inst_util.m"
                {
#line 474 "inst_util.m"
                  MR_Word base;
#line 474 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 474 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = base;
#line 474 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 474 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_155));
#line 474 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 474 "inst_util.m"
                }
#line 474 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 466 "inst_util.m"
              }
#line 466 "inst_util.m"
          }
#line 465 "inst_util.m"
        else
#line 465 "inst_util.m"
        if ((check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 462 "inst_util.m"
          {
#line 463 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 464 "inst_util.m"
            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 462 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 462 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 462 "inst_util.m"
          }
#line 465 "inst_util.m"
        else
#line 465 "inst_util.m"
        if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 2))))
#line 499 "inst_util.m"
          {
#line 499 "inst_util.m"
            MR_Word check_hlds__inst_util__V_77_77;
#line 499 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 499 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_165;
#line 499 "inst_util.m"
            MR_Word check_hlds__inst_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 503 "inst_util.m"
            if ((check_hlds__inst_util__Live_9 == (MR_Integer) 1))
#line 505 "inst_util.m"
              {
#line 505 "inst_util.m"
                {
#line 505 "inst_util.m"
                  check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                }
#line 505 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 505 "inst_util.m"
              }
#line 503 "inst_util.m"
            else
#line 502 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 499 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 499 "inst_util.m"
              {
#line 507 "inst_util.m"
                check_hlds__inst_util__V_77_77 = (MR_Integer) 1;
#line 507 "inst_util.m"
                {
#line 507 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_77_77, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_164, &check_hlds__inst_util__Uniq_165);
                }
#line 499 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 499 "inst_util.m"
                  {
#line 509 "inst_util.m"
                    *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 499 "inst_util.m"
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
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_165));
#line 508 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 508 "inst_util.m"
                    }
#line 508 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 499 "inst_util.m"
                  }
#line 499 "inst_util.m"
              }
#line 499 "inst_util.m"
          }
#line 465 "inst_util.m"
        else
#line 465 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 477 "inst_util.m"
          {
#line 477 "inst_util.m"
            MR_Word check_hlds__inst_util__V_81_81;
#line 477 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 477 "inst_util.m"
            MR_Word check_hlds__inst_util__InstResultsB_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 477 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 477 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_159;
#line 477 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_160;
#line 477 "inst_util.m"
            MR_Word check_hlds__inst_util__Detism1_161;

#line 479 "inst_util.m"
            {
#line 479 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_156, &check_hlds__inst_util__Uniq_159);
            }
#line 477 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 477 "inst_util.m"
              {
#line 480 "inst_util.m"
                {
#line 480 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_158, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_160, &check_hlds__inst_util__Detism1_161, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                }
#line 477 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 477 "inst_util.m"
                  {
#line 483 "inst_util.m"
                    check_hlds__inst_util__V_81_81 = (MR_Integer) 1;
#line 482 "inst_util.m"
                    {
#line 482 "inst_util.m"
                      MR_Word base;
#line 482 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 482 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 482 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 482 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_159));
#line 482 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_157));
#line 482 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_160));
#line 482 "inst_util.m"
                    }
#line 483 "inst_util.m"
                    {
#line 483 "inst_util.m"
                      parse_tree__prog_data__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_161, check_hlds__inst_util__V_81_81, check_hlds__inst_util__Detism_14);
                    }
#line 483 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 477 "inst_util.m"
                  }
#line 477 "inst_util.m"
              }
#line 477 "inst_util.m"
          }
#line 465 "inst_util.m"
        else
#line 465 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 511 "inst_util.m"
          {
#line 511 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVarsB_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 511 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInstB_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 512 "inst_util.m"
            {
#line 512 "inst_util.m"
              return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_166, check_hlds__inst_util__SubInstB_167, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
#line 511 "inst_util.m"
          }
#line 465 "inst_util.m"
        else
#line 465 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 485 "inst_util.m"
          {
#line 485 "inst_util.m"
            MR_Word check_hlds__inst_util__V_78_78;
#line 485 "inst_util.m"
            MR_Word check_hlds__inst_util__UniqB_162;
#line 485 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq_163;
#line 485 "inst_util.m"
            MR_Word check_hlds__inst_util___HOInstInfoB_50;

#line 488 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 485 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 485 "inst_util.m"
              {
#line 485 "inst_util.m"
                check_hlds__inst_util__UniqB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 485 "inst_util.m"
                check_hlds__inst_util___HOInstInfoB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 495 "inst_util.m"
                check_hlds__inst_util__V_78_78 = (MR_Integer) 1;
#line 495 "inst_util.m"
                {
#line 495 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_78_78, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_162, &check_hlds__inst_util__Uniq_163);
                }
#line 485 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 485 "inst_util.m"
                  {
#line 497 "inst_util.m"
                    *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 485 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 496 "inst_util.m"
                    {
#line 496 "inst_util.m"
                      MR_Word base;
#line 496 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 496 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 496 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 496 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_163));
#line 496 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 496 "inst_util.m"
                    }
#line 496 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 485 "inst_util.m"
                  }
#line 485 "inst_util.m"
              }
#line 485 "inst_util.m"
          }
#line 465 "inst_util.m"
        else
#line 465 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_FALSE;
#line 453 "inst_util.m"
      }
#line 278 "inst_util.m"
    else
#line 278 "inst_util.m"
      check_hlds__inst_util__succeeded = MR_FALSE;
#line 278 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 278 "inst_util.m"
  }
#line 268 "inst_util.m"
}

#line 243 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 243 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 243 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 243 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 243 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21)
#line 243 "inst_util.m"
{
#line 248 "inst_util.m"
  {
#line 248 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 248 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_16;
#line 248 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_17;
#line 248 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;
#line 255 "inst_util.m"
    MR_Word check_hlds__inst_util__V_23_23;
#line 255 "inst_util.m"
    MR_Word check_hlds__inst_util__V_24_24;
#line 255 "inst_util.m"
    MR_Word check_hlds__inst_util__V_19_19;

#line 249 "inst_util.m"
    {
#line 249 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstA_10, &check_hlds__inst_util__ExpandedInstA_16);
    }
#line 250 "inst_util.m"
    {
#line 250 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstB_11, &check_hlds__inst_util__ExpandedInstB_17);
    }
#line 251 "inst_util.m"
    {
#line 251 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__ExpandedInstA_16, check_hlds__inst_util__ExpandedInstB_17, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);
    }
#line 248 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 248 "inst_util.m"
      {
#line 255 "inst_util.m"
        check_hlds__inst_util__V_23_23 = (MR_Integer) 0;
#line 255 "inst_util.m"
        {
#line 255 "inst_util.m"
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__inst_util__Detism_14, &check_hlds__inst_util__V_19_19, &check_hlds__inst_util__V_24_24);
        }
#line 255 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_23_23 == check_hlds__inst_util__V_24_24);
#line 257 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 256 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 257 "inst_util.m"
        else
#line 258 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_18;
#line 257 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 248 "inst_util.m"
      }
#line 248 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 248 "inst_util.m"
  }
#line 243 "inst_util.m"
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
#line 2380 "inst_util.m"
  while (MR_TRUE)
#line 2380 "inst_util.m"
    {
#line 2380 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2380 "inst_util.m"
      {
#line 2380 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2380 "inst_util.m"
        MR_Word check_hlds__inst_util__MayRestrict_6;

#line 2380 "inst_util.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2390 "inst_util.m"
          {
#line 2390 "inst_util.m"
            MR_Word check_hlds__inst_util__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 1)));
#line 2390 "inst_util.m"
            MR_Word check_hlds__inst_util__NewInst_21;

#line 2391 "inst_util.m"
            {
#line 2391 "inst_util.m"
              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_20, &check_hlds__inst_util__NewInst_21);
            }
#line 2392 "inst_util.m"
            /* direct tailcall eliminated */
#line 2392 "inst_util.m"
            {
#line 2392 "inst_util.m"
              MR_Word check_hlds__inst_util__Inst__tmp_copy_5 = check_hlds__inst_util__NewInst_21;

#line 2392 "inst_util.m"
              check_hlds__inst_util__Inst_5 = check_hlds__inst_util__Inst__tmp_copy_5;
#line 2392 "inst_util.m"
            }
#line 2392 "inst_util.m"
            continue;
#line 2390 "inst_util.m"
          }
#line 2380 "inst_util.m"
        else
#line 2380 "inst_util.m"
        if ((((((((check_hlds__inst_util__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || ((check_hlds__inst_util__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 2388 "inst_util.m"
          check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2380 "inst_util.m"
        else
#line 2381 "inst_util.m"
          check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2380 "inst_util.m"
        return check_hlds__inst_util__MayRestrict_6;
#line 2380 "inst_util.m"
      }
#line 2380 "inst_util.m"
      break;
#line 2380 "inst_util.m"
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
#line 2265 "inst_util.m"
  {
#line 2265 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2265 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_4;
#line 2265 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_16_16;
#line 2265 "inst_util.m"
    MR_Word check_hlds__inst_util__InMode_5;
#line 2265 "inst_util.m"
    MR_Word check_hlds__inst_util__OutMode_6;
#line 2265 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_7;
#line 2265 "inst_util.m"
    MR_Word check_hlds__inst_util__V_8_8;
#line 2265 "inst_util.m"
    MR_Integer check_hlds__inst_util__V_9_9;
#line 2265 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2266 "inst_util.m"
    {
#line 2266 "inst_util.m"
      parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__inst_util__InMode_5);
    }
#line 2267 "inst_util.m"
    {
#line 2267 "inst_util.m"
      parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__inst_util__OutMode_6);
    }
#line 10821 "check_hlds.inst_util.c"
    check_hlds__inst_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2268 "inst_util.m"
    check_hlds__inst_util__V_9_9 = (check_hlds__inst_util__Arity_3 - (MR_Integer) 1);
#line 2268 "inst_util.m"
    {
#line 2268 "inst_util.m"
      check_hlds__inst_util__V_8_8 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_9_9, ((MR_Box) (check_hlds__inst_util__InMode_5)));
    }
#line 2268 "inst_util.m"
    {
#line 2268 "inst_util.m"
      check_hlds__inst_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2268 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 0) = ((MR_Box) (check_hlds__inst_util__OutMode_6));
#line 2268 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2268 "inst_util.m"
    }
#line 2268 "inst_util.m"
    {
#line 2268 "inst_util.m"
      check_hlds__inst_util__ArgModes_7 = mercury__list__f_43_43_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_8_8, check_hlds__inst_util__V_11_11);
    }
#line 2269 "inst_util.m"
    {
#line 2269 "inst_util.m"
      check_hlds__inst_util__PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2269 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 2269 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 1) = ((MR_Box) (check_hlds__inst_util__ArgModes_7));
#line 2269 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2269 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2269 "inst_util.m"
    }
#line 2265 "inst_util.m"
    return check_hlds__inst_util__PredInstInfo_4;
#line 2265 "inst_util.m"
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
#line 2261 "inst_util.m"
  {
#line 2261 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 2261 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_14;
#line 2261 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_5;
#line 2261 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_8;
#line 2261 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_11;
#line 2261 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9;
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;
#line 2258 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;

#line 2262 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2262 "inst_util.m"
      {
#line 2262 "inst_util.m"
        check_hlds__inst_util__PredInstInfo_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfo_4), (MR_Integer) 1);
#line 2256 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 0)));
#line 2256 "inst_util.m"
        check_hlds__inst_util__ArgModes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 1)));
#line 2256 "inst_util.m"
        check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 2)));
#line 2256 "inst_util.m"
        check_hlds__inst_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 3)));
#line 2256 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_12_12 == (MR_Integer) 1);
#line 2261 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2261 "inst_util.m"
          {
#line 10916 "check_hlds.inst_util.c"
            check_hlds__inst_util__TypeCtorInfo_11_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2257 "inst_util.m"
            {
#line 2257 "inst_util.m"
              check_hlds__inst_util__Arity_11 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_14, check_hlds__inst_util__ArgModes_8);
            }
#line 2259 "inst_util.m"
            {
#line 2259 "inst_util.m"
              check_hlds__inst_util__V_13_13 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_11);
            }
#line 2258 "inst_util.m"
            {
#line 2258 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_5, check_hlds__inst_util__V_13_13, check_hlds__inst_util__ModuleInfo_3);
            }
#line 2258 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2261 "inst_util.m"
          }
#line 2262 "inst_util.m"
      }
#line 2261 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2261 "inst_util.m"
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
#line 2255 "inst_util.m"
  {
#line 2255 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2255 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_11;
#line 2255 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 1)));
#line 2255 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_8;
#line 2255 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 0)));
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 2)));
#line 2256 "inst_util.m"
    MR_Word check_hlds__inst_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 3)));
#line 2258 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;

#line 2256 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_9_9 == (MR_Integer) 1);
#line 2255 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2255 "inst_util.m"
      {
#line 10980 "check_hlds.inst_util.c"
        check_hlds__inst_util__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2257 "inst_util.m"
        {
#line 2257 "inst_util.m"
          check_hlds__inst_util__Arity_8 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_11, check_hlds__inst_util__ArgModes_5);
        }
#line 2259 "inst_util.m"
        {
#line 2259 "inst_util.m"
          check_hlds__inst_util__V_10_10 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_8);
        }
#line 2258 "inst_util.m"
        {
#line 2258 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_4, check_hlds__inst_util__V_10_10, check_hlds__inst_util__ModuleInfo_3);
        }
#line 2258 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2255 "inst_util.m"
      }
#line 2255 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2255 "inst_util.m"
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
#line 2367 "inst_util.m"
  {
#line 2367 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2367 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst_7;
#line 2367 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_10;
#line 2367 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2368 "inst_util.m"
    {
#line 2368 "inst_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__inst_util__Instmap_5, check_hlds__inst_util__Var_6, &check_hlds__inst_util__Inst_7);
    }
#line 2275 "inst_util.m"
    {
#line 2275 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_10);
    }
#line 2276 "inst_util.m"
    {
#line 2276 "inst_util.m"
      check_hlds__inst_util__V_11_11 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__Inst_7, check_hlds__inst_util__Expansions_10);
    }
#line 2276 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_11_11 == (MR_Integer) 1);
#line 2367 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2367 "inst_util.m"
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
#line 2274 "inst_util.m"
  {
#line 2274 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2274 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_5;
#line 2274 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2275 "inst_util.m"
    {
#line 2275 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_5);
    }
#line 2276 "inst_util.m"
    {
#line 2276 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions_5);
    }
#line 2276 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2274 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2274 "inst_util.m"
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
#line 2157 "inst_util.m"
  {
#line 2157 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2157 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_5;
#line 2157 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2158 "inst_util.m"
    {
#line 2158 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_5);
    }
#line 2159 "inst_util.m"
    {
#line 2159 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions0_5);
    }
#line 2159 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2157 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2157 "inst_util.m"
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
#line 1724 "inst_util.m"
  {
#line 1724 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1720 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 1720 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;
#line 1720 "inst_util.m"
    MR_Word check_hlds__inst_util__V_14_14;
#line 1721 "inst_util.m"
    MR_Word check_hlds__inst_util__V_15_15;
#line 1721 "inst_util.m"
    MR_Word check_hlds__inst_util__V_16_16;
#line 1721 "inst_util.m"
    MR_Word check_hlds__inst_util__V_17_17;

#line 1720 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1720 "inst_util.m"
      {
#line 1720 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1720 "inst_util.m"
        check_hlds__inst_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1720 "inst_util.m"
        check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1721 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1721 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1721 "inst_util.m"
          {
#line 1721 "inst_util.m"
            check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1721 "inst_util.m"
            check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1721 "inst_util.m"
            check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1721 "inst_util.m"
          }
#line 1720 "inst_util.m"
      }
#line 1724 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1723 "inst_util.m"
      {
#line 1723 "inst_util.m"
        return check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
      }
#line 1724 "inst_util.m"
    else
#line 1726 "inst_util.m"
      {
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_18;
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable0_19;
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstInfo_20;
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstName_21;
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeMergedInst_22;
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable1_23;
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_25;

#line 1726 "inst_util.m"
        {
#line 1726 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__InstTable0_18);
        }
#line 1727 "inst_util.m"
        {
#line 1727 "inst_util.m"
          hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__MergeInstTable0_19);
        }
#line 1728 "inst_util.m"
        {
#line 1728 "inst_util.m"
          check_hlds__inst_util__MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1728 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1728 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1728 "inst_util.m"
        }
#line 1729 "inst_util.m"
        {
#line 1729 "inst_util.m"
          check_hlds__inst_util__MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1729 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1729 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1729 "inst_util.m"
        }
#line 1730 "inst_util.m"
        {
#line 1730 "inst_util.m"
          hlds__hlds_data__search_insert_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, &check_hlds__inst_util__MaybeMaybeMergedInst_22, check_hlds__inst_util__MergeInstTable0_19, &check_hlds__inst_util__MergeInstTable1_23);
        }
#line 1740 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeMergedInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1741 "inst_util.m"
          {
#line 1741 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_26;
#line 1741 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_27;
#line 1741 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable2_28;
#line 1741 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable3_29;
#line 1741 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable3_30;
#line 1741 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34;
#line 1741 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35;
#line 1741 "inst_util.m"
            MR_Word check_hlds__inst_util__V_36_36;

#line 1744 "inst_util.m"
            {
#line 1744 "inst_util.m"
              hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable1_23, check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__InstTable1_26);
            }
#line 1746 "inst_util.m"
            {
#line 1746 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34);
            }
#line 1749 "inst_util.m"
            {
#line 1749 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35);
            }
#line 1741 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1741 "inst_util.m"
              {
#line 1752 "inst_util.m"
                {
#line 1752 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__inst_util__InstTable2_27);
                }
#line 1753 "inst_util.m"
                {
#line 1753 "inst_util.m"
                  hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__MergeInstTable2_28);
                }
#line 1754 "inst_util.m"
                {
#line 1754 "inst_util.m"
                  check_hlds__inst_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1754 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_36_36, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_25));
#line 1754 "inst_util.m"
                }
#line 1754 "inst_util.m"
                {
#line 1754 "inst_util.m"
                  hlds__hlds_data__det_update_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, check_hlds__inst_util__V_36_36, check_hlds__inst_util__MergeInstTable2_28, &check_hlds__inst_util__MergeInstTable3_29);
                }
#line 1756 "inst_util.m"
                {
#line 1756 "inst_util.m"
                  hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable3_29, check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__InstTable3_30);
                }
#line 1758 "inst_util.m"
                {
#line 1758 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable3_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
                }
#line 1758 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1741 "inst_util.m"
              }
#line 1741 "inst_util.m"
          }
#line 1740 "inst_util.m"
        else
#line 1733 "inst_util.m"
          {
#line 1733 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeMergedInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeMergedInst_22, (MR_Integer) 0)));

#line 1736 "inst_util.m"
            if ((check_hlds__inst_util__MaybeMergedInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1738 "inst_util.m"
              {
#line 1738 "inst_util.m"
                check_hlds__inst_util__Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1738 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1738 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1738 "inst_util.m"
              }
#line 1736 "inst_util.m"
            else
#line 1735 "inst_util.m"
              check_hlds__inst_util__Inst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMergedInst_24, (MR_Integer) 0)));
#line 1733 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31;
#line 1733 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1733 "inst_util.m"
          }
#line 1726 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1726 "inst_util.m"
          {
#line 1761 "inst_util.m"
            {
#line 1761 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_25, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32, check_hlds__inst_util__MergeInstName_21);
            }
#line 1763 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1762 "inst_util.m"
              {
#line 1762 "inst_util.m"
                MR_Word base;
#line 1762 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1762 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = base;
#line 1762 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1762 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1762 "inst_util.m"
              }
#line 1763 "inst_util.m"
            else
#line 1764 "inst_util.m"
              *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_25;
#line 1763 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1726 "inst_util.m"
          }
#line 1726 "inst_util.m"
      }
#line 1724 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1724 "inst_util.m"
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
#line 1439 "inst_util.m"
  {
#line 1439 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1439 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1439 "inst_util.m"
      {
#line 1439 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1439 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1439 "inst_util.m"
      }
#line 1439 "inst_util.m"
    else
#line 1440 "inst_util.m"
      {
#line 1440 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1440 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1440 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1440 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1440 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1441 "inst_util.m"
        {
#line 1441 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1442 "inst_util.m"
        {
#line 1442 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1440 "inst_util.m"
        {
#line 1440 "inst_util.m"
          MR_Word base;
#line 1440 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1440 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1440 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1440 "inst_util.m"
        }
#line 1440 "inst_util.m"
      }
#line 1439 "inst_util.m"
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
#line 1586 "inst_util.m"
  {
#line 1586 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1586 "inst_util.m"
    if (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1589 "inst_util.m"
      {
#line 1589 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1589 "inst_util.m"
        MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1589 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_11;

#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 3))
#line 1671 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 3;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 4))
#line 1670 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 4;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 2))
#line 1668 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 2;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_9 == (MR_Integer) 0))
#line 1669 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
          check_hlds__inst_util__Uniq_11 = (MR_Integer) 2;
#line 1591 "inst_util.m"
        {
#line 1591 "inst_util.m"
          MR_Word base;
#line 1591 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1591 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = base;
#line 1591 "inst_util.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1591 "inst_util.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1591 "inst_util.m"
        }
#line 1589 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1589 "inst_util.m"
      }
#line 1586 "inst_util.m"
    else
#line 1586 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1615 "inst_util.m"
      {
#line 1616 "inst_util.m"
        {
#line 1616 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
#line 1616 "inst_util.m"
          return;
        }
#line 1615 "inst_util.m"
      }
#line 1586 "inst_util.m"
    else
#line 1586 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1593 "inst_util.m"
      {
#line 1593 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1593 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1593 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1593 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_51;
#line 1593 "inst_util.m"
        MR_Word check_hlds__inst_util___InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));

#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_50 == (MR_Integer) 3))
#line 1671 "inst_util.m"
          check_hlds__inst_util__Uniq_51 = (MR_Integer) 3;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_50 == (MR_Integer) 4))
#line 1670 "inst_util.m"
          check_hlds__inst_util__Uniq_51 = (MR_Integer) 4;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_50 == (MR_Integer) 2))
#line 1668 "inst_util.m"
          check_hlds__inst_util__Uniq_51 = (MR_Integer) 2;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_50 == (MR_Integer) 0))
#line 1669 "inst_util.m"
          check_hlds__inst_util__Uniq_51 = (MR_Integer) 0;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
          check_hlds__inst_util__Uniq_51 = (MR_Integer) 2;
#line 1596 "inst_util.m"
        {
#line 1596 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
        }
#line 1598 "inst_util.m"
        {
#line 1598 "inst_util.m"
          MR_Word base;
#line 1598 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = base;
#line 1598 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1598 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_51));
#line 1598 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1598 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1598 "inst_util.m"
        }
#line 1593 "inst_util.m"
      }
#line 1586 "inst_util.m"
    else
#line 1586 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1607 "inst_util.m"
      {
#line 1607 "inst_util.m"
        MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1607 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1607 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInst_19;

#line 1608 "inst_util.m"
        {
#line 1608 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
        }
#line 1609 "inst_util.m"
        {
#line 1609 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
        }
#line 1609 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 1611 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1610 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst_19;
#line 1611 "inst_util.m"
        else
#line 1612 "inst_util.m"
          {
#line 1612 "inst_util.m"
            MR_Word base;
#line 1612 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1612 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1612 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1612 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1612 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst_19));
#line 1612 "inst_util.m"
          }
#line 1607 "inst_util.m"
      }
#line 1586 "inst_util.m"
    else
#line 1586 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1618 "inst_util.m"
      {
#line 1618 "inst_util.m"
        MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1618 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_23;
#line 1618 "inst_util.m"
        MR_Word check_hlds__inst_util__MostlyUniqInstTable0_24;
#line 1618 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1618 "inst_util.m"
        MR_Word check_hlds__inst_util__MostlyUniqInstTable1_26;
#line 1618 "inst_util.m"
        MR_Word check_hlds__inst_util__MostlyUniqInst_28;

#line 1620 "inst_util.m"
        {
#line 1620 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__InstTable0_23);
        }
#line 1621 "inst_util.m"
        {
#line 1621 "inst_util.m"
          hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__MostlyUniqInstTable0_24);
        }
#line 1622 "inst_util.m"
        {
#line 1622 "inst_util.m"
          hlds__hlds_data__search_insert_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__MostlyUniqInstTable0_24, &check_hlds__inst_util__MostlyUniqInstTable1_26);
        }
#line 1632 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1633 "inst_util.m"
          {
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_29;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst1_30;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_31;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__MostlyUniqInstTable2_32;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__MostlyUniqInstTable_33;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_34;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__V_39_39;
#line 1633 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_54;

#line 1636 "inst_util.m"
            {
#line 1636 "inst_util.m"
              hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
            }
#line 1638 "inst_util.m"
            {
#line 1638 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
            }
#line 1642 "inst_util.m"
            {
#line 1642 "inst_util.m"
              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_54);
            }
#line 1643 "inst_util.m"
            {
#line 1643 "inst_util.m"
              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__SubInst0_54, &check_hlds__inst_util__SubInst1_30);
            }
#line 1644 "inst_util.m"
            {
#line 1644 "inst_util.m"
              check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst1_30, &check_hlds__inst_util__MostlyUniqInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38);
            }
#line 1649 "inst_util.m"
            {
#line 1649 "inst_util.m"
              hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__inst_util__InstTable2_31);
            }
#line 1650 "inst_util.m"
            {
#line 1650 "inst_util.m"
              hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__MostlyUniqInstTable2_32);
            }
#line 1651 "inst_util.m"
            {
#line 1651 "inst_util.m"
              check_hlds__inst_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "inst_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_39_39, 0) = ((MR_Box) (check_hlds__inst_util__MostlyUniqInst_28));
#line 1651 "inst_util.m"
            }
#line 1651 "inst_util.m"
            {
#line 1651 "inst_util.m"
              hlds__hlds_data__det_update_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_39_39, check_hlds__inst_util__MostlyUniqInstTable2_32, &check_hlds__inst_util__MostlyUniqInstTable_33);
            }
#line 1653 "inst_util.m"
            {
#line 1653 "inst_util.m"
              hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable_33, check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__InstTable_34);
            }
#line 1655 "inst_util.m"
            {
#line 1655 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
            }
#line 1633 "inst_util.m"
          }
#line 1632 "inst_util.m"
        else
#line 1625 "inst_util.m"
          {
#line 1625 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1628 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1630 "inst_util.m"
              check_hlds__inst_util__MostlyUniqInst_28 = check_hlds__inst_util__Inst0_5;
#line 1628 "inst_util.m"
            else
#line 1627 "inst_util.m"
              check_hlds__inst_util__MostlyUniqInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1625 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1625 "inst_util.m"
          }
#line 1658 "inst_util.m"
        {
#line 1658 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__MostlyUniqInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36, check_hlds__inst_util__InstName_22);
        }
#line 1660 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1659 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1660 "inst_util.m"
        else
#line 1661 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__MostlyUniqInst_28;
#line 1618 "inst_util.m"
      }
#line 1586 "inst_util.m"
    else
#line 1586 "inst_util.m"
    if ((((((check_hlds__inst_util__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 1)))))) || ((check_hlds__inst_util__Inst0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 1586 "inst_util.m"
      {
#line 1587 "inst_util.m"
        *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1586 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1586 "inst_util.m"
      }
#line 1586 "inst_util.m"
    else
#line 1586 "inst_util.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1600 "inst_util.m"
      {
#line 1600 "inst_util.m"
        MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1600 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1600 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_53;

#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_52 == (MR_Integer) 3))
#line 1671 "inst_util.m"
          check_hlds__inst_util__Uniq_53 = (MR_Integer) 3;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_52 == (MR_Integer) 4))
#line 1670 "inst_util.m"
          check_hlds__inst_util__Uniq_53 = (MR_Integer) 4;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_52 == (MR_Integer) 2))
#line 1668 "inst_util.m"
          check_hlds__inst_util__Uniq_53 = (MR_Integer) 2;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
        if ((check_hlds__inst_util__Uniq0_52 == (MR_Integer) 0))
#line 1669 "inst_util.m"
          check_hlds__inst_util__Uniq_53 = (MR_Integer) 0;
#line 1667 "inst_util.m"
        else
#line 1667 "inst_util.m"
          check_hlds__inst_util__Uniq_53 = (MR_Integer) 2;
#line 1602 "inst_util.m"
        {
#line 1602 "inst_util.m"
          MR_Word base;
#line 1602 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1602 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = base;
#line 1602 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1602 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_53));
#line 1602 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1602 "inst_util.m"
        }
#line 1600 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1600 "inst_util.m"
      }
#line 1586 "inst_util.m"
    else
#line 1604 "inst_util.m"
      {
#line 1605 "inst_util.m"
        {
#line 1605 "inst_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
#line 1605 "inst_util.m"
          return;
        }
#line 1604 "inst_util.m"
      }
#line 1586 "inst_util.m"
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
#line 701 "inst_util.m"
  {
#line 701 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 701 "inst_util.m"
    MR_Word check_hlds__inst_util__InstA_22;

#line 702 "inst_util.m"
    {
#line 702 "inst_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__InstA0_13, &check_hlds__inst_util__InstA_22);
    }
#line 703 "inst_util.m"
    {
#line 703 "inst_util.m"
      return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__InstA_22, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, check_hlds__inst_util__Inst_19, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
    }
#line 701 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 701 "inst_util.m"
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
#line 169 "inst_util.m"
  {
#line 169 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 169 "inst_util.m"
    MR_Word check_hlds__inst_util__InstTable0_16;
#line 169 "inst_util.m"
    MR_Word check_hlds__inst_util__UnifyInstTable0_17;

#line 171 "inst_util.m"
    {
#line 171 "inst_util.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__InstTable0_16);
    }
#line 172 "inst_util.m"
    {
#line 172 "inst_util.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__UnifyInstTable0_17);
    }
#line 191 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 192 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 195 "inst_util.m"
      {
#line 195 "inst_util.m"
        return check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
      }
#line 197 "inst_util.m"
    else
#line 198 "inst_util.m"
      {
#line 198 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstInfo_18;
#line 198 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstName_19;
#line 198 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_20;
#line 198 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstTable1_21;
#line 198 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_23;

#line 198 "inst_util.m"
        {
#line 198 "inst_util.m"
          check_hlds__inst_util__UnifyInstInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 198 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 198 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 198 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 198 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 198 "inst_util.m"
        }
#line 199 "inst_util.m"
        {
#line 199 "inst_util.m"
          check_hlds__inst_util__UnifyInstName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 199 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 199 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 199 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 199 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 199 "inst_util.m"
        }
#line 200 "inst_util.m"
        {
#line 200 "inst_util.m"
          hlds__hlds_data__search_insert_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, &check_hlds__inst_util__MaybeMaybeInst_20, check_hlds__inst_util__UnifyInstTable0_17, &check_hlds__inst_util__UnifyInstTable1_21);
        }
#line 216 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "inst_util.m"
          {
#line 217 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_24;
#line 217 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_25;
#line 217 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable2_26;
#line 217 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable_27;
#line 217 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_28;
#line 217 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32;
#line 217 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;
#line 217 "inst_util.m"
            MR_Word check_hlds__inst_util__V_34_34;

#line 220 "inst_util.m"
            {
#line 220 "inst_util.m"
              hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable1_21, check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__InstTable1_24);
            }
#line 222 "inst_util.m"
            {
#line 222 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32);
            }
#line 224 "inst_util.m"
            {
#line 224 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_23, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 217 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 217 "inst_util.m"
              {
#line 228 "inst_util.m"
                {
#line 228 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__inst_util__InstTable2_25);
                }
#line 229 "inst_util.m"
                {
#line 229 "inst_util.m"
                  hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__UnifyInstTable2_26);
                }
#line 230 "inst_util.m"
                {
#line 230 "inst_util.m"
                  check_hlds__inst_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_23));
#line 230 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 230 "inst_util.m"
                }
#line 230 "inst_util.m"
                {
#line 230 "inst_util.m"
                  hlds__hlds_data__det_update_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, check_hlds__inst_util__V_34_34, check_hlds__inst_util__UnifyInstTable2_26, &check_hlds__inst_util__UnifyInstTable_27);
                }
#line 232 "inst_util.m"
                {
#line 232 "inst_util.m"
                  hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable_27, check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__InstTable_28);
                }
#line 233 "inst_util.m"
                {
#line 233 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
                }
#line 233 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 217 "inst_util.m"
              }
#line 217 "inst_util.m"
          }
#line 216 "inst_util.m"
        else
#line 203 "inst_util.m"
          {
#line 203 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_20, (MR_Integer) 0)));

#line 206 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "inst_util.m"
              {
#line 208 "inst_util.m"
                {
#line 208 "inst_util.m"
                  check_hlds__inst_util__Inst0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 208 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 208 "inst_util.m"
                }
#line 214 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 207 "inst_util.m"
              }
#line 206 "inst_util.m"
            else
#line 205 "inst_util.m"
              {
#line 205 "inst_util.m"
                check_hlds__inst_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 0)));
#line 205 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 1)));
#line 205 "inst_util.m"
              }
#line 203 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29;
#line 203 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 203 "inst_util.m"
          }
#line 198 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 198 "inst_util.m"
          {
#line 236 "inst_util.m"
            {
#line 236 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_23, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30, check_hlds__inst_util__UnifyInstName_19);
            }
#line 238 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 237 "inst_util.m"
              {
#line 237 "inst_util.m"
                MR_Word base;
#line 237 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 237 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 237 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 237 "inst_util.m"
              }
#line 238 "inst_util.m"
            else
#line 239 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_23;
#line 238 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 198 "inst_util.m"
          }
#line 198 "inst_util.m"
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
