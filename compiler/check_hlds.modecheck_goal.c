/*
** Automatically generated from `modecheck_goal.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module check_hlds.modecheck_goal. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_goal__init
ENDINIT
*/

#include "check_hlds.modecheck_goal.mih"


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
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_conj.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "std_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
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



struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s {
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5;
  MR_bool check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14;
  jmp_buf check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct0 check_hlds__modecheck_goal____vpti_pred_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0[1];

static const MR_NotagFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0[2];

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0[2];

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001(
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001(
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001(
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001(
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001(
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001(
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5);

static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(
  MR_Word check_hlds__modecheck_goal__TermVar_8,
  MR_Word check_hlds__modecheck_goal__ConjGoals0_9,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_0_23,
  MR_Word * check_hlds__modecheck_goal__SubGoal_12,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_24,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1476__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__InnerUOType_33,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_75);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1474__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__InnerDIType_32,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_70);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1469__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__OuterDIType_27,
  MR_Word check_hlds__modecheck_goal__OuterUOType_28);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__984__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__PolySpecs_23,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_36);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__815__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__Kind1_40,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_73);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0(
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(
  void * check_hlds__modecheck_goal__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(
  void * check_hlds__modecheck_goal__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(
  void * check_hlds__modecheck_goal__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0(
  MR_Word check_hlds__modecheck_goal__NegCtxtDesc_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word check_hlds__modecheck_goal__InstMap0_3,
  MR_Word check_hlds__modecheck_goal__InstMap_4,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_6);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_orelse_list_5_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_5);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3(
  MR_Box check_hlds__modecheck_goal__closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2(
  MR_Box check_hlds__modecheck_goal__closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(
  MR_Word check_hlds__modecheck_goal__ShortHand0_6,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);

static MR_Box MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(
  MR_Word check_hlds__modecheck_goal__Attributes_12,
  MR_Word check_hlds__modecheck_goal__PredId_13,
  MR_Integer check_hlds__modecheck_goal__ProcId0_14,
  MR_Word check_hlds__modecheck_goal__Args0_15,
  MR_Word check_hlds__modecheck_goal__ExtraArgs_16,
  MR_Word check_hlds__modecheck_goal__MaybeTraceRuntimeCond_17,
  MR_Word check_hlds__modecheck_goal__PragmaCode_18,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_19,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_20,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(
  MR_Word check_hlds__modecheck_goal__LHS0_9,
  MR_Word check_hlds__modecheck_goal__RHS0_10,
  MR_Word check_hlds__modecheck_goal__Unification0_11,
  MR_Word check_hlds__modecheck_goal__UnifyContext_12,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_13,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_14,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(
  MR_Word check_hlds__modecheck_goal__GenericCall_8,
  MR_Word check_hlds__modecheck_goal__Args0_9,
  MR_Word check_hlds__modecheck_goal__Modes0_10,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_11,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_12,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_62,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(
  MR_Word check_hlds__modecheck_goal__PredId_10,
  MR_Integer check_hlds__modecheck_goal__ProcId0_11,
  MR_Word check_hlds__modecheck_goal__Args0_12,
  MR_Word check_hlds__modecheck_goal__MaybeCallUnifyContext_13,
  MR_Word check_hlds__modecheck_goal__PredName_14,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_15,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_16,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(
  MR_Word check_hlds__modecheck_goal__SubGoal_5,
  MR_Word check_hlds__modecheck_goal__TermVar_6,
  MR_Word check_hlds__modecheck_goal__TermVarInst_7,
  MR_Word * check_hlds__modecheck_goal__MaybeGroundTermMode_8);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(
  MR_Word check_hlds__modecheck_goal__TermVar_7,
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
  MR_Word * check_hlds__modecheck_goal__MaybeKindAndSubGoal_10,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(
  MR_Word check_hlds__modecheck_goal__Type_7,
  MR_Word check_hlds__modecheck_goal__Context_8,
  MR_Word * check_hlds__modecheck_goal__TypeInfoVar_9,
  MR_Word * check_hlds__modecheck_goal__TypeInfoGoals_10,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(
  MR_Word check_hlds__modecheck_goal__TermVar_7,
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_10,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4(
  MR_Box check_hlds__modecheck_goal__closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3(
  MR_Box check_hlds__modecheck_goal__closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2(
  MR_Box check_hlds__modecheck_goal__closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(
  MR_Word check_hlds__modecheck_goal__Reason_7,
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_10,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(
  MR_Word check_hlds__modecheck_goal__SubGoal0_6,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(
  MR_Word check_hlds__modecheck_goal__Vars_9,
  MR_Word check_hlds__modecheck_goal__Cond0_10,
  MR_Word check_hlds__modecheck_goal__Then0_11,
  MR_Word check_hlds__modecheck_goal__Else0_12,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_13,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_14,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4,
  MR_Word check_hlds__modecheck_goal__Case0_5,
  MR_Word * check_hlds__modecheck_goal__Case_6);

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3);

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4,
  MR_Word check_hlds__modecheck_goal__Goal0_5,
  MR_Word * check_hlds__modecheck_goal__Goal_6);

static void MR_CALL 
check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_3);

static MR_Word MR_CALL 
check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(
  MR_Word check_hlds__modecheck_goal__Goal_3);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_case_list_8_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word * check_hlds__modecheck_goal__HeadVar__4_4,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_6,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_8);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(
  MR_Word check_hlds__modecheck_goal__Var_8,
  MR_Word check_hlds__modecheck_goal__CanFail_9,
  MR_Word check_hlds__modecheck_goal__Cases0_10,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_11,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_12,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_disj_list_7_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_5,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(
  MR_Word check_hlds__modecheck_goal__Disjuncts0_6,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_20,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21);


static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_3[3][6];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_5[4][5];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_6[1][4];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_7[1][1];




static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[2])),
    ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_from_ground_term_kind_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_from_ground_term_kind_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__modecheck_goal____vpti_pred_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct0 check_hlds__modecheck_goal____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 = {
  (MR_String) "construct_var_info",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "construct_var_info",
  {     &check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 },
  {     &check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "construct_var_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0 = {
  (MR_String) "construct_ground_term",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1 = {
  (MR_String) "deconstruct_ground_term",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0[1] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1[1] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1
};

static const MR_DuPtagLayout check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0[2] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0,
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1
};

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "ground_term_mode",
  {     check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0 },
  {     check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0
};

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001(
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    {
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal____Unify____construct_var_info_0_0(((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001(
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_goal__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_goal____Compare____construct_var_info_0_0(&check_hlds__modecheck_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_3));
    }
    *check_hlds__modecheck_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_goal__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001(
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    {
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001(
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_goal__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(&check_hlds__modecheck_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_3));
    }
    *check_hlds__modecheck_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_goal__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001(
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    {
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001(
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_2,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_goal__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(&check_hlds__modecheck_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_3));
    }
    *check_hlds__modecheck_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_goal__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    if ((check_hlds__modecheck_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5 = check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4;
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_goal__Goal_13;
        MR_Word check_hlds__modecheck_goal__Goals_14;
        MR_Word check_hlds__modecheck_goal__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_11, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_11, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_55_55;
        MR_Word check_hlds__modecheck_goal__LHSVar_18;
        MR_Word check_hlds__modecheck_goal__RHS_19;
        MR_Word check_hlds__modecheck_goal__UnifyContext_22;
        MR_Word check_hlds__modecheck_goal__ConsId_23;
        MR_Word check_hlds__modecheck_goal__RHSVars_24;
        MR_Word check_hlds__modecheck_goal__V_42_42;
        MR_Word check_hlds__modecheck_goal__V_20_20;
        MR_Word check_hlds__modecheck_goal__V_21_21;

        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr0_16)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__modecheck_goal__succeeded)
          {
            check_hlds__modecheck_goal__LHSVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 0)));
            check_hlds__modecheck_goal__RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 1)));
            check_hlds__modecheck_goal__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 2)));
            check_hlds__modecheck_goal__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 3)));
            check_hlds__modecheck_goal__UnifyContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_16, (MR_Integer) 4)));
            check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__RHS_19)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__modecheck_goal__succeeded)
              {
                check_hlds__modecheck_goal__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_19, (MR_Integer) 0)));
                check_hlds__modecheck_goal__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_19, (MR_Integer) 1)));
                check_hlds__modecheck_goal__RHSVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_19, (MR_Integer) 2)));
                check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_42_42 == (MR_Integer) 0);
              }
          }
        if (check_hlds__modecheck_goal__succeeded)
          {
            MR_Word check_hlds__modecheck_goal__ArgInsts_25;
            MR_Word check_hlds__modecheck_goal__UniModes_26;
            MR_Word check_hlds__modecheck_goal__BoundInst_27;
            MR_Word check_hlds__modecheck_goal__TermInst_28;
            MR_Word check_hlds__modecheck_goal__LHSMode_29;
            MR_Word check_hlds__modecheck_goal__RHSMode_30;
            MR_Word check_hlds__modecheck_goal__UnifyMode_31;
            MR_Word check_hlds__modecheck_goal__Unification_34;
            MR_Word check_hlds__modecheck_goal__GoalExpr_35;
            MR_Word check_hlds__modecheck_goal__InstMapDelta_36;
            MR_Word check_hlds__modecheck_goal__GoalInfo1_37;
            MR_Word check_hlds__modecheck_goal__GoalInfo_38;
            MR_Word check_hlds__modecheck_goal__LHSVarInfo_39;
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_43_43;
            MR_Word check_hlds__modecheck_goal__V_46_46;
            MR_Word check_hlds__modecheck_goal__V_51_51;
            MR_Word check_hlds__modecheck_goal__V_52_52;

            {
              check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(check_hlds__modecheck_goal__RHSVars_24, &check_hlds__modecheck_goal__ArgInsts_25, &check_hlds__modecheck_goal__UniModes_26, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4, &check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_43_43);
            }
            {
              check_hlds__modecheck_goal__BoundInst_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__BoundInst_27, 0) = ((MR_Box) (check_hlds__modecheck_goal__ConsId_23));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__BoundInst_27, 1) = ((MR_Box) (check_hlds__modecheck_goal__ArgInsts_25));
            }
            {
              check_hlds__modecheck_goal__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_46_46, 0) = ((MR_Box) (check_hlds__modecheck_goal__BoundInst_27));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__modecheck_goal__TermInst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermInst_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermInst_28, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermInst_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermInst_28, 3) = ((MR_Box) (check_hlds__modecheck_goal__V_46_46));
            }
            {
              check_hlds__modecheck_goal__LHSMode_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__LHSMode_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__LHSMode_29, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermInst_28));
            }
            {
              check_hlds__modecheck_goal__RHSMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__RHSMode_30, 0) = ((MR_Box) (check_hlds__modecheck_goal__TermInst_28));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__RHSMode_30, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermInst_28));
            }
            {
              check_hlds__modecheck_goal__UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UnifyMode_31, 0) = ((MR_Box) (check_hlds__modecheck_goal__LHSMode_29));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UnifyMode_31, 1) = ((MR_Box) (check_hlds__modecheck_goal__RHSMode_30));
            }
            {
              check_hlds__modecheck_goal__Unification_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 0) = ((MR_Box) (check_hlds__modecheck_goal__LHSVar_18));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 1) = ((MR_Box) (check_hlds__modecheck_goal__ConsId_23));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 2) = ((MR_Box) (check_hlds__modecheck_goal__RHSVars_24));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 3) = ((MR_Box) (check_hlds__modecheck_goal__UniModes_26));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 5) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Unification_34, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__modecheck_goal__GoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 0) = ((MR_Box) (check_hlds__modecheck_goal__LHSVar_18));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 1) = ((MR_Box) (check_hlds__modecheck_goal__RHS_19));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 2) = ((MR_Box) (check_hlds__modecheck_goal__UnifyMode_31));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 3) = ((MR_Box) (check_hlds__modecheck_goal__Unification_34));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_35, 4) = ((MR_Box) (check_hlds__modecheck_goal__UnifyContext_22));
            }
            {
              check_hlds__modecheck_goal__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 0) = ((MR_Box) (check_hlds__modecheck_goal__LHSVar_18));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermInst_28));
            }
            {
              check_hlds__modecheck_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_51_51, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_52_52));
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__modecheck_goal__InstMapDelta_36 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_goal__V_51_51);
            }
            {
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_36, check_hlds__modecheck_goal__GoalInfo0_17, &check_hlds__modecheck_goal__GoalInfo1_37);
            }
            {
              hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__GoalInfo1_37, &check_hlds__modecheck_goal__GoalInfo_38);
            }
            {
              check_hlds__modecheck_goal__Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_13, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_35));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_13, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_38));
            }
            check_hlds__modecheck_goal__LHSVarInfo_39 = (MR_Word) check_hlds__modecheck_goal__TermInst_28;
            {
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0, ((MR_Box) (check_hlds__modecheck_goal__LHSVar_18)), ((MR_Box) (check_hlds__modecheck_goal__LHSVarInfo_39)), check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_43_43, &check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_55_55);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_ground_term_construct_goal_loop\'/5", (MR_String) "not rhs_functor unify");
              return;
            }
          }
        {
          check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(check_hlds__modecheck_goal__Goals0_12, &check_hlds__modecheck_goal__Goals_14, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_55_55, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_14));
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(
  MR_Word check_hlds__modecheck_goal__TermVar_8,
  MR_Word check_hlds__modecheck_goal__ConjGoals0_9,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_0_23,
  MR_Word * check_hlds__modecheck_goal__SubGoal_12,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_24,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__TypeInfo_34_34 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
    MR_Word check_hlds__modecheck_goal__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0;
    MR_Word check_hlds__modecheck_goal__LocalVarMap0_14;
    MR_Word check_hlds__modecheck_goal__ConjGoals_15;
    MR_Word check_hlds__modecheck_goal__LocalVarMap_16;
    MR_Word check_hlds__modecheck_goal__TermVarInfo_17;
    MR_Word check_hlds__modecheck_goal__TermVarInst_18;
    MR_Word check_hlds__modecheck_goal__InstMapDelta_19;
    MR_Word check_hlds__modecheck_goal__SubGoalExpr_20;
    MR_Word check_hlds__modecheck_goal__InstMap0_21;
    MR_Word check_hlds__modecheck_goal__InstMap_22;
    MR_Word check_hlds__modecheck_goal__V_26_26;
    MR_Word check_hlds__modecheck_goal__V_27_27;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_29_29;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_31_31;
    MR_Box check_hlds__modecheck_goal__conv0_TermVarInfo_17;

    {
      mercury__map__init_1_p_0(check_hlds__modecheck_goal__TypeInfo_34_34, check_hlds__modecheck_goal__TypeCtorInfo_35_35, &check_hlds__modecheck_goal__LocalVarMap0_14);
    }
    {
      check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(check_hlds__modecheck_goal__ConjGoals0_9, &check_hlds__modecheck_goal__ConjGoals_15, check_hlds__modecheck_goal__LocalVarMap0_14, &check_hlds__modecheck_goal__LocalVarMap_16);
    }
    {
      mercury__map__lookup_3_p_0(check_hlds__modecheck_goal__TypeInfo_34_34, check_hlds__modecheck_goal__TypeCtorInfo_35_35, check_hlds__modecheck_goal__LocalVarMap_16, ((MR_Box) (check_hlds__modecheck_goal__TermVar_8)), &check_hlds__modecheck_goal__conv0_TermVarInfo_17);
    }
    check_hlds__modecheck_goal__TermVarInfo_17 = ((MR_Word) check_hlds__modecheck_goal__conv0_TermVarInfo_17);
    check_hlds__modecheck_goal__TermVarInst_18 = (MR_Word) check_hlds__modecheck_goal__TermVarInfo_17;
    {
      check_hlds__modecheck_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_27_27, 0) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_8));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_27_27, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVarInst_18));
    }
    {
      check_hlds__modecheck_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_26_26, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_27_27));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_goal__InstMapDelta_19 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_goal__V_26_26);
    }
    {
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_19, check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_0_23, &check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_29_29);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_29_29, &check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_31_31);
    }
    {
      check_hlds__modecheck_goal__SubGoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_20, 2) = ((MR_Box) (check_hlds__modecheck_goal__ConjGoals_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__modecheck_goal__SubGoal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__STATE_VARIABLE_SubGoalInfo_31_31));
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_24, &check_hlds__modecheck_goal__InstMap0_21);
    }
    {
      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_goal__TermVar_8, check_hlds__modecheck_goal__TermVarInst_18, check_hlds__modecheck_goal__InstMap0_21, &check_hlds__modecheck_goal__InstMap_22);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_22, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_24, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1476__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__InnerUOType_33,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_75)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    {
      check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__InnerUOType_33, check_hlds__modecheck_goal__HeadVar__2_75);
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1474__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__InnerDIType_32,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_70)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    {
      check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__InnerDIType_32, check_hlds__modecheck_goal__HeadVar__2_70);
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1469__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__OuterDIType_27,
  MR_Word check_hlds__modecheck_goal__OuterUOType_28)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    {
      check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__OuterDIType_27, check_hlds__modecheck_goal__OuterUOType_28);
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__984__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__PolySpecs_23,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_36)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    {
      check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_goal__PolySpecs_23)), ((MR_Box) (check_hlds__modecheck_goal__HeadVar__2_36)));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__815__1_2_p_0(
  MR_Word check_hlds__modecheck_goal__Kind1_40,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_73)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__Kind1_40 == check_hlds__modecheck_goal__HeadVar__2_73);

    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Integer check_hlds__modecheck_goal__CastX_12 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__2_2;
    MR_Integer check_hlds__modecheck_goal__CastY_13 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__3_3;

    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__CastX_12 == check_hlds__modecheck_goal__CastY_13);
    if (check_hlds__modecheck_goal__succeeded)
      *check_hlds__modecheck_goal__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word check_hlds__modecheck_goal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word check_hlds__modecheck_goal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2], check_hlds__modecheck_goal__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_goal__V_16_16)), ((MR_Box) (check_hlds__modecheck_goal__V_5_5)));
            }
          }
        else
          *check_hlds__modecheck_goal__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *check_hlds__modecheck_goal__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__modecheck_goal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2], check_hlds__modecheck_goal__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_goal__V_17_17)), ((MR_Box) (check_hlds__modecheck_goal__V_11_11)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Integer check_hlds__modecheck_goal__CastX_7 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__1_1;
    MR_Integer check_hlds__modecheck_goal__CastY_8 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__2_2;

    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__CastX_7 == check_hlds__modecheck_goal__CastY_8);
    if (check_hlds__modecheck_goal__succeeded)
      check_hlds__modecheck_goal__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word check_hlds__modecheck_goal__TypeInfo_9_9;
        MR_Word check_hlds__modecheck_goal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__V_4_4;

        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__modecheck_goal__succeeded)
          {
            check_hlds__modecheck_goal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modecheck_goal__TypeInfo_9_9 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2];
            {
              check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_goal__TypeInfo_9_9, ((MR_Box) (check_hlds__modecheck_goal__V_3_3)), ((MR_Box) (check_hlds__modecheck_goal__V_4_4)));
            }
          }
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__TypeInfo_10_10;
        MR_Word check_hlds__modecheck_goal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__V_6_6;

        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__modecheck_goal__succeeded)
          {
            check_hlds__modecheck_goal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modecheck_goal__TypeInfo_10_10 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2];
            {
              check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_goal__TypeInfo_10_10, ((MR_Box) (check_hlds__modecheck_goal__V_5_5)), ((MR_Box) (check_hlds__modecheck_goal__V_6_6)));
            }
          }
      }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__Cast_HeadVar1_4 = check_hlds__modecheck_goal__HeadVar__2_2;
    MR_Word check_hlds__modecheck_goal__Cast_HeadVar2_5 = check_hlds__modecheck_goal__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_2[0], check_hlds__modecheck_goal__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_goal__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_goal__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__Cast_HeadVar1_3 = check_hlds__modecheck_goal__HeadVar__1_1;
    MR_Word check_hlds__modecheck_goal__Cast_HeadVar2_4 = check_hlds__modecheck_goal__HeadVar__2_2;

    {
      check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_2[0], ((MR_Box) (check_hlds__modecheck_goal__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_goal__Cast_HeadVar2_4)));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0(
  MR_Word * check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word check_hlds__modecheck_goal__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Integer check_hlds__modecheck_goal__CastX_6 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__2_2;
    MR_Integer check_hlds__modecheck_goal__CastY_7 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__3_3;

    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__CastX_6 == check_hlds__modecheck_goal__CastY_7);
    if (check_hlds__modecheck_goal__succeeded)
      *check_hlds__modecheck_goal__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__modecheck_goal__V_4_4 = (MR_Word) check_hlds__modecheck_goal__HeadVar__2_2;
        MR_Word check_hlds__modecheck_goal__V_5_5 = (MR_Word) check_hlds__modecheck_goal__HeadVar__3_3;

        {
          parse_tree__prog_data____Compare____mer_inst_0_0(check_hlds__modecheck_goal__HeadVar__1_1, check_hlds__modecheck_goal__V_4_4, check_hlds__modecheck_goal__V_5_5);
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Integer check_hlds__modecheck_goal__CastX_5 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__1_1;
    MR_Integer check_hlds__modecheck_goal__CastY_6 = (MR_Integer) check_hlds__modecheck_goal__HeadVar__2_2;

    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__CastX_5 == check_hlds__modecheck_goal__CastY_6);
    if (check_hlds__modecheck_goal__succeeded)
      check_hlds__modecheck_goal__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__modecheck_goal__V_3_3 = (MR_Word) check_hlds__modecheck_goal__HeadVar__1_1;
        MR_Word check_hlds__modecheck_goal__V_4_4 = (MR_Word) check_hlds__modecheck_goal__HeadVar__2_2;

        {
          check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_goal__V_3_3, check_hlds__modecheck_goal__V_4_4);
        }
      }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(
  void * check_hlds__modecheck_goal__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(
  void * check_hlds__modecheck_goal__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5, &(check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20);
    }
    {
      (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
    }
    if ((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
      {
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(check_hlds__modecheck_goal__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(
  void * check_hlds__modecheck_goal__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * check_hlds__modecheck_goal__env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) check_hlds__modecheck_goal__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0) == 0)
      {
        {
          {
            hlds__instmap__instmap_lookup_var_3_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14, &(check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
          }
          {
            check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(check_hlds__modecheck_goal__env_ptr);
          }
        }
        {
          {
            hlds__instmap__instmap_lookup_var_3_p_0((check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4, (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14, &(check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
          }
          {
            check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(check_hlds__modecheck_goal__env_ptr);
          }
        }
        (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__modecheck_goal__env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0(
  MR_Word check_hlds__modecheck_goal__NegCtxtDesc_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word check_hlds__modecheck_goal__InstMap0_3,
  MR_Word check_hlds__modecheck_goal__InstMap_4,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_6)
{
  {
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s check_hlds__modecheck_goal__env;

    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3 = check_hlds__modecheck_goal__InstMap0_3;
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4 = check_hlds__modecheck_goal__InstMap_4;
    (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_5;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((check_hlds__modecheck_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_6 = (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5;
        else
          {
            MR_Word check_hlds__modecheck_goal__NonLocals_15;

            (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modecheck_goal__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 1)));
            {
              check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(&check_hlds__modecheck_goal__env);
            }
            if ((check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
              {
                MR_Word check_hlds__modecheck_goal__WaitingVars_21;
                MR_Word check_hlds__modecheck_goal__ModeError_22;

                {
                  check_hlds__modecheck_goal__WaitingVars_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14);
                }
                {
                  check_hlds__modecheck_goal__ModeError_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ModeError_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ModeError_22, 1) = ((MR_Box) (check_hlds__modecheck_goal__NegCtxtDesc_1));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ModeError_22, 2) = ((MR_Box) ((check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14));
                }
                {
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_goal__WaitingVars_21, check_hlds__modecheck_goal__ModeError_22, (check_hlds__modecheck_goal__env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_6);
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_goal__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_goal__NonLocals_15;

                  check_hlds__modecheck_goal__HeadVar__2_2 = check_hlds__modecheck_goal__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        break;
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_orelse_list_5_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_5)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__modecheck_goal__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4;
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_goal__Goal_11;
        MR_Word check_hlds__modecheck_goal__Goals_12;
        MR_Word check_hlds__modecheck_goal__InstMap_13;
        MR_Word check_hlds__modecheck_goal__InstMaps_14;
        MR_Word check_hlds__modecheck_goal__InstMap0_16;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_19;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_goal__InstMap0_16);
        }
        {
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Goal0_9, &check_hlds__modecheck_goal__Goal_11, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_19);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__modecheck_goal__InstMap_13);
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20);
        }
        {
          check_hlds__modecheck_goal__modecheck_orelse_list_5_p_0(check_hlds__modecheck_goal__Goals0_10, &check_hlds__modecheck_goal__Goals_12, &check_hlds__modecheck_goal__InstMaps_14, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_14));
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3(
  MR_Box check_hlds__modecheck_goal__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

    {
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1476__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2(
  MR_Box check_hlds__modecheck_goal__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

    {
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1474__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

    {
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1469__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(
  MR_Word check_hlds__modecheck_goal__ShortHand0_6,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__ShortHand0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "bi_implication");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_80_80;
          MR_Word check_hlds__modecheck_goal__Outer_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 1)));
          MR_Word check_hlds__modecheck_goal__Inner_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 2)));
          MR_Word check_hlds__modecheck_goal__MaybeOutputVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 3)));
          MR_Word check_hlds__modecheck_goal__MainGoal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 4)));
          MR_Word check_hlds__modecheck_goal__OrElseGoals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 5)));
          MR_Word check_hlds__modecheck_goal__OrElseInners_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 6)));
          MR_Word check_hlds__modecheck_goal__AtomicGoalList0_17;
          MR_Word check_hlds__modecheck_goal__NonLocals_18;
          MR_Word check_hlds__modecheck_goal__AtomicGoalList_19;
          MR_Word check_hlds__modecheck_goal__InstMapList_20;
          MR_Word check_hlds__modecheck_goal__VarTypes_21;
          MR_Word check_hlds__modecheck_goal__MainGoal_22;
          MR_Word check_hlds__modecheck_goal__OrElseGoals_23;
          MR_Word check_hlds__modecheck_goal__ArmInstMaps_24;
          MR_Word check_hlds__modecheck_goal__OuterDI_25;
          MR_Word check_hlds__modecheck_goal__OuterUO_26;
          MR_Word check_hlds__modecheck_goal__OuterDIType_27;
          MR_Word check_hlds__modecheck_goal__OuterUOType_28;
          MR_Word check_hlds__modecheck_goal__GoalType_29;
          MR_Word check_hlds__modecheck_goal__InnerDI_30;
          MR_Word check_hlds__modecheck_goal__InnerUO_31;
          MR_Word check_hlds__modecheck_goal__InnerDIType_32;
          MR_Word check_hlds__modecheck_goal__InnerUOType_33;
          MR_Word check_hlds__modecheck_goal__ShortHand_34;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_55_55;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_58_58;
          MR_Word check_hlds__modecheck_goal__V_62_62;
          MR_Word check_hlds__modecheck_goal__V_66_66;
          MR_Word check_hlds__modecheck_goal__V_70_70;
          MR_Word check_hlds__modecheck_goal__V_71_71;
          MR_Word check_hlds__modecheck_goal__V_75_75;
          MR_Word check_hlds__modecheck_goal__Goal0_93;
          MR_Word check_hlds__modecheck_goal__Goals0_94;
          MR_Word check_hlds__modecheck_goal__Goal_95;
          MR_Word check_hlds__modecheck_goal__Goals_96;
          MR_Word check_hlds__modecheck_goal__InstMap_97;
          MR_Word check_hlds__modecheck_goal__InstMaps_98;
          MR_Word check_hlds__modecheck_goal__InstMap0_100;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_103;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_104;
          MR_Word check_hlds__modecheck_goal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 0)));
          MR_Box check_hlds__modecheck_goal__conv0_MainGoal_22;

          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_55_55);
          }
          {
            check_hlds__modecheck_goal__AtomicGoalList0_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList0_17, 0) = ((MR_Box) (check_hlds__modecheck_goal__MainGoal0_14));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList0_17, 1) = ((MR_Box) (check_hlds__modecheck_goal__OrElseGoals0_15));
          }
          {
            check_hlds__modecheck_goal__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_7);
          }
          check_hlds__modecheck_goal__Goal0_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList0_17, (MR_Integer) 0)));
          check_hlds__modecheck_goal__Goals0_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList0_17, (MR_Integer) 1)));
          {
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_goal__InstMap0_100);
          }
          {
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Goal0_93, &check_hlds__modecheck_goal__Goal_95, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_103);
          }
          {
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_103, &check_hlds__modecheck_goal__InstMap_97);
          }
          {
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_100, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_19_103, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_104);
          }
          {
            check_hlds__modecheck_goal__modecheck_orelse_list_5_p_0(check_hlds__modecheck_goal__Goals0_94, &check_hlds__modecheck_goal__Goals_96, &check_hlds__modecheck_goal__InstMaps_98, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_104, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56);
          }
          {
            check_hlds__modecheck_goal__AtomicGoalList_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList_19, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_95));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AtomicGoalList_19, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_96));
          }
          {
            check_hlds__modecheck_goal__InstMapList_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__InstMapList_20, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_97));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__InstMapList_20, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_98));
          }
          {
            check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56, &check_hlds__modecheck_goal__VarTypes_21);
          }
          check_hlds__modecheck_goal__TypeCtorInfo_80_80 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          {
            check_hlds__modecheck_goal__conv0_MainGoal_22 = mercury__list__det_head_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_80_80, check_hlds__modecheck_goal__AtomicGoalList_19);
          }
          check_hlds__modecheck_goal__MainGoal_22 = ((MR_Word) check_hlds__modecheck_goal__conv0_MainGoal_22);
          {
            check_hlds__modecheck_goal__OrElseGoals_23 = mercury__list__det_tail_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_80_80, check_hlds__modecheck_goal__AtomicGoalList_19);
          }
          {
            hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__modecheck_goal__AtomicGoalList_19, check_hlds__modecheck_goal__InstMapList_20, &check_hlds__modecheck_goal__ArmInstMaps_24);
          }
          {
            hlds__instmap__instmap_merge_5_p_0(check_hlds__modecheck_goal__NonLocals_18, check_hlds__modecheck_goal__ArmInstMaps_24, (MR_Integer) 2, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_58_58);
          }
          check_hlds__modecheck_goal__OuterDI_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Outer_11, (MR_Integer) 0)));
          check_hlds__modecheck_goal__OuterUO_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Outer_11, (MR_Integer) 1)));
          {
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__OuterDI_25, &check_hlds__modecheck_goal__OuterDIType_27);
          }
          {
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__OuterUO_26, &check_hlds__modecheck_goal__OuterUOType_28);
          }
          {
            MR_Word check_hlds__modecheck_goal__V_84_84;

            {
              check_hlds__modecheck_goal__V_84_84 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            }
            {
              check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__OuterDIType_27, check_hlds__modecheck_goal__V_84_84);
            }
          }
          if (!(check_hlds__modecheck_goal__succeeded))
            {
              MR_Word check_hlds__modecheck_goal__V_85_85;

              {
                check_hlds__modecheck_goal__V_85_85 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
              }
              {
                check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__OuterDIType_27, check_hlds__modecheck_goal__V_85_85);
              }
            }
          if (check_hlds__modecheck_goal__succeeded)
            check_hlds__modecheck_goal__GoalType_29 = (MR_Integer) 1;
          else
            {
              MR_Word check_hlds__modecheck_goal__V_86_86;

              {
                check_hlds__modecheck_goal__V_86_86 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
              }
              {
                check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_goal__OuterDIType_27, check_hlds__modecheck_goal__V_86_86);
              }
              if (check_hlds__modecheck_goal__succeeded)
                check_hlds__modecheck_goal__GoalType_29 = (MR_Integer) 2;
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid outer var type");
                    return;
                  }
                }
            }
          {
            check_hlds__modecheck_goal__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_62_62, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_62_62, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_62_62, 3) = ((MR_Box) (check_hlds__modecheck_goal__OuterDIType_27));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_62_62, 4) = ((MR_Box) (check_hlds__modecheck_goal__OuterUOType_28));
          }
          {
            mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_62_62, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: mismatched outer var type");
          }
          check_hlds__modecheck_goal__InnerDI_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Inner_12, (MR_Integer) 0)));
          check_hlds__modecheck_goal__InnerUO_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Inner_12, (MR_Integer) 1)));
          {
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__InnerDI_30, &check_hlds__modecheck_goal__InnerDIType_32);
          }
          {
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_21, check_hlds__modecheck_goal__InnerUO_31, &check_hlds__modecheck_goal__InnerUOType_33);
          }
          {
            check_hlds__modecheck_goal__V_70_70 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          }
          {
            check_hlds__modecheck_goal__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 3) = ((MR_Box) (check_hlds__modecheck_goal__InnerDIType_32));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_66_66, 4) = ((MR_Box) (check_hlds__modecheck_goal__V_70_70));
          }
          {
            mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_66_66, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid inner var type");
          }
          {
            check_hlds__modecheck_goal__V_75_75 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          }
          {
            check_hlds__modecheck_goal__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_71_71, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_71_71, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_71_71, 3) = ((MR_Box) (check_hlds__modecheck_goal__InnerUOType_33));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_71_71, 4) = ((MR_Box) (check_hlds__modecheck_goal__V_75_75));
          }
          {
            mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_71_71, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid inner var type");
          }
          {
            check_hlds__modecheck_goal__ShortHand_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_34, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalType_29));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_34, 1) = ((MR_Box) (check_hlds__modecheck_goal__Outer_11));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_34, 2) = ((MR_Box) (check_hlds__modecheck_goal__Inner_12));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_34, 3) = ((MR_Box) (check_hlds__modecheck_goal__MaybeOutputVars_13));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_34, 4) = ((MR_Box) (check_hlds__modecheck_goal__MainGoal_22));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_34, 5) = ((MR_Box) (check_hlds__modecheck_goal__OrElseGoals_23));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__ShortHand_34, 6) = ((MR_Box) (check_hlds__modecheck_goal__OrElseInners_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__modecheck_goal__GoalExpr_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__ShortHand_34));
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_58_58, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__modecheck_goal__MaybeIO_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_goal__ResultVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 1)));
          MR_Word check_hlds__modecheck_goal__SubGoal0_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand0_6, (MR_Integer) 2)));
          MR_Word check_hlds__modecheck_goal__SubGoal_38;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49;
          MR_Word check_hlds__modecheck_goal__ShortHand_79;

          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48);
          }
          {
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_37, &check_hlds__modecheck_goal__SubGoal_38, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49);
          }
          {
            check_hlds__modecheck_goal__ShortHand_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand_79, 0) = ((MR_Box) (check_hlds__modecheck_goal__MaybeIO_35));
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand_79, 1) = ((MR_Box) (check_hlds__modecheck_goal__ResultVar_36));
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__ShortHand_79, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_38));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__modecheck_goal__GoalExpr_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__ShortHand_79));
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1)
{
  {
    MR_Box check_hlds__modecheck_goal__wrapper_arg_2;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
    MR_Word check_hlds__modecheck_goal__conv0_HeadVar__2_2;

    {
      check_hlds__modecheck_goal__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1));
    }
    check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv0_HeadVar__2_2));
    return check_hlds__modecheck_goal__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(
  MR_Word check_hlds__modecheck_goal__Attributes_12,
  MR_Word check_hlds__modecheck_goal__PredId_13,
  MR_Integer check_hlds__modecheck_goal__ProcId0_14,
  MR_Word check_hlds__modecheck_goal__Args0_15,
  MR_Word check_hlds__modecheck_goal__ExtraArgs_16,
  MR_Word check_hlds__modecheck_goal__MaybeTraceRuntimeCond_17,
  MR_Word check_hlds__modecheck_goal__PragmaCode_18,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_19,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_20,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__CallId_22;
    MR_Word check_hlds__modecheck_goal__InstMap0_23;
    MR_Word check_hlds__modecheck_goal__ArgVars0_25;
    MR_Integer check_hlds__modecheck_goal__ProcId_26;
    MR_Word check_hlds__modecheck_goal__ArgVars_27;
    MR_Word check_hlds__modecheck_goal__ExtraGoals_28;
    MR_Word check_hlds__modecheck_goal__Pragma_29;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34;
    MR_Word check_hlds__modecheck_goal__V_35_35;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
    MR_Word check_hlds__modecheck_goal__V_37_37;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "pragma_foreign_code", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34);
    }
    {
      check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, check_hlds__modecheck_goal__PredId_13, &check_hlds__modecheck_goal__CallId_22);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_goal__InstMap0_23);
    }
    {
      check_hlds__modecheck_goal__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_goal__CallId_22));
    }
    {
      check_hlds__modecheck_goal__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_37_37));
    }
    {
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_goal__V_35_35, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36);
    }
    {
      check_hlds__modecheck_goal__ArgVars0_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal_scalar_common_2[4], check_hlds__modecheck_goal__Args0_15);
    }
    {
      check_hlds__modecheck_call__modecheck_call_pred_10_p_0(check_hlds__modecheck_goal__PredId_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__ProcId0_14, &check_hlds__modecheck_goal__ProcId_26, check_hlds__modecheck_goal__ArgVars0_25, &check_hlds__modecheck_goal__ArgVars_27, check_hlds__modecheck_goal__GoalInfo0_19, &check_hlds__modecheck_goal__ExtraGoals_28, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39);
    }
    {
      check_hlds__modecheck_goal__Pragma_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 1) = ((MR_Box) (check_hlds__modecheck_goal__Attributes_12));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 2) = ((MR_Box) (check_hlds__modecheck_goal__PredId_13));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 3) = ((MR_Box) (check_hlds__modecheck_goal__ProcId_26));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 4) = ((MR_Box) (check_hlds__modecheck_goal__Args0_15));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 5) = ((MR_Box) (check_hlds__modecheck_goal__ExtraArgs_16));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 6) = ((MR_Box) (check_hlds__modecheck_goal__MaybeTraceRuntimeCond_17));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Pragma_29, 7) = ((MR_Box) (check_hlds__modecheck_goal__PragmaCode_18));
    }
    {
      check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_goal__Pragma_29, check_hlds__modecheck_goal__ExtraGoals_28, check_hlds__modecheck_goal__GoalInfo0_19, check_hlds__modecheck_goal__ArgVars0_25, check_hlds__modecheck_goal__ArgVars_27, check_hlds__modecheck_goal__InstMap0_23, check_hlds__modecheck_goal__GoalExpr_20, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40);
    }
    {
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "pragma_foreign_code", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(
  MR_Word check_hlds__modecheck_goal__LHS0_9,
  MR_Word check_hlds__modecheck_goal__RHS0_10,
  MR_Word check_hlds__modecheck_goal__Unification0_11,
  MR_Word check_hlds__modecheck_goal__UnifyContext_12,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_13,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_14,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20;
    MR_Word check_hlds__modecheck_goal__V_21_21;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_22;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20);
    }
    {
      check_hlds__modecheck_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_21_21, 0) = ((MR_Box) (check_hlds__modecheck_goal__UnifyContext_12));
    }
    {
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_goal__V_21_21, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_22);
    }
    {
      check_hlds__modecheck_unify__modecheck_unification_8_p_0(check_hlds__modecheck_goal__LHS0_9, check_hlds__modecheck_goal__RHS0_10, check_hlds__modecheck_goal__Unification0_11, check_hlds__modecheck_goal__UnifyContext_12, check_hlds__modecheck_goal__GoalInfo0_13, check_hlds__modecheck_goal__GoalExpr_14, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_22, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23);
    }
    {
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(
  MR_Word check_hlds__modecheck_goal__GenericCall_8,
  MR_Word check_hlds__modecheck_goal__Args0_9,
  MR_Word check_hlds__modecheck_goal__Modes0_10,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_11,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_12,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_62,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__InstMap0_14;
    MR_Word check_hlds__modecheck_goal__GenericCallId_15;
    MR_Word check_hlds__modecheck_goal__CallId_16;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_66_66;
    MR_Word check_hlds__modecheck_goal__V_67_67;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_62, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_66_66);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_goal__InstMap0_14);
    }
    {
      hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__modecheck_goal__GenericCall_8, &check_hlds__modecheck_goal__GenericCallId_15);
    }
    {
      check_hlds__modecheck_goal__CallId_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__CallId_16, 0) = ((MR_Box) (check_hlds__modecheck_goal__GenericCallId_15));
    }
    {
      check_hlds__modecheck_goal__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_67_67, 0) = ((MR_Box) (check_hlds__modecheck_goal__CallId_16));
    }
    {
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_goal__V_67_67, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68);
    }
    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__GenericCall_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__modecheck_goal__PredVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_goal__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 2)));
          MR_Word check_hlds__modecheck_goal__Args_21;
          MR_Word check_hlds__modecheck_goal__Modes_22;
          MR_Word check_hlds__modecheck_goal__Det_23;
          MR_Word check_hlds__modecheck_goal__ExtraGoals_24;
          MR_Word check_hlds__modecheck_goal__GoalExpr1_25;
          MR_Word check_hlds__modecheck_goal__AllArgs0_26;
          MR_Word check_hlds__modecheck_goal__AllArgs_27;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102;
          MR_Word check_hlds__modecheck_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 1)));
          MR_Integer check_hlds__modecheck_goal__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 3)));

          {
            check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0(check_hlds__modecheck_goal__PredOrFunc_19, check_hlds__modecheck_goal__PredVar_17, check_hlds__modecheck_goal__Args0_9, &check_hlds__modecheck_goal__Args_21, &check_hlds__modecheck_goal__Modes_22, &check_hlds__modecheck_goal__Det_23, &check_hlds__modecheck_goal__ExtraGoals_24, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102);
          }
          {
            check_hlds__modecheck_goal__GoalExpr1_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 1) = ((MR_Box) (check_hlds__modecheck_goal__GenericCall_8));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 2) = ((MR_Box) (check_hlds__modecheck_goal__Args_21));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 3) = ((MR_Box) (check_hlds__modecheck_goal__Modes_22));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_25, 5) = ((MR_Box) (check_hlds__modecheck_goal__Det_23));
          }
          {
            check_hlds__modecheck_goal__AllArgs0_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AllArgs0_26, 0) = ((MR_Box) (check_hlds__modecheck_goal__PredVar_17));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AllArgs0_26, 1) = ((MR_Box) (check_hlds__modecheck_goal__Args0_9));
          }
          {
            check_hlds__modecheck_goal__AllArgs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AllArgs_27, 0) = ((MR_Box) (check_hlds__modecheck_goal__PredVar_17));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__AllArgs_27, 1) = ((MR_Box) (check_hlds__modecheck_goal__Args_21));
          }
          {
            check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_goal__GoalExpr1_25, check_hlds__modecheck_goal__ExtraGoals_24, check_hlds__modecheck_goal__GoalInfo0_11, check_hlds__modecheck_goal__AllArgs0_26, check_hlds__modecheck_goal__AllArgs_27, check_hlds__modecheck_goal__InstMap0_14, check_hlds__modecheck_goal__GoalExpr_12, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "class_method_call");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String check_hlds__modecheck_goal__EventName_32 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GenericCall_8, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_goal__ModuleInfo_33;
          MR_Word check_hlds__modecheck_goal__EventSet_34;
          MR_Word check_hlds__modecheck_goal__EventSpecMap_35;
          MR_Word check_hlds__modecheck_goal__Args_109;
          MR_Word check_hlds__modecheck_goal__Modes_110;
          MR_String check_hlds__modecheck_goal__V_119_119;
          MR_Word check_hlds__modecheck_goal__ModesPrime_36;

          {
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__ModuleInfo_33);
          }
          {
            hlds__hlds_module__module_info_get_event_set_2_p_0(check_hlds__modecheck_goal__ModuleInfo_33, &check_hlds__modecheck_goal__EventSet_34);
          }
          check_hlds__modecheck_goal__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__EventSet_34, (MR_Integer) 0)));
          check_hlds__modecheck_goal__EventSpecMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__EventSet_34, (MR_Integer) 1)));
          {
            check_hlds__modecheck_goal__succeeded = parse_tree__prog_event__event_arg_modes_3_p_0(check_hlds__modecheck_goal__EventSpecMap_35, check_hlds__modecheck_goal__EventName_32, &check_hlds__modecheck_goal__ModesPrime_36);
          }
          if (check_hlds__modecheck_goal__succeeded)
            check_hlds__modecheck_goal__Modes_110 = check_hlds__modecheck_goal__ModesPrime_36;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "unknown event");
                return;
              }
            }
          {
            check_hlds__modecheck_call__modecheck_event_call_5_p_0(check_hlds__modecheck_goal__Modes_110, check_hlds__modecheck_goal__Args0_9, &check_hlds__modecheck_goal__Args_109, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__modecheck_goal__GoalExpr_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GenericCall_8));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__Args_109));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_goal__Modes_110));
            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_90_90;
          MR_Word check_hlds__modecheck_goal__Args_113;
          MR_Word check_hlds__modecheck_goal__Modes_114;
          MR_Word check_hlds__modecheck_goal__Det_115;
          MR_Word check_hlds__modecheck_goal__ExtraGoals_116;
          MR_Word check_hlds__modecheck_goal__GoalExpr1_117;
          MR_Word check_hlds__modecheck_goal__Mode1_44;
          MR_Word check_hlds__modecheck_goal__Unique_47;
          MR_Integer check_hlds__modecheck_goal__LocalTag_59;
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_128_128;
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_129_129;
          MR_Word check_hlds__modecheck_goal__InstMap_38;
          MR_Word check_hlds__modecheck_goal__Arg1_43;
          MR_Word check_hlds__modecheck_goal__Mode2_45;
          MR_Word check_hlds__modecheck_goal__Inst1_46;
          MR_Word check_hlds__modecheck_goal__ConsId_49;
          MR_Word check_hlds__modecheck_goal__TypeTable_50;
          MR_Word check_hlds__modecheck_goal__VarTypes_51;
          MR_Word check_hlds__modecheck_goal__ArgType1_52;
          MR_Word check_hlds__modecheck_goal__ArgTypeCtor1_53;
          MR_Word check_hlds__modecheck_goal__CtorDefn_54;
          MR_Word check_hlds__modecheck_goal__Body_55;
          MR_Word check_hlds__modecheck_goal__ConsTagValues_56;
          MR_Word check_hlds__modecheck_goal__ConsTag_57;
          MR_Word check_hlds__modecheck_goal__V_77_77;
          MR_Word check_hlds__modecheck_goal__V_78_78;
          MR_Word check_hlds__modecheck_goal__V_79_79;
          MR_Word check_hlds__modecheck_goal__V_80_80;
          MR_Word check_hlds__modecheck_goal__ModuleInfo_111;
          MR_Word check_hlds__modecheck_goal__V_130_130;
          MR_Word check_hlds__modecheck_goal__V_131_131;
          MR_Word check_hlds__modecheck_goal__Arg1Prime_39;
          MR_Word check_hlds__modecheck_goal__Mode1Prime_41;
          MR_Word check_hlds__modecheck_goal__Mode2Prime_42;
          MR_Word check_hlds__modecheck_goal__V_70_70;
          MR_Word check_hlds__modecheck_goal__V_71_71;
          MR_Word check_hlds__modecheck_goal__V_72_72;
          MR_Word check_hlds__modecheck_goal__V_73_73;
          MR_Word check_hlds__modecheck_goal___Arg2Prime_40;
          MR_Word check_hlds__modecheck_goal__V_48_48;
          MR_Word check_hlds__modecheck_goal__V_120_120;
          MR_Word check_hlds__modecheck_goal__V_121_121;
          MR_Word check_hlds__modecheck_goal__V_122_122;
          MR_Word check_hlds__modecheck_goal__V_123_123;
          MR_Word check_hlds__modecheck_goal__V_124_124;
          MR_Word check_hlds__modecheck_goal__V_125_125;
          MR_Word check_hlds__modecheck_goal__V_126_126;
          MR_Word check_hlds__modecheck_goal__V_127_127;
          MR_Box check_hlds__modecheck_goal__conv0_ConsTag_57;
          MR_Integer check_hlds__modecheck_goal__V_58_58;

          {
            check_hlds__modecheck_goal__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_goal__GoalInfo0_11, (MR_Integer) 11);
          }
          if (check_hlds__modecheck_goal__succeeded)
            {
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__InstMap_38);
              }
              check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__Args0_9)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__modecheck_goal__succeeded)
                {
                  check_hlds__modecheck_goal__Arg1Prime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Args0_9, (MR_Integer) 0)));
                  check_hlds__modecheck_goal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Args0_9, (MR_Integer) 1)));
                  check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_70_70)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__modecheck_goal__succeeded)
                    {
                      check_hlds__modecheck_goal___Arg2Prime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_70_70, (MR_Integer) 0)));
                      check_hlds__modecheck_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_70_70, (MR_Integer) 1)));
                      check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (check_hlds__modecheck_goal__succeeded)
                        {
                          check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__Modes0_10)) == (MR_mktag((MR_Integer) 1)));
                          if (check_hlds__modecheck_goal__succeeded)
                            {
                              check_hlds__modecheck_goal__Mode1Prime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Modes0_10, (MR_Integer) 0)));
                              check_hlds__modecheck_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Modes0_10, (MR_Integer) 1)));
                              check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_72_72)) == (MR_mktag((MR_Integer) 1)));
                              if (check_hlds__modecheck_goal__succeeded)
                                {
                                  check_hlds__modecheck_goal__Mode2Prime_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_72_72, (MR_Integer) 0)));
                                  check_hlds__modecheck_goal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_72_72, (MR_Integer) 1)));
                                  check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                            }
                        }
                    }
                }
              if (check_hlds__modecheck_goal__succeeded)
                {
                  check_hlds__modecheck_goal__Arg1_43 = check_hlds__modecheck_goal__Arg1Prime_39;
                  check_hlds__modecheck_goal__Mode1_44 = check_hlds__modecheck_goal__Mode1Prime_41;
                  check_hlds__modecheck_goal__Mode2_45 = check_hlds__modecheck_goal__Mode2Prime_42;
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "bad cast");
                    return;
                  }
                }
              {
                check_hlds__modecheck_goal__V_130_130 = parse_tree__prog_mode__in_mode_0_f_0();
              }
              {
                check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(check_hlds__modecheck_goal__Mode1_44, check_hlds__modecheck_goal__V_130_130);
              }
              if (check_hlds__modecheck_goal__succeeded)
                {
                  {
                    check_hlds__modecheck_goal__V_131_131 = parse_tree__prog_mode__out_mode_0_f_0();
                  }
                  {
                    check_hlds__modecheck_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(check_hlds__modecheck_goal__Mode2_45, check_hlds__modecheck_goal__V_131_131);
                  }
                  if (check_hlds__modecheck_goal__succeeded)
                    {
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMap_38, check_hlds__modecheck_goal__Arg1_43, &check_hlds__modecheck_goal__Inst1_46);
                      }
                      check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__Inst1_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Inst1_46, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (check_hlds__modecheck_goal__succeeded)
                        {
                          check_hlds__modecheck_goal__Unique_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Inst1_46, (MR_Integer) 1)));
                          check_hlds__modecheck_goal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Inst1_46, (MR_Integer) 2)));
                          check_hlds__modecheck_goal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Inst1_46, (MR_Integer) 3)));
                          check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_77_77)) == (MR_mktag((MR_Integer) 1)));
                          if (check_hlds__modecheck_goal__succeeded)
                            {
                              check_hlds__modecheck_goal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_77_77, (MR_Integer) 0)));
                              check_hlds__modecheck_goal__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_77_77, (MR_Integer) 1)));
                              check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (check_hlds__modecheck_goal__succeeded)
                                {
                                  check_hlds__modecheck_goal__ConsId_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_78_78, (MR_Integer) 0)));
                                  check_hlds__modecheck_goal__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_78_78, (MR_Integer) 1)));
                                  check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (check_hlds__modecheck_goal__succeeded)
                                    {
                                      {
                                        check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__ModuleInfo_111);
                                      }
                                      {
                                        hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__modecheck_goal__ModuleInfo_111, &check_hlds__modecheck_goal__TypeTable_50);
                                      }
                                      {
                                        check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__VarTypes_51);
                                      }
                                      {
                                        hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes_51, check_hlds__modecheck_goal__Arg1_43, &check_hlds__modecheck_goal__ArgType1_52);
                                      }
                                      {
                                        check_hlds__modecheck_goal__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__modecheck_goal__ArgType1_52, &check_hlds__modecheck_goal__ArgTypeCtor1_53);
                                      }
                                      if (check_hlds__modecheck_goal__succeeded)
                                        {
                                          {
                                            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__modecheck_goal__TypeTable_50, check_hlds__modecheck_goal__ArgTypeCtor1_53, &check_hlds__modecheck_goal__CtorDefn_54);
                                          }
                                          {
                                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__modecheck_goal__CtorDefn_54, &check_hlds__modecheck_goal__Body_55);
                                          }
                                          check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__Body_55)) == (MR_mktag((MR_Integer) 1)));
                                          if (check_hlds__modecheck_goal__succeeded)
                                            {
                                              check_hlds__modecheck_goal__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 0)));
                                              check_hlds__modecheck_goal__ConsTagValues_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 1)));
                                              check_hlds__modecheck_goal__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 2)));
                                              check_hlds__modecheck_goal__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 3)));
                                              check_hlds__modecheck_goal__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 4)));
                                              check_hlds__modecheck_goal__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 5)));
                                              check_hlds__modecheck_goal__V_125_125 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 6)))) & (MR_Integer) 1);
                                              check_hlds__modecheck_goal__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                              check_hlds__modecheck_goal__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Body_55, (MR_Integer) 7)));
                                              check_hlds__modecheck_goal__TypeCtorInfo_128_128 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                                              check_hlds__modecheck_goal__TypeCtorInfo_129_129 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                                              {
                                                mercury__map__lookup_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_128_128, check_hlds__modecheck_goal__TypeCtorInfo_129_129, check_hlds__modecheck_goal__ConsTagValues_56, ((MR_Box) (check_hlds__modecheck_goal__ConsId_49)), &check_hlds__modecheck_goal__conv0_ConsTag_57);
                                              }
                                              check_hlds__modecheck_goal__ConsTag_57 = ((MR_Word) check_hlds__modecheck_goal__conv0_ConsTag_57);
                                              check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__ConsTag_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ConsTag_57, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                              if (check_hlds__modecheck_goal__succeeded)
                                                {
                                                  check_hlds__modecheck_goal__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ConsTag_57, (MR_Integer) 1)));
                                                  check_hlds__modecheck_goal__LocalTag_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ConsTag_57, (MR_Integer) 2)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          if (check_hlds__modecheck_goal__succeeded)
            {
              MR_Word check_hlds__modecheck_goal__BoundInst_60;
              MR_Word check_hlds__modecheck_goal__NewMode2_61;
              MR_Word check_hlds__modecheck_goal__V_81_81;
              MR_Word check_hlds__modecheck_goal__V_84_84;
              MR_Word check_hlds__modecheck_goal__V_86_86;
              MR_Word check_hlds__modecheck_goal__V_88_88;

              {
                check_hlds__modecheck_goal__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_81_81, 1) = ((MR_Box) (check_hlds__modecheck_goal__LocalTag_59));
              }
              {
                check_hlds__modecheck_goal__BoundInst_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__BoundInst_60, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_81_81));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__BoundInst_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__modecheck_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_86_86, 0) = ((MR_Box) (check_hlds__modecheck_goal__BoundInst_60));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__modecheck_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_84_84, 1) = ((MR_Box) (check_hlds__modecheck_goal__Unique_47));
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_84_84, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__V_84_84, 3) = ((MR_Box) (check_hlds__modecheck_goal__V_86_86));
              }
              {
                check_hlds__modecheck_goal__NewMode2_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__NewMode2_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__NewMode2_61, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_84_84));
              }
              {
                check_hlds__modecheck_goal__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_88_88, 0) = ((MR_Box) (check_hlds__modecheck_goal__NewMode2_61));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__modecheck_goal__Modes_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Modes_114, 0) = ((MR_Box) (check_hlds__modecheck_goal__Mode1_44));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__Modes_114, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_88_88));
              }
            }
          else
            check_hlds__modecheck_goal__Modes_114 = check_hlds__modecheck_goal__Modes0_10;
          {
            check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(check_hlds__modecheck_goal__Modes_114, check_hlds__modecheck_goal__Args0_9, &check_hlds__modecheck_goal__Args_113, &check_hlds__modecheck_goal__Det_115, &check_hlds__modecheck_goal__ExtraGoals_116, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_90_90);
          }
          {
            check_hlds__modecheck_goal__GoalExpr1_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 1) = ((MR_Box) (check_hlds__modecheck_goal__GenericCall_8));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 2) = ((MR_Box) (check_hlds__modecheck_goal__Args_113));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 3) = ((MR_Box) (check_hlds__modecheck_goal__Modes_114));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr1_117, 5) = ((MR_Box) (check_hlds__modecheck_goal__Det_115));
          }
          {
            check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_goal__GoalExpr1_117, check_hlds__modecheck_goal__ExtraGoals_116, check_hlds__modecheck_goal__GoalInfo0_11, check_hlds__modecheck_goal__Args0_9, check_hlds__modecheck_goal__Args_113, check_hlds__modecheck_goal__InstMap0_14, check_hlds__modecheck_goal__GoalExpr_12, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_90_90, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104);
          }
        }
        break;
    }
    {
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_104_104, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_63);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(
  MR_Word check_hlds__modecheck_goal__PredId_10,
  MR_Integer check_hlds__modecheck_goal__ProcId0_11,
  MR_Word check_hlds__modecheck_goal__Args0_12,
  MR_Word check_hlds__modecheck_goal__MaybeCallUnifyContext_13,
  MR_Word check_hlds__modecheck_goal__PredName_14,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_15,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_16,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_String check_hlds__modecheck_goal__PredNameString_18;
    MR_String check_hlds__modecheck_goal__CallString_19;
    MR_Word check_hlds__modecheck_goal__CallId_20;
    MR_Word check_hlds__modecheck_goal__InstMap0_21;
    MR_Integer check_hlds__modecheck_goal__ProcId_23;
    MR_Word check_hlds__modecheck_goal__Args_24;
    MR_Word check_hlds__modecheck_goal__ExtraGoals_25;
    MR_Word check_hlds__modecheck_goal__ModuleInfo_26;
    MR_Word check_hlds__modecheck_goal__CallerPredId_27;
    MR_Word check_hlds__modecheck_goal__Builtin_28;
    MR_Word check_hlds__modecheck_goal__Call_29;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34;
    MR_Word check_hlds__modecheck_goal__V_35_35;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
    MR_Word check_hlds__modecheck_goal__V_37_37;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40;

    {
      check_hlds__modecheck_goal__PredNameString_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__modecheck_goal__PredName_14);
    }
    {
      check_hlds__modecheck_goal__CallString_19 = mercury__string__f_43_43_2_f_0((MR_String) "call ", check_hlds__modecheck_goal__PredNameString_18);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__modecheck_goal__CallString_19, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34);
    }
    {
      check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, check_hlds__modecheck_goal__PredId_10, &check_hlds__modecheck_goal__CallId_20);
    }
    {
      check_hlds__modecheck_goal__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_goal__CallId_20));
    }
    {
      check_hlds__modecheck_goal__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_37_37));
    }
    {
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_goal__V_35_35, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__InstMap0_21);
    }
    {
      check_hlds__modecheck_call__modecheck_call_pred_10_p_0(check_hlds__modecheck_goal__PredId_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__ProcId0_11, &check_hlds__modecheck_goal__ProcId_23, check_hlds__modecheck_goal__Args0_12, &check_hlds__modecheck_goal__Args_24, check_hlds__modecheck_goal__GoalInfo0_15, &check_hlds__modecheck_goal__ExtraGoals_25, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_goal__ModuleInfo_26);
    }
    {
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_goal__CallerPredId_27);
    }
    {
      check_hlds__modecheck_goal__Builtin_28 = hlds__hlds_pred__builtin_state_4_f_0(check_hlds__modecheck_goal__ModuleInfo_26, check_hlds__modecheck_goal__CallerPredId_27, check_hlds__modecheck_goal__PredId_10, check_hlds__modecheck_goal__ProcId_23);
    }
    {
      check_hlds__modecheck_goal__Call_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 0) = ((MR_Box) (check_hlds__modecheck_goal__PredId_10));
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 1) = ((MR_Box) (check_hlds__modecheck_goal__ProcId_23));
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 2) = ((MR_Box) (check_hlds__modecheck_goal__Args_24));
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 3) = ((MR_Box) (check_hlds__modecheck_goal__Builtin_28));
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 4) = ((MR_Box) (check_hlds__modecheck_goal__MaybeCallUnifyContext_13));
      MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__Call_29, 5) = ((MR_Box) (check_hlds__modecheck_goal__PredName_14));
    }
    {
      check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_goal__Call_29, check_hlds__modecheck_goal__ExtraGoals_25, check_hlds__modecheck_goal__GoalInfo0_15, check_hlds__modecheck_goal__Args0_12, check_hlds__modecheck_goal__Args_24, check_hlds__modecheck_goal__InstMap0_21, check_hlds__modecheck_goal__GoalExpr_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39);
    }
    {
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40);
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, check_hlds__modecheck_goal__CallString_19, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__modecheck_goal__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5 = check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4;
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_goal__VarInsts_12;
        MR_Word check_hlds__modecheck_goal__UniMode_13;
        MR_Word check_hlds__modecheck_goal__UniModes_14;
        MR_Word check_hlds__modecheck_goal__VarInfo_16;
        MR_Word check_hlds__modecheck_goal__RHSNewInst_20;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_23_23;
        MR_Word check_hlds__modecheck_goal__V_24_24;
        MR_Word check_hlds__modecheck_goal__V_25_25;
        MR_Box check_hlds__modecheck_goal__conv0_VarInfo_16;

        {
          mercury__map__det_remove_4_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0, ((MR_Box) (check_hlds__modecheck_goal__Var_9)), &check_hlds__modecheck_goal__conv0_VarInfo_16, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_0_4, &check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_23_23);
        }
        check_hlds__modecheck_goal__VarInfo_16 = ((MR_Word) check_hlds__modecheck_goal__conv0_VarInfo_16);
        check_hlds__modecheck_goal__RHSNewInst_20 = (MR_Word) check_hlds__modecheck_goal__VarInfo_16;
        {
          check_hlds__modecheck_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_24_24, 1) = ((MR_Box) (check_hlds__modecheck_goal__RHSNewInst_20));
        }
        {
          check_hlds__modecheck_goal__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 0) = ((MR_Box) (check_hlds__modecheck_goal__RHSNewInst_20));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_25_25, 1) = ((MR_Box) (check_hlds__modecheck_goal__RHSNewInst_20));
        }
        {
          check_hlds__modecheck_goal__UniMode_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UniMode_13, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_24_24));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UniMode_13, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_25_25));
        }
        {
          check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(check_hlds__modecheck_goal__Vars_10, &check_hlds__modecheck_goal__VarInsts_12, &check_hlds__modecheck_goal__UniModes_14, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_23_23, check_hlds__modecheck_goal__STATE_VARIABLE_LocalVarMap_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__RHSNewInst_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__VarInsts_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__UniMode_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__UniModes_14));
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_goal__succeeded;

        if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__modecheck_goal__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__modecheck_goal__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_goal__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_2, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_goal__RHS_7;
            MR_Word check_hlds__modecheck_goal__V_13_13;
            MR_Word check_hlds__modecheck_goal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_2, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_goal___LHSVar_6;
            MR_Word check_hlds__modecheck_goal__V_8_8;
            MR_Word check_hlds__modecheck_goal__V_9_9;
            MR_Word check_hlds__modecheck_goal__V_10_10;
            MR_Word check_hlds__modecheck_goal___ConsId_11;
            MR_Word check_hlds__modecheck_goal___RHSVars_12;

            check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr_4)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__modecheck_goal__succeeded)
              {
                check_hlds__modecheck_goal___LHSVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 0)));
                check_hlds__modecheck_goal__RHS_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 1)));
                check_hlds__modecheck_goal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 2)));
                check_hlds__modecheck_goal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 3)));
                check_hlds__modecheck_goal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_4, (MR_Integer) 4)));
                check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__RHS_7)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__modecheck_goal__succeeded)
                  {
                    check_hlds__modecheck_goal___ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_7, (MR_Integer) 0)));
                    check_hlds__modecheck_goal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_7, (MR_Integer) 1)));
                    check_hlds__modecheck_goal___RHSVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_7, (MR_Integer) 2)));
                    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_13_13 == (MR_Integer) 0);
                    if (check_hlds__modecheck_goal__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__modecheck_goal__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_goal__Goals_3;

                          check_hlds__modecheck_goal__HeadVar__1_1 = check_hlds__modecheck_goal__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__modecheck_goal__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(
  MR_Word check_hlds__modecheck_goal__SubGoal_5,
  MR_Word check_hlds__modecheck_goal__TermVar_6,
  MR_Word check_hlds__modecheck_goal__TermVarInst_7,
  MR_Word * check_hlds__modecheck_goal__MaybeGroundTermMode_8)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__SubGoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal_5, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_goal__SubGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal_5, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_goal__V_22_22;
    MR_Word check_hlds__modecheck_goal__TypeInfo_35_35;
    MR_Word check_hlds__modecheck_goal__TypeInfo_36_36;
    MR_Word check_hlds__modecheck_goal__NonLocals_11;
    MR_Word check_hlds__modecheck_goal__UnifyTermGoal_12;
    MR_Word check_hlds__modecheck_goal__V_20_20;
    MR_Word check_hlds__modecheck_goal__V_21_21;
    MR_Word check_hlds__modecheck_goal__V_23_23;
    MR_Word check_hlds__modecheck_goal__V_33_33;
    MR_Word check_hlds__modecheck_goal__V_34_34;
    MR_Word check_hlds__modecheck_goal__Goal_37;
    MR_Word check_hlds__modecheck_goal__Goals_38;
    MR_Word check_hlds__modecheck_goal__GoalExpr_39;
    MR_Word check_hlds__modecheck_goal__RHS_42;
    MR_Word check_hlds__modecheck_goal__V_48_48;
    MR_Word check_hlds__modecheck_goal__UnifyArgGoals_13;
    MR_Word check_hlds__modecheck_goal__V_30_30;
    MR_Word check_hlds__modecheck_goal__V_14_14;
    MR_Word check_hlds__modecheck_goal__V_15_15;
    MR_Word check_hlds__modecheck_goal__V_16_16;
    MR_Word check_hlds__modecheck_goal__V_17_17;
    MR_Word check_hlds__modecheck_goal__V_40_40;
    MR_Word check_hlds__modecheck_goal___LHSVar_41;
    MR_Word check_hlds__modecheck_goal__V_43_43;
    MR_Word check_hlds__modecheck_goal__V_44_44;
    MR_Word check_hlds__modecheck_goal__V_45_45;
    MR_Word check_hlds__modecheck_goal___ConsId_46;
    MR_Word check_hlds__modecheck_goal___RHSVars_47;

    {
      check_hlds__modecheck_goal__NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__SubGoalInfo_10);
    }
    {
      check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_singleton_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__NonLocals_11, &check_hlds__modecheck_goal__V_33_33);
    }
    if (check_hlds__modecheck_goal__succeeded)
      {
        check_hlds__modecheck_goal__TypeInfo_35_35 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
        {
          check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_goal__TypeInfo_35_35, ((MR_Box) (check_hlds__modecheck_goal__TermVar_6)), ((MR_Box) (check_hlds__modecheck_goal__V_33_33)));
        }
        if (check_hlds__modecheck_goal__succeeded)
          {
            {
              check_hlds__modecheck_goal__V_20_20 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__modecheck_goal__SubGoalInfo_10);
            }
            check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_20_20 == (MR_Integer) 0);
            if (check_hlds__modecheck_goal__succeeded)
              {
                check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__SubGoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (check_hlds__modecheck_goal__succeeded)
                  {
                    check_hlds__modecheck_goal__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_9, (MR_Integer) 1)));
                    check_hlds__modecheck_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr_9, (MR_Integer) 2)));
                    check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_21_21 == (MR_Integer) 0);
                    if (check_hlds__modecheck_goal__succeeded)
                      {
                        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_22_22)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__modecheck_goal__succeeded)
                          {
                            check_hlds__modecheck_goal__UnifyTermGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_22_22, (MR_Integer) 0)));
                            check_hlds__modecheck_goal__UnifyArgGoals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_22_22, (MR_Integer) 1)));
                            check_hlds__modecheck_goal__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UnifyTermGoal_12, (MR_Integer) 0)));
                            check_hlds__modecheck_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__UnifyTermGoal_12, (MR_Integer) 1)));
                            check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__V_23_23)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__modecheck_goal__succeeded)
                              {
                                check_hlds__modecheck_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 0)));
                                check_hlds__modecheck_goal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 1)));
                                check_hlds__modecheck_goal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 2)));
                                check_hlds__modecheck_goal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 3)));
                                check_hlds__modecheck_goal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_23_23, (MR_Integer) 4)));
                                check_hlds__modecheck_goal__TypeInfo_36_36 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
                                {
                                  check_hlds__modecheck_goal__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_goal__TypeInfo_36_36, ((MR_Box) (check_hlds__modecheck_goal__TermVar_6)), ((MR_Box) (check_hlds__modecheck_goal__V_34_34)));
                                }
                                if (check_hlds__modecheck_goal__succeeded)
                                  {
                                    check_hlds__modecheck_goal__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_22_22, (MR_Integer) 0)));
                                    check_hlds__modecheck_goal__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_22_22, (MR_Integer) 1)));
                                    check_hlds__modecheck_goal__GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_37, (MR_Integer) 0)));
                                    check_hlds__modecheck_goal__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_37, (MR_Integer) 1)));
                                    check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr_39)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__modecheck_goal__succeeded)
                                      {
                                        check_hlds__modecheck_goal___LHSVar_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 0)));
                                        check_hlds__modecheck_goal__RHS_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 1)));
                                        check_hlds__modecheck_goal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 2)));
                                        check_hlds__modecheck_goal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 3)));
                                        check_hlds__modecheck_goal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr_39, (MR_Integer) 4)));
                                        check_hlds__modecheck_goal__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_goal__RHS_42)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__modecheck_goal__succeeded)
                                          {
                                            check_hlds__modecheck_goal___ConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_42, (MR_Integer) 0)));
                                            check_hlds__modecheck_goal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_42, (MR_Integer) 1)));
                                            check_hlds__modecheck_goal___RHSVars_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__RHS_42, (MR_Integer) 2)));
                                            check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_48_48 == (MR_Integer) 0);
                                            if (check_hlds__modecheck_goal__succeeded)
                                              {
                                                check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(check_hlds__modecheck_goal__Goals_38);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (check_hlds__modecheck_goal__succeeded)
      {
        check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__TermVarInst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__modecheck_goal__succeeded)
          {
            MR_Word check_hlds__modecheck_goal__RevConj_18;
            MR_Word check_hlds__modecheck_goal__V_26_26;

            {
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_goal__V_22_22, &check_hlds__modecheck_goal__RevConj_18);
            }
            {
              check_hlds__modecheck_goal__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_26_26, 0) = ((MR_Box) (check_hlds__modecheck_goal__RevConj_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__modecheck_goal__MaybeGroundTermMode_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_26_26));
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_goal__V_27_27;
            MR_Word check_hlds__modecheck_goal__V_28_28;

            check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__TermVarInst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermVarInst_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (check_hlds__modecheck_goal__succeeded)
              {
                check_hlds__modecheck_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermVarInst_7, (MR_Integer) 1)));
                check_hlds__modecheck_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__TermVarInst_7, (MR_Integer) 2)));
                check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_27_27 == (MR_Integer) 0);
                if (check_hlds__modecheck_goal__succeeded)
                  check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (check_hlds__modecheck_goal__succeeded)
              {
                MR_Word check_hlds__modecheck_goal__V_29_29;

                {
                  check_hlds__modecheck_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_29_29, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_22_22));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__modecheck_goal__MaybeGroundTermMode_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_29_29));
                }
              }
            else
              *check_hlds__modecheck_goal__MaybeGroundTermMode_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      *check_hlds__modecheck_goal__MaybeGroundTermMode_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(
  MR_Word check_hlds__modecheck_goal__TermVar_7,
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
  MR_Word * check_hlds__modecheck_goal__MaybeKindAndSubGoal_10,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__InstMap0_12;
    MR_Word check_hlds__modecheck_goal__TermVarInst_13;
    MR_Word check_hlds__modecheck_goal__MaybeGroundTermMode_15;
    MR_Word check_hlds__modecheck_goal__VarSet_14;

    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, &check_hlds__modecheck_goal__InstMap0_12);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMap0_12, check_hlds__modecheck_goal__TermVar_7, &check_hlds__modecheck_goal__TermVarInst_13);
    }
    {
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, &check_hlds__modecheck_goal__VarSet_14);
    }
    {
      check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, check_hlds__modecheck_goal__TermVar_7, check_hlds__modecheck_goal__TermVarInst_13, &check_hlds__modecheck_goal__MaybeGroundTermMode_15);
    }
    if ((check_hlds__modecheck_goal__MaybeGroundTermMode_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__modecheck_goal__SubGoal1_23;
        MR_Word check_hlds__modecheck_goal__SubGoal2_28;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42;
        MR_Word check_hlds__modecheck_goal__V_46_46;
        MR_Word check_hlds__modecheck_goal__SubGoal_54;
        MR_Word check_hlds__modecheck_goal__SubGoalConjuncts0_25;
        MR_Word check_hlds__modecheck_goal__SubGoalInfo0_50;
        MR_Word check_hlds__modecheck_goal__SubGoalExpr0_24;
        MR_Word check_hlds__modecheck_goal__V_31_31;

        check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__TermVarInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__modecheck_goal__succeeded)
          {
            check_hlds__modecheck_goal__SubGoalExpr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_8, (MR_Integer) 0)));
            check_hlds__modecheck_goal__SubGoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_8, (MR_Integer) 1)));
            check_hlds__modecheck_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_goal__SubGoalExpr0_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr0_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (check_hlds__modecheck_goal__succeeded)
              {
                check_hlds__modecheck_goal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr0_24, (MR_Integer) 1)));
                check_hlds__modecheck_goal__SubGoalConjuncts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr0_24, (MR_Integer) 2)));
                check_hlds__modecheck_goal__succeeded = (check_hlds__modecheck_goal__V_31_31 == (MR_Integer) 0);
              }
          }
        if (check_hlds__modecheck_goal__succeeded)
          {
            MR_Word check_hlds__modecheck_goal__SubGoalConjuncts1_26;
            MR_Word check_hlds__modecheck_goal__SubGoalExpr1_27;

            {
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_goal__SubGoalConjuncts0_25, &check_hlds__modecheck_goal__SubGoalConjuncts1_26);
            }
            {
              check_hlds__modecheck_goal__SubGoalExpr1_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr1_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr1_27, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__SubGoalExpr1_27, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalConjuncts1_26));
            }
            {
              check_hlds__modecheck_goal__SubGoal1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal1_23, 0) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalExpr1_27));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal1_23, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalInfo0_50));
            }
          }
        else
          check_hlds__modecheck_goal__SubGoal1_23 = check_hlds__modecheck_goal__SubGoal0_8;
        {
          check_hlds__modecheck_goal__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_goal__GoalInfo0_9, (MR_Integer) 1);
        }
        if (check_hlds__modecheck_goal__succeeded)
          {
            {
              hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_1[3]), (MR_Integer) 0, check_hlds__modecheck_goal__SubGoal1_23, &check_hlds__modecheck_goal__SubGoal2_28);
            }
          }
        else
          check_hlds__modecheck_goal__SubGoal2_28 = check_hlds__modecheck_goal__SubGoal1_23;
        {
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41);
        }
        {
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal2_28, &check_hlds__modecheck_goal__SubGoal_54, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42);
        }
        {
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30);
        }
        {
          check_hlds__modecheck_goal__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 0) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_54));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__MaybeKindAndSubGoal_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_46_46));
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__MaybeGroundTermMode_15, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__modecheck_goal__V_99_99)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word check_hlds__modecheck_goal__RevConj0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_99_99, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_goal__LiveTermVar_17;

            {
              check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, check_hlds__modecheck_goal__TermVar_7, &check_hlds__modecheck_goal__LiveTermVar_17);
            }
            switch (check_hlds__modecheck_goal__LiveTermVar_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *check_hlds__modecheck_goal__MaybeKindAndSubGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__modecheck_goal__SubGoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_8, (MR_Integer) 1)));
                  MR_Word check_hlds__modecheck_goal__SubGoal_20;
                  MR_Word check_hlds__modecheck_goal__V_49_49;
                  MR_Word check_hlds__modecheck_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_8, (MR_Integer) 0)));

                  {
                    check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(check_hlds__modecheck_goal__TermVar_7, check_hlds__modecheck_goal__RevConj0_16, check_hlds__modecheck_goal__SubGoalInfo0_19, &check_hlds__modecheck_goal__SubGoal_20, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30);
                  }
                  {
                    check_hlds__modecheck_goal__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_49_49, 0) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_49_49, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_20));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__modecheck_goal__MaybeKindAndSubGoal_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_49_49));
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_goal__SubGoal2_68;
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_76;
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_77;
            MR_Word check_hlds__modecheck_goal__V_80_80;
            MR_Word check_hlds__modecheck_goal__SubGoal_81;

            {
              check_hlds__modecheck_goal__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_goal__GoalInfo0_9, (MR_Integer) 1);
            }
            if (check_hlds__modecheck_goal__succeeded)
              {
                {
                  hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_1[3]), (MR_Integer) 0, check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal2_68);
                }
              }
            else
              check_hlds__modecheck_goal__SubGoal2_68 = check_hlds__modecheck_goal__SubGoal0_8;
            {
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_29, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_76);
            }
            {
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal2_68, &check_hlds__modecheck_goal__SubGoal_81, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_76, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_77);
            }
            {
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_77, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30);
            }
            {
              check_hlds__modecheck_goal__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_80_80, 0) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_80_80, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__modecheck_goal__MaybeKindAndSubGoal_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_80_80));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

    {
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__984__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(
  MR_Word check_hlds__modecheck_goal__Type_7,
  MR_Word check_hlds__modecheck_goal__Context_8,
  MR_Word * check_hlds__modecheck_goal__TypeInfoVar_9,
  MR_Word * check_hlds__modecheck_goal__TypeInfoGoals_10,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__ModuleInfo0_12;
    MR_Word check_hlds__modecheck_goal__PredId_13;
    MR_Integer check_hlds__modecheck_goal__ProcId_14;
    MR_Word check_hlds__modecheck_goal__PredInfo0_15;
    MR_Word check_hlds__modecheck_goal__ProcInfo0_16;
    MR_Word check_hlds__modecheck_goal__VarTypes0_17;
    MR_Word check_hlds__modecheck_goal__VarSet0_18;
    MR_Word check_hlds__modecheck_goal__ProcInfo1_19;
    MR_Word check_hlds__modecheck_goal__ProcInfo2_20;
    MR_Word check_hlds__modecheck_goal__PolyInfo0_21;
    MR_Word check_hlds__modecheck_goal__PolyInfo_22;
    MR_Word check_hlds__modecheck_goal__PolySpecs_23;
    MR_Word check_hlds__modecheck_goal__PredInfo_24;
    MR_Word check_hlds__modecheck_goal__ProcInfo_25;
    MR_Word check_hlds__modecheck_goal__ModuleInfo1_26;
    MR_Word check_hlds__modecheck_goal__ModuleInfo_27;
    MR_Word check_hlds__modecheck_goal__VarSet_28;
    MR_Word check_hlds__modecheck_goal__VarTypes_29;
    MR_Word check_hlds__modecheck_goal__V_32_32;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__ModuleInfo0_12);
    }
    {
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__PredId_13);
    }
    {
      check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__ProcId_14);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_goal__ModuleInfo0_12, check_hlds__modecheck_goal__PredId_13, check_hlds__modecheck_goal__ProcId_14, &check_hlds__modecheck_goal__PredInfo0_15, &check_hlds__modecheck_goal__ProcInfo0_16);
    }
    {
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__VarTypes0_17);
    }
    {
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__VarSet0_18);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modecheck_goal__VarSet0_18, check_hlds__modecheck_goal__ProcInfo0_16, &check_hlds__modecheck_goal__ProcInfo1_19);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modecheck_goal__VarTypes0_17, check_hlds__modecheck_goal__ProcInfo1_19, &check_hlds__modecheck_goal__ProcInfo2_20);
    }
    {
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__modecheck_goal__ModuleInfo0_12, check_hlds__modecheck_goal__PredInfo0_15, check_hlds__modecheck_goal__ProcInfo2_20, &check_hlds__modecheck_goal__PolyInfo0_21);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(check_hlds__modecheck_goal__Type_7, check_hlds__modecheck_goal__Context_8, check_hlds__modecheck_goal__TypeInfoVar_9, check_hlds__modecheck_goal__TypeInfoGoals_10, check_hlds__modecheck_goal__PolyInfo0_21, &check_hlds__modecheck_goal__PolyInfo_22);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(check_hlds__modecheck_goal__PolyInfo_22, &check_hlds__modecheck_goal__PolySpecs_23, check_hlds__modecheck_goal__PredInfo0_15, &check_hlds__modecheck_goal__PredInfo_24, check_hlds__modecheck_goal__ProcInfo2_20, &check_hlds__modecheck_goal__ProcInfo_25, &check_hlds__modecheck_goal__ModuleInfo1_26);
    }
    {
      check_hlds__modecheck_goal__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 3) = ((MR_Box) (check_hlds__modecheck_goal__PolySpecs_23));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_32_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_32_32, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_make_type_info_var_for_type\'/6", (MR_String) "got errors while making type_info_var");
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__modecheck_goal__PredId_13, check_hlds__modecheck_goal__ProcId_14, check_hlds__modecheck_goal__PredInfo_24, check_hlds__modecheck_goal__ProcInfo_25, check_hlds__modecheck_goal__ModuleInfo1_26, &check_hlds__modecheck_goal__ModuleInfo_27);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__modecheck_goal__ProcInfo_25, &check_hlds__modecheck_goal__VarSet_28);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__modecheck_goal__ProcInfo_25, &check_hlds__modecheck_goal__VarTypes_29);
    }
    {
      check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_goal__VarSet_28, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37);
    }
    {
      check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_goal__VarTypes_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38);
    }
    {
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_goal__ModuleInfo_27, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(
  MR_Word check_hlds__modecheck_goal__TermVar_7,
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_10,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__TypeInfo_73_73;
    MR_Word check_hlds__modecheck_goal__VarTypes0_12;
    MR_Word check_hlds__modecheck_goal__VarSet0_13;
    MR_Word check_hlds__modecheck_goal__CloneVar_14;
    MR_Word check_hlds__modecheck_goal__VarSet_15;
    MR_Word check_hlds__modecheck_goal__TermVarType_16;
    MR_Word check_hlds__modecheck_goal__VarTypes_17;
    MR_Word check_hlds__modecheck_goal__Rename_18;
    MR_Word check_hlds__modecheck_goal__SubGoal_19;
    MR_Word check_hlds__modecheck_goal__ScopeGoalInfo1_20;
    MR_Word check_hlds__modecheck_goal__InstMap0_21;
    MR_Word check_hlds__modecheck_goal__TermVarOldInst_22;
    MR_Word check_hlds__modecheck_goal__ScopeInstMapDelta_23;
    MR_Word check_hlds__modecheck_goal__ScopeGoalInfo_24;
    MR_Word check_hlds__modecheck_goal__Reason_25;
    MR_Word check_hlds__modecheck_goal__ScopeGoalExpr_26;
    MR_Word check_hlds__modecheck_goal__ScopeGoal_27;
    MR_Word check_hlds__modecheck_goal__TermVarUniqueInst_28;
    MR_Word check_hlds__modecheck_goal__InstMap1_29;
    MR_Word check_hlds__modecheck_goal__Context_30;
    MR_Word check_hlds__modecheck_goal__TypeInfoVar_31;
    MR_Word check_hlds__modecheck_goal__TypeInfoGoals_32;
    MR_Word check_hlds__modecheck_goal__InstMapDelta_33;
    MR_Word check_hlds__modecheck_goal__ModuleInfo_34;
    MR_Word check_hlds__modecheck_goal__CopyGoal_35;
    MR_Word check_hlds__modecheck_goal__InstMap2_36;
    MR_Word check_hlds__modecheck_goal__InstMap_37;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;
    MR_Word check_hlds__modecheck_goal__V_43_43;
    MR_Word check_hlds__modecheck_goal__V_44_44;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50;
    MR_Word check_hlds__modecheck_goal__V_51_51;
    MR_Word check_hlds__modecheck_goal__V_52_52;
    MR_Word check_hlds__modecheck_goal__V_54_54;
    MR_Word check_hlds__modecheck_goal__V_60_60;
    MR_Word check_hlds__modecheck_goal__V_63_63;
    MR_Word check_hlds__modecheck_goal__V_64_64;
    MR_Word check_hlds__modecheck_goal__V_68_68;
    MR_Word check_hlds__modecheck_goal__V_69_69;
    MR_Word check_hlds__modecheck_goal__V_70_70;

    {
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_goal__VarTypes0_12);
    }
    {
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_goal__VarSet0_13);
    }
    {
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_goal__CloneVar_14, check_hlds__modecheck_goal__VarSet0_13, &check_hlds__modecheck_goal__VarSet_15);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_goal__VarTypes0_12, check_hlds__modecheck_goal__TermVar_7, &check_hlds__modecheck_goal__TermVarType_16);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__modecheck_goal__CloneVar_14, check_hlds__modecheck_goal__TermVarType_16, check_hlds__modecheck_goal__VarTypes0_12, &check_hlds__modecheck_goal__VarTypes_17);
    }
    {
      check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_goal__VarSet_15, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40);
    }
    {
      check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_goal__VarTypes_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41);
    }
    check_hlds__modecheck_goal__TypeInfo_73_73 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
    {
      check_hlds__modecheck_goal__Rename_18 = mercury__map__singleton_2_f_0(check_hlds__modecheck_goal__TypeInfo_73_73, check_hlds__modecheck_goal__TypeInfo_73_73, ((MR_Box) (check_hlds__modecheck_goal__TermVar_7)), ((MR_Box) (check_hlds__modecheck_goal__CloneVar_14)));
    }
    {
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__modecheck_goal__Rename_18, check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_19);
    }
    {
      hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, check_hlds__modecheck_goal__Rename_18, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__ScopeGoalInfo1_20);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_goal__InstMap0_21);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMap0_21, check_hlds__modecheck_goal__TermVar_7, &check_hlds__modecheck_goal__TermVarOldInst_22);
    }
    {
      check_hlds__modecheck_goal__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 0) = ((MR_Box) (check_hlds__modecheck_goal__CloneVar_14));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVarOldInst_22));
    }
    {
      check_hlds__modecheck_goal__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_43_43, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_44_44));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_goal__ScopeInstMapDelta_23 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_goal__V_43_43);
    }
    {
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__ScopeInstMapDelta_23, check_hlds__modecheck_goal__ScopeGoalInfo1_20, &check_hlds__modecheck_goal__ScopeGoalInfo_24);
    }
    {
      check_hlds__modecheck_goal__Reason_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_25, 1) = ((MR_Box) (check_hlds__modecheck_goal__CloneVar_14));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_25, 2) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__modecheck_goal__ScopeGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ScopeGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ScopeGoalExpr_26, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_25));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__ScopeGoalExpr_26, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_19));
    }
    {
      check_hlds__modecheck_goal__ScopeGoal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__ScopeGoal_27, 0) = ((MR_Box) (check_hlds__modecheck_goal__ScopeGoalExpr_26));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__ScopeGoal_27, 1) = ((MR_Box) (check_hlds__modecheck_goal__ScopeGoalInfo_24));
    }
    check_hlds__modecheck_goal__TermVarUniqueInst_28 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[3]);
    {
      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_goal__CloneVar_14, check_hlds__modecheck_goal__TermVarOldInst_22, check_hlds__modecheck_goal__InstMap0_21, &check_hlds__modecheck_goal__InstMap1_29);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap1_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49);
    }
    {
      check_hlds__modecheck_goal__Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_goal__GoalInfo0_9);
    }
    {
      check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(check_hlds__modecheck_goal__TermVarType_16, check_hlds__modecheck_goal__Context_30, &check_hlds__modecheck_goal__TypeInfoVar_31, &check_hlds__modecheck_goal__TypeInfoGoals_32, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50);
    }
    {
      check_hlds__modecheck_goal__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 0) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_7));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_52_52, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVarUniqueInst_28));
    }
    {
      check_hlds__modecheck_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_51_51, 0) = ((MR_Box) (check_hlds__modecheck_goal__V_52_52));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_goal__InstMapDelta_33 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_goal__V_51_51);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_goal__ModuleInfo_34);
    }
    {
      check_hlds__modecheck_goal__V_54_54 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__modecheck_goal__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_64_64, 0) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_7));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_goal__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_63_63, 0) = ((MR_Box) (check_hlds__modecheck_goal__CloneVar_14));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_63_63, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_64_64));
    }
    {
      check_hlds__modecheck_goal__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_60_60, 0) = ((MR_Box) (check_hlds__modecheck_goal__TypeInfoVar_31));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_60_60, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_63_63));
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__modecheck_goal__V_54_54, (MR_String) "copy", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_7[0]), (MR_Integer) 0, (MR_Integer) 0, check_hlds__modecheck_goal__V_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__InstMapDelta_33, check_hlds__modecheck_goal__ModuleInfo_34, check_hlds__modecheck_goal__Context_30, &check_hlds__modecheck_goal__CopyGoal_35);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_goal__InstMap2_36);
    }
    {
      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_goal__TermVar_7, check_hlds__modecheck_goal__TermVarUniqueInst_28, check_hlds__modecheck_goal__InstMap2_36, &check_hlds__modecheck_goal__InstMap_37);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_37, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_50_50, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39);
    }
    {
      check_hlds__modecheck_goal__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_69_69, 0) = ((MR_Box) (check_hlds__modecheck_goal__ScopeGoal_27));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_69_69, 1) = ((MR_Box) (check_hlds__modecheck_goal__TypeInfoGoals_32));
    }
    {
      check_hlds__modecheck_goal__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_70_70, 0) = ((MR_Box) (check_hlds__modecheck_goal__CopyGoal_35));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_goal__V_68_68 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_goal__V_69_69, check_hlds__modecheck_goal__V_70_70);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__modecheck_goal__GoalExpr_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__V_68_68));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4(
  MR_Box check_hlds__modecheck_goal__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

    {
      check_hlds__modecheck_goal__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 5))));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3(
  MR_Box check_hlds__modecheck_goal__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

    {
      check_hlds__modecheck_goal__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 5))));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2(
  MR_Box check_hlds__modecheck_goal__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

    {
      check_hlds__modecheck_goal__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;

    {
      check_hlds__modecheck_goal__succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__815__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(
  MR_Word check_hlds__modecheck_goal__Reason_7,
  MR_Word check_hlds__modecheck_goal__SubGoal0_8,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_9,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_10,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__Reason_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_135;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_136;
          MR_Word check_hlds__modecheck_goal__SubGoal_139;

          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_135);
          }
          {
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_139, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_135, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_136);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__modecheck_goal__GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_139));
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_136, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_149;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_150;
          MR_Word check_hlds__modecheck_goal__SubGoal_153;

          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_149);
          }
          {
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_153, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_149, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_150);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__modecheck_goal__GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_153));
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_150, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__modecheck_goal__InPPScope_45;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53;
          MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56;
          MR_Word check_hlds__modecheck_goal__SubGoal_124;

          {
            check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__InPPScope_45);
          }
          {
            check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49);
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "promise_purity scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52);
          }
          {
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_124, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__modecheck_goal__GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_124));
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "promise_purity scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56);
          }
          {
            check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(check_hlds__modecheck_goal__InPPScope_45, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_163;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_164;
              MR_Word check_hlds__modecheck_goal__SubGoal_167;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_163);
              }
              {
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_167, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_163, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_164);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_167));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_164, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_156;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_157;
              MR_Word check_hlds__modecheck_goal__SubGoal_160;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_156);
              }
              {
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_160, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_156, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_157);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_160));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_157, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_170;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_171;
              MR_Word check_hlds__modecheck_goal__SubGoal_174;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_170);
              }
              {
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_174, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_170, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_171);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_174));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_171, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_128;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_129;
              MR_Word check_hlds__modecheck_goal__SubGoal_132;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_128);
              }
              {
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_132, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_128, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_129);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_132));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_129, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_93;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_94;
              MR_Word check_hlds__modecheck_goal__SubGoal_110;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_93);
              }
              {
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_110, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_93, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_94);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_110));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_94, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__modecheck_goal__TermVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__OldKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 2)));

              switch (check_hlds__modecheck_goal__OldKind_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__modecheck_goal__IsLive_36;

                    {
                      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, check_hlds__modecheck_goal__TermVar_34, &check_hlds__modecheck_goal__IsLive_36);
                    }
                    switch (check_hlds__modecheck_goal__IsLive_36) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          *check_hlds__modecheck_goal__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[1]);
                          *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__modecheck_goal__InstMapDelta0_37;
                          MR_Word check_hlds__modecheck_goal__TermVarInst_38;
                          MR_Word check_hlds__modecheck_goal__InstMap0_111;
                          MR_Word check_hlds__modecheck_goal__InstMap_112;

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *check_hlds__modecheck_goal__GoalExpr_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal0_8));
                          }
                          {
                            check_hlds__modecheck_goal__InstMapDelta0_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__modecheck_goal__GoalInfo0_9);
                          }
                          {
                            hlds__instmap__instmap_delta_lookup_var_3_p_0(check_hlds__modecheck_goal__InstMapDelta0_37, check_hlds__modecheck_goal__TermVar_34, &check_hlds__modecheck_goal__TermVarInst_38);
                          }
                          {
                            check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__InstMap0_111);
                          }
                          {
                            hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_goal__TermVar_34, check_hlds__modecheck_goal__TermVarInst_38, check_hlds__modecheck_goal__InstMap0_111, &check_hlds__modecheck_goal__InstMap_112);
                          }
                          {
                            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_112, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                  {
                    MR_Word check_hlds__modecheck_goal__MaybeKind1AndSubGoal1_39;
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60;
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_61_61;
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_64_64;

                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60);
                    }
                    {
                      check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(check_hlds__modecheck_goal__TermVar_34, check_hlds__modecheck_goal__SubGoal0_8, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__MaybeKind1AndSubGoal1_39, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_60_60, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_61_61);
                    }
                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_61_61, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_64_64);
                    }
                    if ((check_hlds__modecheck_goal__MaybeKind1AndSubGoal1_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        *check_hlds__modecheck_goal__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[1]);
                        *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_64_64;
                      }
                    else
                      {
                        MR_Word check_hlds__modecheck_goal__Kind1_40;
                        MR_Word check_hlds__modecheck_goal__SubGoal1_41;
                        MR_Word check_hlds__modecheck_goal__MakeGroundTermsUnique_42;
                        MR_Word check_hlds__modecheck_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__MaybeKind1AndSubGoal1_39, (MR_Integer) 0)));
                        MR_Word check_hlds__modecheck_goal__V_68_68;
                        MR_Word check_hlds__modecheck_goal__V_72_72;
                        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75;

                        check_hlds__modecheck_goal__Kind1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_67_67, (MR_Integer) 0)));
                        check_hlds__modecheck_goal__SubGoal1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_67_67, (MR_Integer) 1)));
                        {
                          check_hlds__modecheck_goal__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[0]));
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1));
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 3) = ((MR_Box) (check_hlds__modecheck_goal__Kind1_40));
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_72_72, 4) = ((MR_Box) ((MR_Integer) 0));
                        }
                        {
                          check_hlds__modecheck_goal__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[0]));
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2));
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_68_68, 3) = ((MR_Box) (check_hlds__modecheck_goal__V_72_72));
                        }
                        {
                          mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_68_68, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                        }
                        {
                          check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75);
                        }
                        {
                          check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_goal__MakeGroundTermsUnique_42);
                        }
                        switch (check_hlds__modecheck_goal__MakeGroundTermsUnique_42) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__modecheck_goal__UpdatedReason1_43;

                              {
                                check_hlds__modecheck_goal__UpdatedReason1_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_43, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_34));
                                MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_43, 2) = ((MR_Box) (check_hlds__modecheck_goal__Kind1_40));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *check_hlds__modecheck_goal__GoalExpr_10 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__UpdatedReason1_43));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal1_41));
                              }
                              *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75;
                            }
                            break;
                          case (MR_Integer) 0:
                            switch (check_hlds__modecheck_goal__Kind1_40) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                {
                                  check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(check_hlds__modecheck_goal__TermVar_34, check_hlds__modecheck_goal__SubGoal1_41, check_hlds__modecheck_goal__GoalInfo0_9, check_hlds__modecheck_goal__GoalExpr_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
                                }
                                break;
                              case (MR_Integer) 2:
                              case (MR_Integer) 3:
                                {
                                  MR_Word check_hlds__modecheck_goal__UpdatedReason1_117;

                                  {
                                    check_hlds__modecheck_goal__UpdatedReason1_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_117, 1) = ((MR_Box) (check_hlds__modecheck_goal__TermVar_34));
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__UpdatedReason1_117, 2) = ((MR_Box) (check_hlds__modecheck_goal__Kind1_40));
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                    *check_hlds__modecheck_goal__GoalExpr_10 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__UpdatedReason1_117));
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal1_41));
                                  }
                                  *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_75_75;
                                }
                                break;
                              case (MR_Integer) 0:
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                                    return;
                                  }
                                }
                                break;
                            }
                            break;
                        }
                      }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__modecheck_goal__InstMap0_17;
              MR_Word check_hlds__modecheck_goal__NonLocals_18;
              MR_Word check_hlds__modecheck_goal__SubGoal_19;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_100_100;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_103_103;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_106_106;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_100_100);
              }
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modecheck_goal__InstMap0_17);
              }
              {
                check_hlds__modecheck_goal__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_9);
              }
              {
                check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__modecheck_goal__NonLocals_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_100_100, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102);
              }
              {
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_19, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_102_102, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_103_103);
              }
              {
                check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__modecheck_goal__NonLocals_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_103_103, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105);
              }
              {
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_105_105, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_106_106);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_19));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_106_106, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__modecheck_goal__LCVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__LCSVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 2)));
              MR_Word check_hlds__modecheck_goal__InstMap_32;
              MR_Word check_hlds__modecheck_goal__ModuleInfo_33;
              MR_Word check_hlds__modecheck_goal__V_83_83;
              MR_Word check_hlds__modecheck_goal__V_87_87;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_142;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_143;
              MR_Word check_hlds__modecheck_goal__SubGoal_146;
              MR_Word check_hlds__modecheck_goal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_7, (MR_Integer) 3)));

              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__InstMap_32);
              }
              {
                check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__ModuleInfo_33);
              }
              {
                check_hlds__modecheck_goal__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 3) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_33));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 4) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_32));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, 5) = ((MR_Box) (check_hlds__modecheck_goal__LCVar_29));
              }
              {
                mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_83_83, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control variable is not ground");
              }
              {
                check_hlds__modecheck_goal__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 3) = ((MR_Box) (check_hlds__modecheck_goal__ModuleInfo_33));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 4) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_32));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_87_87, 5) = ((MR_Box) (check_hlds__modecheck_goal__LCSVar_30));
              }
              {
                mercury__require__expect_4_p_0(check_hlds__modecheck_goal__V_87_87, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control slot variable is not ground");
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_46, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_142);
              }
              {
                check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_8, &check_hlds__modecheck_goal__SubGoal_146, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_93_142, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_143);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__modecheck_goal__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_146));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_94_143, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_47);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(
  MR_Word check_hlds__modecheck_goal__SubGoal0_6,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__NonLocals_10;
    MR_Word check_hlds__modecheck_goal__InstMap0_11;
    MR_Word check_hlds__modecheck_goal__LiveVars0_12;
    MR_Word check_hlds__modecheck_goal__SubGoal_13;
    MR_Word check_hlds__modecheck_goal__InPromisePurityScope_14;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21;
    MR_Word check_hlds__modecheck_goal__V_22_22;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21);
    }
    {
      check_hlds__modecheck_goal__NonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_7);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modecheck_goal__InstMap0_11);
    }
    {
      check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modecheck_goal__LiveVars0_12);
    }
    {
      check_hlds__modecheck_goal__V_22_22 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0]);
    }
    {
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__modecheck_goal__V_22_22, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23);
    }
    {
      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__NonLocals_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25);
    }
    {
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__SubGoal0_6, &check_hlds__modecheck_goal__SubGoal_13, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26);
    }
    {
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__modecheck_goal__LiveVars0_12, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27);
    }
    {
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_goal__NonLocals_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_11, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30);
    }
    {
      check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modecheck_goal__InPromisePurityScope_14);
    }
    switch (check_hlds__modecheck_goal__InPromisePurityScope_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_goal__NegNonLocals_15;
          MR_Word check_hlds__modecheck_goal__Unreachable_16;
          MR_Word check_hlds__modecheck_goal__V_32_32;

          {
            check_hlds__modecheck_goal__NegNonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_7);
          }
          {
            hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_goal__Unreachable_16);
          }
          {
            check_hlds__modecheck_goal__V_32_32 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__NegNonLocals_15);
          }
          {
            check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 1, check_hlds__modecheck_goal__V_32_32, check_hlds__modecheck_goal__InstMap0_11, check_hlds__modecheck_goal__Unreachable_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33);
          }
        }
        break;
    }
    *check_hlds__modecheck_goal__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__modecheck_goal__SubGoal_13);
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(
  MR_Word check_hlds__modecheck_goal__Vars_9,
  MR_Word check_hlds__modecheck_goal__Cond0_10,
  MR_Word check_hlds__modecheck_goal__Then0_11,
  MR_Word check_hlds__modecheck_goal__Else0_12,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_13,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_14,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__NonLocals_16;
    MR_Word check_hlds__modecheck_goal__ThenVars_17;
    MR_Word check_hlds__modecheck_goal__InstMap0_18;
    MR_Word check_hlds__modecheck_goal__Cond_19;
    MR_Word check_hlds__modecheck_goal__InstMapCond_20;
    MR_Word check_hlds__modecheck_goal__Then_21;
    MR_Word check_hlds__modecheck_goal__InstMapThen_22;
    MR_Word check_hlds__modecheck_goal__Else_23;
    MR_Word check_hlds__modecheck_goal__InstMapElse_24;
    MR_Word check_hlds__modecheck_goal__ThenElseArgInfos_25;
    MR_Word check_hlds__modecheck_goal__InstMap_26;
    MR_Word check_hlds__modecheck_goal__InPromisePurityScope_27;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_43_43;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44_44;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_45_45;
    MR_Word check_hlds__modecheck_goal__V_46_46;
    MR_Word check_hlds__modecheck_goal__V_47_47;
    MR_Word check_hlds__modecheck_goal__V_48_48;
    MR_Word check_hlds__modecheck_goal__V_50_50;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34);
    }
    {
      check_hlds__modecheck_goal__NonLocals_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_13);
    }
    {
      check_hlds__modecheck_goal__ThenVars_17 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_goal__Then0_11);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_goal__InstMap0_18);
    }
    {
      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_goal__NonLocals_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36);
    }
    {
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_goal__ThenVars_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37);
    }
    {
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Cond0_10, &check_hlds__modecheck_goal__Cond_19, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_goal__InstMapCond_20);
    }
    {
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_goal__ThenVars_17, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39);
    }
    {
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_goal__NonLocals_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41);
    }
    {
      check_hlds__modecheck_goal__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_goal__InstMapCond_20);
    }
    if (check_hlds__modecheck_goal__succeeded)
      {
        {
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Then0_11, &check_hlds__modecheck_goal__Then_21, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_goal__InstMapThen_22);
        }
      }
    else
      {
        {
          check_hlds__modecheck_goal__Then_21 = hlds__make_goal__true_goal_0_f_0();
        }
        check_hlds__modecheck_goal__InstMapThen_22 = check_hlds__modecheck_goal__InstMapCond_20;
        check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_41_41;
      }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_43_43);
    }
    {
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Else0_12, &check_hlds__modecheck_goal__Else_23, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44_44);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__modecheck_goal__InstMapElse_24);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_45_45);
    }
    {
      check_hlds__modecheck_goal__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_48_48, 0) = ((MR_Box) (check_hlds__modecheck_goal__Else_23));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_goal__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_46_46, 0) = ((MR_Box) (check_hlds__modecheck_goal__Then_21));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_48_48));
    }
    {
      check_hlds__modecheck_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_50_50, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMapElse_24));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_goal__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_47_47, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMapThen_22));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__V_47_47, 1) = ((MR_Box) (check_hlds__modecheck_goal__V_50_50));
    }
    {
      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__modecheck_goal__V_46_46, check_hlds__modecheck_goal__V_47_47, &check_hlds__modecheck_goal__ThenElseArgInfos_25);
    }
    {
      hlds__instmap__instmap_merge_5_p_0(check_hlds__modecheck_goal__NonLocals_16, check_hlds__modecheck_goal__ThenElseArgInfos_25, (MR_Integer) 1, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__modecheck_goal__GoalExpr_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Vars_9));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__Cond_19));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_goal__Then_21));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__modecheck_goal__Else_23));
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53, &check_hlds__modecheck_goal__InstMap_26);
    }
    {
      check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53, &check_hlds__modecheck_goal__InPromisePurityScope_27);
    }
    switch (check_hlds__modecheck_goal__InPromisePurityScope_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_goal__TypeCtorInfo_60_60;
          MR_Word check_hlds__modecheck_goal__CondNonLocals0_28;
          MR_Word check_hlds__modecheck_goal__CondNonLocals_29;
          MR_Word check_hlds__modecheck_goal__V_54_54;

          {
            check_hlds__modecheck_goal__CondNonLocals0_28 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_goal__Cond_19);
          }
          check_hlds__modecheck_goal__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            check_hlds__modecheck_goal__V_54_54 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__modecheck_goal__TypeCtorInfo_60_60, check_hlds__modecheck_goal__CondNonLocals0_28, check_hlds__modecheck_goal__NonLocals_16);
          }
          {
            check_hlds__modecheck_goal__CondNonLocals_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_60_60, check_hlds__modecheck_goal__V_54_54);
          }
          {
            check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 0, check_hlds__modecheck_goal__CondNonLocals_29, check_hlds__modecheck_goal__InstMap0_18, check_hlds__modecheck_goal__InstMap_26, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_53_53, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56);
          }
        }
        break;
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_56_56, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_31);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4,
  MR_Word check_hlds__modecheck_goal__Case0_5,
  MR_Word * check_hlds__modecheck_goal__Case_6)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_5, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_goal__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_5, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_goal__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_5, (MR_Integer) 2)));
    MR_Word check_hlds__modecheck_goal__Goal_10;

    {
      check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(check_hlds__modecheck_goal__LargeFlatConstructs_4, check_hlds__modecheck_goal__Goal0_9, &check_hlds__modecheck_goal__Goal_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__modecheck_goal__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__MainConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__OtherConsIds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__Goal_10));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    if ((check_hlds__modecheck_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__modecheck_goal__Goal0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__Goals0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_goal__Goal_8;
        MR_Word check_hlds__modecheck_goal__Goals_9;

        {
          check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(check_hlds__modecheck_goal__LargeFlatConstructs_1, check_hlds__modecheck_goal__Goal0_6, &check_hlds__modecheck_goal__Goal_8);
        }
        {
          check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(check_hlds__modecheck_goal__LargeFlatConstructs_1, check_hlds__modecheck_goal__Goals0_7, &check_hlds__modecheck_goal__Goals_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_9));
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(
  MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4,
  MR_Word check_hlds__modecheck_goal__Goal0_5,
  MR_Word * check_hlds__modecheck_goal__Goal_6)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_5, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_goal__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
        break;
      case (MR_Integer) 1:
        *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
        break;
      case (MR_Integer) 2:
        *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__modecheck_goal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__modecheck_goal__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 1)));

              switch (check_hlds__modecheck_goal__V_100_100) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__modecheck_goal__TypeCtorInfo_98_98;
                    MR_Word check_hlds__modecheck_goal__Conjuncts_76;
                    MR_Word check_hlds__modecheck_goal__ChangedVars_77;
                    MR_Word check_hlds__modecheck_goal__GroundVars_78;
                    MR_Word check_hlds__modecheck_goal__V_82_82;
                    MR_Word check_hlds__modecheck_goal__InstMapDelta0_93;
                    MR_Word check_hlds__modecheck_goal__InstMapDelta_94;
                    MR_Word check_hlds__modecheck_goal__GoalInfo_95;
                    MR_Word check_hlds__modecheck_goal__GoalExpr_96;

                    {
                      check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(check_hlds__modecheck_goal__LargeFlatConstructs_4, check_hlds__modecheck_goal__V_99_99, &check_hlds__modecheck_goal__Conjuncts_76);
                    }
                    {
                      check_hlds__modecheck_goal__GoalExpr_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_96, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_96, 2) = ((MR_Box) (check_hlds__modecheck_goal__Conjuncts_76));
                    }
                    {
                      check_hlds__modecheck_goal__InstMapDelta0_93 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__modecheck_goal__GoalInfo0_8);
                    }
                    {
                      hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__modecheck_goal__InstMapDelta0_93, &check_hlds__modecheck_goal__ChangedVars_77);
                    }
                    check_hlds__modecheck_goal__TypeCtorInfo_98_98 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      parse_tree__set_of_var__intersect_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_98_98, check_hlds__modecheck_goal__ChangedVars_77, check_hlds__modecheck_goal__LargeFlatConstructs_4, &check_hlds__modecheck_goal__GroundVars_78);
                    }
                    {
                      check_hlds__modecheck_goal__V_82_82 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__modecheck_goal__TypeCtorInfo_98_98, check_hlds__modecheck_goal__GroundVars_78);
                    }
                    {
                      hlds__instmap__instmap_delta_set_vars_same_4_p_0((MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[2]), check_hlds__modecheck_goal__V_82_82, check_hlds__modecheck_goal__InstMapDelta0_93, &check_hlds__modecheck_goal__InstMapDelta_94);
                    }
                    {
                      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_94, check_hlds__modecheck_goal__GoalInfo0_8, &check_hlds__modecheck_goal__GoalInfo_95);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__modecheck_goal__Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_96));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_95));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
            break;
          case (MR_Integer) 4:
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__modecheck_goal__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__SubGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_7, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) check_hlds__modecheck_goal__Reason_43)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                  break;
                case (MR_Integer) 1:
                  *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_43, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                      break;
                    case (MR_Integer) 2:
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                      break;
                    case (MR_Integer) 3:
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                      break;
                    case (MR_Integer) 4:
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word check_hlds__modecheck_goal__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_43, (MR_Integer) 2)));
                        MR_Word check_hlds__modecheck_goal__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_43, (MR_Integer) 1)));

                        switch (check_hlds__modecheck_goal__V_101_101) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              {
                                check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_4, check_hlds__modecheck_goal__V_102_102);
                              }
                              if (check_hlds__modecheck_goal__succeeded)
                                {
                                  MR_Word check_hlds__modecheck_goal__InstMapDelta0_46;
                                  MR_Word check_hlds__modecheck_goal__InstMapDelta_47;
                                  MR_Word check_hlds__modecheck_goal__GoalInfo_48;
                                  MR_Word check_hlds__modecheck_goal__SubGoalExpr0_49;
                                  MR_Word check_hlds__modecheck_goal__SubGoalInfo0_50;
                                  MR_Word check_hlds__modecheck_goal__SubGoalInfo_51;
                                  MR_Word check_hlds__modecheck_goal__SubGoal_52;
                                  MR_Word check_hlds__modecheck_goal__GoalExpr_53;

                                  {
                                    check_hlds__modecheck_goal__InstMapDelta0_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__modecheck_goal__GoalInfo0_8);
                                  }
                                  {
                                    hlds__instmap__instmap_delta_set_var_4_p_0(check_hlds__modecheck_goal__V_102_102, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[2]), check_hlds__modecheck_goal__InstMapDelta0_46, &check_hlds__modecheck_goal__InstMapDelta_47);
                                  }
                                  {
                                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_47, check_hlds__modecheck_goal__GoalInfo0_8, &check_hlds__modecheck_goal__GoalInfo_48);
                                  }
                                  check_hlds__modecheck_goal__SubGoalExpr0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_44, (MR_Integer) 0)));
                                  check_hlds__modecheck_goal__SubGoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal0_44, (MR_Integer) 1)));
                                  {
                                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_goal__InstMapDelta_47, check_hlds__modecheck_goal__SubGoalInfo0_50, &check_hlds__modecheck_goal__SubGoalInfo_51);
                                  }
                                  {
                                    check_hlds__modecheck_goal__SubGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal_52, 0) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalExpr0_49));
                                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__SubGoal_52, 1) = ((MR_Box) (check_hlds__modecheck_goal__SubGoalInfo_51));
                                  }
                                  {
                                    check_hlds__modecheck_goal__GoalExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_53, 1) = ((MR_Box) (check_hlds__modecheck_goal__Reason_43));
                                    MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_53, 2) = ((MR_Box) (check_hlds__modecheck_goal__SubGoal_52));
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    *check_hlds__modecheck_goal__Goal_6 = base;
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_53));
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_48));
                                  }
                                }
                              else
                                *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                            }
                            break;
                          case (MR_Integer) 2:
                            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                            break;
                          case (MR_Integer) 0:
                            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                            break;
                          case (MR_Integer) 3:
                            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                      break;
                    case (MR_Integer) 7:
                      *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
            break;
          case (MR_Integer) 7:
            *check_hlds__modecheck_goal__Goal_6 = check_hlds__modecheck_goal__Goal0_5;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_goal__succeeded;

        if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_3 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2;
        else
          {
            MR_Word check_hlds__modecheck_goal__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_goal__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_goal__GoalLargeFlatConstructs_10;
            MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_13_13;

            {
              check_hlds__modecheck_goal__GoalLargeFlatConstructs_10 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(check_hlds__modecheck_goal__Goal_7);
            }
            {
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__GoalLargeFlatConstructs_10, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2, &check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_13_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__modecheck_goal__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_goal__Goals_8;
              MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0__tmp_copy_2 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_13_13;

              check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_2 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0__tmp_copy_2;
              check_hlds__modecheck_goal__HeadVar__1_1 = check_hlds__modecheck_goal__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(
  MR_Word check_hlds__modecheck_goal__Goal_3)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_4;
    MR_Word check_hlds__modecheck_goal__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_3, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_goal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_3, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              {
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__modecheck_goal__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 2)));
              MR_Word check_hlds__modecheck_goal__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 1)));

              switch (check_hlds__modecheck_goal__V_98_98) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__modecheck_goal__V_67_67;

                    {
                      check_hlds__modecheck_goal__V_67_67 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
                    {
                      check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(check_hlds__modecheck_goal__V_97_97, check_hlds__modecheck_goal__V_67_67, &check_hlds__modecheck_goal__LargeFlatConstructs_4);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__modecheck_goal__Reason_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr_5, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) check_hlds__modecheck_goal__Reason_41)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_41, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        {
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word check_hlds__modecheck_goal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_41, (MR_Integer) 2)));
                        MR_Word check_hlds__modecheck_goal__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__Reason_41, (MR_Integer) 1)));

                        switch (check_hlds__modecheck_goal__V_99_99) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              {
                                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__V_100_100);
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              {
                                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              {
                                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        {
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        {
                          check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                check_hlds__modecheck_goal__LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
            }
            break;
        }
        break;
    }
    return check_hlds__modecheck_goal__LargeFlatConstructs_4;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_case_list_8_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word * check_hlds__modecheck_goal__HeadVar__4_4,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_6,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_8)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_8 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7;
        *check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_6 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5;
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__Case0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_goal__Case_19;
        MR_Word check_hlds__modecheck_goal__Cases_20;
        MR_Word check_hlds__modecheck_goal__InstMap_21;
        MR_Word check_hlds__modecheck_goal__InstMaps_22;
        MR_Word check_hlds__modecheck_goal__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_16, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_16, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_goal__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case0_16, (MR_Integer) 2)));
        MR_Word check_hlds__modecheck_goal__InstMap0_28;
        MR_Word check_hlds__modecheck_goal__InstMap1_29;
        MR_Word check_hlds__modecheck_goal__Goal1_30;
        MR_Word check_hlds__modecheck_goal__Goal_31;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_38_38;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7, &check_hlds__modecheck_goal__InstMap0_28);
        }
        {
          check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__modecheck_goal__HeadVar__2_2, check_hlds__modecheck_goal__MainConsId_25, check_hlds__modecheck_goal__OtherConsIds_26, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_7, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__InstMap1_29);
        }
        {
          check_hlds__modecheck_goal__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_goal__InstMap1_29);
        }
        if (check_hlds__modecheck_goal__succeeded)
          {
            {
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Goal0_27, &check_hlds__modecheck_goal__Goal1_30, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37);
            }
            {
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37, &check_hlds__modecheck_goal__InstMap_21);
            }
          }
        else
          {
            {
              check_hlds__modecheck_goal__Goal1_30 = hlds__make_goal__true_goal_0_f_0();
            }
            check_hlds__modecheck_goal__InstMap_21 = check_hlds__modecheck_goal__InstMap1_29;
            check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_36_36;
          }
        {
          check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__modecheck_goal__HeadVar__2_2, check_hlds__modecheck_goal__InstMap0_28, check_hlds__modecheck_goal__InstMap_21, check_hlds__modecheck_goal__Goal1_30, &check_hlds__modecheck_goal__Goal_31);
        }
        {
          check_hlds__modecheck_goal__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case_19, 0) = ((MR_Box) (check_hlds__modecheck_goal__MainConsId_25));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case_19, 1) = ((MR_Box) (check_hlds__modecheck_goal__OtherConsIds_26));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Case_19, 2) = ((MR_Box) (check_hlds__modecheck_goal__Goal_31));
        }
        {
          check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5);
        }
        if (check_hlds__modecheck_goal__succeeded)
          check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_38_38 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5;
        else
          {
            MR_Word check_hlds__modecheck_goal__GoalLargeFlatConstructs_46;

            {
              check_hlds__modecheck_goal__GoalLargeFlatConstructs_46 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(check_hlds__modecheck_goal__Goal_31);
            }
            {
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__GoalLargeFlatConstructs_46, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_5, &check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_38_38);
            }
          }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_28, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_37_37, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39);
        }
        {
          check_hlds__modecheck_goal__modecheck_case_list_8_p_0(check_hlds__modecheck_goal__Cases0_17, check_hlds__modecheck_goal__HeadVar__2_2, &check_hlds__modecheck_goal__Cases_20, &check_hlds__modecheck_goal__InstMaps_22, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_38_38, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_6, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_39_39, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Case_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Cases_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_22));
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2)
{
  {
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
    MR_Word check_hlds__modecheck_goal__conv1_HeadVar__4_4;

    {
      hlds__instmap__instmap_set_vars_same_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), &check_hlds__modecheck_goal__conv1_HeadVar__4_4);
    }
    *check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2)
{
  {
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
    MR_Word check_hlds__modecheck_goal__conv0_Case_6;

    {
      check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), &check_hlds__modecheck_goal__conv0_Case_6);
    }
    *check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv0_Case_6));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(
  MR_Word check_hlds__modecheck_goal__Var_8,
  MR_Word check_hlds__modecheck_goal__CanFail_9,
  MR_Word check_hlds__modecheck_goal__Cases0_10,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_11,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_12,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__Cases_14;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_22, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26);
    }
    if ((check_hlds__modecheck_goal__Cases0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__modecheck_goal__InstMap_15;

        check_hlds__modecheck_goal__Cases_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_goal__InstMap_15);
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_15, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__NonLocals_18;
        MR_Word check_hlds__modecheck_goal__Cases1_19;
        MR_Word check_hlds__modecheck_goal__InstMaps_20;
        MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_21;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27;
        MR_Word check_hlds__modecheck_goal__InstMaps_41;
        MR_Word check_hlds__modecheck_goal__ArmInstMaps_43;

        {
          check_hlds__modecheck_goal__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_11);
        }
        {
          check_hlds__modecheck_goal__modecheck_case_list_8_p_0(check_hlds__modecheck_goal__Cases0_10, check_hlds__modecheck_goal__Var_8, &check_hlds__modecheck_goal__Cases1_19, &check_hlds__modecheck_goal__InstMaps_20, check_hlds__modecheck_goal__NonLocals_18, &check_hlds__modecheck_goal__LargeFlatConstructs_21, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27);
        }
        {
          check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_21);
        }
        if (check_hlds__modecheck_goal__succeeded)
          {
            check_hlds__modecheck_goal__Cases_14 = check_hlds__modecheck_goal__Cases1_19;
            check_hlds__modecheck_goal__InstMaps_41 = check_hlds__modecheck_goal__InstMaps_20;
          }
        else
          {
            MR_Word check_hlds__modecheck_goal__TypeCtorInfo_29_54;
            MR_Word check_hlds__modecheck_goal__TypeCtorInfo_33_58;
            MR_Word check_hlds__modecheck_goal__LargeFlatConstructList_42;
            MR_Word check_hlds__modecheck_goal__V_44_44;
            MR_Word check_hlds__modecheck_goal__V_45_45;

            {
              check_hlds__modecheck_goal__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 3) = ((MR_Box) (check_hlds__modecheck_goal__LargeFlatConstructs_21));
            }
            check_hlds__modecheck_goal__TypeCtorInfo_29_54 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
            {
              mercury__list__map_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_29_54, check_hlds__modecheck_goal__TypeCtorInfo_29_54, check_hlds__modecheck_goal__V_44_44, check_hlds__modecheck_goal__Cases1_19, &check_hlds__modecheck_goal__Cases_14);
            }
            {
              check_hlds__modecheck_goal__LargeFlatConstructList_42 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_21);
            }
            {
              check_hlds__modecheck_goal__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[2])));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_45_45, 4) = ((MR_Box) (check_hlds__modecheck_goal__LargeFlatConstructList_42));
            }
            check_hlds__modecheck_goal__TypeCtorInfo_33_58 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
            {
              mercury__list__map_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_33_58, check_hlds__modecheck_goal__TypeCtorInfo_33_58, check_hlds__modecheck_goal__V_45_45, check_hlds__modecheck_goal__InstMaps_20, &check_hlds__modecheck_goal__InstMaps_41);
            }
          }
        {
          hlds__instmap__make_arm_instmaps_for_cases_3_p_0(check_hlds__modecheck_goal__Cases_14, check_hlds__modecheck_goal__InstMaps_41, &check_hlds__modecheck_goal__ArmInstMaps_43);
        }
        {
          hlds__instmap__instmap_merge_5_p_0(check_hlds__modecheck_goal__NonLocals_18, check_hlds__modecheck_goal__ArmInstMaps_43, (MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29);
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__modecheck_goal__GoalExpr_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Var_8));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_goal__CanFail_9));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_goal__Cases_14));
    }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_23);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_disj_list_7_p_0(
  MR_Word check_hlds__modecheck_goal__HeadVar__1_1,
  MR_Word * check_hlds__modecheck_goal__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_goal__HeadVar__3_3,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_5,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    if ((check_hlds__modecheck_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__modecheck_goal__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6;
        *check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_5 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4;
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_goal__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_goal__Goal_16;
        MR_Word check_hlds__modecheck_goal__Goals_17;
        MR_Word check_hlds__modecheck_goal__InstMap_18;
        MR_Word check_hlds__modecheck_goal__InstMaps_19;
        MR_Word check_hlds__modecheck_goal__InstMap0_22;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_28_28;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_goal__InstMap0_22);
        }
        {
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_goal__Goal0_14, &check_hlds__modecheck_goal__Goal_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27);
        }
        {
          check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4);
        }
        if (check_hlds__modecheck_goal__succeeded)
          check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_28_28 = check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4;
        else
          {
            MR_Word check_hlds__modecheck_goal__GoalLargeFlatConstructs_36;

            {
              check_hlds__modecheck_goal__GoalLargeFlatConstructs_36 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(check_hlds__modecheck_goal__Goal_16);
            }
            {
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__GoalLargeFlatConstructs_36, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_0_4, &check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_28_28);
            }
          }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__InstMap_18);
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap0_22, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29);
        }
        {
          check_hlds__modecheck_goal__modecheck_disj_list_7_p_0(check_hlds__modecheck_goal__Goals0_15, &check_hlds__modecheck_goal__Goals_17, &check_hlds__modecheck_goal__InstMaps_19, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_28_28, check_hlds__modecheck_goal__STATE_VARIABLE_LargeFlatConstructs_5, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_29, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__Goal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Goals_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__InstMap_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__InstMaps_19));
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2)
{
  {
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
    MR_Word check_hlds__modecheck_goal__conv1_HeadVar__4_4;

    {
      hlds__instmap__instmap_set_vars_same_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), &check_hlds__modecheck_goal__conv1_HeadVar__4_4);
    }
    *check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1(
  MR_Box check_hlds__modecheck_goal__closure_arg,
  MR_Box check_hlds__modecheck_goal__wrapper_arg_1,
  MR_Box * check_hlds__modecheck_goal__wrapper_arg_2)
{
  {
    MR_Box check_hlds__modecheck_goal__closure = check_hlds__modecheck_goal__closure_arg;
    MR_Word check_hlds__modecheck_goal__conv0_Goal_6;

    {
      check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_goal__wrapper_arg_1), &check_hlds__modecheck_goal__conv0_Goal_6);
    }
    *check_hlds__modecheck_goal__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_goal__conv0_Goal_6));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(
  MR_Word check_hlds__modecheck_goal__Disjuncts0_6,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_20,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28;

    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24);
    }
    if ((check_hlds__modecheck_goal__Disjuncts0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__modecheck_goal__InstMap_10;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_goal__GoalExpr_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__Disjuncts0_6));
        }
        {
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_goal__InstMap_10);
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_goal__InstMap_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__NonLocals_13;
        MR_Word check_hlds__modecheck_goal__Disjuncts1_14;
        MR_Word check_hlds__modecheck_goal__InstMaps_15;
        MR_Word check_hlds__modecheck_goal__LargeFlatConstructs_16;
        MR_Word check_hlds__modecheck_goal__Disjuncts2_17;
        MR_Word check_hlds__modecheck_goal__Disjuncts_18;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25;
        MR_Word check_hlds__modecheck_goal__V_27_27;
        MR_Word check_hlds__modecheck_goal__InstMaps_40;
        MR_Word check_hlds__modecheck_goal__ArmInstMaps_42;
        MR_Word check_hlds__modecheck_goal___GoalInfo_19;

        {
          check_hlds__modecheck_goal__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_goal__GoalInfo0_7);
        }
        {
          check_hlds__modecheck_goal__modecheck_disj_list_7_p_0(check_hlds__modecheck_goal__Disjuncts0_6, &check_hlds__modecheck_goal__Disjuncts1_14, &check_hlds__modecheck_goal__InstMaps_15, check_hlds__modecheck_goal__NonLocals_13, &check_hlds__modecheck_goal__LargeFlatConstructs_16, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_24_24, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25);
        }
        {
          check_hlds__modecheck_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_16);
        }
        if (check_hlds__modecheck_goal__succeeded)
          {
            check_hlds__modecheck_goal__Disjuncts2_17 = check_hlds__modecheck_goal__Disjuncts1_14;
            check_hlds__modecheck_goal__InstMaps_40 = check_hlds__modecheck_goal__InstMaps_15;
          }
        else
          {
            MR_Word check_hlds__modecheck_goal__TypeCtorInfo_29_53;
            MR_Word check_hlds__modecheck_goal__TypeCtorInfo_33_57;
            MR_Word check_hlds__modecheck_goal__LargeFlatConstructList_41;
            MR_Word check_hlds__modecheck_goal__V_43_43;
            MR_Word check_hlds__modecheck_goal__V_44_44;

            {
              check_hlds__modecheck_goal__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_43_43, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_43_43, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_43_43, 3) = ((MR_Box) (check_hlds__modecheck_goal__LargeFlatConstructs_16));
            }
            check_hlds__modecheck_goal__TypeCtorInfo_29_53 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            {
              mercury__list__map_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_29_53, check_hlds__modecheck_goal__TypeCtorInfo_29_53, check_hlds__modecheck_goal__V_43_43, check_hlds__modecheck_goal__Disjuncts1_14, &check_hlds__modecheck_goal__Disjuncts2_17);
            }
            {
              check_hlds__modecheck_goal__LargeFlatConstructList_41 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_goal__LargeFlatConstructs_16);
            }
            {
              check_hlds__modecheck_goal__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[2])));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_44_44, 4) = ((MR_Box) (check_hlds__modecheck_goal__LargeFlatConstructList_41));
            }
            check_hlds__modecheck_goal__TypeCtorInfo_33_57 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
            {
              mercury__list__map_3_p_0(check_hlds__modecheck_goal__TypeCtorInfo_33_57, check_hlds__modecheck_goal__TypeCtorInfo_33_57, check_hlds__modecheck_goal__V_44_44, check_hlds__modecheck_goal__InstMaps_15, &check_hlds__modecheck_goal__InstMaps_40);
            }
          }
        {
          hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__modecheck_goal__Disjuncts2_17, check_hlds__modecheck_goal__InstMaps_40, &check_hlds__modecheck_goal__ArmInstMaps_42);
        }
        {
          hlds__instmap__instmap_merge_5_p_0(check_hlds__modecheck_goal__NonLocals_13, check_hlds__modecheck_goal__ArmInstMaps_42, (MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28);
        }
        {
          hlds__goal_util__flatten_disj_2_p_0(check_hlds__modecheck_goal__Disjuncts2_17, &check_hlds__modecheck_goal__Disjuncts_18);
        }
        {
          hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__modecheck_goal__Disjuncts_18, check_hlds__modecheck_goal__GoalInfo0_7, &check_hlds__modecheck_goal__V_27_27);
        }
        *check_hlds__modecheck_goal__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_27_27, (MR_Integer) 0)));
        check_hlds__modecheck_goal___GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_27_27, (MR_Integer) 1)));
      }
    {
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_28, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21);
    }
  }
}

