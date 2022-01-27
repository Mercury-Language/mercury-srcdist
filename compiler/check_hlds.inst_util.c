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




#line 1737 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

#line 2385 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2385 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2385 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2385 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2371 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2371 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2371 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2371 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2316 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2316 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2316 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2316 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2272 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2272 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2272 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2272 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2255 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2255 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2255 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2255 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3);

#line 2199 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2199 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2199 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2199 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);

#line 2155 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2155 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2155 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2155 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2155 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2155 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2155 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);

#line 2138 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2138 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2138 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2138 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2138 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2138 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2138 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);

#line 2094 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2094 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2094 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);

#line 2052 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2052 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2052 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2052 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2052 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2052 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2052 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11);

#line 2043 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2043 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2043 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 2031 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 2031 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2031 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2031 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2031 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2031 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2031 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6);

#line 2022 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 2022 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 2022 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 2022 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2022 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2022 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10);

#line 1991 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1991 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1991 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13);

#line 1982 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1982 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6);

#line 1854 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1854 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1854 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1854 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1854 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1854 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1854 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);

#line 1826 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1826 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1826 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1826 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1826 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1826 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1826 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);

#line 1806 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1806 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1806 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1806 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1806 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1806 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1806 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);

#line 1722 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1722 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1722 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1711 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1711 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1711 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1711 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1711 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1604 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1604 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1604 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1604 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1604 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);

#line 1483 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1483 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1483 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1483 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1483 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);

#line 1456 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1456 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1456 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1456 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1456 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1456 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);

#line 1436 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1436 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1436 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1436 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 1425 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1425 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1425 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1425 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1409 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1409 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1409 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1409 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1302 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1302 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1302 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1302 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);

#line 1281 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1176 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1176 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1176 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1176 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);

#line 1161 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1161 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1161 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1161 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 1142 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 1025 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 1025 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12);

#line 978 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 978 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 978 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 978 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);

#line 962 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 962 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 962 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 962 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 943 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 943 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 943 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 943 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);

#line 900 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 900 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 900 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 900 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 865 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 865 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 865 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 865 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);

#line 740 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 740 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 740 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 740 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);

#line 719 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 719 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 719 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 719 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);

#line 302 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 302 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 302 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 302 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);

#line 277 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 277 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 277 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 277 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);


static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_3[1][3];


#line 1705 "inst_util.m"
/* sealed */ struct check_hlds__inst_util__vector_common_type_2_0_s {
#line 1705 "inst_util.m"
  const MR_Word check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
#line 1705 "inst_util.m"
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



#line 1737 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
#line 1737 "inst_util.m"
{
#line 1739 "inst_util.m"
  {
#line 1739 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1739 "inst_util.m"
  }
#line 1737 "inst_util.m"
}

#line 2385 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
#line 2385 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2385 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2385 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2385 "inst_util.m"
{
#line 2388 "inst_util.m"
  while (MR_TRUE)
#line 2388 "inst_util.m"
    {
#line 2388 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2388 "inst_util.m"
      {
#line 2388 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2388 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2388 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2388 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2388 "inst_util.m"
        else
#line 2390 "inst_util.m"
          {
#line 2390 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2390 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2390 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2390 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_14;
#line 2391 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2392 "inst_util.m"
            {
#line 2392 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_14 = check_hlds__inst_util__inst_list_contains_any_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2397 "inst_util.m"
#line 2397 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsAny_14) {
#line 2397 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2397 "inst_util.m"
              case (MR_Integer) 0:
#line 2399 "inst_util.m"
                {
#line 2399 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2399 "inst_util.m"
                  {
#line 2399 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2399 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2399 "inst_util.m"
                  }
#line 2399 "inst_util.m"
                  continue;
#line 2399 "inst_util.m"
                }
#line 2397 "inst_util.m"
                break;
#line 2397 "inst_util.m"
              case (MR_Integer) 1:
#line 2396 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2397 "inst_util.m"
                break;
#line 2397 "inst_util.m"
            }
#line 2390 "inst_util.m"
          }
#line 2388 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2388 "inst_util.m"
      }
#line 2388 "inst_util.m"
      break;
#line 2388 "inst_util.m"
    }
#line 2385 "inst_util.m"
}

#line 2371 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
#line 2371 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2371 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2371 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2371 "inst_util.m"
{
#line 2374 "inst_util.m"
  while (MR_TRUE)
#line 2374 "inst_util.m"
    {
#line 2374 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2374 "inst_util.m"
      {
#line 2374 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2374 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2374 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2374 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2374 "inst_util.m"
        else
#line 2375 "inst_util.m"
          {
#line 2375 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2375 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2375 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsAny_12;

#line 2376 "inst_util.m"
            {
#line 2376 "inst_util.m"
              check_hlds__inst_util__HeadContainsAny_12 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2380 "inst_util.m"
#line 2380 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsAny_12) {
#line 2380 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2380 "inst_util.m"
              case (MR_Integer) 0:
#line 2382 "inst_util.m"
                {
#line 2382 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2382 "inst_util.m"
                  {
#line 2382 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2382 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2382 "inst_util.m"
                  }
#line 2382 "inst_util.m"
                  continue;
#line 2382 "inst_util.m"
                }
#line 2380 "inst_util.m"
                break;
#line 2380 "inst_util.m"
              case (MR_Integer) 1:
#line 2379 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2380 "inst_util.m"
                break;
#line 2380 "inst_util.m"
            }
#line 2375 "inst_util.m"
          }
#line 2374 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2374 "inst_util.m"
      }
#line 2374 "inst_util.m"
      break;
#line 2374 "inst_util.m"
    }
#line 2371 "inst_util.m"
}

#line 2316 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
#line 2316 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2316 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2316 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2316 "inst_util.m"
{
#line 2320 "inst_util.m"
  while (MR_TRUE)
#line 2320 "inst_util.m"
    {
#line 2320 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2320 "inst_util.m"
      {
#line 2320 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2320 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsAny_8;

#line 2320 "inst_util.m"
#line 2320 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) {
#line 2320 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2320 "inst_util.m"
          case (MR_Integer) 0:
#line 2368 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2320 "inst_util.m"
            break;
#line 2320 "inst_util.m"
          case (MR_Integer) 1:
#line 2368 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2320 "inst_util.m"
            break;
#line 2320 "inst_util.m"
          case (MR_Integer) 2:
#line 2321 "inst_util.m"
            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2320 "inst_util.m"
            break;
#line 2320 "inst_util.m"
          case (MR_Integer) 3:
#line 2320 "inst_util.m"
#line 2320 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) {
#line 2320 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2320 "inst_util.m"
              case (MR_Integer) 0:
#line 2323 "inst_util.m"
                {
#line 2323 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2323 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2323 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2327 "inst_util.m"
#line 2327 "inst_util.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_util__InstResults_12)) {
#line 2327 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2327 "inst_util.m"
                    case (MR_Integer) 0:
#line 2327 "inst_util.m"
#line 2327 "inst_util.m"
                      switch (MR_unmkbody(check_hlds__inst_util__InstResults_12)) {
#line 2327 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2327 "inst_util.m"
                        case (MR_Integer) 0:
#line 2342 "inst_util.m"
                          {
#line 2342 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                          }
#line 2327 "inst_util.m"
                          break;
#line 2327 "inst_util.m"
                        case (MR_Integer) 1:
#line 2326 "inst_util.m"
                          check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2327 "inst_util.m"
                          break;
#line 2327 "inst_util.m"
                      }
#line 2327 "inst_util.m"
                      break;
#line 2327 "inst_util.m"
                    case (MR_Integer) 1:
#line 2328 "inst_util.m"
                      {
#line 2328 "inst_util.m"
                        MR_Word check_hlds__inst_util__AnyResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 1)));
#line 2328 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 0)));
#line 2328 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 2)));
#line 2328 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 3)));
#line 2328 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 4)));
#line 2328 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResults_12, (MR_Integer) 5)));

#line 2332 "inst_util.m"
#line 2332 "inst_util.m"
                        switch (check_hlds__inst_util__AnyResults_15) {
#line 2332 "inst_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 2332 "inst_util.m"
                          case (MR_Integer) 2:
#line 2337 "inst_util.m"
                            {
#line 2337 "inst_util.m"
                              check_hlds__inst_util__ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                            }
#line 2332 "inst_util.m"
                            break;
#line 2332 "inst_util.m"
                          case (MR_Integer) 1:
#line 2334 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 1;
#line 2332 "inst_util.m"
                            break;
#line 2332 "inst_util.m"
                          case (MR_Integer) 0:
#line 2331 "inst_util.m"
                            check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2332 "inst_util.m"
                            break;
#line 2332 "inst_util.m"
                        }
#line 2328 "inst_util.m"
                      }
#line 2327 "inst_util.m"
                      break;
#line 2327 "inst_util.m"
                  }
#line 2323 "inst_util.m"
                }
#line 2320 "inst_util.m"
                break;
#line 2320 "inst_util.m"
              case (MR_Integer) 1:
#line 2320 "inst_util.m"
              case (MR_Integer) 5:
#line 2368 "inst_util.m"
                check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2320 "inst_util.m"
                break;
#line 2320 "inst_util.m"
              case (MR_Integer) 2:
#line 2346 "inst_util.m"
                {
#line 2347 "inst_util.m"
                  {
#line 2347 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 2346 "inst_util.m"
                }
#line 2320 "inst_util.m"
                break;
#line 2320 "inst_util.m"
              case (MR_Integer) 3:
#line 2359 "inst_util.m"
                {
#line 2359 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2359 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2360 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2360 "inst_util.m"
                  {
#line 2360 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2360 "inst_util.m"
                    check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2360 "inst_util.m"
                  }
#line 2360 "inst_util.m"
                  continue;
#line 2359 "inst_util.m"
                }
#line 2320 "inst_util.m"
                break;
#line 2320 "inst_util.m"
              case (MR_Integer) 4:
#line 2349 "inst_util.m"
                {
#line 2349 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2350 "inst_util.m"
                  {
#line 2350 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
#line 2352 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2351 "inst_util.m"
                    check_hlds__inst_util__ContainsAny_8 = (MR_Integer) 0;
#line 2352 "inst_util.m"
                  else
#line 2353 "inst_util.m"
                    {
#line 2353 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_22;
#line 2353 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2353 "inst_util.m"
                      {
#line 2353 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                      }
#line 2354 "inst_util.m"
                      {
#line 2354 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                      }
#line 2355 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2355 "inst_util.m"
                      {
#line 2355 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2355 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2355 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2355 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2355 "inst_util.m"
                      }
#line 2355 "inst_util.m"
                      continue;
#line 2353 "inst_util.m"
                    }
#line 2349 "inst_util.m"
                }
#line 2320 "inst_util.m"
                break;
#line 2320 "inst_util.m"
            }
#line 2320 "inst_util.m"
            break;
#line 2320 "inst_util.m"
        }
#line 2320 "inst_util.m"
        return check_hlds__inst_util__ContainsAny_8;
#line 2320 "inst_util.m"
      }
#line 2320 "inst_util.m"
      break;
#line 2320 "inst_util.m"
    }
#line 2316 "inst_util.m"
}

#line 2272 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2272 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2272 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2272 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2272 "inst_util.m"
{
#line 2276 "inst_util.m"
  while (MR_TRUE)
#line 2276 "inst_util.m"
    {
#line 2276 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2276 "inst_util.m"
      {
#line 2276 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2276 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2276 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2276 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2276 "inst_util.m"
        else
#line 2278 "inst_util.m"
          {
#line 2278 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2278 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2278 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 1)));
#line 2278 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_14;
#line 2279 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_8, (MR_Integer) 0)));

#line 2280 "inst_util.m"
            {
#line 2280 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_14 = check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__ArgInsts_13, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2285 "inst_util.m"
#line 2285 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsNonstd_14) {
#line 2285 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2285 "inst_util.m"
              case (MR_Integer) 0:
#line 2287 "inst_util.m"
                {
#line 2287 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2287 "inst_util.m"
                  {
#line 2287 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__BoundInsts_9;

#line 2287 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2287 "inst_util.m"
                  }
#line 2287 "inst_util.m"
                  continue;
#line 2287 "inst_util.m"
                }
#line 2285 "inst_util.m"
                break;
#line 2285 "inst_util.m"
              case (MR_Integer) 1:
#line 2284 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2285 "inst_util.m"
                break;
#line 2285 "inst_util.m"
            }
#line 2278 "inst_util.m"
          }
#line 2276 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2276 "inst_util.m"
      }
#line 2276 "inst_util.m"
      break;
#line 2276 "inst_util.m"
    }
#line 2272 "inst_util.m"
}

#line 2255 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_nonstandard_func_mode_3_f_0(
#line 2255 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2255 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2255 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3)
#line 2255 "inst_util.m"
{
#line 2258 "inst_util.m"
  while (MR_TRUE)
#line 2258 "inst_util.m"
    {
#line 2258 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2258 "inst_util.m"
      {
#line 2258 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2258 "inst_util.m"
        MR_Word check_hlds__inst_util__HeadVar__4_4;

#line 2258 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2258 "inst_util.m"
          check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 0;
#line 2258 "inst_util.m"
        else
#line 2260 "inst_util.m"
          {
#line 2260 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2260 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2260 "inst_util.m"
            MR_Word check_hlds__inst_util__HeadContainsNonstd_12;

#line 2261 "inst_util.m"
            {
#line 2261 "inst_util.m"
              check_hlds__inst_util__HeadContainsNonstd_12 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__HeadVar__1_1, check_hlds__inst_util__Inst_8, check_hlds__inst_util__HeadVar__3_3);
            }
#line 2266 "inst_util.m"
#line 2266 "inst_util.m"
            switch (check_hlds__inst_util__HeadContainsNonstd_12) {
#line 2266 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2266 "inst_util.m"
              case (MR_Integer) 0:
#line 2268 "inst_util.m"
                {
#line 2268 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2268 "inst_util.m"
                  {
#line 2268 "inst_util.m"
                    MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Insts_9;

#line 2268 "inst_util.m"
                    check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2268 "inst_util.m"
                  }
#line 2268 "inst_util.m"
                  continue;
#line 2268 "inst_util.m"
                }
#line 2266 "inst_util.m"
                break;
#line 2266 "inst_util.m"
              case (MR_Integer) 1:
#line 2265 "inst_util.m"
                check_hlds__inst_util__HeadVar__4_4 = (MR_Integer) 1;
#line 2266 "inst_util.m"
                break;
#line 2266 "inst_util.m"
            }
#line 2260 "inst_util.m"
          }
#line 2258 "inst_util.m"
        return check_hlds__inst_util__HeadVar__4_4;
#line 2258 "inst_util.m"
      }
#line 2258 "inst_util.m"
      break;
#line 2258 "inst_util.m"
    }
#line 2255 "inst_util.m"
}

#line 2199 "inst_util.m"
static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(
#line 2199 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_5,
#line 2199 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_6,
#line 2199 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29)
#line 2199 "inst_util.m"
{
#line 2205 "inst_util.m"
  while (MR_TRUE)
#line 2205 "inst_util.m"
    {
#line 2205 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2205 "inst_util.m"
      {
#line 2205 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2205 "inst_util.m"
        MR_Word check_hlds__inst_util__ContainsNonstd_8;

#line 2205 "inst_util.m"
#line 2205 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_6)) {
#line 2205 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2205 "inst_util.m"
          case (MR_Integer) 0:
#line 2246 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2205 "inst_util.m"
            break;
#line 2205 "inst_util.m"
          case (MR_Integer) 1:
#line 2246 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2205 "inst_util.m"
            break;
#line 2205 "inst_util.m"
          case (MR_Integer) 2:
#line 2252 "inst_util.m"
            check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2205 "inst_util.m"
            break;
#line 2205 "inst_util.m"
          case (MR_Integer) 3:
#line 2205 "inst_util.m"
#line 2205 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 0)))) {
#line 2205 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2205 "inst_util.m"
              case (MR_Integer) 0:
#line 2212 "inst_util.m"
                {
#line 2212 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstResults_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2212 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 3)));
#line 2212 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2216 "inst_util.m"
#line 2216 "inst_util.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_util__InstResults_12)) {
#line 2216 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2216 "inst_util.m"
                    case (MR_Integer) 0:
#line 2216 "inst_util.m"
#line 2216 "inst_util.m"
                      switch (MR_unmkbody(check_hlds__inst_util__InstResults_12)) {
#line 2216 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2216 "inst_util.m"
                        case (MR_Integer) 0:
#line 2220 "inst_util.m"
                          {
#line 2220 "inst_util.m"
                            check_hlds__inst_util__ContainsNonstd_8 = check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                          }
#line 2216 "inst_util.m"
                          break;
#line 2216 "inst_util.m"
                        case (MR_Integer) 1:
#line 2215 "inst_util.m"
                          check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2216 "inst_util.m"
                          break;
#line 2216 "inst_util.m"
                      }
#line 2216 "inst_util.m"
                      break;
#line 2216 "inst_util.m"
                    case (MR_Integer) 1:
#line 2220 "inst_util.m"
                      {
#line 2220 "inst_util.m"
                        check_hlds__inst_util__ContainsNonstd_8 = check_hlds__inst_util__bound_inst_list_contains_nonstandard_func_mode_3_f_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__BoundInsts_13, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                      }
#line 2216 "inst_util.m"
                      break;
#line 2216 "inst_util.m"
                  }
#line 2212 "inst_util.m"
                }
#line 2205 "inst_util.m"
                break;
#line 2205 "inst_util.m"
              case (MR_Integer) 1:
#line 2205 "inst_util.m"
                {
#line 2205 "inst_util.m"
                  MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2205 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2206 "inst_util.m"
                  {
#line 2206 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__HOInstInfo_10);
                  }
#line 2208 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2207 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 1;
#line 2208 "inst_util.m"
                  else
#line 2209 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2205 "inst_util.m"
                }
#line 2205 "inst_util.m"
                break;
#line 2205 "inst_util.m"
              case (MR_Integer) 2:
#line 2224 "inst_util.m"
                {
#line 2225 "inst_util.m"
                  {
#line 2225 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "function \140check_hlds.inst_util.inst_contains_nonstandard_func_mode_2\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 2224 "inst_util.m"
                }
#line 2205 "inst_util.m"
                break;
#line 2205 "inst_util.m"
              case (MR_Integer) 3:
#line 2237 "inst_util.m"
                {
#line 2237 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 2)));
#line 2237 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2238 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2238 "inst_util.m"
                  {
#line 2238 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_44;

#line 2238 "inst_util.m"
                    check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2238 "inst_util.m"
                  }
#line 2238 "inst_util.m"
                  continue;
#line 2237 "inst_util.m"
                }
#line 2205 "inst_util.m"
                break;
#line 2205 "inst_util.m"
              case (MR_Integer) 4:
#line 2227 "inst_util.m"
                {
#line 2227 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_6, (MR_Integer) 1)));

#line 2228 "inst_util.m"
                  {
#line 2228 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29);
                  }
#line 2230 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2229 "inst_util.m"
                    check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2230 "inst_util.m"
                  else
#line 2231 "inst_util.m"
                    {
#line 2231 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInst_22;
#line 2231 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2231 "inst_util.m"
                      {
#line 2231 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40);
                      }
#line 2232 "inst_util.m"
                      {
#line 2232 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_5, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__SubInst_22);
                      }
#line 2233 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2233 "inst_util.m"
                      {
#line 2233 "inst_util.m"
                        MR_Word check_hlds__inst_util__Inst__tmp_copy_6 = check_hlds__inst_util__SubInst_22;
#line 2233 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_30_40;

#line 2233 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 2233 "inst_util.m"
                        check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst__tmp_copy_6;
#line 2233 "inst_util.m"
                      }
#line 2233 "inst_util.m"
                      continue;
#line 2231 "inst_util.m"
                    }
#line 2227 "inst_util.m"
                }
#line 2205 "inst_util.m"
                break;
#line 2205 "inst_util.m"
              case (MR_Integer) 5:
#line 2246 "inst_util.m"
                check_hlds__inst_util__ContainsNonstd_8 = (MR_Integer) 0;
#line 2205 "inst_util.m"
                break;
#line 2205 "inst_util.m"
            }
#line 2205 "inst_util.m"
            break;
#line 2205 "inst_util.m"
        }
#line 2205 "inst_util.m"
        return check_hlds__inst_util__ContainsNonstd_8;
#line 2205 "inst_util.m"
      }
#line 2205 "inst_util.m"
      break;
#line 2205 "inst_util.m"
    }
#line 2199 "inst_util.m"
}

#line 2155 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
#line 2155 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_7,
#line 2155 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2155 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 2155 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_10,
#line 2155 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26,
#line 2155 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27)
#line 2155 "inst_util.m"
{
#line 2162 "inst_util.m"
  {
#line 2162 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2162 "inst_util.m"
    if ((check_hlds__inst_util__BoundInstsA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2162 "inst_util.m"
      {
#line 2163 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsB_8;
#line 2162 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2162 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2162 "inst_util.m"
      }
#line 2162 "inst_util.m"
    else
#line 2162 "inst_util.m"
      {
#line 2162 "inst_util.m"
        MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 1)));
#line 2162 "inst_util.m"
        MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_7, (MR_Integer) 0)));

#line 2162 "inst_util.m"
        if ((check_hlds__inst_util__BoundInstsB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2165 "inst_util.m"
          {
#line 2167 "inst_util.m"
            *check_hlds__inst_util__BoundInsts_10 = check_hlds__inst_util__BoundInstsA_7;
#line 2165 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26;
#line 2165 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2165 "inst_util.m"
          }
#line 2162 "inst_util.m"
        else
#line 2169 "inst_util.m"
          {
#line 2169 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 0)));
#line 2169 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsTailB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_8, (MR_Integer) 1)));
#line 2169 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 0)));
#line 2169 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_41_41, (MR_Integer) 1)));
#line 2169 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 0)));
#line 2169 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_16, (MR_Integer) 1)));

#line 2173 "inst_util.m"
            {
#line 2173 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
            }
#line 2181 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2175 "inst_util.m"
              {
#line 2175 "inst_util.m"
                MR_Word check_hlds__inst_util__MaybeTypes_22;
#line 2175 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_23;
#line 2175 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInst_24;
#line 2175 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_25;
#line 2175 "inst_util.m"
                MR_Integer check_hlds__inst_util__V_28_28;
#line 2175 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29;

#line 2175 "inst_util.m"
                {
#line 2175 "inst_util.m"
                  check_hlds__inst_util__V_28_28 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_util__ArgsA_19);
                }
#line 2174 "inst_util.m"
                {
#line 2174 "inst_util.m"
                  check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__V_28_28, &check_hlds__inst_util__MaybeTypes_22);
                }
#line 2176 "inst_util.m"
                {
#line 2176 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_19, check_hlds__inst_util__ArgsB_21, check_hlds__inst_util__MaybeTypes_22, &check_hlds__inst_util__Args_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 2175 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2175 "inst_util.m"
                  {
#line 2177 "inst_util.m"
                    {
#line 2177 "inst_util.m"
                      check_hlds__inst_util__BoundInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2177 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_18));
#line 2177 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_24, 1) = ((MR_Box) (check_hlds__inst_util__Args_23));
#line 2177 "inst_util.m"
                    }
#line 2178 "inst_util.m"
                    {
#line 2178 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2175 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2175 "inst_util.m"
                      {
#line 2180 "inst_util.m"
                        {
#line 2180 "inst_util.m"
                          MR_Word base;
#line 2180 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2180 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_24));
#line 2180 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_25));
#line 2180 "inst_util.m"
                        }
#line 2180 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2175 "inst_util.m"
                      }
#line 2175 "inst_util.m"
                  }
#line 2175 "inst_util.m"
              }
#line 2181 "inst_util.m"
            else
#line 2185 "inst_util.m"
              {
#line 2181 "inst_util.m"
                MR_Word check_hlds__inst_util__V_39_39;

#line 2181 "inst_util.m"
                {
#line 2181 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_39_39, check_hlds__inst_util__ConsIdA_18, check_hlds__inst_util__ConsIdB_20);
                }
#line 2181 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_39_39);
#line 2185 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2183 "inst_util.m"
                  {
#line 2183 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_34;

#line 2182 "inst_util.m"
                    {
#line 2182 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_40_40, check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2183 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2183 "inst_util.m"
                      {
#line 2184 "inst_util.m"
                        {
#line 2184 "inst_util.m"
                          MR_Word base;
#line 2184 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2184 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_41_41));
#line 2184 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_34));
#line 2184 "inst_util.m"
                        }
#line 2184 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2183 "inst_util.m"
                      }
#line 2183 "inst_util.m"
                  }
#line 2185 "inst_util.m"
                else
#line 2187 "inst_util.m"
                  {
#line 2187 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsTail_35;

#line 2186 "inst_util.m"
                    {
#line 2186 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__BoundInstsA_7, check_hlds__inst_util__BoundInstsTailB_17, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInstsTail_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 2187 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2187 "inst_util.m"
                      {
#line 2188 "inst_util.m"
                        {
#line 2188 "inst_util.m"
                          MR_Word base;
#line 2188 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "inst_util.m"
                          *check_hlds__inst_util__BoundInsts_10 = base;
#line 2188 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInstB_16));
#line 2188 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_35));
#line 2188 "inst_util.m"
                        }
#line 2188 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2187 "inst_util.m"
                      }
#line 2187 "inst_util.m"
                  }
#line 2185 "inst_util.m"
              }
#line 2169 "inst_util.m"
          }
#line 2162 "inst_util.m"
      }
#line 2162 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2162 "inst_util.m"
  }
#line 2155 "inst_util.m"
}

#line 2138 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
#line 2138 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2138 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2138 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 2138 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__4_4,
#line 2138 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5,
#line 2138 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6)
#line 2138 "inst_util.m"
{
#line 2142 "inst_util.m"
  {
#line 2142 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2142 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2142 "inst_util.m"
      {
#line 2142 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2142 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2142 "inst_util.m"
          {
#line 2142 "inst_util.m"
            *check_hlds__inst_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2142 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5;
#line 2142 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2142 "inst_util.m"
          }
#line 2142 "inst_util.m"
      }
#line 2142 "inst_util.m"
    else
#line 2144 "inst_util.m"
      {
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgB_13;
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgsB_14;
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeType_15;
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeTypes_16;
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__Arg_17;
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__Args_18;
#line 2144 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22;

#line 2143 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2143 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2143 "inst_util.m"
          {
#line 2143 "inst_util.m"
            check_hlds__inst_util__ArgB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2143 "inst_util.m"
            check_hlds__inst_util__ArgsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2143 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 2143 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2143 "inst_util.m"
              {
#line 2143 "inst_util.m"
                check_hlds__inst_util__MaybeType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 2143 "inst_util.m"
                check_hlds__inst_util__MaybeTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 2145 "inst_util.m"
                {
#line 2145 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__ArgA_11, check_hlds__inst_util__ArgB_13, check_hlds__inst_util__MaybeType_15, &check_hlds__inst_util__Arg_17, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22);
                }
#line 2144 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2144 "inst_util.m"
                  {
#line 2146 "inst_util.m"
                    {
#line 2146 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__ArgsA_12, check_hlds__inst_util__ArgsB_14, check_hlds__inst_util__MaybeTypes_16, &check_hlds__inst_util__Args_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_6);
                    }
#line 2144 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2144 "inst_util.m"
                      {
#line 2144 "inst_util.m"
                        {
#line 2144 "inst_util.m"
                          MR_Word base;
#line 2144 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2144 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__4_4 = base;
#line 2144 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Arg_17));
#line 2144 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Args_18));
#line 2144 "inst_util.m"
                        }
#line 2144 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2144 "inst_util.m"
                      }
#line 2144 "inst_util.m"
                  }
#line 2143 "inst_util.m"
              }
#line 2143 "inst_util.m"
          }
#line 2144 "inst_util.m"
      }
#line 2142 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2142 "inst_util.m"
  }
#line 2138 "inst_util.m"
}

#line 2094 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_9,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__InstResultsA_10,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_11,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_12,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_13,
#line 2094 "inst_util.m"
  MR_Word * check_hlds__inst_util__Result_14,
#line 2094 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25,
#line 2094 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26)
#line 2094 "inst_util.m"
{
#line 2106 "inst_util.m"
  {
#line 2106 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 2101 "inst_util.m"
    {
#line 2101 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
    }
#line 2106 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2104 "inst_util.m"
      {
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq_16;
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__Uniq0_51;
#line 2104 "inst_util.m"
        MR_Word check_hlds__inst_util__Expansions0_52;
#line 2028 "inst_util.m"
        MR_Word check_hlds__inst_util___Expansions_53;

#line 1985 "inst_util.m"
        {
#line 1985 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
        }
#line 1987 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqA_9;
#line 1987 "inst_util.m"
        else
#line 1988 "inst_util.m"
          check_hlds__inst_util__Uniq0_51 = check_hlds__inst_util__UniqB_12;
#line 2027 "inst_util.m"
        {
#line 2027 "inst_util.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_52);
        }
#line 2028 "inst_util.m"
        {
#line 2028 "inst_util.m"
          check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_51, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_52, &check_hlds__inst_util___Expansions_53, &check_hlds__inst_util__Uniq_16);
        }
#line 2105 "inst_util.m"
        {
#line 2105 "inst_util.m"
          MR_Word base;
#line 2105 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2105 "inst_util.m"
          *check_hlds__inst_util__Result_14 = base;
#line 2105 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2105 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_16));
#line 2105 "inst_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2105 "inst_util.m"
        }
#line 2104 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2104 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2104 "inst_util.m"
      }
#line 2106 "inst_util.m"
    else
#line 2108 "inst_util.m"
      {
#line 2107 "inst_util.m"
        {
#line 2107 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_10, check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25);
        }
#line 2108 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2129 "inst_util.m"
          {
#line 2129 "inst_util.m"
            if ((check_hlds__inst_util__MaybeType_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2130 "inst_util.m"
              {
#line 2130 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_39;
#line 2130 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq0_63;
#line 2130 "inst_util.m"
                MR_Word check_hlds__inst_util__Expansions0_64;
#line 2028 "inst_util.m"
                MR_Word check_hlds__inst_util___Expansions_65;

#line 1985 "inst_util.m"
                {
#line 1985 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqB_12, check_hlds__inst_util__UniqA_9);
                }
#line 1987 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqA_9;
#line 1987 "inst_util.m"
                else
#line 1988 "inst_util.m"
                  check_hlds__inst_util__Uniq0_63 = check_hlds__inst_util__UniqB_12;
#line 2027 "inst_util.m"
                {
#line 2027 "inst_util.m"
                  mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_64);
                }
#line 2028 "inst_util.m"
                {
#line 2028 "inst_util.m"
                  check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_11, check_hlds__inst_util__Uniq0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Expansions0_64, &check_hlds__inst_util___Expansions_65, &check_hlds__inst_util__Uniq_39);
                }
#line 2132 "inst_util.m"
                {
#line 2132 "inst_util.m"
                  MR_Word base;
#line 2132 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2132 "inst_util.m"
                  *check_hlds__inst_util__Result_14 = base;
#line 2132 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_39));
#line 2132 "inst_util.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2132 "inst_util.m"
                }
#line 2130 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25;
#line 2130 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2130 "inst_util.m"
              }
#line 2129 "inst_util.m"
            else
#line 2112 "inst_util.m"
              {
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_42_42;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_43_43;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_44_44;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_45_45;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeType_13, (MR_Integer) 0)));
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__Constructors_18;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtor_19;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB0_20;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsB_21;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__InstResultsB_22;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__InstA_23;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__InstB_24;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_31_31;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_34_34;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_35_35;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_36_36;
#line 2112 "inst_util.m"
                MR_Word check_hlds__inst_util__V_37_37;

#line 2113 "inst_util.m"
                {
#line 2113 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__Type_17, &check_hlds__inst_util__Constructors_18);
                }
#line 2112 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2112 "inst_util.m"
                  {
#line 2114 "inst_util.m"
                    {
#line 2114 "inst_util.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_util__Type_17, &check_hlds__inst_util__TypeCtor_19);
                    }
#line 2115 "inst_util.m"
                    {
#line 2115 "inst_util.m"
                      check_hlds__mode_util__constructors_to_bound_insts_5_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__UniqB_12, check_hlds__inst_util__TypeCtor_19, check_hlds__inst_util__Constructors_18, &check_hlds__inst_util__BoundInstsB0_20);
                    }
#line 2444 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 2117 "inst_util.m"
                    {
#line 2117 "inst_util.m"
                      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__inst_util__TypeCtorInfo_42_42, check_hlds__inst_util__BoundInstsB0_20, &check_hlds__inst_util__BoundInstsB_21);
                    }
#line 2119 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = (MR_Integer) 1;
#line 2120 "inst_util.m"
                    check_hlds__inst_util__V_30_30 = (MR_Integer) 0;
#line 2455 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 2121 "inst_util.m"
                    {
#line 2121 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_43_43);
                    }
#line 2462 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_44_44 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 2121 "inst_util.m"
                    {
#line 2121 "inst_util.m"
                      check_hlds__inst_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2121 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_31_31, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 2121 "inst_util.m"
                    }
#line 2122 "inst_util.m"
                    {
#line 2122 "inst_util.m"
                      check_hlds__inst_util__V_34_34 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeInfo_44_44);
                    }
