/*
** Automatically generated from `inst_test.m'
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


/* :- module check_hlds.inst_test. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_test__init
ENDINIT
*/

#include "check_hlds.inst_test.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.delay_info.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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




#line 141 "check_hlds.inst_test.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 144 "check_hlds.inst_test.c"
static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0_10001(
#line 147 "check_hlds.inst_test.c"
  MR_Box check_hlds__inst_test__wrapper_arg_1,
#line 149 "check_hlds.inst_test.c"
  MR_Box check_hlds__inst_test__wrapper_arg_2);

#line 152 "check_hlds.inst_test.c"
static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0_10001(
#line 155 "check_hlds.inst_test.c"
  MR_Box * check_hlds__inst_test__wrapper_arg_1,
#line 157 "check_hlds.inst_test.c"
  MR_Box check_hlds__inst_test__wrapper_arg_2,
#line 159 "check_hlds.inst_test.c"
  MR_Box check_hlds__inst_test__wrapper_arg_3);

#line 1188 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0(
#line 1188 "inst_test.m"
  MR_Word * check_hlds__inst_test__HeadVar__1_1,
#line 1188 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1188 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__3_3);

#line 1188 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0(
#line 1188 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1188 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2);

#line 1284 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(
#line 1284 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1284 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1284 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__3_3,
#line 1284 "inst_test.m"
  MR_Word * check_hlds__inst_test__HeadVar__4_4,
#line 1284 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5,
#line 1284 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_6);

#line 1264 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(
#line 1264 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1264 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1264 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__3_3,
#line 1264 "inst_test.m"
  MR_Word * check_hlds__inst_test__HeadVar__4_4,
#line 1264 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5,
#line 1264 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_6);

#line 1190 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(
#line 1190 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_7,
#line 1190 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_8,
#line 1190 "inst_test.m"
  MR_Word check_hlds__inst_test__InstName_9,
#line 1190 "inst_test.m"
  MR_Word * check_hlds__inst_test__Contains_10,
#line 1190 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34,
#line 1190 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_35);

#line 1146 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(
#line 1146 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1146 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1146 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1146 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 1133 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(
#line 1133 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1133 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1133 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1133 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 1120 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(
#line 1120 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1120 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1120 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1120 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 1107 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_4_p_0(
#line 1107 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1107 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1107 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1107 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 1094 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(
#line 1094 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1094 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1094 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1094 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 1075 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(
#line 1075 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1075 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1075 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 1075 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4,
#line 1075 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_5);

#line 1067 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(
#line 1067 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1067 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1067 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3);

#line 1043 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(
#line 1043 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1043 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1043 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1043 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 1026 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(
#line 1026 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1026 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1026 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1026 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 1010 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(
#line 1010 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1010 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1010 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1010 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 994 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(
#line 994 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 994 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 994 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 994 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 978 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(
#line 978 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 978 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 978 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 978 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

#line 969 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(
#line 969 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 969 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2);

#line 955 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(
#line 955 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 955 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_2,
#line 955 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 955 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4,
#line 955 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_5);

#line 943 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(
#line 943 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 943 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_2,
#line 943 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3);

#line 914 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(
#line 914 "inst_test.m"
  MR_Word check_hlds__inst_test__InstResults_6,
#line 914 "inst_test.m"
  MR_Word check_hlds__inst_test__BoundInsts_7,
#line 914 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_8,
#line 914 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16,
#line 914 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_17);

#line 863 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__InstResults_7,
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__BoundInsts_8,
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_9,
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_10,
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18,
#line 863 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_19);

#line 631 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(
#line 631 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 631 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 631 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29,
#line 631 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_30);

#line 573 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(
#line 573 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 573 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 573 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26,
#line 573 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_27);

#line 513 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(
#line 513 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 513 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 513 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28,
#line 513 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_29);

#line 461 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_4_p_0(
#line 461 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 461 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 461 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27,
#line 461 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_28);

#line 416 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(
#line 416 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 416 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 416 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23,
#line 416 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_24);

#line 367 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(
#line 367 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_6,
#line 367 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_7,
#line 367 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_8,
#line 367 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25,
#line 367 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_26);

#line 311 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__record_inst_is_ground_2_p_0(
#line 311 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_1,
#line 311 "inst_test.m"
  MR_Word check_hlds__inst_test__IsGround_2);

#line 285 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__lookup_inst_is_ground_3_p_0(
#line 285 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_1,
#line 285 "inst_test.m"
  MR_Word * check_hlds__inst_test__Found_2,
#line 285 "inst_test.m"
  MR_Word * check_hlds__inst_test__IsGround_3);


static /* final */ const MR_Box check_hlds__inst_test_scalar_common_1[2][2];




static /* final */ const MR_Box check_hlds__inst_test_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.inst_test.mh"
#include "mdbcomp.rtti_access.mh"



#line 555 "check_hlds.inst_test.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 563 "check_hlds.inst_test.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_test__check_hlds__inst_test__type_ctor_info_inst_names_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_test____Unify____inst_names_0_0_10001)),
  ((MR_Box) (check_hlds__inst_test____Compare____inst_names_0_0_10001)),
  (MR_String) "check_hlds.inst_test",
  (MR_String) "inst_names",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 580 "check_hlds.inst_test.c"
static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0_10001(
#line 583 "check_hlds.inst_test.c"
  MR_Box check_hlds__inst_test__wrapper_arg_1,
#line 585 "check_hlds.inst_test.c"
  MR_Box check_hlds__inst_test__wrapper_arg_2)
#line 587 "check_hlds.inst_test.c"
{
#line 589 "check_hlds.inst_test.c"
  {
#line 591 "check_hlds.inst_test.c"
    MR_bool check_hlds__inst_test__succeeded;

#line 594 "check_hlds.inst_test.c"
    {
#line 596 "check_hlds.inst_test.c"
      check_hlds__inst_test__succeeded = check_hlds__inst_test____Unify____inst_names_0_0(((MR_Word) check_hlds__inst_test__wrapper_arg_1), ((MR_Word) check_hlds__inst_test__wrapper_arg_2));
    }
#line 599 "check_hlds.inst_test.c"
    return check_hlds__inst_test__succeeded;
#line 601 "check_hlds.inst_test.c"
  }
#line 603 "check_hlds.inst_test.c"
}

#line 606 "check_hlds.inst_test.c"
static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0_10001(
#line 609 "check_hlds.inst_test.c"
  MR_Box * check_hlds__inst_test__wrapper_arg_1,
#line 611 "check_hlds.inst_test.c"
  MR_Box check_hlds__inst_test__wrapper_arg_2,
#line 613 "check_hlds.inst_test.c"
  MR_Box check_hlds__inst_test__wrapper_arg_3)
#line 615 "check_hlds.inst_test.c"
{
#line 617 "check_hlds.inst_test.c"
  {
#line 619 "check_hlds.inst_test.c"
    MR_Word check_hlds__inst_test__conv0_HeadVar__1_1;

#line 622 "check_hlds.inst_test.c"
    {
#line 624 "check_hlds.inst_test.c"
      check_hlds__inst_test____Compare____inst_names_0_0(&check_hlds__inst_test__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_test__wrapper_arg_2), ((MR_Word) check_hlds__inst_test__wrapper_arg_3));
    }
#line 627 "check_hlds.inst_test.c"
    *check_hlds__inst_test__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_test__conv0_HeadVar__1_1));
#line 629 "check_hlds.inst_test.c"
  }
#line 631 "check_hlds.inst_test.c"
}

#line 1188 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0(
#line 1188 "inst_test.m"
  MR_Word * check_hlds__inst_test__HeadVar__1_1,
#line 1188 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1188 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__3_3)
#line 1188 "inst_test.m"
{
#line 1188 "inst_test.m"
  {
#line 1188 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 1188 "inst_test.m"
    MR_Word check_hlds__inst_test__Cast_HeadVar1_4 = check_hlds__inst_test__HeadVar__2_2;
#line 1188 "inst_test.m"
    MR_Word check_hlds__inst_test__Cast_HeadVar2_5 = check_hlds__inst_test__HeadVar__3_3;

#line 1188 "inst_test.m"
    {
#line 1188 "inst_test.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_test_scalar_common_1[1], check_hlds__inst_test__HeadVar__1_1, ((MR_Box) (check_hlds__inst_test__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_test__Cast_HeadVar2_5)));
    }
#line 1188 "inst_test.m"
  }
#line 1188 "inst_test.m"
}

#line 1188 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0(
#line 1188 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1188 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2)
#line 1188 "inst_test.m"
{
#line 1188 "inst_test.m"
  {
#line 1188 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 1188 "inst_test.m"
    MR_Word check_hlds__inst_test__Cast_HeadVar1_3 = check_hlds__inst_test__HeadVar__1_1;
#line 1188 "inst_test.m"
    MR_Word check_hlds__inst_test__Cast_HeadVar2_4 = check_hlds__inst_test__HeadVar__2_2;

#line 1188 "inst_test.m"
    {
#line 1188 "inst_test.m"
      check_hlds__inst_test__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_test_scalar_common_1[1], ((MR_Box) (check_hlds__inst_test__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_test__Cast_HeadVar2_4)));
    }
#line 1188 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 1188 "inst_test.m"
  }
#line 1188 "inst_test.m"
}

#line 1284 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(
#line 1284 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1284 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1284 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__3_3,
#line 1284 "inst_test.m"
  MR_Word * check_hlds__inst_test__HeadVar__4_4,
#line 1284 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5,
#line 1284 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_6)
#line 1284 "inst_test.m"
{
#line 1287 "inst_test.m"
  while (MR_TRUE)
#line 1287 "inst_test.m"
    {
#line 1287 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1287 "inst_test.m"
      {
#line 1287 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1287 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "inst_test.m"
          {
#line 1287 "inst_test.m"
            *check_hlds__inst_test__HeadVar__4_4 = (MR_Integer) 0;
#line 1287 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_6 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5;
#line 1287 "inst_test.m"
          }
#line 1287 "inst_test.m"
        else
#line 1289 "inst_test.m"
          {
#line 1289 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1289 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1289 "inst_test.m"
            MR_Word check_hlds__inst_test__Contains1_18;
#line 1289 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_21_21;

#line 1290 "inst_test.m"
            {
#line 1290 "inst_test.m"
              check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(check_hlds__inst_test__Inst_12, check_hlds__inst_test__HeadVar__2_2, check_hlds__inst_test__HeadVar__3_3, &check_hlds__inst_test__Contains1_18, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5, &check_hlds__inst_test__STATE_VARIABLE_Expansions_21_21);
            }
#line 1295 "inst_test.m"
#line 1295 "inst_test.m"
            switch (check_hlds__inst_test__Contains1_18) {
#line 1295 "inst_test.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1295 "inst_test.m"
              case (MR_Integer) 0:
#line 1297 "inst_test.m"
                {
#line 1297 "inst_test.m"
                  /* direct tailcall eliminated */
#line 1297 "inst_test.m"
                  {
#line 1297 "inst_test.m"
                    MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_13;
#line 1297 "inst_test.m"
                    MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_21_21;

#line 1297 "inst_test.m"
                    check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_5;
#line 1297 "inst_test.m"
                    check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1297 "inst_test.m"
                  }
#line 1297 "inst_test.m"
                  continue;
#line 1297 "inst_test.m"
                }
#line 1295 "inst_test.m"
                break;
#line 1295 "inst_test.m"
              case (MR_Integer) 1:
#line 1293 "inst_test.m"
                {
#line 1294 "inst_test.m"
                  *check_hlds__inst_test__HeadVar__4_4 = (MR_Integer) 1;
#line 1293 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_6 = check_hlds__inst_test__STATE_VARIABLE_Expansions_21_21;
#line 1293 "inst_test.m"
                }
#line 1295 "inst_test.m"
                break;
#line 1295 "inst_test.m"
            }
#line 1289 "inst_test.m"
          }
#line 1287 "inst_test.m"
      }
#line 1287 "inst_test.m"
      break;
#line 1287 "inst_test.m"
    }
#line 1284 "inst_test.m"
}

#line 1264 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(
#line 1264 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1264 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1264 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__3_3,
#line 1264 "inst_test.m"
  MR_Word * check_hlds__inst_test__HeadVar__4_4,
#line 1264 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5,
#line 1264 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_6)
#line 1264 "inst_test.m"
{
#line 1268 "inst_test.m"
  while (MR_TRUE)
#line 1268 "inst_test.m"
    {
#line 1268 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1268 "inst_test.m"
      {
#line 1268 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1268 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1268 "inst_test.m"
          {
#line 1269 "inst_test.m"
            *check_hlds__inst_test__HeadVar__4_4 = (MR_Integer) 0;
#line 1269 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_6 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5;
#line 1268 "inst_test.m"
          }
#line 1268 "inst_test.m"
        else
#line 1271 "inst_test.m"
          {
#line 1271 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1271 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1271 "inst_test.m"
            MR_Word check_hlds__inst_test__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_12, (MR_Integer) 1)));
#line 1271 "inst_test.m"
            MR_Word check_hlds__inst_test__Contains1_20;
#line 1271 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_23_23;
#line 1272 "inst_test.m"
            MR_Word check_hlds__inst_test___Functor_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_12, (MR_Integer) 0)));

#line 1273 "inst_test.m"
            {
#line 1273 "inst_test.m"
              check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(check_hlds__inst_test__ArgInsts_19, check_hlds__inst_test__HeadVar__2_2, check_hlds__inst_test__HeadVar__3_3, &check_hlds__inst_test__Contains1_20, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5, &check_hlds__inst_test__STATE_VARIABLE_Expansions_23_23);
            }
#line 1278 "inst_test.m"
#line 1278 "inst_test.m"
            switch (check_hlds__inst_test__Contains1_20) {
#line 1278 "inst_test.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1278 "inst_test.m"
              case (MR_Integer) 0:
#line 1280 "inst_test.m"
                {
#line 1280 "inst_test.m"
                  /* direct tailcall eliminated */
#line 1280 "inst_test.m"
                  {
#line 1280 "inst_test.m"
                    MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_13;
#line 1280 "inst_test.m"
                    MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_23_23;

#line 1280 "inst_test.m"
                    check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_5;
#line 1280 "inst_test.m"
                    check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1280 "inst_test.m"
                  }
#line 1280 "inst_test.m"
                  continue;
#line 1280 "inst_test.m"
                }
#line 1278 "inst_test.m"
                break;
#line 1278 "inst_test.m"
              case (MR_Integer) 1:
#line 1276 "inst_test.m"
                {
#line 1277 "inst_test.m"
                  *check_hlds__inst_test__HeadVar__4_4 = (MR_Integer) 1;
#line 1276 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_6 = check_hlds__inst_test__STATE_VARIABLE_Expansions_23_23;
#line 1276 "inst_test.m"
                }
#line 1278 "inst_test.m"
                break;
#line 1278 "inst_test.m"
            }
#line 1271 "inst_test.m"
          }
#line 1268 "inst_test.m"
      }
#line 1268 "inst_test.m"
      break;
#line 1268 "inst_test.m"
    }
#line 1264 "inst_test.m"
}

#line 1190 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(
#line 1190 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_7,
#line 1190 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_8,
#line 1190 "inst_test.m"
  MR_Word check_hlds__inst_test__InstName_9,
#line 1190 "inst_test.m"
  MR_Word * check_hlds__inst_test__Contains_10,
#line 1190 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34,
#line 1190 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_35)
#line 1190 "inst_test.m"
{
#line 1202 "inst_test.m"
  while (MR_TRUE)
#line 1202 "inst_test.m"
    {
#line 1202 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1202 "inst_test.m"
      {
#line 1202 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1202 "inst_test.m"
#line 1202 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_7)) {
#line 1202 "inst_test.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1202 "inst_test.m"
          case (MR_Integer) 0:
#line 1202 "inst_test.m"
            {
#line 1203 "inst_test.m"
              *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
#line 1202 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
#line 1202 "inst_test.m"
            }
#line 1202 "inst_test.m"
            break;
#line 1202 "inst_test.m"
          case (MR_Integer) 1:
#line 1202 "inst_test.m"
          case (MR_Integer) 2:
#line 1202 "inst_test.m"
            {
#line 1203 "inst_test.m"
              *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
#line 1202 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
#line 1202 "inst_test.m"
            }
#line 1202 "inst_test.m"
            break;
#line 1202 "inst_test.m"
          case (MR_Integer) 3:
#line 1202 "inst_test.m"
#line 1202 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 0)))) {
#line 1202 "inst_test.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1202 "inst_test.m"
              case (MR_Integer) 0:
#line 1223 "inst_test.m"
                {
#line 1223 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstResults_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 2)));
#line 1223 "inst_test.m"
                  MR_Word check_hlds__inst_test__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 3)));
#line 1223 "inst_test.m"
                  MR_Word check_hlds__inst_test___Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 1)));

#line 1239 "inst_test.m"
#line 1239 "inst_test.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_25)) {
#line 1239 "inst_test.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1239 "inst_test.m"
                    case (MR_Integer) 0:
#line 1239 "inst_test.m"
#line 1239 "inst_test.m"
                      switch (MR_unmkbody(check_hlds__inst_test__InstResults_25)) {
#line 1239 "inst_test.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1239 "inst_test.m"
                        case (MR_Integer) 0:
#line 1259 "inst_test.m"
                          {
#line 1259 "inst_test.m"
                            check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(check_hlds__inst_test__ArgInsts_26, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__InstName_9, check_hlds__inst_test__Contains_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34, check_hlds__inst_test__STATE_VARIABLE_Expansions_35);
                          }
#line 1239 "inst_test.m"
                          break;
#line 1239 "inst_test.m"
                        case (MR_Integer) 1:
#line 1237 "inst_test.m"
                          {
#line 1238 "inst_test.m"
                            *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
#line 1237 "inst_test.m"
                            *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
#line 1237 "inst_test.m"
                          }
#line 1239 "inst_test.m"
                          break;
#line 1239 "inst_test.m"
                      }
#line 1239 "inst_test.m"
                      break;
#line 1239 "inst_test.m"
                    case (MR_Integer) 1:
#line 1240 "inst_test.m"
                      {
#line 1240 "inst_test.m"
                        MR_Word check_hlds__inst_test__InstNamesResult_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 2)));
#line 1240 "inst_test.m"
                        MR_Word check_hlds__inst_test__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 0)));
#line 1240 "inst_test.m"
                        MR_Word check_hlds__inst_test__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 1)));
#line 1240 "inst_test.m"
                        MR_Word check_hlds__inst_test__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 3)));
#line 1240 "inst_test.m"
                        MR_Word check_hlds__inst_test__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 4)));
#line 1240 "inst_test.m"
                        MR_Word check_hlds__inst_test__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 5)));

#line 1252 "inst_test.m"
                        if ((check_hlds__inst_test__InstNamesResult_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1254 "inst_test.m"
                          {
#line 1254 "inst_test.m"
                            check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(check_hlds__inst_test__ArgInsts_26, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__InstName_9, check_hlds__inst_test__Contains_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34, check_hlds__inst_test__STATE_VARIABLE_Expansions_35);
                          }
#line 1252 "inst_test.m"
                        else
#line 1243 "inst_test.m"
                          {
#line 1243 "inst_test.m"
                            MR_Word check_hlds__inst_test__InstNameSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstNamesResult_29, (MR_Integer) 0)));

#line 1244 "inst_test.m"
                            {
#line 1244 "inst_test.m"
                              check_hlds__inst_test__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, check_hlds__inst_test__InstNameSet_33, ((MR_Box) (check_hlds__inst_test__InstName_9)));
                            }
#line 1249 "inst_test.m"
                            if (check_hlds__inst_test__succeeded)
#line 1247 "inst_test.m"
                              {
#line 1247 "inst_test.m"
                                check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(check_hlds__inst_test__ArgInsts_26, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__InstName_9, check_hlds__inst_test__Contains_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34, check_hlds__inst_test__STATE_VARIABLE_Expansions_35);
                              }
#line 1249 "inst_test.m"
                            else
#line 1250 "inst_test.m"
                              {
#line 1250 "inst_test.m"
                                *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
#line 1250 "inst_test.m"
                                *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
#line 1250 "inst_test.m"
                              }
#line 1243 "inst_test.m"
                          }
#line 1240 "inst_test.m"
                      }
#line 1239 "inst_test.m"
                      break;
#line 1239 "inst_test.m"
                  }
#line 1223 "inst_test.m"
                }
#line 1202 "inst_test.m"
                break;
#line 1202 "inst_test.m"
              case (MR_Integer) 1:
#line 1202 "inst_test.m"
              case (MR_Integer) 2:
#line 1202 "inst_test.m"
              case (MR_Integer) 5:
#line 1202 "inst_test.m"
                {
#line 1203 "inst_test.m"
                  *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
#line 1202 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
#line 1202 "inst_test.m"
                }
#line 1202 "inst_test.m"
                break;
#line 1202 "inst_test.m"
              case (MR_Integer) 3:
#line 1205 "inst_test.m"
                {
#line 1205 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 2)));
#line 1205 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 1)));

#line 1206 "inst_test.m"
                  /* direct tailcall eliminated */
#line 1206 "inst_test.m"
                  {
#line 1206 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_7 = check_hlds__inst_test__SubInst_21;

#line 1206 "inst_test.m"
                    check_hlds__inst_test__Inst_7 = check_hlds__inst_test__Inst__tmp_copy_7;
#line 1206 "inst_test.m"
                  }
#line 1206 "inst_test.m"
                  continue;
#line 1205 "inst_test.m"
                }
#line 1202 "inst_test.m"
                break;