void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(
  MR_Word check_hlds__modecheck_goal__GoalExpr0_6,
  MR_Word check_hlds__modecheck_goal__GoalInfo0_7,
  MR_Word * check_hlds__modecheck_goal__GoalExpr_8,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;

    switch (MR_tag((MR_Word) check_hlds__modecheck_goal__GoalExpr0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__modecheck_goal__SubGoal0_38 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_goal__GoalExpr0_6), (MR_Integer) 0);

          {
            check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(check_hlds__modecheck_goal__SubGoal0_38, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_goal__LHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_goal__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
          MR_Word check_hlds__modecheck_goal__Unification0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));
          MR_Word check_hlds__modecheck_goal__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));
          MR_Word check_hlds__modecheck_goal___UniMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));

          {
            check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(check_hlds__modecheck_goal__LHS0_10, check_hlds__modecheck_goal__RHS0_11, check_hlds__modecheck_goal__Unification0_13, check_hlds__modecheck_goal__UnifyContext_14, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__modecheck_goal__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 0)));
          MR_Integer check_hlds__modecheck_goal__ProcId0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
          MR_Word check_hlds__modecheck_goal__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
          MR_Word check_hlds__modecheck_goal__MaybeCallUnifyContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));
          MR_Word check_hlds__modecheck_goal__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 5)));
          MR_Word check_hlds__modecheck_goal___Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));

          {
            check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(check_hlds__modecheck_goal__PredId_15, check_hlds__modecheck_goal__ProcId0_16, check_hlds__modecheck_goal__Args0_17, check_hlds__modecheck_goal__MaybeCallUnifyContext_19, check_hlds__modecheck_goal__PredName_20, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__modecheck_goal__GenericCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));
              MR_Word check_hlds__modecheck_goal__Args0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
              MR_Word check_hlds__modecheck_goal___MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));
              MR_Word check_hlds__modecheck_goal___Detism_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 5)));

              {
                check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(check_hlds__modecheck_goal__GenericCall_21, check_hlds__modecheck_goal__Args0_54, check_hlds__modecheck_goal__Modes0_22, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__modecheck_goal__Attributes_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__ExtraArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 5)));
              MR_Word check_hlds__modecheck_goal__MaybeTraceRuntimeCond_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 6)));
              MR_Word check_hlds__modecheck_goal__PragmaCode_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 7)));
              MR_Word check_hlds__modecheck_goal__PredId_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
              MR_Integer check_hlds__modecheck_goal__ProcId0_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));
              MR_Word check_hlds__modecheck_goal__Args0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));

              {
                check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(check_hlds__modecheck_goal__Attributes_25, check_hlds__modecheck_goal__PredId_55, check_hlds__modecheck_goal__ProcId0_56, check_hlds__modecheck_goal__Args0_57, check_hlds__modecheck_goal__ExtraArgs_26, check_hlds__modecheck_goal__MaybeTraceRuntimeCond_27, check_hlds__modecheck_goal__PragmaCode_28, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__modecheck_goal__ConjType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__Goals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));

              switch (check_hlds__modecheck_goal__ConjType_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__modecheck_goal__Goal_71;
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_74;
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_75;
                    MR_Word check_hlds__modecheck_goal__Goals_90;
                    MR_Word check_hlds__modecheck_goal___GoalInfo_89;

                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "par_conj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_74);
                    }
                    {
                      check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(check_hlds__modecheck_goal__ConjType_29, check_hlds__modecheck_goal__Goals_30, &check_hlds__modecheck_goal__Goals_90, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_21_74, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_75);
                    }
                    {
                      hlds__hlds_goal__par_conj_list_to_goal_3_p_0(check_hlds__modecheck_goal__Goals_90, check_hlds__modecheck_goal__GoalInfo0_7, &check_hlds__modecheck_goal__Goal_71);
                    }
                    *check_hlds__modecheck_goal__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_71, (MR_Integer) 0)));
                    check_hlds__modecheck_goal___GoalInfo_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal_71, (MR_Integer) 1)));
                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "par_conj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_22_75, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_81;
                    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_82;

                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "conj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_81);
                    }
                    if ((check_hlds__modecheck_goal__Goals_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        *check_hlds__modecheck_goal__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[1]);
                        check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_82 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_81;
                      }
                    else
                      {
                        MR_Word check_hlds__modecheck_goal__Goals_69;
                        MR_Word check_hlds__modecheck_goal__V_83_83;
                        MR_Word check_hlds__modecheck_goal___GoalInfo_70;

                        {
                          check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(check_hlds__modecheck_goal__ConjType_29, check_hlds__modecheck_goal__Goals_30, &check_hlds__modecheck_goal__Goals_69, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_28_81, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_82);
                        }
                        {
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__modecheck_goal__Goals_69, check_hlds__modecheck_goal__GoalInfo0_7, &check_hlds__modecheck_goal__V_83_83);
                        }
                        *check_hlds__modecheck_goal__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, (MR_Integer) 0)));
                        check_hlds__modecheck_goal___GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__V_83_83, (MR_Integer) 1)));
                      }
                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "conj", check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_29_82, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__modecheck_goal__Goals_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));

              {
                check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(check_hlds__modecheck_goal__Goals_58, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__modecheck_goal__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
              MR_Word check_hlds__modecheck_goal__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));

              {
                check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(check_hlds__modecheck_goal__Var_31, check_hlds__modecheck_goal__CanFail_32, check_hlds__modecheck_goal__Cases0_33, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__modecheck_goal__Reason_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__SubGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));

              {
                check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(check_hlds__modecheck_goal__Reason_39, check_hlds__modecheck_goal__SubGoal0_59, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__modecheck_goal__Vars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_goal__Cond0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 2)));
              MR_Word check_hlds__modecheck_goal__Then0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 3)));
              MR_Word check_hlds__modecheck_goal__Else0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 4)));

              {
                check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(check_hlds__modecheck_goal__Vars_34, check_hlds__modecheck_goal__Cond0_35, check_hlds__modecheck_goal__Then0_36, check_hlds__modecheck_goal__Else0_37, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__modecheck_goal__ShortHand0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_goal__GoalExpr0_6, (MR_Integer) 1)));

              {
                check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(check_hlds__modecheck_goal__ShortHand0_40, check_hlds__modecheck_goal__GoalInfo0_7, check_hlds__modecheck_goal__GoalExpr_8, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_42);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_4_p_0(
  MR_Word check_hlds__modecheck_goal__Goal0_5,
  MR_Word * check_hlds__modecheck_goal__Goal_6,
  MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool check_hlds__modecheck_goal__succeeded;
    MR_Word check_hlds__modecheck_goal__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_5, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_goal__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_goal__Goal0_5, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_goal__Context_10;
    MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14;
    MR_Word check_hlds__modecheck_goal__V_21_21;

    {
      check_hlds__modecheck_goal__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_goal__GoalInfo0_9);
    }
    {
      check_hlds__modecheck_goal__V_21_21 = mercury__term__context_init_0_f_0();
    }
    {
      check_hlds__modecheck_goal__succeeded = mercury__term____Unify____context_0_0(check_hlds__modecheck_goal__Context_10, check_hlds__modecheck_goal__V_21_21);
    }
    if (check_hlds__modecheck_goal__succeeded)
      check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14 = check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_12;
    else
      {
        check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__modecheck_goal__Context_10, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14);
      }
    {
      check_hlds__modecheck_goal__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_goal__GoalInfo0_9, (MR_Integer) 13);
    }
    if (check_hlds__modecheck_goal__succeeded)
      {
        MR_Word check_hlds__modecheck_goal__InDuplForSwitch_11;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17_17;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18_18;
        MR_Word check_hlds__modecheck_goal__InstMap0_29;
        MR_Word check_hlds__modecheck_goal__GoalExpr_30;
        MR_Word check_hlds__modecheck_goal__GoalInfo_31;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_32;

        {
          check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14, &check_hlds__modecheck_goal__InDuplForSwitch_11);
        }
        {
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17_17);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__modecheck_goal__InstMap0_29);
        }
        {
          check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(check_hlds__modecheck_goal__GoalExpr0_8, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__GoalExpr_30, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_32);
        }
        {
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__modecheck_goal__InstMap0_29, check_hlds__modecheck_goal__GoalExpr_30, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__GoalInfo_31, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_32, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__modecheck_goal__Goal_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_30));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_31));
        }
        {
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(check_hlds__modecheck_goal__InDuplForSwitch_11, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_13);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_goal__InstMap0_40;
        MR_Word check_hlds__modecheck_goal__GoalExpr_41;
        MR_Word check_hlds__modecheck_goal__GoalInfo_42;
        MR_Word check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_43;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14, &check_hlds__modecheck_goal__InstMap0_40);
        }
        {
          check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(check_hlds__modecheck_goal__GoalExpr0_8, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__GoalExpr_41, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_14_14, &check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_43);
        }
        {
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__modecheck_goal__InstMap0_40, check_hlds__modecheck_goal__GoalExpr_41, check_hlds__modecheck_goal__GoalInfo0_9, &check_hlds__modecheck_goal__GoalInfo_42, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_15_43, check_hlds__modecheck_goal__STATE_VARIABLE_ModeInfo_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__modecheck_goal__Goal_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_goal__GoalExpr_41));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_goal__GoalInfo_42));
        }
      }
  }
}

void mercury__check_hlds__modecheck_goal__init(void)
{
}

void mercury__check_hlds__modecheck_goal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0);
}

void mercury__check_hlds__modecheck_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.modecheck_goal. */