#line 2477 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 2122 "inst_util.m"
                    {
#line 2122 "inst_util.m"
                      check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2122 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_33_33, 0) = ((MR_Box) (check_hlds__inst_util__V_34_34));
#line 2122 "inst_util.m"
                    }
#line 2123 "inst_util.m"
                    {
#line 2123 "inst_util.m"
                      check_hlds__inst_util__V_36_36 = mercury__set__init_0_f_0(check_hlds__inst_util__TypeCtorInfo_45_45);
                    }
#line 2123 "inst_util.m"
                    {
#line 2123 "inst_util.m"
                      check_hlds__inst_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2123 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_35_35, 0) = ((MR_Box) (check_hlds__inst_util__V_36_36));
#line 2123 "inst_util.m"
                    }
#line 2124 "inst_util.m"
                    check_hlds__inst_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_util__TypeCtor_19);
#line 2118 "inst_util.m"
                    {
#line 2118 "inst_util.m"
                      check_hlds__inst_util__InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 2118 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 0) = ((MR_Box) (check_hlds__inst_util__V_29_29));
#line 2118 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 1) = ((MR_Box) (check_hlds__inst_util__V_30_30));
#line 2118 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 2) = ((MR_Box) (check_hlds__inst_util__V_31_31));
#line 2118 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 3) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 2118 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 4) = ((MR_Box) (check_hlds__inst_util__V_35_35));
#line 2118 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsB_22, 5) = ((MR_Box) (check_hlds__inst_util__V_37_37));
#line 2118 "inst_util.m"
                    }
#line 2126 "inst_util.m"
                    {
#line 2126 "inst_util.m"
                      check_hlds__inst_util__InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2126 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2126 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_9));
#line 2126 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_10));
#line 2126 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_23, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsA_11));
#line 2126 "inst_util.m"
                    }
#line 2127 "inst_util.m"
                    {
#line 2127 "inst_util.m"
                      check_hlds__inst_util__InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2127 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2127 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 1) = ((MR_Box) (check_hlds__inst_util__UniqB_12));
#line 2127 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_22));
#line 2127 "inst_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_24, 3) = ((MR_Box) (check_hlds__inst_util__BoundInstsB_21));
#line 2127 "inst_util.m"
                    }
#line 2128 "inst_util.m"
                    {
#line 2128 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_23, check_hlds__inst_util__InstB_24, check_hlds__inst_util__MaybeType_13, check_hlds__inst_util__Result_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_26);
                    }
#line 2112 "inst_util.m"
                  }
#line 2112 "inst_util.m"
              }
#line 2129 "inst_util.m"
          }
#line 2108 "inst_util.m"
      }
#line 2106 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2106 "inst_util.m"
  }
#line 2094 "inst_util.m"
}

#line 2052 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
#line 2052 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 2052 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_8,
#line 2052 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2052 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26,
#line 2052 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_27,
#line 2052 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_11)
#line 2052 "inst_util.m"
{
#line 2060 "inst_util.m"
  while (MR_TRUE)
#line 2060 "inst_util.m"
    {
#line 2060 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2060 "inst_util.m"
      {
#line 2060 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2060 "inst_util.m"
#line 2060 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
#line 2060 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2060 "inst_util.m"
          case (MR_Integer) 0:
#line 2060 "inst_util.m"
            {
#line 2061 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2060 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2060 "inst_util.m"
            }
#line 2060 "inst_util.m"
            break;
#line 2060 "inst_util.m"
          case (MR_Integer) 1:
#line 2060 "inst_util.m"
            {
#line 2061 "inst_util.m"
              *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2060 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2060 "inst_util.m"
            }
#line 2060 "inst_util.m"
            break;
#line 2060 "inst_util.m"
          case (MR_Integer) 2:
#line 2065 "inst_util.m"
            {
#line 2065 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));
#line 2064 "inst_util.m"
              MR_Word check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1985 "inst_util.m"
              {
#line 1985 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_13, check_hlds__inst_util__UniqB_8);
              }
#line 1987 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1987 "inst_util.m"
              else
#line 1988 "inst_util.m"
                *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_13;
#line 2065 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2065 "inst_util.m"
            }
#line 2060 "inst_util.m"
            break;
#line 2060 "inst_util.m"
          case (MR_Integer) 3:
#line 2060 "inst_util.m"
#line 2060 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
#line 2060 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2060 "inst_util.m"
              case (MR_Integer) 0:
#line 2071 "inst_util.m"
                {
#line 2071 "inst_util.m"
                  MR_Word check_hlds__inst_util__BoundInstsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 2071 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq0_20;
#line 2071 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2071 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstResultsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1985 "inst_util.m"
                  {
#line 1985 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_36, check_hlds__inst_util__UniqB_8);
                  }
#line 1987 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqB_8;
#line 1987 "inst_util.m"
                  else
#line 1988 "inst_util.m"
                    check_hlds__inst_util__Uniq0_20 = check_hlds__inst_util__UniqA_36;
#line 2073 "inst_util.m"
                  {
#line 2073 "inst_util.m"
                    check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsA_19, check_hlds__inst_util__Uniq0_20, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_util__STATE_VARIABLE_Expansions_27, check_hlds__inst_util__Uniq_11);
                  }
#line 2071 "inst_util.m"
                }
#line 2060 "inst_util.m"
                break;
#line 2060 "inst_util.m"
              case (MR_Integer) 1:
#line 2065 "inst_util.m"
                {
#line 2065 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 2063 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));

#line 1985 "inst_util.m"
                  {
#line 1985 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_39, check_hlds__inst_util__UniqB_8);
                  }
#line 1987 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1987 "inst_util.m"
                  else
#line 1988 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqA_39;
#line 2065 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2065 "inst_util.m"
                }
#line 2060 "inst_util.m"
                break;
#line 2060 "inst_util.m"
              case (MR_Integer) 2:
#line 2085 "inst_util.m"
                {
#line 2086 "inst_util.m"
                  {
#line 2086 "inst_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", (MR_String) "inst_var");
#line 2086 "inst_util.m"
                    return;
                  }
#line 2085 "inst_util.m"
                }
#line 2060 "inst_util.m"
                break;
#line 2060 "inst_util.m"
              case (MR_Integer) 3:
#line 2088 "inst_util.m"
                {
#line 2088 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInstA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 2088 "inst_util.m"
                  MR_Word check_hlds__inst_util___InstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2089 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2089 "inst_util.m"
                  {
#line 2089 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__SubInstA_25;

#line 2089 "inst_util.m"
                    check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2089 "inst_util.m"
                  }
#line 2089 "inst_util.m"
                  continue;
#line 2088 "inst_util.m"
                }
#line 2060 "inst_util.m"
                break;
#line 2060 "inst_util.m"
              case (MR_Integer) 4:
#line 2076 "inst_util.m"
                {
#line 2076 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 2077 "inst_util.m"
                  {
#line 2077 "inst_util.m"
                    check_hlds__inst_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26);
                  }
#line 2079 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 2078 "inst_util.m"
                    {
#line 2078 "inst_util.m"
                      *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 2078 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2078 "inst_util.m"
                    }
#line 2079 "inst_util.m"
                  else
#line 2080 "inst_util.m"
                    {
#line 2080 "inst_util.m"
                      MR_Word check_hlds__inst_util__Inst_22;
#line 2080 "inst_util.m"
                      MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2080 "inst_util.m"
                      {
#line 2080 "inst_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_util__InstName_21)), check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32);
                      }
#line 2081 "inst_util.m"
                      {
#line 2081 "inst_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__InstName_21, &check_hlds__inst_util__Inst_22);
                      }
#line 2082 "inst_util.m"
                      /* direct tailcall eliminated */
#line 2082 "inst_util.m"
                      {
#line 2082 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstA__tmp_copy_7 = check_hlds__inst_util__Inst_22;
#line 2082 "inst_util.m"
                        MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_32_32;

#line 2082 "inst_util.m"
                        check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_26;
#line 2082 "inst_util.m"
                        check_hlds__inst_util__InstA_7 = check_hlds__inst_util__InstA__tmp_copy_7;
#line 2082 "inst_util.m"
                      }
#line 2082 "inst_util.m"
                      continue;
#line 2080 "inst_util.m"
                    }
#line 2076 "inst_util.m"
                }
#line 2060 "inst_util.m"
                break;
#line 2060 "inst_util.m"
              case (MR_Integer) 5:
#line 2068 "inst_util.m"
                {
#line 1985 "inst_util.m"
                  {
#line 1985 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_8);
                  }
#line 1987 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = check_hlds__inst_util__UniqB_8;
#line 1987 "inst_util.m"
                  else
#line 1988 "inst_util.m"
                    *check_hlds__inst_util__Uniq_11 = (MR_Integer) 0;
#line 2068 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_Expansions_27 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_26;
#line 2068 "inst_util.m"
                }
#line 2060 "inst_util.m"
                break;
#line 2060 "inst_util.m"
            }
#line 2060 "inst_util.m"
            break;
#line 2060 "inst_util.m"
        }
#line 2060 "inst_util.m"
      }
#line 2060 "inst_util.m"
      break;
#line 2060 "inst_util.m"
    }
#line 2052 "inst_util.m"
}

#line 2043 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2043 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2043 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2043 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 2043 "inst_util.m"
{
#line 2047 "inst_util.m"
  while (MR_TRUE)
#line 2047 "inst_util.m"
    {
#line 2047 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2047 "inst_util.m"
      {
#line 2047 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2047 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2047 "inst_util.m"
          {
#line 2047 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 2047 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 2047 "inst_util.m"
          }
#line 2047 "inst_util.m"
        else
#line 2048 "inst_util.m"
          {
#line 2048 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2048 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2048 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_18;
#line 2048 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2049 "inst_util.m"
            {
#line 2049 "inst_util.m"
              check_hlds__inst_util__merge_inst_uniq_6_p_0(check_hlds__inst_util__Inst_12, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21, &check_hlds__inst_util__Uniq1_18);
            }
#line 2050 "inst_util.m"
            /* direct tailcall eliminated */
#line 2050 "inst_util.m"
            {
#line 2050 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__Insts_13;
#line 2050 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_18;
#line 2050 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_21_21;

#line 2050 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2050 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2050 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2050 "inst_util.m"
            }
#line 2050 "inst_util.m"
            continue;
#line 2048 "inst_util.m"
          }
#line 2047 "inst_util.m"
      }
#line 2047 "inst_util.m"
      break;
#line 2047 "inst_util.m"
    }
#line 2043 "inst_util.m"
}

#line 2031 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
#line 2031 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 2031 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 2031 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 2031 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4,
#line 2031 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_Expansions_5,
#line 2031 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_6)
#line 2031 "inst_util.m"
{
#line 2035 "inst_util.m"
  while (MR_TRUE)
#line 2035 "inst_util.m"
    {
#line 2035 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2035 "inst_util.m"
      {
#line 2035 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 2035 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2035 "inst_util.m"
          {
#line 2035 "inst_util.m"
            *check_hlds__inst_util__Uniq_6 = check_hlds__inst_util__HeadVar__2_2;
#line 2035 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_Expansions_5 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4;
#line 2035 "inst_util.m"
          }
#line 2035 "inst_util.m"
        else
#line 2037 "inst_util.m"
          {
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 1)));
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__Uniq1_20;
#line 2037 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;
#line 2038 "inst_util.m"
            MR_Word check_hlds__inst_util___ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_12, (MR_Integer) 0)));

#line 2039 "inst_util.m"
            {
#line 2039 "inst_util.m"
              check_hlds__inst_util__merge_inst_list_uniq_6_p_0(check_hlds__inst_util__ArgInsts_19, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23, &check_hlds__inst_util__Uniq1_20);
            }
#line 2040 "inst_util.m"
            /* direct tailcall eliminated */
#line 2040 "inst_util.m"
            {
#line 2040 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInsts_13;
#line 2040 "inst_util.m"
              MR_Word check_hlds__inst_util__HeadVar__2__tmp_copy_2 = check_hlds__inst_util__Uniq1_20;
#line 2040 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_23_23;

#line 2040 "inst_util.m"
              check_hlds__inst_util__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_util__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2040 "inst_util.m"
              check_hlds__inst_util__HeadVar__2_2 = check_hlds__inst_util__HeadVar__2__tmp_copy_2;
#line 2040 "inst_util.m"
              check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 2040 "inst_util.m"
            }
#line 2040 "inst_util.m"
            continue;
#line 2037 "inst_util.m"
          }
#line 2035 "inst_util.m"
      }
#line 2035 "inst_util.m"
      break;
#line 2035 "inst_util.m"
    }
#line 2031 "inst_util.m"
}

#line 2022 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
#line 2022 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_6,
#line 2022 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_7,
#line 2022 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_8,
#line 2022 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_9,
#line 2022 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_10)
#line 2022 "inst_util.m"
{
#line 2025 "inst_util.m"
  {
#line 2025 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2025 "inst_util.m"
    MR_Word check_hlds__inst_util__Uniq0_11;
#line 2025 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_12;
#line 2028 "inst_util.m"
    MR_Word check_hlds__inst_util___Expansions_13;

#line 1985 "inst_util.m"
    {
#line 1985 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_6, check_hlds__inst_util__UniqB_7);
    }
#line 1987 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqB_7;
#line 1987 "inst_util.m"
    else
#line 1988 "inst_util.m"
      check_hlds__inst_util__Uniq0_11 = check_hlds__inst_util__UniqA_6;
#line 2027 "inst_util.m"
    {
#line 2027 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_12);
    }
#line 2028 "inst_util.m"
    {
#line 2028 "inst_util.m"
      check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(check_hlds__inst_util__BoundInstsB_8, check_hlds__inst_util__Uniq0_11, check_hlds__inst_util__ModuleInfo_9, check_hlds__inst_util__Expansions0_12, &check_hlds__inst_util___Expansions_13, check_hlds__inst_util__Uniq_10);
    }
#line 2025 "inst_util.m"
  }
#line 2022 "inst_util.m"
}

#line 1991 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoA_6,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfoB_7,
#line 1991 "inst_util.m"
  MR_Word * check_hlds__inst_util__HOInstInfo_8,
#line 1991 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12,
#line 1991 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13)
#line 1991 "inst_util.m"
{
#line 1994 "inst_util.m"
  {
#line 1994 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoA_6)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "inst_util.m"
    MR_Word check_hlds__inst_util__PredA_10;
#line 2013 "inst_util.m"
    MR_Word check_hlds__inst_util__PredB_11;

#line 1996 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1996 "inst_util.m"
      {
#line 1996 "inst_util.m"
        check_hlds__inst_util__PredA_10 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoA_6), (MR_Integer) 1);
#line 1997 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfoB_7)) == (MR_mktag((MR_Integer) 1)));
#line 1997 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1997 "inst_util.m"
          check_hlds__inst_util__PredB_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfoB_7), (MR_Integer) 1);
#line 1996 "inst_util.m"
      }
#line 2013 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2004 "inst_util.m"
      {
#line 2002 "inst_util.m"
        {
#line 2002 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__PredB_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
        }
#line 2004 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2003 "inst_util.m"
          {
#line 2003 "inst_util.m"
            *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoB_7;
#line 2003 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 2003 "inst_util.m"
          }
#line 2004 "inst_util.m"
        else
#line 2006 "inst_util.m"
          {
#line 2004 "inst_util.m"
            {
#line 2004 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__PredA_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
            }
#line 2006 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2005 "inst_util.m"
              {
#line 2005 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = check_hlds__inst_util__HOInstInfoA_6;
#line 2005 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2005 "inst_util.m"
              }
#line 2006 "inst_util.m"
            else
#line 2009 "inst_util.m"
              {
#line 2293 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_22;
#line 2293 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 1)));
#line 2293 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_19;
#line 2293 "inst_util.m"
                MR_Word check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 0)));
#line 2294 "inst_util.m"
                MR_Word check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 2)));
#line 2294 "inst_util.m"
                MR_Word check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredA_10, (MR_Integer) 3)));
#line 2296 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;
#line 2293 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeCtorInfo_11_31;
#line 2293 "inst_util.m"
                MR_Word check_hlds__inst_util__ArgModes_25;
#line 2293 "inst_util.m"
                MR_Integer check_hlds__inst_util__Arity_28;
#line 2293 "inst_util.m"
                MR_Word check_hlds__inst_util__V_29_29;
#line 2294 "inst_util.m"
                MR_Word check_hlds__inst_util__V_26_26;
#line 2294 "inst_util.m"
                MR_Word check_hlds__inst_util__V_27_27;
#line 2296 "inst_util.m"
                MR_Word check_hlds__inst_util__V_30_30;

#line 2294 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_20_20 == (MR_Integer) 1);
#line 2293 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2293 "inst_util.m"
                  {
#line 3215 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeCtorInfo_11_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2295 "inst_util.m"
                    {
#line 2295 "inst_util.m"
                      check_hlds__inst_util__Arity_19 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_22, check_hlds__inst_util__ArgModes_16);
                    }
#line 2297 "inst_util.m"
                    {
#line 2297 "inst_util.m"
                      check_hlds__inst_util__V_21_21 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_19);
                    }
#line 2296 "inst_util.m"
                    {
#line 2296 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredA_10, check_hlds__inst_util__V_21_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                    }
#line 2296 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2293 "inst_util.m"
                  }
#line 2009 "inst_util.m"
                check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2009 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 2009 "inst_util.m"
                  {
#line 2294 "inst_util.m"
                    check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 0)));
#line 2294 "inst_util.m"
                    check_hlds__inst_util__ArgModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 1)));
#line 2294 "inst_util.m"
                    check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 2)));
#line 2294 "inst_util.m"
                    check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredB_11, (MR_Integer) 3)));
#line 2294 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == (MR_Integer) 1);
#line 2293 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2293 "inst_util.m"
                      {
#line 3256 "check_hlds.inst_util.c"
                        check_hlds__inst_util__TypeCtorInfo_11_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2295 "inst_util.m"
                        {
#line 2295 "inst_util.m"
                          check_hlds__inst_util__Arity_28 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_31, check_hlds__inst_util__ArgModes_25);
                        }
#line 2297 "inst_util.m"
                        {
#line 2297 "inst_util.m"
                          check_hlds__inst_util__V_30_30 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_28);
                        }
#line 2296 "inst_util.m"
                        {
#line 2296 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredB_11, check_hlds__inst_util__V_30_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12);
                        }
#line 2296 "inst_util.m"
                        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2293 "inst_util.m"
                      }
#line 2010 "inst_util.m"
                    check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2009 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 2009 "inst_util.m"
                      {
#line 2011 "inst_util.m"
                        *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2011 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 2009 "inst_util.m"
                      }
#line 2009 "inst_util.m"
                  }
#line 2009 "inst_util.m"
              }
#line 2006 "inst_util.m"
          }
#line 2004 "inst_util.m"
      }
#line 2013 "inst_util.m"
    else
#line 2014 "inst_util.m"
      {
#line 2014 "inst_util.m"
        {
#line 2014 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoA_6);
        }
#line 2014 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2014 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2014 "inst_util.m"
          {
#line 2015 "inst_util.m"
            {
#line 2015 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_util__HOInstInfoB_7);
            }
#line 2015 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2014 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 2014 "inst_util.m"
              {
#line 2016 "inst_util.m"
                *check_hlds__inst_util__HOInstInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2016 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 2014 "inst_util.m"
              }
#line 2014 "inst_util.m"
          }
#line 2014 "inst_util.m"
      }
#line 1994 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1994 "inst_util.m"
      {
#line 1994 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_13 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_12;
#line 1994 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1994 "inst_util.m"
      }
#line 1994 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1994 "inst_util.m"
  }
#line 1991 "inst_util.m"
}

#line 1982 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_4,
#line 1982 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_5,
#line 1982 "inst_util.m"
  MR_Word * check_hlds__inst_util__Merged_6)
#line 1982 "inst_util.m"
{
#line 1987 "inst_util.m"
  {
#line 1987 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1985 "inst_util.m"
    {
#line 1985 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(check_hlds__inst_util__UniqA_4, check_hlds__inst_util__UniqB_5);
    }
#line 1987 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1986 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqB_5;
#line 1987 "inst_util.m"
    else
#line 1988 "inst_util.m"
      *check_hlds__inst_util__Merged_6 = check_hlds__inst_util__UniqA_4;
#line 1987 "inst_util.m"
  }
#line 1982 "inst_util.m"
}

#line 1854 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
#line 1854 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1854 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1854 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1854 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1854 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40,
#line 1854 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41)
#line 1854 "inst_util.m"
{
#line 1869 "inst_util.m"
  {
#line 1869 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) {
#line 1869 "inst_util.m"
      default:
#line 1869 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
        break;
#line 1869 "inst_util.m"
      case (MR_Integer) 0:
#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_7)) {
#line 1869 "inst_util.m"
          default:
#line 1869 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
            break;
#line 1869 "inst_util.m"
          case (MR_Integer) 0:
#line 1869 "inst_util.m"
            if ((check_hlds__inst_util__InstB_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1943 "inst_util.m"
              {
#line 1945 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1943 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1943 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1943 "inst_util.m"
              }
#line 1869 "inst_util.m"
            else
#line 1869 "inst_util.m"
            if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1909 "inst_util.m"
              {
#line 1909 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1910 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1913 "inst_util.m"
#line 1913 "inst_util.m"
                switch (check_hlds__inst_util__Uniq_73) {
#line 1913 "inst_util.m"
                  default:
#line 1913 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 1913 "inst_util.m"
                    break;
#line 1913 "inst_util.m"
                  case (MR_Integer) 3:
#line 1913 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1913 "inst_util.m"
                    break;
#line 1913 "inst_util.m"
                  case (MR_Integer) 4:
#line 1913 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1913 "inst_util.m"
                    break;
#line 1913 "inst_util.m"
                }
#line 1909 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1909 "inst_util.m"
                  {
#line 1914 "inst_util.m"
                    *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstB_8;
#line 1909 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1909 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1909 "inst_util.m"
                  }
#line 1909 "inst_util.m"
              }
#line 1869 "inst_util.m"
            else
#line 1869 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
            break;
#line 1869 "inst_util.m"
        }
#line 1869 "inst_util.m"
        break;
#line 1869 "inst_util.m"
      case (MR_Integer) 2:
#line 1869 "inst_util.m"
        {
#line 1869 "inst_util.m"
          MR_Word check_hlds__inst_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1869 "inst_util.m"
          MR_Word check_hlds__inst_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_7, (MR_Integer) 0)));

#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
          switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1869 "inst_util.m"
            default:
#line 1869 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
              break;
#line 1869 "inst_util.m"
            case (MR_Integer) 0:
#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
              switch (MR_unmkbody(check_hlds__inst_util__InstB_8)) {
#line 1869 "inst_util.m"
                default:
#line 1869 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
                case (MR_Integer) 0:
#line 1875 "inst_util.m"
                  {
#line 1879 "inst_util.m"
#line 1879 "inst_util.m"
                    switch (check_hlds__inst_util__V_110_110) {
#line 1879 "inst_util.m"
                      default:
#line 1879 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1879 "inst_util.m"
                        break;
#line 1879 "inst_util.m"
                      case (MR_Integer) 3:
#line 1879 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1879 "inst_util.m"
                        break;
#line 1879 "inst_util.m"
                      case (MR_Integer) 4:
#line 1879 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1879 "inst_util.m"
                        break;
#line 1879 "inst_util.m"
                    }
#line 1875 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1875 "inst_util.m"
                      {
#line 1880 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__InstA_7;
#line 1875 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1875 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1875 "inst_util.m"
                      }
#line 1875 "inst_util.m"
                  }
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
              }
#line 1869 "inst_util.m"
              break;
#line 1869 "inst_util.m"
            case (MR_Integer) 2:
#line 1869 "inst_util.m"
              {
#line 1869 "inst_util.m"
                MR_Word check_hlds__inst_util__UniqB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1869 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfoB_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1869 "inst_util.m"
                MR_Word check_hlds__inst_util__HOInstInfo_16;
#line 1869 "inst_util.m"
                MR_Word check_hlds__inst_util__Uniq_17;

#line 1871 "inst_util.m"
                {
#line 1871 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_15, &check_hlds__inst_util__HOInstInfo_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1869 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1869 "inst_util.m"
                  {
#line 1872 "inst_util.m"
                    {
#line 1872 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_14, &check_hlds__inst_util__Uniq_17);
                    }
#line 1873 "inst_util.m"
                    {
#line 1873 "inst_util.m"
                      MR_Word base;
#line 1873 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = base;
#line 1873 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_17));
#line 1873 "inst_util.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_16));
#line 1873 "inst_util.m"
                    }
#line 1873 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1869 "inst_util.m"
                  }
#line 1869 "inst_util.m"
              }
#line 1869 "inst_util.m"
              break;
#line 1869 "inst_util.m"
            case (MR_Integer) 3:
#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1869 "inst_util.m"
                default:
#line 1869 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
                case (MR_Integer) 0:
#line 1882 "inst_util.m"
                  {
#line 1882 "inst_util.m"
                    MR_Word check_hlds__inst_util__InstResultsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1882 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1882 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_57_57;
#line 1882 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1882 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_63;

#line 1884 "inst_util.m"
                    {
#line 1884 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_62, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_63);
                    }
#line 1887 "inst_util.m"
#line 1887 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_63) {
#line 1887 "inst_util.m"
                      default:
#line 1887 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1887 "inst_util.m"
                        break;
#line 1887 "inst_util.m"
                      case (MR_Integer) 3:
#line 1887 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1887 "inst_util.m"
                        break;
#line 1887 "inst_util.m"
                      case (MR_Integer) 4:
#line 1887 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1887 "inst_util.m"
                        break;
#line 1887 "inst_util.m"
                    }
#line 1889 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1888 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1889 "inst_util.m"
                    else
#line 1890 "inst_util.m"
                      {
#line 1890 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_19, check_hlds__inst_util__BoundInstsB_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1882 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1882 "inst_util.m"
                      {
#line 1893 "inst_util.m"
                        check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1882 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1893 "inst_util.m"
                        {
#line 1893 "inst_util.m"
                          MR_Word base;
#line 1893 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1893 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_63));
#line 1893 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 1893 "inst_util.m"
                        }
#line 1893 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1882 "inst_util.m"
                      }
#line 1882 "inst_util.m"
                  }
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
                case (MR_Integer) 1:
#line 1895 "inst_util.m"
                  {
#line 1895 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1895 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1895 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_68;
#line 1895 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_69;

#line 1897 "inst_util.m"
                    {
#line 1897 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_109_109, check_hlds__inst_util__HOInstInfoB_67, &check_hlds__inst_util__HOInstInfo_68, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1895 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1895 "inst_util.m"
                      {
#line 1898 "inst_util.m"
                        {
#line 1898 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, check_hlds__inst_util__UniqB_66, &check_hlds__inst_util__Uniq_69);
                        }
#line 1899 "inst_util.m"
                        {
#line 1899 "inst_util.m"
                          MR_Word base;
#line 1899 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1899 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1899 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1899 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_68));
#line 1899 "inst_util.m"
                        }
#line 1899 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1895 "inst_util.m"
                      }
#line 1895 "inst_util.m"
                  }
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
                case (MR_Integer) 5:
#line 1901 "inst_util.m"
                  {
#line 1901 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_55_55;
#line 1901 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_71;

#line 1903 "inst_util.m"
                    {
#line 1903 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_110_110, (MR_Integer) 0, &check_hlds__inst_util__Uniq_71);
                    }
#line 1906 "inst_util.m"
#line 1906 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_71) {
#line 1906 "inst_util.m"
                      default:
#line 1906 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1906 "inst_util.m"
                        break;
#line 1906 "inst_util.m"
                      case (MR_Integer) 3:
#line 1906 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1906 "inst_util.m"
                        break;
#line 1906 "inst_util.m"
                      case (MR_Integer) 4:
#line 1906 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1906 "inst_util.m"
                        break;
#line 1906 "inst_util.m"
                    }
#line 1901 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1901 "inst_util.m"
                      {
#line 1907 "inst_util.m"
                        check_hlds__inst_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1901 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1907 "inst_util.m"
                        {
#line 1907 "inst_util.m"
                          MR_Word base;
#line 1907 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1907 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_71));
#line 1907 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_55_55));
#line 1907 "inst_util.m"
                        }
#line 1907 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1901 "inst_util.m"
                      }
#line 1901 "inst_util.m"
                  }
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
              }
#line 1869 "inst_util.m"
              break;
#line 1869 "inst_util.m"
          }
#line 1869 "inst_util.m"
        }
#line 1869 "inst_util.m"
        break;
#line 1869 "inst_util.m"
      case (MR_Integer) 3:
#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) {
#line 1869 "inst_util.m"
          default:
#line 1869 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
            break;
#line 1869 "inst_util.m"
          case (MR_Integer) 0:
#line 1869 "inst_util.m"
            {
#line 1869 "inst_util.m"
              MR_Word check_hlds__inst_util__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1869 "inst_util.m"
              MR_Word check_hlds__inst_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1869 "inst_util.m"
              MR_Word check_hlds__inst_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1869 "inst_util.m"
                default:
#line 1869 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
                case (MR_Integer) 2:
#line 1916 "inst_util.m"
                  {
#line 1916 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_53_53;
#line 1916 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1916 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_76;
#line 1917 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1918 "inst_util.m"
                    {
#line 1918 "inst_util.m"
                      check_hlds__inst_util__merge_uniq_bound_5_p_0(check_hlds__inst_util__UniqB_75, check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, &check_hlds__inst_util__Uniq_76);
                    }
#line 1921 "inst_util.m"
#line 1921 "inst_util.m"
                    switch (check_hlds__inst_util__Uniq_76) {
#line 1921 "inst_util.m"
                      default:
#line 1921 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 1921 "inst_util.m"
                        break;
#line 1921 "inst_util.m"
                      case (MR_Integer) 3:
#line 1921 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1921 "inst_util.m"
                        break;
#line 1921 "inst_util.m"
                      case (MR_Integer) 4:
#line 1921 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1921 "inst_util.m"
                        break;
#line 1921 "inst_util.m"
                    }
#line 1923 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1922 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1923 "inst_util.m"
                    else
#line 1924 "inst_util.m"
                      {
#line 1924 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40);
                      }
#line 1916 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1916 "inst_util.m"
                      {
#line 1927 "inst_util.m"
                        check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1916 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1927 "inst_util.m"
                        {
#line 1927 "inst_util.m"
                          MR_Word base;
#line 1927 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1927 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1927 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_76));
#line 1927 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 1927 "inst_util.m"
                        }
#line 1927 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1916 "inst_util.m"
                      }
#line 1916 "inst_util.m"
                  }
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
                case (MR_Integer) 3:
#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1869 "inst_util.m"
                    default:
#line 1869 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
                      break;
#line 1869 "inst_util.m"
                    case (MR_Integer) 0:
#line 1947 "inst_util.m"
                      {
#line 1947 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_32;
#line 1947 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_49_49;
#line 1947 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1947 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_87;
#line 1947 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1948 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1949 "inst_util.m"
                        {
#line 1949 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__UniqB_86, &check_hlds__inst_util__Uniq_87);
                        }
#line 1950 "inst_util.m"
                        {
#line 1950 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(check_hlds__inst_util__V_111_111, check_hlds__inst_util__BoundInstsB_88, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__BoundInsts_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1947 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1947 "inst_util.m"
                          {
#line 1953 "inst_util.m"
                            check_hlds__inst_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1953 "inst_util.m"
                            {
#line 1953 "inst_util.m"
                              MR_Word base;
#line 1953 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1953 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1953 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_87));
#line 1953 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_49_49));
#line 1953 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_32));
#line 1953 "inst_util.m"
                            }
#line 1953 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1947 "inst_util.m"
                          }
#line 1947 "inst_util.m"
                      }
#line 1869 "inst_util.m"
                      break;
#line 1869 "inst_util.m"
                    case (MR_Integer) 1:
#line 1955 "inst_util.m"
                      {
#line 1955 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1956 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));

#line 1957 "inst_util.m"
                        {
#line 1957 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__V_113_113, check_hlds__inst_util__V_112_112, check_hlds__inst_util__V_111_111, check_hlds__inst_util__UniqB_91, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1955 "inst_util.m"
                      }
#line 1869 "inst_util.m"
                      break;
#line 1869 "inst_util.m"
                  }
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
              }
#line 1869 "inst_util.m"
            }
#line 1869 "inst_util.m"
            break;
#line 1869 "inst_util.m"
          case (MR_Integer) 1:
#line 1869 "inst_util.m"
            {
#line 1869 "inst_util.m"
              MR_Word check_hlds__inst_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1869 "inst_util.m"
              MR_Word check_hlds__inst_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) {
#line 1869 "inst_util.m"
                default:
#line 1869 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
                case (MR_Integer) 2:
#line 1929 "inst_util.m"
                  {
#line 1929 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1929 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfoB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1929 "inst_util.m"
                    MR_Word check_hlds__inst_util__HOInstInfo_81;
#line 1929 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_82;

#line 1931 "inst_util.m"
                    {
#line 1931 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_80, &check_hlds__inst_util__HOInstInfo_81, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                    }
#line 1929 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1929 "inst_util.m"
                      {
#line 1932 "inst_util.m"
                        {
#line 1932 "inst_util.m"
                          check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_79, &check_hlds__inst_util__Uniq_82);
                        }
#line 1933 "inst_util.m"
                        {
#line 1933 "inst_util.m"
                          MR_Word base;
#line 1933 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1933 "inst_util.m"
                          *check_hlds__inst_util__Inst_10 = base;
#line 1933 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_82));
#line 1933 "inst_util.m"
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_81));
#line 1933 "inst_util.m"
                        }
#line 1933 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1929 "inst_util.m"
                      }