#line 1202 "inst_test.m"
              case (MR_Integer) 4:
#line 1209 "inst_test.m"
                {
#line 1209 "inst_test.m"
                  MR_Word check_hlds__inst_test__ThisInstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 1)));

#line 1210 "inst_test.m"
                  {
#line 1210 "inst_test.m"
                    check_hlds__inst_test__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(check_hlds__inst_test__InstName_9, check_hlds__inst_test__ThisInstName_22);
                  }
#line 1212 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 1211 "inst_test.m"
                    {
#line 1211 "inst_test.m"
                      *check_hlds__inst_test__Contains_10 = (MR_Integer) 1;
#line 1211 "inst_test.m"
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
#line 1211 "inst_test.m"
                    }
#line 1212 "inst_test.m"
                  else
#line 1218 "inst_test.m"
                    {
#line 1218 "inst_test.m"
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_39_39;

#line 1213 "inst_test.m"
                      {
#line 1213 "inst_test.m"
                        check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_test__ThisInstName_22)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34, &check_hlds__inst_test__STATE_VARIABLE_Expansions_39_39);
                      }
#line 1218 "inst_test.m"
                      if (check_hlds__inst_test__succeeded)
#line 1214 "inst_test.m"
                        {
#line 1214 "inst_test.m"
                          MR_Word check_hlds__inst_test__ThisInst_23;
#line 1214 "inst_test.m"
                          MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_40_40;

#line 1214 "inst_test.m"
                          {
#line 1214 "inst_test.m"
                            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__ThisInstName_22, &check_hlds__inst_test__ThisInst_23);
                          }
#line 1215 "inst_test.m"
                          {
#line 1215 "inst_test.m"
                            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_test__ThisInstName_22)), check_hlds__inst_test__STATE_VARIABLE_Expansions_39_39, &check_hlds__inst_test__STATE_VARIABLE_Expansions_40_40);
                          }
#line 1216 "inst_test.m"
                          /* direct tailcall eliminated */
#line 1216 "inst_test.m"
                          {
#line 1216 "inst_test.m"
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_7 = check_hlds__inst_test__ThisInst_23;
#line 1216 "inst_test.m"
                            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_34 = check_hlds__inst_test__STATE_VARIABLE_Expansions_40_40;

#line 1216 "inst_test.m"
                            check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_34;
#line 1216 "inst_test.m"
                            check_hlds__inst_test__Inst_7 = check_hlds__inst_test__Inst__tmp_copy_7;
#line 1216 "inst_test.m"
                          }
#line 1216 "inst_test.m"
                          continue;
#line 1214 "inst_test.m"
                        }
#line 1218 "inst_test.m"
                      else
#line 1219 "inst_test.m"
                        {
#line 1219 "inst_test.m"
                          *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
#line 1219 "inst_test.m"
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
#line 1219 "inst_test.m"
                        }
#line 1218 "inst_test.m"
                    }
#line 1209 "inst_test.m"
                }
#line 1202 "inst_test.m"
                break;
#line 1202 "inst_test.m"
            }
#line 1202 "inst_test.m"
            break;
#line 1202 "inst_test.m"
        }
#line 1202 "inst_test.m"
      }
#line 1202 "inst_test.m"
      break;
#line 1202 "inst_test.m"
    }
#line 1190 "inst_test.m"
}

#line 1146 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(
#line 1146 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1146 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1146 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1146 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 1146 "inst_test.m"
{
#line 1149 "inst_test.m"
  while (MR_TRUE)
#line 1149 "inst_test.m"
    {
#line 1149 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1149 "inst_test.m"
      {
#line 1149 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1149 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "inst_test.m"
          {
#line 1149 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 1149 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1149 "inst_test.m"
          }
#line 1149 "inst_test.m"
        else
#line 1150 "inst_test.m"
          {
#line 1150 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1150 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1150 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1151 "inst_test.m"
            {
#line 1151 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
#line 1150 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1152 "inst_test.m"
              {
#line 1152 "inst_test.m"
                /* direct tailcall eliminated */
#line 1152 "inst_test.m"
                {
#line 1152 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
#line 1152 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1152 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1152 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1152 "inst_test.m"
                }
#line 1152 "inst_test.m"
                continue;
#line 1152 "inst_test.m"
              }
#line 1150 "inst_test.m"
          }
#line 1149 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1149 "inst_test.m"
      }
#line 1149 "inst_test.m"
      break;
#line 1149 "inst_test.m"
    }
#line 1146 "inst_test.m"
}

#line 1133 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(
#line 1133 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1133 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1133 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1133 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 1133 "inst_test.m"
{
#line 1136 "inst_test.m"
  while (MR_TRUE)
#line 1136 "inst_test.m"
    {
#line 1136 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1136 "inst_test.m"
      {
#line 1136 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1136 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "inst_test.m"
          {
#line 1136 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 1136 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1136 "inst_test.m"
          }
#line 1136 "inst_test.m"
        else
#line 1137 "inst_test.m"
          {
#line 1137 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1137 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1137 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1138 "inst_test.m"
            {
#line 1138 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
#line 1137 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1139 "inst_test.m"
              {
#line 1139 "inst_test.m"
                /* direct tailcall eliminated */
#line 1139 "inst_test.m"
                {
#line 1139 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
#line 1139 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1139 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1139 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1139 "inst_test.m"
                }
#line 1139 "inst_test.m"
                continue;
#line 1139 "inst_test.m"
              }
#line 1137 "inst_test.m"
          }
#line 1136 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1136 "inst_test.m"
      }
#line 1136 "inst_test.m"
      break;
#line 1136 "inst_test.m"
    }
#line 1133 "inst_test.m"
}

#line 1120 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(
#line 1120 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1120 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1120 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1120 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 1120 "inst_test.m"
{
#line 1123 "inst_test.m"
  while (MR_TRUE)
#line 1123 "inst_test.m"
    {
#line 1123 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1123 "inst_test.m"
      {
#line 1123 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1123 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1123 "inst_test.m"
          {
#line 1123 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 1123 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1123 "inst_test.m"
          }
#line 1123 "inst_test.m"
        else
#line 1124 "inst_test.m"
          {
#line 1124 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1124 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1124 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1125 "inst_test.m"
            {
#line 1125 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
#line 1124 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1126 "inst_test.m"
              {
#line 1126 "inst_test.m"
                /* direct tailcall eliminated */
#line 1126 "inst_test.m"
                {
#line 1126 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
#line 1126 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1126 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1126 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1126 "inst_test.m"
                }
#line 1126 "inst_test.m"
                continue;
#line 1126 "inst_test.m"
              }
#line 1124 "inst_test.m"
          }
#line 1123 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1123 "inst_test.m"
      }
#line 1123 "inst_test.m"
      break;
#line 1123 "inst_test.m"
    }
#line 1120 "inst_test.m"
}

#line 1107 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_4_p_0(
#line 1107 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1107 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1107 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1107 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 1107 "inst_test.m"
{
#line 1110 "inst_test.m"
  while (MR_TRUE)
#line 1110 "inst_test.m"
    {
#line 1110 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1110 "inst_test.m"
      {
#line 1110 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1110 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "inst_test.m"
          {
#line 1110 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 1110 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1110 "inst_test.m"
          }
#line 1110 "inst_test.m"
        else
#line 1111 "inst_test.m"
          {
#line 1111 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1111 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1111 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1112 "inst_test.m"
            {
#line 1112 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
#line 1111 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1113 "inst_test.m"
              {
#line 1113 "inst_test.m"
                /* direct tailcall eliminated */
#line 1113 "inst_test.m"
                {
#line 1113 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
#line 1113 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1113 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1113 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1113 "inst_test.m"
                }
#line 1113 "inst_test.m"
                continue;
#line 1113 "inst_test.m"
              }
#line 1111 "inst_test.m"
          }
#line 1110 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1110 "inst_test.m"
      }
#line 1110 "inst_test.m"
      break;
#line 1110 "inst_test.m"
    }
#line 1107 "inst_test.m"
}

#line 1094 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(
#line 1094 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1094 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1094 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1094 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 1094 "inst_test.m"
{
#line 1097 "inst_test.m"
  while (MR_TRUE)
#line 1097 "inst_test.m"
    {
#line 1097 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1097 "inst_test.m"
      {
#line 1097 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1097 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1097 "inst_test.m"
          {
#line 1097 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 1097 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1097 "inst_test.m"
          }
#line 1097 "inst_test.m"
        else
#line 1098 "inst_test.m"
          {
#line 1098 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1098 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1099 "inst_test.m"
            {
#line 1099 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
#line 1098 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1100 "inst_test.m"
              {
#line 1100 "inst_test.m"
                /* direct tailcall eliminated */
#line 1100 "inst_test.m"
                {
#line 1100 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
#line 1100 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

#line 1100 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1100 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1100 "inst_test.m"
                }
#line 1100 "inst_test.m"
                continue;
#line 1100 "inst_test.m"
              }
#line 1098 "inst_test.m"
          }
#line 1097 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1097 "inst_test.m"
      }
#line 1097 "inst_test.m"
      break;
#line 1097 "inst_test.m"
    }
#line 1094 "inst_test.m"
}

#line 1075 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(
#line 1075 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1075 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1075 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 1075 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4,
#line 1075 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_5)
#line 1075 "inst_test.m"
{
#line 1079 "inst_test.m"
  while (MR_TRUE)
#line 1079 "inst_test.m"
    {
#line 1079 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1079 "inst_test.m"
      {
#line 1079 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1079 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "inst_test.m"
          {
#line 1079 "inst_test.m"
            if ((check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4;
#line 1079 "inst_test.m"
            else
#line 1080 "inst_test.m"
              {
#line 1081 "inst_test.m"
                {
#line 1081 "inst_test.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
                }
#line 1080 "inst_test.m"
              }
#line 1079 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1079 "inst_test.m"
          }
#line 1079 "inst_test.m"
        else
#line 1079 "inst_test.m"
          {
#line 1079 "inst_test.m"
            MR_Word check_hlds__inst_test__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1079 "inst_test.m"
            MR_Word check_hlds__inst_test__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));

#line 1079 "inst_test.m"
            if ((check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1082 "inst_test.m"
              {
#line 1083 "inst_test.m"
                {
#line 1083 "inst_test.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
                }
#line 1082 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 1082 "inst_test.m"
              }
#line 1079 "inst_test.m"
            else
#line 1085 "inst_test.m"
              {
#line 1085 "inst_test.m"
                MR_Word check_hlds__inst_test__MaybeType_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 0)));
#line 1085 "inst_test.m"
                MR_Word check_hlds__inst_test__MaybeTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 1)));
#line 1085 "inst_test.m"
                MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36;
#line 350 "inst_test.m"
                MR_Word check_hlds__inst_test__V_46_46;
#line 350 "inst_test.m"
                MR_Word check_hlds__inst_test__V_47_47;

#line 350 "inst_test.m"
                check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__V_39_39)) == (MR_mktag((MR_Integer) 2)));
#line 350 "inst_test.m"
                if (check_hlds__inst_test__succeeded)
#line 350 "inst_test.m"
                  {
#line 350 "inst_test.m"
                    check_hlds__inst_test__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__V_39_39, (MR_Integer) 0)));
#line 350 "inst_test.m"
                    check_hlds__inst_test__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__V_39_39, (MR_Integer) 1)));
#line 351 "inst_test.m"
                    {
#line 351 "inst_test.m"
                      check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4, ((MR_Box) (check_hlds__inst_test__V_39_39)));
                    }
#line 353 "inst_test.m"
                    if (check_hlds__inst_test__succeeded)
#line 353 "inst_test.m"
                      {
#line 353 "inst_test.m"
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4;
#line 353 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_TRUE;
#line 353 "inst_test.m"
                      }
#line 353 "inst_test.m"
                    else
#line 354 "inst_test.m"
                      {
#line 354 "inst_test.m"
                        check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_30, check_hlds__inst_test__V_39_39, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36);
                      }
#line 350 "inst_test.m"
                  }
#line 350 "inst_test.m"
                else
#line 361 "inst_test.m"
                  {
#line 361 "inst_test.m"
                    MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_49;

#line 358 "inst_test.m"
                    {
#line 358 "inst_test.m"
                      check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__V_39_39)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_49);
                    }
#line 361 "inst_test.m"
                    if (check_hlds__inst_test__succeeded)
#line 360 "inst_test.m"
                      {
#line 360 "inst_test.m"
                        check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_30, check_hlds__inst_test__V_39_39, check_hlds__inst_test__STATE_VARIABLE_Expansions_15_49, &check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36);
                      }
#line 361 "inst_test.m"
                    else
#line 361 "inst_test.m"
                      {
#line 361 "inst_test.m"
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4;
#line 361 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_TRUE;
#line 361 "inst_test.m"
                      }
#line 361 "inst_test.m"
                  }
#line 1085 "inst_test.m"
                if (check_hlds__inst_test__succeeded)
#line 1087 "inst_test.m"
                  {
#line 1087 "inst_test.m"
                    /* direct tailcall eliminated */
#line 1087 "inst_test.m"
                    {
#line 1087 "inst_test.m"
                      MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__V_38_38;
#line 1087 "inst_test.m"
                      MR_Word check_hlds__inst_test__HeadVar__2__tmp_copy_2 = check_hlds__inst_test__MaybeTypes_31;
#line 1087 "inst_test.m"
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36;

#line 1087 "inst_test.m"
                      check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 1087 "inst_test.m"
                      check_hlds__inst_test__HeadVar__2_2 = check_hlds__inst_test__HeadVar__2__tmp_copy_2;
#line 1087 "inst_test.m"
                      check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1087 "inst_test.m"
                    }
#line 1087 "inst_test.m"
                    continue;
#line 1087 "inst_test.m"
                  }
#line 1085 "inst_test.m"
              }
#line 1079 "inst_test.m"
          }
#line 1079 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1079 "inst_test.m"
      }
#line 1079 "inst_test.m"
      break;
#line 1079 "inst_test.m"
    }
#line 1075 "inst_test.m"
}

#line 1067 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(
#line 1067 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1067 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 1067 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3)
#line 1067 "inst_test.m"
{
#line 1070 "inst_test.m"
  while (MR_TRUE)
#line 1070 "inst_test.m"
    {
#line 1070 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1070 "inst_test.m"
      {
#line 1070 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1070 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1070 "inst_test.m"
          check_hlds__inst_test__succeeded = (check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1070 "inst_test.m"
        else
#line 1071 "inst_test.m"
          {
#line 1071 "inst_test.m"
            MR_Word check_hlds__inst_test__TypeCtorInfo_9_15;
#line 1071 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1071 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1071 "inst_test.m"
            MR_Word check_hlds__inst_test__MaybeType_7;
#line 1071 "inst_test.m"
            MR_Word check_hlds__inst_test__MaybeTypes_8;
#line 1071 "inst_test.m"
            MR_Word check_hlds__inst_test__Expansions0_13;
#line 350 "inst_test.m"
            MR_Word check_hlds__inst_test__V_22_22;
#line 350 "inst_test.m"
            MR_Word check_hlds__inst_test__V_23_23;

#line 1071 "inst_test.m"
            check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1071 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1071 "inst_test.m"
              {
#line 1071 "inst_test.m"
                check_hlds__inst_test__MaybeType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 0)));
#line 1071 "inst_test.m"
                check_hlds__inst_test__MaybeTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 1)));
#line 1924 "check_hlds.inst_test.c"
                check_hlds__inst_test__TypeCtorInfo_9_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 336 "inst_test.m"
                {
#line 336 "inst_test.m"
                  check_hlds__inst_test__Expansions0_13 = mercury__set_tree234__init_0_f_0(check_hlds__inst_test__TypeCtorInfo_9_15);
                }
#line 350 "inst_test.m"
                check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__Inst_5)) == (MR_mktag((MR_Integer) 2)));
#line 350 "inst_test.m"
                if (check_hlds__inst_test__succeeded)
#line 350 "inst_test.m"
                  {
#line 350 "inst_test.m"
                    check_hlds__inst_test__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_5, (MR_Integer) 0)));
#line 350 "inst_test.m"
                    check_hlds__inst_test__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_5, (MR_Integer) 1)));
#line 351 "inst_test.m"
                    {
#line 351 "inst_test.m"
                      check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__Expansions0_13, ((MR_Box) (check_hlds__inst_test__Inst_5)));
                    }
#line 353 "inst_test.m"
                    if (check_hlds__inst_test__succeeded)
#line 353 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 353 "inst_test.m"
                    else
#line 354 "inst_test.m"
                      {
#line 354 "inst_test.m"
                        MR_Word check_hlds__inst_test___Expansions_29;

#line 354 "inst_test.m"
                        {
#line 354 "inst_test.m"
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__Inst_5, check_hlds__inst_test__Expansions0_13, &check_hlds__inst_test___Expansions_29);
                        }
#line 354 "inst_test.m"
                      }
#line 350 "inst_test.m"
                  }
#line 350 "inst_test.m"
                else
#line 361 "inst_test.m"
                  {
#line 361 "inst_test.m"
                    MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_25;

#line 358 "inst_test.m"
                    {
#line 358 "inst_test.m"
                      check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_5)), check_hlds__inst_test__Expansions0_13, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_25);
                    }
#line 361 "inst_test.m"
                    if (check_hlds__inst_test__succeeded)
#line 360 "inst_test.m"
                      {
#line 360 "inst_test.m"
                        MR_Word check_hlds__inst_test___Expansions_30;

#line 360 "inst_test.m"
                        {
#line 360 "inst_test.m"
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__Inst_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_15_25, &check_hlds__inst_test___Expansions_30);
                        }
#line 360 "inst_test.m"
                      }
#line 361 "inst_test.m"
                    else
#line 361 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 361 "inst_test.m"
                  }
#line 1071 "inst_test.m"
                if (check_hlds__inst_test__succeeded)
#line 1073 "inst_test.m"
                  {
#line 1073 "inst_test.m"
                    /* direct tailcall eliminated */
#line 1073 "inst_test.m"
                    {
#line 1073 "inst_test.m"
                      MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_6;
#line 1073 "inst_test.m"
                      MR_Word check_hlds__inst_test__HeadVar__2__tmp_copy_2 = check_hlds__inst_test__MaybeTypes_8;

#line 1073 "inst_test.m"
                      check_hlds__inst_test__HeadVar__2_2 = check_hlds__inst_test__HeadVar__2__tmp_copy_2;
#line 1073 "inst_test.m"
                      check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1073 "inst_test.m"
                    }
#line 1073 "inst_test.m"
                    continue;
#line 1073 "inst_test.m"
                  }
#line 1071 "inst_test.m"
              }
#line 1071 "inst_test.m"
          }
#line 1070 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1070 "inst_test.m"
      }
#line 1070 "inst_test.m"
      break;
#line 1070 "inst_test.m"
    }
#line 1067 "inst_test.m"
}

#line 1043 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(
#line 1043 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1043 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1043 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1043 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 1043 "inst_test.m"
{
#line 1046 "inst_test.m"
  while (MR_TRUE)
#line 1046 "inst_test.m"
    {
#line 1046 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1046 "inst_test.m"
      {
#line 1046 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1046 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1046 "inst_test.m"
          {
#line 1046 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 1046 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1046 "inst_test.m"
          }
#line 1046 "inst_test.m"
        else
#line 1048 "inst_test.m"
          {
#line 1048 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1048 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1048 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
#line 1048 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
#line 1049 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

#line 1050 "inst_test.m"
            {
#line 1050 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
#line 1048 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1051 "inst_test.m"
              {
#line 1051 "inst_test.m"
                /* direct tailcall eliminated */
#line 1051 "inst_test.m"
                {
#line 1051 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
#line 1051 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

#line 1051 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1051 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1051 "inst_test.m"
                }
#line 1051 "inst_test.m"
                continue;
#line 1051 "inst_test.m"
              }
#line 1048 "inst_test.m"
          }
#line 1046 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1046 "inst_test.m"
      }
#line 1046 "inst_test.m"
      break;
#line 1046 "inst_test.m"
    }
#line 1043 "inst_test.m"
}

#line 1026 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(
#line 1026 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1026 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1026 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1026 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 1026 "inst_test.m"
{
#line 1029 "inst_test.m"
  while (MR_TRUE)
#line 1029 "inst_test.m"
    {
#line 1029 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1029 "inst_test.m"
      {
#line 1029 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1029 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1029 "inst_test.m"
          {
#line 1029 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 1029 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1029 "inst_test.m"
          }
#line 1029 "inst_test.m"
        else
#line 1031 "inst_test.m"
          {
#line 1031 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1031 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1031 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
#line 1031 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
#line 1032 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

#line 1033 "inst_test.m"
            {
#line 1033 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
#line 1031 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1034 "inst_test.m"
              {
#line 1034 "inst_test.m"
                /* direct tailcall eliminated */
#line 1034 "inst_test.m"
                {
#line 1034 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
#line 1034 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

#line 1034 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1034 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1034 "inst_test.m"
                }
#line 1034 "inst_test.m"
                continue;
#line 1034 "inst_test.m"
              }
#line 1031 "inst_test.m"
          }
#line 1029 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1029 "inst_test.m"
      }
#line 1029 "inst_test.m"
      break;
#line 1029 "inst_test.m"
    }
#line 1026 "inst_test.m"
}

#line 1010 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(
#line 1010 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 1010 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 1010 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 1010 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 1010 "inst_test.m"
{
#line 1013 "inst_test.m"
  while (MR_TRUE)
#line 1013 "inst_test.m"
    {
#line 1013 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1013 "inst_test.m"
      {
#line 1013 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1013 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1013 "inst_test.m"
          {
#line 1013 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 1013 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1013 "inst_test.m"
          }
#line 1013 "inst_test.m"
        else
#line 1015 "inst_test.m"
          {
#line 1015 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1015 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1015 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
#line 1015 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
#line 1016 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

#line 1017 "inst_test.m"
            {
#line 1017 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
#line 1015 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1018 "inst_test.m"
              {
#line 1018 "inst_test.m"
                /* direct tailcall eliminated */
#line 1018 "inst_test.m"
                {
#line 1018 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
#line 1018 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

#line 1018 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1018 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1018 "inst_test.m"
                }
#line 1018 "inst_test.m"
                continue;
#line 1018 "inst_test.m"
              }
#line 1015 "inst_test.m"
          }
#line 1013 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1013 "inst_test.m"
      }
#line 1013 "inst_test.m"
      break;
#line 1013 "inst_test.m"
    }
#line 1010 "inst_test.m"
}

#line 994 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(
#line 994 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 994 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 994 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 994 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 994 "inst_test.m"
{
#line 997 "inst_test.m"
  while (MR_TRUE)
#line 997 "inst_test.m"
    {
#line 997 "inst_test.m"
      /* tailcall optimized into a loop */
#line 997 "inst_test.m"
      {
#line 997 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 997 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 997 "inst_test.m"
          {
#line 997 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 997 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 997 "inst_test.m"
          }
#line 997 "inst_test.m"
        else
#line 999 "inst_test.m"
          {
#line 999 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 999 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 999 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
#line 999 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
#line 1000 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

#line 1001 "inst_test.m"
            {
#line 1001 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_unique_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
#line 999 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1002 "inst_test.m"
              {
#line 1002 "inst_test.m"
                /* direct tailcall eliminated */
#line 1002 "inst_test.m"
                {
#line 1002 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
#line 1002 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

#line 1002 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 1002 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1002 "inst_test.m"
                }
#line 1002 "inst_test.m"
                continue;
#line 1002 "inst_test.m"
              }
#line 999 "inst_test.m"
          }
#line 997 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 997 "inst_test.m"
      }
#line 997 "inst_test.m"
      break;
#line 997 "inst_test.m"
    }
#line 994 "inst_test.m"
}

#line 978 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(
#line 978 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 978 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2,
#line 978 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
#line 978 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
#line 978 "inst_test.m"
{
#line 981 "inst_test.m"
  while (MR_TRUE)
#line 981 "inst_test.m"
    {
#line 981 "inst_test.m"
      /* tailcall optimized into a loop */
#line 981 "inst_test.m"
      {
#line 981 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 981 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "inst_test.m"
          {
#line 981 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
#line 981 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 981 "inst_test.m"
          }
#line 981 "inst_test.m"
        else
#line 983 "inst_test.m"
          {
#line 983 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 983 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 983 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
#line 983 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
#line 984 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

#line 985 "inst_test.m"
            {
#line 985 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
#line 983 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 986 "inst_test.m"
              {
#line 986 "inst_test.m"
                /* direct tailcall eliminated */
#line 986 "inst_test.m"
                {
#line 986 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
#line 986 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

#line 986 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 986 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 986 "inst_test.m"
                }
#line 986 "inst_test.m"
                continue;
#line 986 "inst_test.m"
              }
#line 983 "inst_test.m"
          }
#line 981 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 981 "inst_test.m"
      }
#line 981 "inst_test.m"
      break;
#line 981 "inst_test.m"
    }
#line 978 "inst_test.m"
}

#line 969 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(
#line 969 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 969 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 969 "inst_test.m"
{
#line 972 "inst_test.m"
  while (MR_TRUE)
#line 972 "inst_test.m"
    {
#line 972 "inst_test.m"
      /* tailcall optimized into a loop */
#line 972 "inst_test.m"
      {
#line 972 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 972 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 972 "inst_test.m"
        else
#line 973 "inst_test.m"
          {
#line 973 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 973 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 973 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
#line 974 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

#line 975 "inst_test.m"
            {
#line 975 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
#line 973 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 976 "inst_test.m"
              {
#line 976 "inst_test.m"
                /* direct tailcall eliminated */
#line 976 "inst_test.m"
                {
#line 976 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

#line 976 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 976 "inst_test.m"
                }
#line 976 "inst_test.m"
                continue;
#line 976 "inst_test.m"
              }
#line 973 "inst_test.m"
          }
#line 972 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 972 "inst_test.m"
      }
#line 972 "inst_test.m"
      break;
#line 972 "inst_test.m"
    }
#line 969 "inst_test.m"
}

#line 955 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(
#line 955 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 955 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_2,
#line 955 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 955 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4,
#line 955 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_5)
#line 955 "inst_test.m"
{
#line 959 "inst_test.m"
  while (MR_TRUE)
#line 959 "inst_test.m"
    {
#line 959 "inst_test.m"
      /* tailcall optimized into a loop */
#line 959 "inst_test.m"
      {
#line 959 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 959 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "inst_test.m"
          {
#line 959 "inst_test.m"
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4;
#line 959 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 959 "inst_test.m"
          }
#line 959 "inst_test.m"
        else
#line 961 "inst_test.m"
          {
#line 961 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 961 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 961 "inst_test.m"
            MR_Word check_hlds__inst_test__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_11, (MR_Integer) 0)));
#line 961 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_11, (MR_Integer) 1)));
#line 961 "inst_test.m"
            MR_Word check_hlds__inst_test__MaybeTypes_18;
#line 961 "inst_test.m"
            MR_Integer check_hlds__inst_test__V_21_21;
#line 961 "inst_test.m"
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_22_22;

#line 964 "inst_test.m"
            {
#line 964 "inst_test.m"
              check_hlds__inst_test__V_21_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__Args_17);
            }
#line 963 "inst_test.m"
            {
#line 963 "inst_test.m"
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_2, check_hlds__inst_test__Name_16, check_hlds__inst_test__V_21_21, &check_hlds__inst_test__MaybeTypes_18);
            }
#line 965 "inst_test.m"
            {
#line 965 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_test__Args_17, check_hlds__inst_test__MaybeTypes_18, check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_test__STATE_VARIABLE_Expansions_22_22);
            }
#line 961 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 966 "inst_test.m"
              {
#line 966 "inst_test.m"
                /* direct tailcall eliminated */
#line 966 "inst_test.m"
                {
#line 966 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_12;
#line 966 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_22_22;

#line 966 "inst_test.m"
                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 966 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 966 "inst_test.m"
                }
#line 966 "inst_test.m"
                continue;
#line 966 "inst_test.m"
              }
#line 961 "inst_test.m"
          }
#line 959 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 959 "inst_test.m"
      }
#line 959 "inst_test.m"
      break;
#line 959 "inst_test.m"
    }
#line 955 "inst_test.m"
}

#line 943 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(
#line 943 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 943 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_2,
#line 943 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3)
#line 943 "inst_test.m"
{
#line 946 "inst_test.m"
  while (MR_TRUE)
#line 946 "inst_test.m"
    {
#line 946 "inst_test.m"
      /* tailcall optimized into a loop */
#line 946 "inst_test.m"
      {
#line 946 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 946 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 946 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 946 "inst_test.m"
        else
#line 948 "inst_test.m"
          {
#line 948 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 948 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 948 "inst_test.m"
            MR_Word check_hlds__inst_test__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_6, (MR_Integer) 0)));
#line 948 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_6, (MR_Integer) 1)));
#line 948 "inst_test.m"
            MR_Word check_hlds__inst_test__MaybeTypes_12;
#line 948 "inst_test.m"
            MR_Integer check_hlds__inst_test__V_13_13;

#line 951 "inst_test.m"
            {
#line 951 "inst_test.m"
              check_hlds__inst_test__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__Args_11);
            }
#line 950 "inst_test.m"
            {
#line 950 "inst_test.m"
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_2, check_hlds__inst_test__Name_10, check_hlds__inst_test__V_13_13, &check_hlds__inst_test__MaybeTypes_12);
            }
#line 952 "inst_test.m"
            {
#line 952 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__Args_11, check_hlds__inst_test__MaybeTypes_12, check_hlds__inst_test__ModuleInfo_3);
            }
#line 948 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 953 "inst_test.m"
              {
#line 953 "inst_test.m"
                /* direct tailcall eliminated */
#line 953 "inst_test.m"
                {
#line 953 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_7;

#line 953 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 953 "inst_test.m"
                }
#line 953 "inst_test.m"
                continue;
#line 953 "inst_test.m"
              }
#line 948 "inst_test.m"
          }
#line 946 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 946 "inst_test.m"
      }
#line 946 "inst_test.m"
      break;
#line 946 "inst_test.m"
    }
#line 943 "inst_test.m"
}

#line 914 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(
#line 914 "inst_test.m"
  MR_Word check_hlds__inst_test__InstResults_6,
#line 914 "inst_test.m"
  MR_Word check_hlds__inst_test__BoundInsts_7,
#line 914 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_8,
#line 914 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16,
#line 914 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_17)
#line 914 "inst_test.m"
{
#line 923 "inst_test.m"
  {
#line 923 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;

#line 923 "inst_test.m"
#line 923 "inst_test.m"
    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_6)) {
#line 923 "inst_test.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 923 "inst_test.m"
      case (MR_Integer) 0:
#line 923 "inst_test.m"
#line 923 "inst_test.m"
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_6)) {
#line 923 "inst_test.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 923 "inst_test.m"
          case (MR_Integer) 0:
#line 938 "inst_test.m"
            {
#line 938 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_test__BoundInsts_7, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16, check_hlds__inst_test__STATE_VARIABLE_Expansions_17);
            }
#line 923 "inst_test.m"
            break;
#line 923 "inst_test.m"
          case (MR_Integer) 1:
#line 922 "inst_test.m"
            {
#line 922 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_17 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16;
#line 922 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 922 "inst_test.m"
            }
#line 923 "inst_test.m"
            break;
#line 923 "inst_test.m"
        }
#line 923 "inst_test.m"
        break;
#line 923 "inst_test.m"
      case (MR_Integer) 1:
#line 924 "inst_test.m"
        {
#line 924 "inst_test.m"
          MR_Word check_hlds__inst_test__GroundnessResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 0)));
#line 924 "inst_test.m"
          MR_Word check_hlds__inst_test__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 1)));
#line 924 "inst_test.m"
          MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 2)));
#line 924 "inst_test.m"
          MR_Word check_hlds__inst_test__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 3)));
#line 924 "inst_test.m"
          MR_Word check_hlds__inst_test__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 4)));
#line 924 "inst_test.m"
          MR_Word check_hlds__inst_test__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 5)));

#line 928 "inst_test.m"
#line 928 "inst_test.m"
          switch (check_hlds__inst_test__GroundnessResult_10) {
#line 928 "inst_test.m"
            default:
#line 928 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_FALSE;
#line 928 "inst_test.m"
              break;
#line 928 "inst_test.m"
            case (MR_Integer) 2:
#line 933 "inst_test.m"
              {
#line 933 "inst_test.m"
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_test__BoundInsts_7, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16, check_hlds__inst_test__STATE_VARIABLE_Expansions_17);
              }
#line 928 "inst_test.m"
              break;
#line 928 "inst_test.m"
            case (MR_Integer) 1:
#line 927 "inst_test.m"
              {
#line 927 "inst_test.m"
                *check_hlds__inst_test__STATE_VARIABLE_Expansions_17 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16;
#line 927 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 927 "inst_test.m"
              }
#line 928 "inst_test.m"
              break;
#line 928 "inst_test.m"
          }
#line 924 "inst_test.m"
        }
#line 923 "inst_test.m"
        break;
#line 923 "inst_test.m"
    }
#line 923 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 923 "inst_test.m"
  }
#line 914 "inst_test.m"
}

#line 863 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__InstResults_7,
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__BoundInsts_8,
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_9,
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_10,
#line 863 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18,
#line 863 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_19)
#line 863 "inst_test.m"
{
#line 872 "inst_test.m"
  {
#line 872 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;

#line 872 "inst_test.m"
#line 872 "inst_test.m"
    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_7)) {
#line 872 "inst_test.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 872 "inst_test.m"
      case (MR_Integer) 0:
#line 872 "inst_test.m"
#line 872 "inst_test.m"
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_7)) {
#line 872 "inst_test.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 872 "inst_test.m"
          case (MR_Integer) 0:
#line 887 "inst_test.m"
            {
#line 887 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_test__BoundInsts_8, check_hlds__inst_test__MaybeType_9, check_hlds__inst_test__ModuleInfo_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18, check_hlds__inst_test__STATE_VARIABLE_Expansions_19);
            }
#line 872 "inst_test.m"
            break;
#line 872 "inst_test.m"
          case (MR_Integer) 1:
#line 871 "inst_test.m"
            {
#line 871 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_19 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18;
#line 871 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 871 "inst_test.m"
            }
#line 872 "inst_test.m"
            break;
#line 872 "inst_test.m"
        }
#line 872 "inst_test.m"
        break;
#line 872 "inst_test.m"
      case (MR_Integer) 1:
#line 873 "inst_test.m"
        {
#line 873 "inst_test.m"
          MR_Word check_hlds__inst_test__GroundnessResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 0)));
#line 873 "inst_test.m"
          MR_Word check_hlds__inst_test__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 1)));
#line 873 "inst_test.m"
          MR_Word check_hlds__inst_test__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 2)));
#line 873 "inst_test.m"
          MR_Word check_hlds__inst_test__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 3)));
#line 873 "inst_test.m"
          MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 4)));
#line 873 "inst_test.m"
          MR_Word check_hlds__inst_test__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 5)));

#line 877 "inst_test.m"
#line 877 "inst_test.m"
          switch (check_hlds__inst_test__GroundnessResult_12) {
#line 877 "inst_test.m"
            default:
#line 877 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_FALSE;
#line 877 "inst_test.m"
              break;
#line 877 "inst_test.m"
            case (MR_Integer) 2:
#line 882 "inst_test.m"
              {
#line 882 "inst_test.m"
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_test__BoundInsts_8, check_hlds__inst_test__MaybeType_9, check_hlds__inst_test__ModuleInfo_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18, check_hlds__inst_test__STATE_VARIABLE_Expansions_19);
              }
#line 877 "inst_test.m"
              break;
#line 877 "inst_test.m"
            case (MR_Integer) 1:
#line 876 "inst_test.m"
              {
#line 876 "inst_test.m"
                *check_hlds__inst_test__STATE_VARIABLE_Expansions_19 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18;
#line 876 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 876 "inst_test.m"
              }
#line 877 "inst_test.m"
              break;
#line 877 "inst_test.m"
          }
#line 873 "inst_test.m"
        }
#line 872 "inst_test.m"
        break;
#line 872 "inst_test.m"
    }
#line 872 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 872 "inst_test.m"
  }
#line 863 "inst_test.m"
}

#line 631 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(
#line 631 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 631 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 631 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29,
#line 631 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_30)
#line 631 "inst_test.m"
{
#line 645 "inst_test.m"
  while (MR_TRUE)
#line 645 "inst_test.m"
    {
#line 645 "inst_test.m"
      /* tailcall optimized into a loop */
#line 645 "inst_test.m"
      {
#line 645 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 645 "inst_test.m"
#line 645 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
#line 645 "inst_test.m"
          default:
#line 645 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 645 "inst_test.m"
            break;
#line 645 "inst_test.m"
          case (MR_Integer) 0:
#line 645 "inst_test.m"
#line 645 "inst_test.m"
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
#line 645 "inst_test.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 645 "inst_test.m"
              case (MR_Integer) 0:
#line 638 "inst_test.m"
                {
#line 638 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 638 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 638 "inst_test.m"
                }
#line 645 "inst_test.m"
                break;
#line 645 "inst_test.m"
              case (MR_Integer) 1:
#line 637 "inst_test.m"
                {
#line 637 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 637 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 637 "inst_test.m"
                }
#line 645 "inst_test.m"
                break;
#line 645 "inst_test.m"
            }
#line 645 "inst_test.m"
            break;
#line 645 "inst_test.m"
          case (MR_Integer) 1:
#line 639 "inst_test.m"
            {
#line 639 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 639 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 639 "inst_test.m"
            }
#line 645 "inst_test.m"
            break;
#line 645 "inst_test.m"
          case (MR_Integer) 2:
#line 645 "inst_test.m"
            {
#line 645 "inst_test.m"
              MR_Word check_hlds__inst_test__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 0)));
#line 642 "inst_test.m"
              MR_Word check_hlds__inst_test__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 645 "inst_test.m"
#line 645 "inst_test.m"
              switch (check_hlds__inst_test__V_44_44) {
#line 645 "inst_test.m"
                default:
#line 645 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_FALSE;
#line 645 "inst_test.m"
                  break;
#line 645 "inst_test.m"
                case (MR_Integer) 2:
#line 643 "inst_test.m"
                  {
#line 643 "inst_test.m"
                    *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 643 "inst_test.m"
                    check_hlds__inst_test__succeeded = MR_TRUE;
#line 643 "inst_test.m"
                  }
#line 645 "inst_test.m"
                  break;
#line 645 "inst_test.m"
                case (MR_Integer) 0:
#line 642 "inst_test.m"
                  {
#line 642 "inst_test.m"
                    *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 642 "inst_test.m"
                    check_hlds__inst_test__succeeded = MR_TRUE;
#line 642 "inst_test.m"
                  }
#line 645 "inst_test.m"
                  break;
#line 645 "inst_test.m"
              }
#line 645 "inst_test.m"
            }
#line 645 "inst_test.m"
            break;
#line 645 "inst_test.m"
          case (MR_Integer) 3:
#line 645 "inst_test.m"
#line 645 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
#line 645 "inst_test.m"
              default:
#line 645 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 645 "inst_test.m"
                break;
#line 645 "inst_test.m"
              case (MR_Integer) 0:
#line 646 "inst_test.m"
                {
#line 646 "inst_test.m"
                  MR_Word check_hlds__inst_test__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 646 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstResult_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 646 "inst_test.m"
                  MR_Word check_hlds__inst_test__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));

#line 648 "inst_test.m"
#line 648 "inst_test.m"
                  switch (check_hlds__inst_test__Uniq_13) {
#line 648 "inst_test.m"
                    default:
#line 648 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_FALSE;
#line 648 "inst_test.m"
                      break;
#line 648 "inst_test.m"
                    case (MR_Integer) 2:
#line 648 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 648 "inst_test.m"
                      break;
#line 648 "inst_test.m"
                    case (MR_Integer) 0:
#line 647 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 648 "inst_test.m"
                      break;
#line 648 "inst_test.m"
                  }
#line 646 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 652 "inst_test.m"
#line 652 "inst_test.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResult_14)) {
#line 652 "inst_test.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 652 "inst_test.m"
                      case (MR_Integer) 0:
#line 652 "inst_test.m"
#line 652 "inst_test.m"
                        switch (MR_unmkbody(check_hlds__inst_test__InstResult_14)) {
#line 652 "inst_test.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 652 "inst_test.m"
                          case (MR_Integer) 0:
#line 655 "inst_test.m"
                            {
#line 655 "inst_test.m"
                              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_15, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29, check_hlds__inst_test__STATE_VARIABLE_Expansions_30);
                            }
#line 652 "inst_test.m"
                            break;
#line 652 "inst_test.m"
                          case (MR_Integer) 1:
#line 651 "inst_test.m"
                            {
#line 651 "inst_test.m"
                              *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 651 "inst_test.m"
                              check_hlds__inst_test__succeeded = MR_TRUE;
#line 651 "inst_test.m"
                            }
#line 652 "inst_test.m"
                            break;
#line 652 "inst_test.m"
                        }
#line 652 "inst_test.m"
                        break;
#line 652 "inst_test.m"
                      case (MR_Integer) 1:
#line 655 "inst_test.m"
                        {
#line 655 "inst_test.m"
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_15, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29, check_hlds__inst_test__STATE_VARIABLE_Expansions_30);
                        }
#line 652 "inst_test.m"
                        break;
#line 652 "inst_test.m"
                    }
#line 646 "inst_test.m"
                }
#line 645 "inst_test.m"
                break;
#line 645 "inst_test.m"
              case (MR_Integer) 1:
#line 645 "inst_test.m"
                {
#line 645 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 640 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));

#line 645 "inst_test.m"
#line 645 "inst_test.m"
                  switch (check_hlds__inst_test__V_46_46) {
#line 645 "inst_test.m"
                    default:
#line 645 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_FALSE;
#line 645 "inst_test.m"
                      break;
#line 645 "inst_test.m"
                    case (MR_Integer) 2:
#line 641 "inst_test.m"
                      {
#line 641 "inst_test.m"
                        *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 641 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_TRUE;
#line 641 "inst_test.m"
                      }
#line 645 "inst_test.m"
                      break;
#line 645 "inst_test.m"
                    case (MR_Integer) 0:
#line 640 "inst_test.m"
                      {
#line 640 "inst_test.m"
                        *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 640 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_TRUE;
#line 640 "inst_test.m"
                      }
#line 645 "inst_test.m"
                      break;
#line 645 "inst_test.m"
                  }
#line 645 "inst_test.m"
                }
#line 645 "inst_test.m"
                break;
#line 645 "inst_test.m"
              case (MR_Integer) 2:
#line 660 "inst_test.m"
                {
#line 661 "inst_test.m"
                  {
#line 661 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_not_fully_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
#line 660 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 660 "inst_test.m"
                }
#line 645 "inst_test.m"
                break;
#line 645 "inst_test.m"
              case (MR_Integer) 3:
#line 663 "inst_test.m"
                {
#line 663 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 663 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 664 "inst_test.m"
                  /* direct tailcall eliminated */
#line 664 "inst_test.m"
                  {
#line 664 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_24;

#line 664 "inst_test.m"
                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 664 "inst_test.m"
                  }
#line 664 "inst_test.m"
                  continue;
#line 663 "inst_test.m"
                }
#line 645 "inst_test.m"
                break;
#line 645 "inst_test.m"
              case (MR_Integer) 4:
#line 666 "inst_test.m"
                {
#line 666 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 670 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_31_31;

#line 667 "inst_test.m"
                  {
#line 667 "inst_test.m"
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_test__STATE_VARIABLE_Expansions_31_31);
                  }
#line 670 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 668 "inst_test.m"
                    {
#line 668 "inst_test.m"
                      MR_Word check_hlds__inst_test__NextInst_26;

#line 668 "inst_test.m"
                      {
#line 668 "inst_test.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_25, &check_hlds__inst_test__NextInst_26);
                      }
#line 669 "inst_test.m"
                      /* direct tailcall eliminated */
#line 669 "inst_test.m"
                      {
#line 669 "inst_test.m"
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_26;
#line 669 "inst_test.m"
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_31_31;

#line 669 "inst_test.m"
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_29;
#line 669 "inst_test.m"
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 669 "inst_test.m"
                      }
#line 669 "inst_test.m"
                      continue;
#line 668 "inst_test.m"
                    }
#line 670 "inst_test.m"
                  else
#line 670 "inst_test.m"
                    {
#line 670 "inst_test.m"
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
#line 670 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 670 "inst_test.m"
                    }
#line 666 "inst_test.m"
                }
#line 645 "inst_test.m"
                break;
#line 645 "inst_test.m"
            }
#line 645 "inst_test.m"
            break;
#line 645 "inst_test.m"
        }
#line 645 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 645 "inst_test.m"
      }
#line 645 "inst_test.m"
      break;
#line 645 "inst_test.m"
    }
#line 631 "inst_test.m"
}

#line 573 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(
#line 573 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 573 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 573 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26,
#line 573 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_27)
#line 573 "inst_test.m"
{
#line 585 "inst_test.m"
  while (MR_TRUE)
#line 585 "inst_test.m"
    {
#line 585 "inst_test.m"
      /* tailcall optimized into a loop */
#line 585 "inst_test.m"
      {
#line 585 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 585 "inst_test.m"
#line 585 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
#line 585 "inst_test.m"
          default:
#line 585 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 585 "inst_test.m"
            break;
#line 585 "inst_test.m"
          case (MR_Integer) 0:
#line 585 "inst_test.m"
#line 585 "inst_test.m"
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
#line 585 "inst_test.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 585 "inst_test.m"
              case (MR_Integer) 0:
#line 580 "inst_test.m"
                {
#line 580 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
#line 580 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 580 "inst_test.m"
                }
#line 585 "inst_test.m"
                break;
#line 585 "inst_test.m"
              case (MR_Integer) 1:
#line 579 "inst_test.m"
                {
#line 579 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
#line 579 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 579 "inst_test.m"
                }
#line 585 "inst_test.m"
                break;
#line 585 "inst_test.m"
            }
#line 585 "inst_test.m"
            break;
#line 585 "inst_test.m"
          case (MR_Integer) 1:
#line 581 "inst_test.m"
            {
#line 581 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
#line 581 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 581 "inst_test.m"
            }
#line 585 "inst_test.m"
            break;
#line 585 "inst_test.m"
          case (MR_Integer) 2:
#line 582 "inst_test.m"
            {
#line 582 "inst_test.m"
              MR_Word check_hlds__inst_test__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 0)));
#line 582 "inst_test.m"
              MR_Word check_hlds__inst_test__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 582 "inst_test.m"
              check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_37_37 == (MR_Integer) 0);
#line 582 "inst_test.m"
              if (check_hlds__inst_test__succeeded)
#line 582 "inst_test.m"
                {
#line 582 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
#line 582 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 582 "inst_test.m"
                }
#line 582 "inst_test.m"
            }
#line 585 "inst_test.m"
            break;
#line 585 "inst_test.m"
          case (MR_Integer) 3:
#line 585 "inst_test.m"
#line 585 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
#line 585 "inst_test.m"
              default:
#line 585 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 585 "inst_test.m"
                break;
#line 585 "inst_test.m"
              case (MR_Integer) 0:
#line 586 "inst_test.m"
                {
#line 586 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 586 "inst_test.m"
                  MR_Word check_hlds__inst_test__BoundInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));
#line 586 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 586 "inst_test.m"
                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_34_34 == (MR_Integer) 0);
#line 586 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 589 "inst_test.m"
#line 589 "inst_test.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResult_11)) {
#line 589 "inst_test.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 589 "inst_test.m"
                      case (MR_Integer) 0:
#line 589 "inst_test.m"
#line 589 "inst_test.m"
                        switch (MR_unmkbody(check_hlds__inst_test__InstResult_11)) {
#line 589 "inst_test.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 589 "inst_test.m"
                          case (MR_Integer) 0:
#line 593 "inst_test.m"
                            {
#line 593 "inst_test.m"
                              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_12, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_test__STATE_VARIABLE_Expansions_27);
                            }
#line 589 "inst_test.m"
                            break;
#line 589 "inst_test.m"
                          case (MR_Integer) 1:
#line 588 "inst_test.m"
                            {
#line 588 "inst_test.m"
                              *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
#line 588 "inst_test.m"
                              check_hlds__inst_test__succeeded = MR_TRUE;
#line 588 "inst_test.m"
                            }
#line 589 "inst_test.m"
                            break;
#line 589 "inst_test.m"
                        }
#line 589 "inst_test.m"
                        break;
#line 589 "inst_test.m"
                      case (MR_Integer) 1:
#line 593 "inst_test.m"
                        {
#line 593 "inst_test.m"
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_12, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_test__STATE_VARIABLE_Expansions_27);
                        }
#line 589 "inst_test.m"
                        break;
#line 589 "inst_test.m"
                    }
#line 586 "inst_test.m"
                }
#line 585 "inst_test.m"
                break;
#line 585 "inst_test.m"
              case (MR_Integer) 1:
#line 583 "inst_test.m"
                {
#line 583 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 583 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));

#line 583 "inst_test.m"
                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_36_36 == (MR_Integer) 0);
#line 583 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 583 "inst_test.m"
                    {
#line 583 "inst_test.m"
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
#line 583 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 583 "inst_test.m"
                    }
#line 583 "inst_test.m"
                }
#line 585 "inst_test.m"
                break;
#line 585 "inst_test.m"
              case (MR_Integer) 2:
#line 597 "inst_test.m"
                {
#line 598 "inst_test.m"
                  {
#line 598 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_not_partly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
#line 597 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 597 "inst_test.m"
                }
#line 585 "inst_test.m"
                break;
#line 585 "inst_test.m"
              case (MR_Integer) 3:
#line 600 "inst_test.m"
                {
#line 600 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 600 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 601 "inst_test.m"
                  /* direct tailcall eliminated */
#line 601 "inst_test.m"
                  {
#line 601 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_21;

#line 601 "inst_test.m"
                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 601 "inst_test.m"
                  }
#line 601 "inst_test.m"
                  continue;
#line 600 "inst_test.m"
                }
#line 585 "inst_test.m"
                break;
#line 585 "inst_test.m"
              case (MR_Integer) 4:
#line 603 "inst_test.m"
                {
#line 603 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 607 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_28_28;

#line 604 "inst_test.m"
                  {
#line 604 "inst_test.m"
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_test__STATE_VARIABLE_Expansions_28_28);
                  }
#line 607 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 605 "inst_test.m"
                    {
#line 605 "inst_test.m"
                      MR_Word check_hlds__inst_test__NextInst_23;

#line 605 "inst_test.m"
                      {
#line 605 "inst_test.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_22, &check_hlds__inst_test__NextInst_23);
                      }
#line 606 "inst_test.m"
                      /* direct tailcall eliminated */
#line 606 "inst_test.m"
                      {
#line 606 "inst_test.m"
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_23;
#line 606 "inst_test.m"
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_28_28;

#line 606 "inst_test.m"
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_26;
#line 606 "inst_test.m"
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 606 "inst_test.m"
                      }
#line 606 "inst_test.m"
                      continue;
#line 605 "inst_test.m"
                    }
#line 607 "inst_test.m"
                  else
#line 607 "inst_test.m"
                    {
#line 607 "inst_test.m"
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
#line 607 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 607 "inst_test.m"
                    }
#line 603 "inst_test.m"
                }
#line 585 "inst_test.m"
                break;
#line 585 "inst_test.m"
            }
#line 585 "inst_test.m"
            break;
#line 585 "inst_test.m"
        }
#line 585 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 585 "inst_test.m"
      }
#line 585 "inst_test.m"
      break;
#line 585 "inst_test.m"
    }
#line 573 "inst_test.m"
}

#line 513 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(
#line 513 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 513 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 513 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28,
#line 513 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_29)
#line 513 "inst_test.m"
{
#line 527 "inst_test.m"
  while (MR_TRUE)
#line 527 "inst_test.m"
    {
#line 527 "inst_test.m"
      /* tailcall optimized into a loop */
#line 527 "inst_test.m"
      {
#line 527 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 527 "inst_test.m"
#line 527 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
#line 527 "inst_test.m"
          default:
#line 527 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 527 "inst_test.m"
            break;
#line 527 "inst_test.m"
          case (MR_Integer) 0:
#line 527 "inst_test.m"
#line 527 "inst_test.m"
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
#line 527 "inst_test.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 527 "inst_test.m"
              case (MR_Integer) 0:
#line 520 "inst_test.m"
                {
#line 520 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
#line 520 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 520 "inst_test.m"
                }
#line 527 "inst_test.m"
                break;
#line 527 "inst_test.m"
              case (MR_Integer) 1:
#line 519 "inst_test.m"
                {
#line 519 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
#line 519 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 519 "inst_test.m"
                }
#line 527 "inst_test.m"
                break;
#line 527 "inst_test.m"
            }
#line 527 "inst_test.m"
            break;
#line 527 "inst_test.m"
          case (MR_Integer) 1:
#line 521 "inst_test.m"
            {
#line 521 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
#line 521 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 521 "inst_test.m"
            }
#line 527 "inst_test.m"
            break;
#line 527 "inst_test.m"
          case (MR_Integer) 2:
#line 527 "inst_test.m"
            {
#line 527 "inst_test.m"
              MR_Word check_hlds__inst_test__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 0)));
#line 524 "inst_test.m"
              MR_Word check_hlds__inst_test__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 527 "inst_test.m"
#line 527 "inst_test.m"
              switch (check_hlds__inst_test__V_44_44) {
#line 527 "inst_test.m"
                default:
#line 527 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_FALSE;
#line 527 "inst_test.m"
                  break;
#line 527 "inst_test.m"
                case (MR_Integer) 2:
#line 525 "inst_test.m"
                  {
#line 525 "inst_test.m"
                    *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
#line 525 "inst_test.m"
                    check_hlds__inst_test__succeeded = MR_TRUE;
#line 525 "inst_test.m"
                  }
#line 527 "inst_test.m"
                  break;
#line 527 "inst_test.m"
                case (MR_Integer) 1:
#line 524 "inst_test.m"
                  {
#line 524 "inst_test.m"
                    *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
#line 524 "inst_test.m"
                    check_hlds__inst_test__succeeded = MR_TRUE;
#line 524 "inst_test.m"
                  }
#line 527 "inst_test.m"
                  break;
#line 527 "inst_test.m"
              }
#line 527 "inst_test.m"
            }
#line 527 "inst_test.m"
            break;
#line 527 "inst_test.m"
          case (MR_Integer) 3:
#line 527 "inst_test.m"
#line 527 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
#line 527 "inst_test.m"
              default:
#line 527 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 527 "inst_test.m"
                break;
#line 527 "inst_test.m"
              case (MR_Integer) 0:
#line 528 "inst_test.m"
                {
#line 528 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 528 "inst_test.m"
                  MR_Word check_hlds__inst_test__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));
#line 528 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 528 "inst_test.m"
                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_36_36 == (MR_Integer) 1);
#line 528 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 532 "inst_test.m"
                    {
#line 532 "inst_test.m"
                      if ((((check_hlds__inst_test__InstResults_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_test__InstResults_13)) == (MR_mktag((MR_Integer) 1))))))
#line 535 "inst_test.m"
                        {
#line 535 "inst_test.m"
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_14, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28, check_hlds__inst_test__STATE_VARIABLE_Expansions_29);
                        }
#line 532 "inst_test.m"
                      else
#line 532 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_FALSE;
#line 532 "inst_test.m"
                    }
#line 528 "inst_test.m"
                }
#line 527 "inst_test.m"
                break;
#line 527 "inst_test.m"
              case (MR_Integer) 1:
#line 527 "inst_test.m"
                {
#line 527 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 522 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));

#line 527 "inst_test.m"
#line 527 "inst_test.m"
                  switch (check_hlds__inst_test__V_46_46) {
#line 527 "inst_test.m"
                    default:
#line 527 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_FALSE;
#line 527 "inst_test.m"
                      break;
#line 527 "inst_test.m"
                    case (MR_Integer) 2:
#line 523 "inst_test.m"
                      {
#line 523 "inst_test.m"
                        *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
#line 523 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_TRUE;
#line 523 "inst_test.m"
                      }
#line 527 "inst_test.m"
                      break;
#line 527 "inst_test.m"
                    case (MR_Integer) 1:
#line 522 "inst_test.m"
                      {
#line 522 "inst_test.m"
                        *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
#line 522 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_TRUE;
#line 522 "inst_test.m"
                      }
#line 527 "inst_test.m"
                      break;
#line 527 "inst_test.m"
                  }
#line 527 "inst_test.m"
                }
#line 527 "inst_test.m"
                break;
#line 527 "inst_test.m"
              case (MR_Integer) 2:
#line 540 "inst_test.m"
                {
#line 541 "inst_test.m"
                  {
#line 541 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_mostly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
#line 540 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 540 "inst_test.m"
                }
#line 527 "inst_test.m"
                break;
#line 527 "inst_test.m"
              case (MR_Integer) 3:
#line 543 "inst_test.m"
                {
#line 543 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 543 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 544 "inst_test.m"
                  /* direct tailcall eliminated */
#line 544 "inst_test.m"
                  {
#line 544 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_23;

#line 544 "inst_test.m"
                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 544 "inst_test.m"
                  }
#line 544 "inst_test.m"
                  continue;
#line 543 "inst_test.m"
                }
#line 527 "inst_test.m"
                break;
#line 527 "inst_test.m"
              case (MR_Integer) 4:
#line 546 "inst_test.m"
                {
#line 546 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 550 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_30_30;

#line 547 "inst_test.m"
                  {
#line 547 "inst_test.m"
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28, &check_hlds__inst_test__STATE_VARIABLE_Expansions_30_30);
                  }
#line 550 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 548 "inst_test.m"
                    {
#line 548 "inst_test.m"
                      MR_Word check_hlds__inst_test__NextInst_25;

#line 548 "inst_test.m"
                      {
#line 548 "inst_test.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_24, &check_hlds__inst_test__NextInst_25);
                      }
#line 549 "inst_test.m"
                      /* direct tailcall eliminated */
#line 549 "inst_test.m"
                      {
#line 549 "inst_test.m"
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_25;
#line 549 "inst_test.m"
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_30_30;

#line 549 "inst_test.m"
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_28;
#line 549 "inst_test.m"
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 549 "inst_test.m"
                      }
#line 549 "inst_test.m"
                      continue;
#line 548 "inst_test.m"
                    }
#line 550 "inst_test.m"
                  else
#line 550 "inst_test.m"
                    {
#line 550 "inst_test.m"
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
#line 550 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 550 "inst_test.m"
                    }
#line 546 "inst_test.m"
                }
#line 527 "inst_test.m"
                break;
#line 527 "inst_test.m"
            }
#line 527 "inst_test.m"
            break;
#line 527 "inst_test.m"
        }
#line 527 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 527 "inst_test.m"
      }
#line 527 "inst_test.m"
      break;
#line 527 "inst_test.m"
    }
#line 513 "inst_test.m"
}

#line 461 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_4_p_0(
#line 461 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 461 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 461 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27,
#line 461 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_28)
#line 461 "inst_test.m"
{
#line 466 "inst_test.m"
  while (MR_TRUE)
#line 466 "inst_test.m"
    {
#line 466 "inst_test.m"
      /* tailcall optimized into a loop */
#line 466 "inst_test.m"
      {
#line 466 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 466 "inst_test.m"
#line 466 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
#line 466 "inst_test.m"
          default:
#line 466 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 466 "inst_test.m"
            break;
#line 466 "inst_test.m"
          case (MR_Integer) 0:
#line 466 "inst_test.m"
#line 466 "inst_test.m"
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
#line 466 "inst_test.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 466 "inst_test.m"
              case (MR_Integer) 0:
#line 469 "inst_test.m"
                {
#line 469 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
#line 469 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 469 "inst_test.m"
                }
#line 466 "inst_test.m"
                break;
#line 466 "inst_test.m"
              case (MR_Integer) 1:
#line 468 "inst_test.m"
                {
#line 468 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
#line 468 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 468 "inst_test.m"
                }
#line 466 "inst_test.m"
                break;
#line 466 "inst_test.m"
            }
#line 466 "inst_test.m"
            break;
#line 466 "inst_test.m"
          case (MR_Integer) 2:
#line 466 "inst_test.m"
            {
#line 466 "inst_test.m"
              MR_Word check_hlds__inst_test__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 0)));
#line 467 "inst_test.m"
              MR_Word check_hlds__inst_test__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 4128 "check_hlds.inst_test.c"
              check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_44_44 == (MR_Integer) 1);
#line 466 "inst_test.m"
              if (check_hlds__inst_test__succeeded)
#line 466 "inst_test.m"
                {
#line 467 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
#line 467 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 466 "inst_test.m"
                }
#line 466 "inst_test.m"
            }
#line 466 "inst_test.m"
            break;
#line 466 "inst_test.m"
          case (MR_Integer) 3:
#line 466 "inst_test.m"
#line 466 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
#line 466 "inst_test.m"
              default:
#line 466 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 466 "inst_test.m"
                break;
#line 466 "inst_test.m"
              case (MR_Integer) 0:
#line 466 "inst_test.m"
                {
#line 466 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 466 "inst_test.m"
                  MR_Word check_hlds__inst_test__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));
#line 466 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 4166 "check_hlds.inst_test.c"
                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_47_47 == (MR_Integer) 1);
#line 466 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 482 "inst_test.m"
                    {
#line 482 "inst_test.m"
                      if ((((check_hlds__inst_test__InstResults_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_test__InstResults_14)) == (MR_mktag((MR_Integer) 1))))))
#line 485 "inst_test.m"
                        {
#line 485 "inst_test.m"
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_15, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27, check_hlds__inst_test__STATE_VARIABLE_Expansions_28);
                        }
#line 482 "inst_test.m"
                      else
#line 482 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_FALSE;
#line 482 "inst_test.m"
                    }
#line 466 "inst_test.m"
                }
#line 466 "inst_test.m"
                break;
#line 466 "inst_test.m"
              case (MR_Integer) 1:
#line 466 "inst_test.m"
                {
#line 466 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 466 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));

#line 4198 "check_hlds.inst_test.c"
                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_49_49 == (MR_Integer) 1);
#line 466 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 466 "inst_test.m"
                    {
#line 466 "inst_test.m"
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
#line 466 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 466 "inst_test.m"
                    }
#line 466 "inst_test.m"
                }
#line 466 "inst_test.m"
                break;
#line 466 "inst_test.m"
              case (MR_Integer) 2:
#line 489 "inst_test.m"
                {
#line 490 "inst_test.m"
                  {
#line 490 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
#line 489 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 489 "inst_test.m"
                }
#line 466 "inst_test.m"
                break;
#line 466 "inst_test.m"
              case (MR_Integer) 3:
#line 492 "inst_test.m"
                {
#line 492 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 492 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 493 "inst_test.m"
                  /* direct tailcall eliminated */
#line 493 "inst_test.m"
                  {
#line 493 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_24;

#line 493 "inst_test.m"
                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 493 "inst_test.m"
                  }
#line 493 "inst_test.m"
                  continue;
#line 492 "inst_test.m"
                }
#line 466 "inst_test.m"
                break;
#line 466 "inst_test.m"
              case (MR_Integer) 4:
#line 495 "inst_test.m"
                {
#line 495 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 499 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_29_29;

#line 496 "inst_test.m"
                  {
#line 496 "inst_test.m"
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27, &check_hlds__inst_test__STATE_VARIABLE_Expansions_29_29);
                  }
#line 499 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 497 "inst_test.m"
                    {
#line 497 "inst_test.m"
                      MR_Word check_hlds__inst_test__NextInst_26;

#line 497 "inst_test.m"
                      {
#line 497 "inst_test.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_25, &check_hlds__inst_test__NextInst_26);
                      }
#line 498 "inst_test.m"
                      /* direct tailcall eliminated */
#line 498 "inst_test.m"
                      {
#line 498 "inst_test.m"
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_26;
#line 498 "inst_test.m"
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_29_29;

#line 498 "inst_test.m"
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_27;
#line 498 "inst_test.m"
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 498 "inst_test.m"
                      }
#line 498 "inst_test.m"
                      continue;
#line 497 "inst_test.m"
                    }
#line 499 "inst_test.m"
                  else
#line 499 "inst_test.m"
                    {
#line 499 "inst_test.m"
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
#line 499 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 499 "inst_test.m"
                    }
#line 495 "inst_test.m"
                }