#line 1929 "inst_util.m"
                  }
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
                case (MR_Integer) 3:
#line 1869 "inst_util.m"
#line 1869 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) {
#line 1869 "inst_util.m"
                    default:
#line 1869 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
                      break;
#line 1869 "inst_util.m"
                    case (MR_Integer) 0:
#line 1960 "inst_util.m"
                      {
#line 1960 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1960 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstResultsB_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1960 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));

#line 1962 "inst_util.m"
                        {
#line 1962 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(check_hlds__inst_util__UniqB_95, check_hlds__inst_util__InstResultsB_96, check_hlds__inst_util__BoundInstsB_97, check_hlds__inst_util__V_115_115, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1960 "inst_util.m"
                      }
#line 1869 "inst_util.m"
                      break;
#line 1869 "inst_util.m"
                    case (MR_Integer) 1:
#line 1965 "inst_util.m"
                      {
#line 1965 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1965 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfoB_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1965 "inst_util.m"
                        MR_Word check_hlds__inst_util__HOInstInfo_102;
#line 1965 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_103;

#line 1967 "inst_util.m"
                        {
#line 1967 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(check_hlds__inst_util__V_114_114, check_hlds__inst_util__HOInstInfoB_101, &check_hlds__inst_util__HOInstInfo_102, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                        }
#line 1965 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 1965 "inst_util.m"
                          {
#line 1968 "inst_util.m"
                            {
#line 1968 "inst_util.m"
                              check_hlds__inst_util__merge_uniq_3_p_0(check_hlds__inst_util__V_115_115, check_hlds__inst_util__UniqB_100, &check_hlds__inst_util__Uniq_103);
                            }
#line 1969 "inst_util.m"
                            {
#line 1969 "inst_util.m"
                              MR_Word base;
#line 1969 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "inst_util.m"
                              *check_hlds__inst_util__Inst_10 = base;
#line 1969 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1969 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_103));
#line 1969 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_102));
#line 1969 "inst_util.m"
                            }
#line 1969 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1965 "inst_util.m"
                          }
#line 1965 "inst_util.m"
                      }
#line 1869 "inst_util.m"
                      break;
#line 1869 "inst_util.m"
                  }
#line 1869 "inst_util.m"
                  break;
#line 1869 "inst_util.m"
              }
#line 1869 "inst_util.m"
            }
#line 1869 "inst_util.m"
            break;
#line 1869 "inst_util.m"
          case (MR_Integer) 5:
#line 1869 "inst_util.m"
            {
#line 1869 "inst_util.m"
              MR_Word check_hlds__inst_util__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1869 "inst_util.m"
              MR_Word check_hlds__inst_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));

#line 1869 "inst_util.m"
              if (((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 2))))
#line 1935 "inst_util.m"
                {
#line 1935 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_51_51;
#line 1935 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 0)));
#line 1935 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_84;
#line 1936 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1937 "inst_util.m"
                  {
#line 1937 "inst_util.m"
                    check_hlds__inst_util__merge_uniq_3_p_0((MR_Integer) 0, check_hlds__inst_util__UniqB_83, &check_hlds__inst_util__Uniq_84);
                  }
#line 1940 "inst_util.m"
#line 1940 "inst_util.m"
                  switch (check_hlds__inst_util__Uniq_84) {
#line 1940 "inst_util.m"
                    default:
#line 1940 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 1940 "inst_util.m"
                      break;
#line 1940 "inst_util.m"
                    case (MR_Integer) 3:
#line 1940 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1940 "inst_util.m"
                      break;
#line 1940 "inst_util.m"
                    case (MR_Integer) 4:
#line 1940 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1940 "inst_util.m"
                      break;
#line 1940 "inst_util.m"
                  }
#line 1935 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1935 "inst_util.m"
                    {
#line 1941 "inst_util.m"
                      check_hlds__inst_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1935 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40;
#line 1941 "inst_util.m"
                      {
#line 1941 "inst_util.m"
                        MR_Word base;
#line 1941 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1941 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_84));
#line 1941 "inst_util.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 1941 "inst_util.m"
                      }
#line 1941 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1935 "inst_util.m"
                    }
#line 1935 "inst_util.m"
                }
#line 1869 "inst_util.m"
              else
#line 1869 "inst_util.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1971 "inst_util.m"
                {
#line 1971 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeInfo_104_104;
#line 1971 "inst_util.m"
                  MR_Word check_hlds__inst_util__TypeCtorInfo_105_105;
#line 1971 "inst_util.m"
                  MR_Word check_hlds__inst_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1971 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeTypes_38;
#line 1971 "inst_util.m"
                  MR_Word check_hlds__inst_util__Args_39;
#line 1971 "inst_util.m"
                  MR_Integer check_hlds__inst_util__V_42_42;
#line 1971 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_43_43;
#line 1971 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));

#line 1972 "inst_util.m"
                  {
#line 1972 "inst_util.m"
                    check_hlds__inst_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_util__V_108_108, check_hlds__inst_util__V_106_106);
                  }
#line 1971 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1971 "inst_util.m"
                    {
#line 4324 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeInfo_104_104 = (MR_Word) &check_hlds__inst_util_scalar_common_1[1];
#line 4326 "check_hlds.inst_util.c"
                      check_hlds__inst_util__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1974 "inst_util.m"
                      {
#line 1974 "inst_util.m"
                        check_hlds__inst_util__V_42_42 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_105_105, check_hlds__inst_util__V_107_107);
                      }
#line 1974 "inst_util.m"
                      check_hlds__inst_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1974 "inst_util.m"
                      {
#line 1974 "inst_util.m"
                        check_hlds__inst_util__MaybeTypes_38 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeInfo_104_104, check_hlds__inst_util__V_42_42, ((MR_Box) (check_hlds__inst_util__V_43_43)));
                      }
#line 1975 "inst_util.m"
                      {
#line 1975 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(check_hlds__inst_util__V_107_107, check_hlds__inst_util__ArgsB_37, check_hlds__inst_util__MaybeTypes_38, &check_hlds__inst_util__Args_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_41);
                      }
#line 1971 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 1971 "inst_util.m"
                        {
#line 1976 "inst_util.m"
                          {
#line 1976 "inst_util.m"
                            MR_Word base;
#line 1976 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "inst_util.m"
                            *check_hlds__inst_util__Inst_10 = base;
#line 1976 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1976 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_108_108));
#line 1976 "inst_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Args_39));
#line 1976 "inst_util.m"
                          }
#line 1976 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1971 "inst_util.m"
                        }
#line 1971 "inst_util.m"
                    }
#line 1971 "inst_util.m"
                }
#line 1869 "inst_util.m"
              else
#line 1869 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 1869 "inst_util.m"
            }
#line 1869 "inst_util.m"
            break;
#line 1869 "inst_util.m"
        }
#line 1869 "inst_util.m"
        break;
#line 1869 "inst_util.m"
    }
#line 1869 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1869 "inst_util.m"
  }
#line 1854 "inst_util.m"
}

#line 1826 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
#line 1826 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1826 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1826 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1826 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1826 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19,
#line 1826 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20)
#line 1826 "inst_util.m"
{
#line 1846 "inst_util.m"
  {
#line 1846 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1846 "inst_util.m"
    MR_Word check_hlds__inst_util__InstVarsA_12;
#line 1846 "inst_util.m"
    MR_Word check_hlds__inst_util__SubInstA_13;

#line 1830 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1830 "inst_util.m"
      {
#line 1830 "inst_util.m"
        check_hlds__inst_util__InstVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1830 "inst_util.m"
        check_hlds__inst_util__SubInstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1843 "inst_util.m"
        {
#line 1843 "inst_util.m"
          MR_Word check_hlds__inst_util__InstVarsB_14;
#line 1843 "inst_util.m"
          MR_Word check_hlds__inst_util__SubInstB_15;

#line 1831 "inst_util.m"
          check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1831 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1831 "inst_util.m"
            {
#line 1831 "inst_util.m"
              check_hlds__inst_util__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1831 "inst_util.m"
              check_hlds__inst_util__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1832 "inst_util.m"
              {
#line 1832 "inst_util.m"
                MR_Word check_hlds__inst_util__TypeInfo_26_26;
#line 1832 "inst_util.m"
                MR_Word check_hlds__inst_util__Inst0_16;
#line 1832 "inst_util.m"
                MR_Word check_hlds__inst_util__InstVars_17;

#line 1832 "inst_util.m"
                {
#line 1832 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__SubInstB_15, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
                }
#line 1832 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1832 "inst_util.m"
                  {
#line 4463 "check_hlds.inst_util.c"
                    check_hlds__inst_util__TypeInfo_26_26 = (MR_Word) &check_hlds__inst_util_scalar_common_1[0];
#line 1833 "inst_util.m"
                    {
#line 1833 "inst_util.m"
                      mercury__set__intersect_3_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVarsA_12, check_hlds__inst_util__InstVarsB_14, &check_hlds__inst_util__InstVars_17);
                    }
#line 1834 "inst_util.m"
                    {
#line 1834 "inst_util.m"
                      check_hlds__inst_util__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__inst_util__TypeInfo_26_26, check_hlds__inst_util__InstVars_17);
                    }
#line 1840 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 1835 "inst_util.m"
                      {
#line 1835 "inst_util.m"
                        MR_Word base;
#line 1835 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "inst_util.m"
                        *check_hlds__inst_util__Inst_10 = base;
#line 1835 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1835 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1835 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_16));
#line 1835 "inst_util.m"
                      }
#line 1840 "inst_util.m"
                    else
#line 1841 "inst_util.m"
                      *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_16;
#line 1840 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1832 "inst_util.m"
                  }
#line 1832 "inst_util.m"
              }
#line 1831 "inst_util.m"
            }
#line 1831 "inst_util.m"
          else
#line 1844 "inst_util.m"
            {
#line 1844 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__SubInstA_13, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1843 "inst_util.m"
        }
#line 1830 "inst_util.m"
      }
#line 1830 "inst_util.m"
    else
#line 1850 "inst_util.m"
      {
#line 1850 "inst_util.m"
        MR_Word check_hlds__inst_util__SubInstB_25;
#line 1846 "inst_util.m"
        MR_Word check_hlds__inst_util___InstVarsB_18;

#line 1846 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1846 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1846 "inst_util.m"
          {
#line 1846 "inst_util.m"
            check_hlds__inst_util___InstVarsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1846 "inst_util.m"
            check_hlds__inst_util__SubInstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1849 "inst_util.m"
            {
#line 1849 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__SubInstB_25, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
            }
#line 1846 "inst_util.m"
          }
#line 1846 "inst_util.m"
        else
#line 1851 "inst_util.m"
          {
#line 1851 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_20);
          }
#line 1850 "inst_util.m"
      }
#line 1846 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1846 "inst_util.m"
  }
#line 1826 "inst_util.m"
}

#line 1806 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_2_6_p_0(
#line 1806 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_7,
#line 1806 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_8,
#line 1806 "inst_util.m"
  MR_Word check_hlds__inst_util__MaybeType_9,
#line 1806 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_10,
#line 1806 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14,
#line 1806 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15)
#line 1806 "inst_util.m"
{
#line 1809 "inst_util.m"
  {
#line 1809 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 1809 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_12;
#line 1809 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_13;

#line 1815 "inst_util.m"
    {
#line 1815 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstA_7, &check_hlds__inst_util__ExpandedInstA_12);
    }
#line 1816 "inst_util.m"
    {
#line 1816 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__InstB_8, &check_hlds__inst_util__ExpandedInstB_13);
    }
#line 1817 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1819 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1818 "inst_util.m"
      {
#line 1818 "inst_util.m"
        *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstA_12;
#line 1818 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1818 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1818 "inst_util.m"
      }
#line 1819 "inst_util.m"
    else
#line 1821 "inst_util.m"
      {
#line 1819 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__ExpandedInstA_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1821 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1820 "inst_util.m"
          {
#line 1820 "inst_util.m"
            *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__ExpandedInstB_13;
#line 1820 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14;
#line 1820 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1820 "inst_util.m"
          }
#line 1821 "inst_util.m"
        else
#line 1822 "inst_util.m"
          {
#line 1822 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(check_hlds__inst_util__ExpandedInstA_12, check_hlds__inst_util__ExpandedInstB_13, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15);
          }
#line 1821 "inst_util.m"
      }
#line 1809 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1809 "inst_util.m"
  }
#line 1806 "inst_util.m"
}

#line 1722 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1722 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1722 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1722 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1722 "inst_util.m"
{
#line 1725 "inst_util.m"
  {
#line 1725 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1725 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1725 "inst_util.m"
      {
#line 1725 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1725 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1725 "inst_util.m"
      }
#line 1725 "inst_util.m"
    else
#line 1726 "inst_util.m"
      {
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1726 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1727 "inst_util.m"
        {
#line 1727 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1728 "inst_util.m"
        {
#line 1728 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1726 "inst_util.m"
        {
#line 1726 "inst_util.m"
          MR_Word base;
#line 1726 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1726 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1726 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1726 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1726 "inst_util.m"
        }
#line 1726 "inst_util.m"
      }
#line 1725 "inst_util.m"
  }
#line 1722 "inst_util.m"
}

#line 1711 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
#line 1711 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1711 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1711 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1711 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1711 "inst_util.m"
{
#line 1714 "inst_util.m"
  {
#line 1714 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1714 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1714 "inst_util.m"
      {
#line 1714 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1714 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1714 "inst_util.m"
      }
#line 1714 "inst_util.m"
    else
#line 1716 "inst_util.m"
      {
#line 1716 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1716 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1716 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1716 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1716 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1716 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1716 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1716 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1718 "inst_util.m"
        {
#line 1718 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1719 "inst_util.m"
        {
#line 1719 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1719 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1719 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1719 "inst_util.m"
        }
#line 1720 "inst_util.m"
        {
#line 1720 "inst_util.m"
          check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1715 "inst_util.m"
        {
#line 1715 "inst_util.m"
          MR_Word base;
#line 1715 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1715 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1715 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1715 "inst_util.m"
        }
#line 1716 "inst_util.m"
      }
#line 1714 "inst_util.m"
  }
#line 1711 "inst_util.m"
}

#line 1604 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
#line 1604 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1604 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__2_2,
#line 1604 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 1604 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4)
#line 1604 "inst_util.m"
{
#line 1607 "inst_util.m"
  {
#line 1607 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1607 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1607 "inst_util.m"
      {
#line 1607 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1607 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1607 "inst_util.m"
      }
#line 1607 "inst_util.m"
    else
#line 1609 "inst_util.m"
      {
#line 1609 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1609 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1609 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_10;
#line 1609 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_11;
#line 1609 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 0)));
#line 1609 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_8, (MR_Integer) 1)));
#line 1609 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_15;
#line 1609 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1611 "inst_util.m"
        {
#line 1611 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__ArgInsts0_14, &check_hlds__inst_util__ArgInsts_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 1612 "inst_util.m"
        {
#line 1612 "inst_util.m"
          check_hlds__inst_util__Bound_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_13));
#line 1612 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_10, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_15));
#line 1612 "inst_util.m"
        }
#line 1613 "inst_util.m"
        {
#line 1613 "inst_util.m"
          check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__Bounds0_9, &check_hlds__inst_util__Bounds_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1608 "inst_util.m"
        {
#line 1608 "inst_util.m"
          MR_Word base;
#line 1608 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1608 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_10));
#line 1608 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_11));
#line 1608 "inst_util.m"
        }
#line 1609 "inst_util.m"
      }
#line 1607 "inst_util.m"
  }
#line 1604 "inst_util.m"
}

#line 1483 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
#line 1483 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_5,
#line 1483 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_6,
#line 1483 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34,
#line 1483 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35)
#line 1483 "inst_util.m"
{
#line 1488 "inst_util.m"
  {
#line 1488 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1488 "inst_util.m"
#line 1488 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
#line 1488 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1488 "inst_util.m"
      case (MR_Integer) 0:
#line 1488 "inst_util.m"
#line 1488 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_5)) {
#line 1488 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1488 "inst_util.m"
          case (MR_Integer) 0:
#line 1491 "inst_util.m"
            {
#line 1493 "inst_util.m"
              {
#line 1493 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
#line 1493 "inst_util.m"
                return;
              }
#line 1491 "inst_util.m"
            }
#line 1488 "inst_util.m"
            break;
#line 1488 "inst_util.m"
          case (MR_Integer) 1:
#line 1488 "inst_util.m"
            {
#line 1489 "inst_util.m"
              *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1488 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1488 "inst_util.m"
            }
#line 1488 "inst_util.m"
            break;
#line 1488 "inst_util.m"
        }
#line 1488 "inst_util.m"
        break;
#line 1488 "inst_util.m"
      case (MR_Integer) 1:
#line 1495 "inst_util.m"
        {
#line 1497 "inst_util.m"
          {
#line 1497 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
#line 1497 "inst_util.m"
            return;
          }
#line 1495 "inst_util.m"
        }
#line 1488 "inst_util.m"
        break;
#line 1488 "inst_util.m"
      case (MR_Integer) 2:
#line 1499 "inst_util.m"
        {
#line 1499 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1499 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1499 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[15 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1501 "inst_util.m"
          {
#line 1501 "inst_util.m"
            MR_Word base;
#line 1501 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1501 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1501 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1501 "inst_util.m"
          }
#line 1499 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1499 "inst_util.m"
        }
#line 1488 "inst_util.m"
        break;
#line 1488 "inst_util.m"
      case (MR_Integer) 3:
#line 1488 "inst_util.m"
#line 1488 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
#line 1488 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1488 "inst_util.m"
          case (MR_Integer) 0:
#line 1503 "inst_util.m"
            {
#line 1503 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1503 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1503 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1503 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1503 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_55 = ((&check_hlds__inst_util_vector_common_2[20 + check_hlds__inst_util__Uniq0_54]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1529 "inst_util.m"
              {
#line 1529 "inst_util.m"
                check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1530 "inst_util.m"
              {
#line 1530 "inst_util.m"
                MR_Word base;
#line 1530 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1530 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1530 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_55));
#line 1530 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_12));
#line 1530 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1530 "inst_util.m"
              }
#line 1503 "inst_util.m"
            }
#line 1488 "inst_util.m"
            break;
#line 1488 "inst_util.m"
          case (MR_Integer) 1:
#line 1532 "inst_util.m"
            {
#line 1532 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1532 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1532 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_57 = ((&check_hlds__inst_util_vector_common_2[25 + check_hlds__inst_util__Uniq0_56]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1534 "inst_util.m"
              {
#line 1534 "inst_util.m"
                MR_Word base;
#line 1534 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1534 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1534 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_57));
#line 1534 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1534 "inst_util.m"
              }
#line 1532 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1532 "inst_util.m"
            }
#line 1488 "inst_util.m"
            break;
#line 1488 "inst_util.m"
          case (MR_Integer) 2:
#line 1536 "inst_util.m"
            {
#line 1537 "inst_util.m"
              {
#line 1537 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
#line 1537 "inst_util.m"
                return;
              }
#line 1536 "inst_util.m"
            }
#line 1488 "inst_util.m"
            break;
#line 1488 "inst_util.m"
          case (MR_Integer) 3:
#line 1539 "inst_util.m"
            {
#line 1539 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1539 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1539 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst1_19;

#line 1540 "inst_util.m"
              {
#line 1540 "inst_util.m"
                check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1541 "inst_util.m"
              {
#line 1541 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst1_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
              }
#line 1543 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1542 "inst_util.m"
                {
#line 1542 "inst_util.m"
                  MR_Word base;
#line 1542 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1542 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1542 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1542 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1542 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst1_19));
#line 1542 "inst_util.m"
                }
#line 1543 "inst_util.m"
              else
#line 1544 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst1_19;
#line 1539 "inst_util.m"
            }
#line 1488 "inst_util.m"
            break;
#line 1488 "inst_util.m"
          case (MR_Integer) 4:
#line 1550 "inst_util.m"
            {
#line 1550 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1550 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_23;
#line 1550 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInstTable0_24;
#line 1550 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1550 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInstTable1_26;
#line 1550 "inst_util.m"
              MR_Word check_hlds__inst_util__SharedInst_28;

#line 1552 "inst_util.m"
              {
#line 1552 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__InstTable0_23);
              }
#line 1553 "inst_util.m"
              {
#line 1553 "inst_util.m"
                hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__SharedInstTable0_24);
              }
#line 1554 "inst_util.m"
              {
#line 1554 "inst_util.m"
                hlds__hlds_data__search_insert_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__SharedInstTable0_24, &check_hlds__inst_util__SharedInstTable1_26);
              }
#line 1564 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "inst_util.m"
                {
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_29;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_30;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__SharedInstTable2_31;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__SharedInstTable_32;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_33;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_38_38;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_58;
#line 1565 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_59;

#line 1568 "inst_util.m"
                  {
#line 1568 "inst_util.m"
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
#line 1570 "inst_util.m"
                  {
#line 1570 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36);
                  }
#line 1574 "inst_util.m"
                  {
#line 1574 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_58);
                  }
#line 1575 "inst_util.m"
                  {
#line 1575 "inst_util.m"
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__inst_util__SubInst0_58, &check_hlds__inst_util__SubInst1_59);
                  }
#line 1576 "inst_util.m"
                  {
#line 1576 "inst_util.m"
                    check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__SubInst1_59, &check_hlds__inst_util__SharedInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36_36, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
#line 1580 "inst_util.m"
                  {
#line 1580 "inst_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__InstTable2_30);
                  }
#line 1581 "inst_util.m"
                  {
#line 1581 "inst_util.m"
                    hlds__hlds_data__inst_table_get_shared_insts_2_p_0(check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__SharedInstTable2_31);
                  }
#line 1582 "inst_util.m"
                  {
#line 1582 "inst_util.m"
                    check_hlds__inst_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_38_38, 0) = ((MR_Box) (check_hlds__inst_util__SharedInst_28));
#line 1582 "inst_util.m"
                  }
#line 1582 "inst_util.m"
                  {
#line 1582 "inst_util.m"
                    hlds__hlds_data__det_update_shared_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_38_38, check_hlds__inst_util__SharedInstTable2_31, &check_hlds__inst_util__SharedInstTable_32);
                  }
#line 1584 "inst_util.m"
                  {
#line 1584 "inst_util.m"
                    hlds__hlds_data__inst_table_set_shared_insts_3_p_0(check_hlds__inst_util__SharedInstTable_32, check_hlds__inst_util__InstTable2_30, &check_hlds__inst_util__InstTable_33);
                  }
#line 1586 "inst_util.m"
                  {
#line 1586 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35);
                  }
#line 1565 "inst_util.m"
                }
#line 1564 "inst_util.m"
              else
#line 1557 "inst_util.m"
                {
#line 1557 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1560 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1562 "inst_util.m"
                    check_hlds__inst_util__SharedInst_28 = check_hlds__inst_util__Inst0_5;
#line 1560 "inst_util.m"
                  else
#line 1559 "inst_util.m"
                    check_hlds__inst_util__SharedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1557 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_34;
#line 1557 "inst_util.m"
                }
#line 1589 "inst_util.m"
              {
#line 1589 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__SharedInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35, check_hlds__inst_util__InstName_22);
              }
#line 1591 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1590 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1591 "inst_util.m"
              else
#line 1592 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SharedInst_28;
#line 1550 "inst_util.m"
            }
#line 1488 "inst_util.m"
            break;
#line 1488 "inst_util.m"
          case (MR_Integer) 5:
#line 1547 "inst_util.m"
            {
#line 1548 "inst_util.m"
              {
#line 1548 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
#line 1548 "inst_util.m"
                return;
              }
#line 1547 "inst_util.m"
            }
#line 1488 "inst_util.m"
            break;
#line 1488 "inst_util.m"
        }
#line 1488 "inst_util.m"
        break;
#line 1488 "inst_util.m"
    }
#line 1488 "inst_util.m"
  }
#line 1483 "inst_util.m"
}

#line 1456 "inst_util.m"
static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
#line 1456 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1456 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 1456 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__3_3,
#line 1456 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4,
#line 1456 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5)
#line 1456 "inst_util.m"
{
#line 1459 "inst_util.m"
  {
#line 1459 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1459 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1459 "inst_util.m"
      if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1459 "inst_util.m"
        {
#line 1459 "inst_util.m"
          *check_hlds__inst_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1459 "inst_util.m"
        }
#line 1459 "inst_util.m"
      else
#line 1470 "inst_util.m"
        {
#line 1471 "inst_util.m"
          {
#line 1471 "inst_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1471 "inst_util.m"
            return;
          }
#line 1470 "inst_util.m"
        }
#line 1459 "inst_util.m"
    else
#line 1459 "inst_util.m"
      {
#line 1459 "inst_util.m"
        MR_Word check_hlds__inst_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1459 "inst_util.m"
        MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1459 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1472 "inst_util.m"
          {
#line 1473 "inst_util.m"
            {
#line 1473 "inst_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
#line 1473 "inst_util.m"
              return;
            }
#line 1472 "inst_util.m"
          }
#line 1459 "inst_util.m"
        else
#line 1461 "inst_util.m"
          {
#line 1461 "inst_util.m"
            MR_Word check_hlds__inst_util__Live_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1461 "inst_util.m"
            MR_Word check_hlds__inst_util__Lives_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1461 "inst_util.m"
            MR_Word check_hlds__inst_util__Inst_13;
#line 1461 "inst_util.m"
            MR_Word check_hlds__inst_util__Insts_14;
#line 1461 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18;

#line 1465 "inst_util.m"
#line 1465 "inst_util.m"
            switch (check_hlds__inst_util__Live_11) {
#line 1465 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1465 "inst_util.m"
              case (MR_Integer) 1:
#line 1466 "inst_util.m"
                {
#line 1467 "inst_util.m"
                  check_hlds__inst_util__Inst_13 = check_hlds__inst_util__V_37_37;
#line 1466 "inst_util.m"
                  check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4;
#line 1466 "inst_util.m"
                }
#line 1465 "inst_util.m"
                break;
#line 1465 "inst_util.m"
              case (MR_Integer) 0:
#line 1463 "inst_util.m"
                {
#line 1463 "inst_util.m"
                  check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__V_37_37, &check_hlds__inst_util__Inst_13, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_4, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18);
                }
#line 1465 "inst_util.m"
                break;
#line 1465 "inst_util.m"
            }
#line 1469 "inst_util.m"
            {
#line 1469 "inst_util.m"
              check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__V_36_36, check_hlds__inst_util__Lives_12, &check_hlds__inst_util__Insts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_5);
            }
#line 1461 "inst_util.m"
            {
#line 1461 "inst_util.m"
              MR_Word base;
#line 1461 "inst_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "inst_util.m"
              *check_hlds__inst_util__HeadVar__3_3 = base;
#line 1461 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_13));
#line 1461 "inst_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_14));
#line 1461 "inst_util.m"
            }
#line 1461 "inst_util.m"
          }
#line 1459 "inst_util.m"
      }
#line 1459 "inst_util.m"
  }
#line 1456 "inst_util.m"
}

#line 1436 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1436 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1436 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1436 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1436 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1436 "inst_util.m"
{
#line 1441 "inst_util.m"
  {
#line 1441 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1441 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1441 "inst_util.m"
      {
#line 1441 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1441 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1441 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1441 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1441 "inst_util.m"
      }
#line 1441 "inst_util.m"
    else
#line 1443 "inst_util.m"
      {
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1443 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1442 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1442 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1442 "inst_util.m"
          {
#line 1442 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1442 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1444 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1444 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1444 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1446 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1445 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1446 "inst_util.m"
            else
#line 1447 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1449 "inst_util.m"
            {
#line 1449 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1443 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1443 "inst_util.m"
              {
#line 1450 "inst_util.m"
                {
#line 1450 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1443 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1443 "inst_util.m"
                  {
#line 1443 "inst_util.m"
                    {
#line 1443 "inst_util.m"
                      MR_Word base;
#line 1443 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1443 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1443 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1443 "inst_util.m"
                    }
#line 1452 "inst_util.m"
                    {
#line 1452 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1452 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1443 "inst_util.m"
                  }
#line 1443 "inst_util.m"
              }
#line 1442 "inst_util.m"
          }
#line 1443 "inst_util.m"
      }
#line 1441 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1441 "inst_util.m"
  }
#line 1436 "inst_util.m"
}

#line 1425 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1425 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1425 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1425 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1425 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1425 "inst_util.m"
{
#line 1429 "inst_util.m"
  {
#line 1429 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1429 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1429 "inst_util.m"
      {
#line 1429 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1429 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1429 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1429 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1429 "inst_util.m"
      }
#line 1429 "inst_util.m"
    else
#line 1431 "inst_util.m"
      {
#line 1431 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1431 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1431 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1431 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1431 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1431 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1431 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1432 "inst_util.m"
        {
#line 1432 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1431 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1431 "inst_util.m"
          {
#line 1433 "inst_util.m"
            {
#line 1433 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1431 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1431 "inst_util.m"
              {
#line 1430 "inst_util.m"
                {
#line 1430 "inst_util.m"
                  MR_Word base;
#line 1430 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1430 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1430 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1430 "inst_util.m"
                }
#line 1434 "inst_util.m"
                {
#line 1434 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1434 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1431 "inst_util.m"
              }
#line 1431 "inst_util.m"
          }
#line 1431 "inst_util.m"
      }
#line 1429 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1429 "inst_util.m"
  }
#line 1425 "inst_util.m"
}

#line 1409 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1409 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1409 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1409 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1409 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1409 "inst_util.m"
{
#line 1414 "inst_util.m"
  {
#line 1414 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1414 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1414 "inst_util.m"
      {
#line 1414 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1414 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1414 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1414 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1414 "inst_util.m"
      }
#line 1414 "inst_util.m"
    else
#line 1416 "inst_util.m"
      {
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__Bound_20;
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__Bounds_21;
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 0)));
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound0_15, (MR_Integer) 1)));
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1416 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1418 "inst_util.m"
        {
#line 1418 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1416 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1416 "inst_util.m"
          {
#line 1420 "inst_util.m"
            {
#line 1420 "inst_util.m"
              check_hlds__inst_util__Bound_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1420 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1420 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__Bound_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1420 "inst_util.m"
            }
#line 1421 "inst_util.m"
            {
#line 1421 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__Bounds0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Bounds_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1416 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1416 "inst_util.m"
              {
#line 1416 "inst_util.m"
                {
#line 1416 "inst_util.m"
                  MR_Word base;
#line 1416 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1416 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Bound_20));
#line 1416 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Bounds_21));
#line 1416 "inst_util.m"
                }
#line 1423 "inst_util.m"
                {
#line 1423 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1423 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1416 "inst_util.m"
              }
#line 1416 "inst_util.m"
          }
#line 1416 "inst_util.m"
      }
#line 1414 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1414 "inst_util.m"
  }
#line 1409 "inst_util.m"
}

#line 1302 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1302 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1302 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1302 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46,
#line 1302 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47)
#line 1302 "inst_util.m"
{
#line 1308 "inst_util.m"
  {
#line 1308 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1308 "inst_util.m"
#line 1308 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
#line 1308 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1308 "inst_util.m"
      case (MR_Integer) 0:
#line 1308 "inst_util.m"
#line 1308 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
#line 1308 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1308 "inst_util.m"
          case (MR_Integer) 0:
#line 1318 "inst_util.m"
            {
#line 1318 "inst_util.m"
              MR_Word check_hlds__inst_util__V_71_71;
#line 1318 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_73;

#line 1319 "inst_util.m"
              {
#line 1319 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_73);
              }
#line 1318 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1318 "inst_util.m"
                {
#line 1320 "inst_util.m"
                  check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1321 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1318 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1320 "inst_util.m"
                  {
#line 1320 "inst_util.m"
                    MR_Word base;
#line 1320 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1320 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_73));
#line 1320 "inst_util.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 1320 "inst_util.m"
                  }
#line 1320 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1318 "inst_util.m"
                }
#line 1318 "inst_util.m"
            }
#line 1308 "inst_util.m"
            break;
#line 1308 "inst_util.m"
          case (MR_Integer) 1:
#line 1308 "inst_util.m"
            {
#line 1309 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1310 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1308 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1308 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1308 "inst_util.m"
            }
#line 1308 "inst_util.m"
            break;
#line 1308 "inst_util.m"
        }
#line 1308 "inst_util.m"
        break;
#line 1308 "inst_util.m"
      case (MR_Integer) 1:
#line 1323 "inst_util.m"
        {
#line 1323 "inst_util.m"
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1323 "inst_util.m"
          MR_Word check_hlds__inst_util__Any_20;
#line 1323 "inst_util.m"
          MR_Word check_hlds__inst_util__V_65_65;
#line 1323 "inst_util.m"
          MR_Word check_hlds__inst_util__V_67_67;

#line 1328 "inst_util.m"
          {
#line 1328 "inst_util.m"
            check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_67_67, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "inst_util.m"
          }
#line 1328 "inst_util.m"
          {
#line 1328 "inst_util.m"
            check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 0) = ((MR_Box) (check_hlds__inst_util__Live_10));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_65_65, 3) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1328 "inst_util.m"
          }
#line 1328 "inst_util.m"
          {
#line 1328 "inst_util.m"
            check_hlds__inst_util__Any_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 1) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1328 "inst_util.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_util__Any_20, 2) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 1328 "inst_util.m"
          }
#line 1329 "inst_util.m"
          {
#line 1329 "inst_util.m"
            MR_Word base;
#line 1329 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "inst_util.m"
            *check_hlds__inst_util__Inst_13 = base;
#line 1329 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1329 "inst_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Any_20));
#line 1329 "inst_util.m"
          }
#line 1330 "inst_util.m"
          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1323 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1323 "inst_util.m"
          check_hlds__inst_util__succeeded = MR_TRUE;
#line 1323 "inst_util.m"
        }
#line 1308 "inst_util.m"
        break;
#line 1308 "inst_util.m"
      case (MR_Integer) 2:
#line 1312 "inst_util.m"
        {
#line 1312 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1312 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1312 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_18;

#line 1314 "inst_util.m"
          {
#line 1314 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
          }
#line 1312 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1312 "inst_util.m"
            {
#line 1316 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1312 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1315 "inst_util.m"
              {
#line 1315 "inst_util.m"
                MR_Word base;
#line 1315 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1315 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1315 "inst_util.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1315 "inst_util.m"
              }
#line 1315 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1312 "inst_util.m"
            }
#line 1312 "inst_util.m"
        }
#line 1308 "inst_util.m"
        break;
#line 1308 "inst_util.m"
      case (MR_Integer) 3:
#line 1308 "inst_util.m"
#line 1308 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
#line 1308 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1308 "inst_util.m"
          case (MR_Integer) 0:
#line 1332 "inst_util.m"
            {
#line 1332 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1332 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_23;
#line 1332 "inst_util.m"
              MR_Word check_hlds__inst_util__Detism1_24;
#line 1332 "inst_util.m"
              MR_Word check_hlds__inst_util__V_63_63;
#line 1332 "inst_util.m"
              MR_Word check_hlds__inst_util__V_64_64;
#line 1332 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1332 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_75;
#line 1332 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResults0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));

#line 1334 "inst_util.m"
              {
#line 1334 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_74, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
#line 1332 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1332 "inst_util.m"
                {
#line 1335 "inst_util.m"
                  {
#line 1335 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_22, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_23, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                  }
#line 1332 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1332 "inst_util.m"
                    {
#line 1338 "inst_util.m"
                      check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1339 "inst_util.m"
                      check_hlds__inst_util__V_64_64 = (MR_Integer) 1;
#line 1338 "inst_util.m"
                      {
#line 1338 "inst_util.m"
                        MR_Word base;
#line 1338 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 1338 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1338 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1338 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 1338 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_23));
#line 1338 "inst_util.m"
                      }
#line 1339 "inst_util.m"
                      {
#line 1339 "inst_util.m"
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__V_64_64, check_hlds__inst_util__Detism_14);
                      }
#line 1339 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1332 "inst_util.m"
                    }
#line 1332 "inst_util.m"
                }
#line 1332 "inst_util.m"
            }
#line 1308 "inst_util.m"
            break;
#line 1308 "inst_util.m"
          case (MR_Integer) 1:
#line 1341 "inst_util.m"
            {
#line 1341 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1341 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1341 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_77;

#line 1343 "inst_util.m"
              {
#line 1343 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_76, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_77);
              }
#line 1341 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1341 "inst_util.m"
                {
#line 1345 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1341 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1344 "inst_util.m"
                  {
#line 1344 "inst_util.m"
                    MR_Word base;
#line 1344 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1344 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1344 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_77));
#line 1344 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_25));
#line 1344 "inst_util.m"
                  }
#line 1344 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1341 "inst_util.m"
                }
#line 1341 "inst_util.m"
            }
#line 1308 "inst_util.m"
            break;
#line 1308 "inst_util.m"
          case (MR_Integer) 2:
#line 1347 "inst_util.m"
            {
#line 1348 "inst_util.m"
              {
#line 1348 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_any_inst\'/8", (MR_String) "free inst var");
              }
#line 1347 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1347 "inst_util.m"
            }
#line 1308 "inst_util.m"
            break;
#line 1308 "inst_util.m"
          case (MR_Integer) 3:
#line 1350 "inst_util.m"
            {
#line 1350 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1350 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1350 "inst_util.m"
              MR_Word check_hlds__inst_util__V_54_54;

#line 1352 "inst_util.m"
              {
#line 1352 "inst_util.m"
                check_hlds__inst_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_54_54, 0) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1352 "inst_util.m"
                MR_hl_field(MR_mktag(2), check_hlds__inst_util__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1352 "inst_util.m"
              }
#line 1351 "inst_util.m"
              {
#line 1351 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_27, check_hlds__inst_util__SubInst0_28, check_hlds__inst_util__V_54_54, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
              }
#line 1350 "inst_util.m"
            }
#line 1308 "inst_util.m"
            break;
#line 1308 "inst_util.m"
          case (MR_Integer) 4:
#line 1358 "inst_util.m"
            {
#line 1358 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1358 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_32;
#line 1358 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstTable0_33;
#line 1358 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstInfo_34;
#line 1358 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstName_35;
#line 1358 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_36;
#line 1358 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInstTable1_37;
#line 1358 "inst_util.m"
              MR_Word check_hlds__inst_util__AnyInst_39;

#line 1360 "inst_util.m"
              {
#line 1360 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__InstTable0_32);
              }
#line 1361 "inst_util.m"
              {
#line 1361 "inst_util.m"
                hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__AnyInstTable0_33);
              }
#line 1362 "inst_util.m"
              {
#line 1362 "inst_util.m"
                check_hlds__inst_util__AnyInstInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_34, 0) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1362 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__AnyInstInfo_34, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1362 "inst_util.m"
              }
#line 1363 "inst_util.m"
              {
#line 1363 "inst_util.m"
                check_hlds__inst_util__AnyInstName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1363 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 1) = ((MR_Box) (check_hlds__inst_util__InstName_31));
#line 1363 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInstName_35, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1363 "inst_util.m"
              }
#line 1364 "inst_util.m"
              {
#line 1364 "inst_util.m"
                hlds__hlds_data__search_insert_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_34, &check_hlds__inst_util__MaybeMaybeInst_36, check_hlds__inst_util__AnyInstTable0_33, &check_hlds__inst_util__AnyInstTable1_37);
              }
#line 1378 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1379 "inst_util.m"
                {
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_40;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_41;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_42;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__AnyInstTable2_43;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__AnyInstTable_44;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_45;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_50_50;
#line 1379 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_78;

#line 1382 "inst_util.m"
                  {
#line 1382 "inst_util.m"
                    hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable1_37, check_hlds__inst_util__InstTable0_32, &check_hlds__inst_util__InstTable1_40);
                  }
#line 1383 "inst_util.m"
                  {
#line 1383 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_40, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                  }
#line 1387 "inst_util.m"
                  {
#line 1387 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__InstName_31, &check_hlds__inst_util__SubInst0_78);
                  }
#line 1388 "inst_util.m"
                  {
#line 1388 "inst_util.m"
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__SubInst0_78, &check_hlds__inst_util__SubInst1_41);
                  }
#line 1389 "inst_util.m"
                  {
#line 1389 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__SubInst1_41, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__AnyInst_39, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49);
                  }
#line 1379 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1379 "inst_util.m"
                    {
#line 1394 "inst_util.m"
                      {
#line 1394 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, &check_hlds__inst_util__InstTable2_42);
                      }
#line 1395 "inst_util.m"
                      {
#line 1395 "inst_util.m"
                        hlds__hlds_data__inst_table_get_any_insts_2_p_0(check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__AnyInstTable2_43);
                      }
#line 1396 "inst_util.m"
                      {
#line 1396 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_50_50, 0) = ((MR_Box) (check_hlds__inst_util__AnyInst_39));
#line 1396 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_50_50, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1396 "inst_util.m"
                      }
#line 1396 "inst_util.m"
                      {
#line 1396 "inst_util.m"
                        hlds__hlds_data__det_update_any_inst_4_p_0(check_hlds__inst_util__AnyInstInfo_34, check_hlds__inst_util__V_50_50, check_hlds__inst_util__AnyInstTable2_43, &check_hlds__inst_util__AnyInstTable_44);
                      }
#line 1398 "inst_util.m"
                      {
#line 1398 "inst_util.m"
                        hlds__hlds_data__inst_table_set_any_insts_3_p_0(check_hlds__inst_util__AnyInstTable_44, check_hlds__inst_util__InstTable2_42, &check_hlds__inst_util__InstTable_45);
                      }
#line 1399 "inst_util.m"
                      {
#line 1399 "inst_util.m"
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_45, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_49_49, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47);
                      }
#line 1399 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1379 "inst_util.m"
                    }
#line 1379 "inst_util.m"
                }
#line 1378 "inst_util.m"
              else
#line 1367 "inst_util.m"
                {
#line 1367 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_36, (MR_Integer) 0)));

#line 1370 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1371 "inst_util.m"
                    {
#line 1372 "inst_util.m"
                      {
#line 1372 "inst_util.m"
                        check_hlds__inst_util__AnyInst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1372 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__AnyInst_39, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_35));
#line 1372 "inst_util.m"
                      }
#line 1373 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1371 "inst_util.m"
                    }
#line 1370 "inst_util.m"
                  else
#line 1369 "inst_util.m"
                    {
#line 1369 "inst_util.m"
                      check_hlds__inst_util__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_38, (MR_Integer) 0)));
#line 1369 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_38, (MR_Integer) 1)));
#line 1369 "inst_util.m"
                    }
#line 1367 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1367 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1367 "inst_util.m"
                }
#line 1358 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1358 "inst_util.m"
                {
#line 1402 "inst_util.m"
                  {
#line 1402 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__AnyInst_39, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47, check_hlds__inst_util__AnyInstName_35);
                  }
#line 1404 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1403 "inst_util.m"
                    {
#line 1403 "inst_util.m"
                      MR_Word base;
#line 1403 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 1403 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1403 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__AnyInstName_35));
#line 1403 "inst_util.m"
                    }
#line 1404 "inst_util.m"
                  else
#line 1405 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__AnyInst_39;
#line 1404 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1358 "inst_util.m"
                }
#line 1358 "inst_util.m"
            }
#line 1308 "inst_util.m"
            break;
#line 1308 "inst_util.m"
          case (MR_Integer) 5:
#line 1354 "inst_util.m"
            {
#line 1355 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_util_scalar_common_1[2]);
#line 1356 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1354 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_46;
#line 1354 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1354 "inst_util.m"
            }
#line 1308 "inst_util.m"
            break;
#line 1308 "inst_util.m"
        }
#line 1308 "inst_util.m"
        break;
#line 1308 "inst_util.m"
    }
#line 1308 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1308 "inst_util.m"
  }
#line 1302 "inst_util.m"
}

#line 1281 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1281 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1281 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1281 "inst_util.m"
{
#line 1286 "inst_util.m"
  {
#line 1286 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1286 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1286 "inst_util.m"
      {
#line 1286 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1286 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1286 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1286 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1286 "inst_util.m"
      }
#line 1286 "inst_util.m"
    else
#line 1288 "inst_util.m"
      {
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInst_20;
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__BoundInsts_21;
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 0)));
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst0_15, (MR_Integer) 1)));
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgInsts_26;
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_27;
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_28;
#line 1288 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31;

#line 1290 "inst_util.m"
        {
#line 1290 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInsts0_25, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__ArgInsts_26, &check_hlds__inst_util__Detism1_27, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31);
        }
#line 1288 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1288 "inst_util.m"
          {
#line 1292 "inst_util.m"
            {
#line 1292 "inst_util.m"
              check_hlds__inst_util__BoundInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 0) = ((MR_Box) (check_hlds__inst_util__ConsId_24));
#line 1292 "inst_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInst_20, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_26));
#line 1292 "inst_util.m"
            }
#line 1293 "inst_util.m"
            {
#line 1293 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInsts_21, &check_hlds__inst_util__Detism2_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_31_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1288 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1288 "inst_util.m"
              {
#line 1288 "inst_util.m"
                {
#line 1288 "inst_util.m"
                  MR_Word base;
#line 1288 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1288 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__BoundInst_20));
#line 1288 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInsts_21));
#line 1288 "inst_util.m"
                }
#line 1295 "inst_util.m"
                {
#line 1295 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_27, check_hlds__inst_util__Detism2_28, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1295 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1288 "inst_util.m"
              }
#line 1288 "inst_util.m"
          }
#line 1288 "inst_util.m"
      }
#line 1286 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1286 "inst_util.m"
  }
#line 1281 "inst_util.m"
}

#line 1176 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst0_9,
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq1_11,
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 1176 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 1176 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 1176 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44,
#line 1176 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45)
#line 1176 "inst_util.m"
{
#line 1182 "inst_util.m"
  {
#line 1182 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1182 "inst_util.m"
#line 1182 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_9)) {
#line 1182 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1182 "inst_util.m"
      case (MR_Integer) 0:
#line 1182 "inst_util.m"
#line 1182 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__Inst0_9)) {
#line 1182 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1182 "inst_util.m"
          case (MR_Integer) 0:
#line 1191 "inst_util.m"
            {
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__V_67_67;
#line 1191 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_69;

#line 1192 "inst_util.m"
              {
#line 1192 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_69);
              }
#line 1191 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1191 "inst_util.m"
                {
#line 1193 "inst_util.m"
                  check_hlds__inst_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1194 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1191 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1193 "inst_util.m"
                  {
#line 1193 "inst_util.m"
                    MR_Word base;
#line 1193 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1193 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1193 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_69));
#line 1193 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_67_67));
#line 1193 "inst_util.m"
                  }
#line 1193 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1191 "inst_util.m"
                }
#line 1191 "inst_util.m"
            }
#line 1182 "inst_util.m"
            break;
#line 1182 "inst_util.m"
          case (MR_Integer) 1:
#line 1182 "inst_util.m"
            {
#line 1183 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1184 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 1182 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1182 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1182 "inst_util.m"
            }
#line 1182 "inst_util.m"
            break;
#line 1182 "inst_util.m"
        }
#line 1182 "inst_util.m"
        break;
#line 1182 "inst_util.m"
      case (MR_Integer) 1:
#line 1196 "inst_util.m"
        {
#line 1196 "inst_util.m"
          MR_Word check_hlds__inst_util__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1196 "inst_util.m"
          MR_Word check_hlds__inst_util__V_64_64;
#line 1196 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_70;

#line 1197 "inst_util.m"
          {
#line 1197 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_70);
          }
#line 1196 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1196 "inst_util.m"
            {
#line 1199 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1196 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1198 "inst_util.m"
              {
#line 1198 "inst_util.m"
                check_hlds__inst_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1198 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_70));
#line 1198 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_64_64, 2) = ((MR_Box) (check_hlds__inst_util__T_19));
#line 1198 "inst_util.m"
              }
#line 1198 "inst_util.m"
              {
#line 1198 "inst_util.m"
                MR_Word base;
#line 1198 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 1198 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1198 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 1198 "inst_util.m"
              }
#line 1198 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1196 "inst_util.m"
            }
#line 1196 "inst_util.m"
        }
#line 1182 "inst_util.m"
        break;
#line 1182 "inst_util.m"
      case (MR_Integer) 2:
#line 1186 "inst_util.m"
        {
#line 1186 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)));
#line 1186 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1186 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_18;

#line 1187 "inst_util.m"
          {
#line 1187 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_16, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_18);
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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_18));
#line 1188 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_17));
#line 1188 "inst_util.m"
              }
#line 1188 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1186 "inst_util.m"
            }
#line 1186 "inst_util.m"
        }
#line 1182 "inst_util.m"
        break;
#line 1182 "inst_util.m"
      case (MR_Integer) 3:
#line 1182 "inst_util.m"
#line 1182 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 0)))) {
#line 1182 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1182 "inst_util.m"
          case (MR_Integer) 0:
#line 1201 "inst_util.m"
            {
#line 1201 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1201 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 3)));
#line 1201 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_22;
#line 1201 "inst_util.m"
              MR_Word check_hlds__inst_util__Detism1_23;
#line 1201 "inst_util.m"
              MR_Word check_hlds__inst_util__V_61_61;
#line 1201 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1201 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_72;

#line 1202 "inst_util.m"
              {
#line 1202 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_71, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_72);
              }
#line 1201 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1201 "inst_util.m"
                {
#line 1203 "inst_util.m"
                  {
#line 1203 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInsts0_21, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_22, &check_hlds__inst_util__Detism1_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                  }
#line 1201 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1201 "inst_util.m"
                    {
#line 1206 "inst_util.m"
                      check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 1205 "inst_util.m"
                      {
#line 1205 "inst_util.m"
                        MR_Word base;
#line 1205 "inst_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = base;
#line 1205 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1205 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_72));
#line 1205 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResults0_20));
#line 1205 "inst_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_22));
#line 1205 "inst_util.m"
                      }
#line 1206 "inst_util.m"
                      {
#line 1206 "inst_util.m"
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_23, check_hlds__inst_util__V_61_61, check_hlds__inst_util__Detism_14);
                      }
#line 1206 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1201 "inst_util.m"
                    }
#line 1201 "inst_util.m"
                }
#line 1201 "inst_util.m"
            }
#line 1182 "inst_util.m"
            break;
#line 1182 "inst_util.m"
          case (MR_Integer) 1:
#line 1208 "inst_util.m"
            {
#line 1208 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1208 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1208 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_75;

#line 1209 "inst_util.m"
              {
#line 1209 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__Uniq0_73, check_hlds__inst_util__Uniq1_11, &check_hlds__inst_util__Uniq_75);
              }
#line 1208 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1208 "inst_util.m"
                {
#line 1211 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1208 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1210 "inst_util.m"
                  {
#line 1210 "inst_util.m"
                    MR_Word base;
#line 1210 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = base;
#line 1210 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1210 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_75));
#line 1210 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_74));
#line 1210 "inst_util.m"
                  }
#line 1210 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1208 "inst_util.m"
                }
#line 1208 "inst_util.m"
            }
#line 1182 "inst_util.m"
            break;
#line 1182 "inst_util.m"
          case (MR_Integer) 2:
#line 1213 "inst_util.m"
            {
#line 1214 "inst_util.m"
              {
#line 1214 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_ground_inst\'/8", (MR_String) "free inst var");
              }
#line 1213 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1213 "inst_util.m"
            }
#line 1182 "inst_util.m"
            break;
#line 1182 "inst_util.m"
          case (MR_Integer) 3:
#line 1216 "inst_util.m"
            {
#line 1216 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1216 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 2)));
#line 1216 "inst_util.m"
              MR_Word check_hlds__inst_util__V_52_52;

#line 1218 "inst_util.m"
              {
#line 1218 "inst_util.m"
                check_hlds__inst_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1218 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 1) = ((MR_Box) (check_hlds__inst_util__Uniq1_11));
#line 1218 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1218 "inst_util.m"
              }
#line 1217 "inst_util.m"
              {
#line 1217 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__InstVars_25, check_hlds__inst_util__SubInst0_26, check_hlds__inst_util__V_52_52, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
              }
#line 1216 "inst_util.m"
            }
#line 1182 "inst_util.m"
            break;
#line 1182 "inst_util.m"
          case (MR_Integer) 4:
#line 1224 "inst_util.m"
            {
#line 1224 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_9, (MR_Integer) 1)));
#line 1224 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_30;
#line 1224 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstTable0_31;
#line 1224 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstInfo_32;
#line 1224 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstName_33;
#line 1224 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_34;
#line 1224 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInstTable1_35;
#line 1224 "inst_util.m"
              MR_Word check_hlds__inst_util__GroundInst_37;

#line 1226 "inst_util.m"
              {
#line 1226 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__InstTable0_30);
              }
#line 1227 "inst_util.m"
              {
#line 1227 "inst_util.m"
                hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__GroundInstTable0_31);
              }
#line 1228 "inst_util.m"
              {
#line 1228 "inst_util.m"
                check_hlds__inst_util__GroundInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 0) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1228 "inst_util.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_util__GroundInstInfo_32, 1) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1228 "inst_util.m"
              }
#line 1229 "inst_util.m"
              {
#line 1229 "inst_util.m"
                check_hlds__inst_util__GroundInstName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1229 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 1) = ((MR_Box) (check_hlds__inst_util__InstName_29));
#line 1229 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInstName_33, 2) = ((MR_Box) ((check_hlds__inst_util__Uniq1_11 | ((((check_hlds__inst_util__Live_10 << (MR_Integer) 3)) | ((check_hlds__inst_util__Real_12 << (MR_Integer) 4)))))));
#line 1229 "inst_util.m"
              }
#line 1230 "inst_util.m"
              {
#line 1230 "inst_util.m"
                hlds__hlds_data__search_insert_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, &check_hlds__inst_util__MaybeMaybeInst_34, check_hlds__inst_util__GroundInstTable0_31, &check_hlds__inst_util__GroundInstTable1_35);
              }
#line 1244 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "inst_util.m"
                {
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_38;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_39;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_40;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__GroundInstTable2_41;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__GroundInstTable_42;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_43;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_48_48;
#line 1245 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_76;

#line 1248 "inst_util.m"
                  {
#line 1248 "inst_util.m"
                    hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable1_35, check_hlds__inst_util__InstTable0_30, &check_hlds__inst_util__InstTable1_38);
                  }
#line 1250 "inst_util.m"
                  {
#line 1250 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46);
                  }
#line 1254 "inst_util.m"
                  {
#line 1254 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__InstName_29, &check_hlds__inst_util__SubInst0_76);
                  }
#line 1255 "inst_util.m"
                  {
#line 1255 "inst_util.m"
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, check_hlds__inst_util__SubInst0_76, &check_hlds__inst_util__SubInst1_39);
                  }
#line 1256 "inst_util.m"
                  {
#line 1256 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__SubInst1_39, check_hlds__inst_util__Live_10, check_hlds__inst_util__Uniq1_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__GroundInst_37, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_46_46, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47);
                  }
#line 1245 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1245 "inst_util.m"
                    {
#line 1262 "inst_util.m"
                      {
#line 1262 "inst_util.m"
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, &check_hlds__inst_util__InstTable2_40);
                      }
#line 1263 "inst_util.m"
                      {
#line 1263 "inst_util.m"
                        hlds__hlds_data__inst_table_get_ground_insts_2_p_0(check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__GroundInstTable2_41);
                      }
#line 1265 "inst_util.m"
                      {
#line 1265 "inst_util.m"
                        check_hlds__inst_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__GroundInst_37));
#line 1265 "inst_util.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 1265 "inst_util.m"
                      }
#line 1264 "inst_util.m"
                      {
#line 1264 "inst_util.m"
                        hlds__hlds_data__det_update_ground_inst_4_p_0(check_hlds__inst_util__GroundInstInfo_32, check_hlds__inst_util__V_48_48, check_hlds__inst_util__GroundInstTable2_41, &check_hlds__inst_util__GroundInstTable_42);
                      }
#line 1267 "inst_util.m"
                      {
#line 1267 "inst_util.m"
                        hlds__hlds_data__inst_table_set_ground_insts_3_p_0(check_hlds__inst_util__GroundInstTable_42, check_hlds__inst_util__InstTable2_40, &check_hlds__inst_util__InstTable_43);
                      }
#line 1269 "inst_util.m"
                      {
#line 1269 "inst_util.m"
                        hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_43, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_47_47, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45);
                      }
#line 1269 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 1245 "inst_util.m"
                    }
#line 1245 "inst_util.m"
                }
#line 1244 "inst_util.m"
              else
#line 1233 "inst_util.m"
                {
#line 1233 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_34, (MR_Integer) 0)));

#line 1236 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1237 "inst_util.m"
                    {
#line 1238 "inst_util.m"
                      {
#line 1238 "inst_util.m"
                        check_hlds__inst_util__GroundInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1238 "inst_util.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_util__GroundInst_37, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1238 "inst_util.m"
                      }
#line 1239 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 1237 "inst_util.m"
                    }
#line 1236 "inst_util.m"
                  else
#line 1235 "inst_util.m"
                    {
#line 1235 "inst_util.m"
                      check_hlds__inst_util__GroundInst_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 0)));
#line 1235 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_36, (MR_Integer) 1)));
#line 1235 "inst_util.m"
                    }
#line 1233 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1233 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1233 "inst_util.m"
                }
#line 1224 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1224 "inst_util.m"
                {
#line 1273 "inst_util.m"
                  {
#line 1273 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__GroundInst_37, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45, check_hlds__inst_util__GroundInstName_33);
                  }
#line 1276 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 1275 "inst_util.m"
                    {
#line 1275 "inst_util.m"
                      MR_Word base;
#line 1275 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1275 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = base;
#line 1275 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1275 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__GroundInstName_33));
#line 1275 "inst_util.m"
                    }
#line 1276 "inst_util.m"
                  else
#line 1277 "inst_util.m"
                    *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__GroundInst_37;
#line 1276 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1224 "inst_util.m"
                }
#line 1224 "inst_util.m"
            }
#line 1182 "inst_util.m"
            break;
#line 1182 "inst_util.m"
          case (MR_Integer) 5:
#line 1220 "inst_util.m"
            {
#line 1221 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__inst_util_scalar_common_3[0]);
#line 1222 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 1220 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_45 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_44;
#line 1220 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1220 "inst_util.m"
            }
#line 1182 "inst_util.m"
            break;
#line 1182 "inst_util.m"
        }
#line 1182 "inst_util.m"
        break;
#line 1182 "inst_util.m"
    }
#line 1182 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1182 "inst_util.m"
  }
#line 1176 "inst_util.m"
}