#line 466 "inst_test.m"
                break;
#line 466 "inst_test.m"
            }
#line 466 "inst_test.m"
            break;
#line 466 "inst_test.m"
        }
#line 466 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 466 "inst_test.m"
      }
#line 466 "inst_test.m"
      break;
#line 466 "inst_test.m"
    }
#line 461 "inst_test.m"
}

#line 416 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(
#line 416 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 416 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_6,
#line 416 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23,
#line 416 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_24)
#line 416 "inst_test.m"
{
#line 426 "inst_test.m"
  while (MR_TRUE)
#line 426 "inst_test.m"
    {
#line 426 "inst_test.m"
      /* tailcall optimized into a loop */
#line 426 "inst_test.m"
      {
#line 426 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 426 "inst_test.m"
#line 426 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
#line 426 "inst_test.m"
          default:
#line 426 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 426 "inst_test.m"
            break;
#line 426 "inst_test.m"
          case (MR_Integer) 0:
#line 426 "inst_test.m"
#line 426 "inst_test.m"
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
#line 426 "inst_test.m"
              default:
#line 426 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 426 "inst_test.m"
                break;
#line 426 "inst_test.m"
              case (MR_Integer) 1:
#line 424 "inst_test.m"
                {
#line 424 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_24 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23;
#line 424 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 424 "inst_test.m"
                }
#line 426 "inst_test.m"
                break;
#line 426 "inst_test.m"
            }
#line 426 "inst_test.m"
            break;
#line 426 "inst_test.m"
          case (MR_Integer) 2:
#line 423 "inst_test.m"
            {
#line 423 "inst_test.m"
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_24 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23;
#line 423 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 423 "inst_test.m"
            }
#line 426 "inst_test.m"
            break;
#line 426 "inst_test.m"
          case (MR_Integer) 3:
#line 426 "inst_test.m"
#line 426 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
#line 426 "inst_test.m"
              default:
#line 426 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 426 "inst_test.m"
                break;
#line 426 "inst_test.m"
              case (MR_Integer) 0:
#line 427 "inst_test.m"
                {
#line 427 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 427 "inst_test.m"
                  MR_Word check_hlds__inst_test__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));
#line 427 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 428 "inst_test.m"
                  {
#line 428 "inst_test.m"
                    check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(check_hlds__inst_test__InstResults_13, check_hlds__inst_test__BoundInsts_14, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23, check_hlds__inst_test__STATE_VARIABLE_Expansions_24);
                  }
#line 427 "inst_test.m"
                }
#line 426 "inst_test.m"
                break;
#line 426 "inst_test.m"
              case (MR_Integer) 1:
#line 422 "inst_test.m"
                {
#line 422 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_24 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23;
#line 422 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 422 "inst_test.m"
                }
#line 426 "inst_test.m"
                break;
#line 426 "inst_test.m"
              case (MR_Integer) 2:
#line 437 "inst_test.m"
                {
#line 438 "inst_test.m"
                  {
#line 438 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_or_any_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
#line 437 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 437 "inst_test.m"
                }
#line 426 "inst_test.m"
                break;
#line 426 "inst_test.m"
              case (MR_Integer) 3:
#line 440 "inst_test.m"
                {
#line 440 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
#line 440 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

#line 441 "inst_test.m"
                  /* direct tailcall eliminated */
#line 441 "inst_test.m"
                  {
#line 441 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_20;

#line 441 "inst_test.m"
                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 441 "inst_test.m"
                  }
#line 441 "inst_test.m"
                  continue;
#line 440 "inst_test.m"
                }
#line 426 "inst_test.m"
                break;
#line 426 "inst_test.m"
              case (MR_Integer) 4:
#line 443 "inst_test.m"
                {
#line 443 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
#line 447 "inst_test.m"
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_25_25;

#line 444 "inst_test.m"
                  {
#line 444 "inst_test.m"
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23, &check_hlds__inst_test__STATE_VARIABLE_Expansions_25_25);
                  }
#line 447 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 445 "inst_test.m"
                    {
#line 445 "inst_test.m"
                      MR_Word check_hlds__inst_test__NextInst_22;

#line 445 "inst_test.m"
                      {
#line 445 "inst_test.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_21, &check_hlds__inst_test__NextInst_22);
                      }
#line 446 "inst_test.m"
                      /* direct tailcall eliminated */
#line 446 "inst_test.m"
                      {
#line 446 "inst_test.m"
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_22;
#line 446 "inst_test.m"
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_23 = check_hlds__inst_test__STATE_VARIABLE_Expansions_25_25;

#line 446 "inst_test.m"
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_23;
#line 446 "inst_test.m"
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
#line 446 "inst_test.m"
                      }
#line 446 "inst_test.m"
                      continue;
#line 445 "inst_test.m"
                    }
#line 447 "inst_test.m"
                  else
#line 447 "inst_test.m"
                    {
#line 447 "inst_test.m"
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_24 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23;
#line 447 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 447 "inst_test.m"
                    }
#line 443 "inst_test.m"
                }
#line 426 "inst_test.m"
                break;
#line 426 "inst_test.m"
            }
#line 426 "inst_test.m"
            break;
#line 426 "inst_test.m"
        }
#line 426 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 426 "inst_test.m"
      }
#line 426 "inst_test.m"
      break;
#line 426 "inst_test.m"
    }
#line 416 "inst_test.m"
}

#line 367 "inst_test.m"
static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(
#line 367 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_6,
#line 367 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_7,
#line 367 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_8,
#line 367 "inst_test.m"
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25,
#line 367 "inst_test.m"
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_26)
#line 367 "inst_test.m"
{
#line 377 "inst_test.m"
  while (MR_TRUE)
#line 377 "inst_test.m"
    {
#line 377 "inst_test.m"
      /* tailcall optimized into a loop */
#line 377 "inst_test.m"
      {
#line 377 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 377 "inst_test.m"
#line 377 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_8)) {
#line 377 "inst_test.m"
          default:
#line 377 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 377 "inst_test.m"
            break;
#line 377 "inst_test.m"
          case (MR_Integer) 0:
#line 377 "inst_test.m"
#line 377 "inst_test.m"
            switch (MR_unmkbody(check_hlds__inst_test__Inst_8)) {
#line 377 "inst_test.m"
              default:
#line 377 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 377 "inst_test.m"
                break;
#line 377 "inst_test.m"
              case (MR_Integer) 1:
#line 378 "inst_test.m"
                {
#line 378 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
#line 378 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 378 "inst_test.m"
                }
#line 377 "inst_test.m"
                break;
#line 377 "inst_test.m"
            }
#line 377 "inst_test.m"
            break;
#line 377 "inst_test.m"
          case (MR_Integer) 2:
#line 393 "inst_test.m"
            {
#line 393 "inst_test.m"
              MR_Word check_hlds__inst_test__Uniq_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_8, (MR_Integer) 0)));
#line 393 "inst_test.m"
              MR_Word check_hlds__inst_test__HOInstInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_8, (MR_Integer) 1)));
#line 393 "inst_test.m"
              MR_Word check_hlds__inst_test__NextInst_34;
#line 350 "inst_test.m"
              MR_Word check_hlds__inst_test__V_41_41;
#line 350 "inst_test.m"
              MR_Word check_hlds__inst_test__V_42_42;

#line 394 "inst_test.m"
              {
#line 394 "inst_test.m"
                check_hlds__inst_test__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__ModuleInfo_6, check_hlds__inst_test__Uniq_20, check_hlds__inst_test__HOInstInfo_21, &check_hlds__inst_test__NextInst_34);
              }
#line 393 "inst_test.m"
              if (check_hlds__inst_test__succeeded)
#line 393 "inst_test.m"
                {
#line 350 "inst_test.m"
                  check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__NextInst_34)) == (MR_mktag((MR_Integer) 2)));
#line 350 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 350 "inst_test.m"
                    {
#line 350 "inst_test.m"
                      check_hlds__inst_test__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__NextInst_34, (MR_Integer) 0)));
#line 350 "inst_test.m"
                      check_hlds__inst_test__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__NextInst_34, (MR_Integer) 1)));
#line 351 "inst_test.m"
                      {
#line 351 "inst_test.m"
                        check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_test__NextInst_34)));
                      }
#line 353 "inst_test.m"
                      if (check_hlds__inst_test__succeeded)
#line 353 "inst_test.m"
                        {
#line 353 "inst_test.m"
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
#line 353 "inst_test.m"
                          check_hlds__inst_test__succeeded = MR_TRUE;
#line 353 "inst_test.m"
                        }
#line 353 "inst_test.m"
                      else
#line 354 "inst_test.m"
                        {
#line 354 "inst_test.m"
                          /* direct tailcall eliminated */
#line 354 "inst_test.m"
                          {
#line 354 "inst_test.m"
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__NextInst_34;

#line 354 "inst_test.m"
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
#line 354 "inst_test.m"
                          }
#line 354 "inst_test.m"
                          continue;
#line 354 "inst_test.m"
                        }
#line 350 "inst_test.m"
                    }
#line 350 "inst_test.m"
                  else
#line 361 "inst_test.m"
                    {
#line 361 "inst_test.m"
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_44;

#line 358 "inst_test.m"
                      {
#line 358 "inst_test.m"
                        check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__NextInst_34)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_44);
                      }
#line 361 "inst_test.m"
                      if (check_hlds__inst_test__succeeded)
#line 360 "inst_test.m"
                        {
#line 360 "inst_test.m"
                          /* direct tailcall eliminated */
#line 360 "inst_test.m"
                          {
#line 360 "inst_test.m"
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__NextInst_34;
#line 360 "inst_test.m"
                            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_44;

#line 360 "inst_test.m"
                            check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25;
#line 360 "inst_test.m"
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
#line 360 "inst_test.m"
                          }
#line 360 "inst_test.m"
                          continue;
#line 360 "inst_test.m"
                        }
#line 361 "inst_test.m"
                      else
#line 361 "inst_test.m"
                        {
#line 361 "inst_test.m"
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
#line 361 "inst_test.m"
                          check_hlds__inst_test__succeeded = MR_TRUE;
#line 361 "inst_test.m"
                        }
#line 361 "inst_test.m"
                    }
#line 393 "inst_test.m"
                }
#line 393 "inst_test.m"
            }
#line 377 "inst_test.m"
            break;
#line 377 "inst_test.m"
          case (MR_Integer) 3:
#line 377 "inst_test.m"
#line 377 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 0)))) {
#line 377 "inst_test.m"
              default:
#line 377 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 377 "inst_test.m"
                break;
#line 377 "inst_test.m"
              case (MR_Integer) 0:
#line 382 "inst_test.m"
                {
#line 382 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 2)));
#line 382 "inst_test.m"
                  MR_Word check_hlds__inst_test__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 3)));
#line 382 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 1)));

#line 383 "inst_test.m"
                  {
#line 383 "inst_test.m"
                    check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(check_hlds__inst_test__InstResults_14, check_hlds__inst_test__BoundInsts_15, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__ModuleInfo_6, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, check_hlds__inst_test__STATE_VARIABLE_Expansions_26);
                  }
#line 382 "inst_test.m"
                }
#line 377 "inst_test.m"
                break;
#line 377 "inst_test.m"
              case (MR_Integer) 1:
#line 379 "inst_test.m"
                {
#line 379 "inst_test.m"
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
#line 379 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 379 "inst_test.m"
                }
#line 377 "inst_test.m"
                break;
#line 377 "inst_test.m"
              case (MR_Integer) 2:
#line 397 "inst_test.m"
                {
#line 398 "inst_test.m"
                  {
#line 398 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                  }
#line 397 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 397 "inst_test.m"
                }
#line 377 "inst_test.m"
                break;
#line 377 "inst_test.m"
              case (MR_Integer) 3:
#line 386 "inst_test.m"
                {
#line 386 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 2)));
#line 386 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 1)));
#line 350 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_54_54;
#line 350 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_55_55;

#line 350 "inst_test.m"
                  check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__SubInst_17)) == (MR_mktag((MR_Integer) 2)));
#line 350 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 350 "inst_test.m"
                    {
#line 350 "inst_test.m"
                      check_hlds__inst_test__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__SubInst_17, (MR_Integer) 0)));
#line 350 "inst_test.m"
                      check_hlds__inst_test__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__SubInst_17, (MR_Integer) 1)));
#line 351 "inst_test.m"
                      {
#line 351 "inst_test.m"
                        check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_test__SubInst_17)));
                      }
#line 353 "inst_test.m"
                      if (check_hlds__inst_test__succeeded)
#line 353 "inst_test.m"
                        {
#line 353 "inst_test.m"
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
#line 353 "inst_test.m"
                          check_hlds__inst_test__succeeded = MR_TRUE;
#line 353 "inst_test.m"
                        }
#line 353 "inst_test.m"
                      else
#line 354 "inst_test.m"
                        {
#line 354 "inst_test.m"
                          /* direct tailcall eliminated */
#line 354 "inst_test.m"
                          {
#line 354 "inst_test.m"
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__SubInst_17;

#line 354 "inst_test.m"
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
#line 354 "inst_test.m"
                          }
#line 354 "inst_test.m"
                          continue;
#line 354 "inst_test.m"
                        }
#line 350 "inst_test.m"
                    }
#line 350 "inst_test.m"
                  else
#line 361 "inst_test.m"
                    {
#line 361 "inst_test.m"
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_57;

#line 358 "inst_test.m"
                      {
#line 358 "inst_test.m"
                        check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__SubInst_17)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_57);
                      }
#line 361 "inst_test.m"
                      if (check_hlds__inst_test__succeeded)
#line 360 "inst_test.m"
                        {
#line 360 "inst_test.m"
                          /* direct tailcall eliminated */
#line 360 "inst_test.m"
                          {
#line 360 "inst_test.m"
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__SubInst_17;
#line 360 "inst_test.m"
                            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_57;

#line 360 "inst_test.m"
                            check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25;
#line 360 "inst_test.m"
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
#line 360 "inst_test.m"
                          }
#line 360 "inst_test.m"
                          continue;
#line 360 "inst_test.m"
                        }
#line 361 "inst_test.m"
                      else
#line 361 "inst_test.m"
                        {
#line 361 "inst_test.m"
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
#line 361 "inst_test.m"
                          check_hlds__inst_test__succeeded = MR_TRUE;
#line 361 "inst_test.m"
                        }
#line 361 "inst_test.m"
                    }
#line 386 "inst_test.m"
                }
#line 377 "inst_test.m"
                break;
#line 377 "inst_test.m"
              case (MR_Integer) 4:
#line 389 "inst_test.m"
                {
#line 389 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 1)));
#line 389 "inst_test.m"
                  MR_Word check_hlds__inst_test__NextInst_19;
#line 350 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_67_67;
#line 350 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_68_68;

#line 390 "inst_test.m"
                  {
#line 390 "inst_test.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_6, check_hlds__inst_test__InstName_18, &check_hlds__inst_test__NextInst_19);
                  }
#line 350 "inst_test.m"
                  check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__NextInst_19)) == (MR_mktag((MR_Integer) 2)));
#line 350 "inst_test.m"
                  if (check_hlds__inst_test__succeeded)
#line 350 "inst_test.m"
                    {
#line 350 "inst_test.m"
                      check_hlds__inst_test__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__NextInst_19, (MR_Integer) 0)));
#line 350 "inst_test.m"
                      check_hlds__inst_test__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__NextInst_19, (MR_Integer) 1)));
#line 351 "inst_test.m"
                      {
#line 351 "inst_test.m"
                        check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_test__NextInst_19)));
                      }
#line 353 "inst_test.m"
                      if (check_hlds__inst_test__succeeded)
#line 353 "inst_test.m"
                        {
#line 353 "inst_test.m"
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
#line 353 "inst_test.m"
                          check_hlds__inst_test__succeeded = MR_TRUE;
#line 353 "inst_test.m"
                        }
#line 353 "inst_test.m"
                      else
#line 354 "inst_test.m"
                        {
#line 354 "inst_test.m"
                          /* direct tailcall eliminated */
#line 354 "inst_test.m"
                          {
#line 354 "inst_test.m"
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__NextInst_19;

#line 354 "inst_test.m"
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
#line 354 "inst_test.m"
                          }
#line 354 "inst_test.m"
                          continue;
#line 354 "inst_test.m"
                        }
#line 350 "inst_test.m"
                    }
#line 350 "inst_test.m"
                  else
#line 361 "inst_test.m"
                    {
#line 361 "inst_test.m"
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_70;

#line 358 "inst_test.m"
                      {
#line 358 "inst_test.m"
                        check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__NextInst_19)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_70);
                      }
#line 361 "inst_test.m"
                      if (check_hlds__inst_test__succeeded)
#line 360 "inst_test.m"
                        {
#line 360 "inst_test.m"
                          /* direct tailcall eliminated */
#line 360 "inst_test.m"
                          {
#line 360 "inst_test.m"
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__NextInst_19;
#line 360 "inst_test.m"
                            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_70;

#line 360 "inst_test.m"
                            check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25;
#line 360 "inst_test.m"
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
#line 360 "inst_test.m"
                          }
#line 360 "inst_test.m"
                          continue;
#line 360 "inst_test.m"
                        }
#line 361 "inst_test.m"
                      else
#line 361 "inst_test.m"
                        {
#line 361 "inst_test.m"
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
#line 361 "inst_test.m"
                          check_hlds__inst_test__succeeded = MR_TRUE;
#line 361 "inst_test.m"
                        }
#line 361 "inst_test.m"
                    }
#line 389 "inst_test.m"
                }
#line 377 "inst_test.m"
                break;
#line 377 "inst_test.m"
            }
#line 377 "inst_test.m"
            break;
#line 377 "inst_test.m"
        }
#line 377 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 377 "inst_test.m"
      }
#line 377 "inst_test.m"
      break;
#line 377 "inst_test.m"
    }
#line 367 "inst_test.m"
}

#line 311 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__record_inst_is_ground_2_p_0(
#line 311 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_1,
#line 311 "inst_test.m"
  MR_Word check_hlds__inst_test__IsGround_2)
#line 311 "inst_test.m"
{
#line 313 "inst_test.m"
  {
#line 313 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;

#line 316 "inst_test.m"
{
#define MR_PROC_LABEL check_hlds__inst_test__record_inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_1 ;
	IsGround =  check_hlds__inst_test__IsGround_2 ;
		{
#line 316 "inst_test.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;

#line 5083 "check_hlds.inst_test.c"

		;}
#undef MR_PROC_LABEL
#line 316 "inst_test.m"
}
#line 313 "inst_test.m"
  }
#line 311 "inst_test.m"
}

#line 285 "inst_test.m"
static void MR_CALL 
check_hlds__inst_test__lookup_inst_is_ground_3_p_0(
#line 285 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_1,
#line 285 "inst_test.m"
  MR_Word * check_hlds__inst_test__Found_2,
#line 285 "inst_test.m"
  MR_Word * check_hlds__inst_test__IsGround_3)
#line 285 "inst_test.m"
{
#line 288 "inst_test.m"
  {
#line 288 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;

#line 291 "inst_test.m"
{
#define MR_PROC_LABEL check_hlds__inst_test__lookup_inst_is_ground_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_1 ;
		{
#line 291 "inst_test.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (inst_is_ground_cache[hash].iig_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
    }

#line 5135 "check_hlds.inst_test.c"

		;}
#undef MR_PROC_LABEL
	 *check_hlds__inst_test__Found_2  = Found;
	 *check_hlds__inst_test__IsGround_3  = IsGround;
#line 291 "inst_test.m"
}
#line 288 "inst_test.m"
  }
#line 285 "inst_test.m"
}

#line 180 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__maybe_any_to_bound_5_p_0(
#line 180 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 180 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_7,
#line 180 "inst_test.m"
  MR_Word check_hlds__inst_test__Uniq_8,
#line 180 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__4_4,
#line 180 "inst_test.m"
  MR_Word * check_hlds__inst_test__Inst_9)