#line 1161 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_3,
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 1161 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 1161 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1161 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 1161 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 1161 "inst_util.m"
{
#line 1165 "inst_util.m"
  {
#line 1165 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1165 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1165 "inst_util.m"
      {
#line 1165 "inst_util.m"
        *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1165 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 1165 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 1165 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1165 "inst_util.m"
      }
#line 1165 "inst_util.m"
    else
#line 1167 "inst_util.m"
      {
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 1167 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 1168 "inst_util.m"
        {
#line 1168 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_15, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 1167 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1167 "inst_util.m"
          {
#line 1169 "inst_util.m"
            {
#line 1169 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__Insts0_16, check_hlds__inst_util__Live_2, check_hlds__inst_util__Uniq_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1167 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1167 "inst_util.m"
              {
#line 1166 "inst_util.m"
                {
#line 1166 "inst_util.m"
                  MR_Word base;
#line 1166 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "inst_util.m"
                  *check_hlds__inst_util__HeadVar__5_5 = base;
#line 1166 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 1166 "inst_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 1166 "inst_util.m"
                }
#line 1171 "inst_util.m"
                {
#line 1171 "inst_util.m"
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                }
#line 1171 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1167 "inst_util.m"
              }
#line 1167 "inst_util.m"
          }
#line 1167 "inst_util.m"
      }
#line 1165 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1165 "inst_util.m"
  }
#line 1161 "inst_util.m"
}

#line 1142 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_2,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Uniq_4,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 1142 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 1142 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 1142 "inst_util.m"
{
#line 1147 "inst_util.m"
  {
#line 1147 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1147 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1147 "inst_util.m"
      {
#line 1147 "inst_util.m"
        *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1147 "inst_util.m"
        *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 0;
#line 1147 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 1147 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 1147 "inst_util.m"
      }
#line 1147 "inst_util.m"
    else
#line 1149 "inst_util.m"
      {
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLive_20;
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__ArgLives_21;
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_24;
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_25;
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__BothLive_28;
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_29;
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_30;
#line 1149 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;

#line 1148 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1148 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1148 "inst_util.m"
          {
#line 1148 "inst_util.m"
            check_hlds__inst_util__ArgLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1148 "inst_util.m"
            check_hlds__inst_util__ArgLives_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1150 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__Live_2 == (MR_Integer) 0);
#line 1150 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1150 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__ArgLive_20 == (MR_Integer) 0);
#line 1152 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1151 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 0;
#line 1152 "inst_util.m"
            else
#line 1153 "inst_util.m"
              check_hlds__inst_util__BothLive_28 = (MR_Integer) 1;
#line 1155 "inst_util.m"
            {
#line 1155 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__Inst0_17, check_hlds__inst_util__BothLive_28, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Inst_24, &check_hlds__inst_util__Detism1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 1149 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1149 "inst_util.m"
              {
#line 1157 "inst_util.m"
                {
#line 1157 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__Insts0_18, check_hlds__inst_util__Live_2, check_hlds__inst_util__ArgLives_21, check_hlds__inst_util__Uniq_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Insts_25, &check_hlds__inst_util__Detism2_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 1149 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 1149 "inst_util.m"
                  {
#line 1149 "inst_util.m"
                    {
#line 1149 "inst_util.m"
                      MR_Word base;
#line 1149 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 1149 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_24));
#line 1149 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_25));
#line 1149 "inst_util.m"
                    }
#line 1159 "inst_util.m"
                    {
#line 1159 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_29, check_hlds__inst_util__Detism2_30, check_hlds__inst_util__HeadVar__7_7);
                    }
#line 1159 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1149 "inst_util.m"
                  }
#line 1149 "inst_util.m"
              }
#line 1148 "inst_util.m"
          }
#line 1149 "inst_util.m"
      }
#line 1147 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1147 "inst_util.m"
  }
#line 1142 "inst_util.m"
}

#line 1025 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_7,
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_8,
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__Detism_9,
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqA_10,
#line 1025 "inst_util.m"
  MR_Word check_hlds__inst_util__UniqB_11,
#line 1025 "inst_util.m"
  MR_Word * check_hlds__inst_util__Uniq_12)
#line 1025 "inst_util.m"
{
#line 1048 "inst_util.m"
  {
#line 1048 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1048 "inst_util.m"
#line 1048 "inst_util.m"
    switch (check_hlds__inst_util__UniqA_10) {
#line 1048 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "inst_util.m"
      case (MR_Integer) 3:
#line 1119 "inst_util.m"
        {
#line 1135 "inst_util.m"
#line 1135 "inst_util.m"
          switch (check_hlds__inst_util__Live_7) {
#line 1135 "inst_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "inst_util.m"
            case (MR_Integer) 1:
#line 1135 "inst_util.m"
              {
#line 1137 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1135 "inst_util.m"
                if (!(check_hlds__inst_util__succeeded))
#line 1138 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1135 "inst_util.m"
              }
#line 1135 "inst_util.m"
              break;
#line 1135 "inst_util.m"
            case (MR_Integer) 0:
#line 1135 "inst_util.m"
              {
#line 1136 "inst_util.m"
                {
#line 1136 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
#line 1135 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1135 "inst_util.m"
              }
#line 1135 "inst_util.m"
              break;
#line 1135 "inst_util.m"
          }
#line 1119 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1119 "inst_util.m"
            {
#line 1121 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1121 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1119 "inst_util.m"
            }
#line 1119 "inst_util.m"
        }
#line 1048 "inst_util.m"
        break;
#line 1048 "inst_util.m"
      case (MR_Integer) 4:
#line 1123 "inst_util.m"
        {
#line 1135 "inst_util.m"
#line 1135 "inst_util.m"
          switch (check_hlds__inst_util__Live_7) {
#line 1135 "inst_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "inst_util.m"
            case (MR_Integer) 1:
#line 1135 "inst_util.m"
              {
#line 1137 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1135 "inst_util.m"
                if (!(check_hlds__inst_util__succeeded))
#line 1138 "inst_util.m"
                  check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1135 "inst_util.m"
              }
#line 1135 "inst_util.m"
              break;
#line 1135 "inst_util.m"
            case (MR_Integer) 0:
#line 1135 "inst_util.m"
              {
#line 1136 "inst_util.m"
                {
#line 1136 "inst_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                }
#line 1135 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1135 "inst_util.m"
              }
#line 1135 "inst_util.m"
              break;
#line 1135 "inst_util.m"
          }
#line 1123 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 1123 "inst_util.m"
            {
#line 1125 "inst_util.m"
              check_hlds__inst_util__succeeded = (check_hlds__inst_util__UniqB_11 == (MR_Integer) 3);
#line 1127 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1126 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1127 "inst_util.m"
              else
#line 1128 "inst_util.m"
                *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1127 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1123 "inst_util.m"
            }
#line 1123 "inst_util.m"
        }
#line 1048 "inst_util.m"
        break;
#line 1048 "inst_util.m"
      case (MR_Integer) 2:
#line 1089 "inst_util.m"
#line 1089 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1089 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1089 "inst_util.m"
          case (MR_Integer) 3:
#line 1110 "inst_util.m"
            {
#line 1135 "inst_util.m"
#line 1135 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1135 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "inst_util.m"
                case (MR_Integer) 1:
#line 1135 "inst_util.m"
                  {
#line 1137 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1135 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1138 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
                case (MR_Integer) 0:
#line 1135 "inst_util.m"
                  {
#line 1136 "inst_util.m"
                    {
#line 1136 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1135 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
              }
#line 1110 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1110 "inst_util.m"
                {
#line 1112 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1112 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1110 "inst_util.m"
                }
#line 1110 "inst_util.m"
            }
#line 1089 "inst_util.m"
            break;
#line 1089 "inst_util.m"
          case (MR_Integer) 4:
#line 1114 "inst_util.m"
            {
#line 1135 "inst_util.m"
#line 1135 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1135 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "inst_util.m"
                case (MR_Integer) 1:
#line 1135 "inst_util.m"
                  {
#line 1137 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1135 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1138 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
                case (MR_Integer) 0:
#line 1135 "inst_util.m"
                  {
#line 1136 "inst_util.m"
                    {
#line 1136 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1135 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
              }
#line 1114 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1114 "inst_util.m"
                {
#line 1116 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1116 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1114 "inst_util.m"
                }
#line 1114 "inst_util.m"
            }
#line 1089 "inst_util.m"
            break;
#line 1089 "inst_util.m"
          case (MR_Integer) 2:
#line 1105 "inst_util.m"
            {
#line 1105 "inst_util.m"
#line 1105 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1105 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1105 "inst_util.m"
                case (MR_Integer) 1:
#line 1107 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1105 "inst_util.m"
                  break;
#line 1105 "inst_util.m"
                case (MR_Integer) 0:
#line 1104 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1105 "inst_util.m"
                  break;
#line 1105 "inst_util.m"
              }
#line 1105 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1105 "inst_util.m"
            }
#line 1089 "inst_util.m"
            break;
#line 1089 "inst_util.m"
          case (MR_Integer) 0:
#line 1088 "inst_util.m"
            {
#line 1088 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1088 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1088 "inst_util.m"
            }
#line 1089 "inst_util.m"
            break;
#line 1089 "inst_util.m"
          case (MR_Integer) 1:
#line 1094 "inst_util.m"
            {
#line 1094 "inst_util.m"
#line 1094 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1094 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1094 "inst_util.m"
                case (MR_Integer) 1:
#line 1098 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1094 "inst_util.m"
                  break;
#line 1094 "inst_util.m"
                case (MR_Integer) 0:
#line 1093 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1094 "inst_util.m"
                  break;
#line 1094 "inst_util.m"
              }
#line 1094 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1094 "inst_util.m"
            }
#line 1089 "inst_util.m"
            break;
#line 1089 "inst_util.m"
        }
#line 1048 "inst_util.m"
        break;
#line 1048 "inst_util.m"
      case (MR_Integer) 0:
#line 1039 "inst_util.m"
#line 1039 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1039 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "inst_util.m"
          case (MR_Integer) 3:
#line 1040 "inst_util.m"
            {
#line 1135 "inst_util.m"
#line 1135 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1135 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "inst_util.m"
                case (MR_Integer) 1:
#line 1135 "inst_util.m"
                  {
#line 1137 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1135 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1138 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
                case (MR_Integer) 0:
#line 1135 "inst_util.m"
                  {
#line 1136 "inst_util.m"
                    {
#line 1136 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1135 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
              }
#line 1040 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1040 "inst_util.m"
                {
#line 1042 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1042 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1040 "inst_util.m"
                }
#line 1040 "inst_util.m"
            }
#line 1039 "inst_util.m"
            break;
#line 1039 "inst_util.m"
          case (MR_Integer) 4:
#line 1044 "inst_util.m"
            {
#line 1135 "inst_util.m"
#line 1135 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1135 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "inst_util.m"
                case (MR_Integer) 1:
#line 1135 "inst_util.m"
                  {
#line 1137 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1135 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1138 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
                case (MR_Integer) 0:
#line 1135 "inst_util.m"
                  {
#line 1136 "inst_util.m"
                    {
#line 1136 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1135 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
              }
#line 1044 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1044 "inst_util.m"
                {
#line 1046 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1046 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1044 "inst_util.m"
                }
#line 1044 "inst_util.m"
            }
#line 1039 "inst_util.m"
            break;
#line 1039 "inst_util.m"
          case (MR_Integer) 2:
#line 1039 "inst_util.m"
          case (MR_Integer) 0:
#line 1039 "inst_util.m"
          case (MR_Integer) 1:
#line 1038 "inst_util.m"
            {
#line 1038 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1038 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1038 "inst_util.m"
            }
#line 1039 "inst_util.m"
            break;
#line 1039 "inst_util.m"
        }
#line 1048 "inst_util.m"
        break;
#line 1048 "inst_util.m"
      case (MR_Integer) 1:
#line 1054 "inst_util.m"
#line 1054 "inst_util.m"
        switch (check_hlds__inst_util__UniqB_11) {
#line 1054 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1054 "inst_util.m"
          case (MR_Integer) 3:
#line 1075 "inst_util.m"
            {
#line 1135 "inst_util.m"
#line 1135 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1135 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "inst_util.m"
                case (MR_Integer) 1:
#line 1135 "inst_util.m"
                  {
#line 1137 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1135 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1138 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
                case (MR_Integer) 0:
#line 1135 "inst_util.m"
                  {
#line 1136 "inst_util.m"
                    {
#line 1136 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1135 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
              }
#line 1075 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1075 "inst_util.m"
                {
#line 1077 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 3;
#line 1077 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1075 "inst_util.m"
                }
#line 1075 "inst_util.m"
            }
#line 1054 "inst_util.m"
            break;
#line 1054 "inst_util.m"
          case (MR_Integer) 4:
#line 1079 "inst_util.m"
            {
#line 1135 "inst_util.m"
#line 1135 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1135 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "inst_util.m"
                case (MR_Integer) 1:
#line 1135 "inst_util.m"
                  {
#line 1137 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_8 == (MR_Integer) 1);
#line 1135 "inst_util.m"
                    if (!(check_hlds__inst_util__succeeded))
#line 1138 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Detism_9 == (MR_Integer) 0);
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
                case (MR_Integer) 0:
#line 1135 "inst_util.m"
                  {
#line 1136 "inst_util.m"
                    {
#line 1136 "inst_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    }
#line 1135 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 1135 "inst_util.m"
                  }
#line 1135 "inst_util.m"
                  break;
#line 1135 "inst_util.m"
              }
#line 1079 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1079 "inst_util.m"
                {
#line 1081 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 4;
#line 1081 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 1079 "inst_util.m"
                }
#line 1079 "inst_util.m"
            }
#line 1054 "inst_util.m"
            break;
#line 1054 "inst_util.m"
          case (MR_Integer) 2:
#line 1068 "inst_util.m"
            {
#line 1068 "inst_util.m"
#line 1068 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1068 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1068 "inst_util.m"
                case (MR_Integer) 1:
#line 1072 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 2;
#line 1068 "inst_util.m"
                  break;
#line 1068 "inst_util.m"
                case (MR_Integer) 0:
#line 1067 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1068 "inst_util.m"
                  break;
#line 1068 "inst_util.m"
              }
#line 1068 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1068 "inst_util.m"
            }
#line 1054 "inst_util.m"
            break;
#line 1054 "inst_util.m"
          case (MR_Integer) 0:
#line 1053 "inst_util.m"
            {
#line 1053 "inst_util.m"
              *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1053 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1053 "inst_util.m"
            }
#line 1054 "inst_util.m"
            break;
#line 1054 "inst_util.m"
          case (MR_Integer) 1:
#line 1059 "inst_util.m"
            {
#line 1059 "inst_util.m"
#line 1059 "inst_util.m"
              switch (check_hlds__inst_util__Live_7) {
#line 1059 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1059 "inst_util.m"
                case (MR_Integer) 1:
#line 1061 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 1;
#line 1059 "inst_util.m"
                  break;
#line 1059 "inst_util.m"
                case (MR_Integer) 0:
#line 1058 "inst_util.m"
                  *check_hlds__inst_util__Uniq_12 = (MR_Integer) 0;
#line 1059 "inst_util.m"
                  break;
#line 1059 "inst_util.m"
              }
#line 1059 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 1059 "inst_util.m"
            }
#line 1054 "inst_util.m"
            break;
#line 1054 "inst_util.m"
        }
#line 1048 "inst_util.m"
        break;
#line 1048 "inst_util.m"
    }
#line 1048 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1048 "inst_util.m"
  }
#line 1025 "inst_util.m"
}

#line 978 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_10,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__InstVarsA_11,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__SubInstA_12,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_13,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_14,
#line 978 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_15,
#line 978 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_16,
#line 978 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21,
#line 978 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22)
#line 978 "inst_util.m"
{
#line 983 "inst_util.m"
  {
#line 983 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 983 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;

#line 984 "inst_util.m"
    {
#line 984 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_10, check_hlds__inst_util__SubInstA_12, check_hlds__inst_util__InstB_13, check_hlds__inst_util__Real_14, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_21, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
    }
#line 983 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 983 "inst_util.m"
      {
#line 986 "inst_util.m"
        {
#line 986 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_18, check_hlds__inst_util__SubInstA_12, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_22);
        }
#line 986 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 990 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 989 "inst_util.m"
          *check_hlds__inst_util__Inst_15 = check_hlds__inst_util__Inst0_18;
#line 990 "inst_util.m"
        else
#line 993 "inst_util.m"
          {
#line 993 "inst_util.m"
            MR_Word check_hlds__inst_util__InstVars0_19;
#line 993 "inst_util.m"
            MR_Word check_hlds__inst_util__SubInst0_20;

#line 990 "inst_util.m"
            check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__Inst0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 990 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 990 "inst_util.m"
              {
#line 990 "inst_util.m"
                check_hlds__inst_util__InstVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 1)));
#line 990 "inst_util.m"
                check_hlds__inst_util__SubInst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_18, (MR_Integer) 2)));
#line 992 "inst_util.m"
                {
#line 992 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_24_24;

#line 992 "inst_util.m"
                  {
#line 992 "inst_util.m"
                    check_hlds__inst_util__V_24_24 = mercury__set__union_2_f_0((MR_Word) &check_hlds__inst_util_scalar_common_1[0], check_hlds__inst_util__InstVars0_19, check_hlds__inst_util__InstVarsA_11);
                  }
#line 992 "inst_util.m"
                  {
#line 992 "inst_util.m"
                    MR_Word base;
#line 992 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 992 "inst_util.m"
                    *check_hlds__inst_util__Inst_15 = base;
#line 992 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 992 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_24_24));
#line 992 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst0_20));
#line 992 "inst_util.m"
                  }
#line 992 "inst_util.m"
                }
#line 990 "inst_util.m"
              }
#line 990 "inst_util.m"
            else
#line 995 "inst_util.m"
              {
#line 995 "inst_util.m"
                MR_Word base;
#line 995 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 995 "inst_util.m"
                *check_hlds__inst_util__Inst_15 = base;
#line 995 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 995 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVarsA_11));
#line 995 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_18));
#line 995 "inst_util.m"
              }
#line 993 "inst_util.m"
          }
#line 990 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 983 "inst_util.m"
      }
#line 983 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 983 "inst_util.m"
  }
#line 978 "inst_util.m"
}

#line 962 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 962 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 962 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 962 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 962 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 962 "inst_util.m"
{
#line 967 "inst_util.m"
  {
#line 967 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 967 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 967 "inst_util.m"
      {
#line 967 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 967 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 967 "inst_util.m"
          {
#line 967 "inst_util.m"
            check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 967 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 967 "inst_util.m"
              {
#line 967 "inst_util.m"
                *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 967 "inst_util.m"
                *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 967 "inst_util.m"
                *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 967 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 967 "inst_util.m"
              }
#line 967 "inst_util.m"
          }
#line 967 "inst_util.m"
      }
#line 967 "inst_util.m"
    else
#line 969 "inst_util.m"
      {
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_15;
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_16;
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__Live_17;
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__Lives_18;
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 969 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 968 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 968 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 968 "inst_util.m"
          {
#line 968 "inst_util.m"
            check_hlds__inst_util__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 968 "inst_util.m"
            check_hlds__inst_util__InstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 969 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 969 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 969 "inst_util.m"
              {
#line 969 "inst_util.m"
                check_hlds__inst_util__Live_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 969 "inst_util.m"
                check_hlds__inst_util__Lives_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 970 "inst_util.m"
                {
#line 970 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_17, check_hlds__inst_util__InstA_13, check_hlds__inst_util__InstB_15, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
                }
#line 969 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 969 "inst_util.m"
                  {
#line 972 "inst_util.m"
                    {
#line 972 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__InstsA_14, check_hlds__inst_util__InstsB_16, check_hlds__inst_util__Lives_18, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 969 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 969 "inst_util.m"
                      {
#line 969 "inst_util.m"
                        {
#line 969 "inst_util.m"
                          MR_Word base;
#line 969 "inst_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = base;
#line 969 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 969 "inst_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 969 "inst_util.m"
                        }
#line 974 "inst_util.m"
                        {
#line 974 "inst_util.m"
                          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 974 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 969 "inst_util.m"
                      }
#line 969 "inst_util.m"
                  }
#line 969 "inst_util.m"
              }
#line 968 "inst_util.m"
          }
#line 969 "inst_util.m"
      }
#line 967 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 967 "inst_util.m"
  }
#line 962 "inst_util.m"
}

#line 943 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_2,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgsB_3,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__LivesB_4,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_5,
#line 943 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 943 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__7_7,
#line 943 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 943 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9)
#line 943 "inst_util.m"
{
#line 948 "inst_util.m"
  while (MR_TRUE)
#line 948 "inst_util.m"
    {
#line 948 "inst_util.m"
      /* tailcall optimized into a loop */
#line 948 "inst_util.m"
      {
#line 948 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;

#line 948 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "inst_util.m"
          {
#line 948 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 948 "inst_util.m"
            *check_hlds__inst_util__HeadVar__7_7 = (MR_Integer) 7;
#line 949 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8;
#line 948 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 948 "inst_util.m"
          }
#line 948 "inst_util.m"
        else
#line 951 "inst_util.m"
          {
#line 951 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 951 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsA_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 951 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 0)));
#line 951 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstA_17, (MR_Integer) 1)));

#line 953 "inst_util.m"
            {
#line 953 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_26, check_hlds__inst_util__ConsIdB_2);
            }
#line 957 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 955 "inst_util.m"
              {
#line 955 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_28;
#line 955 "inst_util.m"
                MR_Word check_hlds__inst_util__V_32_32;
#line 955 "inst_util.m"
                MR_Word check_hlds__inst_util__V_33_33;

#line 954 "inst_util.m"
                {
#line 954 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(check_hlds__inst_util__ArgsA_27, check_hlds__inst_util__ArgsB_3, check_hlds__inst_util__LivesB_4, check_hlds__inst_util__Real_5, &check_hlds__inst_util__Args_28, check_hlds__inst_util__HeadVar__7_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_9);
                }
#line 955 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 955 "inst_util.m"
                  {
#line 956 "inst_util.m"
                    check_hlds__inst_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "inst_util.m"
                    {
#line 956 "inst_util.m"
                      check_hlds__inst_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 956 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_26));
#line 956 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_32_32, 1) = ((MR_Box) (check_hlds__inst_util__Args_28));
#line 956 "inst_util.m"
                    }
#line 956 "inst_util.m"
                    {
#line 956 "inst_util.m"
                      MR_Word base;
#line 956 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__6_6 = base;
#line 956 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_32_32));
#line 956 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__V_33_33));
#line 956 "inst_util.m"
                    }
#line 956 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 955 "inst_util.m"
                  }
#line 955 "inst_util.m"
              }
#line 957 "inst_util.m"
            else
#line 958 "inst_util.m"
              {
#line 958 "inst_util.m"
                /* direct tailcall eliminated */
#line 958 "inst_util.m"
                {
#line 958 "inst_util.m"
                  MR_Word check_hlds__inst_util__HeadVar__1__tmp_copy_1 = check_hlds__inst_util__BoundInstsA_18;

#line 958 "inst_util.m"
                  check_hlds__inst_util__HeadVar__1_1 = check_hlds__inst_util__HeadVar__1__tmp_copy_1;
#line 958 "inst_util.m"
                }
#line 958 "inst_util.m"
                continue;
#line 958 "inst_util.m"
              }
#line 951 "inst_util.m"
          }
#line 948 "inst_util.m"
        return check_hlds__inst_util__succeeded;
#line 948 "inst_util.m"
      }
#line 948 "inst_util.m"
      break;
#line 948 "inst_util.m"
    }
#line 943 "inst_util.m"
}

#line 900 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_1,
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__3_3,
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 900 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 900 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 900 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 900 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 900 "inst_util.m"
{
#line 905 "inst_util.m"
  {
#line 905 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 905 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "inst_util.m"
      {
#line 905 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "inst_util.m"
          {
#line 905 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 905 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 6;
#line 906 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 905 "inst_util.m"
          }
#line 905 "inst_util.m"
        else
#line 907 "inst_util.m"
          {
#line 907 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 907 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 908 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 907 "inst_util.m"
          }
#line 905 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 905 "inst_util.m"
      }
#line 905 "inst_util.m"
    else
#line 905 "inst_util.m"
      {
#line 905 "inst_util.m"
        MR_Word check_hlds__inst_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 905 "inst_util.m"
        MR_Word check_hlds__inst_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));

#line 905 "inst_util.m"
        if ((check_hlds__inst_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "inst_util.m"
          {
#line 909 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 909 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 7;
#line 910 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 909 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 909 "inst_util.m"
          }
#line 905 "inst_util.m"
        else
#line 913 "inst_util.m"
          {
#line 913 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 0)));
#line 913 "inst_util.m"
            MR_Word check_hlds__inst_util__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__3_3, (MR_Integer) 1)));
#line 913 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdA_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 0)));
#line 913 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_63_63, (MR_Integer) 1)));
#line 913 "inst_util.m"
            MR_Word check_hlds__inst_util__ConsIdB_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 0)));
#line 913 "inst_util.m"
            MR_Word check_hlds__inst_util__ArgsB_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__BoundInstB_31, (MR_Integer) 1)));

#line 916 "inst_util.m"
            {
#line 916 "inst_util.m"
              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
            }
#line 930 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 918 "inst_util.m"
              {
#line 918 "inst_util.m"
                MR_Word check_hlds__inst_util__Args_41;
#line 918 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_42;
#line 918 "inst_util.m"
                MR_Word check_hlds__inst_util__BoundInstsTail_43;
#line 918 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism2_44;
#line 918 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 924 "inst_util.m"
                MR_Word check_hlds__inst_util__V_50_50;
#line 924 "inst_util.m"
                MR_Word check_hlds__inst_util__V_60_60;
#line 924 "inst_util.m"
                MR_Word check_hlds__inst_util__V_45_45;

#line 917 "inst_util.m"
                {
#line 917 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__ArgsA_38, check_hlds__inst_util__ArgsB_40, check_hlds__inst_util__Live_1, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Args_41, &check_hlds__inst_util__Detism1_42, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48);
                }
#line 918 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 918 "inst_util.m"
                  {
#line 919 "inst_util.m"
                    {
#line 919 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, &check_hlds__inst_util__BoundInstsTail_43, &check_hlds__inst_util__Detism2_44, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_48_48, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                    }
#line 918 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 918 "inst_util.m"
                      {
#line 924 "inst_util.m"
                        check_hlds__inst_util__V_50_50 = (MR_Integer) 0;
#line 924 "inst_util.m"
                        {
#line 924 "inst_util.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism1_42, &check_hlds__inst_util__V_45_45, &check_hlds__inst_util__V_60_60);
                        }
#line 924 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_50_50 == check_hlds__inst_util__V_60_60);
#line 926 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 925 "inst_util.m"
                          *check_hlds__inst_util__HeadVar__5_5 = check_hlds__inst_util__BoundInstsTail_43;
#line 926 "inst_util.m"
                        else
#line 927 "inst_util.m"
                          {
#line 927 "inst_util.m"
                            MR_Word check_hlds__inst_util__V_51_51;

#line 927 "inst_util.m"
                            {
#line 927 "inst_util.m"
                              check_hlds__inst_util__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 927 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdA_37));
#line 927 "inst_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_51_51, 1) = ((MR_Box) (check_hlds__inst_util__Args_41));
#line 927 "inst_util.m"
                            }
#line 927 "inst_util.m"
                            {
#line 927 "inst_util.m"
                              MR_Word base;
#line 927 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "inst_util.m"
                              *check_hlds__inst_util__HeadVar__5_5 = base;
#line 927 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__V_51_51));
#line 927 "inst_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__BoundInstsTail_43));
#line 927 "inst_util.m"
                            }
#line 927 "inst_util.m"
                          }
#line 929 "inst_util.m"
                        {
#line 929 "inst_util.m"
                          parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_42, check_hlds__inst_util__Detism2_44, check_hlds__inst_util__HeadVar__6_6);
                        }
#line 929 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 918 "inst_util.m"
                      }
#line 918 "inst_util.m"
                  }
#line 918 "inst_util.m"
              }
#line 930 "inst_util.m"
            else
#line 939 "inst_util.m"
              {
#line 939 "inst_util.m"
                MR_Word check_hlds__inst_util__V_57_57;
#line 939 "inst_util.m"
                MR_Word check_hlds__inst_util__Detism1_58;
#line 931 "inst_util.m"
                MR_Word check_hlds__inst_util__V_61_61;

#line 931 "inst_util.m"
                {
#line 931 "inst_util.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_util__V_61_61, check_hlds__inst_util__ConsIdA_37, check_hlds__inst_util__ConsIdB_39);
                }
#line 931 "inst_util.m"
                check_hlds__inst_util__succeeded = ((MR_Integer) 1 == check_hlds__inst_util__V_61_61);
#line 935 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 932 "inst_util.m"
                  {
#line 932 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__V_62_62, check_hlds__inst_util__HeadVar__3_3, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 935 "inst_util.m"
                else
#line 936 "inst_util.m"
                  {
#line 936 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_1, check_hlds__inst_util__HeadVar__2_2, check_hlds__inst_util__BoundInstsB_32, check_hlds__inst_util__Real_4, check_hlds__inst_util__HeadVar__5_5, &check_hlds__inst_util__Detism1_58, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                  }
#line 939 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 939 "inst_util.m"
                  {
#line 940 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Integer) 7;
#line 940 "inst_util.m"
                    {
#line 940 "inst_util.m"
                      parse_tree__prog_detism__det_switch_detism_3_p_0(check_hlds__inst_util__Detism1_58, check_hlds__inst_util__V_57_57, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 940 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 939 "inst_util.m"
                  }
#line 939 "inst_util.m"
              }
#line 913 "inst_util.m"
          }
#line 905 "inst_util.m"
      }
#line 905 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 905 "inst_util.m"
  }
#line 900 "inst_util.m"
}

#line 865 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsA_10,
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__BoundInstsB_11,
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 865 "inst_util.m"
  MR_Word * check_hlds__inst_util__BoundInsts_13,
#line 865 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 865 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23,
#line 865 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24)
#line 865 "inst_util.m"
{
#line 880 "inst_util.m"
  {
#line 880 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 872 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 872 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 880 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 878 "inst_util.m"
      {
#line 878 "inst_util.m"
        *check_hlds__inst_util__BoundInsts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "inst_util.m"
        *check_hlds__inst_util__Detism_14 = (MR_Integer) 6;
#line 878 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23;
#line 878 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 878 "inst_util.m"
      }
#line 880 "inst_util.m"
    else
#line 882 "inst_util.m"
      {
#line 882 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism0_16;
#line 889 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdA_17;
#line 889 "inst_util.m"
        MR_Word check_hlds__inst_util__ConsIdB_19;
#line 889 "inst_util.m"
        MR_Word check_hlds__inst_util__V_26_26;
#line 889 "inst_util.m"
        MR_Word check_hlds__inst_util__V_27_27;
#line 889 "inst_util.m"
        MR_Word check_hlds__inst_util__V_28_28;
#line 889 "inst_util.m"
        MR_Word check_hlds__inst_util__V_29_29;
#line 889 "inst_util.m"
        MR_Word check_hlds__inst_util__V_18_18;
#line 890 "inst_util.m"
        MR_Word check_hlds__inst_util__V_20_20;

#line 881 "inst_util.m"
        {
#line 881 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_10, check_hlds__inst_util__BoundInstsB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__BoundInsts_13, &check_hlds__inst_util__Detism0_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
        }
#line 882 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 882 "inst_util.m"
          {
#line 889 "inst_util.m"
            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_10)) == (MR_mktag((MR_Integer) 1)));
#line 889 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 889 "inst_util.m"
              {
#line 889 "inst_util.m"
                check_hlds__inst_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 0)));
#line 889 "inst_util.m"
                check_hlds__inst_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_10, (MR_Integer) 1)));
#line 889 "inst_util.m"
                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 889 "inst_util.m"
                  {
#line 889 "inst_util.m"
                    check_hlds__inst_util__ConsIdA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 0)));
#line 889 "inst_util.m"
                    check_hlds__inst_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_26_26, (MR_Integer) 1)));
#line 890 "inst_util.m"
                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_11)) == (MR_mktag((MR_Integer) 1)));
#line 890 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 890 "inst_util.m"
                      {
#line 890 "inst_util.m"
                        check_hlds__inst_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 0)));
#line 890 "inst_util.m"
                        check_hlds__inst_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_11, (MR_Integer) 1)));
#line 890 "inst_util.m"
                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 889 "inst_util.m"
                          {
#line 890 "inst_util.m"
                            check_hlds__inst_util__ConsIdB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 0)));
#line 890 "inst_util.m"
                            check_hlds__inst_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_28_28, (MR_Integer) 1)));
#line 891 "inst_util.m"
                            {
#line 891 "inst_util.m"
                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_17, check_hlds__inst_util__ConsIdB_19);
                            }
#line 889 "inst_util.m"
                          }
#line 890 "inst_util.m"
                      }
#line 889 "inst_util.m"
                  }
#line 889 "inst_util.m"
              }
#line 894 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 893 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = check_hlds__inst_util__Detism0_16;
#line 894 "inst_util.m"
            else
#line 895 "inst_util.m"
              {
#line 895 "inst_util.m"
                MR_Word check_hlds__inst_util__MaxSoln_22;
#line 895 "inst_util.m"
                MR_Word check_hlds__inst_util__V_21_21;

#line 895 "inst_util.m"
                {
#line 895 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_16, &check_hlds__inst_util__V_21_21, &check_hlds__inst_util__MaxSoln_22);
                }
#line 896 "inst_util.m"
                {
#line 896 "inst_util.m"
                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_14, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_22);
                }
#line 895 "inst_util.m"
              }
#line 894 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 882 "inst_util.m"
          }
#line 882 "inst_util.m"
      }
#line 880 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 880 "inst_util.m"
  }
#line 865 "inst_util.m"
}

#line 740 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_12,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_13,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__ConsIdB_14,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgInstsB_15,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__ArgLives_16,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_17,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__Type_18,
#line 740 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_19,
#line 740 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_20,
#line 740 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39,
#line 740 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40)
#line 740 "inst_util.m"
{
#line 752 "inst_util.m"
  {
#line 752 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 752 "inst_util.m"
#line 752 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_13)) {
#line 752 "inst_util.m"
      default:
#line 752 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 752 "inst_util.m"
        break;
#line 752 "inst_util.m"
      case (MR_Integer) 0:
#line 752 "inst_util.m"
#line 752 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_13)) {
#line 752 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 752 "inst_util.m"
          case (MR_Integer) 0:
#line 753 "inst_util.m"
            {
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__ArgInsts_22;
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__V_61_61;
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__V_62_62;
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__V_63_63;
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__V_64_64;
#line 753 "inst_util.m"
              MR_Word check_hlds__inst_util__V_65_65;

#line 760 "inst_util.m"
#line 760 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 760 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 760 "inst_util.m"
                case (MR_Integer) 1:
#line 761 "inst_util.m"
                  {
#line 762 "inst_util.m"
                    check_hlds__inst_util__ArgInsts_22 = check_hlds__inst_util__ArgInstsB_15;
#line 761 "inst_util.m"
                    *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 761 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 761 "inst_util.m"
                  }
#line 760 "inst_util.m"
                  break;
#line 760 "inst_util.m"
                case (MR_Integer) 0:
#line 755 "inst_util.m"
                  {
#line 756 "inst_util.m"
                    {
#line 756 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39);
                    }
#line 755 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 755 "inst_util.m"
                      {
#line 758 "inst_util.m"
                        {
#line 758 "inst_util.m"
                          check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, &check_hlds__inst_util__ArgInsts_22, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                        }
#line 758 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 755 "inst_util.m"
                      }
#line 755 "inst_util.m"
                  }
#line 760 "inst_util.m"
                  break;
#line 760 "inst_util.m"
              }
#line 753 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 753 "inst_util.m"
                {
#line 765 "inst_util.m"
                  check_hlds__inst_util__V_61_61 = (MR_Integer) 1;
#line 765 "inst_util.m"
                  check_hlds__inst_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 766 "inst_util.m"
                  check_hlds__inst_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 767 "inst_util.m"
                  *check_hlds__inst_util__Detism_20 = (MR_Integer) 0;
#line 766 "inst_util.m"
                  {
#line 766 "inst_util.m"
                    check_hlds__inst_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 766 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_64_64, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_22));
#line 766 "inst_util.m"
                  }
#line 766 "inst_util.m"
                  {
#line 766 "inst_util.m"
                    check_hlds__inst_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 0) = ((MR_Box) (check_hlds__inst_util__V_64_64));
#line 766 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_63_63, 1) = ((MR_Box) (check_hlds__inst_util__V_65_65));
#line 766 "inst_util.m"
                  }
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
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__V_61_61));
#line 765 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_62_62));
#line 765 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_63_63));
#line 765 "inst_util.m"
                  }
#line 765 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 753 "inst_util.m"
                }
#line 753 "inst_util.m"
            }
#line 752 "inst_util.m"
            break;
#line 752 "inst_util.m"
          case (MR_Integer) 1:
#line 749 "inst_util.m"
            {
#line 750 "inst_util.m"
              *check_hlds__inst_util__Inst_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 751 "inst_util.m"
              *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 749 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 749 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 749 "inst_util.m"
            }
#line 752 "inst_util.m"
            break;
#line 752 "inst_util.m"
        }
#line 752 "inst_util.m"
        break;
#line 752 "inst_util.m"
      case (MR_Integer) 2:
#line 769 "inst_util.m"
        {
#line 769 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 0)));
#line 769 "inst_util.m"
          MR_Word check_hlds__inst_util__V_56_56;
#line 769 "inst_util.m"
          MR_Word check_hlds__inst_util__V_57_57;
#line 769 "inst_util.m"
          MR_Word check_hlds__inst_util__V_58_58;
#line 769 "inst_util.m"
          MR_Word check_hlds__inst_util__V_59_59;
#line 769 "inst_util.m"
          MR_Word check_hlds__inst_util__ArgInsts_66;
#line 769 "inst_util.m"
          MR_Word check_hlds__inst_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));

#line 772 "inst_util.m"
          {
#line 772 "inst_util.m"
            check_hlds__inst_util__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__Type_18);
          }
#line 772 "inst_util.m"
          check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 769 "inst_util.m"
          if (check_hlds__inst_util__succeeded)
#line 769 "inst_util.m"
            {
#line 777 "inst_util.m"
#line 777 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 777 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 777 "inst_util.m"
                case (MR_Integer) 1:
#line 779 "inst_util.m"
                  {
#line 779 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 777 "inst_util.m"
                  break;
#line 777 "inst_util.m"
                case (MR_Integer) 0:
#line 775 "inst_util.m"
                  {
#line 775 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Uniq_23, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_66, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 777 "inst_util.m"
                  break;
#line 777 "inst_util.m"
              }
#line 769 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 769 "inst_util.m"
                {
#line 783 "inst_util.m"
                  check_hlds__inst_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "inst_util.m"
                  check_hlds__inst_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "inst_util.m"
                  {
#line 784 "inst_util.m"
                    check_hlds__inst_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 784 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_58_58, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_66));
#line 784 "inst_util.m"
                  }
#line 784 "inst_util.m"
                  {
#line 784 "inst_util.m"
                    check_hlds__inst_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 0) = ((MR_Box) (check_hlds__inst_util__V_58_58));
#line 784 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_57_57, 1) = ((MR_Box) (check_hlds__inst_util__V_59_59));
#line 784 "inst_util.m"
                  }
#line 783 "inst_util.m"
                  {
#line 783 "inst_util.m"
                    MR_Word base;
#line 783 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 783 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 783 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 783 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_23));
#line 783 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_56_56));
#line 783 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_57_57));
#line 783 "inst_util.m"
                  }
#line 783 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 769 "inst_util.m"
                }
#line 769 "inst_util.m"
            }
#line 769 "inst_util.m"
        }
#line 752 "inst_util.m"
        break;
#line 752 "inst_util.m"
      case (MR_Integer) 3:
#line 752 "inst_util.m"
#line 752 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 0)))) {
#line 752 "inst_util.m"
          default:
#line 752 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 752 "inst_util.m"
            break;
#line 752 "inst_util.m"
          case (MR_Integer) 0:
#line 786 "inst_util.m"
            {
#line 786 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 786 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 3)));
#line 786 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_28;
#line 786 "inst_util.m"
              MR_Word check_hlds__inst_util__V_53_53;
#line 786 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResultsA_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 791 "inst_util.m"
#line 791 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 791 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 791 "inst_util.m"
                case (MR_Integer) 1:
#line 792 "inst_util.m"
                  {
#line 792 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInstsB_29;
#line 792 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_48_48;

#line 793 "inst_util.m"
                    {
#line 793 "inst_util.m"
                      check_hlds__inst_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 793 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 793 "inst_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_48_48, 1) = ((MR_Box) (check_hlds__inst_util__ArgInstsB_15));
#line 793 "inst_util.m"
                    }
#line 793 "inst_util.m"
                    {
#line 793 "inst_util.m"
                      check_hlds__inst_util__BoundInstsB_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 0) = ((MR_Box) (check_hlds__inst_util__V_48_48));
#line 793 "inst_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 793 "inst_util.m"
                    }
#line 872 "inst_util.m"
                    check_hlds__inst_util__succeeded = (check_hlds__inst_util__BoundInstsA_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 880 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 878 "inst_util.m"
                      {
#line 878 "inst_util.m"
                        check_hlds__inst_util__BoundInsts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "inst_util.m"
                        *check_hlds__inst_util__Detism_20 = (MR_Integer) 6;
#line 878 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39;
#line 878 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 878 "inst_util.m"
                      }
#line 880 "inst_util.m"
                    else
#line 882 "inst_util.m"
                      {
#line 882 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism0_78;
#line 889 "inst_util.m"
                        MR_Word check_hlds__inst_util__ConsIdA_79;
#line 889 "inst_util.m"
                        MR_Word check_hlds__inst_util__ConsIdB_81;
#line 889 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_86_86;
#line 889 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_87_87;
#line 889 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_88_88;
#line 889 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_89_89;
#line 889 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_80_80;
#line 890 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_82_82;

#line 881 "inst_util.m"
                        {
#line 881 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0((MR_Integer) 1, check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__BoundInstsB_29, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, &check_hlds__inst_util__Detism0_78, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                        }
#line 882 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 882 "inst_util.m"
                          {
#line 889 "inst_util.m"
                            check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsA_27)) == (MR_mktag((MR_Integer) 1)));
#line 889 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 889 "inst_util.m"
                              {
#line 889 "inst_util.m"
                                check_hlds__inst_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 0)));
#line 889 "inst_util.m"
                                check_hlds__inst_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsA_27, (MR_Integer) 1)));
#line 889 "inst_util.m"
                                check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "inst_util.m"
                                if (check_hlds__inst_util__succeeded)
#line 889 "inst_util.m"
                                  {
#line 889 "inst_util.m"
                                    check_hlds__inst_util__ConsIdA_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 0)));
#line 889 "inst_util.m"
                                    check_hlds__inst_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_86_86, (MR_Integer) 1)));
#line 890 "inst_util.m"
                                    check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__BoundInstsB_29)) == (MR_mktag((MR_Integer) 1)));
#line 890 "inst_util.m"
                                    if (check_hlds__inst_util__succeeded)
#line 890 "inst_util.m"
                                      {
#line 890 "inst_util.m"
                                        check_hlds__inst_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 0)));
#line 890 "inst_util.m"
                                        check_hlds__inst_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__BoundInstsB_29, (MR_Integer) 1)));
#line 890 "inst_util.m"
                                        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "inst_util.m"
                                        if (check_hlds__inst_util__succeeded)
#line 889 "inst_util.m"
                                          {
#line 890 "inst_util.m"
                                            check_hlds__inst_util__ConsIdB_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 0)));
#line 890 "inst_util.m"
                                            check_hlds__inst_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_88_88, (MR_Integer) 1)));
#line 891 "inst_util.m"
                                            {
#line 891 "inst_util.m"
                                              check_hlds__inst_util__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_util__ConsIdA_79, check_hlds__inst_util__ConsIdB_81);
                                            }
#line 889 "inst_util.m"
                                          }
#line 890 "inst_util.m"
                                      }
#line 889 "inst_util.m"
                                  }
#line 889 "inst_util.m"
                              }
#line 894 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 893 "inst_util.m"
                              *check_hlds__inst_util__Detism_20 = check_hlds__inst_util__Detism0_78;
#line 894 "inst_util.m"
                            else
#line 895 "inst_util.m"
                              {
#line 895 "inst_util.m"
                                MR_Word check_hlds__inst_util__MaxSoln_84;
#line 895 "inst_util.m"
                                MR_Word check_hlds__inst_util__V_83_83;

#line 895 "inst_util.m"
                                {
#line 895 "inst_util.m"
                                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__inst_util__Detism0_78, &check_hlds__inst_util__V_83_83, &check_hlds__inst_util__MaxSoln_84);
                                }
#line 896 "inst_util.m"
                                {
#line 896 "inst_util.m"
                                  parse_tree__prog_data__determinism_components_3_p_1(check_hlds__inst_util__Detism_20, (MR_Integer) 0, check_hlds__inst_util__MaxSoln_84);
                                }
#line 895 "inst_util.m"
                              }
#line 894 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 882 "inst_util.m"
                          }
#line 882 "inst_util.m"
                      }
#line 792 "inst_util.m"
                  }
#line 791 "inst_util.m"
                  break;
#line 791 "inst_util.m"
                case (MR_Integer) 0:
#line 789 "inst_util.m"
                  {
#line 789 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(check_hlds__inst_util__BoundInstsA_27, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, &check_hlds__inst_util__BoundInsts_28, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 791 "inst_util.m"
                  break;
#line 791 "inst_util.m"
              }
#line 786 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 786 "inst_util.m"
                {
#line 798 "inst_util.m"
                  check_hlds__inst_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "inst_util.m"
                  {
#line 798 "inst_util.m"
                    MR_Word base;
#line 798 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 798 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 798 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 798 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_25));
#line 798 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_53_53));
#line 798 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_28));
#line 798 "inst_util.m"
                  }
#line 798 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 786 "inst_util.m"
                }
#line 786 "inst_util.m"
            }
#line 752 "inst_util.m"
            break;
#line 752 "inst_util.m"
          case (MR_Integer) 1:
#line 800 "inst_util.m"
            {
#line 800 "inst_util.m"
              MR_Word check_hlds__inst_util__V_44_44;
#line 800 "inst_util.m"
              MR_Word check_hlds__inst_util__V_45_45;
#line 800 "inst_util.m"
              MR_Word check_hlds__inst_util__V_46_46;
#line 800 "inst_util.m"
              MR_Word check_hlds__inst_util__V_47_47;
#line 800 "inst_util.m"
              MR_Word check_hlds__inst_util__ArgInsts_67;
#line 800 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 800 "inst_util.m"
              MR_Word check_hlds__inst_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));

#line 805 "inst_util.m"
#line 805 "inst_util.m"
              switch (check_hlds__inst_util__Live_12) {
#line 805 "inst_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 805 "inst_util.m"
                case (MR_Integer) 1:
#line 807 "inst_util.m"
                  {
#line 807 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 805 "inst_util.m"
                  break;
#line 805 "inst_util.m"
                case (MR_Integer) 0:
#line 803 "inst_util.m"
                  {
#line 803 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__Live_12, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__UniqA_68, check_hlds__inst_util__Real_17, &check_hlds__inst_util__ArgInsts_67, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 805 "inst_util.m"
                  break;
#line 805 "inst_util.m"
              }
#line 800 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 800 "inst_util.m"
                {
#line 811 "inst_util.m"
                  check_hlds__inst_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "inst_util.m"
                  check_hlds__inst_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "inst_util.m"
                  {
#line 812 "inst_util.m"
                    check_hlds__inst_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 812 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 0) = ((MR_Box) (check_hlds__inst_util__ConsIdB_14));
#line 812 "inst_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_util__V_46_46, 1) = ((MR_Box) (check_hlds__inst_util__ArgInsts_67));
#line 812 "inst_util.m"
                  }
#line 812 "inst_util.m"
                  {
#line 812 "inst_util.m"
                    check_hlds__inst_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 0) = ((MR_Box) (check_hlds__inst_util__V_46_46));
#line 812 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_45_45, 1) = ((MR_Box) (check_hlds__inst_util__V_47_47));
#line 812 "inst_util.m"
                  }
#line 811 "inst_util.m"
                  {
#line 811 "inst_util.m"
                    MR_Word base;
#line 811 "inst_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 811 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = base;
#line 811 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 811 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UniqA_68));
#line 811 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_44_44));
#line 811 "inst_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__V_45_45));
#line 811 "inst_util.m"
                  }
#line 811 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 800 "inst_util.m"
                }
#line 800 "inst_util.m"
            }
#line 752 "inst_util.m"
            break;
#line 752 "inst_util.m"
          case (MR_Integer) 3:
#line 814 "inst_util.m"
            {
#line 814 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 1)));
#line 814 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInstA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_13, (MR_Integer) 2)));
#line 814 "inst_util.m"
              MR_Word check_hlds__inst_util__Inst0_33;

#line 815 "inst_util.m"
              {
#line 815 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__SubInstA_32, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, &check_hlds__inst_util__Inst0_33, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_39, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
              }
#line 814 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 814 "inst_util.m"
                {
#line 817 "inst_util.m"
                  {
#line 817 "inst_util.m"
                    check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__Inst0_33, check_hlds__inst_util__SubInstA_32, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_40);
                  }
#line 820 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 819 "inst_util.m"
                    {
#line 819 "inst_util.m"
                      MR_Word base;
#line 819 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 819 "inst_util.m"
                      *check_hlds__inst_util__Inst_19 = base;
#line 819 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 819 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_31));
#line 819 "inst_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__Inst0_33));
#line 819 "inst_util.m"
                    }
#line 820 "inst_util.m"
                  else
#line 833 "inst_util.m"
                    *check_hlds__inst_util__Inst_19 = check_hlds__inst_util__Inst0_33;
#line 820 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 814 "inst_util.m"
                }
#line 814 "inst_util.m"
            }
#line 752 "inst_util.m"
            break;
#line 752 "inst_util.m"
        }
#line 752 "inst_util.m"
        break;
#line 752 "inst_util.m"
    }
#line 752 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 752 "inst_util.m"
  }
#line 740 "inst_util.m"
}

#line 719 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__1_1,
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__HeadVar__2_2,
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_3,
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_4,
#line 719 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__5_5,
#line 719 "inst_util.m"
  MR_Word * check_hlds__inst_util__HeadVar__6_6,
#line 719 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7,
#line 719 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8)
#line 719 "inst_util.m"
{
#line 723 "inst_util.m"
  {
#line 723 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 723 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "inst_util.m"
      {
#line 723 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 723 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 723 "inst_util.m"
          {
#line 723 "inst_util.m"
            *check_hlds__inst_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 723 "inst_util.m"
            *check_hlds__inst_util__HeadVar__6_6 = (MR_Integer) 0;
#line 723 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7;
#line 723 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 723 "inst_util.m"
          }
#line 723 "inst_util.m"
      }
#line 723 "inst_util.m"
    else
#line 725 "inst_util.m"
      {
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__InstB_16;
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__InstsB_17;
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_20;
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_21;
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism1_24;
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__Detism2_25;
#line 725 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 724 "inst_util.m"
        check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 724 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 724 "inst_util.m"
          {
#line 724 "inst_util.m"
            check_hlds__inst_util__InstB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 0)));
#line 724 "inst_util.m"
            check_hlds__inst_util__InstsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__2_2, (MR_Integer) 1)));
#line 726 "inst_util.m"
            {
#line 726 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_util__Live_3, check_hlds__inst_util__InstA_14, check_hlds__inst_util__InstB_16, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Inst_20, &check_hlds__inst_util__Detism1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_7, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
#line 725 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 725 "inst_util.m"
              {
#line 728 "inst_util.m"
                {
#line 728 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(check_hlds__inst_util__InstsA_15, check_hlds__inst_util__InstsB_17, check_hlds__inst_util__Live_3, check_hlds__inst_util__Real_4, &check_hlds__inst_util__Insts_21, &check_hlds__inst_util__Detism2_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_8);
                }
#line 725 "inst_util.m"
                if (check_hlds__inst_util__succeeded)
#line 725 "inst_util.m"
                  {
#line 725 "inst_util.m"
                    {
#line 725 "inst_util.m"
                      MR_Word base;
#line 725 "inst_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "inst_util.m"
                      *check_hlds__inst_util__HeadVar__5_5 = base;
#line 725 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_20));
#line 725 "inst_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_21));
#line 725 "inst_util.m"
                    }
#line 730 "inst_util.m"
                    {
#line 730 "inst_util.m"
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_24, check_hlds__inst_util__Detism2_25, check_hlds__inst_util__HeadVar__6_6);
                    }
#line 730 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_TRUE;
#line 725 "inst_util.m"
                  }
#line 725 "inst_util.m"
              }
#line 724 "inst_util.m"
          }
#line 725 "inst_util.m"
      }
#line 723 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 723 "inst_util.m"
  }
#line 719 "inst_util.m"
}

#line 302 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 302 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 302 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 302 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63,
#line 302 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64)
#line 302 "inst_util.m"
{
#line 312 "inst_util.m"
  {
#line 312 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 312 "inst_util.m"
#line 312 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__InstA_10)) {
#line 312 "inst_util.m"
      default:
#line 312 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_FALSE;
#line 312 "inst_util.m"
        break;
#line 312 "inst_util.m"
      case (MR_Integer) 0:
#line 312 "inst_util.m"
#line 312 "inst_util.m"
        switch (MR_unmkbody(check_hlds__inst_util__InstA_10)) {
#line 312 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 312 "inst_util.m"
          case (MR_Integer) 0:
#line 370 "inst_util.m"
#line 370 "inst_util.m"
            switch (check_hlds__inst_util__Live_9) {
#line 370 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 370 "inst_util.m"
              case (MR_Integer) 1:
#line 371 "inst_util.m"
                {
#line 372 "inst_util.m"
                  *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstB_11;
#line 373 "inst_util.m"
                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 371 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 371 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 371 "inst_util.m"
                }
#line 370 "inst_util.m"
                break;
#line 370 "inst_util.m"
              case (MR_Integer) 0:
#line 321 "inst_util.m"
#line 321 "inst_util.m"
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 321 "inst_util.m"
                  default:
#line 321 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 321 "inst_util.m"
                    break;
#line 321 "inst_util.m"
                  case (MR_Integer) 0:
#line 321 "inst_util.m"
#line 321 "inst_util.m"
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 321 "inst_util.m"
                      default:
#line 321 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 321 "inst_util.m"
                        break;
#line 321 "inst_util.m"
                      case (MR_Integer) 1:
#line 318 "inst_util.m"
                        {
#line 319 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 320 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 318 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 318 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 318 "inst_util.m"
                        }
#line 321 "inst_util.m"
                        break;
#line 321 "inst_util.m"
                    }
#line 321 "inst_util.m"
                    break;
#line 321 "inst_util.m"
                  case (MR_Integer) 2:
#line 346 "inst_util.m"
                    {
#line 346 "inst_util.m"
                      MR_Word check_hlds__inst_util__HOInstInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 346 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 346 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_116;

#line 347 "inst_util.m"
                      {
#line 347 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_115, &check_hlds__inst_util__Uniq_116);
                      }
#line 346 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 346 "inst_util.m"
                        {
#line 349 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 346 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 348 "inst_util.m"
                          {
#line 348 "inst_util.m"
                            MR_Word base;
#line 348 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 348 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_116));
#line 348 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_22));
#line 348 "inst_util.m"
                          }
#line 348 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 346 "inst_util.m"
                        }
#line 346 "inst_util.m"
                    }
#line 321 "inst_util.m"
                    break;
#line 321 "inst_util.m"
                  case (MR_Integer) 3:
#line 321 "inst_util.m"
#line 321 "inst_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 321 "inst_util.m"
                      default:
#line 321 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 321 "inst_util.m"
                        break;
#line 321 "inst_util.m"
                      case (MR_Integer) 0:
#line 325 "inst_util.m"
                        {
#line 325 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 325 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstResultsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 325 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInstsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 325 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_19;
#line 325 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInsts_20;

#line 326 "inst_util.m"
                          {
#line 326 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_16, &check_hlds__inst_util__Uniq_19);
                          }
#line 325 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 325 "inst_util.m"
                            {
#line 328 "inst_util.m"
                              {
#line 328 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsB_17, check_hlds__inst_util__BoundInstsB_18, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                              }
#line 325 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 325 "inst_util.m"
                                {
#line 332 "inst_util.m"
#line 332 "inst_util.m"
                                  switch (check_hlds__inst_util__UniqB_16) {
#line 332 "inst_util.m"
                                    default:
#line 332 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 332 "inst_util.m"
                                      break;
#line 332 "inst_util.m"
                                    case (MR_Integer) 2:
#line 332 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 332 "inst_util.m"
                                      break;
#line 332 "inst_util.m"
                                    case (MR_Integer) 1:
#line 332 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 332 "inst_util.m"
                                      break;
#line 332 "inst_util.m"
                                  }
#line 335 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 333 "inst_util.m"
                                    {
#line 333 "inst_util.m"
                                      check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsB_18, &check_hlds__inst_util__BoundInsts_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                    }
#line 335 "inst_util.m"
                                  else
#line 336 "inst_util.m"
                                    {
#line 336 "inst_util.m"
                                      check_hlds__inst_util__BoundInsts_20 = check_hlds__inst_util__BoundInstsB_18;
#line 336 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 336 "inst_util.m"
                                    }
#line 339 "inst_util.m"
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 338 "inst_util.m"
                                  {
#line 338 "inst_util.m"
                                    MR_Word base;
#line 338 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 338 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 338 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 338 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_19));
#line 338 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_17));
#line 338 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_20));
#line 338 "inst_util.m"
                                  }
#line 338 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 325 "inst_util.m"
                                }
#line 325 "inst_util.m"
                            }
#line 325 "inst_util.m"
                        }
#line 321 "inst_util.m"
                        break;
#line 321 "inst_util.m"
                      case (MR_Integer) 1:
#line 341 "inst_util.m"
                        {
#line 341 "inst_util.m"
                          MR_Word check_hlds__inst_util__HOInstInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 341 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 341 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_114;

#line 342 "inst_util.m"
                          {
#line 342 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqB_113, &check_hlds__inst_util__Uniq_114);
                          }
#line 341 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 341 "inst_util.m"
                            {
#line 344 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 341 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 343 "inst_util.m"
                              {
#line 343 "inst_util.m"
                                MR_Word base;
#line 343 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 343 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 343 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_114));
#line 343 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoB_21));
#line 343 "inst_util.m"
                              }
#line 343 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 341 "inst_util.m"
                            }
#line 341 "inst_util.m"
                        }
#line 321 "inst_util.m"
                        break;
#line 321 "inst_util.m"
                      case (MR_Integer) 3:
#line 351 "inst_util.m"
                        {
#line 351 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 351 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 352 "inst_util.m"
                          {
#line 352 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_23, check_hlds__inst_util__SubInstB_24, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 351 "inst_util.m"
                        }
#line 321 "inst_util.m"
                        break;
#line 321 "inst_util.m"
                    }
#line 321 "inst_util.m"
                    break;
#line 321 "inst_util.m"
                }
#line 370 "inst_util.m"
                break;
#line 370 "inst_util.m"
            }
#line 312 "inst_util.m"
            break;
#line 312 "inst_util.m"
          case (MR_Integer) 1:
#line 309 "inst_util.m"
            {
#line 310 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 311 "inst_util.m"
              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 309 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 309 "inst_util.m"
              check_hlds__inst_util__succeeded = MR_TRUE;
#line 309 "inst_util.m"
            }
#line 312 "inst_util.m"
            break;
#line 312 "inst_util.m"
        }
#line 312 "inst_util.m"
        break;
#line 312 "inst_util.m"
      case (MR_Integer) 2:
#line 567 "inst_util.m"
        {
#line 567 "inst_util.m"
          MR_Word check_hlds__inst_util__UniqA_298 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 0)));
#line 567 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfoA_303 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 572 "inst_util.m"
          if ((check_hlds__inst_util__HOInstInfoA_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "inst_util.m"
            {
#line 570 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
            }
#line 572 "inst_util.m"
          else
#line 579 "inst_util.m"
#line 579 "inst_util.m"
            switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 579 "inst_util.m"
              default:
#line 579 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_FALSE;
#line 579 "inst_util.m"
                break;
#line 579 "inst_util.m"
              case (MR_Integer) 0:
#line 579 "inst_util.m"
#line 579 "inst_util.m"
                switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 579 "inst_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 579 "inst_util.m"
                  case (MR_Integer) 0:
#line 580 "inst_util.m"
                    {
#line 580 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_224;

#line 584 "inst_util.m"
#line 584 "inst_util.m"
                      switch (check_hlds__inst_util__Live_9) {
#line 584 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 584 "inst_util.m"
                        case (MR_Integer) 1:
#line 586 "inst_util.m"
                          {
#line 586 "inst_util.m"
                            check_hlds__inst_util__Uniq_224 = check_hlds__inst_util__UniqA_298;
#line 586 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 586 "inst_util.m"
                          }
#line 584 "inst_util.m"
                          break;
#line 584 "inst_util.m"
                        case (MR_Integer) 0:
#line 582 "inst_util.m"
                          {
#line 583 "inst_util.m"
                            {
#line 583 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, &check_hlds__inst_util__Uniq_224);
                            }
#line 582 "inst_util.m"
                          }
#line 584 "inst_util.m"
                          break;
#line 584 "inst_util.m"
                      }
#line 580 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 580 "inst_util.m"
                        {
#line 589 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 580 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 588 "inst_util.m"
                          {
#line 588 "inst_util.m"
                            MR_Word base;
#line 588 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 588 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_224));
#line 588 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 588 "inst_util.m"
                          }
#line 588 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 580 "inst_util.m"
                        }
#line 580 "inst_util.m"
                    }
#line 579 "inst_util.m"
                    break;
#line 579 "inst_util.m"
                  case (MR_Integer) 1:
#line 576 "inst_util.m"
                    {
#line 577 "inst_util.m"
                      *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 578 "inst_util.m"
                      *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 576 "inst_util.m"
                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 576 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 576 "inst_util.m"
                    }
#line 579 "inst_util.m"
                    break;
#line 579 "inst_util.m"
                }
#line 579 "inst_util.m"
                break;
#line 579 "inst_util.m"
              case (MR_Integer) 2:
#line 609 "inst_util.m"
                {
#line 609 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_67_67;
#line 609 "inst_util.m"
                  MR_Word check_hlds__inst_util__UniqB_237;
#line 609 "inst_util.m"
                  MR_Word check_hlds__inst_util__Uniq_238;
#line 609 "inst_util.m"
                  MR_Word check_hlds__inst_util___HOInstInfoB_236;

#line 615 "inst_util.m"
#line 615 "inst_util.m"
                  switch (check_hlds__inst_util__Live_9) {
#line 615 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 615 "inst_util.m"
                    case (MR_Integer) 1:
#line 616 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 615 "inst_util.m"
                      break;
#line 615 "inst_util.m"
                    case (MR_Integer) 0:
#line 614 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 615 "inst_util.m"
                      break;
#line 615 "inst_util.m"
                  }
#line 609 "inst_util.m"
                  if (check_hlds__inst_util__succeeded)
#line 609 "inst_util.m"
                    {
#line 609 "inst_util.m"
                      check_hlds__inst_util__UniqB_237 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 609 "inst_util.m"
                      check_hlds__inst_util___HOInstInfoB_236 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 618 "inst_util.m"
                      check_hlds__inst_util__V_67_67 = (MR_Integer) 1;
#line 618 "inst_util.m"
                      {
#line 618 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_67_67, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_237, &check_hlds__inst_util__Uniq_238);
                      }
#line 609 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 609 "inst_util.m"
                        {
#line 620 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 609 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 619 "inst_util.m"
                          {
#line 619 "inst_util.m"
                            MR_Word base;
#line 619 "inst_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "inst_util.m"
                            *check_hlds__inst_util__Inst_13 = base;
#line 619 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_238));
#line 619 "inst_util.m"
                            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 619 "inst_util.m"
                          }
#line 619 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 609 "inst_util.m"
                        }
#line 609 "inst_util.m"
                    }
#line 609 "inst_util.m"
                }
#line 579 "inst_util.m"
                break;
#line 579 "inst_util.m"
              case (MR_Integer) 3:
#line 579 "inst_util.m"
#line 579 "inst_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 579 "inst_util.m"
                  default:
#line 579 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 579 "inst_util.m"
                    break;
#line 579 "inst_util.m"
                  case (MR_Integer) 0:
#line 591 "inst_util.m"
                    {
#line 591 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_71_71;
#line 591 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_72_72;
#line 591 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 591 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInstsB_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 591 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_228;
#line 591 "inst_util.m"
                      MR_Word check_hlds__inst_util__BoundInsts_229;
#line 591 "inst_util.m"
                      MR_Word check_hlds__inst_util__Detism1_231;
#line 591 "inst_util.m"
                      MR_Word check_hlds__inst_util___InstResultsB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 593 "inst_util.m"
                      {
#line 593 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_226, &check_hlds__inst_util__Uniq_228);
                      }
#line 591 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 591 "inst_util.m"
                        {
#line 594 "inst_util.m"
                          {
#line 594 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_227, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_229, &check_hlds__inst_util__Detism1_231, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 591 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 591 "inst_util.m"
                            {
#line 598 "inst_util.m"
                              check_hlds__inst_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "inst_util.m"
                              check_hlds__inst_util__V_72_72 = (MR_Integer) 1;
#line 598 "inst_util.m"
                              {
#line 598 "inst_util.m"
                                MR_Word base;
#line 598 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 598 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 598 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 598 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_228));
#line 598 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_71_71));
#line 598 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_229));
#line 598 "inst_util.m"
                              }
#line 599 "inst_util.m"
                              {
#line 599 "inst_util.m"
                                parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_231, check_hlds__inst_util__V_72_72, check_hlds__inst_util__Detism_14);
                              }
#line 599 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 591 "inst_util.m"
                            }
#line 591 "inst_util.m"
                        }
#line 591 "inst_util.m"
                    }
#line 579 "inst_util.m"
                    break;
#line 579 "inst_util.m"
                  case (MR_Integer) 1:
#line 601 "inst_util.m"
                    {
#line 601 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_68_68;
#line 601 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_233;
#line 601 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_234;
#line 601 "inst_util.m"
                      MR_Word check_hlds__inst_util___HOInstInfoB_232;

#line 604 "inst_util.m"
                      check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 601 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 601 "inst_util.m"
                        {
#line 601 "inst_util.m"
                          check_hlds__inst_util__UniqB_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 601 "inst_util.m"
                          check_hlds__inst_util___HOInstInfoB_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 605 "inst_util.m"
                          check_hlds__inst_util__V_68_68 = (MR_Integer) 1;
#line 605 "inst_util.m"
                          {
#line 605 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_68_68, check_hlds__inst_util__UniqA_298, check_hlds__inst_util__UniqB_233, &check_hlds__inst_util__Uniq_234);
                          }
#line 601 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 601 "inst_util.m"
                            {
#line 607 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 601 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 606 "inst_util.m"
                              {
#line 606 "inst_util.m"
                                MR_Word base;
#line 606 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 606 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 606 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 606 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_234));
#line 606 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_303));
#line 606 "inst_util.m"
                              }
#line 606 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 601 "inst_util.m"
                            }
#line 601 "inst_util.m"
                        }
#line 601 "inst_util.m"
                    }
#line 579 "inst_util.m"
                    break;
#line 579 "inst_util.m"
                  case (MR_Integer) 3:
#line 622 "inst_util.m"
                    {
#line 622 "inst_util.m"
                      MR_Word check_hlds__inst_util__InstVarsB_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 622 "inst_util.m"
                      MR_Word check_hlds__inst_util__SubInstB_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 623 "inst_util.m"
                      {
#line 623 "inst_util.m"
                        check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_240, check_hlds__inst_util__SubInstB_241, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                      }
#line 622 "inst_util.m"
                    }
#line 579 "inst_util.m"
                    break;
#line 579 "inst_util.m"
                }
#line 579 "inst_util.m"
                break;
#line 579 "inst_util.m"
            }
#line 567 "inst_util.m"
        }
#line 312 "inst_util.m"
        break;
#line 312 "inst_util.m"
      case (MR_Integer) 3:
#line 312 "inst_util.m"
#line 312 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 0)))) {
#line 312 "inst_util.m"
          default:
#line 312 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_FALSE;
#line 312 "inst_util.m"
            break;
#line 312 "inst_util.m"
          case (MR_Integer) 0:
#line 376 "inst_util.m"
            {
#line 376 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 376 "inst_util.m"
              MR_Word check_hlds__inst_util__InstResultsA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 376 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInstsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 3)));

#line 382 "inst_util.m"
#line 382 "inst_util.m"
              switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 382 "inst_util.m"
                default:
#line 382 "inst_util.m"
                  check_hlds__inst_util__succeeded = MR_FALSE;
#line 382 "inst_util.m"
                  break;
#line 382 "inst_util.m"
                case (MR_Integer) 0:
#line 382 "inst_util.m"
#line 382 "inst_util.m"
                  switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 382 "inst_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 382 "inst_util.m"
                    case (MR_Integer) 0:
#line 383 "inst_util.m"
                      {
#line 383 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_117;
#line 383 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_118;

#line 392 "inst_util.m"
#line 392 "inst_util.m"
                        switch (check_hlds__inst_util__Live_9) {
#line 392 "inst_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 392 "inst_util.m"
                          case (MR_Integer) 1:
#line 393 "inst_util.m"
                            {
#line 395 "inst_util.m"
                              {
#line 395 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, check_hlds__inst_util__UniqA_30, (MR_Integer) 1, &check_hlds__inst_util__Uniq_117);
                              }
#line 393 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 393 "inst_util.m"
                                {
#line 396 "inst_util.m"
                                  check_hlds__inst_util__BoundInsts_118 = check_hlds__inst_util__BoundInstsA_32;
#line 393 "inst_util.m"
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 393 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 393 "inst_util.m"
                                }
#line 393 "inst_util.m"
                            }
#line 392 "inst_util.m"
                            break;
#line 392 "inst_util.m"
                          case (MR_Integer) 0:
#line 385 "inst_util.m"
                            {
#line 386 "inst_util.m"
                              {
#line 386 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, &check_hlds__inst_util__Uniq_117);
                              }
#line 385 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 385 "inst_util.m"
                                {
#line 388 "inst_util.m"
                                  {
#line 388 "inst_util.m"
                                    check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_util__InstResultsA_31, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63);
                                  }
#line 385 "inst_util.m"
                                  if (check_hlds__inst_util__succeeded)
#line 385 "inst_util.m"
                                    {
#line 390 "inst_util.m"
                                      {
#line 390 "inst_util.m"
                                        check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInstsA_32, &check_hlds__inst_util__BoundInsts_118, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
#line 390 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 385 "inst_util.m"
                                    }
#line 385 "inst_util.m"
                                }
#line 385 "inst_util.m"
                            }
#line 392 "inst_util.m"
                            break;
#line 392 "inst_util.m"
                        }
#line 383 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 383 "inst_util.m"
                          {
#line 399 "inst_util.m"
                            *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 398 "inst_util.m"
                            {
#line 398 "inst_util.m"
                              MR_Word base;
#line 398 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 398 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 398 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 398 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_117));
#line 398 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 398 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_118));
#line 398 "inst_util.m"
                            }
#line 398 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 383 "inst_util.m"
                          }
#line 383 "inst_util.m"
                      }
#line 382 "inst_util.m"
                      break;
#line 382 "inst_util.m"
                    case (MR_Integer) 1:
#line 379 "inst_util.m"
                      {
#line 380 "inst_util.m"
                        *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 381 "inst_util.m"
                        *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 379 "inst_util.m"
                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 379 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 379 "inst_util.m"
                      }
#line 382 "inst_util.m"
                      break;
#line 382 "inst_util.m"
                  }
#line 382 "inst_util.m"
                  break;
#line 382 "inst_util.m"
                case (MR_Integer) 2:
#line 437 "inst_util.m"
                  {
#line 437 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_87_87;
#line 437 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_89_89;
#line 437 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_90_90;
#line 437 "inst_util.m"
                    MR_Word check_hlds__inst_util__UniqB_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 437 "inst_util.m"
                    MR_Word check_hlds__inst_util__Uniq_132;
#line 437 "inst_util.m"
                    MR_Word check_hlds__inst_util__BoundInsts_133;
#line 437 "inst_util.m"
                    MR_Word check_hlds__inst_util__Detism1_134;
#line 437 "inst_util.m"
                    MR_Word check_hlds__inst_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 438 "inst_util.m"
                    {
#line 438 "inst_util.m"
                      check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                    }
#line 439 "inst_util.m"
                    {
#line 439 "inst_util.m"
                      check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_131, &check_hlds__inst_util__Uniq_132);
                    }
#line 437 "inst_util.m"
                    if (check_hlds__inst_util__succeeded)
#line 437 "inst_util.m"
                      {
#line 441 "inst_util.m"
                        check_hlds__inst_util__V_87_87 = (MR_Integer) 0;
#line 441 "inst_util.m"
                        {
#line 441 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__V_87_87, check_hlds__inst_util__UniqB_131, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_133, &check_hlds__inst_util__Detism1_134, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 437 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 437 "inst_util.m"
                          {
#line 444 "inst_util.m"
                            check_hlds__inst_util__V_89_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 445 "inst_util.m"
                            check_hlds__inst_util__V_90_90 = (MR_Integer) 1;
#line 444 "inst_util.m"
                            {
#line 444 "inst_util.m"
                              MR_Word base;
#line 444 "inst_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 444 "inst_util.m"
                              *check_hlds__inst_util__Inst_13 = base;
#line 444 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 444 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_132));
#line 444 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_89_89));
#line 444 "inst_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_133));
#line 444 "inst_util.m"
                            }
#line 445 "inst_util.m"
                            {
#line 445 "inst_util.m"
                              parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_134, check_hlds__inst_util__V_90_90, check_hlds__inst_util__Detism_14);
                            }
#line 445 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 437 "inst_util.m"
                          }
#line 437 "inst_util.m"
                      }
#line 437 "inst_util.m"
                  }
#line 382 "inst_util.m"
                  break;
#line 382 "inst_util.m"
                case (MR_Integer) 3:
#line 382 "inst_util.m"
#line 382 "inst_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 382 "inst_util.m"
                    default:
#line 382 "inst_util.m"
                      check_hlds__inst_util__succeeded = MR_FALSE;
#line 382 "inst_util.m"
                      break;
#line 382 "inst_util.m"
                    case (MR_Integer) 0:
#line 401 "inst_util.m"
                      {
#line 401 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_96_96;
#line 401 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 401 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInstsB_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 401 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_121;
#line 401 "inst_util.m"
                        MR_Word check_hlds__inst_util__BoundInsts_122;
#line 401 "inst_util.m"
                        MR_Word check_hlds__inst_util___InstResultsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 402 "inst_util.m"
                        {
#line 402 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__BoundInstsB_120, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_122, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 401 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 401 "inst_util.m"
                          {
#line 404 "inst_util.m"
                            {
#line 404 "inst_util.m"
                              check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, *check_hlds__inst_util__Detism_14, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_119, &check_hlds__inst_util__Uniq_121);
                            }
#line 401 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 401 "inst_util.m"
                              {
#line 406 "inst_util.m"
                                check_hlds__inst_util__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "inst_util.m"
                                {
#line 406 "inst_util.m"
                                  MR_Word base;
#line 406 "inst_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 406 "inst_util.m"
                                  *check_hlds__inst_util__Inst_13 = base;
#line 406 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 406 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_121));
#line 406 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__V_96_96));
#line 406 "inst_util.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_122));
#line 406 "inst_util.m"
                                }
#line 406 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 401 "inst_util.m"
                              }
#line 401 "inst_util.m"
                          }
#line 401 "inst_util.m"
                      }
#line 382 "inst_util.m"
                      break;
#line 382 "inst_util.m"
                    case (MR_Integer) 1:
#line 408 "inst_util.m"
                      {
#line 408 "inst_util.m"
                        MR_Word check_hlds__inst_util__Detism1_35;
#line 408 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_94_94;
#line 408 "inst_util.m"
                        MR_Word check_hlds__inst_util__UniqB_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 408 "inst_util.m"
                        MR_Word check_hlds__inst_util__Uniq_129;
#line 408 "inst_util.m"
                        MR_Word check_hlds__inst_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 409 "inst_util.m"
                        {
#line 409 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_30, check_hlds__inst_util__UniqB_128, &check_hlds__inst_util__Uniq_129);
                        }
#line 408 "inst_util.m"
                        if (check_hlds__inst_util__succeeded)
#line 408 "inst_util.m"
                          {
#line 414 "inst_util.m"
#line 414 "inst_util.m"
                            switch (MR_tag((MR_Word) check_hlds__inst_util__InstResultsA_31)) {
#line 414 "inst_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 414 "inst_util.m"
                              case (MR_Integer) 0:
#line 414 "inst_util.m"
#line 414 "inst_util.m"
                                switch (MR_unmkbody(check_hlds__inst_util__InstResultsA_31)) {
#line 414 "inst_util.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 414 "inst_util.m"
                                  case (MR_Integer) 0:
#line 430 "inst_util.m"
                                    {
#line 430 "inst_util.m"
                                      MR_Word check_hlds__inst_util__BoundInsts_126;

#line 431 "inst_util.m"
                                      {
#line 431 "inst_util.m"
                                        check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_126, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                      }
#line 430 "inst_util.m"
                                      if (check_hlds__inst_util__succeeded)
#line 430 "inst_util.m"
                                        {
#line 433 "inst_util.m"
                                          {
#line 433 "inst_util.m"
                                            MR_Word base;
#line 433 "inst_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 433 "inst_util.m"
                                            *check_hlds__inst_util__Inst_13 = base;
#line 433 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 433 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 433 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 433 "inst_util.m"
                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_126));
#line 433 "inst_util.m"
                                          }
#line 433 "inst_util.m"
                                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 430 "inst_util.m"
                                        }
#line 430 "inst_util.m"
                                    }
#line 414 "inst_util.m"
                                    break;
#line 414 "inst_util.m"
                                  case (MR_Integer) 1:
#line 411 "inst_util.m"
                                    {
#line 412 "inst_util.m"
                                      *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 413 "inst_util.m"
                                      check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 411 "inst_util.m"
                                      *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 411 "inst_util.m"
                                      check_hlds__inst_util__succeeded = MR_TRUE;
#line 411 "inst_util.m"
                                    }
#line 414 "inst_util.m"
                                    break;
#line 414 "inst_util.m"
                                }
#line 414 "inst_util.m"
                                break;
#line 414 "inst_util.m"
                              case (MR_Integer) 1:
#line 416 "inst_util.m"
                                {
#line 416 "inst_util.m"
                                  MR_Word check_hlds__inst_util__GroundnessResultA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 0)));
#line 415 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 1)));
#line 415 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 2)));
#line 415 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 3)));
#line 415 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 4)));
#line 415 "inst_util.m"
                                  MR_Word check_hlds__inst_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__InstResultsA_31, (MR_Integer) 5)));

#line 421 "inst_util.m"
#line 421 "inst_util.m"
                                  switch (check_hlds__inst_util__GroundnessResultA_36) {
#line 421 "inst_util.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 421 "inst_util.m"
                                    case (MR_Integer) 2:
#line 421 "inst_util.m"
                                    case (MR_Integer) 0:
#line 424 "inst_util.m"
                                      {
#line 424 "inst_util.m"
                                        MR_Word check_hlds__inst_util__BoundInsts_123;

#line 425 "inst_util.m"
                                        {
#line 425 "inst_util.m"
                                          check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsA_32, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqB_128, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_123, &check_hlds__inst_util__Detism1_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                                        }
#line 424 "inst_util.m"
                                        if (check_hlds__inst_util__succeeded)
#line 424 "inst_util.m"
                                          {
#line 427 "inst_util.m"
                                            {
#line 427 "inst_util.m"
                                              MR_Word base;
#line 427 "inst_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 427 "inst_util.m"
                                              *check_hlds__inst_util__Inst_13 = base;
#line 427 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 427 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_129));
#line 427 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsA_31));
#line 427 "inst_util.m"
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_123));
#line 427 "inst_util.m"
                                            }
#line 427 "inst_util.m"
                                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 424 "inst_util.m"
                                          }
#line 424 "inst_util.m"
                                      }
#line 421 "inst_util.m"
                                      break;
#line 421 "inst_util.m"
                                    case (MR_Integer) 1:
#line 418 "inst_util.m"
                                      {
#line 419 "inst_util.m"
                                        *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__InstA_10;
#line 420 "inst_util.m"
                                        check_hlds__inst_util__Detism1_35 = (MR_Integer) 1;
#line 418 "inst_util.m"
                                        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 418 "inst_util.m"
                                        check_hlds__inst_util__succeeded = MR_TRUE;
#line 418 "inst_util.m"
                                      }
#line 421 "inst_util.m"
                                      break;
#line 421 "inst_util.m"
                                  }
#line 416 "inst_util.m"
                                }
#line 414 "inst_util.m"
                                break;
#line 414 "inst_util.m"
                            }
#line 408 "inst_util.m"
                            if (check_hlds__inst_util__succeeded)
#line 408 "inst_util.m"
                              {
#line 435 "inst_util.m"
                                check_hlds__inst_util__V_94_94 = (MR_Integer) 1;
#line 435 "inst_util.m"
                                {
#line 435 "inst_util.m"
                                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_35, check_hlds__inst_util__V_94_94, check_hlds__inst_util__Detism_14);
                                }
#line 435 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 408 "inst_util.m"
                              }
#line 408 "inst_util.m"
                          }
#line 408 "inst_util.m"
                      }
#line 382 "inst_util.m"
                      break;
#line 382 "inst_util.m"
                    case (MR_Integer) 3:
#line 447 "inst_util.m"
                      {
#line 447 "inst_util.m"
                        MR_Word check_hlds__inst_util__InstVarsB_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 447 "inst_util.m"
                        MR_Word check_hlds__inst_util__SubInstB_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 448 "inst_util.m"
                        {
#line 448 "inst_util.m"
                          check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_135, check_hlds__inst_util__SubInstB_136, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                        }
#line 447 "inst_util.m"
                      }
#line 382 "inst_util.m"
                      break;
#line 382 "inst_util.m"
                  }
#line 382 "inst_util.m"
                  break;
#line 382 "inst_util.m"
              }
#line 376 "inst_util.m"
            }
#line 312 "inst_util.m"
            break;
#line 312 "inst_util.m"
          case (MR_Integer) 1:
#line 487 "inst_util.m"
            {
#line 487 "inst_util.m"
              MR_Word check_hlds__inst_util__HOInstInfoA_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));
#line 487 "inst_util.m"
              MR_Word check_hlds__inst_util__UniqA_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));

#line 492 "inst_util.m"
              if ((check_hlds__inst_util__HOInstInfoA_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "inst_util.m"
                {
#line 490 "inst_util.m"
                  check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(check_hlds__inst_util__InstB_11, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                }
#line 492 "inst_util.m"
              else
#line 499 "inst_util.m"
#line 499 "inst_util.m"
                switch (MR_tag((MR_Word) check_hlds__inst_util__InstB_11)) {
#line 499 "inst_util.m"
                  default:
#line 499 "inst_util.m"
                    check_hlds__inst_util__succeeded = MR_FALSE;
#line 499 "inst_util.m"
                    break;
#line 499 "inst_util.m"
                  case (MR_Integer) 0:
#line 499 "inst_util.m"
#line 499 "inst_util.m"
                    switch (MR_unmkbody(check_hlds__inst_util__InstB_11)) {
#line 499 "inst_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 499 "inst_util.m"
                      case (MR_Integer) 0:
#line 500 "inst_util.m"
                        {
#line 500 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_155;

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
                                check_hlds__inst_util__Uniq_155 = check_hlds__inst_util__UniqA_219;
#line 506 "inst_util.m"
                                check_hlds__inst_util__succeeded = MR_TRUE;
#line 506 "inst_util.m"
                              }
#line 504 "inst_util.m"
                              break;
#line 504 "inst_util.m"
                            case (MR_Integer) 0:
#line 502 "inst_util.m"
                              {
#line 503 "inst_util.m"
                                {
#line 503 "inst_util.m"
                                  check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 0, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, &check_hlds__inst_util__Uniq_155);
                                }
#line 502 "inst_util.m"
                              }
#line 504 "inst_util.m"
                              break;
#line 504 "inst_util.m"
                          }
#line 500 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 500 "inst_util.m"
                            {
#line 509 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 500 "inst_util.m"
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
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_155));
#line 508 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 508 "inst_util.m"
                              }
#line 508 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 500 "inst_util.m"
                            }
#line 500 "inst_util.m"
                        }
#line 499 "inst_util.m"
                        break;
#line 499 "inst_util.m"
                      case (MR_Integer) 1:
#line 496 "inst_util.m"
                        {
#line 497 "inst_util.m"
                          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 498 "inst_util.m"
                          *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 496 "inst_util.m"
                          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 496 "inst_util.m"
                          check_hlds__inst_util__succeeded = MR_TRUE;
#line 496 "inst_util.m"
                        }
#line 499 "inst_util.m"
                        break;
#line 499 "inst_util.m"
                    }
#line 499 "inst_util.m"
                    break;
#line 499 "inst_util.m"
                  case (MR_Integer) 2:
#line 533 "inst_util.m"
                    {
#line 533 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_77_77;
#line 533 "inst_util.m"
                      MR_Word check_hlds__inst_util__UniqB_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 0)));
#line 533 "inst_util.m"
                      MR_Word check_hlds__inst_util__Uniq_165;
#line 533 "inst_util.m"
                      MR_Word check_hlds__inst_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));

#line 537 "inst_util.m"
#line 537 "inst_util.m"
                      switch (check_hlds__inst_util__Live_9) {
#line 537 "inst_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 537 "inst_util.m"
                        case (MR_Integer) 1:
#line 539 "inst_util.m"
                          {
#line 539 "inst_util.m"
                            {
#line 539 "inst_util.m"
                              check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                            }
#line 539 "inst_util.m"
                            check_hlds__inst_util__succeeded = MR_TRUE;
#line 539 "inst_util.m"
                          }
#line 537 "inst_util.m"
                          break;
#line 537 "inst_util.m"
                        case (MR_Integer) 0:
#line 536 "inst_util.m"
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 537 "inst_util.m"
                          break;
#line 537 "inst_util.m"
                      }
#line 533 "inst_util.m"
                      if (check_hlds__inst_util__succeeded)
#line 533 "inst_util.m"
                        {
#line 541 "inst_util.m"
                          check_hlds__inst_util__V_77_77 = (MR_Integer) 1;
#line 541 "inst_util.m"
                          {
#line 541 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_77_77, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_164, &check_hlds__inst_util__Uniq_165);
                          }
#line 533 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 533 "inst_util.m"
                            {
#line 543 "inst_util.m"
                              *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 533 "inst_util.m"
                              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 542 "inst_util.m"
                              {
#line 542 "inst_util.m"
                                MR_Word base;
#line 542 "inst_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 542 "inst_util.m"
                                *check_hlds__inst_util__Inst_13 = base;
#line 542 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 542 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_165));
#line 542 "inst_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 542 "inst_util.m"
                              }
#line 542 "inst_util.m"
                              check_hlds__inst_util__succeeded = MR_TRUE;
#line 533 "inst_util.m"
                            }
#line 533 "inst_util.m"
                        }
#line 533 "inst_util.m"
                    }
#line 499 "inst_util.m"
                    break;
#line 499 "inst_util.m"
                  case (MR_Integer) 3:
#line 499 "inst_util.m"
#line 499 "inst_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 0)))) {
#line 499 "inst_util.m"
                      default:
#line 499 "inst_util.m"
                        check_hlds__inst_util__succeeded = MR_FALSE;
#line 499 "inst_util.m"
                        break;
#line 499 "inst_util.m"
                      case (MR_Integer) 0:
#line 511 "inst_util.m"
                        {
#line 511 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_81_81;
#line 511 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 511 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstResultsB_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 511 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInstsB_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 3)));
#line 511 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_159;
#line 511 "inst_util.m"
                          MR_Word check_hlds__inst_util__BoundInsts_160;
#line 511 "inst_util.m"
                          MR_Word check_hlds__inst_util__Detism1_161;

#line 513 "inst_util.m"
                          {
#line 513 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, (MR_Integer) 1, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_156, &check_hlds__inst_util__Uniq_159);
                          }
#line 511 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 511 "inst_util.m"
                            {
#line 514 "inst_util.m"
                              {
#line 514 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(check_hlds__inst_util__BoundInstsB_158, check_hlds__inst_util__Live_9, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__Real_12, &check_hlds__inst_util__BoundInsts_160, &check_hlds__inst_util__Detism1_161, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                              }
#line 511 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 511 "inst_util.m"
                                {
#line 517 "inst_util.m"
                                  check_hlds__inst_util__V_81_81 = (MR_Integer) 1;
#line 516 "inst_util.m"
                                  {
#line 516 "inst_util.m"
                                    MR_Word base;
#line 516 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 516 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 516 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 516 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_159));
#line 516 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__InstResultsB_157));
#line 516 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_160));
#line 516 "inst_util.m"
                                  }
#line 517 "inst_util.m"
                                  {
#line 517 "inst_util.m"
                                    parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(check_hlds__inst_util__Detism1_161, check_hlds__inst_util__V_81_81, check_hlds__inst_util__Detism_14);
                                  }
#line 517 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 511 "inst_util.m"
                                }
#line 511 "inst_util.m"
                            }
#line 511 "inst_util.m"
                        }
#line 499 "inst_util.m"
                        break;
#line 499 "inst_util.m"
                      case (MR_Integer) 1:
#line 519 "inst_util.m"
                        {
#line 519 "inst_util.m"
                          MR_Word check_hlds__inst_util__V_78_78;
#line 519 "inst_util.m"
                          MR_Word check_hlds__inst_util__UniqB_162;
#line 519 "inst_util.m"
                          MR_Word check_hlds__inst_util__Uniq_163;
#line 519 "inst_util.m"
                          MR_Word check_hlds__inst_util___HOInstInfoB_50;

#line 522 "inst_util.m"
                          check_hlds__inst_util__succeeded = (check_hlds__inst_util__Real_12 == (MR_Integer) 1);
#line 519 "inst_util.m"
                          if (check_hlds__inst_util__succeeded)
#line 519 "inst_util.m"
                            {
#line 519 "inst_util.m"
                              check_hlds__inst_util__UniqB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 519 "inst_util.m"
                              check_hlds__inst_util___HOInstInfoB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));
#line 529 "inst_util.m"
                              check_hlds__inst_util__V_78_78 = (MR_Integer) 1;
#line 529 "inst_util.m"
                              {
#line 529 "inst_util.m"
                                check_hlds__inst_util__succeeded = check_hlds__inst_util__unify_uniq_6_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__Real_12, check_hlds__inst_util__V_78_78, check_hlds__inst_util__UniqA_219, check_hlds__inst_util__UniqB_162, &check_hlds__inst_util__Uniq_163);
                              }
#line 519 "inst_util.m"
                              if (check_hlds__inst_util__succeeded)
#line 519 "inst_util.m"
                                {
#line 531 "inst_util.m"
                                  *check_hlds__inst_util__Detism_14 = (MR_Integer) 1;
#line 519 "inst_util.m"
                                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63;
#line 530 "inst_util.m"
                                  {
#line 530 "inst_util.m"
                                    MR_Word base;
#line 530 "inst_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 530 "inst_util.m"
                                    *check_hlds__inst_util__Inst_13 = base;
#line 530 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_163));
#line 530 "inst_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__HOInstInfoA_48));
#line 530 "inst_util.m"
                                  }
#line 530 "inst_util.m"
                                  check_hlds__inst_util__succeeded = MR_TRUE;
#line 519 "inst_util.m"
                                }
#line 519 "inst_util.m"
                            }
#line 519 "inst_util.m"
                        }
#line 499 "inst_util.m"
                        break;
#line 499 "inst_util.m"
                      case (MR_Integer) 3:
#line 545 "inst_util.m"
                        {
#line 545 "inst_util.m"
                          MR_Word check_hlds__inst_util__InstVarsB_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 1)));
#line 545 "inst_util.m"
                          MR_Word check_hlds__inst_util__SubInstB_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_11, (MR_Integer) 2)));

#line 546 "inst_util.m"
                          {
#line 546 "inst_util.m"
                            check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsB_166, check_hlds__inst_util__SubInstB_167, check_hlds__inst_util__InstA_10, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
                          }
#line 545 "inst_util.m"
                        }
#line 499 "inst_util.m"
                        break;
#line 499 "inst_util.m"
                    }
#line 499 "inst_util.m"
                    break;
#line 499 "inst_util.m"
                }
#line 487 "inst_util.m"
            }
#line 312 "inst_util.m"
            break;
#line 312 "inst_util.m"
          case (MR_Integer) 3:
#line 644 "inst_util.m"
            {
#line 644 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVarsA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 1)));
#line 644 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInstA_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_10, (MR_Integer) 2)));

#line 645 "inst_util.m"
              {
#line 645 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstVarsA_58, check_hlds__inst_util__SubInstA_59, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_63, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_64);
              }
#line 644 "inst_util.m"
            }
#line 312 "inst_util.m"
            break;
#line 312 "inst_util.m"
        }
#line 312 "inst_util.m"
        break;
#line 312 "inst_util.m"
    }
#line 312 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 312 "inst_util.m"
  }
#line 302 "inst_util.m"
}

#line 277 "inst_util.m"
static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__Live_9,
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__InstA_10,
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__InstB_11,
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__Real_12,
#line 277 "inst_util.m"
  MR_Word * check_hlds__inst_util__Inst_13,
#line 277 "inst_util.m"
  MR_Word * check_hlds__inst_util__Detism_14,
#line 277 "inst_util.m"
  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20,
#line 277 "inst_util.m"
  MR_Word * check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21)
#line 277 "inst_util.m"
{
#line 282 "inst_util.m"
  {
#line 282 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 282 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstA_16;
#line 282 "inst_util.m"
    MR_Word check_hlds__inst_util__ExpandedInstB_17;
#line 282 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst0_18;
#line 289 "inst_util.m"
    MR_Word check_hlds__inst_util__V_23_23;
#line 289 "inst_util.m"
    MR_Word check_hlds__inst_util__V_24_24;
#line 289 "inst_util.m"
    MR_Word check_hlds__inst_util__V_19_19;

#line 283 "inst_util.m"
    {
#line 283 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstA_10, &check_hlds__inst_util__ExpandedInstA_16);
    }
#line 284 "inst_util.m"
    {
#line 284 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__InstB_11, &check_hlds__inst_util__ExpandedInstB_17);
    }
#line 285 "inst_util.m"
    {
#line 285 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__ExpandedInstA_16, check_hlds__inst_util__ExpandedInstB_17, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_18, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_21);
    }
#line 282 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 282 "inst_util.m"
      {
#line 289 "inst_util.m"
        check_hlds__inst_util__V_23_23 = (MR_Integer) 0;
#line 289 "inst_util.m"
        {
#line 289 "inst_util.m"
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__inst_util__Detism_14, &check_hlds__inst_util__V_19_19, &check_hlds__inst_util__V_24_24);
        }
#line 289 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_23_23 == check_hlds__inst_util__V_24_24);
#line 291 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 290 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 291 "inst_util.m"
        else
#line 292 "inst_util.m"
          *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_18;
#line 291 "inst_util.m"
        check_hlds__inst_util__succeeded = MR_TRUE;
#line 282 "inst_util.m"
      }
#line 282 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 282 "inst_util.m"
  }
#line 277 "inst_util.m"
}

#line 159 "inst_util.m"
MR_Word MR_CALL 
check_hlds__inst_util__inst_may_restrict_cons_ids_2_f_0(
#line 159 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_4,
#line 159 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_5)
#line 159 "inst_util.m"
{
#line 2418 "inst_util.m"
  while (MR_TRUE)
#line 2418 "inst_util.m"
    {
#line 2418 "inst_util.m"
      /* tailcall optimized into a loop */
#line 2418 "inst_util.m"
      {
#line 2418 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded;
#line 2418 "inst_util.m"
        MR_Word check_hlds__inst_util__MayRestrict_6;

#line 2418 "inst_util.m"
#line 2418 "inst_util.m"
        switch (MR_tag((MR_Word) check_hlds__inst_util__Inst_5)) {
#line 2418 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2418 "inst_util.m"
          case (MR_Integer) 0:
#line 2426 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2418 "inst_util.m"
            break;
#line 2418 "inst_util.m"
          case (MR_Integer) 1:
#line 2426 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2418 "inst_util.m"
            break;
#line 2418 "inst_util.m"
          case (MR_Integer) 2:
#line 2419 "inst_util.m"
            check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2418 "inst_util.m"
            break;
#line 2418 "inst_util.m"
          case (MR_Integer) 3:
#line 2418 "inst_util.m"
#line 2418 "inst_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 0)))) {
#line 2418 "inst_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2418 "inst_util.m"
              case (MR_Integer) 0:
#line 2418 "inst_util.m"
              case (MR_Integer) 2:
#line 2418 "inst_util.m"
              case (MR_Integer) 3:
#line 2418 "inst_util.m"
              case (MR_Integer) 5:
#line 2419 "inst_util.m"
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 1;
#line 2418 "inst_util.m"
                break;
#line 2418 "inst_util.m"
              case (MR_Integer) 1:
#line 2426 "inst_util.m"
                check_hlds__inst_util__MayRestrict_6 = (MR_Integer) 0;
#line 2418 "inst_util.m"
                break;
#line 2418 "inst_util.m"
              case (MR_Integer) 4:
#line 2428 "inst_util.m"
                {
#line 2428 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst_5, (MR_Integer) 1)));
#line 2428 "inst_util.m"
                  MR_Word check_hlds__inst_util__NewInst_21;

#line 2429 "inst_util.m"
                  {
#line 2429 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_20, &check_hlds__inst_util__NewInst_21);
                  }
#line 2430 "inst_util.m"
                  /* direct tailcall eliminated */
#line 2430 "inst_util.m"
                  {
#line 2430 "inst_util.m"
                    MR_Word check_hlds__inst_util__Inst__tmp_copy_5 = check_hlds__inst_util__NewInst_21;

#line 2430 "inst_util.m"
                    check_hlds__inst_util__Inst_5 = check_hlds__inst_util__Inst__tmp_copy_5;
#line 2430 "inst_util.m"
                  }
#line 2430 "inst_util.m"
                  continue;
#line 2428 "inst_util.m"
                }
#line 2418 "inst_util.m"
                break;
#line 2418 "inst_util.m"
            }
#line 2418 "inst_util.m"
            break;
#line 2418 "inst_util.m"
        }
#line 2418 "inst_util.m"
        return check_hlds__inst_util__MayRestrict_6;
#line 2418 "inst_util.m"
      }
#line 2418 "inst_util.m"
      break;
#line 2418 "inst_util.m"
    }
#line 159 "inst_util.m"
}

#line 154 "inst_util.m"
MR_Word MR_CALL 
check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(
#line 154 "inst_util.m"
  MR_Integer check_hlds__inst_util__Arity_3)
#line 154 "inst_util.m"
{
#line 2303 "inst_util.m"
  {
#line 2303 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2303 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_4;
#line 2303 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_16_16;
#line 2303 "inst_util.m"
    MR_Word check_hlds__inst_util__InMode_5;
#line 2303 "inst_util.m"
    MR_Word check_hlds__inst_util__OutMode_6;
#line 2303 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_7;
#line 2303 "inst_util.m"
    MR_Word check_hlds__inst_util__V_8_8;
#line 2303 "inst_util.m"
    MR_Integer check_hlds__inst_util__V_9_9;
#line 2303 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2304 "inst_util.m"
    {
#line 2304 "inst_util.m"
      parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__inst_util__InMode_5);
    }
#line 2305 "inst_util.m"
    {
#line 2305 "inst_util.m"
      parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__inst_util__OutMode_6);
    }
#line 11876 "check_hlds.inst_util.c"
    check_hlds__inst_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2306 "inst_util.m"
    check_hlds__inst_util__V_9_9 = (check_hlds__inst_util__Arity_3 - (MR_Integer) 1);
#line 2306 "inst_util.m"
    {
#line 2306 "inst_util.m"
      check_hlds__inst_util__V_8_8 = mercury__list__duplicate_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_9_9, ((MR_Box) (check_hlds__inst_util__InMode_5)));
    }
#line 2306 "inst_util.m"
    {
#line 2306 "inst_util.m"
      check_hlds__inst_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 0) = ((MR_Box) (check_hlds__inst_util__OutMode_6));
#line 2306 "inst_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2306 "inst_util.m"
    }
#line 2306 "inst_util.m"
    {
#line 2306 "inst_util.m"
      check_hlds__inst_util__ArgModes_7 = mercury__list__f_43_43_2_f_0(check_hlds__inst_util__TypeCtorInfo_16_16, check_hlds__inst_util__V_8_8, check_hlds__inst_util__V_11_11);
    }
#line 2307 "inst_util.m"
    {
#line 2307 "inst_util.m"
      check_hlds__inst_util__PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2307 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 2307 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 1) = ((MR_Box) (check_hlds__inst_util__ArgModes_7));
#line 2307 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2307 "inst_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2307 "inst_util.m"
    }
#line 2303 "inst_util.m"
    return check_hlds__inst_util__PredInstInfo_4;
#line 2303 "inst_util.m"
  }
#line 154 "inst_util.m"
}

#line 149 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(
#line 149 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 149 "inst_util.m"
  MR_Word check_hlds__inst_util__HOInstInfo_4)
#line 149 "inst_util.m"
{
#line 2299 "inst_util.m"
  {
#line 2299 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((MR_tag((MR_Word) check_hlds__inst_util__HOInstInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 2299 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_14;
#line 2299 "inst_util.m"
    MR_Word check_hlds__inst_util__PredInstInfo_5;
#line 2299 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_8;
#line 2299 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_11;
#line 2299 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 2294 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9;
#line 2294 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;
#line 2296 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;

#line 2300 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2300 "inst_util.m"
      {
#line 2300 "inst_util.m"
        check_hlds__inst_util__PredInstInfo_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_util__HOInstInfo_4), (MR_Integer) 1);
#line 2294 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 0)));
#line 2294 "inst_util.m"
        check_hlds__inst_util__ArgModes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 1)));
#line 2294 "inst_util.m"
        check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 2)));
#line 2294 "inst_util.m"
        check_hlds__inst_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_5, (MR_Integer) 3)));
#line 2294 "inst_util.m"
        check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_12_12 == (MR_Integer) 1);
#line 2299 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 2299 "inst_util.m"
          {
#line 11971 "check_hlds.inst_util.c"
            check_hlds__inst_util__TypeCtorInfo_11_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2295 "inst_util.m"
            {
#line 2295 "inst_util.m"
              check_hlds__inst_util__Arity_11 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_14, check_hlds__inst_util__ArgModes_8);
            }
#line 2297 "inst_util.m"
            {
#line 2297 "inst_util.m"
              check_hlds__inst_util__V_13_13 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_11);
            }
#line 2296 "inst_util.m"
            {
#line 2296 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_5, check_hlds__inst_util__V_13_13, check_hlds__inst_util__ModuleInfo_3);
            }
#line 2296 "inst_util.m"
            check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2299 "inst_util.m"
          }
#line 2300 "inst_util.m"
      }
#line 2299 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2299 "inst_util.m"
  }
#line 149 "inst_util.m"
}

#line 143 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__pred_inst_info_is_nonstandard_func_mode_2_p_0(
#line 143 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 143 "inst_util.m"
  MR_Word check_hlds__inst_util__PredInstInfo_4)
#line 143 "inst_util.m"
{
#line 2293 "inst_util.m"
  {
#line 2293 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2293 "inst_util.m"
    MR_Word check_hlds__inst_util__TypeCtorInfo_11_11;
#line 2293 "inst_util.m"
    MR_Word check_hlds__inst_util__ArgModes_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 1)));
#line 2293 "inst_util.m"
    MR_Integer check_hlds__inst_util__Arity_8;
#line 2293 "inst_util.m"
    MR_Word check_hlds__inst_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 0)));
#line 2294 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 2)));
#line 2294 "inst_util.m"
    MR_Word check_hlds__inst_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_util__PredInstInfo_4, (MR_Integer) 3)));
#line 2296 "inst_util.m"
    MR_Word check_hlds__inst_util__V_10_10;

#line 2294 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_9_9 == (MR_Integer) 1);
#line 2293 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 2293 "inst_util.m"
      {
#line 12035 "check_hlds.inst_util.c"
        check_hlds__inst_util__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2295 "inst_util.m"
        {
#line 2295 "inst_util.m"
          check_hlds__inst_util__Arity_8 = mercury__list__length_1_f_0(check_hlds__inst_util__TypeCtorInfo_11_11, check_hlds__inst_util__ArgModes_5);
        }
#line 2297 "inst_util.m"
        {
#line 2297 "inst_util.m"
          check_hlds__inst_util__V_10_10 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_util__Arity_8);
        }
#line 2296 "inst_util.m"
        {
#line 2296 "inst_util.m"
          check_hlds__inst_util__succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(check_hlds__inst_util__PredInstInfo_4, check_hlds__inst_util__V_10_10, check_hlds__inst_util__ModuleInfo_3);
        }
#line 2296 "inst_util.m"
        check_hlds__inst_util__succeeded = !(check_hlds__inst_util__succeeded);
#line 2293 "inst_util.m"
      }
#line 2293 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2293 "inst_util.m"
  }
#line 143 "inst_util.m"
}

#line 137 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__var_inst_contains_any_3_p_0(
#line 137 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_4,
#line 137 "inst_util.m"
  MR_Word check_hlds__inst_util__Instmap_5,
#line 137 "inst_util.m"
  MR_Word check_hlds__inst_util__Var_6)
#line 137 "inst_util.m"
{
#line 2405 "inst_util.m"
  {
#line 2405 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2405 "inst_util.m"
    MR_Word check_hlds__inst_util__Inst_7;
#line 2405 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_10;
#line 2405 "inst_util.m"
    MR_Word check_hlds__inst_util__V_11_11;

#line 2406 "inst_util.m"
    {
#line 2406 "inst_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__inst_util__Instmap_5, check_hlds__inst_util__Var_6, &check_hlds__inst_util__Inst_7);
    }
#line 2313 "inst_util.m"
    {
#line 2313 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_10);
    }
#line 2314 "inst_util.m"
    {
#line 2314 "inst_util.m"
      check_hlds__inst_util__V_11_11 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__Inst_7, check_hlds__inst_util__Expansions_10);
    }
#line 2314 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_11_11 == (MR_Integer) 1);
#line 2405 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2405 "inst_util.m"
  }
#line 137 "inst_util.m"
}