#line 180 "inst_test.m"
{
#line 1303 "inst_test.m"
  {
#line 1303 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded = (check_hlds__inst_test__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1303 "inst_test.m"
    MR_Word check_hlds__inst_test__Type_6;
#line 1321 "inst_test.m"
    MR_Word check_hlds__inst_test__Constructors_10;

#line 1303 "inst_test.m"
    if (check_hlds__inst_test__succeeded)
#line 1303 "inst_test.m"
      {
#line 1303 "inst_test.m"
        check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1303 "inst_test.m"
        if (check_hlds__inst_test__succeeded)
#line 1303 "inst_test.m"
          {
#line 1303 "inst_test.m"
            check_hlds__inst_test__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1304 "inst_test.m"
            {
#line 1304 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_test__ModuleInfo_7, check_hlds__inst_test__Type_6);
            }
#line 1304 "inst_test.m"
            check_hlds__inst_test__succeeded = !(check_hlds__inst_test__succeeded);
#line 1303 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1303 "inst_test.m"
              {
#line 1305 "inst_test.m"
                {
#line 1305 "inst_test.m"
                  check_hlds__inst_test__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_test__ModuleInfo_7, check_hlds__inst_test__Type_6, &check_hlds__inst_test__Constructors_10);
                }
#line 1321 "inst_test.m"
                if (check_hlds__inst_test__succeeded)
#line 1306 "inst_test.m"
                  {
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__TypeCtor_11;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__BoundInsts0_12;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__BoundInsts_13;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__InstResult_14;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__V_17_17;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__V_18_18;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__V_19_19;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__V_20_20;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__V_21_21;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__V_22_22;
#line 1306 "inst_test.m"
                    MR_Word check_hlds__inst_test__V_23_23;

#line 1306 "inst_test.m"
                    {
#line 1306 "inst_test.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_test__Type_6, &check_hlds__inst_test__TypeCtor_11);
                    }
#line 1307 "inst_test.m"
                    {
#line 1307 "inst_test.m"
                      check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(check_hlds__inst_test__ModuleInfo_7, check_hlds__inst_test__Uniq_8, check_hlds__inst_test__TypeCtor_11, check_hlds__inst_test__Constructors_10, &check_hlds__inst_test__BoundInsts0_12);
                    }
#line 1309 "inst_test.m"
                    {
#line 1309 "inst_test.m"
                      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__inst_test__BoundInsts0_12, &check_hlds__inst_test__BoundInsts_13);
                    }
#line 1315 "inst_test.m"
                    {
#line 1315 "inst_test.m"
                      check_hlds__inst_test__V_18_18 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                    }
#line 1315 "inst_test.m"
                    {
#line 1315 "inst_test.m"
                      check_hlds__inst_test__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__V_17_17, 0) = ((MR_Box) (check_hlds__inst_test__V_18_18));
#line 1315 "inst_test.m"
                    }
#line 1316 "inst_test.m"
                    {
#line 1316 "inst_test.m"
                      check_hlds__inst_test__V_20_20 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_test_scalar_common_1[0]);
                    }
#line 1316 "inst_test.m"
                    {
#line 1316 "inst_test.m"
                      check_hlds__inst_test__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__V_19_19, 0) = ((MR_Box) (check_hlds__inst_test__V_20_20));
#line 1316 "inst_test.m"
                    }
#line 1317 "inst_test.m"
                    {
#line 1317 "inst_test.m"
                      check_hlds__inst_test__V_22_22 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
                    }
#line 1317 "inst_test.m"
                    {
#line 1317 "inst_test.m"
                      check_hlds__inst_test__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__V_21_21, 0) = ((MR_Box) (check_hlds__inst_test__V_22_22));
#line 1317 "inst_test.m"
                    }
#line 1318 "inst_test.m"
                    check_hlds__inst_test__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_test__TypeCtor_11);
#line 1312 "inst_test.m"
                    {
#line 1312 "inst_test.m"
                      check_hlds__inst_test__InstResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1312 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 1) = ((MR_Box) ((MR_Integer) 2));
#line 1312 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 2) = ((MR_Box) (check_hlds__inst_test__V_17_17));
#line 1312 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 3) = ((MR_Box) (check_hlds__inst_test__V_19_19));
#line 1312 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 4) = ((MR_Box) (check_hlds__inst_test__V_21_21));
#line 1312 "inst_test.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 5) = ((MR_Box) (check_hlds__inst_test__V_23_23));
#line 1312 "inst_test.m"
                    }
#line 1320 "inst_test.m"
                    {
#line 1320 "inst_test.m"
                      MR_Word base;
#line 1320 "inst_test.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "inst_test.m"
                      *check_hlds__inst_test__Inst_9 = base;
#line 1320 "inst_test.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1320 "inst_test.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_test__Uniq_8));
#line 1320 "inst_test.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_test__InstResult_14));
#line 1320 "inst_test.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_test__BoundInsts_13));
#line 1320 "inst_test.m"
                    }
#line 1306 "inst_test.m"
                    check_hlds__inst_test__succeeded = MR_TRUE;
#line 1306 "inst_test.m"
                  }
#line 1321 "inst_test.m"
                else
#line 1326 "inst_test.m"
                  {
#line 1332 "inst_test.m"
                    MR_Word check_hlds__inst_test__TypeCtorCat_31;

#line 1333 "inst_test.m"
                    {
#line 1333 "inst_test.m"
                      check_hlds__inst_test__TypeCtorCat_31 = check_hlds__type_util__classify_type_2_f_0(check_hlds__inst_test__ModuleInfo_7, check_hlds__inst_test__Type_6);
                    }
#line 1347 "inst_test.m"
#line 1347 "inst_test.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_test__TypeCtorCat_31)) {
#line 1347 "inst_test.m"
                      default:
#line 1347 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_FALSE;
#line 1347 "inst_test.m"
                        break;
#line 1347 "inst_test.m"
                      case (MR_Integer) 0:
#line 1347 "inst_test.m"
#line 1347 "inst_test.m"
                        switch (MR_unmkbody(check_hlds__inst_test__TypeCtorCat_31)) {
#line 1347 "inst_test.m"
                          default:
#line 1347 "inst_test.m"
                            check_hlds__inst_test__succeeded = MR_FALSE;
#line 1347 "inst_test.m"
                            break;
#line 1347 "inst_test.m"
                          case (MR_Integer) 1:
#line 1354 "inst_test.m"
                            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1347 "inst_test.m"
                            break;
#line 1347 "inst_test.m"
                          case (MR_Integer) 3:
#line 1354 "inst_test.m"
                            check_hlds__inst_test__succeeded = MR_TRUE;
#line 1347 "inst_test.m"
                            break;
#line 1347 "inst_test.m"
                        }
#line 1347 "inst_test.m"
                        break;
#line 1347 "inst_test.m"
                      case (MR_Integer) 3:
#line 1347 "inst_test.m"
#line 1347 "inst_test.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__TypeCtorCat_31, (MR_Integer) 0)))) {
#line 1347 "inst_test.m"
                          default:
#line 1347 "inst_test.m"
                            check_hlds__inst_test__succeeded = MR_FALSE;
#line 1347 "inst_test.m"
                            break;
#line 1347 "inst_test.m"
                          case (MR_Integer) 1:
#line 1347 "inst_test.m"
                            {
#line 1347 "inst_test.m"
                              MR_Word check_hlds__inst_test__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__TypeCtorCat_31, (MR_Integer) 1)));

#line 1347 "inst_test.m"
#line 1347 "inst_test.m"
                              switch (check_hlds__inst_test__V_41_41) {
#line 1347 "inst_test.m"
                                default:
#line 1347 "inst_test.m"
                                  check_hlds__inst_test__succeeded = MR_FALSE;
#line 1347 "inst_test.m"
                                  break;
#line 1347 "inst_test.m"
                                case (MR_Integer) 2:
#line 1355 "inst_test.m"
                                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 1347 "inst_test.m"
                                  break;
#line 1347 "inst_test.m"
                                case (MR_Integer) 1:
#line 1355 "inst_test.m"
                                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 1347 "inst_test.m"
                                  break;
#line 1347 "inst_test.m"
                              }
#line 1347 "inst_test.m"
                            }
#line 1347 "inst_test.m"
                            break;
#line 1347 "inst_test.m"
                        }
#line 1347 "inst_test.m"
                        break;
#line 1347 "inst_test.m"
                    }
#line 1326 "inst_test.m"
                    if (check_hlds__inst_test__succeeded)
#line 1325 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_FALSE;
#line 1326 "inst_test.m"
                    else
#line 1327 "inst_test.m"
                      {
#line 1327 "inst_test.m"
                        {
#line 1327 "inst_test.m"
                          MR_Word base;
#line 1327 "inst_test.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "inst_test.m"
                          *check_hlds__inst_test__Inst_9 = base;
#line 1327 "inst_test.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1327 "inst_test.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_test__Uniq_8));
#line 1327 "inst_test.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1327 "inst_test.m"
                        }
#line 1327 "inst_test.m"
                        check_hlds__inst_test__succeeded = MR_TRUE;
#line 1327 "inst_test.m"
                      }
#line 1326 "inst_test.m"
                  }
#line 1303 "inst_test.m"
              }
#line 1303 "inst_test.m"
          }
#line 1303 "inst_test.m"
      }
#line 1303 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 1303 "inst_test.m"
  }
#line 180 "inst_test.m"
}

#line 163 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_3_p_0(
#line 163 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4,
#line 163 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_5,
#line 163 "inst_test.m"
  MR_Word check_hlds__inst_test__InstName_6)
#line 163 "inst_test.m"
{
#line 1183 "inst_test.m"
  {
#line 1183 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 1183 "inst_test.m"
    MR_Word check_hlds__inst_test__Expansions0_7;
#line 1183 "inst_test.m"
    MR_Word check_hlds__inst_test__V_11_11;
#line 1185 "inst_test.m"
    MR_Word check_hlds__inst_test___Expansions_8;

#line 1184 "inst_test.m"
    {
#line 1184 "inst_test.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_test__Expansions0_7);
    }
#line 1185 "inst_test.m"
    {
#line 1185 "inst_test.m"
      check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(check_hlds__inst_test__Inst_4, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_6, &check_hlds__inst_test__V_11_11, check_hlds__inst_test__Expansions0_7, &check_hlds__inst_test___Expansions_8);
    }
#line 1185 "inst_test.m"
    check_hlds__inst_test__succeeded = ((MR_Integer) 1 == check_hlds__inst_test__V_11_11);
#line 1183 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 1183 "inst_test.m"
  }
#line 163 "inst_test.m"
}

#line 155 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(
#line 155 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 155 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 155 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3)
#line 155 "inst_test.m"
{
#line 1169 "inst_test.m"
  while (MR_TRUE)
#line 1169 "inst_test.m"
    {
#line 1169 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1169 "inst_test.m"
      {
#line 1169 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1169 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1169 "inst_test.m"
          check_hlds__inst_test__succeeded = (check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1169 "inst_test.m"
        else
#line 1171 "inst_test.m"
          {
#line 1171 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1171 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1171 "inst_test.m"
            MR_Word check_hlds__inst_test__Live_7;
#line 1171 "inst_test.m"
            MR_Word check_hlds__inst_test__Lives_8;

#line 1170 "inst_test.m"
            check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1170 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1170 "inst_test.m"
              {
#line 1170 "inst_test.m"
                check_hlds__inst_test__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 0)));
#line 1170 "inst_test.m"
                check_hlds__inst_test__Lives_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 1)));
#line 1175 "inst_test.m"
#line 1175 "inst_test.m"
                switch (check_hlds__inst_test__Live_7) {
#line 1175 "inst_test.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1175 "inst_test.m"
                  case (MR_Integer) 1:
#line 1176 "inst_test.m"
                    check_hlds__inst_test__succeeded = MR_TRUE;
#line 1175 "inst_test.m"
                    break;
#line 1175 "inst_test.m"
                  case (MR_Integer) 0:
#line 409 "inst_test.m"
                    {
#line 409 "inst_test.m"
                      MR_Word check_hlds__inst_test__Expansions0_12;
#line 411 "inst_test.m"
                      MR_Word check_hlds__inst_test___Expansions_13;

#line 410 "inst_test.m"
                      {
#line 410 "inst_test.m"
                        mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_12);
                      }
#line 411 "inst_test.m"
                      {
#line 411 "inst_test.m"
                        check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_5, check_hlds__inst_test__Expansions0_12, &check_hlds__inst_test___Expansions_13);
                      }
#line 409 "inst_test.m"
                    }
#line 1175 "inst_test.m"
                    break;
#line 1175 "inst_test.m"
                }
#line 1171 "inst_test.m"
                if (check_hlds__inst_test__succeeded)
#line 1178 "inst_test.m"
                  {
#line 1178 "inst_test.m"
                    /* direct tailcall eliminated */
#line 1178 "inst_test.m"
                    {
#line 1178 "inst_test.m"
                      MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_6;
#line 1178 "inst_test.m"
                      MR_Word check_hlds__inst_test__HeadVar__2__tmp_copy_2 = check_hlds__inst_test__Lives_8;

#line 1178 "inst_test.m"
                      check_hlds__inst_test__HeadVar__2_2 = check_hlds__inst_test__HeadVar__2__tmp_copy_2;
#line 1178 "inst_test.m"
                      check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1178 "inst_test.m"
                    }
#line 1178 "inst_test.m"
                    continue;
#line 1178 "inst_test.m"
                  }
#line 1170 "inst_test.m"
              }
#line 1171 "inst_test.m"
          }
#line 1169 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1169 "inst_test.m"
      }
#line 1169 "inst_test.m"
      break;
#line 1169 "inst_test.m"
    }
#line 155 "inst_test.m"
}

#line 147 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_dead_3_p_0(
#line 147 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 147 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__2_2,
#line 147 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3)
#line 147 "inst_test.m"
{
#line 1159 "inst_test.m"
  while (MR_TRUE)
#line 1159 "inst_test.m"
    {
#line 1159 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1159 "inst_test.m"
      {
#line 1159 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1159 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1159 "inst_test.m"
          check_hlds__inst_test__succeeded = (check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "inst_test.m"
        else
#line 1160 "inst_test.m"
          {
#line 1160 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1160 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1160 "inst_test.m"
            MR_Word check_hlds__inst_test__Live_7;
#line 1160 "inst_test.m"
            MR_Word check_hlds__inst_test__Lives_8;

#line 1160 "inst_test.m"
            check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1160 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1160 "inst_test.m"
              {
#line 1160 "inst_test.m"
                check_hlds__inst_test__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 0)));
#line 1160 "inst_test.m"
                check_hlds__inst_test__Lives_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 1)));
#line 1164 "inst_test.m"
#line 1164 "inst_test.m"
                switch (check_hlds__inst_test__Live_7) {
#line 1164 "inst_test.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1164 "inst_test.m"
                  case (MR_Integer) 1:
#line 1165 "inst_test.m"
                    check_hlds__inst_test__succeeded = MR_TRUE;
#line 1164 "inst_test.m"
                    break;
#line 1164 "inst_test.m"
                  case (MR_Integer) 0:
#line 1163 "inst_test.m"
                    {
#line 1163 "inst_test.m"
                      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_5);
                    }
#line 1164 "inst_test.m"
                    break;
#line 1164 "inst_test.m"
                }
#line 1160 "inst_test.m"
                if (check_hlds__inst_test__succeeded)
#line 1167 "inst_test.m"
                  {
#line 1167 "inst_test.m"
                    /* direct tailcall eliminated */
#line 1167 "inst_test.m"
                    {
#line 1167 "inst_test.m"
                      MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_6;
#line 1167 "inst_test.m"
                      MR_Word check_hlds__inst_test__HeadVar__2__tmp_copy_2 = check_hlds__inst_test__Lives_8;

#line 1167 "inst_test.m"
                      check_hlds__inst_test__HeadVar__2_2 = check_hlds__inst_test__HeadVar__2__tmp_copy_2;
#line 1167 "inst_test.m"
                      check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1167 "inst_test.m"
                    }
#line 1167 "inst_test.m"
                    continue;
#line 1167 "inst_test.m"
                  }
#line 1160 "inst_test.m"
              }
#line 1160 "inst_test.m"
          }
#line 1159 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1159 "inst_test.m"
      }
#line 1159 "inst_test.m"
      break;
#line 1159 "inst_test.m"
    }
#line 147 "inst_test.m"
}

#line 141 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_free_2_p_0(
#line 141 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 141 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 141 "inst_test.m"
{
#line 1154 "inst_test.m"
  while (MR_TRUE)
#line 1154 "inst_test.m"
    {
#line 1154 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1154 "inst_test.m"
      {
#line 1154 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1154 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1154 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1154 "inst_test.m"
        else
#line 1155 "inst_test.m"
          {
#line 1155 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1155 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));

#line 1156 "inst_test.m"
            {
#line 1156 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4);
            }
#line 1155 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1157 "inst_test.m"
              {
#line 1157 "inst_test.m"
                /* direct tailcall eliminated */
#line 1157 "inst_test.m"
                {
#line 1157 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

#line 1157 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1157 "inst_test.m"
                }
#line 1157 "inst_test.m"
                continue;
#line 1157 "inst_test.m"
              }
#line 1155 "inst_test.m"
          }
#line 1154 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1154 "inst_test.m"
      }
#line 1154 "inst_test.m"
      break;
#line 1154 "inst_test.m"
    }
#line 141 "inst_test.m"
}