#line 133 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__inst_contains_any_2_p_0(
#line 133 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 133 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_4)
#line 133 "inst_util.m"
{
#line 2312 "inst_util.m"
  {
#line 2312 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2312 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions_5;
#line 2312 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2313 "inst_util.m"
    {
#line 2313 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions_5);
    }
#line 2314 "inst_util.m"
    {
#line 2314 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_any_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions_5);
    }
#line 2314 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2312 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2312 "inst_util.m"
  }
#line 133 "inst_util.m"
}

#line 128 "inst_util.m"
MR_bool MR_CALL 
check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_p_0(
#line 128 "inst_util.m"
  MR_Word check_hlds__inst_util__ModuleInfo_3,
#line 128 "inst_util.m"
  MR_Word check_hlds__inst_util__Inst_4)
#line 128 "inst_util.m"
{
#line 2195 "inst_util.m"
  {
#line 2195 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 2195 "inst_util.m"
    MR_Word check_hlds__inst_util__Expansions0_5;
#line 2195 "inst_util.m"
    MR_Word check_hlds__inst_util__V_6_6;

#line 2196 "inst_util.m"
    {
#line 2196 "inst_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_util__Expansions0_5);
    }
#line 2197 "inst_util.m"
    {
#line 2197 "inst_util.m"
      check_hlds__inst_util__V_6_6 = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_3_f_0(check_hlds__inst_util__ModuleInfo_3, check_hlds__inst_util__Inst_4, check_hlds__inst_util__Expansions0_5);
    }
#line 2197 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__V_6_6 == (MR_Integer) 1);
#line 2195 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 2195 "inst_util.m"
  }
#line 128 "inst_util.m"
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
#line 1762 "inst_util.m"
  {
#line 1762 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstA_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1758 "inst_util.m"
    MR_Word check_hlds__inst_util__V_12_12;
#line 1758 "inst_util.m"
    MR_Word check_hlds__inst_util__V_13_13;
#line 1758 "inst_util.m"
    MR_Word check_hlds__inst_util__V_14_14;
#line 1759 "inst_util.m"
    MR_Word check_hlds__inst_util__V_15_15;
#line 1759 "inst_util.m"
    MR_Word check_hlds__inst_util__V_16_16;
#line 1759 "inst_util.m"
    MR_Word check_hlds__inst_util__V_17_17;

#line 1758 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1758 "inst_util.m"
      {
#line 1758 "inst_util.m"
        check_hlds__inst_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 1)));
#line 1758 "inst_util.m"
        check_hlds__inst_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 2)));
#line 1758 "inst_util.m"
        check_hlds__inst_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstA_7, (MR_Integer) 3)));
#line 1759 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__InstB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1759 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1759 "inst_util.m"
          {
#line 1759 "inst_util.m"
            check_hlds__inst_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 1)));
#line 1759 "inst_util.m"
            check_hlds__inst_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 2)));
#line 1759 "inst_util.m"
            check_hlds__inst_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__InstB_8, (MR_Integer) 3)));
#line 1759 "inst_util.m"
          }
#line 1758 "inst_util.m"
      }
#line 1762 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 1761 "inst_util.m"
      {
#line 1761 "inst_util.m"
        check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
      }
#line 1762 "inst_util.m"
    else
#line 1764 "inst_util.m"
      {
#line 1764 "inst_util.m"
        MR_Word check_hlds__inst_util__InstTable0_18;
#line 1764 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable0_19;
#line 1764 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstInfo_20;
#line 1764 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstName_21;
#line 1764 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeMergedInst_22;
#line 1764 "inst_util.m"
        MR_Word check_hlds__inst_util__MergeInstTable1_23;
#line 1764 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_25;

#line 1764 "inst_util.m"
        {
#line 1764 "inst_util.m"
          hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__InstTable0_18);
        }
#line 1765 "inst_util.m"
        {
#line 1765 "inst_util.m"
          hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__MergeInstTable0_19);
        }
#line 1766 "inst_util.m"
        {
#line 1766 "inst_util.m"
          check_hlds__inst_util__MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1766 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1766 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__MergeInstInfo_20, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1766 "inst_util.m"
        }
#line 1767 "inst_util.m"
        {
#line 1767 "inst_util.m"
          check_hlds__inst_util__MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1767 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 0) = ((MR_Box) (check_hlds__inst_util__InstA_7));
#line 1767 "inst_util.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_util__MergeInstName_21, 1) = ((MR_Box) (check_hlds__inst_util__InstB_8));
#line 1767 "inst_util.m"
        }
#line 1768 "inst_util.m"
        {
#line 1768 "inst_util.m"
          hlds__hlds_data__search_insert_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, &check_hlds__inst_util__MaybeMaybeMergedInst_22, check_hlds__inst_util__MergeInstTable0_19, &check_hlds__inst_util__MergeInstTable1_23);
        }
#line 1778 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeMergedInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1779 "inst_util.m"
          {
#line 1779 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_26;
#line 1779 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_27;
#line 1779 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable2_28;
#line 1779 "inst_util.m"
            MR_Word check_hlds__inst_util__MergeInstTable3_29;
#line 1779 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable3_30;
#line 1779 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34;
#line 1779 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35;
#line 1779 "inst_util.m"
            MR_Word check_hlds__inst_util__V_36_36;

#line 1782 "inst_util.m"
            {
#line 1782 "inst_util.m"
              hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable1_23, check_hlds__inst_util__InstTable0_18, &check_hlds__inst_util__InstTable1_26);
            }
#line 1784 "inst_util.m"
            {
#line 1784 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_26, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34);
            }
#line 1787 "inst_util.m"
            {
#line 1787 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__inst_merge_2_6_p_0(check_hlds__inst_util__InstA_7, check_hlds__inst_util__InstB_8, check_hlds__inst_util__MaybeType_9, &check_hlds__inst_util__Inst0_25, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_34_34, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35);
            }
#line 1779 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1779 "inst_util.m"
              {
#line 1790 "inst_util.m"
                {
#line 1790 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, &check_hlds__inst_util__InstTable2_27);
                }
#line 1791 "inst_util.m"
                {
#line 1791 "inst_util.m"
                  hlds__hlds_data__inst_table_get_merge_insts_2_p_0(check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__MergeInstTable2_28);
                }
#line 1792 "inst_util.m"
                {
#line 1792 "inst_util.m"
                  check_hlds__inst_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1792 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_36_36, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_25));
#line 1792 "inst_util.m"
                }
#line 1792 "inst_util.m"
                {
#line 1792 "inst_util.m"
                  hlds__hlds_data__det_update_merge_inst_4_p_0(check_hlds__inst_util__MergeInstInfo_20, check_hlds__inst_util__V_36_36, check_hlds__inst_util__MergeInstTable2_28, &check_hlds__inst_util__MergeInstTable3_29);
                }
#line 1794 "inst_util.m"
                {
#line 1794 "inst_util.m"
                  hlds__hlds_data__inst_table_set_merge_insts_3_p_0(check_hlds__inst_util__MergeInstTable3_29, check_hlds__inst_util__InstTable2_27, &check_hlds__inst_util__InstTable3_30);
                }
#line 1796 "inst_util.m"
                {
#line 1796 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable3_30, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32);
                }
#line 1796 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 1779 "inst_util.m"
              }
#line 1779 "inst_util.m"
          }
#line 1778 "inst_util.m"
        else
#line 1771 "inst_util.m"
          {
#line 1771 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeMergedInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeMergedInst_22, (MR_Integer) 0)));

#line 1774 "inst_util.m"
            if ((check_hlds__inst_util__MaybeMergedInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1776 "inst_util.m"
              {
#line 1776 "inst_util.m"
                check_hlds__inst_util__Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1776 "inst_util.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_25, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1776 "inst_util.m"
              }
#line 1774 "inst_util.m"
            else
#line 1773 "inst_util.m"
              check_hlds__inst_util__Inst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMergedInst_24, (MR_Integer) 0)));
#line 1771 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_31;
#line 1771 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1771 "inst_util.m"
          }
#line 1764 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 1764 "inst_util.m"
          {
#line 1799 "inst_util.m"
            {
#line 1799 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_25, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32, check_hlds__inst_util__MergeInstName_21);
            }
#line 1801 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 1800 "inst_util.m"
              {
#line 1800 "inst_util.m"
                MR_Word base;
#line 1800 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1800 "inst_util.m"
                *check_hlds__inst_util__Inst_10 = base;
#line 1800 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1800 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__MergeInstName_21));
#line 1800 "inst_util.m"
              }
#line 1801 "inst_util.m"
            else
#line 1802 "inst_util.m"
              *check_hlds__inst_util__Inst_10 = check_hlds__inst_util__Inst0_25;
#line 1801 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 1764 "inst_util.m"
          }
#line 1764 "inst_util.m"
      }
#line 1762 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 1762 "inst_util.m"
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
#line 1475 "inst_util.m"
  {
#line 1475 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1475 "inst_util.m"
    if ((check_hlds__inst_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1475 "inst_util.m"
      {
#line 1475 "inst_util.m"
        *check_hlds__inst_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1475 "inst_util.m"
        *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 1475 "inst_util.m"
      }
#line 1475 "inst_util.m"
    else
#line 1476 "inst_util.m"
      {
#line 1476 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1476 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1476 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst_10;
#line 1476 "inst_util.m"
        MR_Word check_hlds__inst_util__Insts_11;
#line 1476 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15;

#line 1477 "inst_util.m"
        {
#line 1477 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_4_p_0(check_hlds__inst_util__Inst0_8, &check_hlds__inst_util__Inst_10, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15);
        }
#line 1478 "inst_util.m"
        {
#line 1478 "inst_util.m"
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__inst_util__Insts0_9, &check_hlds__inst_util__Insts_11, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_15_15, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_4);
        }
#line 1476 "inst_util.m"
        {
#line 1476 "inst_util.m"
          MR_Word base;
#line 1476 "inst_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "inst_util.m"
          *check_hlds__inst_util__HeadVar__2_2 = base;
#line 1476 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_util__Inst_10));
#line 1476 "inst_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_util__Insts_11));
#line 1476 "inst_util.m"
        }
#line 1476 "inst_util.m"
      }
#line 1475 "inst_util.m"
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
#line 1622 "inst_util.m"
  {
#line 1622 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;

#line 1622 "inst_util.m"
#line 1622 "inst_util.m"
    switch (MR_tag((MR_Word) check_hlds__inst_util__Inst0_5)) {
#line 1622 "inst_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1622 "inst_util.m"
      case (MR_Integer) 0:
#line 1622 "inst_util.m"
        {
#line 1623 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1622 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1622 "inst_util.m"
        }
#line 1622 "inst_util.m"
        break;
#line 1622 "inst_util.m"
      case (MR_Integer) 1:
#line 1622 "inst_util.m"
        {
#line 1623 "inst_util.m"
          *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1622 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1622 "inst_util.m"
        }
#line 1622 "inst_util.m"
        break;
#line 1622 "inst_util.m"
      case (MR_Integer) 2:
#line 1625 "inst_util.m"
        {
#line 1625 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)));
#line 1625 "inst_util.m"
          MR_Word check_hlds__inst_util__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1625 "inst_util.m"
          MR_Word check_hlds__inst_util__Uniq_11 = ((&check_hlds__inst_util_vector_common_2[0 + check_hlds__inst_util__Uniq0_9]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1627 "inst_util.m"
          {
#line 1627 "inst_util.m"
            MR_Word base;
#line 1627 "inst_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1627 "inst_util.m"
            *check_hlds__inst_util__Inst_6 = base;
#line 1627 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__inst_util__Uniq_11));
#line 1627 "inst_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__inst_util__HOInstInfo_10));
#line 1627 "inst_util.m"
          }
#line 1625 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1625 "inst_util.m"
        }
#line 1622 "inst_util.m"
        break;
#line 1622 "inst_util.m"
      case (MR_Integer) 3:
#line 1622 "inst_util.m"
#line 1622 "inst_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 0)))) {
#line 1622 "inst_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1622 "inst_util.m"
          case (MR_Integer) 0:
#line 1629 "inst_util.m"
            {
#line 1629 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 3)));
#line 1629 "inst_util.m"
              MR_Word check_hlds__inst_util__BoundInsts_14;
#line 1629 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1629 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_51 = ((&check_hlds__inst_util_vector_common_2[5 + check_hlds__inst_util__Uniq0_50]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;
#line 1629 "inst_util.m"
              MR_Word check_hlds__inst_util___InstResults0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));

#line 1632 "inst_util.m"
              {
#line 1632 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(check_hlds__inst_util__BoundInsts0_13, &check_hlds__inst_util__BoundInsts_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1634 "inst_util.m"
              {
#line 1634 "inst_util.m"
                MR_Word base;
#line 1634 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1634 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1634 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1634 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_51));
#line 1634 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1634 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_util__BoundInsts_14));
#line 1634 "inst_util.m"
              }
#line 1629 "inst_util.m"
            }
#line 1622 "inst_util.m"
            break;
#line 1622 "inst_util.m"
          case (MR_Integer) 1:
#line 1636 "inst_util.m"
            {
#line 1636 "inst_util.m"
              MR_Word check_hlds__inst_util__PredInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1636 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1636 "inst_util.m"
              MR_Word check_hlds__inst_util__Uniq_53 = ((&check_hlds__inst_util_vector_common_2[10 + check_hlds__inst_util__Uniq0_52]))->check_hlds__inst_util__vector_common_type_2_0__vct_2_f_0;

#line 1638 "inst_util.m"
              {
#line 1638 "inst_util.m"
                MR_Word base;
#line 1638 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1638 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = base;
#line 1638 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1638 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__Uniq_53));
#line 1638 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__PredInst_15));
#line 1638 "inst_util.m"
              }
#line 1636 "inst_util.m"
              *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1636 "inst_util.m"
            }
#line 1622 "inst_util.m"
            break;
#line 1622 "inst_util.m"
          case (MR_Integer) 2:
#line 1640 "inst_util.m"
            {
#line 1641 "inst_util.m"
              {
#line 1641 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
#line 1641 "inst_util.m"
                return;
              }
#line 1640 "inst_util.m"
            }
#line 1622 "inst_util.m"
            break;
#line 1622 "inst_util.m"
          case (MR_Integer) 3:
#line 1643 "inst_util.m"
            {
#line 1643 "inst_util.m"
              MR_Word check_hlds__inst_util__InstVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1643 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 2)));
#line 1643 "inst_util.m"
              MR_Word check_hlds__inst_util__SubInst_19;

#line 1644 "inst_util.m"
              {
#line 1644 "inst_util.m"
                check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst0_18, &check_hlds__inst_util__SubInst_19, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1645 "inst_util.m"
              {
#line 1645 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__inst_util__SubInst_19, check_hlds__inst_util__SubInst0_18, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
              }
#line 1647 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1646 "inst_util.m"
                {
#line 1646 "inst_util.m"
                  MR_Word base;
#line 1646 "inst_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "inst_util.m"
                  *check_hlds__inst_util__Inst_6 = base;
#line 1646 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1646 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__InstVars_17));
#line 1646 "inst_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_util__SubInst_19));
#line 1646 "inst_util.m"
                }
#line 1647 "inst_util.m"
              else
#line 1648 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__SubInst_19;
#line 1643 "inst_util.m"
            }
#line 1622 "inst_util.m"
            break;
#line 1622 "inst_util.m"
          case (MR_Integer) 4:
#line 1654 "inst_util.m"
            {
#line 1654 "inst_util.m"
              MR_Word check_hlds__inst_util__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_5, (MR_Integer) 1)));
#line 1654 "inst_util.m"
              MR_Word check_hlds__inst_util__InstTable0_23;
#line 1654 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInstTable0_24;
#line 1654 "inst_util.m"
              MR_Word check_hlds__inst_util__MaybeMaybeInst_25;
#line 1654 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInstTable1_26;
#line 1654 "inst_util.m"
              MR_Word check_hlds__inst_util__MostlyUniqInst_28;

#line 1656 "inst_util.m"
              {
#line 1656 "inst_util.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__InstTable0_23);
              }
#line 1657 "inst_util.m"
              {
#line 1657 "inst_util.m"
                hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__MostlyUniqInstTable0_24);
              }
#line 1658 "inst_util.m"
              {
#line 1658 "inst_util.m"
                hlds__hlds_data__search_insert_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, &check_hlds__inst_util__MaybeMaybeInst_25, check_hlds__inst_util__MostlyUniqInstTable0_24, &check_hlds__inst_util__MostlyUniqInstTable1_26);
              }
#line 1668 "inst_util.m"
              if ((check_hlds__inst_util__MaybeMaybeInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1669 "inst_util.m"
                {
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable1_29;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst1_30;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable2_31;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable2_32;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__MostlyUniqInstTable_33;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__InstTable_34;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__V_39_39;
#line 1669 "inst_util.m"
                  MR_Word check_hlds__inst_util__SubInst0_54;

#line 1672 "inst_util.m"
                  {
#line 1672 "inst_util.m"
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable1_26, check_hlds__inst_util__InstTable0_23, &check_hlds__inst_util__InstTable1_29);
                  }
#line 1674 "inst_util.m"
                  {
#line 1674 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37);
                  }
#line 1678 "inst_util.m"
                  {
#line 1678 "inst_util.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__InstName_22, &check_hlds__inst_util__SubInst0_54);
                  }
#line 1679 "inst_util.m"
                  {
#line 1679 "inst_util.m"
                    check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__inst_util__SubInst0_54, &check_hlds__inst_util__SubInst1_30);
                  }
#line 1680 "inst_util.m"
                  {
#line 1680 "inst_util.m"
                    check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__inst_util__SubInst1_30, &check_hlds__inst_util__MostlyUniqInst_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38);
                  }
#line 1685 "inst_util.m"
                  {
#line 1685 "inst_util.m"
                    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__inst_util__InstTable2_31);
                  }
#line 1686 "inst_util.m"
                  {
#line 1686 "inst_util.m"
                    hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__MostlyUniqInstTable2_32);
                  }
#line 1687 "inst_util.m"
                  {
#line 1687 "inst_util.m"
                    check_hlds__inst_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1687 "inst_util.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_39_39, 0) = ((MR_Box) (check_hlds__inst_util__MostlyUniqInst_28));
#line 1687 "inst_util.m"
                  }
#line 1687 "inst_util.m"
                  {
#line 1687 "inst_util.m"
                    hlds__hlds_data__det_update_mostly_uniq_inst_4_p_0(check_hlds__inst_util__InstName_22, check_hlds__inst_util__V_39_39, check_hlds__inst_util__MostlyUniqInstTable2_32, &check_hlds__inst_util__MostlyUniqInstTable_33);
                  }
#line 1689 "inst_util.m"
                  {
#line 1689 "inst_util.m"
                    hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(check_hlds__inst_util__MostlyUniqInstTable_33, check_hlds__inst_util__InstTable2_31, &check_hlds__inst_util__InstTable_34);
                  }
#line 1691 "inst_util.m"
                  {
#line 1691 "inst_util.m"
                    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_34, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36);
                  }
#line 1669 "inst_util.m"
                }
#line 1668 "inst_util.m"
              else
#line 1661 "inst_util.m"
                {
#line 1661 "inst_util.m"
                  MR_Word check_hlds__inst_util__MaybeInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_25, (MR_Integer) 0)));

#line 1664 "inst_util.m"
                  if ((check_hlds__inst_util__MaybeInst_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1666 "inst_util.m"
                    check_hlds__inst_util__MostlyUniqInst_28 = check_hlds__inst_util__Inst0_5;
#line 1664 "inst_util.m"
                  else
#line 1663 "inst_util.m"
                    check_hlds__inst_util__MostlyUniqInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_27, (MR_Integer) 0)));
#line 1661 "inst_util.m"
                  *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_35;
#line 1661 "inst_util.m"
                }
#line 1695 "inst_util.m"
              {
#line 1695 "inst_util.m"
                check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__MostlyUniqInst_28, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_36, check_hlds__inst_util__InstName_22);
              }
#line 1698 "inst_util.m"
              if (check_hlds__inst_util__succeeded)
#line 1697 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__Inst0_5;
#line 1698 "inst_util.m"
              else
#line 1699 "inst_util.m"
                *check_hlds__inst_util__Inst_6 = check_hlds__inst_util__MostlyUniqInst_28;
#line 1654 "inst_util.m"
            }
#line 1622 "inst_util.m"
            break;
#line 1622 "inst_util.m"
          case (MR_Integer) 5:
#line 1651 "inst_util.m"
            {
#line 1652 "inst_util.m"
              {
#line 1652 "inst_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_util", (MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
#line 1652 "inst_util.m"
                return;
              }
#line 1651 "inst_util.m"
            }
#line 1622 "inst_util.m"
            break;
#line 1622 "inst_util.m"
        }
#line 1622 "inst_util.m"
        break;
#line 1622 "inst_util.m"
    }
#line 1622 "inst_util.m"
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
#line 735 "inst_util.m"
  {
#line 735 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 735 "inst_util.m"
    MR_Word check_hlds__inst_util__InstA_22;

#line 736 "inst_util.m"
    {
#line 736 "inst_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__InstA0_13, &check_hlds__inst_util__InstA_22);
    }
#line 737 "inst_util.m"
    {
#line 737 "inst_util.m"
      check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_2_11_p_0(check_hlds__inst_util__Live_12, check_hlds__inst_util__InstA_22, check_hlds__inst_util__ConsIdB_14, check_hlds__inst_util__ArgInstsB_15, check_hlds__inst_util__ArgLives_16, check_hlds__inst_util__Real_17, check_hlds__inst_util__Type_18, check_hlds__inst_util__Inst_19, check_hlds__inst_util__Detism_20, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_23, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_24);
    }
#line 735 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 735 "inst_util.m"
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
#line 203 "inst_util.m"
  {
#line 203 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded;
#line 203 "inst_util.m"
    MR_Word check_hlds__inst_util__InstTable0_16;
#line 203 "inst_util.m"
    MR_Word check_hlds__inst_util__UnifyInstTable0_17;

#line 205 "inst_util.m"
    {
#line 205 "inst_util.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__InstTable0_16);
    }
#line 206 "inst_util.m"
    {
#line 206 "inst_util.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__UnifyInstTable0_17);
    }
#line 225 "inst_util.m"
    check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "inst_util.m"
    if (!(check_hlds__inst_util__succeeded))
#line 226 "inst_util.m"
      check_hlds__inst_util__succeeded = (check_hlds__inst_util__InstB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 229 "inst_util.m"
      {
#line 229 "inst_util.m"
        check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, check_hlds__inst_util__Inst_13, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
      }
#line 231 "inst_util.m"
    else
#line 232 "inst_util.m"
      {
#line 232 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstInfo_18;
#line 232 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstName_19;
#line 232 "inst_util.m"
        MR_Word check_hlds__inst_util__MaybeMaybeInst_20;
#line 232 "inst_util.m"
        MR_Word check_hlds__inst_util__UnifyInstTable1_21;
#line 232 "inst_util.m"
        MR_Word check_hlds__inst_util__Inst0_23;

#line 232 "inst_util.m"
        {
#line 232 "inst_util.m"
          check_hlds__inst_util__UnifyInstInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 232 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 232 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 232 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 232 "inst_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_util__UnifyInstInfo_18, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 232 "inst_util.m"
        }
#line 233 "inst_util.m"
        {
#line 233 "inst_util.m"
          check_hlds__inst_util__UnifyInstName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 233 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 0) = ((MR_Box) (check_hlds__inst_util__Live_9));
#line 233 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 1) = ((MR_Box) (check_hlds__inst_util__Real_12));
#line 233 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 2) = ((MR_Box) (check_hlds__inst_util__InstA_10));
#line 233 "inst_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_util__UnifyInstName_19, 3) = ((MR_Box) (check_hlds__inst_util__InstB_11));
#line 233 "inst_util.m"
        }
#line 234 "inst_util.m"
        {
#line 234 "inst_util.m"
          hlds__hlds_data__search_insert_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, &check_hlds__inst_util__MaybeMaybeInst_20, check_hlds__inst_util__UnifyInstTable0_17, &check_hlds__inst_util__UnifyInstTable1_21);
        }
#line 250 "inst_util.m"
        if ((check_hlds__inst_util__MaybeMaybeInst_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "inst_util.m"
          {
#line 251 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable1_24;
#line 251 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable2_25;
#line 251 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable2_26;
#line 251 "inst_util.m"
            MR_Word check_hlds__inst_util__UnifyInstTable_27;
#line 251 "inst_util.m"
            MR_Word check_hlds__inst_util__InstTable_28;
#line 251 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32;
#line 251 "inst_util.m"
            MR_Word check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33;
#line 251 "inst_util.m"
            MR_Word check_hlds__inst_util__V_34_34;

#line 254 "inst_util.m"
            {
#line 254 "inst_util.m"
              hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable1_21, check_hlds__inst_util__InstTable0_16, &check_hlds__inst_util__InstTable1_24);
            }
#line 256 "inst_util.m"
            {
#line 256 "inst_util.m"
              hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable1_24, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32);
            }
#line 258 "inst_util.m"
            {
#line 258 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_2_8_p_0(check_hlds__inst_util__Live_9, check_hlds__inst_util__InstA_10, check_hlds__inst_util__InstB_11, check_hlds__inst_util__Real_12, &check_hlds__inst_util__Inst0_23, check_hlds__inst_util__Detism_14, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_32_32, &check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 251 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 251 "inst_util.m"
              {
#line 262 "inst_util.m"
                {
#line 262 "inst_util.m"
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, &check_hlds__inst_util__InstTable2_25);
                }
#line 263 "inst_util.m"
                {
#line 263 "inst_util.m"
                  hlds__hlds_data__inst_table_get_unify_insts_2_p_0(check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__UnifyInstTable2_26);
                }
#line 264 "inst_util.m"
                {
#line 264 "inst_util.m"
                  check_hlds__inst_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 0) = ((MR_Box) (check_hlds__inst_util__Inst0_23));
#line 264 "inst_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_util__V_34_34, 1) = ((MR_Box) (*check_hlds__inst_util__Detism_14));
#line 264 "inst_util.m"
                }
#line 264 "inst_util.m"
                {
#line 264 "inst_util.m"
                  hlds__hlds_data__det_update_unify_inst_4_p_0(check_hlds__inst_util__UnifyInstInfo_18, check_hlds__inst_util__V_34_34, check_hlds__inst_util__UnifyInstTable2_26, &check_hlds__inst_util__UnifyInstTable_27);
                }
#line 266 "inst_util.m"
                {
#line 266 "inst_util.m"
                  hlds__hlds_data__inst_table_set_unify_insts_3_p_0(check_hlds__inst_util__UnifyInstTable_27, check_hlds__inst_util__InstTable2_25, &check_hlds__inst_util__InstTable_28);
                }
#line 267 "inst_util.m"
                {
#line 267 "inst_util.m"
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_util__InstTable_28, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_33_33, check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30);
                }
#line 267 "inst_util.m"
                check_hlds__inst_util__succeeded = MR_TRUE;
#line 251 "inst_util.m"
              }
#line 251 "inst_util.m"
          }
#line 250 "inst_util.m"
        else
#line 237 "inst_util.m"
          {
#line 237 "inst_util.m"
            MR_Word check_hlds__inst_util__MaybeInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeMaybeInst_20, (MR_Integer) 0)));

#line 240 "inst_util.m"
            if ((check_hlds__inst_util__MaybeInst_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "inst_util.m"
              {
#line 242 "inst_util.m"
                {
#line 242 "inst_util.m"
                  check_hlds__inst_util__Inst0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 242 "inst_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_util__Inst0_23, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 242 "inst_util.m"
                }
#line 248 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = (MR_Integer) 0;
#line 241 "inst_util.m"
              }
#line 240 "inst_util.m"
            else
#line 239 "inst_util.m"
              {
#line 239 "inst_util.m"
                check_hlds__inst_util__Inst0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 0)));
#line 239 "inst_util.m"
                *check_hlds__inst_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_util__MaybeInst_22, (MR_Integer) 1)));
#line 239 "inst_util.m"
              }
#line 237 "inst_util.m"
            *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30 = check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_0_29;
#line 237 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 237 "inst_util.m"
          }
#line 232 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 232 "inst_util.m"
          {
#line 270 "inst_util.m"
            {
#line 270 "inst_util.m"
              check_hlds__inst_util__succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(check_hlds__inst_util__Inst0_23, *check_hlds__inst_util__STATE_VARIABLE_ModuleInfo_30, check_hlds__inst_util__UnifyInstName_19);
            }
#line 272 "inst_util.m"
            if (check_hlds__inst_util__succeeded)
#line 271 "inst_util.m"
              {
#line 271 "inst_util.m"
                MR_Word base;
#line 271 "inst_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "inst_util.m"
                *check_hlds__inst_util__Inst_13 = base;
#line 271 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 271 "inst_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_util__UnifyInstName_19));
#line 271 "inst_util.m"
              }
#line 272 "inst_util.m"
            else
#line 273 "inst_util.m"
              *check_hlds__inst_util__Inst_13 = check_hlds__inst_util__Inst0_23;
#line 272 "inst_util.m"
            check_hlds__inst_util__succeeded = MR_TRUE;
#line 232 "inst_util.m"
          }
#line 232 "inst_util.m"
      }
#line 203 "inst_util.m"
    return check_hlds__inst_util__succeeded;
#line 203 "inst_util.m"
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
#line 195 "inst_util.m"
  {
#line 195 "inst_util.m"
    MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 195 "inst_util.m"
    MR_Word check_hlds__inst_util__InstName_6;

#line 192 "inst_util.m"
    if (check_hlds__inst_util__succeeded)
#line 192 "inst_util.m"
      {
#line 192 "inst_util.m"
        check_hlds__inst_util__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 1)));
#line 193 "inst_util.m"
        {
#line 193 "inst_util.m"
          MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_10_10;

#line 193 "inst_util.m"
          {
#line 193 "inst_util.m"
            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_6, &check_hlds__inst_util__STATE_VARIABLE_Inst_10_10);
          }
#line 194 "inst_util.m"
          {
#line 194 "inst_util.m"
            check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__STATE_VARIABLE_Inst_10_10, check_hlds__inst_util__STATE_VARIABLE_Inst_9);
          }
#line 193 "inst_util.m"
        }
#line 192 "inst_util.m"
      }
#line 192 "inst_util.m"
    else
#line 197 "inst_util.m"
      {
#line 197 "inst_util.m"
        MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_12_12;
#line 195 "inst_util.m"
        MR_Word check_hlds__inst_util__V_7_7;

#line 195 "inst_util.m"
        check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 195 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 195 "inst_util.m"
          {
#line 195 "inst_util.m"
            check_hlds__inst_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 1)));
#line 195 "inst_util.m"
            check_hlds__inst_util__STATE_VARIABLE_Inst_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_8, (MR_Integer) 2)));
#line 196 "inst_util.m"
            {
#line 196 "inst_util.m"
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__STATE_VARIABLE_Inst_12_12, check_hlds__inst_util__STATE_VARIABLE_Inst_9);
            }
#line 195 "inst_util.m"
          }
#line 195 "inst_util.m"
        else
#line 197 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_Inst_9 = check_hlds__inst_util__STATE_VARIABLE_Inst_0_8;
#line 197 "inst_util.m"
      }
#line 195 "inst_util.m"
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
#line 187 "inst_util.m"
  while (MR_TRUE)
#line 187 "inst_util.m"
    {
#line 187 "inst_util.m"
      /* tailcall optimized into a loop */
#line 187 "inst_util.m"
      {
#line 187 "inst_util.m"
        MR_bool check_hlds__inst_util__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_util__STATE_VARIABLE_Inst_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 187 "inst_util.m"
        MR_Word check_hlds__inst_util__InstName_6;

#line 184 "inst_util.m"
        if (check_hlds__inst_util__succeeded)
#line 184 "inst_util.m"
          {
#line 184 "inst_util.m"
            check_hlds__inst_util__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_util__STATE_VARIABLE_Inst_0_7, (MR_Integer) 1)));
#line 185 "inst_util.m"
            {
#line 185 "inst_util.m"
              MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_9_9;

#line 185 "inst_util.m"
              {
#line 185 "inst_util.m"
                check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_util__ModuleInfo_4, check_hlds__inst_util__InstName_6, &check_hlds__inst_util__STATE_VARIABLE_Inst_9_9);
              }
#line 186 "inst_util.m"
              /* direct tailcall eliminated */
#line 186 "inst_util.m"
              {
#line 186 "inst_util.m"
                MR_Word check_hlds__inst_util__STATE_VARIABLE_Inst_0__tmp_copy_7 = check_hlds__inst_util__STATE_VARIABLE_Inst_9_9;

#line 186 "inst_util.m"
                check_hlds__inst_util__STATE_VARIABLE_Inst_0_7 = check_hlds__inst_util__STATE_VARIABLE_Inst_0__tmp_copy_7;
#line 186 "inst_util.m"
              }
#line 186 "inst_util.m"
              continue;
#line 185 "inst_util.m"
            }
#line 184 "inst_util.m"
          }
#line 184 "inst_util.m"
        else
#line 187 "inst_util.m"
          *check_hlds__inst_util__STATE_VARIABLE_Inst_8 = check_hlds__inst_util__STATE_VARIABLE_Inst_0_7;
#line 187 "inst_util.m"
      }
#line 187 "inst_util.m"
      break;
#line 187 "inst_util.m"
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