#line 138 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_p_0(
#line 138 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 138 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 138 "inst_test.m"
{
#line 1141 "inst_test.m"
  while (MR_TRUE)
#line 1141 "inst_test.m"
    {
#line 1141 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1141 "inst_test.m"
      {
#line 1141 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1141 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1141 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1141 "inst_test.m"
        else
#line 1142 "inst_test.m"
          {
#line 1142 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1142 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1142 "inst_test.m"
            MR_Word check_hlds__inst_test__Expansions0_9;
#line 626 "inst_test.m"
            MR_Word check_hlds__inst_test___Expansions_10;

#line 625 "inst_test.m"
            {
#line 625 "inst_test.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
#line 626 "inst_test.m"
            {
#line 626 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
#line 1142 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1144 "inst_test.m"
              {
#line 1144 "inst_test.m"
                /* direct tailcall eliminated */
#line 1144 "inst_test.m"
                {
#line 1144 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

#line 1144 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1144 "inst_test.m"
                }
#line 1144 "inst_test.m"
                continue;
#line 1144 "inst_test.m"
              }
#line 1142 "inst_test.m"
          }
#line 1141 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1141 "inst_test.m"
      }
#line 1141 "inst_test.m"
      break;
#line 1141 "inst_test.m"
    }
#line 138 "inst_test.m"
}

#line 135 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_p_0(
#line 135 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 135 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 135 "inst_test.m"
{
#line 1128 "inst_test.m"
  while (MR_TRUE)
#line 1128 "inst_test.m"
    {
#line 1128 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1128 "inst_test.m"
      {
#line 1128 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1128 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1128 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1128 "inst_test.m"
        else
#line 1129 "inst_test.m"
          {
#line 1129 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1129 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1129 "inst_test.m"
            MR_Word check_hlds__inst_test__Expansions0_9;
#line 568 "inst_test.m"
            MR_Word check_hlds__inst_test___Expansions_10;

#line 567 "inst_test.m"
            {
#line 567 "inst_test.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
#line 568 "inst_test.m"
            {
#line 568 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
#line 1129 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1131 "inst_test.m"
              {
#line 1131 "inst_test.m"
                /* direct tailcall eliminated */
#line 1131 "inst_test.m"
                {
#line 1131 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

#line 1131 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1131 "inst_test.m"
                }
#line 1131 "inst_test.m"
                continue;
#line 1131 "inst_test.m"
              }
#line 1129 "inst_test.m"
          }
#line 1128 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1128 "inst_test.m"
      }
#line 1128 "inst_test.m"
      break;
#line 1128 "inst_test.m"
    }
#line 135 "inst_test.m"
}

#line 132 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_p_0(
#line 132 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 132 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 132 "inst_test.m"
{
#line 1115 "inst_test.m"
  while (MR_TRUE)
#line 1115 "inst_test.m"
    {
#line 1115 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1115 "inst_test.m"
      {
#line 1115 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1115 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1115 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1115 "inst_test.m"
        else
#line 1116 "inst_test.m"
          {
#line 1116 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1116 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1116 "inst_test.m"
            MR_Word check_hlds__inst_test__Expansions0_9;
#line 508 "inst_test.m"
            MR_Word check_hlds__inst_test___Expansions_10;

#line 507 "inst_test.m"
            {
#line 507 "inst_test.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
#line 508 "inst_test.m"
            {
#line 508 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
#line 1116 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1118 "inst_test.m"
              {
#line 1118 "inst_test.m"
                /* direct tailcall eliminated */
#line 1118 "inst_test.m"
                {
#line 1118 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

#line 1118 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1118 "inst_test.m"
                }
#line 1118 "inst_test.m"
                continue;
#line 1118 "inst_test.m"
              }
#line 1116 "inst_test.m"
          }
#line 1115 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1115 "inst_test.m"
      }
#line 1115 "inst_test.m"
      break;
#line 1115 "inst_test.m"
    }
#line 132 "inst_test.m"
}

#line 130 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_p_0(
#line 130 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 130 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 130 "inst_test.m"
{
#line 1102 "inst_test.m"
  while (MR_TRUE)
#line 1102 "inst_test.m"
    {
#line 1102 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1102 "inst_test.m"
      {
#line 1102 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1102 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1102 "inst_test.m"
        else
#line 1103 "inst_test.m"
          {
#line 1103 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1103 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1103 "inst_test.m"
            MR_Word check_hlds__inst_test__Expansions0_9;
#line 456 "inst_test.m"
            MR_Word check_hlds__inst_test___Expansions_10;

#line 455 "inst_test.m"
            {
#line 455 "inst_test.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
#line 456 "inst_test.m"
            {
#line 456 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
#line 1103 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1105 "inst_test.m"
              {
#line 1105 "inst_test.m"
                /* direct tailcall eliminated */
#line 1105 "inst_test.m"
                {
#line 1105 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

#line 1105 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1105 "inst_test.m"
                }
#line 1105 "inst_test.m"
                continue;
#line 1105 "inst_test.m"
              }
#line 1103 "inst_test.m"
          }
#line 1102 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1102 "inst_test.m"
      }
#line 1102 "inst_test.m"
      break;
#line 1102 "inst_test.m"
    }
#line 130 "inst_test.m"
}

#line 127 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(
#line 127 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 127 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 127 "inst_test.m"
{
#line 1089 "inst_test.m"
  while (MR_TRUE)
#line 1089 "inst_test.m"
    {
#line 1089 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1089 "inst_test.m"
      {
#line 1089 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1089 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1089 "inst_test.m"
        else
#line 1090 "inst_test.m"
          {
#line 1090 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1090 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1090 "inst_test.m"
            MR_Word check_hlds__inst_test__Expansions0_9;
#line 411 "inst_test.m"
            MR_Word check_hlds__inst_test___Expansions_10;

#line 410 "inst_test.m"
            {
#line 410 "inst_test.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
#line 411 "inst_test.m"
            {
#line 411 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
#line 1090 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1092 "inst_test.m"
              {
#line 1092 "inst_test.m"
                /* direct tailcall eliminated */
#line 1092 "inst_test.m"
                {
#line 1092 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

#line 1092 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1092 "inst_test.m"
                }
#line 1092 "inst_test.m"
                continue;
#line 1092 "inst_test.m"
              }
#line 1090 "inst_test.m"
          }
#line 1089 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1089 "inst_test.m"
      }
#line 1089 "inst_test.m"
      break;
#line 1089 "inst_test.m"
    }
#line 127 "inst_test.m"
}

#line 125 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_2_p_0(
#line 125 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 125 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 125 "inst_test.m"
{
#line 1062 "inst_test.m"
  while (MR_TRUE)
#line 1062 "inst_test.m"
    {
#line 1062 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1062 "inst_test.m"
      {
#line 1062 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1062 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1062 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1062 "inst_test.m"
        else
#line 1063 "inst_test.m"
          {
#line 1063 "inst_test.m"
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1063 "inst_test.m"
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));

#line 1064 "inst_test.m"
            {
#line 1064 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4);
            }
#line 1063 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1065 "inst_test.m"
              {
#line 1065 "inst_test.m"
                /* direct tailcall eliminated */
#line 1065 "inst_test.m"
                {
#line 1065 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

#line 1065 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1065 "inst_test.m"
                }
#line 1065 "inst_test.m"
                continue;
#line 1065 "inst_test.m"
              }
#line 1063 "inst_test.m"
          }
#line 1062 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1062 "inst_test.m"
      }
#line 1062 "inst_test.m"
      break;
#line 1062 "inst_test.m"
    }
#line 125 "inst_test.m"
}

#line 120 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_free_2_p_0(
#line 120 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 120 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 120 "inst_test.m"
{
#line 1054 "inst_test.m"
  while (MR_TRUE)
#line 1054 "inst_test.m"
    {
#line 1054 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1054 "inst_test.m"
      {
#line 1054 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1054 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1054 "inst_test.m"
        else
#line 1055 "inst_test.m"
          {
#line 1055 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1055 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1055 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
#line 1056 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

#line 1057 "inst_test.m"
            {
#line 1057 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_free_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
#line 1055 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1058 "inst_test.m"
              {
#line 1058 "inst_test.m"
                /* direct tailcall eliminated */
#line 1058 "inst_test.m"
                {
#line 1058 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

#line 1058 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1058 "inst_test.m"
                }
#line 1058 "inst_test.m"
                continue;
#line 1058 "inst_test.m"
              }
#line 1055 "inst_test.m"
          }
#line 1054 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1054 "inst_test.m"
      }
#line 1054 "inst_test.m"
      break;
#line 1054 "inst_test.m"
    }
#line 120 "inst_test.m"
}

#line 117 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(
#line 117 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 117 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 117 "inst_test.m"
{
#line 1037 "inst_test.m"
  while (MR_TRUE)
#line 1037 "inst_test.m"
    {
#line 1037 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1037 "inst_test.m"
      {
#line 1037 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1037 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1037 "inst_test.m"
        else
#line 1038 "inst_test.m"
          {
#line 1038 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1038 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1038 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
#line 1039 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

#line 1040 "inst_test.m"
            {
#line 1040 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
#line 1038 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1041 "inst_test.m"
              {
#line 1041 "inst_test.m"
                /* direct tailcall eliminated */
#line 1041 "inst_test.m"
                {
#line 1041 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

#line 1041 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1041 "inst_test.m"
                }
#line 1041 "inst_test.m"
                continue;
#line 1041 "inst_test.m"
              }
#line 1038 "inst_test.m"
          }
#line 1037 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1037 "inst_test.m"
      }
#line 1037 "inst_test.m"
      break;
#line 1037 "inst_test.m"
    }
#line 117 "inst_test.m"
}

#line 114 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(
#line 114 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 114 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 114 "inst_test.m"
{
#line 1020 "inst_test.m"
  while (MR_TRUE)
#line 1020 "inst_test.m"
    {
#line 1020 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1020 "inst_test.m"
      {
#line 1020 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1020 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1020 "inst_test.m"
        else
#line 1021 "inst_test.m"
          {
#line 1021 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1021 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1021 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
#line 1022 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

#line 1023 "inst_test.m"
            {
#line 1023 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
#line 1021 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1024 "inst_test.m"
              {
#line 1024 "inst_test.m"
                /* direct tailcall eliminated */
#line 1024 "inst_test.m"
                {
#line 1024 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

#line 1024 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1024 "inst_test.m"
                }
#line 1024 "inst_test.m"
                continue;
#line 1024 "inst_test.m"
              }
#line 1021 "inst_test.m"
          }
#line 1020 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1020 "inst_test.m"
      }
#line 1020 "inst_test.m"
      break;
#line 1020 "inst_test.m"
    }
#line 114 "inst_test.m"
}

#line 111 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(
#line 111 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 111 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 111 "inst_test.m"
{
#line 1004 "inst_test.m"
  while (MR_TRUE)
#line 1004 "inst_test.m"
    {
#line 1004 "inst_test.m"
      /* tailcall optimized into a loop */
#line 1004 "inst_test.m"
      {
#line 1004 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 1004 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 1004 "inst_test.m"
        else
#line 1005 "inst_test.m"
          {
#line 1005 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 1005 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 1005 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
#line 1006 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

#line 1007 "inst_test.m"
            {
#line 1007 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_mostly_unique_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
#line 1005 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 1008 "inst_test.m"
              {
#line 1008 "inst_test.m"
                /* direct tailcall eliminated */
#line 1008 "inst_test.m"
                {
#line 1008 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

#line 1008 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 1008 "inst_test.m"
                }
#line 1008 "inst_test.m"
                continue;
#line 1008 "inst_test.m"
              }
#line 1005 "inst_test.m"
          }
#line 1004 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 1004 "inst_test.m"
      }
#line 1004 "inst_test.m"
      break;
#line 1004 "inst_test.m"
    }
#line 111 "inst_test.m"
}

#line 108 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(
#line 108 "inst_test.m"
  MR_Word check_hlds__inst_test__HeadVar__1_1,
#line 108 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_2)
#line 108 "inst_test.m"
{
#line 988 "inst_test.m"
  while (MR_TRUE)
#line 988 "inst_test.m"
    {
#line 988 "inst_test.m"
      /* tailcall optimized into a loop */
#line 988 "inst_test.m"
      {
#line 988 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 988 "inst_test.m"
        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 988 "inst_test.m"
          check_hlds__inst_test__succeeded = MR_TRUE;
#line 988 "inst_test.m"
        else
#line 989 "inst_test.m"
          {
#line 989 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
#line 989 "inst_test.m"
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
#line 989 "inst_test.m"
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
#line 990 "inst_test.m"
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

#line 991 "inst_test.m"
            {
#line 991 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_unique_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
#line 989 "inst_test.m"
            if (check_hlds__inst_test__succeeded)
#line 992 "inst_test.m"
              {
#line 992 "inst_test.m"
                /* direct tailcall eliminated */
#line 992 "inst_test.m"
                {
#line 992 "inst_test.m"
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

#line 992 "inst_test.m"
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
#line 992 "inst_test.m"
                }
#line 992 "inst_test.m"
                continue;
#line 992 "inst_test.m"
              }
#line 989 "inst_test.m"
          }
#line 988 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 988 "inst_test.m"
      }
#line 988 "inst_test.m"
      break;
#line 988 "inst_test.m"
    }
#line 108 "inst_test.m"
}

#line 105 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(
#line 105 "inst_test.m"
  MR_Word check_hlds__inst_test__InstResults_4,
#line 105 "inst_test.m"
  MR_Word check_hlds__inst_test__BoundInsts_5,
#line 105 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_6)
#line 105 "inst_test.m"
{
#line 898 "inst_test.m"
  {
#line 898 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;

#line 898 "inst_test.m"
#line 898 "inst_test.m"
    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_4)) {
#line 898 "inst_test.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 898 "inst_test.m"
      case (MR_Integer) 0:
#line 898 "inst_test.m"
#line 898 "inst_test.m"
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_4)) {
#line 898 "inst_test.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 898 "inst_test.m"
          case (MR_Integer) 0:
#line 911 "inst_test.m"
            {
#line 911 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_test__BoundInsts_5, check_hlds__inst_test__ModuleInfo_6);
            }
#line 898 "inst_test.m"
            break;
#line 898 "inst_test.m"
          case (MR_Integer) 1:
#line 897 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 898 "inst_test.m"
            break;
#line 898 "inst_test.m"
        }
#line 898 "inst_test.m"
        break;
#line 898 "inst_test.m"
      case (MR_Integer) 1:
#line 899 "inst_test.m"
        {
#line 899 "inst_test.m"
          MR_Word check_hlds__inst_test__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 0)));
#line 899 "inst_test.m"
          MR_Word check_hlds__inst_test__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 1)));
#line 899 "inst_test.m"
          MR_Word check_hlds__inst_test__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 2)));
#line 899 "inst_test.m"
          MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 3)));
#line 899 "inst_test.m"
          MR_Word check_hlds__inst_test__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 4)));
#line 899 "inst_test.m"
          MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 5)));

#line 903 "inst_test.m"
#line 903 "inst_test.m"
          switch (check_hlds__inst_test__GroundnessResult_7) {
#line 903 "inst_test.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 903 "inst_test.m"
            case (MR_Integer) 2:
#line 903 "inst_test.m"
            case (MR_Integer) 0:
#line 907 "inst_test.m"
              {
#line 907 "inst_test.m"
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_test__BoundInsts_5, check_hlds__inst_test__ModuleInfo_6);
              }
#line 903 "inst_test.m"
              break;
#line 903 "inst_test.m"
            case (MR_Integer) 1:
#line 902 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 903 "inst_test.m"
              break;
#line 903 "inst_test.m"
          }
#line 899 "inst_test.m"
        }
#line 898 "inst_test.m"
        break;
#line 898 "inst_test.m"
    }
#line 898 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 898 "inst_test.m"
  }
#line 105 "inst_test.m"
}

#line 102 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(
#line 102 "inst_test.m"
  MR_Word check_hlds__inst_test__InstResults_5,
#line 102 "inst_test.m"
  MR_Word check_hlds__inst_test__BoundInsts_6,
#line 102 "inst_test.m"
  MR_Word check_hlds__inst_test__MaybeType_7,
#line 102 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_8)
#line 102 "inst_test.m"
{
#line 846 "inst_test.m"
  {
#line 846 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;

#line 846 "inst_test.m"
#line 846 "inst_test.m"
    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_5)) {
#line 846 "inst_test.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 846 "inst_test.m"
      case (MR_Integer) 0:
#line 846 "inst_test.m"
#line 846 "inst_test.m"
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_5)) {
#line 846 "inst_test.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 846 "inst_test.m"
          case (MR_Integer) 0:
#line 860 "inst_test.m"
            {
#line 860 "inst_test.m"
              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__BoundInsts_6, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__ModuleInfo_8);
            }
#line 846 "inst_test.m"
            break;
#line 846 "inst_test.m"
          case (MR_Integer) 1:
#line 845 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 846 "inst_test.m"
            break;
#line 846 "inst_test.m"
        }
#line 846 "inst_test.m"
        break;
#line 846 "inst_test.m"
      case (MR_Integer) 1:
#line 847 "inst_test.m"
        {
#line 847 "inst_test.m"
          MR_Word check_hlds__inst_test__GroundnessResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 0)));
#line 847 "inst_test.m"
          MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 1)));
#line 847 "inst_test.m"
          MR_Word check_hlds__inst_test__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 2)));
#line 847 "inst_test.m"
          MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 3)));
#line 847 "inst_test.m"
          MR_Word check_hlds__inst_test__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 4)));
#line 847 "inst_test.m"
          MR_Word check_hlds__inst_test__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 5)));

#line 851 "inst_test.m"
#line 851 "inst_test.m"
          switch (check_hlds__inst_test__GroundnessResult_9) {
#line 851 "inst_test.m"
            default:
#line 851 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_FALSE;
#line 851 "inst_test.m"
              break;
#line 851 "inst_test.m"
            case (MR_Integer) 2:
#line 856 "inst_test.m"
              {
#line 856 "inst_test.m"
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__BoundInsts_6, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__ModuleInfo_8);
              }
#line 851 "inst_test.m"
              break;
#line 851 "inst_test.m"
            case (MR_Integer) 1:
#line 850 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 851 "inst_test.m"
              break;
#line 851 "inst_test.m"
          }
#line 847 "inst_test.m"
        }
#line 846 "inst_test.m"
        break;
#line 846 "inst_test.m"
    }
#line 846 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 846 "inst_test.m"
  }
#line 102 "inst_test.m"
}

#line 99 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(
#line 99 "inst_test.m"
  MR_Word check_hlds__inst_test__InstResults_4,
#line 99 "inst_test.m"
  MR_Word check_hlds__inst_test__BoundInsts_5,
#line 99 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_6)
#line 99 "inst_test.m"
{
#line 824 "inst_test.m"
  {
#line 824 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;

#line 824 "inst_test.m"
#line 824 "inst_test.m"
    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_4)) {
#line 824 "inst_test.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 824 "inst_test.m"
      case (MR_Integer) 0:
#line 824 "inst_test.m"
#line 824 "inst_test.m"
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_4)) {
#line 824 "inst_test.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 824 "inst_test.m"
          case (MR_Integer) 0:
#line 837 "inst_test.m"
            {
#line 838 "inst_test.m"
              {
#line 838 "inst_test.m"
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__BoundInsts_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_test__ModuleInfo_6);
              }
#line 837 "inst_test.m"
            }
#line 824 "inst_test.m"
            break;
#line 824 "inst_test.m"
          case (MR_Integer) 1:
#line 823 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 824 "inst_test.m"
            break;
#line 824 "inst_test.m"
        }
#line 824 "inst_test.m"
        break;
#line 824 "inst_test.m"
      case (MR_Integer) 1:
#line 825 "inst_test.m"
        {
#line 825 "inst_test.m"
          MR_Word check_hlds__inst_test__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 0)));
#line 825 "inst_test.m"
          MR_Word check_hlds__inst_test__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 1)));
#line 825 "inst_test.m"
          MR_Word check_hlds__inst_test__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 2)));
#line 825 "inst_test.m"
          MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 3)));
#line 825 "inst_test.m"
          MR_Word check_hlds__inst_test__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 4)));
#line 825 "inst_test.m"
          MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 5)));

#line 829 "inst_test.m"
#line 829 "inst_test.m"
          switch (check_hlds__inst_test__GroundnessResult_7) {
#line 829 "inst_test.m"
            default:
#line 829 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_FALSE;
#line 829 "inst_test.m"
              break;
#line 829 "inst_test.m"
            case (MR_Integer) 2:
#line 833 "inst_test.m"
              {
#line 834 "inst_test.m"
                {
#line 834 "inst_test.m"
                  check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__BoundInsts_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_test__ModuleInfo_6);
                }
#line 833 "inst_test.m"
              }
#line 829 "inst_test.m"
              break;
#line 829 "inst_test.m"
            case (MR_Integer) 1:
#line 828 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 829 "inst_test.m"
              break;
#line 829 "inst_test.m"
          }
#line 825 "inst_test.m"
        }
#line 824 "inst_test.m"
        break;
#line 824 "inst_test.m"
    }
#line 824 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 824 "inst_test.m"
  }
#line 99 "inst_test.m"
}

#line 94 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(
#line 94 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_4,
#line 94 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_5,
#line 94 "inst_test.m"
  MR_Word * check_hlds__inst_test__Functors_6)
#line 94 "inst_test.m"
{
#line 797 "inst_test.m"
  while (MR_TRUE)
#line 797 "inst_test.m"
    {
#line 797 "inst_test.m"
      /* tailcall optimized into a loop */
#line 797 "inst_test.m"
      {
#line 797 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 797 "inst_test.m"
#line 797 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_5)) {
#line 797 "inst_test.m"
          default:
#line 797 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 797 "inst_test.m"
            break;
#line 797 "inst_test.m"
          case (MR_Integer) 3:
#line 797 "inst_test.m"
#line 797 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 0)))) {
#line 797 "inst_test.m"
              default:
#line 797 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 797 "inst_test.m"
                break;
#line 797 "inst_test.m"
              case (MR_Integer) 0:
#line 796 "inst_test.m"
                {
#line 796 "inst_test.m"
                  MR_Word check_hlds__inst_test___Uniq_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 1)));
#line 796 "inst_test.m"
                  MR_Word check_hlds__inst_test___InstResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 2)));

#line 796 "inst_test.m"
                  *check_hlds__inst_test__Functors_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 3)));
#line 796 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 796 "inst_test.m"
                }
#line 797 "inst_test.m"
                break;
#line 797 "inst_test.m"
              case (MR_Integer) 2:
#line 798 "inst_test.m"
                {
#line 799 "inst_test.m"
                  {
#line 799 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_bound_to_functors\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 798 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 798 "inst_test.m"
                }
#line 797 "inst_test.m"
                break;
#line 797 "inst_test.m"
              case (MR_Integer) 3:
#line 801 "inst_test.m"
                {
#line 801 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 2)));
#line 801 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 1)));

#line 802 "inst_test.m"
                  /* direct tailcall eliminated */
#line 802 "inst_test.m"
                  {
#line 802 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_5 = check_hlds__inst_test__SubInst_11;

#line 802 "inst_test.m"
                    check_hlds__inst_test__Inst_5 = check_hlds__inst_test__Inst__tmp_copy_5;
#line 802 "inst_test.m"
                  }
#line 802 "inst_test.m"
                  continue;
#line 801 "inst_test.m"
                }
#line 797 "inst_test.m"
                break;
#line 797 "inst_test.m"
              case (MR_Integer) 4:
#line 804 "inst_test.m"
                {
#line 804 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 1)));
#line 804 "inst_test.m"
                  MR_Word check_hlds__inst_test__NextInst_13;

#line 805 "inst_test.m"
                  {
#line 805 "inst_test.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_4, check_hlds__inst_test__InstName_12, &check_hlds__inst_test__NextInst_13);
                  }
#line 806 "inst_test.m"
                  /* direct tailcall eliminated */
#line 806 "inst_test.m"
                  {
#line 806 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_5 = check_hlds__inst_test__NextInst_13;

#line 806 "inst_test.m"
                    check_hlds__inst_test__Inst_5 = check_hlds__inst_test__Inst__tmp_copy_5;
#line 806 "inst_test.m"
                  }
#line 806 "inst_test.m"
                  continue;
#line 804 "inst_test.m"
                }
#line 797 "inst_test.m"
                break;
#line 797 "inst_test.m"
            }
#line 797 "inst_test.m"
            break;
#line 797 "inst_test.m"
        }
#line 797 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 797 "inst_test.m"
      }
#line 797 "inst_test.m"
      break;
#line 797 "inst_test.m"
    }
#line 94 "inst_test.m"
}

#line 92 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_bound_2_p_0(
#line 92 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 92 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 92 "inst_test.m"
{
#line 772 "inst_test.m"
  while (MR_TRUE)
#line 772 "inst_test.m"
    {
#line 772 "inst_test.m"
      /* tailcall optimized into a loop */
#line 772 "inst_test.m"
      {
#line 772 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 772 "inst_test.m"
#line 772 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) {
#line 772 "inst_test.m"
          default:
#line 772 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 772 "inst_test.m"
            break;
#line 772 "inst_test.m"
          case (MR_Integer) 0:
#line 772 "inst_test.m"
#line 772 "inst_test.m"
            switch (MR_unmkbody(check_hlds__inst_test__Inst_4)) {
#line 772 "inst_test.m"
              default:
#line 772 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 772 "inst_test.m"
                break;
#line 772 "inst_test.m"
              case (MR_Integer) 1:
#line 770 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 772 "inst_test.m"
                break;
#line 772 "inst_test.m"
            }
#line 772 "inst_test.m"
            break;
#line 772 "inst_test.m"
          case (MR_Integer) 2:
#line 768 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 772 "inst_test.m"
            break;
#line 772 "inst_test.m"
          case (MR_Integer) 3:
#line 772 "inst_test.m"
#line 772 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 0)))) {
#line 772 "inst_test.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 772 "inst_test.m"
              case (MR_Integer) 0:
#line 767 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 772 "inst_test.m"
                break;
#line 772 "inst_test.m"
              case (MR_Integer) 1:
#line 766 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 772 "inst_test.m"
                break;
#line 772 "inst_test.m"
              case (MR_Integer) 2:
#line 778 "inst_test.m"
                {
#line 779 "inst_test.m"
                  {
#line 779 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_bound\'/2", (MR_String) "uninstantiated inst parameter");
                  }
#line 778 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 778 "inst_test.m"
                }
#line 772 "inst_test.m"
                break;
#line 772 "inst_test.m"
              case (MR_Integer) 3:
#line 781 "inst_test.m"
                {
#line 781 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));
#line 781 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

#line 782 "inst_test.m"
                  /* direct tailcall eliminated */
#line 782 "inst_test.m"
                  {
#line 782 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__SubInst_17;

#line 782 "inst_test.m"
                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
#line 782 "inst_test.m"
                  }
#line 782 "inst_test.m"
                  continue;
#line 781 "inst_test.m"
                }
#line 772 "inst_test.m"
                break;
#line 772 "inst_test.m"
              case (MR_Integer) 4:
#line 784 "inst_test.m"
                {
#line 784 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
#line 784 "inst_test.m"
                  MR_Word check_hlds__inst_test__NextInst_19;

#line 785 "inst_test.m"
                  {
#line 785 "inst_test.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__InstName_18, &check_hlds__inst_test__NextInst_19);
                  }
#line 786 "inst_test.m"
                  /* direct tailcall eliminated */
#line 786 "inst_test.m"
                  {
#line 786 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__NextInst_19;

#line 786 "inst_test.m"
                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
#line 786 "inst_test.m"
                  }
#line 786 "inst_test.m"
                  continue;
#line 784 "inst_test.m"
                }
#line 772 "inst_test.m"
                break;
#line 772 "inst_test.m"
              case (MR_Integer) 5:
#line 769 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 772 "inst_test.m"
                break;
#line 772 "inst_test.m"
            }
#line 772 "inst_test.m"
            break;
#line 772 "inst_test.m"
        }
#line 772 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 772 "inst_test.m"
      }
#line 772 "inst_test.m"
      break;
#line 772 "inst_test.m"
    }
#line 92 "inst_test.m"
}

#line 86 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_any_2_p_0(
#line 86 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 86 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 86 "inst_test.m"
{
#line 742 "inst_test.m"
  while (MR_TRUE)
#line 742 "inst_test.m"
    {
#line 742 "inst_test.m"
      /* tailcall optimized into a loop */
#line 742 "inst_test.m"
      {
#line 742 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 742 "inst_test.m"
#line 742 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) {
#line 742 "inst_test.m"
          default:
#line 742 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 742 "inst_test.m"
            break;
#line 742 "inst_test.m"
          case (MR_Integer) 2:
#line 741 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 742 "inst_test.m"
            break;
#line 742 "inst_test.m"
          case (MR_Integer) 3:
#line 742 "inst_test.m"
#line 742 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 0)))) {
#line 742 "inst_test.m"
              default:
#line 742 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 742 "inst_test.m"
                break;
#line 742 "inst_test.m"
              case (MR_Integer) 2:
#line 752 "inst_test.m"
                {
#line 753 "inst_test.m"
                  {
#line 753 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_any\'/2", (MR_String) "uninstantiated inst parameter");
                  }
#line 752 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 752 "inst_test.m"
                }
#line 742 "inst_test.m"
                break;
#line 742 "inst_test.m"
              case (MR_Integer) 3:
#line 755 "inst_test.m"
                {
#line 755 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));
#line 755 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

#line 756 "inst_test.m"
                  /* direct tailcall eliminated */
#line 756 "inst_test.m"
                  {
#line 756 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__SubInst_17;

#line 756 "inst_test.m"
                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
#line 756 "inst_test.m"
                  }
#line 756 "inst_test.m"
                  continue;
#line 755 "inst_test.m"
                }
#line 742 "inst_test.m"
                break;
#line 742 "inst_test.m"
              case (MR_Integer) 4:
#line 758 "inst_test.m"
                {
#line 758 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
#line 758 "inst_test.m"
                  MR_Word check_hlds__inst_test__NextInst_19;

#line 759 "inst_test.m"
                  {
#line 759 "inst_test.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__InstName_18, &check_hlds__inst_test__NextInst_19);
                  }
#line 760 "inst_test.m"
                  /* direct tailcall eliminated */
#line 760 "inst_test.m"
                  {
#line 760 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__NextInst_19;

#line 760 "inst_test.m"
                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
#line 760 "inst_test.m"
                  }
#line 760 "inst_test.m"
                  continue;
#line 758 "inst_test.m"
                }
#line 742 "inst_test.m"
                break;
#line 742 "inst_test.m"
            }
#line 742 "inst_test.m"
            break;
#line 742 "inst_test.m"
        }
#line 742 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 742 "inst_test.m"
      }
#line 742 "inst_test.m"
      break;
#line 742 "inst_test.m"
    }
#line 86 "inst_test.m"
}

#line 84 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_free_2_p_0(
#line 84 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 84 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 84 "inst_test.m"
{
#line 718 "inst_test.m"
  while (MR_TRUE)
#line 718 "inst_test.m"
    {
#line 718 "inst_test.m"
      /* tailcall optimized into a loop */
#line 718 "inst_test.m"
      {
#line 718 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 718 "inst_test.m"
#line 718 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) {
#line 718 "inst_test.m"
          default:
#line 718 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 718 "inst_test.m"
            break;
#line 718 "inst_test.m"
          case (MR_Integer) 0:
#line 718 "inst_test.m"
#line 718 "inst_test.m"
            switch (MR_unmkbody(check_hlds__inst_test__Inst_4)) {
#line 718 "inst_test.m"
              default:
#line 718 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 718 "inst_test.m"
                break;
#line 718 "inst_test.m"
              case (MR_Integer) 0:
#line 715 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 718 "inst_test.m"
                break;
#line 718 "inst_test.m"
            }
#line 718 "inst_test.m"
            break;
#line 718 "inst_test.m"
          case (MR_Integer) 1:
#line 716 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_TRUE;
#line 718 "inst_test.m"
            break;
#line 718 "inst_test.m"
          case (MR_Integer) 3:
#line 718 "inst_test.m"
#line 718 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 0)))) {
#line 718 "inst_test.m"
              default:
#line 718 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 718 "inst_test.m"
                break;
#line 718 "inst_test.m"
              case (MR_Integer) 2:
#line 727 "inst_test.m"
                {
#line 728 "inst_test.m"
                  {
#line 728 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_free\'/2", (MR_String) "uninstantiated inst parameter");
                  }
#line 727 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 727 "inst_test.m"
                }
#line 718 "inst_test.m"
                break;
#line 718 "inst_test.m"
              case (MR_Integer) 3:
#line 730 "inst_test.m"
                {
#line 730 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));
#line 730 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

#line 731 "inst_test.m"
                  /* direct tailcall eliminated */
#line 731 "inst_test.m"
                  {
#line 731 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__SubInst_17;

#line 731 "inst_test.m"
                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
#line 731 "inst_test.m"
                  }
#line 731 "inst_test.m"
                  continue;
#line 730 "inst_test.m"
                }
#line 718 "inst_test.m"
                break;
#line 718 "inst_test.m"
              case (MR_Integer) 4:
#line 733 "inst_test.m"
                {
#line 733 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
#line 733 "inst_test.m"
                  MR_Word check_hlds__inst_test__NextInst_19;

#line 734 "inst_test.m"
                  {
#line 734 "inst_test.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__InstName_18, &check_hlds__inst_test__NextInst_19);
                  }
#line 735 "inst_test.m"
                  /* direct tailcall eliminated */
#line 735 "inst_test.m"
                  {
#line 735 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__NextInst_19;

#line 735 "inst_test.m"
                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
#line 735 "inst_test.m"
                  }
#line 735 "inst_test.m"
                  continue;
#line 733 "inst_test.m"
                }
#line 718 "inst_test.m"
                break;
#line 718 "inst_test.m"
            }
#line 718 "inst_test.m"
            break;
#line 718 "inst_test.m"
        }
#line 718 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 718 "inst_test.m"
      }
#line 718 "inst_test.m"
      break;
#line 718 "inst_test.m"
    }
#line 84 "inst_test.m"
}

#line 78 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_clobbered_2_p_0(
#line 78 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 78 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 78 "inst_test.m"
{
#line 692 "inst_test.m"
  while (MR_TRUE)
#line 692 "inst_test.m"
    {
#line 692 "inst_test.m"
      /* tailcall optimized into a loop */
#line 692 "inst_test.m"
      {
#line 692 "inst_test.m"
        MR_bool check_hlds__inst_test__succeeded;

#line 692 "inst_test.m"
#line 692 "inst_test.m"
        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) {
#line 692 "inst_test.m"
          default:
#line 692 "inst_test.m"
            check_hlds__inst_test__succeeded = MR_FALSE;
#line 692 "inst_test.m"
            break;
#line 692 "inst_test.m"
          case (MR_Integer) 2:
#line 692 "inst_test.m"
            {
#line 692 "inst_test.m"
              MR_Word check_hlds__inst_test__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_4, (MR_Integer) 0)));
#line 693 "inst_test.m"
              MR_Word check_hlds__inst_test__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

#line 692 "inst_test.m"
#line 692 "inst_test.m"
              switch (check_hlds__inst_test__V_31_31) {
#line 692 "inst_test.m"
                default:
#line 692 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_FALSE;
#line 692 "inst_test.m"
                  break;
#line 692 "inst_test.m"
                case (MR_Integer) 3:
#line 694 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 692 "inst_test.m"
                  break;
#line 692 "inst_test.m"
                case (MR_Integer) 4:
#line 693 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 692 "inst_test.m"
                  break;
#line 692 "inst_test.m"
              }
#line 692 "inst_test.m"
            }
#line 692 "inst_test.m"
            break;
#line 692 "inst_test.m"
          case (MR_Integer) 3:
#line 692 "inst_test.m"
#line 692 "inst_test.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 0)))) {
#line 692 "inst_test.m"
              default:
#line 692 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_FALSE;
#line 692 "inst_test.m"
                break;
#line 692 "inst_test.m"
              case (MR_Integer) 0:
#line 692 "inst_test.m"
                {
#line 692 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
#line 697 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 3)));
#line 697 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));

#line 692 "inst_test.m"
#line 692 "inst_test.m"
                  switch (check_hlds__inst_test__V_34_34) {
#line 692 "inst_test.m"
                    default:
#line 692 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_FALSE;
#line 692 "inst_test.m"
                      break;
#line 692 "inst_test.m"
                    case (MR_Integer) 3:
#line 697 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 692 "inst_test.m"
                      break;
#line 692 "inst_test.m"
                    case (MR_Integer) 4:
#line 698 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 692 "inst_test.m"
                      break;
#line 692 "inst_test.m"
                  }
#line 692 "inst_test.m"
                }
#line 692 "inst_test.m"
                break;
#line 692 "inst_test.m"
              case (MR_Integer) 1:
#line 692 "inst_test.m"
                {
#line 692 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
#line 695 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));

#line 692 "inst_test.m"
#line 692 "inst_test.m"
                  switch (check_hlds__inst_test__V_36_36) {
#line 692 "inst_test.m"
                    default:
#line 692 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_FALSE;
#line 692 "inst_test.m"
                      break;
#line 692 "inst_test.m"
                    case (MR_Integer) 3:
#line 695 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 692 "inst_test.m"
                      break;
#line 692 "inst_test.m"
                    case (MR_Integer) 4:
#line 696 "inst_test.m"
                      check_hlds__inst_test__succeeded = MR_TRUE;
#line 692 "inst_test.m"
                      break;
#line 692 "inst_test.m"
                  }
#line 692 "inst_test.m"
                }
#line 692 "inst_test.m"
                break;
#line 692 "inst_test.m"
              case (MR_Integer) 2:
#line 701 "inst_test.m"
                {
#line 702 "inst_test.m"
                  {
#line 702 "inst_test.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_clobbered\'/2", (MR_String) "uninstantiated inst parameter");
                  }
#line 701 "inst_test.m"
                  check_hlds__inst_test__succeeded = MR_TRUE;
#line 701 "inst_test.m"
                }
#line 692 "inst_test.m"
                break;
#line 692 "inst_test.m"
              case (MR_Integer) 3:
#line 704 "inst_test.m"
                {
#line 704 "inst_test.m"
                  MR_Word check_hlds__inst_test__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));
#line 704 "inst_test.m"
                  MR_Word check_hlds__inst_test__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

#line 705 "inst_test.m"
                  /* direct tailcall eliminated */
#line 705 "inst_test.m"
                  {
#line 705 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__SubInst_18;

#line 705 "inst_test.m"
                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
#line 705 "inst_test.m"
                  }
#line 705 "inst_test.m"
                  continue;
#line 704 "inst_test.m"
                }
#line 692 "inst_test.m"
                break;
#line 692 "inst_test.m"
              case (MR_Integer) 4:
#line 707 "inst_test.m"
                {
#line 707 "inst_test.m"
                  MR_Word check_hlds__inst_test__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
#line 707 "inst_test.m"
                  MR_Word check_hlds__inst_test__NextInst_20;

#line 708 "inst_test.m"
                  {
#line 708 "inst_test.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__InstName_19, &check_hlds__inst_test__NextInst_20);
                  }
#line 709 "inst_test.m"
                  /* direct tailcall eliminated */
#line 709 "inst_test.m"
                  {
#line 709 "inst_test.m"
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__NextInst_20;

#line 709 "inst_test.m"
                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
#line 709 "inst_test.m"
                  }
#line 709 "inst_test.m"
                  continue;
#line 707 "inst_test.m"
                }
#line 692 "inst_test.m"
                break;
#line 692 "inst_test.m"
            }
#line 692 "inst_test.m"
            break;
#line 692 "inst_test.m"
        }
#line 692 "inst_test.m"
        return check_hlds__inst_test__succeeded;
#line 692 "inst_test.m"
      }
#line 692 "inst_test.m"
      break;
#line 692 "inst_test.m"
    }
#line 78 "inst_test.m"
}

#line 72 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_p_0(
#line 72 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 72 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 72 "inst_test.m"
{
#line 624 "inst_test.m"
  {
#line 624 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 624 "inst_test.m"
    MR_Word check_hlds__inst_test__Expansions0_5;
#line 626 "inst_test.m"
    MR_Word check_hlds__inst_test___Expansions_6;

#line 625 "inst_test.m"
    {
#line 625 "inst_test.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
#line 626 "inst_test.m"
    {
#line 626 "inst_test.m"
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
#line 624 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 624 "inst_test.m"
  }
#line 72 "inst_test.m"
}

#line 68 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(
#line 68 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 68 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 68 "inst_test.m"
{
#line 566 "inst_test.m"
  {
#line 566 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 566 "inst_test.m"
    MR_Word check_hlds__inst_test__Expansions0_5;
#line 568 "inst_test.m"
    MR_Word check_hlds__inst_test___Expansions_6;

#line 567 "inst_test.m"
    {
#line 567 "inst_test.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
#line 568 "inst_test.m"
    {
#line 568 "inst_test.m"
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
#line 566 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 566 "inst_test.m"
  }
#line 68 "inst_test.m"
}

#line 64 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_p_0(
#line 64 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 64 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 64 "inst_test.m"
{
#line 506 "inst_test.m"
  {
#line 506 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 506 "inst_test.m"
    MR_Word check_hlds__inst_test__Expansions0_5;
#line 508 "inst_test.m"
    MR_Word check_hlds__inst_test___Expansions_6;

#line 507 "inst_test.m"
    {
#line 507 "inst_test.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
#line 508 "inst_test.m"
    {
#line 508 "inst_test.m"
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
#line 506 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 506 "inst_test.m"
  }
#line 64 "inst_test.m"
}

#line 55 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_p_0(
#line 55 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 55 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 55 "inst_test.m"
{
#line 454 "inst_test.m"
  {
#line 454 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 454 "inst_test.m"
    MR_Word check_hlds__inst_test__Expansions0_5;
#line 456 "inst_test.m"
    MR_Word check_hlds__inst_test___Expansions_6;

#line 455 "inst_test.m"
    {
#line 455 "inst_test.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
#line 456 "inst_test.m"
    {
#line 456 "inst_test.m"
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
#line 454 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 454 "inst_test.m"
  }
#line 55 "inst_test.m"
}

#line 47 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_p_0(
#line 47 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 47 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 47 "inst_test.m"
{
#line 409 "inst_test.m"
  {
#line 409 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 409 "inst_test.m"
    MR_Word check_hlds__inst_test__Expansions0_5;
#line 411 "inst_test.m"
    MR_Word check_hlds__inst_test___Expansions_6;

#line 410 "inst_test.m"
    {
#line 410 "inst_test.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
#line 411 "inst_test.m"
    {
#line 411 "inst_test.m"
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
#line 409 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 409 "inst_test.m"
  }
#line 47 "inst_test.m"
}

#line 39 "inst_test.m"
MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_2_p_0(
#line 39 "inst_test.m"
  MR_Word check_hlds__inst_test__ModuleInfo_3,
#line 39 "inst_test.m"
  MR_Word check_hlds__inst_test__Inst_4)
#line 39 "inst_test.m"
{
#line 203 "inst_test.m"
  {
#line 203 "inst_test.m"
    MR_bool check_hlds__inst_test__succeeded;
#line 204 "inst_test.m"
    MR_Word check_hlds__inst_test__Found_5;
#line 204 "inst_test.m"
    MR_Word check_hlds__inst_test__OldIsGround_6;

#line 291 "inst_test.m"
{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_4 ;
		{
#line 291 "inst_test.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (inst_is_ground_cache[hash].iig_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
    }

#line 8026 "check_hlds.inst_test.c"

		;}
#undef MR_PROC_LABEL
	 check_hlds__inst_test__Found_5  = Found;
	 check_hlds__inst_test__OldIsGround_6  = IsGround;
#line 291 "inst_test.m"
}
#line 212 "inst_test.m"
#line 212 "inst_test.m"
    switch (check_hlds__inst_test__Found_5) {
#line 212 "inst_test.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 212 "inst_test.m"
      case (MR_Integer) 0:
#line 220 "inst_test.m"
        {
#line 217 "inst_test.m"
          MR_Word check_hlds__inst_test__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 217 "inst_test.m"
          MR_Word check_hlds__inst_test__Expansions0_21;
#line 350 "inst_test.m"
          MR_Word check_hlds__inst_test__V_30_30;
#line 350 "inst_test.m"
          MR_Word check_hlds__inst_test__V_31_31;

#line 336 "inst_test.m"
          {
#line 336 "inst_test.m"
            check_hlds__inst_test__Expansions0_21 = mercury__set_tree234__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
          }
#line 350 "inst_test.m"
          check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) == (MR_mktag((MR_Integer) 2)));
#line 350 "inst_test.m"
          if (check_hlds__inst_test__succeeded)
#line 350 "inst_test.m"
            {
#line 350 "inst_test.m"
              check_hlds__inst_test__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_4, (MR_Integer) 0)));
#line 350 "inst_test.m"
              check_hlds__inst_test__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
#line 351 "inst_test.m"
              {
#line 351 "inst_test.m"
                check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__Expansions0_21, ((MR_Box) (check_hlds__inst_test__Inst_4)));
              }
#line 353 "inst_test.m"
              if (check_hlds__inst_test__succeeded)
#line 353 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 353 "inst_test.m"
              else
#line 354 "inst_test.m"
                {
#line 354 "inst_test.m"
                  MR_Word check_hlds__inst_test___Expansions_37;

#line 354 "inst_test.m"
                  {
#line 354 "inst_test.m"
                    check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__V_11_11, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_21, &check_hlds__inst_test___Expansions_37);
                  }
#line 354 "inst_test.m"
                }
#line 350 "inst_test.m"
            }
#line 350 "inst_test.m"
          else
#line 361 "inst_test.m"
            {
#line 361 "inst_test.m"
              MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_33;

#line 358 "inst_test.m"
              {
#line 358 "inst_test.m"
                check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_4)), check_hlds__inst_test__Expansions0_21, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_33);
              }
#line 361 "inst_test.m"
              if (check_hlds__inst_test__succeeded)
#line 360 "inst_test.m"
                {
#line 360 "inst_test.m"
                  MR_Word check_hlds__inst_test___Expansions_38;

#line 360 "inst_test.m"
                  {
#line 360 "inst_test.m"
                    check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__V_11_11, check_hlds__inst_test__Inst_4, check_hlds__inst_test__STATE_VARIABLE_Expansions_15_33, &check_hlds__inst_test___Expansions_38);
                  }
#line 360 "inst_test.m"
                }
#line 361 "inst_test.m"
              else
#line 361 "inst_test.m"
                check_hlds__inst_test__succeeded = MR_TRUE;
#line 361 "inst_test.m"
            }
#line 220 "inst_test.m"
          if (check_hlds__inst_test__succeeded)
#line 218 "inst_test.m"
            {
#line 316 "inst_test.m"
{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_4 ;
	IsGround =  (MR_Integer) 1 ;
		{
#line 316 "inst_test.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;

#line 8149 "check_hlds.inst_test.c"

		;}
#undef MR_PROC_LABEL
#line 316 "inst_test.m"
}
#line 218 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_TRUE;
#line 218 "inst_test.m"
            }
#line 220 "inst_test.m"
          else
#line 221 "inst_test.m"
            {
#line 316 "inst_test.m"
{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_4 ;
	IsGround =  (MR_Integer) 0 ;
		{
#line 316 "inst_test.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;

#line 8184 "check_hlds.inst_test.c"

		;}
#undef MR_PROC_LABEL
#line 316 "inst_test.m"
}
#line 222 "inst_test.m"
              check_hlds__inst_test__succeeded = MR_FALSE;
#line 221 "inst_test.m"
            }
#line 220 "inst_test.m"
        }
#line 212 "inst_test.m"
        break;
#line 212 "inst_test.m"
      case (MR_Integer) 1:
#line 211 "inst_test.m"
        check_hlds__inst_test__succeeded = (check_hlds__inst_test__OldIsGround_6 == (MR_Integer) 1);
#line 212 "inst_test.m"
        break;
#line 212 "inst_test.m"
    }
#line 203 "inst_test.m"
    return check_hlds__inst_test__succeeded;
#line 203 "inst_test.m"
  }
#line 39 "inst_test.m"
}

void mercury__check_hlds__inst_test__init(void)
{
}

void mercury__check_hlds__inst_test__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_test__check_hlds__inst_test__type_ctor_info_inst_names_0);
}

void mercury__check_hlds__inst_test__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_test. */
